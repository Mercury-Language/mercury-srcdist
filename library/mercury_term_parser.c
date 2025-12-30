/*
** Automatically generated from `mercury_term_parser.m'
** by the Mercury compiler,
** version rotd-2025-12-30
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


// :- module mercury_term_parser.
// :- implementation.

/*
INIT mercury__mercury_term_parser__init
ENDINIT
*/

#include "mercury_term_parser.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_expected_info_0_0[1];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_expected_info_0_0;

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_expected_info_0_1;

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_expected_info_0_0[1];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_expected_info_0_1[1];

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_expected_info_0[2];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_expected_info_0[2];

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_expected_info_0[2];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_0;

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_1;

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_2;

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_nest_close_token_0_0[3];

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_nest_close_token_0[1];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_nest_close_token_0[3];

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_nest_close_token_0[3];

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_nest_open_0_0[2];

static const MR_ConstString mercury__mercury_term_parser__mercury_term_parser__field_names_nest_open_0_0[2];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_0_0;

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_nest_open_0_0[1];

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_nest_open_0[1];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_nest_open_0[1];

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_nest_open_0[1];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_0;

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_1;

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_2;

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_nest_open_token_0_0[3];

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_nest_open_token_0[1];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_nest_open_token_0[3];

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_nest_open_token_0[3];

static const MR_FA_TypeInfo_Struct1 mercury__mercury_term_parser__stack__ti_stack_1mercury_term_parser__type_ctor_info_nest_open_0;

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_parse_result_1_0[1];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parse_result_1_0;

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_parse_result_1_1[1];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parse_result_1_1;

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parse_result_1_0[1];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parse_result_1_1[1];

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_parse_result_1[2];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_parse_result_1[2];

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_parse_result_1[2];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mercury_term_parser__varset__pti_varset_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mercury_term_parser__term__pti_var_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__mercury_term_parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_parser_state_2_0[5];

static const MR_ConstString mercury__mercury_term_parser__mercury_term_parser__field_names_parser_state_2_0[5];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parser_state_2_0;

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parser_state_2_0[1];

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_parser_state_2[1];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_parser_state_2[1];

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_parser_state_2[1];

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_pr_error_info_0_0[2];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_pr_error_info_0_0;

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_pr_error_info_0_1[1];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_pr_error_info_0_1;

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_pr_error_info_0_0[1];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_pr_error_info_0_1[1];

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_pr_error_info_0[2];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_pr_error_info_0[2];

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_pr_error_info_0[2];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_0;

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_read_term_1_1[2];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mercury_term_parser__varset__pti_varset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mercury_term_parser__term__pti_term_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_read_term_1_2[2];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_2;

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_read_term_1_0[1];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_read_term_1_1[1];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_read_term_1_2[1];

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_read_term_1[3];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_read_term_1[3];

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_read_term_1[3];

static const MR_FA_TypeInfo_Struct1 mercury__mercury_term_parser__mercury_term_parser__ti_read_term_1term__type_ctor_info_generic_0;

static const MR_EnumFunctorDesc mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_0;

static const MR_EnumFunctorDesc mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_1;

static const MR_EnumFunctorDesc mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_2;

static const MR_EnumFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__enum_ordinal_ordered_term_kind_0[3];

static const MR_EnumFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__enum_name_ordered_term_kind_0[3];

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_term_kind_0[3];

static void MR_CALL 
mercury__mercury_term_parser__parse_arg_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Word * Term_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_11,
  MR_Word * STATE_VARIABLE_TokensLeft_12,
  MR_Word STATE_VARIABLE_PS_0_13,
  MR_Word * STATE_VARIABLE_PS_14);

static void MR_CALL 
mercury__mercury_term_parser__parse_simple_term_8_p_0(
  MR_Word TypeInfo_for_T_216,
  MR_Word TypeClassInfo_for_op_table_215,
  MR_Word Token_9,
  MR_Integer Context_10,
  MR_Word Prec_11,
  MR_Word * TermParse_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_53,
  MR_Word * STATE_VARIABLE_TokensLeft_54,
  MR_Word STATE_VARIABLE_PS_0_55,
  MR_Word * STATE_VARIABLE_PS_56);

static void MR_CALL 
mercury__mercury_term_parser__do_parse_term_7_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word MinPriority_8,
  MR_Word TermKind_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_17,
  MR_Word * STATE_VARIABLE_TokensLeft_18,
  MR_Word STATE_VARIABLE_PS_0_19,
  MR_Word * STATE_VARIABLE_PS_20);

static void MR_CALL 
mercury__mercury_term_parser__parse_term_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Word * Term_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_11,
  MR_Word * STATE_VARIABLE_TokensLeft_12,
  MR_Word STATE_VARIABLE_PS_0_13,
  MR_Word * STATE_VARIABLE_PS_14);

static void MR_CALL 
mercury__mercury_term_parser__parse_higher_order_term_rest_7_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeClassInfo_for_op_table_33,
  MR_Word BaseTerm_8,
  MR_Integer Context_9,
  MR_Word * TermParse_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_20,
  MR_Word * STATE_VARIABLE_TokensLeft_21,
  MR_Word STATE_VARIABLE_PS_0_22,
  MR_Word * STATE_VARIABLE_PS_23);

static void MR_CALL 
mercury__mercury_term_parser__parse_rest_9_p_0(
  MR_Word TypeInfo_for_T_81,
  MR_Word TypeClassInfo_for_op_table_80,
  MR_Word MinPriority_10,
  MR_Word TermKind_11,
  MR_Word LeftPriority_12,
  MR_Word LeftTerm_13,
  MR_Word * Term_14,
  MR_Word STATE_VARIABLE_TokensLeft_0_40,
  MR_Word * STATE_VARIABLE_TokensLeft_41,
  MR_Word STATE_VARIABLE_PS_0_42,
  MR_Word * STATE_VARIABLE_PS_43);

static void MR_CALL 
mercury__mercury_term_parser__parse_list_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_op_table_18,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_12,
  MR_Word * STATE_VARIABLE_TokensLeft_13,
  MR_Word STATE_VARIABLE_PS_0_14,
  MR_Word * STATE_VARIABLE_PS_15);

static void MR_CALL 
mercury__mercury_term_parser__parse_args_5_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeClassInfo_for_op_table_39,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * STATE_VARIABLE_TokensLeft_20,
  MR_Word STATE_VARIABLE_PS_0_21,
  MR_Word * STATE_VARIABLE_PS_22);

static void MR_CALL 
mercury__mercury_term_parser__parse_special_atom_7_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeClassInfo_for_op_table_33,
  MR_String Atom_8,
  MR_Word TermContext_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * STATE_VARIABLE_TokensLeft_19,
  MR_Word STATE_VARIABLE_PS_0_20,
  MR_Word * STATE_VARIABLE_PS_21);

static void MR_CALL 
mercury__mercury_term_parser__parse_left_term_8_p_0(
  MR_Word TypeInfo_for_T_116,
  MR_Word TypeClassInfo_for_op_table_115,
  MR_Word MinPriority_9,
  MR_Word TermKind_10,
  MR_Word * OpPriority_11,
  MR_Word * Term_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_49,
  MR_Word * STATE_VARIABLE_TokensLeft_50,
  MR_Word STATE_VARIABLE_PS_0_51,
  MR_Word * STATE_VARIABLE_PS_52);

static void MR_CALL 
mercury__mercury_term_parser__could_start_term_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word NestOpen_4,
  MR_Word STATE_VARIABLE_ParserState_0_8,
  MR_Word * STATE_VARIABLE_ParserState_9);

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_String VarName_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_ParserState_0_13,
  MR_Word * STATE_VARIABLE_ParserState_14);

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word Term_3,
  MR_Word * ArgTerms_4);

static void MR_CALL 
mercury__mercury_term_parser__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_95_95_49_2_p_0(
  MR_Word Term_3,
  MR_Word * AddrOfArgTerms_17);

static MR_Word MR_CALL 
mercury__mercury_term_parser__lexer_size_to_term_size_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
mercury__mercury_term_parser__lexer_signedness_to_term_signedness_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
mercury__mercury_term_parser__lexer_base_to_term_base_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word CloseToken_6,
  MR_Integer CloseContext_7,
  MR_Word * MaybeErrorMsg_8,
  MR_Word STATE_VARIABLE_ParserState_0_20,
  MR_Word * STATE_VARIABLE_ParserState_21);

static MR_bool MR_CALL 
mercury__mercury_term_parser__open_close_pair_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_114_95_115_116_97_116_101_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_44_32_50_93_95_48_1_f_0(
  MR_Word ParserState_3);

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_op_table_73,
  MR_Word Token_8,
  MR_Integer Context_9,
  MR_Word ExpectedInfo_10,
  MR_Word * ErrorResult_11,
  MR_Word STATE_VARIABLE_TokensLeft_0_40,
  MR_Word * STATE_VARIABLE_TokensLeft_41,
  MR_Word PS_13);

static MR_bool MR_CALL 
mercury__mercury_term_parser__is_close_token_2_p_0(
  MR_Word Token_3,
  MR_Word * CloseToken_4);

static void MR_CALL 
mercury__mercury_term_parser__close_token_char_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Char * HeadVar__2_2);

static void MR_CALL 
mercury__mercury_term_parser__open_token_char_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Char * HeadVar__2_2);

static void MR_CALL 
mercury__mercury_term_parser__open_close_pair_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
mercury__mercury_term_parser__describe_all_open_nest_levels_1_f_0(
  MR_Word NestStack_3);

static MR_String MR_CALL 
mercury__mercury_term_parser__at_token_expected_2_f_0(
  MR_Word ExpectedInfo_4,
  MR_String Got_5);

static MR_bool MR_CALL 
mercury__mercury_term_parser__find_top_open_3_p_0(
  MR_Word SearchOpenToken_4,
  MR_Word STATE_VARIABLE_StackList_0_10,
  MR_Integer * OpenContext_6);

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_101_111_102_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word TypeClassInfo_for_op_table_18,
  MR_Word ExpectedInfo_4,
  MR_Word * Result_5,
  MR_Word PS_6);

static MR_Word MR_CALL 
mercury__mercury_term_parser__map__ho5_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__mercury_term_parser__LCMC__func__map__ho5__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15);

static void MR_CALL 
mercury__mercury_term_parser__describe_open_nest_levels_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mercury__mercury_term_parser__LCMC__pred__describe_open_nest_levels__1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_40);

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word ParserState_4,
  MR_Integer TokenContext_5,
  MR_Word * TermContext_6);

static MR_bool MR_CALL 
mercury__mercury_term_parser__check_priority_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mercury__mercury_term_parser__parse_backquoted_operator_7_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeClassInfo_for_op_table_28,
  MR_Word * MaybeQualifier_8,
  MR_String * OpName_9,
  MR_Word * VariableTerms_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * STATE_VARIABLE_TokensLeft_20,
  MR_Word STATE_VARIABLE_PS_0_21,
  MR_Word * STATE_VARIABLE_PS_22);

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(
  MR_Word TypeClassInfo_for_op_table_42,
  MR_Word MaybeQualifier0_10,
  MR_Word * MaybeQualifier_11,
  MR_Word OpCtxt0_12,
  MR_String OpName0_13,
  MR_String * OpName_14,
  MR_Word STATE_VARIABLE_TokensLeft_0_26,
  MR_Word * STATE_VARIABLE_TokensLeft_27,
  MR_Word STATE_VARIABLE_PS_0_28,
  MR_Word * STATE_VARIABLE_PS_29);

static void MR_CALL 
mercury__mercury_term_parser__get_last_token_context_loop_3_p_0(
  MR_Integer CurLastContext_4,
  MR_Word TokenList_5,
  MR_Integer * LastContext_6);

static void MR_CALL 
mercury__mercury_term_parser__check_for_bad_token_2_p_0(
  MR_Word TokenList_3,
  MR_Word * MaybeBadTokenMsg_4);

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____expected_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__mercury_term_parser____Compare____expected_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_close_token_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__mercury_term_parser____Compare____nest_close_token_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_open_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__mercury_term_parser____Compare____nest_open_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_open_token_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__mercury_term_parser____Compare____nest_open_token_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__mercury_term_parser____Compare____nest_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__mercury_term_parser____Compare____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____parser_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__mercury_term_parser____Compare____parser_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____pr_error_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__mercury_term_parser____Compare____pr_error_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____read_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__mercury_term_parser____Compare____read_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____read_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__mercury_term_parser____Compare____read_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____term_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__mercury_term_parser____Compare____term_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_1[3][2];

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_4[1][5];

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_5[15][1];

static /* final */ const MR_Integer mercury__mercury_term_parser_scalar_common_9[1][4];


struct mercury__mercury_term_parser__vector_common_type_6_0_s {
  const MR_Word mercury__mercury_term_parser__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mercury__mercury_term_parser__vector_common_type_6_0_s mercury__mercury_term_parser_vector_common_6[8];

struct mercury__mercury_term_parser__vector_common_type_7_0_s {
  const MR_Word mercury__mercury_term_parser__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__mercury_term_parser__vector_common_type_7_0_s mercury__mercury_term_parser_vector_common_7[10];

struct mercury__mercury_term_parser__vector_common_type_8_0_s {
  const MR_Word mercury__mercury_term_parser__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct mercury__mercury_term_parser__vector_common_type_8_0_s mercury__mercury_term_parser_vector_common_8[118];



static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_read_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Word) (((MR_Box) ((MR_Integer) 0))))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__mercury_term_parser_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__mercury_term_parser_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_5[15][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "an operator, or \140.\'")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "a token that can start of (sub)term")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) ".")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "\140)\', or an operator")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "\140}\', or an operator")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "\140,\', \140)\', or an operator")) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "a comma, or a \140)\'")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "[|]")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "\140]\', or an operator")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) "[]")) },
  /* row  12 */
  { ((MR_Box) ((MR_String) "comma, \140|\', \140]\', or an operator")) },
  /* row  13 */
  { ((MR_Box) ((MR_String) "\140,\', \140|\', or \140]\'")) },
  /* row  14 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Integer mercury__mercury_term_parser_scalar_common_9[1][4] = {
  /* row   0 */
  {
    (MR_Unsigned) 4286578719U,
    (MR_Unsigned) 4294967295U,
    (MR_Unsigned) 4294967295U,
    (MR_Unsigned) 4194303U
  },
};


static /* final */ const struct mercury__mercury_term_parser__vector_common_type_6_0_s mercury__mercury_term_parser_vector_common_6[8] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 0 },
  /* row   5 */   { (MR_Integer) 1 },
  /* row   6 */   { (MR_Integer) 2 },
  /* row   7 */   { (MR_Integer) 3 },
};

static /* final */ const struct mercury__mercury_term_parser__vector_common_type_7_0_s mercury__mercury_term_parser_vector_common_7[10] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 0 },
  /* row   6 */   { (MR_Integer) 1 },
  /* row   7 */   { (MR_Integer) 2 },
  /* row   8 */   { (MR_Integer) 3 },
  /* row   9 */   { (MR_Integer) 4 },
};

static /* final */ const struct mercury__mercury_term_parser__vector_common_type_8_0_s mercury__mercury_term_parser_vector_common_8[118] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 0 },
  /* row   4 */   { (MR_Integer) 0 },
  /* row   5 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   6 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   7 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   8 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   9 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  10 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  11 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  12 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  13 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  14 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  15 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  16 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  17 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  18 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  19 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  20 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  21 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  22 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  23 */   { (MR_Integer) 0 },
  /* row  24 */   { (MR_Integer) 13 },
  /* row  25 */   { (MR_Integer) 8 },
  /* row  26 */   { (MR_Integer) 10 },
  /* row  27 */   { (MR_Integer) 12 },
  /* row  28 */   { (MR_Integer) 7 },
  /* row  29 */   { (MR_Integer) 13 },
  /* row  30 */   { (MR_Integer) 8 },
  /* row  31 */   { (MR_Integer) 5 },
  /* row  32 */   { (MR_Integer) 5 },
  /* row  33 */   { (MR_Integer) 13 },
  /* row  34 */   { (MR_Integer) 13 },
  /* row  35 */   { (MR_Integer) 5 },
  /* row  36 */   { (MR_Integer) 13 },
  /* row  37 */   { (MR_Integer) 6 },
  /* row  38 */   { (MR_Integer) 9 },
  /* row  39 */   { (MR_Integer) 3 },
  /* row  40 */   { (MR_Integer) 4 },
  /* row  41 */   { (MR_Integer) 4 },
  /* row  42 */   { (MR_Integer) 4 },
  /* row  43 */   { (MR_Integer) 4 },
  /* row  44 */   { (MR_Integer) 4 },
  /* row  45 */   { (MR_Integer) 4 },
  /* row  46 */   { (MR_Integer) 4 },
  /* row  47 */   { (MR_Integer) 4 },
  /* row  48 */   { (MR_Integer) 4 },
  /* row  49 */   { (MR_Integer) 13 },
  /* row  50 */   { (MR_Integer) 5 },
  /* row  51 */   { (MR_Integer) 13 },
  /* row  52 */   { (MR_Integer) 13 },
  /* row  53 */   { (MR_Integer) 13 },
  /* row  54 */   { (MR_Integer) 13 },
  /* row  55 */   { (MR_Integer) 13 },
  /* row  56 */   { (MR_Integer) 2 },
  /* row  57 */   { (MR_Integer) 2 },
  /* row  58 */   { (MR_Integer) 2 },
  /* row  59 */   { (MR_Integer) 2 },
  /* row  60 */   { (MR_Integer) 2 },
  /* row  61 */   { (MR_Integer) 2 },
  /* row  62 */   { (MR_Integer) 2 },
  /* row  63 */   { (MR_Integer) 2 },
  /* row  64 */   { (MR_Integer) 2 },
  /* row  65 */   { (MR_Integer) 2 },
  /* row  66 */   { (MR_Integer) 2 },
  /* row  67 */   { (MR_Integer) 2 },
  /* row  68 */   { (MR_Integer) 2 },
  /* row  69 */   { (MR_Integer) 2 },
  /* row  70 */   { (MR_Integer) 2 },
  /* row  71 */   { (MR_Integer) 2 },
  /* row  72 */   { (MR_Integer) 2 },
  /* row  73 */   { (MR_Integer) 2 },
  /* row  74 */   { (MR_Integer) 2 },
  /* row  75 */   { (MR_Integer) 2 },
  /* row  76 */   { (MR_Integer) 2 },
  /* row  77 */   { (MR_Integer) 2 },
  /* row  78 */   { (MR_Integer) 2 },
  /* row  79 */   { (MR_Integer) 2 },
  /* row  80 */   { (MR_Integer) 2 },
  /* row  81 */   { (MR_Integer) 2 },
  /* row  82 */   { (MR_Integer) 5 },
  /* row  83 */   { (MR_Integer) 13 },
  /* row  84 */   { (MR_Integer) 5 },
  /* row  85 */   { (MR_Integer) 13 },
  /* row  86 */   { (MR_Integer) 2 },
  /* row  87 */   { (MR_Integer) 11 },
  /* row  88 */   { (MR_Integer) 1 },
  /* row  89 */   { (MR_Integer) 1 },
  /* row  90 */   { (MR_Integer) 1 },
  /* row  91 */   { (MR_Integer) 1 },
  /* row  92 */   { (MR_Integer) 1 },
  /* row  93 */   { (MR_Integer) 1 },
  /* row  94 */   { (MR_Integer) 1 },
  /* row  95 */   { (MR_Integer) 1 },
  /* row  96 */   { (MR_Integer) 1 },
  /* row  97 */   { (MR_Integer) 1 },
  /* row  98 */   { (MR_Integer) 1 },
  /* row  99 */   { (MR_Integer) 1 },
  /* row 100 */   { (MR_Integer) 1 },
  /* row 101 */   { (MR_Integer) 1 },
  /* row 102 */   { (MR_Integer) 1 },
  /* row 103 */   { (MR_Integer) 1 },
  /* row 104 */   { (MR_Integer) 1 },
  /* row 105 */   { (MR_Integer) 1 },
  /* row 106 */   { (MR_Integer) 1 },
  /* row 107 */   { (MR_Integer) 1 },
  /* row 108 */   { (MR_Integer) 1 },
  /* row 109 */   { (MR_Integer) 1 },
  /* row 110 */   { (MR_Integer) 1 },
  /* row 111 */   { (MR_Integer) 1 },
  /* row 112 */   { (MR_Integer) 1 },
  /* row 113 */   { (MR_Integer) 1 },
  /* row 114 */   { (MR_Integer) 5 },
  /* row 115 */   { (MR_Integer) 5 },
  /* row 116 */   { (MR_Integer) 5 },
  /* row 117 */   { (MR_Integer) 13 },
};


#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_expected_info_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_expected_info_0_0 = {
  (MR_String) "expected",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__mercury_term_parser__mercury_term_parser__field_types_expected_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_expected_info_0_1 = {
  (MR_String) "expect_at_start_of_term",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_expected_info_0_0[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_expected_info_0_1 };

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_expected_info_0_1[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_expected_info_0_0 };

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_expected_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_expected_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_expected_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_expected_info_0[2] = {
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_expected_info_0_1,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_expected_info_0_0
};

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_expected_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_expected_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__mercury_term_parser____Unify____expected_info_0_0_10001)),
  ((MR_Box) (mercury__mercury_term_parser____Compare____expected_info_0_0_10001)),
  (MR_String) "mercury_term_parser",
  (MR_String) "expected_info",
  { mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_expected_info_0 },
  { mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_expected_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__mercury_term_parser__mercury_term_parser__functor_number_map_expected_info_0,

};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_0 = {
  (MR_String) "close",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_1 = {
  (MR_String) "close_list",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_2 = {
  (MR_String) "close_curly",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_nest_close_token_0_0[3] = {
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_0,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_1,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_2
};

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_nest_close_token_0[1] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_nest_close_token_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(0)
  }
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_nest_close_token_0[3] = {
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_0,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_2,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_close_token_0_1
};

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_nest_close_token_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_close_token_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__mercury_term_parser____Unify____nest_close_token_0_0_10001)),
  ((MR_Box) (mercury__mercury_term_parser____Compare____nest_close_token_0_0_10001)),
  (MR_String) "mercury_term_parser",
  (MR_String) "nest_close_token",
  { mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_nest_close_token_0 },
  { mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_nest_close_token_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__mercury_term_parser__mercury_term_parser__functor_number_map_nest_close_token_0,

};

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_nest_open_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_token_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__mercury_term_parser__mercury_term_parser__field_names_nest_open_0_0[2] = {
  (MR_String) "open_token",
  (MR_String) "open_line"
};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_0_0 = {
  (MR_String) "nest_open",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__mercury_term_parser__mercury_term_parser__field_types_nest_open_0_0,
  mercury__mercury_term_parser__mercury_term_parser__field_names_nest_open_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_nest_open_0_0[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_0_0 };

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_nest_open_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_nest_open_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_nest_open_0[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_0_0 };

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_nest_open_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__mercury_term_parser____Unify____nest_open_0_0_10001)),
  ((MR_Box) (mercury__mercury_term_parser____Compare____nest_open_0_0_10001)),
  (MR_String) "mercury_term_parser",
  (MR_String) "nest_open",
  { mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_nest_open_0 },
  { mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_nest_open_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__mercury_term_parser__mercury_term_parser__functor_number_map_nest_open_0,

};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_0 = {
  (MR_String) "open",
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

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_1 = {
  (MR_String) "open_list",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_2 = {
  (MR_String) "open_curly",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_nest_open_token_0_0[3] = {
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_0,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_1,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_2
};

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_nest_open_token_0[1] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_nest_open_token_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(0)
  }
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_nest_open_token_0[3] = {
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_0,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_2,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_nest_open_token_0_1
};

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_nest_open_token_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_token_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__mercury_term_parser____Unify____nest_open_token_0_0_10001)),
  ((MR_Box) (mercury__mercury_term_parser____Compare____nest_open_token_0_0_10001)),
  (MR_String) "mercury_term_parser",
  (MR_String) "nest_open_token",
  { mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_nest_open_token_0 },
  { mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_nest_open_token_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__mercury_term_parser__mercury_term_parser__functor_number_map_nest_open_token_0,

};

static const MR_FA_TypeInfo_Struct1 mercury__mercury_term_parser__stack__ti_stack_1mercury_term_parser__type_ctor_info_nest_open_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  { (MR_TypeInfo) (&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_0) }
};

const MR_TypeCtorInfo_Struct mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_stack_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__mercury_term_parser____Unify____nest_stack_0_0_10001)),
  ((MR_Box) (mercury__mercury_term_parser____Compare____nest_stack_0_0_10001)),
  (MR_String) "mercury_term_parser",
  (MR_String) "nest_stack",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__stack__ti_stack_1mercury_term_parser__type_ctor_info_nest_open_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_parse_result_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parse_result_1_0 = {
  (MR_String) "pr_ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__mercury_term_parser__mercury_term_parser__field_types_parse_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_parse_result_1_1[1] = { (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_pr_error_info_0) };

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parse_result_1_1 = {
  (MR_String) "pr_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__mercury_term_parser__mercury_term_parser__field_types_parse_result_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parse_result_1_0[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parse_result_1_0 };

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parse_result_1_1[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parse_result_1_1 };

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_parse_result_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parse_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parse_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_parse_result_1[2] = {
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parse_result_1_1,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parse_result_1_0
};

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_parse_result_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_parse_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__mercury_term_parser____Unify____parse_result_1_0_10001)),
  ((MR_Box) (mercury__mercury_term_parser____Compare____parse_result_1_0_10001)),
  (MR_String) "mercury_term_parser",
  (MR_String) "parse_result",
  { mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_parse_result_1 },
  { mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_parse_result_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__mercury_term_parser__mercury_term_parser__functor_number_map_parse_result_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mercury_term_parser__varset__pti_varset_1__pseudo_2 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mercury_term_parser__term__pti_var_1__pseudo_2 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__mercury_term_parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__term__pti_var_1__pseudo_2)
  }
};

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_parser_state_2_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__varset__pti_varset_1__pseudo_2),
  (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2),
  (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__stack__ti_stack_1mercury_term_parser__type_ctor_info_nest_open_0)
};

static const MR_ConstString mercury__mercury_term_parser__mercury_term_parser__field_names_parser_state_2_0[5] = {
  (MR_String) "ps_stream_name",
  (MR_String) "ps_ops_table",
  (MR_String) "ps_varset",
  (MR_String) "ps_var_names",
  (MR_String) "ps_nest_stack"
};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parser_state_2_0 = {
  (MR_String) "parser_state",
  INT16_C(5),
  UINT16_C(14),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__mercury_term_parser__mercury_term_parser__field_types_parser_state_2_0,
  mercury__mercury_term_parser__mercury_term_parser__field_names_parser_state_2_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parser_state_2_0[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parser_state_2_0 };

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_parser_state_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parser_state_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_parser_state_2[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parser_state_2_0 };

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_parser_state_2[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_parser_state_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__mercury_term_parser____Unify____parser_state_2_0_10001)),
  ((MR_Box) (mercury__mercury_term_parser____Compare____parser_state_2_0_10001)),
  (MR_String) "mercury_term_parser",
  (MR_String) "parser_state",
  { mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_parser_state_2 },
  { mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_parser_state_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__mercury_term_parser__mercury_term_parser__functor_number_map_parser_state_2,

};

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_pr_error_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_pr_error_info_0_0 = {
  (MR_String) "pr_error_ctxt",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__mercury_term_parser__mercury_term_parser__field_types_pr_error_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_pr_error_info_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_pr_error_info_0_1 = {
  (MR_String) "pr_error_nil",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__mercury_term_parser__mercury_term_parser__field_types_pr_error_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_pr_error_info_0_0[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_pr_error_info_0_0 };

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_pr_error_info_0_1[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_pr_error_info_0_1 };

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_pr_error_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_pr_error_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_pr_error_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_pr_error_info_0[2] = {
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_pr_error_info_0_0,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_pr_error_info_0_1
};

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_pr_error_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_pr_error_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__mercury_term_parser____Unify____pr_error_info_0_0_10001)),
  ((MR_Box) (mercury__mercury_term_parser____Compare____pr_error_info_0_0_10001)),
  (MR_String) "mercury_term_parser",
  (MR_String) "pr_error_info",
  { mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_pr_error_info_0 },
  { mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_pr_error_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__mercury_term_parser__mercury_term_parser__functor_number_map_pr_error_info_0,

};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_0 = {
  (MR_String) "eof",
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

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_read_term_1_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_1 = {
  (MR_String) "error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__mercury_term_parser__mercury_term_parser__field_types_read_term_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mercury_term_parser__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mercury_term_parser__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_read_term_1_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__varset__pti_varset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__term__pti_term_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_2 = {
  (MR_String) "term",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__mercury_term_parser__mercury_term_parser__field_types_read_term_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_read_term_1_0[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_0 };

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_read_term_1_1[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_1 };

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_read_term_1_2[1] = { &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_2 };

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_read_term_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_read_term_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_read_term_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_read_term_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_read_term_1[3] = {
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_0,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_1,
  &mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_read_term_1_2
};

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_read_term_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_read_term_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__mercury_term_parser____Unify____read_term_1_0_10001)),
  ((MR_Box) (mercury__mercury_term_parser____Compare____read_term_1_0_10001)),
  (MR_String) "mercury_term_parser",
  (MR_String) "read_term",
  { mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_read_term_1 },
  { mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_read_term_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__mercury_term_parser__mercury_term_parser__functor_number_map_read_term_1,

};

static const MR_FA_TypeInfo_Struct1 mercury__mercury_term_parser__mercury_term_parser__ti_read_term_1term__type_ctor_info_generic_0 = {
  &mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_read_term_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

const MR_TypeCtorInfo_Struct mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_read_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__mercury_term_parser____Unify____read_term_0_0_10001)),
  ((MR_Box) (mercury__mercury_term_parser____Compare____read_term_0_0_10001)),
  (MR_String) "mercury_term_parser",
  (MR_String) "read_term",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__mercury_term_parser__ti_read_term_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_0 = {
  (MR_String) "ordinary_term",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_1 = {
  (MR_String) "argument",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_2 = {
  (MR_String) "list_elem",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__enum_ordinal_ordered_term_kind_0[3] = {
  &mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_0,
  &mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_1,
  &mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_2
};

static const MR_EnumFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__enum_name_ordered_term_kind_0[3] = {
  &mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_1,
  &mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_2,
  &mercury__mercury_term_parser__mercury_term_parser__enum_functor_desc_term_kind_0_0
};

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_term_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_term_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__mercury_term_parser____Unify____term_kind_0_0_10001)),
  ((MR_Box) (mercury__mercury_term_parser____Compare____term_kind_0_0_10001)),
  (MR_String) "mercury_term_parser",
  (MR_String) "term_kind",
  { mercury__mercury_term_parser__mercury_term_parser__enum_name_ordered_term_kind_0 },
  { mercury__mercury_term_parser__mercury_term_parser__enum_ordinal_ordered_term_kind_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__mercury_term_parser__mercury_term_parser__functor_number_map_term_kind_0,

};

void MR_CALL 
mercury__mercury_term_parser____Compare____term_kind_0_0(
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
mercury__mercury_term_parser____Unify____term_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__mercury_term_parser____Compare____read_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____read_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__mercury_term_parser____Unify____read_term_1_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__mercury_term_parser____Compare____read_term_1_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;
              MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__mercury_term_parser____Compare____read_term_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_23  = Res;
}
              succeeded = (Var_23 < (MR_Integer) 0);
              if (succeeded)
                SubResult1_6 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_23 == (MR_Integer) 0);
                if (succeeded)
                  SubResult1_6 = (MR_Integer) 0;
                else
                  SubResult1_6 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                succeeded = (ArgX2_7 < ArgY2_8);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX2_7 == ArgY2_8);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_11;

              mercury__varset____Compare____varset_1_0(TypeInfo_for_T_16, &SubResult1_11, ArgX1_9, ArgY1_10);
              succeeded = (SubResult1_11 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
                mercury__term____Compare____term_1_0(TypeInfo_for_T_16, HeadVar__1_1, ArgX2_12, ArgY2_13);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____read_term_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_12 == CastX_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = mercury__varset____Unify____varset_1_0(TypeInfo_for_T_15, ArgX1_7, ArgY1_8);
            if (succeeded)
              succeeded = mercury__term____Unify____term_1_0(TypeInfo_for_T_15, ArgX2_9, ArgY2_10);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__mercury_term_parser____Compare____parser_state_2_0(
  MR_Word TypeInfo_for_Ops_20,
  MR_Word TypeInfo_for_T_21,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;
    MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__mercury_term_parser____Compare____parser_state_2_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_31  = Res;
}
    succeeded = (Var_31 < (MR_Integer) 0);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_31 == (MR_Integer) 0);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0(TypeInfo_for_Ops_20, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__varset____Compare____varset_1_0(TypeInfo_for_T_21, &SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Word TypeInfo_27_27;

          {
            TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_21));
          }
          mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_27_27, &SubResult4_15, (MR_Word) (ArgX4_13), (MR_Word) (ArgY4_14));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____parser_state_2_0(
  MR_Word TypeInfo_for_Ops_15,
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeCtorInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_24_24;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Ops_15, ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__varset____Unify____varset_1_0(TypeInfo_for_T_16, ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeCtorInfo_19_19 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
          TypeCtorInfo_20_20 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
          {
            TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (TypeCtorInfo_20_20));
            MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_16));
          }
          succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_19_19, TypeInfo_21_21, (MR_Word) (ArgX4_9), (MR_Word) (ArgY4_10));
          if (succeeded)
          {
            TypeInfo_24_24 = (MR_Word) (&mercury__mercury_term_parser_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__mercury_term_parser____Compare____parse_result_1_0(
  MR_Word TypeInfo_for_T_10,
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mercury__mercury_term_parser____Compare____pr_error_info_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

void MR_CALL 
mercury__mercury_term_parser____Compare____pr_error_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          SubResult1_6 = (MR_Integer) 0;
        else
          SubResult1_6 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__mercury_term_parser____Compare____pr_error_info_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX2_7 ;
	S2 = ArgY2_8 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_18  = Res;
}
        succeeded = (Var_18 < (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_18 == (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 0;
          else
            *HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__mercury_term_parser____Compare____pr_error_info_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_9 ;
	S2 = ArgY1_10 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_16  = Res;
}
    succeeded = (Var_16 < (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_16 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____parse_result_1_0(
  MR_Word TypeInfo_for_T_9,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = mercury__mercury_term_parser____Unify____pr_error_info_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____pr_error_info_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4;
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
  }
  else
  {
    MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__mercury_term_parser____Compare____nest_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__mercury_term_parser____Compare____nest_open_token_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__mercury_term_lexer____Compare____raw_token_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

void MR_CALL 
mercury__mercury_term_parser____Compare____nest_open_0_0(
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
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Word Cast_HeadVar1_13 = (MR_Word) (ArgX1_4);
    MR_Word Cast_HeadVar2_14 = (MR_Word) (ArgY1_5);

    mercury__mercury_term_lexer____Compare____raw_token_0_0(&SubResult1_6, Cast_HeadVar1_13, Cast_HeadVar2_14);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_open_0_0(
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
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word Cast_HeadVar1_9 = (MR_Word) (ArgX1_3);
    MR_Word Cast_HeadVar2_10 = (MR_Word) (ArgY1_4);

    succeeded = mercury__mercury_term_lexer____Unify____raw_token_0_0(Cast_HeadVar1_9, Cast_HeadVar2_10);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
mercury__mercury_term_parser____Compare____nest_close_token_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__mercury_term_lexer____Compare____raw_token_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_close_token_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__mercury_term_lexer____Unify____raw_token_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__mercury_term_parser____Compare____expected_info_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__mercury_term_parser____Compare____expected_info_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_9  = Res;
}
    succeeded = (Var_9 < (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____expected_info_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__mercury_term_parser__parser_state_get_varset_1_f_0(
  MR_Word TypeInfo_for_Ops_9,
  MR_Word TypeInfo_for_T_10,
  MR_Word ParserState_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, ParserState_3, 2))));

  return X_4;
}

void MR_CALL 
mercury__mercury_term_parser__final_parser_state_2_p_0(
  MR_Word TypeInfo_for_Ops_5,
  MR_Word TypeInfo_for_T_6,
  MR_Word ParserState_3,
  MR_Word * VarSet_4)
{
  *VarSet_4 = ((MR_Word) ((MR_hl_field(0, ParserState_3, 2))));
}

void MR_CALL 
mercury__mercury_term_parser__init_parser_state_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeClassInfo_for_op_table_10,
  MR_Box Ops_4,
  MR_String FileName_5,
  MR_Word * ParserState_6)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *ParserState_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FileName_5));
    MR_hl_field(0, base, 1) = Ops_4;
    MR_hl_field(0, base, 2) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_2[2]));
    MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))));
  }
}

void MR_CALL 
mercury__mercury_term_parser__parse_tokens_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_String FileName_4,
  MR_Word Tokens_5,
  MR_Word * Result_6)
{
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_8, (MR_Word) (&mercury__mercury_term_parser_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), FileName_4, Tokens_5, Result_6);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_from_linestr_with_op_table_9_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeClassInfo_for_op_table_20,
  MR_Box Ops_10,
  MR_String FileName_11,
  MR_String String_12,
  MR_Integer Len_13,
  MR_Word StartLineContext_14,
  MR_Word * EndLineContext_15,
  MR_Word StartLinePosn_16,
  MR_Word * EndLinePosn_17,
  MR_Word * Result_18)
{
  MR_Word Tokens_19;

  mercury__mercury_term_lexer__linestr_get_token_list_max_7_p_0(String_12, Len_13, &Tokens_19, StartLineContext_14, EndLineContext_15, StartLinePosn_16, EndLinePosn_17);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_21, TypeClassInfo_for_op_table_20, Ops_10, FileName_11, Tokens_19, Result_18);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_from_linestr_8_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_String FileName_9,
  MR_String String_10,
  MR_Integer Len_11,
  MR_Word StartLineContext_12,
  MR_Word * EndLineContext_13,
  MR_Word StartLinePosn_14,
  MR_Word * EndLinePosn_15,
  MR_Word * Result_16)
{
  MR_Word Tokens_20;

  mercury__mercury_term_lexer__linestr_get_token_list_max_7_p_0(String_10, Len_11, &Tokens_20, StartLineContext_12, EndLineContext_13, StartLinePosn_14, EndLinePosn_15);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_18, (MR_Word) (&mercury__mercury_term_parser_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), FileName_9, Tokens_20, Result_16);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_from_substring_with_op_table_7_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Box Ops_8,
  MR_String FileName_9,
  MR_String String_10,
  MR_Integer Len_11,
  MR_Word StartPos_12,
  MR_Word * EndPos_13,
  MR_Word * Result_14)
{
  MR_Word Tokens_15;

  mercury__mercury_term_lexer__string_get_token_list_max_5_p_0(String_10, Len_11, &Tokens_15, StartPos_12, EndPos_13);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, Ops_8, FileName_9, Tokens_15, Result_14);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_from_substring_6_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_String FileName_7,
  MR_String String_8,
  MR_Integer Len_9,
  MR_Word StartPos_10,
  MR_Word * EndPos_11,
  MR_Word * Result_12)
{
  MR_Word Tokens_16;

  mercury__mercury_term_lexer__string_get_token_list_max_5_p_0(String_8, Len_9, &Tokens_16, StartPos_10, EndPos_11);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__mercury_term_parser_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), FileName_7, Tokens_16, Result_12);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_from_string_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_op_table_13,
  MR_Box Ops_6,
  MR_String FileName_7,
  MR_String String_8,
  MR_Word * EndPos_9,
  MR_Word * Result_10)
{
  MR_Integer Len_11;
  MR_Word Tokens_18;

{
#define MR_PROC_LABEL mercury__mercury_term_parser__read_term_from_string_with_op_table_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_11  = Length;
}
  mercury__mercury_term_lexer__string_get_token_list_max_5_p_0(String_8, Len_11, &Tokens_18, (MR_Word) (&mercury__mercury_term_parser_scalar_common_2[1]), EndPos_9);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_14, TypeClassInfo_for_op_table_13, Ops_6, FileName_7, Tokens_18, Result_10);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_from_string_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_String FileName_5,
  MR_String String_6,
  MR_Word * EndPos_7,
  MR_Word * Result_8)
{
  MR_Integer Len_12;
  MR_Word Tokens_17;

{
#define MR_PROC_LABEL mercury__mercury_term_parser__read_term_from_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_12  = Length;
}
  mercury__mercury_term_lexer__string_get_token_list_max_5_p_0(String_6, Len_12, &Tokens_17, (MR_Word) (&mercury__mercury_term_parser_scalar_common_2[1]), EndPos_7);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_10, (MR_Word) (&mercury__mercury_term_parser_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), FileName_5, Tokens_17, Result_8);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_filename_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_op_table_14,
  MR_Box Ops_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  MR_Word Stream_10;
  MR_Box Var_16;

{
#define MR_PROC_LABEL mercury__mercury_term_parser__read_term_filename_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Var_16);
  mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, Stream_10, Ops_6, FileName_7, Result_8);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_filename_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__mercury_term_parser_scalar_common_1[0]), Stream_6, ((MR_Box) ((MR_Integer) 0)), FileName_7, Result_8);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_filename_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_Word Stream_8;
  MR_Box Var_13;

{
#define MR_PROC_LABEL mercury__mercury_term_parser__read_term_filename_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Var_13);
  mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__mercury_term_parser_scalar_common_1[0]), Stream_8, ((MR_Box) ((MR_Integer) 0)), FileName_5, Result_6);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_op_table_14,
  MR_Word Stream_6,
  MR_Box Ops_7,
  MR_Word * Result_8)
{
  MR_String FileName_10;
  MR_Box Var_16 = (MR_Box) (Stream_6);

  mercury__io__stream_db__stream_name_4_p_0(Var_16, &FileName_10);
  mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, Stream_6, Ops_7, FileName_10, Result_8);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_with_op_table_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeClassInfo_for_op_table_12,
  MR_Box Ops_5,
  MR_Word * Result_6)
{
  MR_Word Stream_8;
  MR_Box Var_14;
  MR_String FileName_15;

{
#define MR_PROC_LABEL mercury__mercury_term_parser__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Var_14);
  mercury__io__stream_db__stream_name_4_p_0(Var_14, &FileName_15);
  mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_13, TypeClassInfo_for_op_table_12, Stream_8, Ops_5, FileName_15, Result_6);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  MR_String FileName_8;
  MR_Box Var_15 = (MR_Box) (Stream_5);

  mercury__io__stream_db__stream_name_4_p_0(Var_15, &FileName_8);
  mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__mercury_term_parser_scalar_common_1[0]), Stream_5, ((MR_Box) ((MR_Integer) 0)), FileName_8, Result_6);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * Result_4)
{
  MR_Word Stream_6;
  MR_Box Var_11;
  MR_String FileName_12;

{
#define MR_PROC_LABEL mercury__mercury_term_parser__read_term_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	Var_11  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Var_11);
  mercury__io__stream_db__stream_name_4_p_0(Var_11, &FileName_12);
  mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_10, (MR_Word) (&mercury__mercury_term_parser_scalar_common_1[0]), Stream_6, ((MR_Box) ((MR_Integer) 0)), FileName_12, Result_4);
}

void MR_CALL 
mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_op_table_15,
  MR_Word Stream_7,
  MR_Box Ops_8,
  MR_String FileName_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word Tokens_12;
  MR_Word Var_18;
  MR_Integer Var_19;
  MR_Word Var_21;
  MR_Char Var_22;
  MR_Word Var_26;
  MR_Box Var_27;
  MR_Box Var_29 = (MR_Box) (Stream_7);

  mercury__io__primitives_read__read_char_code_2_6_p_0(Var_29, &Var_26, &Var_27, &Var_22);
  switch (Var_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Var_21 = (MR_Word) ((MR_Unsigned) 4U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_31;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_27, (MR_String) "read failed: ", &Var_31);
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_31));
        }
      }
      break;
    case (MR_Integer) 0:
      Var_21 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  switch (MR_tag((MR_Word) Var_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Var_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_25;

            if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 9))) <= ((MR_Unsigned) 117)))
              if ((((mercury__mercury_term_parser_scalar_common_9[0])[(((MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 9)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 9)) & (MR_Integer) 31))))))
              {
                Var_25 = ((&mercury__mercury_term_parser_vector_common_8[0 + (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 9)]))->mercury__mercury_term_parser__vector_common_type_8_0__vct_8_f_0;
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
            else
              succeeded = MR_FALSE;
            if (succeeded)
              mercury__mercury_term_lexer__execute_get_token_action_8_p_0(Stream_7, Var_22, Var_25, (MR_Integer) 1, &Var_18, &Var_19);
            else
            {
              MR_Box Var_34 = (MR_Box) (Stream_7);

{
#define MR_PROC_LABEL mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Var_34 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_19  = LineNum;
}
              {
                Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Var_18, 1) = ((MR_Box) (MR_Word) (Var_22));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Var_32 = (MR_Box) (Stream_7);

{
#define MR_PROC_LABEL mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Var_32 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_19  = LineNum;
}
            Var_18 = (MR_Word) ((MR_Unsigned) 40U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
        MR_Box Var_33 = (MR_Box) (Stream_7);

{
#define MR_PROC_LABEL mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Var_33 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_19  = LineNum;
}
        {
          Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_18, 1) = ((MR_Box) (Var_24));
        }
      }
      break;
  }
  mercury__mercury_term_lexer__get_token_list_loop_6_p_0(Stream_7, Var_18, Var_19, &Tokens_12);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_16, TypeClassInfo_for_op_table_15, Ops_8, FileName_9, Tokens_12, Result_10);
}

void MR_CALL 
mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Box Ops_5,
  MR_String FileName_6,
  MR_Word Tokens_7,
  MR_Word * Result_8)
{
  if ((Tokens_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ParserState0_12;
    MR_Word TermResult_13;
    MR_Word ParserState_14;
    MR_Word VarSet_15;

    {
      ParserState0_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ParserState0_12, 0) = ((MR_Box) (FileName_6));
      MR_hl_field(0, ParserState0_12, 1) = Ops_5;
      MR_hl_field(0, ParserState0_12, 2) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_2[2]));
      MR_hl_field(0, ParserState0_12, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ParserState0_12, 4) = ((MR_Box) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))));
    }
    mercury__mercury_term_parser__parse_whole_term_4_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, &TermResult_13, Tokens_7, ParserState0_12, &ParserState_14);
    VarSet_15 = ((MR_Word) ((MR_hl_field(0, ParserState_14, 2))));
    mercury__mercury_term_parser__check_for_errors_4_p_0(TypeInfo_for_T_17, TermResult_13, VarSet_15, Tokens_7, Result_8);
  }
}

void MR_CALL 
mercury__mercury_term_parser__parse_whole_term_4_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word TypeClassInfo_for_op_table_51,
  MR_Word * TermResult_5,
  MR_Word STATE_VARIABLE_TokensLeft_0_29,
  MR_Word STATE_VARIABLE_PS_0_30,
  MR_Word * STATE_VARIABLE_PS_31)
{
  MR_bool succeeded;
  MR_Word TermResult0_8;
  MR_Word STATE_VARIABLE_TokensLeft_1_32;
  MR_Word STATE_VARIABLE_PS_1_33;
  MR_Box OpTable_67 = (MR_hl_field(0, STATE_VARIABLE_PS_0_30, 1));
  MR_Word ArgPriority_68;
  MR_Word LeftPriority_76;
  MR_Word LeftTerm0_77;
  MR_Word STATE_VARIABLE_TokensLeft_1_80;
  MR_Word STATE_VARIABLE_PS_1_81;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_51, 0)), 12))));
  MR_Box conv1_ArgPriority_68;

  conv1_ArgPriority_68 = func_0(((MR_Box) (TypeClassInfo_for_op_table_51)), OpTable_67);
  ArgPriority_68 = ((MR_Word) (conv1_ArgPriority_68));
  mercury__mercury_term_parser__parse_left_term_8_p_0(TypeInfo_for_T_52, TypeClassInfo_for_op_table_51, ArgPriority_68, (MR_Integer) 0, &LeftPriority_76, &LeftTerm0_77, STATE_VARIABLE_TokensLeft_0_29, &STATE_VARIABLE_TokensLeft_1_80, STATE_VARIABLE_PS_0_30, &STATE_VARIABLE_PS_1_81);
  if (((MR_tag((MR_Word) LeftTerm0_77)) == (MR_Integer) 1))
  {
    TermResult0_8 = LeftTerm0_77;
    STATE_VARIABLE_TokensLeft_1_32 = STATE_VARIABLE_TokensLeft_1_80;
    STATE_VARIABLE_PS_1_33 = STATE_VARIABLE_PS_1_81;
  }
  else
  {
    MR_Word LeftTerm_78 = ((MR_Word) ((MR_hl_field(0, LeftTerm0_77, 0))));

    mercury__mercury_term_parser__parse_rest_9_p_0(TypeInfo_for_T_52, TypeClassInfo_for_op_table_51, ArgPriority_68, (MR_Integer) 0, LeftPriority_76, LeftTerm_78, &TermResult0_8, STATE_VARIABLE_TokensLeft_1_80, &STATE_VARIABLE_TokensLeft_1_32, STATE_VARIABLE_PS_1_81, &STATE_VARIABLE_PS_1_33);
  }
  if (((MR_tag((MR_Word) TermResult0_8)) == (MR_Integer) 1))
  {
    *TermResult_5 = TermResult0_8;
    *STATE_VARIABLE_PS_31 = STATE_VARIABLE_PS_1_33;
  }
  else
  if ((STATE_VARIABLE_TokensLeft_1_32 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word conv2_TermResult_5;

    mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_101_111_102_95_95_91_49_44_32_50_93_95_48_3_p_0(TypeClassInfo_for_op_table_51, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[0])), &conv2_TermResult_5, STATE_VARIABLE_PS_1_33);
    *TermResult_5 = (MR_Word) (conv2_TermResult_5);
    *STATE_VARIABLE_PS_31 = STATE_VARIABLE_PS_1_33;
  }
  else
  {
    MR_Word Token_10 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_32, 0))));
    MR_Integer Context_11 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_32, 1))));
    MR_Word STATE_VARIABLE_TokensLeft_2_34 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_32, 2))));

    succeeded = (Token_10 == (MR_Word) ((MR_Unsigned) 36U));
    if (succeeded)
      if ((STATE_VARIABLE_TokensLeft_2_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word NestStack_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_1_33, 4))));
        MR_Word Nests_13 = (MR_Word) (NestStack_12);

        if ((Nests_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *TermResult_5 = TermResult0_8;
          *STATE_VARIABLE_PS_31 = STATE_VARIABLE_PS_1_33;
        }
        else
        {
          MR_Word TopNest_14 = ((MR_Word) ((MR_hl_field(1, Nests_13, 0))));
          MR_Word TopNestToken_16 = ((MR_Word) ((MR_hl_field(0, TopNest_14, 0))));
          MR_String OpenName_18;
          MR_String ErrorMsg0_19;
          MR_String ErrorMsg_20;
          MR_Word PrError_21;
          MR_String Var_39;
          MR_String Var_62;
          MR_Word Nests_87;
          MR_Word RevNests_88;
          MR_Word NestDescs_89;
          MR_Word Var_91;
          MR_String Var_96;
          MR_Box Var_97;
          MR_Word Var_98;
          MR_Word Var_99;

          switch (MR_unmkbody(TopNestToken_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              OpenName_18 = (MR_String) "parenthesis";
              break;
            case (MR_Integer) 3:
              OpenName_18 = (MR_String) "bracket";
              break;
            case (MR_Integer) 5:
              OpenName_18 = (MR_String) "curly bracket";
              break;
          }
          mercury__string__append_3_p_2(OpenName_18, (MR_String) ".", &Var_62);
          mercury__string__append_3_p_2((MR_String) "Syntax error: end-of-term with unclosed ", Var_62, &ErrorMsg0_19);
          Nests_87 = (MR_Word) (NestStack_12);
          mercury__list__reverse_2_p_0((MR_Word) (&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_0), Nests_87, &RevNests_88);
          mercury__mercury_term_parser__describe_open_nest_levels_2_p_0(RevNests_88, &NestDescs_89);
          Var_91 = mercury__mercury_term_parser__map__ho5_2_f_in__list_0(NestDescs_89);
          mercury__string__unsafe_append_string_pieces_2_p_0(Var_91, &Var_39);
          mercury__string__append_3_p_2(ErrorMsg0_19, Var_39, &ErrorMsg_20);
          {
            PrError_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PrError_21, 0) = ((MR_Box) (Context_11));
            MR_hl_field(0, PrError_21, 1) = ((MR_Box) (ErrorMsg_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *TermResult_5 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (PrError_21));
          }
          Var_96 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_1_33, 0))));
          Var_97 = (MR_hl_field(0, STATE_VARIABLE_PS_1_33, 1));
          Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_1_33, 2))));
          Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_1_33, 3))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_PS_31 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_96));
            MR_hl_field(0, base, 1) = Var_97;
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_98));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_99));
            MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))));
          }
        }
      }
      else
      {
        MR_Word NextToken_23 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_2_34, 0))));
        MR_Integer NextContext_24 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_2_34, 1))));
        MR_String NextTokenStr_26;
        MR_Word Var_45;
        MR_String ErrorMsg_50;
        MR_String Var_65;
        MR_Word Var_82 = (MR_Word) (NextToken_23);

        mercury__mercury_term_lexer__raw_token_to_string_2_p_0(Var_82, &NextTokenStr_26);
        mercury__string__append_3_p_2(NextTokenStr_26, (MR_String) " after the end of term.", &Var_65);
        mercury__string__append_3_p_2((MR_String) "Syntax error: unexpected ", Var_65, &ErrorMsg_50);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_45, 0) = ((MR_Box) (NextContext_24));
          MR_hl_field(0, Var_45, 1) = ((MR_Box) (ErrorMsg_50));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *TermResult_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_45));
        }
        *STATE_VARIABLE_PS_31 = STATE_VARIABLE_PS_1_33;
      }
    else
    {
      MR_Word Var_27;
      MR_Word conv3_TermResult_5;

      mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_51, Token_10, Context_11, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[0])), &conv3_TermResult_5, STATE_VARIABLE_TokensLeft_2_34, &Var_27, STATE_VARIABLE_PS_1_33);
      *TermResult_5 = (MR_Word) (conv3_TermResult_5);
      *STATE_VARIABLE_PS_31 = STATE_VARIABLE_PS_1_33;
    }
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_arg_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Word * Term_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_11,
  MR_Word * STATE_VARIABLE_TokensLeft_12,
  MR_Word STATE_VARIABLE_PS_0_13,
  MR_Word * STATE_VARIABLE_PS_14)
{
  MR_Box OpTable_9 = (MR_hl_field(0, STATE_VARIABLE_PS_0_13, 1));
  MR_Word ArgPriority_10;
  MR_Word LeftPriority_24;
  MR_Word LeftTerm0_25;
  MR_Word STATE_VARIABLE_TokensLeft_1_28;
  MR_Word STATE_VARIABLE_PS_1_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_16, 0)), 12))));
  MR_Box conv1_ArgPriority_10;

  conv1_ArgPriority_10 = func_0(((MR_Box) (TypeClassInfo_for_op_table_16)), OpTable_9);
  ArgPriority_10 = ((MR_Word) (conv1_ArgPriority_10));
  mercury__mercury_term_parser__parse_left_term_8_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, ArgPriority_10, (MR_Integer) 1, &LeftPriority_24, &LeftTerm0_25, STATE_VARIABLE_TokensLeft_0_11, &STATE_VARIABLE_TokensLeft_1_28, STATE_VARIABLE_PS_0_13, &STATE_VARIABLE_PS_1_29);
  if (((MR_tag((MR_Word) LeftTerm0_25)) == (MR_Integer) 1))
  {
    *Term_6 = LeftTerm0_25;
    *STATE_VARIABLE_TokensLeft_12 = STATE_VARIABLE_TokensLeft_1_28;
    *STATE_VARIABLE_PS_14 = STATE_VARIABLE_PS_1_29;
  }
  else
  {
    MR_Word LeftTerm_26 = ((MR_Word) ((MR_hl_field(0, LeftTerm0_25, 0))));

    mercury__mercury_term_parser__parse_rest_9_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, ArgPriority_10, (MR_Integer) 1, LeftPriority_24, LeftTerm_26, Term_6, STATE_VARIABLE_TokensLeft_1_28, STATE_VARIABLE_TokensLeft_12, STATE_VARIABLE_PS_1_29, STATE_VARIABLE_PS_14);
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_simple_term_8_p_0(
  MR_Word TypeInfo_for_T_216,
  MR_Word TypeClassInfo_for_op_table_215,
  MR_Word Token_9,
  MR_Integer Context_10,
  MR_Word Prec_11,
  MR_Word * TermParse_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_53,
  MR_Word * STATE_VARIABLE_TokensLeft_54,
  MR_Word STATE_VARIABLE_PS_0_55,
  MR_Word * STATE_VARIABLE_PS_56)
{
  MR_bool succeeded;
  MR_Word BaseTermParse_22;
  MR_Word STATE_VARIABLE_TokensLeft_2_61;
  MR_Word STATE_VARIABLE_PS_2_62;
  MR_Word BaseTermOpen_50;
  MR_Integer HoContext_51;
  MR_Word STATE_VARIABLE_TokensLeft_16_120;
  MR_Word Var_121;

  switch (MR_tag((MR_Word) Token_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Token_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word SubTermParse_37;
            MR_Word STATE_VARIABLE_PS_4_79;
            MR_Word STATE_VARIABLE_TokensLeft_4_80;
            MR_Word STATE_VARIABLE_PS_5_81;
            MR_Word NestOpen_147;

            {
              NestOpen_147 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NestOpen_147, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, NestOpen_147, 1) = ((MR_Box) (Context_10));
            }
            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(NestOpen_147, STATE_VARIABLE_PS_0_55, &STATE_VARIABLE_PS_4_79);
            mercury__mercury_term_parser__parse_term_5_p_0(TypeInfo_for_T_216, TypeClassInfo_for_op_table_215, &SubTermParse_37, STATE_VARIABLE_TokensLeft_0_53, &STATE_VARIABLE_TokensLeft_4_80, STATE_VARIABLE_PS_4_79, &STATE_VARIABLE_PS_5_81);
            if (((MR_tag((MR_Word) SubTermParse_37)) == (MR_Integer) 1))
            {
              BaseTermParse_22 = SubTermParse_37;
              STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_4_80;
              STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_5_81;
            }
            else
            if ((STATE_VARIABLE_TokensLeft_4_80 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word conv2_BaseTermParse_22;

              mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_101_111_102_95_95_91_49_44_32_50_93_95_48_3_p_0(TypeClassInfo_for_op_table_215, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[3])), &conv2_BaseTermParse_22, STATE_VARIABLE_PS_5_81);
              BaseTermParse_22 = (MR_Word) (conv2_BaseTermParse_22);
              STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_4_80;
              STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_5_81;
            }
            else
            {
              MR_Word NextToken_39 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_4_80, 0))));
              MR_Integer NextContext_40 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_4_80, 1))));
              MR_Word STATE_VARIABLE_TokensLeft_5_82 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_4_80, 2))));

              succeeded = (NextToken_39 == (MR_Word) ((MR_Unsigned) 8U));
              if (succeeded)
              {
                MR_Word MaybeErrorMsg_41;

                mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_5_p_0((MR_Word) ((MR_Unsigned) 8U), Context_10, &MaybeErrorMsg_41, STATE_VARIABLE_PS_5_81, &STATE_VARIABLE_PS_2_62);
                if ((MaybeErrorMsg_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  BaseTermParse_22 = SubTermParse_37;
                else
                {
                  MR_String ErrorMsg_42 = ((MR_String) ((MR_hl_field(1, MaybeErrorMsg_41, 0))));
                  MR_Word PrError_139;

                  {
                    PrError_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, PrError_139, 0) = ((MR_Box) (NextContext_40));
                    MR_hl_field(0, PrError_139, 1) = ((MR_Box) (ErrorMsg_42));
                  }
                  {
                    BaseTermParse_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, BaseTermParse_22, 0) = ((MR_Box) (PrError_139));
                  }
                }
                STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_5_82;
              }
              else
              {
                MR_Word conv3_BaseTermParse_22;

                mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_215, NextToken_39, NextContext_40, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[3])), &conv3_BaseTermParse_22, STATE_VARIABLE_TokensLeft_5_82, &STATE_VARIABLE_TokensLeft_2_61, STATE_VARIABLE_PS_5_81);
                BaseTermParse_22 = (MR_Word) (conv3_BaseTermParse_22);
                STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_5_81;
              }
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 4:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
          {
            MR_Word conv0_BaseTermParse_22;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_215, Token_9, Context_10, (MR_Word) ((MR_Unsigned) 0U), &conv0_BaseTermParse_22, STATE_VARIABLE_TokensLeft_0_53, &STATE_VARIABLE_TokensLeft_2_61, STATE_VARIABLE_PS_0_55);
            BaseTermParse_22 = (MR_Word) (conv0_BaseTermParse_22);
            STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_0_55;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TermContext_154;
            MR_Word STATE_VARIABLE_TokensLeft_7_90;
            MR_Word Var_91;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_55, Context_10, &TermContext_154);
            succeeded = (STATE_VARIABLE_TokensLeft_0_53 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_91 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_53, 0))));
              STATE_VARIABLE_TokensLeft_7_90 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_53, 2))));
              succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 16U));
            }
            if (succeeded)
              mercury__mercury_term_parser__parse_special_atom_7_p_0(TypeInfo_for_T_216, TypeClassInfo_for_op_table_215, (MR_String) "[]", TermContext_154, &BaseTermParse_22, STATE_VARIABLE_TokensLeft_7_90, &STATE_VARIABLE_TokensLeft_2_61, STATE_VARIABLE_PS_0_55, &STATE_VARIABLE_PS_2_62);
            else
            {
              MR_Word STATE_VARIABLE_PS_8_96;
              MR_Word NestOpen_151;

              {
                NestOpen_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NestOpen_151, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(0, NestOpen_151, 1) = ((MR_Box) (Context_10));
              }
              mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(NestOpen_151, STATE_VARIABLE_PS_0_55, &STATE_VARIABLE_PS_8_96);
              mercury__mercury_term_parser__parse_list_5_p_0(TypeInfo_for_T_216, TypeClassInfo_for_op_table_215, &BaseTermParse_22, STATE_VARIABLE_TokensLeft_0_53, &STATE_VARIABLE_TokensLeft_2_61, STATE_VARIABLE_PS_8_96, &STATE_VARIABLE_PS_2_62);
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TermContext_214;
            MR_Word STATE_VARIABLE_TokensLeft_10_99;
            MR_Word Var_100;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_55, Context_10, &TermContext_214);
            succeeded = (STATE_VARIABLE_TokensLeft_0_53 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_100 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_53, 0))));
              STATE_VARIABLE_TokensLeft_10_99 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_53, 2))));
              succeeded = (Var_100 == (MR_Word) ((MR_Unsigned) 24U));
            }
            if (succeeded)
              mercury__mercury_term_parser__parse_special_atom_7_p_0(TypeInfo_for_T_216, TypeClassInfo_for_op_table_215, (MR_String) "{}", TermContext_214, &BaseTermParse_22, STATE_VARIABLE_TokensLeft_10_99, &STATE_VARIABLE_TokensLeft_2_61, STATE_VARIABLE_PS_0_55, &STATE_VARIABLE_PS_2_62);
            else
            {
              MR_Word STATE_VARIABLE_PS_11_105;
              MR_Word STATE_VARIABLE_TokensLeft_12_106;
              MR_Word STATE_VARIABLE_PS_12_107;
              MR_Word NestOpen_197;
              MR_Word SubTermParse_200;

              {
                NestOpen_197 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NestOpen_197, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(0, NestOpen_197, 1) = ((MR_Box) (Context_10));
              }
              mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(NestOpen_197, STATE_VARIABLE_PS_0_55, &STATE_VARIABLE_PS_11_105);
              mercury__mercury_term_parser__parse_term_5_p_0(TypeInfo_for_T_216, TypeClassInfo_for_op_table_215, &SubTermParse_200, STATE_VARIABLE_TokensLeft_0_53, &STATE_VARIABLE_TokensLeft_12_106, STATE_VARIABLE_PS_11_105, &STATE_VARIABLE_PS_12_107);
              if (((MR_tag((MR_Word) SubTermParse_200)) == (MR_Integer) 1))
              {
                BaseTermParse_22 = SubTermParse_200;
                STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_12_106;
                STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_12_107;
              }
              else
              {
                MR_Word SubTerm_44 = ((MR_Word) ((MR_hl_field(0, SubTermParse_200, 0))));
                MR_Word ArgTerms_45;

                mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(SubTerm_44, &ArgTerms_45);
                if ((STATE_VARIABLE_TokensLeft_12_106 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word conv4_BaseTermParse_22;

                  mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_101_111_102_95_95_91_49_44_32_50_93_95_48_3_p_0(TypeClassInfo_for_op_table_215, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[5])), &conv4_BaseTermParse_22, STATE_VARIABLE_PS_12_107);
                  BaseTermParse_22 = (MR_Word) (conv4_BaseTermParse_22);
                  STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_12_106;
                  STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_12_107;
                }
                else
                {
                  MR_Word STATE_VARIABLE_TokensLeft_13_108 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_12_106, 2))));
                  MR_Word NextToken_175 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_12_106, 0))));
                  MR_Integer NextContext_176 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_12_106, 1))));

                  succeeded = (NextToken_175 == (MR_Word) ((MR_Unsigned) 24U));
                  if (succeeded)
                  {
                    MR_Word MaybeErrorMsg_167;

                    mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_5_p_0((MR_Word) ((MR_Unsigned) 24U), NextContext_176, &MaybeErrorMsg_167, STATE_VARIABLE_PS_12_107, &STATE_VARIABLE_PS_2_62);
                    if ((MaybeErrorMsg_167 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word BaseTerm_159;

                      {
                        BaseTerm_159 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, BaseTerm_159, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[4]));
                        MR_hl_field(0, BaseTerm_159, 1) = ((MR_Box) (ArgTerms_45));
                        MR_hl_field(0, BaseTerm_159, 2) = ((MR_Box) (TermContext_214));
                      }
                      {
                        BaseTermParse_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, BaseTermParse_22, 0) = ((MR_Box) (BaseTerm_159));
                      }
                    }
                    else
                    {
                      MR_Word PrError_160;
                      MR_String ErrorMsg_161 = ((MR_String) ((MR_hl_field(1, MaybeErrorMsg_167, 0))));

                      {
                        PrError_160 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, PrError_160, 0) = ((MR_Box) (NextContext_176));
                        MR_hl_field(0, PrError_160, 1) = ((MR_Box) (ErrorMsg_161));
                      }
                      {
                        BaseTermParse_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, BaseTermParse_22, 0) = ((MR_Box) (PrError_160));
                      }
                    }
                    STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_13_108;
                  }
                  else
                  {
                    MR_Word conv5_BaseTermParse_22;

                    mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_215, NextToken_175, NextContext_176, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[5])), &conv5_BaseTermParse_22, STATE_VARIABLE_TokensLeft_13_108, &STATE_VARIABLE_TokensLeft_2_61, STATE_VARIABLE_PS_12_107);
                    BaseTermParse_22 = (MR_Word) (conv5_BaseTermParse_22);
                    STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_12_107;
                  }
                }
              }
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Atom_15 = ((MR_String) ((MR_hl_field(1, Token_9, 0))));
        MR_Word TermContext_16;
        MR_Word STATE_VARIABLE_TokensLeft_1_57;
        MR_Word Var_58;

        mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_55, Context_10, &TermContext_16);
        succeeded = (STATE_VARIABLE_TokensLeft_0_53 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_58 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_53, 0))));
          STATE_VARIABLE_TokensLeft_1_57 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_53, 2))));
          succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 4U));
        }
        if (succeeded)
        {
          MR_Word NestOpen_18;
          MR_Word ArgsParse_19;
          MR_Word STATE_VARIABLE_PS_1_60;

          {
            NestOpen_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NestOpen_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, NestOpen_18, 1) = ((MR_Box) (Context_10));
          }
          mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(NestOpen_18, STATE_VARIABLE_PS_0_55, &STATE_VARIABLE_PS_1_60);
          mercury__mercury_term_parser__parse_args_5_p_0(TypeInfo_for_T_216, TypeClassInfo_for_op_table_215, &ArgsParse_19, STATE_VARIABLE_TokensLeft_1_57, &STATE_VARIABLE_TokensLeft_2_61, STATE_VARIABLE_PS_1_60, &STATE_VARIABLE_PS_2_62);
          if (((MR_tag((MR_Word) ArgsParse_19)) == (MR_Integer) 1))
            BaseTermParse_22 = (MR_Word) (ArgsParse_19);
          else
          {
            MR_Word Args_20 = ((MR_Word) ((MR_hl_field(0, ArgsParse_19, 0))));
            MR_Word BaseTerm_21;
            MR_Word Var_63;

            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_63, 0) = ((MR_Box) (Atom_15));
            }
            {
              BaseTerm_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_21, 0) = ((MR_Box) (Var_63));
              MR_hl_field(0, BaseTerm_21, 1) = ((MR_Box) (Args_20));
              MR_hl_field(0, BaseTerm_21, 2) = ((MR_Box) (TermContext_16));
            }
            {
              BaseTermParse_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_22, 0) = ((MR_Box) (BaseTerm_21));
            }
          }
        }
        else
        {
          MR_Box OpTable_24 = (MR_hl_field(0, STATE_VARIABLE_PS_0_55, 1));
          MR_Word Var_64;

          succeeded = mercury__ops__is_op_2_p_0(TypeClassInfo_for_op_table_215, OpTable_24, Atom_15);
          if (succeeded)
          {
            Var_64 = mercury__ops__loosest_op_priority_1_f_0(TypeClassInfo_for_op_table_215, OpTable_24);
            succeeded = mercury__ops__priority_ge_2_p_0(Prec_11, Var_64);
          }
          if (succeeded)
          {
            MR_Word conv1_BaseTermParse_22;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_215, Token_9, Context_10, (MR_Word) ((MR_Unsigned) 0U), &conv1_BaseTermParse_22, STATE_VARIABLE_TokensLeft_0_53, &STATE_VARIABLE_TokensLeft_2_61, STATE_VARIABLE_PS_0_55);
            BaseTermParse_22 = (MR_Word) (conv1_BaseTermParse_22);
          }
          else
          {
            MR_Word Var_67;
            MR_Word BaseTerm_126;

            {
              Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_67, 0) = ((MR_Box) (Atom_15));
            }
            {
              BaseTerm_126 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_126, 0) = ((MR_Box) (Var_67));
              MR_hl_field(0, BaseTerm_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, BaseTerm_126, 2) = ((MR_Box) (TermContext_16));
            }
            {
              BaseTermParse_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_22, 0) = ((MR_Box) (BaseTerm_126));
            }
            STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_0_53;
          }
          STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_0_55;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String VarName_25 = ((MR_String) ((MR_hl_field(2, Token_9, 0))));
        MR_Word Var_26;
        MR_Word TermContext_129;
        MR_Word BaseTerm_130;

        mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_T_216, VarName_25, &Var_26, STATE_VARIABLE_PS_0_55, &STATE_VARIABLE_PS_2_62);
        mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_2_62, Context_10, &TermContext_129);
        {
          BaseTerm_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, BaseTerm_130, 0) = ((MR_Box) (Var_26));
          MR_hl_field(1, BaseTerm_130, 1) = ((MR_Box) (TermContext_129));
        }
        {
          BaseTermParse_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BaseTermParse_22, 0) = ((MR_Box) (BaseTerm_130));
        }
        STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_0_53;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Token_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LexerBase_27 = ((MR_Unsigned) ((MR_hl_field(3, Token_9, 1))) & (MR_Integer) 3);
            MR_Word Integer_28 = ((MR_Word) ((MR_hl_field(3, Token_9, 2))));
            MR_Word LexerSignedness_29 = ((((MR_Unsigned) ((MR_hl_field(3, Token_9, 3))) >> 3)) & (MR_Integer) 1);
            MR_Word LexerSize_30 = ((MR_Unsigned) ((MR_hl_field(3, Token_9, 3))) & (MR_Integer) 7);
            MR_Word Base_31;
            MR_Word Signedness_32;
            MR_Word Size_33;
            MR_Word Var_70;
            MR_Word TermContext_131;
            MR_Word BaseTerm_132;

            Base_31 = mercury__mercury_term_parser__lexer_base_to_term_base_1_f_0(LexerBase_27);
            Signedness_32 = mercury__mercury_term_parser__lexer_signedness_to_term_signedness_1_f_0(LexerSignedness_29);
            Size_33 = mercury__mercury_term_parser__lexer_size_to_term_size_1_f_0(LexerSize_30);
            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_55, Context_10, &TermContext_131);
            {
              Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_70, 0) = (MR_Box) ((MR_Unsigned) (Base_31));
              MR_hl_field(1, Var_70, 1) = ((MR_Box) (Integer_28));
              MR_hl_field(1, Var_70, 2) = (MR_Box) (((((MR_Unsigned) (Signedness_32) << 3)) | (MR_Unsigned) (Size_33)));
            }
            {
              BaseTerm_132 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_132, 0) = ((MR_Box) (Var_70));
              MR_hl_field(0, BaseTerm_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, BaseTerm_132, 2) = ((MR_Box) (TermContext_131));
            }
            {
              BaseTermParse_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_22, 0) = ((MR_Box) (BaseTerm_132));
            }
            STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_0_53;
            STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_0_55;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float Float_34 = MR_unbox_float((MR_hl_field(3, Token_9, 1)));
            MR_Word Var_72;
            MR_Word TermContext_133;
            MR_Word BaseTerm_134;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_55, Context_10, &TermContext_133);
            {
              Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_72, 1) = MR_box_float(Float_34);
            }
            {
              BaseTerm_134 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_134, 0) = ((MR_Box) (Var_72));
              MR_hl_field(0, BaseTerm_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, BaseTerm_134, 2) = ((MR_Box) (TermContext_133));
            }
            {
              BaseTermParse_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_22, 0) = ((MR_Box) (BaseTerm_134));
            }
            STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_0_53;
            STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_0_55;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String String_35 = ((MR_String) ((MR_hl_field(3, Token_9, 1))));
            MR_Word Var_74;
            MR_Word TermContext_135;
            MR_Word BaseTerm_136;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_55, Context_10, &TermContext_135);
            {
              Var_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_74, 0) = ((MR_Box) (String_35));
            }
            {
              BaseTerm_136 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_136, 0) = ((MR_Box) (Var_74));
              MR_hl_field(0, BaseTerm_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, BaseTerm_136, 2) = ((MR_Box) (TermContext_135));
            }
            {
              BaseTermParse_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_22, 0) = ((MR_Box) (BaseTerm_136));
            }
            STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_0_53;
            STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_0_55;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Name_36 = ((MR_String) ((MR_hl_field(3, Token_9, 1))));
            MR_Word Var_76;
            MR_Word TermContext_137;
            MR_Word BaseTerm_138;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_55, Context_10, &TermContext_137);
            {
              Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_76, 1) = ((MR_Box) (Name_36));
            }
            {
              BaseTerm_138 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_138, 0) = ((MR_Box) (Var_76));
              MR_hl_field(0, BaseTerm_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, BaseTerm_138, 2) = ((MR_Box) (TermContext_137));
            }
            {
              BaseTermParse_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_22, 0) = ((MR_Box) (BaseTerm_138));
            }
            STATE_VARIABLE_TokensLeft_2_61 = STATE_VARIABLE_TokensLeft_0_53;
            STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_0_55;
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
          {
            MR_Word conv0_BaseTermParse_22;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_215, Token_9, Context_10, (MR_Word) ((MR_Unsigned) 0U), &conv0_BaseTermParse_22, STATE_VARIABLE_TokensLeft_0_53, &STATE_VARIABLE_TokensLeft_2_61, STATE_VARIABLE_PS_0_55);
            BaseTermParse_22 = (MR_Word) (conv0_BaseTermParse_22);
            STATE_VARIABLE_PS_2_62 = STATE_VARIABLE_PS_0_55;
          }
          break;
      }
      break;
  }
  succeeded = ((MR_tag((MR_Word) BaseTermParse_22)) == (MR_Integer) 0);
  if (succeeded)
  {
    BaseTermOpen_50 = ((MR_Word) ((MR_hl_field(0, BaseTermParse_22, 0))));
    succeeded = (STATE_VARIABLE_TokensLeft_2_61 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_121 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_2_61, 0))));
      HoContext_51 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_2_61, 1))));
      STATE_VARIABLE_TokensLeft_16_120 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_2_61, 2))));
      succeeded = (Var_121 == (MR_Word) ((MR_Unsigned) 4U));
    }
  }
  if (succeeded)
  {
    MR_Word HoNestOpen_52;
    MR_Word STATE_VARIABLE_PS_14_123;

    {
      HoNestOpen_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HoNestOpen_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, HoNestOpen_52, 1) = ((MR_Box) (HoContext_51));
    }
    mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(HoNestOpen_52, STATE_VARIABLE_PS_2_62, &STATE_VARIABLE_PS_14_123);
    mercury__mercury_term_parser__parse_higher_order_term_rest_7_p_0(TypeInfo_for_T_216, TypeClassInfo_for_op_table_215, BaseTermOpen_50, Context_10, TermParse_12, STATE_VARIABLE_TokensLeft_16_120, STATE_VARIABLE_TokensLeft_54, STATE_VARIABLE_PS_14_123, STATE_VARIABLE_PS_56);
  }
  else
  {
    *TermParse_12 = BaseTermParse_22;
    *STATE_VARIABLE_PS_56 = STATE_VARIABLE_PS_2_62;
    *STATE_VARIABLE_TokensLeft_54 = STATE_VARIABLE_TokensLeft_2_61;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__do_parse_term_7_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word MinPriority_8,
  MR_Word TermKind_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_17,
  MR_Word * STATE_VARIABLE_TokensLeft_18,
  MR_Word STATE_VARIABLE_PS_0_19,
  MR_Word * STATE_VARIABLE_PS_20)
{
  MR_Word LeftPriority_13;
  MR_Word LeftTerm0_14;
  MR_Word STATE_VARIABLE_TokensLeft_1_21;
  MR_Word STATE_VARIABLE_PS_1_22;

  mercury__mercury_term_parser__parse_left_term_8_p_0(TypeInfo_for_T_24, TypeClassInfo_for_op_table_23, MinPriority_8, TermKind_9, &LeftPriority_13, &LeftTerm0_14, STATE_VARIABLE_TokensLeft_0_17, &STATE_VARIABLE_TokensLeft_1_21, STATE_VARIABLE_PS_0_19, &STATE_VARIABLE_PS_1_22);
  if (((MR_tag((MR_Word) LeftTerm0_14)) == (MR_Integer) 1))
  {
    *Term_10 = LeftTerm0_14;
    *STATE_VARIABLE_TokensLeft_18 = STATE_VARIABLE_TokensLeft_1_21;
    *STATE_VARIABLE_PS_20 = STATE_VARIABLE_PS_1_22;
  }
  else
  {
    MR_Word LeftTerm_15 = ((MR_Word) ((MR_hl_field(0, LeftTerm0_14, 0))));

    mercury__mercury_term_parser__parse_rest_9_p_0(TypeInfo_for_T_24, TypeClassInfo_for_op_table_23, MinPriority_8, TermKind_9, LeftPriority_13, LeftTerm_15, Term_10, STATE_VARIABLE_TokensLeft_1_21, STATE_VARIABLE_TokensLeft_18, STATE_VARIABLE_PS_1_22, STATE_VARIABLE_PS_20);
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_term_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Word * Term_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_11,
  MR_Word * STATE_VARIABLE_TokensLeft_12,
  MR_Word STATE_VARIABLE_PS_0_13,
  MR_Word * STATE_VARIABLE_PS_14)
{
  MR_Box OpTable_9 = (MR_hl_field(0, STATE_VARIABLE_PS_0_13, 1));
  MR_Word ArgPriority_10;
  MR_Word LeftPriority_24;
  MR_Word LeftTerm0_25;
  MR_Word STATE_VARIABLE_TokensLeft_1_28;
  MR_Word STATE_VARIABLE_PS_1_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_16, 0)), 12))));
  MR_Box conv1_ArgPriority_10;

  conv1_ArgPriority_10 = func_0(((MR_Box) (TypeClassInfo_for_op_table_16)), OpTable_9);
  ArgPriority_10 = ((MR_Word) (conv1_ArgPriority_10));
  mercury__mercury_term_parser__parse_left_term_8_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, ArgPriority_10, (MR_Integer) 0, &LeftPriority_24, &LeftTerm0_25, STATE_VARIABLE_TokensLeft_0_11, &STATE_VARIABLE_TokensLeft_1_28, STATE_VARIABLE_PS_0_13, &STATE_VARIABLE_PS_1_29);
  if (((MR_tag((MR_Word) LeftTerm0_25)) == (MR_Integer) 1))
  {
    *Term_6 = LeftTerm0_25;
    *STATE_VARIABLE_TokensLeft_12 = STATE_VARIABLE_TokensLeft_1_28;
    *STATE_VARIABLE_PS_14 = STATE_VARIABLE_PS_1_29;
  }
  else
  {
    MR_Word LeftTerm_26 = ((MR_Word) ((MR_hl_field(0, LeftTerm0_25, 0))));

    mercury__mercury_term_parser__parse_rest_9_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, ArgPriority_10, (MR_Integer) 0, LeftPriority_24, LeftTerm_26, Term_6, STATE_VARIABLE_TokensLeft_1_28, STATE_VARIABLE_TokensLeft_12, STATE_VARIABLE_PS_1_29, STATE_VARIABLE_PS_14);
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_higher_order_term_rest_7_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeClassInfo_for_op_table_33,
  MR_Word BaseTerm_8,
  MR_Integer Context_9,
  MR_Word * TermParse_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_20,
  MR_Word * STATE_VARIABLE_TokensLeft_21,
  MR_Word STATE_VARIABLE_PS_0_22,
  MR_Word * STATE_VARIABLE_PS_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TermContext_13;
    MR_Word ArgsParse_14;
    MR_Word STATE_VARIABLE_TokensLeft_1_24;
    MR_Word STATE_VARIABLE_PS_1_25;
    MR_String FileName_38 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_22, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      TermContext_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TermContext_13, 0) = ((MR_Box) (FileName_38));
      MR_hl_field(0, TermContext_13, 1) = ((MR_Box) (Context_9));
    }
    mercury__mercury_term_parser__parse_args_5_p_0(TypeInfo_for_T_34, TypeClassInfo_for_op_table_33, &ArgsParse_14, STATE_VARIABLE_TokensLeft_0_20, &STATE_VARIABLE_TokensLeft_1_24, STATE_VARIABLE_PS_0_22, &STATE_VARIABLE_PS_1_25);
    if (((MR_tag((MR_Word) ArgsParse_14)) == (MR_Integer) 1))
    {
      *TermParse_10 = (MR_Word) (ArgsParse_14);
      *STATE_VARIABLE_TokensLeft_21 = STATE_VARIABLE_TokensLeft_1_24;
      *STATE_VARIABLE_PS_23 = STATE_VARIABLE_PS_1_25;
    }
    else
    {
      MR_Word Args_15 = ((MR_Word) ((MR_hl_field(0, ArgsParse_14, 0))));
      MR_Word ApplyTerm_16;
      MR_Word Var_28;
      MR_Integer HoContext_17;
      MR_Word STATE_VARIABLE_TokensLeft_2_29;
      MR_Word Var_30;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (BaseTerm_8));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Args_15));
      }
      {
        ApplyTerm_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ApplyTerm_16, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[6]));
        MR_hl_field(0, ApplyTerm_16, 1) = ((MR_Box) (Var_28));
        MR_hl_field(0, ApplyTerm_16, 2) = ((MR_Box) (TermContext_13));
      }
      succeeded = (STATE_VARIABLE_TokensLeft_1_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_30 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_24, 0))));
        HoContext_17 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_24, 1))));
        STATE_VARIABLE_TokensLeft_2_29 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_24, 2))));
        succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 4U));
      }
      if (succeeded)
      {
        MR_Word HoNestOpen_18;
        MR_Word STATE_VARIABLE_PS_2_32;
        MR_Word NestStack0_43;
        MR_Word NestStack_44;
        MR_String Var_46;
        MR_Box Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word next_value_of_BaseTerm_8;
        MR_Word next_value_of_STATE_VARIABLE_TokensLeft_0_20;
        MR_Word next_value_of_STATE_VARIABLE_PS_0_22;

        {
          HoNestOpen_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HoNestOpen_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, HoNestOpen_18, 1) = ((MR_Box) (HoContext_17));
        }
        Var_46 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_1_25, 0))));
        Var_47 = (MR_hl_field(0, STATE_VARIABLE_PS_1_25, 1));
        Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_1_25, 2))));
        Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_1_25, 3))));
        NestStack0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_1_25, 4))));
        Var_50 = (MR_Word) (NestStack0_43);
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (HoNestOpen_18));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_50));
        }
        NestStack_44 = (MR_Word) (Var_51);
        {
          STATE_VARIABLE_PS_2_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_PS_2_32, 0) = ((MR_Box) (Var_46));
          MR_hl_field(0, STATE_VARIABLE_PS_2_32, 1) = Var_47;
          MR_hl_field(0, STATE_VARIABLE_PS_2_32, 2) = ((MR_Box) (Var_48));
          MR_hl_field(0, STATE_VARIABLE_PS_2_32, 3) = ((MR_Box) (Var_49));
          MR_hl_field(0, STATE_VARIABLE_PS_2_32, 4) = ((MR_Box) (NestStack_44));
        }
        // direct tailcall eliminated
        ;
        next_value_of_BaseTerm_8 = ApplyTerm_16;
        next_value_of_STATE_VARIABLE_TokensLeft_0_20 = STATE_VARIABLE_TokensLeft_2_29;
        next_value_of_STATE_VARIABLE_PS_0_22 = STATE_VARIABLE_PS_2_32;
        BaseTerm_8 = next_value_of_BaseTerm_8;
        STATE_VARIABLE_TokensLeft_0_20 = next_value_of_STATE_VARIABLE_TokensLeft_0_20;
        STATE_VARIABLE_PS_0_22 = next_value_of_STATE_VARIABLE_PS_0_22;
        continue;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *TermParse_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ApplyTerm_16));
        }
        *STATE_VARIABLE_PS_23 = STATE_VARIABLE_PS_1_25;
        *STATE_VARIABLE_TokensLeft_21 = STATE_VARIABLE_TokensLeft_1_24;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_rest_9_p_0(
  MR_Word TypeInfo_for_T_81,
  MR_Word TypeClassInfo_for_op_table_80,
  MR_Word MinPriority_10,
  MR_Word TermKind_11,
  MR_Word LeftPriority_12,
  MR_Word LeftTerm_13,
  MR_Word * Term_14,
  MR_Word STATE_VARIABLE_TokensLeft_0_40,
  MR_Word * STATE_VARIABLE_TokensLeft_41,
  MR_Word STATE_VARIABLE_PS_0_42,
  MR_Word * STATE_VARIABLE_PS_43)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_TokensLeft_0_40 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer Context_18;
    MR_Word OpPriority_24;
    MR_Word RightGtOrGe_26;
    MR_Word MaybeQualifier_27;
    MR_String Op_28;
    MR_Word VariableTerms_29;
    MR_Word STATE_VARIABLE_PS_1_46;
    MR_Word STATE_VARIABLE_TokensLeft_3_47;
    MR_Word Token_17;
    MR_String Op0_19;
    MR_Word LeftGtOrGe_25;
    MR_Word STATE_VARIABLE_TokensLeft_1_44;
    MR_Unsigned Var_102;
    MR_Unsigned Var_103;
    MR_Unsigned Var_108;
    MR_Unsigned Var_109;
    MR_Word OpPriority0_21;
    MR_Word LeftGtOrGe0_22;
    MR_Word RightGtOrGe0_23;
    MR_Box OpTable_20;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
    MR_Box conv3_OpPriority0_21;
    MR_Box conv2_LeftGtOrGe0_22;
    MR_Box conv1_RightGtOrGe0_23;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Token_17 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_40, 0))));
      Context_18 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_40, 1))));
      STATE_VARIABLE_TokensLeft_1_44 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_40, 2))));
      switch (MR_tag((MR_Word) Token_17)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(Token_17)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 7:
              {
                succeeded = (TermKind_11 != (MR_Integer) 2);
                if (succeeded)
                {
                  Op0_19 = (MR_String) "|";
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 8:
              {
                succeeded = (TermKind_11 == (MR_Integer) 0);
                if (succeeded)
                {
                  Op0_19 = (MR_String) ",";
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            Op0_19 = ((MR_String) ((MR_hl_field(1, Token_17, 0))));
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        succeeded = (strcmp(Op0_19, (MR_String) "\140") == 0);
        if (succeeded)
        {
          OpTable_20 = (MR_hl_field(0, STATE_VARIABLE_PS_0_42, 1));
          func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_80, 0)), 11))));
          succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_80)), OpTable_20, &conv3_OpPriority0_21, &conv2_LeftGtOrGe0_22, &conv1_RightGtOrGe0_23);
          if (succeeded)
          {
            OpPriority0_21 = ((MR_Word) (conv3_OpPriority0_21));
            LeftGtOrGe0_22 = ((MR_Word) (conv2_LeftGtOrGe0_22));
            RightGtOrGe0_23 = ((MR_Word) (conv1_RightGtOrGe0_23));
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_TokensLeft_2_45;
          MR_Word Var_48;
          MR_String Var_49;

          OpPriority_24 = OpPriority0_21;
          LeftGtOrGe_25 = LeftGtOrGe0_22;
          RightGtOrGe_26 = RightGtOrGe0_23;
          succeeded = mercury__mercury_term_parser__parse_backquoted_operator_7_p_0(TypeInfo_for_T_81, TypeClassInfo_for_op_table_80, &MaybeQualifier_27, &Op_28, &VariableTerms_29, STATE_VARIABLE_TokensLeft_1_44, &STATE_VARIABLE_TokensLeft_2_45, STATE_VARIABLE_PS_0_42, &STATE_VARIABLE_PS_1_46);
          if (succeeded)
          {
            succeeded = (STATE_VARIABLE_TokensLeft_2_45 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_48 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_2_45, 0))));
              STATE_VARIABLE_TokensLeft_3_47 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_2_45, 2))));
              succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_49 = ((MR_String) ((MR_hl_field(1, Var_48, 0))));
                succeeded = (strcmp(Var_49, (MR_String) "\140") == 0);
              }
            }
          }
        }
        else
        {
          MR_Box OpTable_70;
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
          MR_Box conv7_OpPriority_24;
          MR_Box conv6_LeftGtOrGe_25;
          MR_Box conv5_RightGtOrGe_26;

          Op_28 = Op0_19;
          VariableTerms_29 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeQualifier_27 = (MR_Word) ((MR_Unsigned) 0U);
          OpTable_70 = (MR_hl_field(0, STATE_VARIABLE_PS_0_42, 1));
          func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_80, 0)), 5))));
          succeeded = func_4(((MR_Box) (TypeClassInfo_for_op_table_80)), OpTable_70, ((MR_Box) (Op_28)), &conv7_OpPriority_24, &conv6_LeftGtOrGe_25, &conv5_RightGtOrGe_26);
          if (succeeded)
          {
            OpPriority_24 = ((MR_Word) (conv7_OpPriority_24));
            LeftGtOrGe_25 = ((MR_Word) (conv6_LeftGtOrGe_25));
            RightGtOrGe_26 = ((MR_Word) (conv5_RightGtOrGe_26));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            STATE_VARIABLE_PS_1_46 = STATE_VARIABLE_PS_0_42;
            STATE_VARIABLE_TokensLeft_3_47 = STATE_VARIABLE_TokensLeft_1_44;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          Var_102 = (MR_Unsigned) (OpPriority_24);
          Var_103 = (MR_Unsigned) (MinPriority_10);
          succeeded = (Var_102 > Var_103);
          if (!(succeeded))
            succeeded = (Var_102 == Var_103);
          if (succeeded)
          {
            Var_108 = (MR_Unsigned) (OpPriority_24);
            Var_109 = (MR_Unsigned) (LeftPriority_12);
            switch (LeftGtOrGe_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                succeeded = (Var_109 >= Var_108);
                break;
              case (MR_Integer) 0:
                succeeded = (Var_109 > Var_108);
                break;
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word RightPriority_31;
      MR_Word RightTerm0_32;
      MR_Word STATE_VARIABLE_TokensLeft_4_50;
      MR_Word STATE_VARIABLE_PS_2_51;

      switch (RightGtOrGe_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          RightPriority_31 = OpPriority_24;
          break;
        case (MR_Integer) 0:
          RightPriority_31 = mercury__ops__increment_priority_1_f_0(OpPriority_24);
          break;
      }
      mercury__mercury_term_parser__do_parse_term_7_p_0(TypeInfo_for_T_81, TypeClassInfo_for_op_table_80, RightPriority_31, TermKind_11, &RightTerm0_32, STATE_VARIABLE_TokensLeft_3_47, &STATE_VARIABLE_TokensLeft_4_50, STATE_VARIABLE_PS_1_46, &STATE_VARIABLE_PS_2_51);
      if (((MR_tag((MR_Word) RightTerm0_32)) == (MR_Integer) 1))
      {
        *Term_14 = RightTerm0_32;
        *STATE_VARIABLE_TokensLeft_41 = STATE_VARIABLE_TokensLeft_4_50;
        *STATE_VARIABLE_PS_43 = STATE_VARIABLE_PS_2_51;
      }
      else
      {
        MR_Word TypeInfo_89_89;
        MR_Word RightTerm_33 = ((MR_Word) ((MR_hl_field(0, RightTerm0_32, 0))));
        MR_Word TermContext_34;
        MR_Word OpTermArgs0_35;
        MR_Word OpTerm0_36;
        MR_Word OpTerm_37;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_55;
        MR_Word conv8_OpTermArgs0_35;
        MR_Word next_value_of_LeftPriority_12;
        MR_Word next_value_of_LeftTerm_13;
        MR_Word next_value_of_STATE_VARIABLE_TokensLeft_0_40;
        MR_Word next_value_of_STATE_VARIABLE_PS_0_42;

        mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_2_51, Context_18, &TermContext_34);
        {
          TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_89_89, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(0, TypeInfo_89_89, 1) = ((MR_Box) (TypeInfo_for_T_81));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (RightTerm_33));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (LeftTerm_13));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
        }
        mercury__list__append_3_p_1(TypeInfo_89_89, (MR_Word) (VariableTerms_29), (MR_Word) (Var_52), &conv8_OpTermArgs0_35);
        OpTermArgs0_35 = (MR_Word) (conv8_OpTermArgs0_35);
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (Op_28));
        }
        {
          OpTerm0_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OpTerm0_36, 0) = ((MR_Box) (Var_55));
          MR_hl_field(0, OpTerm0_36, 1) = ((MR_Box) (OpTermArgs0_35));
          MR_hl_field(0, OpTerm0_36, 2) = ((MR_Box) (TermContext_34));
        }
        if ((MaybeQualifier_27 == (MR_Word) ((MR_Unsigned) 0U)))
          OpTerm_37 = OpTerm0_36;
        else
        {
          MR_Word QTerm_38 = ((MR_Word) ((MR_hl_field(1, MaybeQualifier_27, 0))));
          MR_Word Var_58;
          MR_Word Var_59;

          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (OpTerm0_36));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_58, 0) = ((MR_Box) (QTerm_38));
            MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            OpTerm_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OpTerm_37, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[2]));
            MR_hl_field(0, OpTerm_37, 1) = ((MR_Box) (Var_58));
            MR_hl_field(0, OpTerm_37, 2) = ((MR_Box) (TermContext_34));
          }
        }
        // direct tailcall eliminated
        ;
        next_value_of_LeftPriority_12 = OpPriority_24;
        next_value_of_LeftTerm_13 = OpTerm_37;
        next_value_of_STATE_VARIABLE_TokensLeft_0_40 = STATE_VARIABLE_TokensLeft_4_50;
        next_value_of_STATE_VARIABLE_PS_0_42 = STATE_VARIABLE_PS_2_51;
        LeftPriority_12 = next_value_of_LeftPriority_12;
        LeftTerm_13 = next_value_of_LeftTerm_13;
        STATE_VARIABLE_TokensLeft_0_40 = next_value_of_STATE_VARIABLE_TokensLeft_0_40;
        STATE_VARIABLE_PS_0_42 = next_value_of_STATE_VARIABLE_PS_0_42;
        continue;
      }
    }
    else
    {
      MR_Word STATE_VARIABLE_TokensLeft_6_63;
      MR_Integer Context_75;
      MR_Word OpPriority_77;
      MR_String Op_79;
      MR_Word Var_64;
      MR_Box OpTable_71;
      MR_Word LeftGtOrGe_72;

      succeeded = (STATE_VARIABLE_TokensLeft_0_40 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_64 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_40, 0))));
        Context_75 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_40, 1))));
        STATE_VARIABLE_TokensLeft_6_63 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_40, 2))));
        succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 1);
        if (succeeded)
        {
          Op_79 = ((MR_String) ((MR_hl_field(1, Var_64, 0))));
          OpTable_71 = (MR_hl_field(0, STATE_VARIABLE_PS_0_42, 1));
          succeeded = mercury__ops__lookup_postfix_op_4_p_0(TypeClassInfo_for_op_table_80, OpTable_71, Op_79, &OpPriority_77, &LeftGtOrGe_72);
          if (succeeded)
          {
            succeeded = mercury__ops__priority_ge_2_p_0(OpPriority_77, MinPriority_10);
            if (succeeded)
              succeeded = mercury__mercury_term_parser__check_priority_3_p_0(LeftGtOrGe_72, OpPriority_77, LeftPriority_12);
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word TermContext_73;
        MR_Word OpTerm_74;
        MR_Word next_value_of_LeftPriority_12;
        MR_Word next_value_of_LeftTerm_13;
        MR_Word next_value_of_STATE_VARIABLE_TokensLeft_0_40;

        mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_42, Context_75, &TermContext_73);
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_65, 0) = ((MR_Box) (Op_79));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (LeftTerm_13));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          OpTerm_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OpTerm_74, 0) = ((MR_Box) (Var_65));
          MR_hl_field(0, OpTerm_74, 1) = ((MR_Box) (Var_66));
          MR_hl_field(0, OpTerm_74, 2) = ((MR_Box) (TermContext_73));
        }
        // direct tailcall eliminated
        ;
        next_value_of_LeftPriority_12 = OpPriority_77;
        next_value_of_LeftTerm_13 = OpTerm_74;
        next_value_of_STATE_VARIABLE_TokensLeft_0_40 = STATE_VARIABLE_TokensLeft_6_63;
        LeftPriority_12 = next_value_of_LeftPriority_12;
        LeftTerm_13 = next_value_of_LeftTerm_13;
        STATE_VARIABLE_TokensLeft_0_40 = next_value_of_STATE_VARIABLE_TokensLeft_0_40;
        continue;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Term_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (LeftTerm_13));
        }
        *STATE_VARIABLE_PS_43 = STATE_VARIABLE_PS_0_42;
        *STATE_VARIABLE_TokensLeft_41 = STATE_VARIABLE_TokensLeft_0_40;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_list_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_op_table_18,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_12,
  MR_Word * STATE_VARIABLE_TokensLeft_13,
  MR_Word STATE_VARIABLE_PS_0_14,
  MR_Word * STATE_VARIABLE_PS_15)
{
  MR_bool succeeded;
  MR_Word Arg0_9;
  MR_Word STATE_VARIABLE_TokensLeft_1_16;
  MR_Word STATE_VARIABLE_PS_1_17;
  MR_Box OpTable_20;
  MR_Word ArgPriority_21;

  OpTable_20 = mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_114_95_115_116_97_116_101_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_44_32_50_93_95_48_1_f_0(STATE_VARIABLE_PS_0_14);
  ArgPriority_21 = mercury__ops__universal_priority_1_f_0(TypeClassInfo_for_op_table_18, OpTable_20);
  mercury__mercury_term_parser__do_parse_term_7_p_0(TypeInfo_for_T_19, TypeClassInfo_for_op_table_18, ArgPriority_21, (MR_Integer) 2, &Arg0_9, STATE_VARIABLE_TokensLeft_0_12, &STATE_VARIABLE_TokensLeft_1_16, STATE_VARIABLE_PS_0_14, &STATE_VARIABLE_PS_1_17);
  if (((MR_tag((MR_Word) Arg0_9)) == (MR_Integer) 1))
  {
    *List_6 = Arg0_9;
    *STATE_VARIABLE_TokensLeft_13 = STATE_VARIABLE_TokensLeft_1_16;
    *STATE_VARIABLE_PS_15 = STATE_VARIABLE_PS_1_17;
  }
  else
  {
    MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(0, Arg0_9, 0))));

    if ((STATE_VARIABLE_TokensLeft_1_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word conv0_List_6;

      mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_101_111_102_95_95_91_49_44_32_50_93_95_48_3_p_0(TypeClassInfo_for_op_table_18, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[13])), &conv0_List_6, STATE_VARIABLE_PS_1_17);
      *List_6 = (MR_Word) (conv0_List_6);
      *STATE_VARIABLE_TokensLeft_13 = STATE_VARIABLE_TokensLeft_1_16;
      *STATE_VARIABLE_PS_15 = STATE_VARIABLE_PS_1_17;
    }
    else
    {
      MR_Word Token_25 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_16, 0))));
      MR_Integer Context_26 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_16, 1))));
      MR_Word TermContext_27;
      MR_Word STATE_VARIABLE_TokensLeft_1_37 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_16, 2))));

      mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_1_17, Context_26, &TermContext_27);
      succeeded = (Token_25 == (MR_Word) ((MR_Unsigned) 32U));
      if (succeeded)
      {
        MR_Word Tail0_28;

        mercury__mercury_term_parser__parse_list_5_p_0(TypeInfo_for_T_19, TypeClassInfo_for_op_table_18, &Tail0_28, STATE_VARIABLE_TokensLeft_1_37, STATE_VARIABLE_TokensLeft_13, STATE_VARIABLE_PS_1_17, STATE_VARIABLE_PS_15);
        if (((MR_tag((MR_Word) Tail0_28)) == (MR_Integer) 1))
          *List_6 = Tail0_28;
        else
        {
          MR_Word Tail_29 = ((MR_Word) ((MR_hl_field(0, Tail0_28, 0))));
          MR_Word Term_30;
          MR_Word Var_40;
          MR_Word Var_41;

          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (Tail_29));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_40, 0) = ((MR_Box) (Arg_10));
            MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
          }
          {
            Term_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Term_30, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[9]));
            MR_hl_field(0, Term_30, 1) = ((MR_Box) (Var_40));
            MR_hl_field(0, Term_30, 2) = ((MR_Box) (TermContext_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *List_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Term_30));
          }
        }
      }
      else
      {
        succeeded = (Token_25 == (MR_Word) ((MR_Unsigned) 28U));
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_TokensLeft_3_43;
          MR_Word STATE_VARIABLE_PS_2_44;
          MR_Word Tail0_73;

          mercury__mercury_term_parser__parse_arg_5_p_0(TypeInfo_for_T_19, TypeClassInfo_for_op_table_18, &Tail0_73, STATE_VARIABLE_TokensLeft_1_37, &STATE_VARIABLE_TokensLeft_3_43, STATE_VARIABLE_PS_1_17, &STATE_VARIABLE_PS_2_44);
          if (((MR_tag((MR_Word) Tail0_73)) == (MR_Integer) 1))
          {
            *List_6 = Tail0_73;
            *STATE_VARIABLE_TokensLeft_13 = STATE_VARIABLE_TokensLeft_3_43;
            *STATE_VARIABLE_PS_15 = STATE_VARIABLE_PS_2_44;
          }
          else
          {
            MR_Word Tail_72 = ((MR_Word) ((MR_hl_field(0, Tail0_73, 0))));

            if ((STATE_VARIABLE_TokensLeft_3_43 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word conv1_List_6;

              mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_101_111_102_95_95_91_49_44_32_50_93_95_48_3_p_0(TypeClassInfo_for_op_table_18, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[10])), &conv1_List_6, STATE_VARIABLE_PS_2_44);
              *List_6 = (MR_Word) (conv1_List_6);
              *STATE_VARIABLE_TokensLeft_13 = STATE_VARIABLE_TokensLeft_3_43;
              *STATE_VARIABLE_PS_15 = STATE_VARIABLE_PS_2_44;
            }
            else
            {
              MR_Word NextToken_32 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_3_43, 0))));
              MR_Integer NextContext_33 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_3_43, 1))));
              MR_Word STATE_VARIABLE_TokensLeft_4_45 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_3_43, 2))));

              succeeded = (NextToken_32 == (MR_Word) ((MR_Unsigned) 16U));
              if (succeeded)
              {
                MR_Word MaybeErrorMsg_34;

                mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_5_p_0((MR_Word) ((MR_Unsigned) 16U), Context_26, &MaybeErrorMsg_34, STATE_VARIABLE_PS_2_44, STATE_VARIABLE_PS_15);
                if ((MaybeErrorMsg_34 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_49;
                  MR_Word Var_50;
                  MR_Word Term_71;

                  {
                    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Tail_72));
                    MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Arg_10));
                    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
                  }
                  {
                    Term_71 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Term_71, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[9]));
                    MR_hl_field(0, Term_71, 1) = ((MR_Box) (Var_49));
                    MR_hl_field(0, Term_71, 2) = ((MR_Box) (TermContext_27));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *List_6 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Term_71));
                  }
                }
                else
                {
                  MR_String ErrorMsg_35 = ((MR_String) ((MR_hl_field(1, MaybeErrorMsg_34, 0))));
                  MR_Word Var_52;

                  {
                    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_52, 0) = ((MR_Box) (Context_26));
                    MR_hl_field(0, Var_52, 1) = ((MR_Box) (ErrorMsg_35));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *List_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_52));
                  }
                }
                *STATE_VARIABLE_TokensLeft_13 = STATE_VARIABLE_TokensLeft_4_45;
              }
              else
              {
                MR_Word conv2_List_6;

                mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_18, NextToken_32, NextContext_33, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[10])), &conv2_List_6, STATE_VARIABLE_TokensLeft_4_45, STATE_VARIABLE_TokensLeft_13, STATE_VARIABLE_PS_2_44);
                *List_6 = (MR_Word) (conv2_List_6);
                *STATE_VARIABLE_PS_15 = STATE_VARIABLE_PS_2_44;
              }
            }
          }
        }
        else
        {
          succeeded = (Token_25 == (MR_Word) ((MR_Unsigned) 16U));
          if (succeeded)
          {
            MR_Word MaybeErrorMsg_77;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_5_p_0((MR_Word) ((MR_Unsigned) 16U), Context_26, &MaybeErrorMsg_77, STATE_VARIABLE_PS_1_17, STATE_VARIABLE_PS_15);
            if ((MaybeErrorMsg_77 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Tail_74;
              MR_Word Term_75;

              {
                Tail_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Tail_74, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[11]));
                MR_hl_field(0, Tail_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Tail_74, 2) = ((MR_Box) (TermContext_27));
              }
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (Tail_74));
                MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_63, 0) = ((MR_Box) (Arg_10));
                MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
              }
              {
                Term_75 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Term_75, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[9]));
                MR_hl_field(0, Term_75, 1) = ((MR_Box) (Var_63));
                MR_hl_field(0, Term_75, 2) = ((MR_Box) (TermContext_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *List_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Term_75));
              }
            }
            else
            {
              MR_Word Var_66;
              MR_String ErrorMsg_76 = ((MR_String) ((MR_hl_field(1, MaybeErrorMsg_77, 0))));

              {
                Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_66, 0) = ((MR_Box) (Context_26));
                MR_hl_field(0, Var_66, 1) = ((MR_Box) (ErrorMsg_76));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *List_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_66));
              }
            }
            *STATE_VARIABLE_TokensLeft_13 = STATE_VARIABLE_TokensLeft_1_37;
          }
          else
          {
            MR_Word conv3_List_6;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_18, Token_25, Context_26, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[12])), &conv3_List_6, STATE_VARIABLE_TokensLeft_1_37, STATE_VARIABLE_TokensLeft_13, STATE_VARIABLE_PS_1_17);
            *List_6 = (MR_Word) (conv3_List_6);
            *STATE_VARIABLE_PS_15 = STATE_VARIABLE_PS_1_17;
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_args_5_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeClassInfo_for_op_table_39,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * STATE_VARIABLE_TokensLeft_20,
  MR_Word STATE_VARIABLE_PS_0_21,
  MR_Word * STATE_VARIABLE_PS_22)
{
  MR_bool succeeded;
  MR_Word Arg0_9;
  MR_Word STATE_VARIABLE_TokensLeft_1_23;
  MR_Word STATE_VARIABLE_PS_1_24;
  MR_Box OpTable_51;
  MR_Word ArgPriority_52;

  OpTable_51 = mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_114_95_115_116_97_116_101_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_44_32_50_93_95_48_1_f_0(STATE_VARIABLE_PS_0_21);
  ArgPriority_52 = mercury__ops__universal_priority_1_f_0(TypeClassInfo_for_op_table_39, OpTable_51);
  mercury__mercury_term_parser__do_parse_term_7_p_0(TypeInfo_for_T_40, TypeClassInfo_for_op_table_39, ArgPriority_52, (MR_Integer) 1, &Arg0_9, STATE_VARIABLE_TokensLeft_0_19, &STATE_VARIABLE_TokensLeft_1_23, STATE_VARIABLE_PS_0_21, &STATE_VARIABLE_PS_1_24);
  if (((MR_tag((MR_Word) Arg0_9)) == (MR_Integer) 1))
  {
    *List_6 = (MR_Word) (Arg0_9);
    *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_1_23;
    *STATE_VARIABLE_PS_22 = STATE_VARIABLE_PS_1_24;
  }
  else
  {
    MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(0, Arg0_9, 0))));

    if ((STATE_VARIABLE_TokensLeft_1_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word conv0_List_6;

      mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_101_111_102_95_95_91_49_44_32_50_93_95_48_3_p_0(TypeClassInfo_for_op_table_39, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[8])), &conv0_List_6, STATE_VARIABLE_PS_1_24);
      *List_6 = (MR_Word) (conv0_List_6);
      *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_1_23;
      *STATE_VARIABLE_PS_22 = STATE_VARIABLE_PS_1_24;
    }
    else
    {
      MR_Word Token_11 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_23, 0))));
      MR_Integer Context_12 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_23, 1))));
      MR_Word STATE_VARIABLE_TokensLeft_2_25 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_23, 2))));

      succeeded = (Token_11 == (MR_Word) ((MR_Unsigned) 32U));
      if (succeeded)
      {
        MR_Word Tail0_13;

        mercury__mercury_term_parser__parse_args_5_p_0(TypeInfo_for_T_40, TypeClassInfo_for_op_table_39, &Tail0_13, STATE_VARIABLE_TokensLeft_2_25, STATE_VARIABLE_TokensLeft_20, STATE_VARIABLE_PS_1_24, STATE_VARIABLE_PS_22);
        if (((MR_tag((MR_Word) Tail0_13)) == (MR_Integer) 1))
          *List_6 = Tail0_13;
        else
        {
          MR_Word Tail_14 = ((MR_Word) ((MR_hl_field(0, Tail0_13, 0))));
          MR_Word Var_28;

          {
            Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_28, 0) = ((MR_Box) (Arg_10));
            MR_hl_field(1, Var_28, 1) = ((MR_Box) (Tail_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *List_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
          }
        }
      }
      else
      {
        succeeded = (Token_11 == (MR_Word) ((MR_Unsigned) 8U));
        if (succeeded)
        {
          MR_Word MaybeErrorMsg_16;

          mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_5_p_0((MR_Word) ((MR_Unsigned) 8U), Context_12, &MaybeErrorMsg_16, STATE_VARIABLE_PS_1_24, STATE_VARIABLE_PS_22);
          if ((MaybeErrorMsg_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_31;

            {
              Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_31, 0) = ((MR_Box) (Arg_10));
              MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *List_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
            }
          }
          else
          {
            MR_String ErrorMsg_17 = ((MR_String) ((MR_hl_field(1, MaybeErrorMsg_16, 0))));
            MR_Word Var_33;

            {
              Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_33, 0) = ((MR_Box) (Context_12));
              MR_hl_field(0, Var_33, 1) = ((MR_Box) (ErrorMsg_17));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *List_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
            }
          }
          *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_2_25;
        }
        else
        {
          MR_Word conv1_List_6;

          mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_39, Token_11, Context_12, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[7])), &conv1_List_6, STATE_VARIABLE_TokensLeft_2_25, STATE_VARIABLE_TokensLeft_20, STATE_VARIABLE_PS_1_24);
          *List_6 = (MR_Word) (conv1_List_6);
          *STATE_VARIABLE_PS_22 = STATE_VARIABLE_PS_1_24;
        }
      }
    }
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_special_atom_7_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeClassInfo_for_op_table_33,
  MR_String Atom_8,
  MR_Word TermContext_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * STATE_VARIABLE_TokensLeft_19,
  MR_Word STATE_VARIABLE_PS_0_20,
  MR_Word * STATE_VARIABLE_PS_21)
{
  MR_bool succeeded = (STATE_VARIABLE_TokensLeft_0_18 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Context_13;
  MR_Word STATE_VARIABLE_TokensLeft_1_22;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_23 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_18, 0))));
    Context_13 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_18, 1))));
    STATE_VARIABLE_TokensLeft_1_22 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_18, 2))));
    succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 4U));
  }
  if (succeeded)
  {
    MR_Word NestOpen_14;
    MR_Word Args0_15;
    MR_Word STATE_VARIABLE_PS_1_25;
    MR_Word NestStack0_37;
    MR_Word NestStack_38;
    MR_String Var_40;
    MR_Box Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;

    {
      NestOpen_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NestOpen_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NestOpen_14, 1) = ((MR_Box) (Context_13));
    }
    Var_40 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_20, 0))));
    Var_41 = (MR_hl_field(0, STATE_VARIABLE_PS_0_20, 1));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_20, 2))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_20, 3))));
    NestStack0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_20, 4))));
    Var_44 = (MR_Word) (NestStack0_37);
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (NestOpen_14));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_44));
    }
    NestStack_38 = (MR_Word) (Var_45);
    {
      STATE_VARIABLE_PS_1_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_PS_1_25, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, STATE_VARIABLE_PS_1_25, 1) = Var_41;
      MR_hl_field(0, STATE_VARIABLE_PS_1_25, 2) = ((MR_Box) (Var_42));
      MR_hl_field(0, STATE_VARIABLE_PS_1_25, 3) = ((MR_Box) (Var_43));
      MR_hl_field(0, STATE_VARIABLE_PS_1_25, 4) = ((MR_Box) (NestStack_38));
    }
    mercury__mercury_term_parser__parse_args_5_p_0(TypeInfo_for_T_34, TypeClassInfo_for_op_table_33, &Args0_15, STATE_VARIABLE_TokensLeft_1_22, STATE_VARIABLE_TokensLeft_19, STATE_VARIABLE_PS_1_25, STATE_VARIABLE_PS_21);
    if (((MR_tag((MR_Word) Args0_15)) == (MR_Integer) 1))
      *Term_10 = (MR_Word) (Args0_15);
    else
    {
      MR_Word Args_16 = ((MR_Word) ((MR_hl_field(0, Args0_15, 0))));
      MR_Word Var_28;
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (Atom_8));
      }
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (Args_16));
        MR_hl_field(0, Var_28, 2) = ((MR_Box) (TermContext_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Term_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
      }
    }
  }
  else
  {
    MR_Word Var_30;
    MR_Word Var_31;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (Atom_8));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_30, 2) = ((MR_Box) (TermContext_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Term_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
    }
    *STATE_VARIABLE_PS_21 = STATE_VARIABLE_PS_0_20;
    *STATE_VARIABLE_TokensLeft_19 = STATE_VARIABLE_TokensLeft_0_18;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_left_term_8_p_0(
  MR_Word TypeInfo_for_T_116,
  MR_Word TypeClassInfo_for_op_table_115,
  MR_Word MinPriority_9,
  MR_Word TermKind_10,
  MR_Word * OpPriority_11,
  MR_Word * Term_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_49,
  MR_Word * STATE_VARIABLE_TokensLeft_50,
  MR_Word STATE_VARIABLE_PS_0_51,
  MR_Word * STATE_VARIABLE_PS_52)
{
  MR_bool succeeded;
  MR_Box OpTable_15 = (MR_hl_field(0, STATE_VARIABLE_PS_0_51, 1));

  if ((STATE_VARIABLE_TokensLeft_0_49 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word conv0_Term_12;

    mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_101_111_102_95_95_91_49_44_32_50_93_95_48_3_p_0(TypeClassInfo_for_op_table_115, (MR_Word) (MR_mkword(1, &mercury__mercury_term_parser_scalar_common_5[1])), &conv0_Term_12, STATE_VARIABLE_PS_0_51);
    *Term_12 = (MR_Word) (conv0_Term_12);
    *OpPriority_11 = mercury__ops__tightest_op_priority_1_f_0(TypeClassInfo_for_op_table_115, OpTable_15);
    *STATE_VARIABLE_TokensLeft_50 = STATE_VARIABLE_TokensLeft_0_49;
    *STATE_VARIABLE_PS_52 = STATE_VARIABLE_PS_0_51;
  }
  else
  {
    MR_Word Token_16 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_49, 0))));
    MR_Integer Context_17 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_49, 1))));
    MR_Word STATE_VARIABLE_TokensLeft_1_53 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_49, 2))));
    MR_Word NewFunctor_27;
    MR_Word STATE_VARIABLE_TokensLeft_2_54;
    MR_String TokenName_18;
    MR_Word NextToken_19;

    succeeded = ((MR_tag((MR_Word) Token_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      TokenName_18 = ((MR_String) ((MR_hl_field(1, Token_16, 0))));
      succeeded = (strcmp(TokenName_18, (MR_String) "-") == 0);
      if (succeeded)
      {
        succeeded = (STATE_VARIABLE_TokensLeft_1_53 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NextToken_19 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_53, 0))));
          STATE_VARIABLE_TokensLeft_2_54 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_53, 2))));
          if (((((MR_tag((MR_Word) NextToken_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, NextToken_19, 0)))) == (MR_Integer) 1))))
          {
            MR_Float F_28 = MR_unbox_float((MR_hl_field(3, NextToken_19, 1)));
            MR_Float NegF_29 = (((MR_Float) 0.0000000000000000) - F_28);

            {
              NewFunctor_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, NewFunctor_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, NewFunctor_27, 1) = MR_box_float(NegF_29);
            }
            succeeded = MR_TRUE;
          }
          else
          if (((((MR_tag((MR_Word) NextToken_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, NextToken_19, 0)))) == (MR_Integer) 0))))
          {
            MR_Word LexerBase_21 = ((MR_Unsigned) ((MR_hl_field(3, NextToken_19, 1))) & (MR_Integer) 3);
            MR_Word X_22 = ((MR_Word) ((MR_hl_field(3, NextToken_19, 2))));
            MR_Word LexerSize_23 = ((MR_Unsigned) ((MR_hl_field(3, NextToken_19, 3))) & (MR_Integer) 7);
            MR_Word NegX_24;
            MR_Word Base_25;
            MR_Word Size_26;
            MR_Word Var_55 = ((((MR_Unsigned) ((MR_hl_field(3, NextToken_19, 3))) >> 3)) & (MR_Integer) 1);
            MR_Word Var_56;

            succeeded = (Var_55 == (MR_Integer) 0);
            if (succeeded)
            {
              NegX_24 = mercury__integer__f_minus_1_f_0(X_22);
              Base_25 = ((&mercury__mercury_term_parser_vector_common_6[4 + LexerBase_21]))->mercury__mercury_term_parser__vector_common_type_6_0__vct_6_f_0;
              Size_26 = ((&mercury__mercury_term_parser_vector_common_7[5 + LexerSize_23]))->mercury__mercury_term_parser__vector_common_type_7_0__vct_7_f_0;
              Var_56 = (MR_Integer) 0;
              {
                NewFunctor_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NewFunctor_27, 0) = (MR_Box) ((MR_Unsigned) (Base_25));
                MR_hl_field(1, NewFunctor_27, 1) = ((MR_Box) (NegX_24));
                MR_hl_field(1, NewFunctor_27, 2) = (MR_Box) (((((MR_Unsigned) (Var_56) << 3)) | (MR_Unsigned) (Size_26)));
              }
              succeeded = MR_TRUE;
            }
          }
          else
            succeeded = MR_FALSE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word TermContext_30;
      MR_Word Var_58;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
      MR_Box conv2_OpPriority_11;

      *STATE_VARIABLE_TokensLeft_50 = STATE_VARIABLE_TokensLeft_2_54;
      mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_51, Context_17, &TermContext_30);
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_58, 0) = ((MR_Box) (NewFunctor_27));
        MR_hl_field(0, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Var_58, 2) = ((MR_Box) (TermContext_30));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Term_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
      }
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_115, 0)), 14))));
      conv2_OpPriority_11 = func_1(((MR_Box) (TypeClassInfo_for_op_table_115)), OpTable_15);
      *OpPriority_11 = ((MR_Word) (conv2_OpPriority_11));
      *STATE_VARIABLE_PS_52 = STATE_VARIABLE_PS_0_51;
    }
    else
    {
      MR_Word OpInfos_31;
      MR_String TokenName_108;
      MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv4_OpInfos_31;

      succeeded = ((MR_tag((MR_Word) Token_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        TokenName_108 = ((MR_String) ((MR_hl_field(1, Token_16, 0))));
        func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_115, 0)), 10))));
        succeeded = func_3(((MR_Box) (TypeClassInfo_for_op_table_115)), OpTable_15, ((MR_Box) (TokenName_108)), &conv4_OpInfos_31);
        if (succeeded)
        {
          OpInfos_31 = ((MR_Word) (conv4_OpInfos_31));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word BinOpPriority_32;
        MR_Word GeOrGtA_33;
        MR_Word GeOrGtB_34;
        MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, OpInfos_31, 1))));
        MR_Word Var_61;
        MR_Word NextToken_85;
        MR_Word Var_124;
        MR_Unsigned Var_130;
        MR_Unsigned Var_131;

        succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BinOpPriority_32 = ((MR_Word) ((MR_hl_field(1, Var_60, 0))));
          GeOrGtA_33 = ((((MR_Unsigned) ((MR_hl_field(1, Var_60, 1))) >> 1)) & (MR_Integer) 1);
          GeOrGtB_34 = ((MR_Unsigned) ((MR_hl_field(1, Var_60, 1))) & (MR_Integer) 1);
          Var_130 = (MR_Unsigned) (BinOpPriority_32);
          Var_131 = (MR_Unsigned) (MinPriority_9);
          succeeded = (Var_130 > Var_131);
          if (!(succeeded))
            succeeded = (Var_130 == Var_131);
          if (succeeded)
          {
            succeeded = (STATE_VARIABLE_TokensLeft_1_53 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NextToken_85 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_53, 0))));
              Var_61 = (MR_Integer) 1;
              mercury__mercury_term_parser__could_start_term_2_p_0(NextToken_85, &Var_124);
              succeeded = (Var_61 == Var_124);
              if (succeeded)
                succeeded = (NextToken_85 != (MR_Word) ((MR_Unsigned) 4U));
            }
          }
        }
        if (succeeded)
        {
          MR_Word PrioA_37;
          MR_Word PrioB_38;
          MR_Word ResultA_39;
          MR_Word STATE_VARIABLE_TokensLeft_3_62;
          MR_Word STATE_VARIABLE_PS_1_63;

          *OpPriority_11 = BinOpPriority_32;
          switch (GeOrGtA_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              PrioA_37 = *OpPriority_11;
              break;
            case (MR_Integer) 0:
              PrioA_37 = mercury__ops__increment_priority_1_f_0(*OpPriority_11);
              break;
          }
          switch (GeOrGtB_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              PrioB_38 = *OpPriority_11;
              break;
            case (MR_Integer) 0:
              PrioB_38 = mercury__ops__increment_priority_1_f_0(*OpPriority_11);
              break;
          }
          mercury__mercury_term_parser__do_parse_term_7_p_0(TypeInfo_for_T_116, TypeClassInfo_for_op_table_115, PrioA_37, TermKind_10, &ResultA_39, STATE_VARIABLE_TokensLeft_1_53, &STATE_VARIABLE_TokensLeft_3_62, STATE_VARIABLE_PS_0_51, &STATE_VARIABLE_PS_1_63);
          if (((MR_tag((MR_Word) ResultA_39)) == (MR_Integer) 1))
          {
            *Term_12 = ResultA_39;
            *STATE_VARIABLE_TokensLeft_50 = STATE_VARIABLE_TokensLeft_3_62;
            *STATE_VARIABLE_PS_52 = STATE_VARIABLE_PS_1_63;
          }
          else
          {
            MR_Word TermA_40 = ((MR_Word) ((MR_hl_field(0, ResultA_39, 0))));
            MR_Word ResultB_41;

            mercury__mercury_term_parser__do_parse_term_7_p_0(TypeInfo_for_T_116, TypeClassInfo_for_op_table_115, PrioB_38, TermKind_10, &ResultB_41, STATE_VARIABLE_TokensLeft_3_62, STATE_VARIABLE_TokensLeft_50, STATE_VARIABLE_PS_1_63, STATE_VARIABLE_PS_52);
            if (((MR_tag((MR_Word) ResultB_41)) == (MR_Integer) 1))
              *Term_12 = ResultB_41;
            else
            {
              MR_Word TermB_42 = ((MR_Word) ((MR_hl_field(0, ResultB_41, 0))));
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word TermContext_86;

              mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*STATE_VARIABLE_PS_52, Context_17, &TermContext_86);
              {
                Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_67, 0) = ((MR_Box) (TokenName_108));
              }
              {
                Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_69, 0) = ((MR_Box) (TermB_42));
                MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_68, 0) = ((MR_Box) (TermA_40));
                MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_69));
              }
              {
                Var_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_66, 0) = ((MR_Box) (Var_67));
                MR_hl_field(0, Var_66, 1) = ((MR_Box) (Var_68));
                MR_hl_field(0, Var_66, 2) = ((MR_Box) (TermContext_86));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Term_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_66));
              }
            }
          }
        }
        else
        {
          MR_Word UnOpPriority_45;
          MR_Word GeOrGtA_102;
          MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, OpInfos_31, 2))));
          MR_Word Var_72;
          MR_Word NextToken_91;
          MR_Word Var_125;

          succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            UnOpPriority_45 = ((MR_Word) ((MR_hl_field(1, Var_71, 0))));
            GeOrGtA_102 = ((MR_Unsigned) ((MR_hl_field(1, Var_71, 1))) & (MR_Integer) 1);
            succeeded = mercury__ops__priority_ge_2_p_0(UnOpPriority_45, MinPriority_9);
            if (succeeded)
            {
              succeeded = (STATE_VARIABLE_TokensLeft_1_53 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                NextToken_91 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_53, 0))));
                Var_72 = (MR_Integer) 1;
                mercury__mercury_term_parser__could_start_term_2_p_0(NextToken_91, &Var_125);
                succeeded = (Var_72 == Var_125);
                if (succeeded)
                  succeeded = (NextToken_91 != (MR_Word) ((MR_Unsigned) 4U));
              }
            }
          }
          if (succeeded)
          {
            MR_Word PrioA_97;
            MR_Word ResultA_98;

            *OpPriority_11 = UnOpPriority_45;
            switch (GeOrGtA_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                PrioA_97 = *OpPriority_11;
                break;
              case (MR_Integer) 0:
                PrioA_97 = mercury__ops__increment_priority_1_f_0(*OpPriority_11);
                break;
            }
            mercury__mercury_term_parser__do_parse_term_7_p_0(TypeInfo_for_T_116, TypeClassInfo_for_op_table_115, PrioA_97, TermKind_10, &ResultA_98, STATE_VARIABLE_TokensLeft_1_53, STATE_VARIABLE_TokensLeft_50, STATE_VARIABLE_PS_0_51, STATE_VARIABLE_PS_52);
            if (((MR_tag((MR_Word) ResultA_98)) == (MR_Integer) 1))
              *Term_12 = ResultA_98;
            else
            {
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word TermContext_92;
              MR_Word TermA_93 = ((MR_Word) ((MR_hl_field(0, ResultA_98, 0))));

              mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*STATE_VARIABLE_PS_52, Context_17, &TermContext_92);
              {
                Var_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_76, 0) = ((MR_Box) (TokenName_108));
              }
              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (TermA_93));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_75 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_75, 0) = ((MR_Box) (Var_76));
                MR_hl_field(0, Var_75, 1) = ((MR_Box) (Var_77));
                MR_hl_field(0, Var_75, 2) = ((MR_Box) (TermContext_92));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Term_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_75));
              }
            }
          }
          else
          {
            mercury__mercury_term_parser__parse_simple_term_8_p_0(TypeInfo_for_T_116, TypeClassInfo_for_op_table_115, Token_16, Context_17, MinPriority_9, Term_12, STATE_VARIABLE_TokensLeft_1_53, STATE_VARIABLE_TokensLeft_50, STATE_VARIABLE_PS_0_51, STATE_VARIABLE_PS_52);
            *OpPriority_11 = mercury__ops__tightest_op_priority_1_f_0(TypeClassInfo_for_op_table_115, OpTable_15);
          }
        }
      }
      else
      {
        mercury__mercury_term_parser__parse_simple_term_8_p_0(TypeInfo_for_T_116, TypeClassInfo_for_op_table_115, Token_16, Context_17, MinPriority_9, Term_12, STATE_VARIABLE_TokensLeft_1_53, STATE_VARIABLE_TokensLeft_50, STATE_VARIABLE_PS_0_51, STATE_VARIABLE_PS_52);
        *OpPriority_11 = mercury__ops__tightest_op_priority_1_f_0(TypeClassInfo_for_op_table_115, OpTable_15);
      }
    }
  }
}

static void MR_CALL 
mercury__mercury_term_parser__could_start_term_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word NestOpen_4,
  MR_Word STATE_VARIABLE_ParserState_0_8,
  MR_Word * STATE_VARIABLE_ParserState_9)
{
  MR_Word NestStack0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_8, 4))));
  MR_Word NestStack_7;
  MR_String Var_13 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_8, 0))));
  MR_Box Var_14 = (MR_hl_field(0, STATE_VARIABLE_ParserState_0_8, 1));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_8, 2))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_8, 3))));
  MR_Word Var_17 = (MR_Word) (NestStack0_6);
  MR_Word Var_18;

  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (NestOpen_4));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_17));
  }
  NestStack_7 = (MR_Word) (Var_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ParserState_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 1) = Var_14;
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (NestStack_7));
  }
}

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_String VarName_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_ParserState_0_13,
  MR_Word * STATE_VARIABLE_ParserState_14)
{
  MR_bool succeeded = (strcmp(VarName_5, (MR_String) "_") == 0);

  if (succeeded)
  {
    MR_Word VarSet0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, 2))));
    MR_Word VarSet_9;
    MR_String Var_32;
    MR_Box Var_33;
    MR_Word Var_35;
    MR_Word Var_36;

    mercury__varset__new_var_3_p_0(TypeInfo_for_T_20, Var_6, VarSet0_8, &VarSet_9);
    Var_32 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, 0))));
    Var_33 = (MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, 1));
    Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, 3))));
    Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ParserState_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 1) = Var_33;
      MR_hl_field(0, base, 2) = ((MR_Box) (VarSet_9));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_36));
    }
  }
  else
  {
    MR_Word Names0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, 3))));
    MR_Word Var0_11;
    MR_Word TypeInfo_24_24;
    MR_Box conv0_Var0_11;

    {
      TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_24_24, Names0_10, ((MR_Box) (VarName_5)), &conv0_Var0_11);
    if (succeeded)
    {
      Var0_11 = ((MR_Word) (conv0_Var0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Var_6 = Var0_11;
      *STATE_VARIABLE_ParserState_14 = STATE_VARIABLE_ParserState_0_13;
    }
    else
    {
      MR_Word TypeInfo_27_27;
      MR_Word Names_12;
      MR_Word VarSet0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, 2))));
      MR_Word VarSet_19;
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, VarSet0_18, 0))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, VarSet0_18, 1))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, VarSet0_18, 2))));
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Integer Var_53;
      MR_Integer Var_54 = (MR_Integer) (Var_45);
      MR_String Var_57;
      MR_Box Var_58;
      MR_Word Var_61;

      Var_53 = (MR_Integer) ((MR_Unsigned) Var_54 + (MR_Unsigned) 1);
      *Var_6 = (MR_Word) (Var_53);
      Var_48 = (MR_Word) (Var_53);
      {
        TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_20, TypeInfo_27_27, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *Var_6, ((MR_Box) (VarName_5)), Var_46, &Var_49);
      {
        VarSet_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarSet_19, 0) = ((MR_Box) (Var_48));
        MR_hl_field(0, VarSet_19, 1) = ((MR_Box) (Var_49));
        MR_hl_field(0, VarSet_19, 2) = ((MR_Box) (Var_47));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_27_27, ((MR_Box) (VarName_5)), ((MR_Box) (*Var_6)), Names0_10, &Names_12);
      Var_57 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, 0))));
      Var_58 = (MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, 1));
      Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, 4))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ParserState_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_57));
        MR_hl_field(0, base, 1) = Var_58;
        MR_hl_field(0, base, 2) = ((MR_Box) (VarSet_19));
        MR_hl_field(0, base, 3) = ((MR_Box) (Names_12));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_61));
      }
    }
  }
}

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word Term_3,
  MR_Word * ArgTerms_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word LeftTerm_5;
  MR_Word RightTerm_6;
  MR_Word Var_9;
  MR_String Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
    Var_11 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_10 = ((MR_String) ((MR_hl_field(0, Var_9, 0))));
      succeeded = (strcmp(Var_10, (MR_String) ",") == 0);
      if (succeeded)
      {
        succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LeftTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_11, 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));
          succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RightTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_12, 0))));
            Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, 1))));
            succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word * AddrArgTerms0_16;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ArgTerms_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LeftTerm_5));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrArgTerms0_16 = (MR_Word *) (&(MR_hl_field(1, *ArgTerms_4, 1)));
    mercury__mercury_term_parser__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_95_95_49_2_p_0(RightTerm_6, AddrArgTerms0_16);
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ArgTerms_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_3));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
}

static void MR_CALL 
mercury__mercury_term_parser__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_95_95_49_2_p_0(
  MR_Word Term_3,
  MR_Word * AddrOfArgTerms_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word LeftTerm_5;
    MR_Word RightTerm_6;
    MR_Word Var_9;
    MR_String Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, 0))));
      Var_11 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_10 = ((MR_String) ((MR_hl_field(0, Var_9, 0))));
        succeeded = (strcmp(Var_10, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LeftTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_11, 0))));
            Var_12 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));
            succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RightTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_12, 0))));
              Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, 1))));
              succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ArgTerms_4;
      MR_Word * AddrArgTerms0_16;
      MR_Word next_value_of_Term_3;
      MR_Word * next_value_of_AddrOfArgTerms_17;

      {
        ArgTerms_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgTerms_4, 0) = ((MR_Box) (LeftTerm_5));
        MR_hl_field(1, ArgTerms_4, 1) = NULL;
      }
      AddrArgTerms0_16 = (MR_Word *) (&(MR_hl_field(1, ArgTerms_4, 1)));
      *AddrOfArgTerms_17 = ArgTerms_4;
      // direct tailcall eliminated
      ;
      next_value_of_Term_3 = RightTerm_6;
      next_value_of_AddrOfArgTerms_17 = AddrArgTerms0_16;
      Term_3 = next_value_of_Term_3;
      AddrOfArgTerms_17 = next_value_of_AddrOfArgTerms_17;
      continue;
    }
    else
    {
      MR_Word ArgTerms_18;

      {
        ArgTerms_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgTerms_18, 0) = ((MR_Box) (Term_3));
        MR_hl_field(1, ArgTerms_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *AddrOfArgTerms_17 = ArgTerms_18;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__mercury_term_parser__lexer_size_to_term_size_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2 = ((&mercury__mercury_term_parser_vector_common_7[0 + HeadVar__1_1]))->mercury__mercury_term_parser__vector_common_type_7_0__vct_7_f_0;

  return HeadVar__2_2;
}

static MR_Word MR_CALL 
mercury__mercury_term_parser__lexer_signedness_to_term_signedness_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
mercury__mercury_term_parser__lexer_base_to_term_base_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2 = ((&mercury__mercury_term_parser_vector_common_6[0 + HeadVar__1_1]))->mercury__mercury_term_parser__vector_common_type_6_0__vct_6_f_0;

  return HeadVar__2_2;
}

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_110_101_115_116_95_111_112_101_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word CloseToken_6,
  MR_Integer CloseContext_7,
  MR_Word * MaybeErrorMsg_8,
  MR_Word STATE_VARIABLE_ParserState_0_20,
  MR_Word * STATE_VARIABLE_ParserState_21)
{
  MR_bool succeeded;
  MR_Word NestStack0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_20, 4))));
  MR_Word TopNestOpen_11;
  MR_Word NestStack_12;
  MR_Box conv0_TopNestOpen_11;

  succeeded = mercury__stack__pop_3_p_0((MR_Word) (&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_0), &conv0_TopNestOpen_11, NestStack0_10, &NestStack_12);
  if (succeeded)
  {
    TopNestOpen_11 = ((MR_Word) (conv0_TopNestOpen_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TopNestOpenToken_13 = ((MR_Word) ((MR_hl_field(0, TopNestOpen_11, 0))));
    MR_Integer TopNestOpenContext_14 = ((MR_Integer) ((MR_hl_field(0, TopNestOpen_11, 1))));

    succeeded = mercury__mercury_term_parser__open_close_pair_2_p_1(TopNestOpenToken_13, CloseToken_6);
    if (succeeded)
    {
      MR_String Var_120 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_20, 0))));
      MR_Box Var_121 = (MR_hl_field(0, STATE_VARIABLE_ParserState_0_20, 1));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_20, 2))));
      MR_Word Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_20, 3))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ParserState_21 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_120));
        MR_hl_field(0, base, 1) = Var_121;
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_122));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_123));
        MR_hl_field(0, base, 4) = ((MR_Box) (NestStack_12));
      }
      *MaybeErrorMsg_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Char TopNestOpenChar_15;
      MR_Char CloseChar_16;
      MR_String ErrorMsg_17;
      MR_String Var_49;
      MR_String Var_56;
      MR_String Var_58;
      MR_String Var_59;
      MR_String Var_66;
      MR_String Var_68;
      MR_String Var_69;
      MR_String Var_76;
      MR_String Var_78;
      MR_String Var_79;
      MR_String Var_86;

      mercury__mercury_term_parser__open_token_char_2_p_0(TopNestOpenToken_13, &TopNestOpenChar_15);
      mercury__mercury_term_parser__close_token_char_2_p_0(CloseToken_6, &CloseChar_16);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), CloseContext_7, &Var_49);
      Var_56 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) ".");
      Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "\' on line ", Var_56);
      mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), CloseChar_16, &Var_59);
      Var_66 = mercury__string__f_43_43_2_f_0(Var_59, Var_58);
      Var_68 = mercury__string__f_43_43_2_f_0((MR_String) " is not closed before the \'", Var_66);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), TopNestOpenContext_14, &Var_69);
      Var_76 = mercury__string__f_43_43_2_f_0(Var_69, Var_68);
      Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "\' on line ", Var_76);
      mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), TopNestOpenChar_15, &Var_79);
      Var_86 = mercury__string__f_43_43_2_f_0(Var_79, Var_78);
      ErrorMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error: the \'", Var_86);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeErrorMsg_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ErrorMsg_17));
      }
      *STATE_VARIABLE_ParserState_21 = STATE_VARIABLE_ParserState_0_20;
    }
  }
  else
  {
    MR_Word OpenToken_18;
    MR_Char OpenChar_19;
    MR_Char CloseChar_43;
    MR_String ErrorMsg_44;
    MR_String Var_88;
    MR_String Var_96;
    MR_String Var_97;
    MR_String Var_104;
    MR_String Var_106;
    MR_String Var_107;
    MR_String Var_114;

    mercury__mercury_term_parser__open_close_pair_2_p_0(&OpenToken_18, CloseToken_6);
    mercury__mercury_term_parser__open_token_char_2_p_0(OpenToken_18, &OpenChar_19);
    mercury__mercury_term_parser__close_token_char_2_p_0(CloseToken_6, &CloseChar_43);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), CloseContext_7, &Var_88);
    Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "\' on line ", Var_88);
    mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), CloseChar_43, &Var_97);
    Var_104 = mercury__string__f_43_43_2_f_0(Var_97, Var_96);
    Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "\' precedes the \'", Var_104);
    mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), OpenChar_19, &Var_107);
    Var_114 = mercury__string__f_43_43_2_f_0(Var_107, Var_106);
    ErrorMsg_44 = mercury__string__f_43_43_2_f_0((MR_String) "no \'", Var_114);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeErrorMsg_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ErrorMsg_44));
    }
    *STATE_VARIABLE_ParserState_21 = STATE_VARIABLE_ParserState_0_20;
  }
}

static MR_bool MR_CALL 
mercury__mercury_term_parser__open_close_pair_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  switch (MR_unmkbody(HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 8U));
      break;
    case (MR_Integer) 3:
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 16U));
      break;
    case (MR_Integer) 5:
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 24U));
      break;
  }
  return succeeded;
}

static MR_Box MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_114_95_115_116_97_116_101_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_44_32_50_93_95_48_1_f_0(
  MR_Word ParserState_3)
{
  MR_Box X_4 = (MR_hl_field(0, ParserState_3, 1));

  return X_4;
}

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_op_table_73,
  MR_Word Token_8,
  MR_Integer Context_9,
  MR_Word ExpectedInfo_10,
  MR_Word * ErrorResult_11,
  MR_Word STATE_VARIABLE_TokensLeft_0_40,
  MR_Word * STATE_VARIABLE_TokensLeft_41,
  MR_Word PS_13)
{
  MR_bool succeeded;
  MR_String TokenStr_14;
  MR_String Op_15;
  MR_Box OpTable_16;

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_TokensLeft_41 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Token_8));
    MR_hl_field(1, base, 1) = ((MR_Box) (Context_9));
    MR_hl_field(1, base, 2) = ((MR_Box) (STATE_VARIABLE_TokensLeft_0_40));
  }
  mercury__mercury_term_lexer__token_to_string_2_p_0(Token_8, &TokenStr_14);
  if ((Token_8 == (MR_Word) ((MR_Unsigned) 32U)))
  {
    Op_15 = (MR_String) ",";
    succeeded = MR_TRUE;
  }
  else
  if (((MR_tag((MR_Word) Token_8)) == (MR_Integer) 1))
  {
    Op_15 = ((MR_String) ((MR_hl_field(1, Token_8, 0))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    OpTable_16 = (MR_hl_field(0, PS_13, 1));
    {
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;

      succeeded = mercury__ops__lookup_infix_op_5_p_0(TypeClassInfo_for_op_table_73, OpTable_16, Op_15, &Var_17, &Var_18, &Var_19);
    }
    if (!(succeeded))
    {
      MR_Word Var_20;
      MR_Word Var_21;

      succeeded = mercury__ops__lookup_postfix_op_4_p_0(TypeClassInfo_for_op_table_73, OpTable_16, Op_15, &Var_20, &Var_21);
    }
  }
  if (succeeded)
  {
    MR_String ErrorMsg_22;
    MR_Word Var_47;
    MR_String Var_82;

    Var_82 = mercury__string__f_43_43_2_f_0(TokenStr_14, (MR_String) ": operator precedence error.");
    ErrorMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error at ", Var_82);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = ((MR_Box) (Context_9));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) (ErrorMsg_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ErrorResult_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_47));
    }
  }
  else
  {
    MR_String ErrorMsg0_23;
    MR_Word NestStack_24;
    MR_Word Nests_25;
    MR_Word PrError_39;
    MR_String Var_51;
    MR_String ErrorMsg_72;
    MR_String Var_85;
    MR_Word CloseToken_26;
    MR_Word TopNest_27;

    Var_51 = mercury__mercury_term_parser__at_token_expected_2_f_0(ExpectedInfo_10, TokenStr_14);
    Var_85 = mercury__string__f_43_43_2_f_0(Var_51, (MR_String) ".");
    ErrorMsg0_23 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error ", Var_85);
    NestStack_24 = ((MR_Word) ((MR_hl_field(0, PS_13, 4))));
    Nests_25 = mercury__stack__to_list_1_f_0((MR_Word) (&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_0), NestStack_24);
    succeeded = mercury__mercury_term_parser__is_close_token_2_p_0(Token_8, &CloseToken_26);
    if (succeeded)
    {
      succeeded = (Nests_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        TopNest_27 = ((MR_Word) ((MR_hl_field(1, Nests_25, 0))));
    }
    if (succeeded)
    {
      MR_Word OpenTokenForClose_29;
      MR_Char OpenTokenForCloseChar_30;
      MR_Word TopNestOpenToken_31;
      MR_Integer TopNestContext_32;
      MR_String Addendum_33;

      mercury__mercury_term_parser__open_close_pair_2_p_0(&OpenTokenForClose_29, CloseToken_26);
      mercury__mercury_term_parser__open_token_char_2_p_0(OpenTokenForClose_29, &OpenTokenForCloseChar_30);
      TopNestOpenToken_31 = ((MR_Word) ((MR_hl_field(0, TopNest_27, 0))));
      TopNestContext_32 = ((MR_Integer) ((MR_hl_field(0, TopNest_27, 1))));
      succeeded = mercury__mercury_term_parser____Unify____nest_open_token_0_0(TopNestOpenToken_31, OpenTokenForClose_29);
      if (succeeded)
        Addendum_33 = (MR_String) "";
      else
      {
        MR_Integer OpenContext_34;

        succeeded = mercury__mercury_term_parser__find_top_open_3_p_0(OpenTokenForClose_29, Nests_25, &OpenContext_34);
        if (succeeded)
        {
          MR_Char TopNestOpenTokenChar_35;
          MR_Char CloseTokenChar_36;
          MR_String Var_88;
          MR_String Var_95;
          MR_String Var_97;
          MR_String Var_98;
          MR_String Var_105;
          MR_String Var_107;
          MR_String Var_108;
          MR_String Var_115;
          MR_String Var_117;
          MR_String Var_118;
          MR_String Var_125;
          MR_String Var_127;
          MR_String Var_128;
          MR_String Var_135;

          mercury__mercury_term_parser__open_token_char_2_p_0(TopNestOpenToken_31, &TopNestOpenTokenChar_35);
          mercury__mercury_term_parser__close_token_char_2_p_0(CloseToken_26, &CloseTokenChar_36);
          mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), CloseTokenChar_36, &Var_88);
          Var_95 = mercury__string__f_43_43_2_f_0(Var_88, (MR_String) "\' here.");
          Var_97 = mercury__string__f_43_43_2_f_0((MR_String) " and the \140", Var_95);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), OpenContext_34, &Var_98);
          Var_105 = mercury__string__f_43_43_2_f_0(Var_98, Var_97);
          Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "\' on line ", Var_105);
          mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), OpenTokenForCloseChar_30, &Var_108);
          Var_115 = mercury__string__f_43_43_2_f_0(Var_108, Var_107);
          Var_117 = mercury__string__f_43_43_2_f_0((MR_String) " between the \140", Var_115);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), TopNestContext_32, &Var_118);
          Var_125 = mercury__string__f_43_43_2_f_0(Var_118, Var_117);
          Var_127 = mercury__string__f_43_43_2_f_0((MR_String) "\' on line ", Var_125);
          mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), TopNestOpenTokenChar_35, &Var_128);
          Var_135 = mercury__string__f_43_43_2_f_0(Var_128, Var_127);
          Addendum_33 = mercury__string__f_43_43_2_f_0((MR_String) "\nThere is an unclosed \140", Var_135);
        }
        else
        {
          MR_String Var_138;
          MR_String Var_145;

          mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), OpenTokenForCloseChar_30, &Var_138);
          Var_145 = mercury__string__f_43_43_2_f_0(Var_138, (MR_String) "\' to close here.");
          Addendum_33 = mercury__string__f_43_43_2_f_0((MR_String) "\nThere is no open \140", Var_145);
        }
      }
      ErrorMsg_72 = mercury__string__f_43_43_2_f_0(ErrorMsg0_23, Addendum_33);
    }
    else
    {
      succeeded = (Token_8 == (MR_Word) ((MR_Unsigned) 36U));
      if (succeeded)
        succeeded = (Nests_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_String Var_71;

        Var_71 = mercury__mercury_term_parser__describe_all_open_nest_levels_1_f_0(NestStack_24);
        ErrorMsg_72 = mercury__string__f_43_43_2_f_0(ErrorMsg0_23, Var_71);
      }
      else
        ErrorMsg_72 = ErrorMsg0_23;
    }
    {
      PrError_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PrError_39, 0) = ((MR_Box) (Context_9));
      MR_hl_field(0, PrError_39, 1) = ((MR_Box) (ErrorMsg_72));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ErrorResult_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PrError_39));
    }
  }
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_open_token_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__mercury_term_lexer____Unify____raw_token_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static MR_bool MR_CALL 
mercury__mercury_term_parser__is_close_token_2_p_0(
  MR_Word Token_3,
  MR_Word * CloseToken_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Token_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Token_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 4:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 6:
          succeeded = MR_TRUE;
          break;
      }
      break;
  }
  if (succeeded)
  {
    *CloseToken_4 = (MR_Word) (Token_3);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser__close_token_char_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Char * HeadVar__2_2)
{
  switch (MR_unmkbody(HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Char) 41;
      break;
    case (MR_Integer) 4:
      *HeadVar__2_2 = (MR_Char) 93;
      break;
    case (MR_Integer) 6:
      *HeadVar__2_2 = (MR_Char) 125;
      break;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__open_token_char_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Char * HeadVar__2_2)
{
  switch (MR_unmkbody(HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Char) 40;
      break;
    case (MR_Integer) 3:
      *HeadVar__2_2 = (MR_Char) 91;
      break;
    case (MR_Integer) 5:
      *HeadVar__2_2 = (MR_Char) 123;
      break;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__open_close_pair_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  switch (MR_unmkbody(HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 4:
      *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 12U);
      break;
    case (MR_Integer) 6:
      *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 20U);
      break;
  }
}

static MR_String MR_CALL 
mercury__mercury_term_parser__describe_all_open_nest_levels_1_f_0(
  MR_Word NestStack_3)
{
  MR_String NestsDesc_4;
  MR_Word Nests_5 = (MR_Word) (NestStack_3);
  MR_Word RevNests_6;
  MR_Word NestDescs_7;
  MR_Word Var_9;

  mercury__list__reverse_2_p_0((MR_Word) (&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_0), Nests_5, &RevNests_6);
  mercury__mercury_term_parser__describe_open_nest_levels_2_p_0(RevNests_6, &NestDescs_7);
  Var_9 = mercury__mercury_term_parser__map__ho5_2_f_in__list_0(NestDescs_7);
  mercury__string__unsafe_append_string_pieces_2_p_0(Var_9, &NestsDesc_4);
  return NestsDesc_4;
}

static MR_String MR_CALL 
mercury__mercury_term_parser__at_token_expected_2_f_0(
  MR_Word ExpectedInfo_4,
  MR_String Got_5)
{
  MR_String ErrorMsg_6;

  if ((ExpectedInfo_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_23;

    mercury__string__append_3_p_2(Got_5, (MR_String) ": expected a token that can start a (sub)term", &Var_23);
    mercury__string__append_3_p_2((MR_String) "at ", Var_23, &ErrorMsg_6);
  }
  else
  {
    MR_String Expected_7 = ((MR_String) ((MR_hl_field(1, ExpectedInfo_4, 0))));
    MR_String Var_19;
    MR_String Var_20;

    mercury__string__append_3_p_2((MR_String) ": expected ", Expected_7, &Var_19);
    mercury__string__append_3_p_2(Got_5, Var_19, &Var_20);
    mercury__string__append_3_p_2((MR_String) "at ", Var_20, &ErrorMsg_6);
  }
  return ErrorMsg_6;
}

static MR_bool MR_CALL 
mercury__mercury_term_parser__find_top_open_3_p_0(
  MR_Word SearchOpenToken_4,
  MR_Word STATE_VARIABLE_StackList_0_10,
  MR_Integer * OpenContext_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_StackList_0_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Top_7;
    MR_Word TopOpenToken_8;
    MR_Integer TopOpenContext_9;
    MR_Word STATE_VARIABLE_StackList_1_11;
    MR_Word Cast_HeadVar1_14;
    MR_Word Cast_HeadVar2_15;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Top_7 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_StackList_0_10, 0))));
      STATE_VARIABLE_StackList_1_11 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_StackList_0_10, 1))));
      TopOpenToken_8 = ((MR_Word) ((MR_hl_field(0, Top_7, 0))));
      TopOpenContext_9 = ((MR_Integer) ((MR_hl_field(0, Top_7, 1))));
      Cast_HeadVar1_14 = (MR_Word) (TopOpenToken_8);
      Cast_HeadVar2_15 = (MR_Word) (SearchOpenToken_4);
      succeeded = mercury__mercury_term_lexer____Unify____raw_token_0_0(Cast_HeadVar1_14, Cast_HeadVar2_15);
      if (succeeded)
      {
        *OpenContext_6 = TopOpenContext_9;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_STATE_VARIABLE_StackList_0_10 = STATE_VARIABLE_StackList_1_11;

        // direct tailcall eliminated
        ;
        STATE_VARIABLE_StackList_0_10 = next_value_of_STATE_VARIABLE_StackList_0_10;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_117_110_101_120_112_101_99_116_101_100_95_101_111_102_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word TypeClassInfo_for_op_table_18,
  MR_Word ExpectedInfo_4,
  MR_Word * Result_5,
  MR_Word PS_6)
{
  MR_Word NestStack_7 = ((MR_Word) ((MR_hl_field(0, PS_6, 4))));
  MR_String ErrorMsg0_8;
  MR_String ErrorMsg_9;
  MR_String Var_13;
  MR_String Var_16;
  MR_Word Var_17;
  MR_String Var_24;
  MR_Word Nests_48;
  MR_Word RevNests_49;
  MR_Word NestDescs_50;
  MR_Word Var_52;

  if ((ExpectedInfo_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_46;

    mercury__string__append_3_p_2((MR_String) "end-of-file", (MR_String) ": expected a token that can start a (sub)term", &Var_46);
    mercury__string__append_3_p_2((MR_String) "at ", Var_46, &Var_13);
  }
  else
  {
    MR_String Expected_30 = ((MR_String) ((MR_hl_field(1, ExpectedInfo_4, 0))));
    MR_String Var_42;
    MR_String Var_43;

    mercury__string__append_3_p_2((MR_String) ": expected ", Expected_30, &Var_42);
    mercury__string__append_3_p_2((MR_String) "end-of-file", Var_42, &Var_43);
    mercury__string__append_3_p_2((MR_String) "at ", Var_43, &Var_13);
  }
  mercury__string__append_3_p_2(Var_13, (MR_String) ".", &Var_24);
  mercury__string__append_3_p_2((MR_String) "Syntax error ", Var_24, &ErrorMsg0_8);
  Nests_48 = (MR_Word) (NestStack_7);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_0), Nests_48, &RevNests_49);
  mercury__mercury_term_parser__describe_open_nest_levels_2_p_0(RevNests_49, &NestDescs_50);
  Var_52 = mercury__mercury_term_parser__map__ho5_2_f_in__list_0(NestDescs_50);
  mercury__string__unsafe_append_string_pieces_2_p_0(Var_52, &Var_16);
  mercury__string__append_3_p_2(ErrorMsg0_8, Var_16, &ErrorMsg_9);
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (ErrorMsg_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *Result_5 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
  }
}

static MR_Word MR_CALL 
mercury__mercury_term_parser__map__ho5_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Integer Var_13;
    MR_Word * AddrSCCcallarg_9_14;

{
#define MR_PROC_LABEL mercury__mercury_term_parser__map__ho5_2_f_in__list_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
    {
      Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
      MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, Var_8, 2) = ((MR_Box) (Var_13));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
    mercury__mercury_term_parser__LCMC__func__map__ho5__1_3_p_0(Var_7, AddrSCCcallarg_9_14);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__mercury_term_parser__LCMC__func__map__ho5__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Integer Var_13;
      MR_Word * AddrSCCcallarg_9_14;
      MR_Word HeadVar__3_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_15;

{
#define MR_PROC_LABEL mercury__mercury_term_parser__LCMC__func__map__ho5__1_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
        MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(1, Var_8, 2) = ((MR_Box) (Var_13));
      }
      {
        HeadVar__3_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_16, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_16, 1) = NULL;
      }
      AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_16, 1)));
      *AddrOfHeadVar__3_15 = HeadVar__3_16;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_15 = AddrSCCcallarg_9_14;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_15 = next_value_of_AddrOfHeadVar__3_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__describe_open_nest_levels_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word NestOpen_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word NestOpens_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String Desc_5;
    MR_Word OpenToken_7 = ((MR_Word) ((MR_hl_field(0, NestOpen_3, 0))));
    MR_Integer Context_8 = ((MR_Integer) ((MR_hl_field(0, NestOpen_3, 1))));
    MR_Char OpenChar_9;
    MR_String Var_17;
    MR_String Var_24;
    MR_String Var_26;
    MR_String Var_27;
    MR_String Var_34;
    MR_Word * AddrDescs_39;

    switch (MR_unmkbody(OpenToken_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OpenChar_9 = (MR_Char) 40;
        break;
      case (MR_Integer) 3:
        OpenChar_9 = (MR_Char) 91;
        break;
      case (MR_Integer) 5:
        OpenChar_9 = (MR_Char) 123;
        break;
    }
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Context_8, &Var_17);
    mercury__string__append_3_p_2(Var_17, (MR_String) ".", &Var_24);
    mercury__string__append_3_p_2((MR_String) "\' on line ", Var_24, &Var_26);
    mercury__string__format__format_char_component_4_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), (MR_Word) ((MR_Unsigned) 0U), OpenChar_9, &Var_27);
    mercury__string__append_3_p_2(Var_27, Var_26, &Var_34);
    mercury__string__append_3_p_2((MR_String) "\nThere is an open \140", Var_34, &Desc_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Desc_5));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrDescs_39 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__2_2, 1)));
    mercury__mercury_term_parser__LCMC__pred__describe_open_nest_levels__1_2_p_0(NestOpens_4, AddrDescs_39);
  }
}

static void MR_CALL 
mercury__mercury_term_parser__LCMC__pred__describe_open_nest_levels__1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_40)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__2_40 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word NestOpen_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word NestOpens_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_String Desc_5;
      MR_Word OpenToken_7 = ((MR_Word) ((MR_hl_field(0, NestOpen_3, 0))));
      MR_Integer Context_8 = ((MR_Integer) ((MR_hl_field(0, NestOpen_3, 1))));
      MR_Char OpenChar_9;
      MR_String Var_17;
      MR_String Var_24;
      MR_String Var_26;
      MR_String Var_27;
      MR_String Var_34;
      MR_Word * AddrDescs_39;
      MR_Word HeadVar__2_41;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_40;

      switch (MR_unmkbody(OpenToken_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          OpenChar_9 = (MR_Char) 40;
          break;
        case (MR_Integer) 3:
          OpenChar_9 = (MR_Char) 91;
          break;
        case (MR_Integer) 5:
          OpenChar_9 = (MR_Char) 123;
          break;
      }
      mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Context_8, &Var_17);
      mercury__string__append_3_p_2(Var_17, (MR_String) ".", &Var_24);
      mercury__string__append_3_p_2((MR_String) "\' on line ", Var_24, &Var_26);
      mercury__string__format__format_char_component_4_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_5[14]), (MR_Word) ((MR_Unsigned) 0U), OpenChar_9, &Var_27);
      mercury__string__append_3_p_2(Var_27, Var_26, &Var_34);
      mercury__string__append_3_p_2((MR_String) "\nThere is an open \140", Var_34, &Desc_5);
      {
        HeadVar__2_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_41, 0) = ((MR_Box) (Desc_5));
        MR_hl_field(1, HeadVar__2_41, 1) = NULL;
      }
      AddrDescs_39 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_41, 1)));
      *AddrOfHeadVar__2_40 = HeadVar__2_41;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = NestOpens_4;
      next_value_of_AddrOfHeadVar__2_40 = AddrDescs_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_40 = next_value_of_AddrOfHeadVar__2_40;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word ParserState_4,
  MR_Integer TokenContext_5,
  MR_Word * TermContext_6)
{
  MR_String FileName_7 = ((MR_String) ((MR_hl_field(0, ParserState_4, 0))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TermContext_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FileName_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (TokenContext_5));
  }
}

static MR_bool MR_CALL 
mercury__mercury_term_parser__check_priority_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Unsigned Var_8 = (MR_Unsigned) (HeadVar__2_2);
  MR_Unsigned Var_9 = (MR_Unsigned) (HeadVar__3_3);

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      succeeded = (Var_9 >= Var_8);
      break;
    case (MR_Integer) 0:
      succeeded = (Var_9 > Var_8);
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__mercury_term_parser__parse_backquoted_operator_7_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeClassInfo_for_op_table_28,
  MR_Word * MaybeQualifier_8,
  MR_String * OpName_9,
  MR_Word * VariableTerms_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * STATE_VARIABLE_TokensLeft_20,
  MR_Word STATE_VARIABLE_PS_0_21,
  MR_Word * STATE_VARIABLE_PS_22)
{
  MR_bool succeeded = (STATE_VARIABLE_TokensLeft_0_19 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Token_13;
  MR_Integer Context_14;
  MR_Word TermContext_15;
  MR_Word STATE_VARIABLE_TokensLeft_1_23;
  MR_String FileName_33;

  if (succeeded)
  {
    Token_13 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_19, 0))));
    Context_14 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_19, 1))));
    STATE_VARIABLE_TokensLeft_1_23 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_19, 2))));
    FileName_33 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, 0))));
    {
      TermContext_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TermContext_15, 0) = ((MR_Box) (FileName_33));
      MR_hl_field(0, TermContext_15, 1) = ((MR_Box) (Context_14));
    }
    if (((MR_tag((MR_Word) Token_13)) == (MR_Integer) 1))
    {
      MR_String OpName0_18 = ((MR_String) ((MR_hl_field(1, Token_13, 0))));

      *VariableTerms_10 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(TypeClassInfo_for_op_table_28, (MR_Word) ((MR_Unsigned) 0U), MaybeQualifier_8, TermContext_15, OpName0_18, OpName_9, STATE_VARIABLE_TokensLeft_1_23, STATE_VARIABLE_TokensLeft_20, STATE_VARIABLE_PS_0_21, STATE_VARIABLE_PS_22);
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Token_13)) == (MR_Integer) 2))
    {
      MR_String VariableOp_16 = ((MR_String) ((MR_hl_field(2, Token_13, 0))));
      MR_Word Var_17;
      MR_Word Var_25;

      *MaybeQualifier_8 = (MR_Word) ((MR_Unsigned) 0U);
      *OpName_9 = (MR_String) "";
      succeeded = (strcmp(VariableOp_16, (MR_String) "_") == 0);
      if (succeeded)
      {
        MR_Word VarSet0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, 2))));
        MR_Word VarSet_39;
        MR_String Var_56;
        MR_Box Var_57;
        MR_Word Var_59;
        MR_Word Var_60;

        mercury__varset__new_var_3_p_0(TypeInfo_for_T_29, &Var_17, VarSet0_38, &VarSet_39);
        Var_56 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, 0))));
        Var_57 = (MR_hl_field(0, STATE_VARIABLE_PS_0_21, 1));
        Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, 3))));
        Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, 4))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_PS_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
          MR_hl_field(0, base, 1) = Var_57;
          MR_hl_field(0, base, 2) = ((MR_Box) (VarSet_39));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_59));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_60));
        }
      }
      else
      {
        MR_Word Names0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, 3))));
        MR_Word Var0_41;
        MR_Word TypeInfo_24_48;
        MR_Box conv0_Var0_41;

        {
          TypeInfo_24_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_24_48, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_24_48, 1) = ((MR_Box) (TypeInfo_for_T_29));
        }
        succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_24_48, Names0_40, ((MR_Box) (VariableOp_16)), &conv0_Var0_41);
        if (succeeded)
        {
          Var0_41 = ((MR_Word) (conv0_Var0_41));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_17 = Var0_41;
          *STATE_VARIABLE_PS_22 = STATE_VARIABLE_PS_0_21;
        }
        else
        {
          MR_Word TypeInfo_27_51;
          MR_Word Names_42;
          MR_Word VarSet0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, 2))));
          MR_Word VarSet_45;
          MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, VarSet0_44, 0))));
          MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, VarSet0_44, 1))));
          MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, VarSet0_44, 2))));
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Integer Var_77;
          MR_Integer Var_78 = (MR_Integer) (Var_69);
          MR_String Var_81;
          MR_Box Var_82;
          MR_Word Var_85;

          Var_77 = (MR_Integer) ((MR_Unsigned) Var_78 + (MR_Unsigned) 1);
          Var_17 = (MR_Word) (Var_77);
          Var_72 = (MR_Word) (Var_77);
          {
            TypeInfo_27_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_27_51, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_27_51, 1) = ((MR_Box) (TypeInfo_for_T_29));
          }
          mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_29, TypeInfo_27_51, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, ((MR_Box) (VariableOp_16)), Var_70, &Var_73);
          {
            VarSet_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, VarSet_45, 0) = ((MR_Box) (Var_72));
            MR_hl_field(0, VarSet_45, 1) = ((MR_Box) (Var_73));
            MR_hl_field(0, VarSet_45, 2) = ((MR_Box) (Var_71));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_27_51, ((MR_Box) (VariableOp_16)), ((MR_Box) (Var_17)), Names0_40, &Names_42);
          Var_81 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, 0))));
          Var_82 = (MR_hl_field(0, STATE_VARIABLE_PS_0_21, 1));
          Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_PS_22 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_81));
            MR_hl_field(0, base, 1) = Var_82;
            MR_hl_field(0, base, 2) = ((MR_Box) (VarSet_45));
            MR_hl_field(0, base, 3) = ((MR_Box) (Names_42));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_85));
          }
        }
      }
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_17));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (TermContext_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *VariableTerms_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_1_23;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  }
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(
  MR_Word TypeClassInfo_for_op_table_42,
  MR_Word MaybeQualifier0_10,
  MR_Word * MaybeQualifier_11,
  MR_Word OpCtxt0_12,
  MR_String OpName0_13,
  MR_String * OpName_14,
  MR_Word STATE_VARIABLE_TokensLeft_0_26,
  MR_Word * STATE_VARIABLE_TokensLeft_27,
  MR_Word STATE_VARIABLE_PS_0_28,
  MR_Word * STATE_VARIABLE_PS_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_TokensLeft_0_26 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer SepContext_17;
    MR_String OpName1_18;
    MR_Integer NameContext_19;
    MR_Word STATE_VARIABLE_TokensLeft_2_33;
    MR_Word STATE_VARIABLE_TokensLeft_1_30;
    MR_Word Var_31;
    MR_String Var_32;
    MR_Word Var_34;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_31 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_26, 0))));
      SepContext_17 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_26, 1))));
      STATE_VARIABLE_TokensLeft_1_30 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_26, 2))));
      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_32 = ((MR_String) ((MR_hl_field(1, Var_31, 0))));
        succeeded = (strcmp(Var_32, (MR_String) ".") == 0);
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_TokensLeft_1_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_34 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_30, 0))));
            NameContext_19 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_30, 1))));
            STATE_VARIABLE_TokensLeft_2_33 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_1_30, 2))));
            succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 1);
            if (succeeded)
            {
              OpName1_18 = ((MR_String) ((MR_hl_field(1, Var_34, 0))));
              succeeded = (strcmp(OpName1_18, (MR_String) "\140") == 0);
              succeeded = !(succeeded);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word QTerm1_20;
      MR_Word MaybeQualifier01_21;
      MR_Word OpCtxt1_25;
      MR_Word Var_35;
      MR_String FileName_53;
      MR_Word next_value_of_MaybeQualifier0_10;
      MR_Word next_value_of_OpCtxt0_12;
      MR_String next_value_of_OpName0_13;
      MR_Word next_value_of_STATE_VARIABLE_TokensLeft_0_26;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (OpName0_13));
      }
      {
        QTerm1_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, QTerm1_20, 0) = ((MR_Box) (Var_35));
        MR_hl_field(0, QTerm1_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, QTerm1_20, 2) = ((MR_Box) (OpCtxt0_12));
      }
      if ((MaybeQualifier0_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeQualifier01_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeQualifier01_21, 0) = ((MR_Box) (QTerm1_20));
        }
      else
      {
        MR_Word QTerm0_22 = ((MR_Word) ((MR_hl_field(1, MaybeQualifier0_10, 0))));
        MR_Word SepCtxt_23;
        MR_Word QTerm01_24;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_String FileName_48 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_28, 0))));

        {
          SepCtxt_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SepCtxt_23, 0) = ((MR_Box) (FileName_48));
          MR_hl_field(0, SepCtxt_23, 1) = ((MR_Box) (SepContext_17));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (QTerm1_20));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (QTerm0_22));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
        }
        {
          QTerm01_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, QTerm01_24, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[2]));
          MR_hl_field(0, QTerm01_24, 1) = ((MR_Box) (Var_39));
          MR_hl_field(0, QTerm01_24, 2) = ((MR_Box) (SepCtxt_23));
        }
        {
          MaybeQualifier01_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeQualifier01_21, 0) = ((MR_Box) (QTerm01_24));
        }
      }
      FileName_53 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_28, 0))));
      {
        OpCtxt1_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OpCtxt1_25, 0) = ((MR_Box) (FileName_53));
        MR_hl_field(0, OpCtxt1_25, 1) = ((MR_Box) (NameContext_19));
      }
      // direct tailcall eliminated
      ;
      next_value_of_MaybeQualifier0_10 = MaybeQualifier01_21;
      next_value_of_OpCtxt0_12 = OpCtxt1_25;
      next_value_of_OpName0_13 = OpName1_18;
      next_value_of_STATE_VARIABLE_TokensLeft_0_26 = STATE_VARIABLE_TokensLeft_2_33;
      MaybeQualifier0_10 = next_value_of_MaybeQualifier0_10;
      OpCtxt0_12 = next_value_of_OpCtxt0_12;
      OpName0_13 = next_value_of_OpName0_13;
      STATE_VARIABLE_TokensLeft_0_26 = next_value_of_STATE_VARIABLE_TokensLeft_0_26;
      continue;
    }
    else
    {
      *MaybeQualifier_11 = MaybeQualifier0_10;
      *OpName_14 = OpName0_13;
      *STATE_VARIABLE_PS_29 = STATE_VARIABLE_PS_0_28;
      *STATE_VARIABLE_TokensLeft_27 = STATE_VARIABLE_TokensLeft_0_26;
    }
    break;
  }
}

void MR_CALL 
mercury__mercury_term_parser__check_for_errors_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word Parse_5,
  MR_Word VarSet_6,
  MR_Word Tokens_7,
  MR_Word * Result_8)
{
  MR_Word MaybeBadTokenMsg_9;

  mercury__mercury_term_parser__check_for_bad_token_2_p_0(Tokens_7, &MaybeBadTokenMsg_9);
  if ((MaybeBadTokenMsg_9 == (MR_Word) ((MR_Unsigned) 0U)))
    if (((MR_tag((MR_Word) Parse_5)) == (MR_Integer) 1))
    {
      MR_Word PrError_12 = ((MR_Word) ((MR_hl_field(1, Parse_5, 0))));
      MR_String ErrorMsg_14;
      MR_Integer LineNum_17;

      if (((MR_tag((MR_Word) PrError_12)) == (MR_Integer) 0))
      {
        LineNum_17 = ((MR_Integer) ((MR_hl_field(0, PrError_12, 0))));
        ErrorMsg_14 = ((MR_String) ((MR_hl_field(0, PrError_12, 1))));
      }
      else
      {
        MR_Integer Context_20;
        MR_Word TokenListTail_21;

        ErrorMsg_14 = ((MR_String) ((MR_hl_field(1, PrError_12, 0))));
        Context_20 = ((MR_Integer) ((MR_hl_field(1, Tokens_7, 1))));
        TokenListTail_21 = ((MR_Word) ((MR_hl_field(1, Tokens_7, 2))));
        mercury__mercury_term_parser__get_last_token_context_loop_3_p_0(Context_20, TokenListTail_21, &LineNum_17);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ErrorMsg_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (LineNum_17));
      }
    }
    else
    {
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(0, Parse_5, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (VarSet_6));
        MR_hl_field(2, base, 1) = ((MR_Box) (Term_15));
      }
    }
  else
  {
    MR_String Message_10;
    MR_Integer LineNum_11;
    MR_Tuple Var_16 = ((MR_Tuple) ((MR_hl_field(1, MaybeBadTokenMsg_9, 0))));

    Message_10 = ((MR_String) ((MR_hl_field(0, Var_16, 0))));
    LineNum_11 = ((MR_Integer) ((MR_hl_field(0, Var_16, 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Message_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (LineNum_11));
    }
  }
}

static void MR_CALL 
mercury__mercury_term_parser__get_last_token_context_loop_3_p_0(
  MR_Integer CurLastContext_4,
  MR_Word TokenList_5,
  MR_Integer * LastContext_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TokenList_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *LastContext_6 = CurLastContext_4;
    else
    {
      MR_Integer Context_8 = ((MR_Integer) ((MR_hl_field(1, TokenList_5, 1))));
      MR_Word TokenListTail_9 = ((MR_Word) ((MR_hl_field(1, TokenList_5, 2))));
      MR_Integer next_value_of_CurLastContext_4 = Context_8;
      MR_Word next_value_of_TokenList_5 = TokenListTail_9;

      // direct tailcall eliminated
      ;
      CurLastContext_4 = next_value_of_CurLastContext_4;
      TokenList_5 = next_value_of_TokenList_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__check_for_bad_token_2_p_0(
  MR_Word TokenList_3,
  MR_Word * MaybeBadTokenMsg_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TokenList_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeBadTokenMsg_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Token_5 = ((MR_Word) ((MR_hl_field(1, TokenList_3, 0))));
      MR_Integer LineNum0_6 = ((MR_Integer) ((MR_hl_field(1, TokenList_3, 1))));
      MR_Word Tokens_7 = ((MR_Word) ((MR_hl_field(1, TokenList_3, 2))));

      switch (MR_tag((MR_Word) Token_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_TokenList_3 = Tokens_7;

            // direct tailcall eliminated
            ;
            TokenList_3 = next_value_of_TokenList_3;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Token_5, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word next_value_of_TokenList_3 = Tokens_7;

                // direct tailcall eliminated
                ;
                TokenList_3 = next_value_of_TokenList_3;
                continue;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Char Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(3, Token_5, 1)));
                MR_Integer Code_12;
                MR_String Hex_13;
                MR_String Decimal_14;
                MR_Tuple Var_38;
                MR_String Message_44;
                MR_String Var_47;
                MR_String Var_49;
                MR_String Var_50;

{
#define MR_PROC_LABEL mercury__mercury_term_parser__check_for_bad_token_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_11 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Code_12  = Int;
}
                mercury__string__int_to_base_string_3_p_0(Code_12, (MR_Integer) 16, &Hex_13);
                mercury__string__int_to_base_string_3_p_0(Code_12, (MR_Integer) 10, &Decimal_14);
                mercury__string__append_3_p_2(Decimal_14, (MR_String) ") in input.", &Var_47);
                mercury__string__append_3_p_2((MR_String) " (", Var_47, &Var_49);
                mercury__string__append_3_p_2(Hex_13, Var_49, &Var_50);
                mercury__string__append_3_p_2((MR_String) "Syntax error: illegal character 0x", Var_50, &Message_44);
                {
                  Var_38 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_38, 0) = ((MR_Box) (Message_44));
                  MR_hl_field(0, Var_38, 1) = ((MR_Box) (LineNum0_6));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeBadTokenMsg_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String ErrorMessage_15 = ((MR_String) ((MR_hl_field(3, Token_5, 1))));
                MR_Tuple Var_43;
                MR_String Message_45;
                MR_String Var_54;

                mercury__string__append_3_p_2(ErrorMessage_15, (MR_String) ".", &Var_54);
                mercury__string__append_3_p_2((MR_String) "Syntax error: ", Var_54, &Message_45);
                {
                  Var_43 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_43, 0) = ((MR_Box) (Message_45));
                  MR_hl_field(0, Var_43, 1) = ((MR_Box) (LineNum0_6));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeBadTokenMsg_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_43));
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word IO_Error_8 = ((MR_Word) ((MR_hl_field(3, Token_5, 1))));
                MR_String IO_ErrorMessage_9;
                MR_String Message_10;
                MR_Tuple Var_29;

                mercury__io__error_message_2_p_0(IO_Error_8, &IO_ErrorMessage_9);
                mercury__string__append_3_p_2((MR_String) "I/O error: ", IO_ErrorMessage_9, &Message_10);
                {
                  Var_29 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_29, 0) = ((MR_Box) (Message_10));
                  MR_hl_field(0, Var_29, 1) = ((MR_Box) (LineNum0_6));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeBadTokenMsg_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_29));
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____expected_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_parser____Unify____expected_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser____Compare____expected_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mercury_term_parser____Compare____expected_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_close_token_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_parser____Unify____nest_close_token_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser____Compare____nest_close_token_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mercury_term_parser____Compare____nest_close_token_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_open_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_parser____Unify____nest_open_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser____Compare____nest_open_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mercury_term_parser____Compare____nest_open_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_open_token_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_parser____Unify____nest_open_token_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser____Compare____nest_open_token_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mercury_term_parser____Compare____nest_open_token_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____nest_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_parser____Unify____nest_stack_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser____Compare____nest_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mercury_term_parser____Compare____nest_stack_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_parser____Unify____parse_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser____Compare____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mercury_term_parser____Compare____parse_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____parser_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_parser____Unify____parser_state_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser____Compare____parser_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mercury_term_parser____Compare____parser_state_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____pr_error_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_parser____Unify____pr_error_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser____Compare____pr_error_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mercury_term_parser____Compare____pr_error_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____read_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_parser____Unify____read_term_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser____Compare____read_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mercury_term_parser____Compare____read_term_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____read_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_parser____Unify____read_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser____Compare____read_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mercury_term_parser____Compare____read_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____term_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_parser____Unify____term_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__mercury_term_parser____Compare____term_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__mercury_term_parser____Compare____term_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mercury_term_parser__init(void)
{
}

void mercury__mercury_term_parser__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_expected_info_0);
  MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_close_token_0);
  MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_0);
  MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_open_token_0);
  MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_nest_stack_0);
  MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_parse_result_1);
  MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_parser_state_2);
  MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_pr_error_info_0);
  MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_read_term_1);
  MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_read_term_0);
  MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_term_kind_0);
}

void mercury__mercury_term_parser__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mercury_term_parser__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mercury_term_parser.
