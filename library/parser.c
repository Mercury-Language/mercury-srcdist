/*
** Automatically generated from `parser.m'
** by the Mercury compiler,
** version DEV
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module parser. */
/* :- implementation. */

/*
INIT mercury__parser__init
ENDINIT
*/

#include "parser.mih"


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
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 93 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_0[1];

#line 96 "parser.c"
static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parse_1_0;

#line 99 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_1[2];

#line 102 "parser.c"
static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parse_1_1;

#line 105 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_0[1];

#line 108 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_1[1];

#line 111 "parser.c"
static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_parse_1[2];

#line 114 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_parse_1[2];

#line 117 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_parse_1[2];

#line 120 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__varset__pti_varset_1__pseudo_2;

#line 123 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__term__pti_var_1__pseudo_2;

#line 126 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2;

#line 129 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parser_state_2_0[4];

#line 132 "parser.c"
static const MR_ConstString mercury__parser__parser__field_names_parser_state_2_0[4];

#line 135 "parser.c"
static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parser_state_2_0;

#line 138 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parser_state_2_0[1];

#line 141 "parser.c"
static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_parser_state_2[1];

#line 144 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_parser_state_2[1];

#line 147 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_parser_state_2[1];

#line 150 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_0;

#line 153 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_1;

#line 156 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_2;

#line 159 "parser.c"
static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_value_ordered_term_kind_0[3];

#line 162 "parser.c"
static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_name_ordered_term_kind_0[3];

#line 165 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_term_kind_0[3];

#line 168 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0_10001(
#line 171 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 173 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 175 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3);

#line 178 "parser.c"
static void MR_CALL 
mercury__parser____Compare____parse_1_0_10001(
#line 181 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 183 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_2,
#line 185 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3,
#line 187 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4);

#line 190 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____parser_state_2_0_10001(
#line 193 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 195 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 197 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3,
#line 199 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4);

#line 202 "parser.c"
static void MR_CALL 
mercury__parser____Compare____parser_state_2_0_10001(
#line 205 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 207 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 209 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_3,
#line 211 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4,
#line 213 "parser.c"
  MR_Box mercury__parser__wrapper_arg_5);

#line 216 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0_10001(
#line 219 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 221 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2);

#line 224 "parser.c"
static void MR_CALL 
mercury__parser____Compare____term_kind_0_0_10001(
#line 227 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_1,
#line 229 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 231 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1191 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
#line 1191 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_24,
#line 1191 "parser.m"
  MR_String mercury__parser__VarName_5,
#line 1191 "parser.m"
  MR_Word * mercury__parser__Var_6,
#line 1191 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_ParserState_0_13,
#line 1191 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_ParserState_14);

#line 1084 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1084 "parser.m"
  MR_Word mercury__parser__ParserState_4,
#line 1084 "parser.m"
  MR_Integer mercury__parser__TokenContext_5,
#line 1084 "parser.m"
  MR_Word * mercury__parser__TermContext_6);

#line 1021 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(
#line 1021 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_25,
#line 1021 "parser.m"
  MR_Word mercury__parser__Token_8,
#line 1021 "parser.m"
  MR_Integer mercury__parser__Context_9,
#line 1021 "parser.m"
  MR_String mercury__parser__UsualMessage_10,
#line 1021 "parser.m"
  MR_Word * mercury__parser__Error_11,
#line 1021 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
#line 1021 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
#line 1021 "parser.m"
  MR_Word mercury__parser__PS_13);

#line 1007 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 1007 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_16,
#line 1007 "parser.m"
  MR_String mercury__parser__UsualMessage_6,
#line 1007 "parser.m"
  MR_Word * mercury__parser__Error_7,
#line 1007 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_12,
#line 1007 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_13,
#line 1007 "parser.m"
  MR_Word mercury__parser__PS_9);

#line 863 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
#line 863 "parser.m"
  MR_Word mercury__parser__Term_3,
#line 863 "parser.m"
  MR_Word * mercury__parser__ArgTerms_4);

#line 607 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(
#line 607 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_44,
#line 607 "parser.m"
  MR_Word mercury__parser__MaybeQualifier0_10,
#line 607 "parser.m"
  MR_Word * mercury__parser__MaybeQualifier_11,
#line 607 "parser.m"
  MR_Word mercury__parser__OpCtxt0_12,
#line 607 "parser.m"
  MR_String mercury__parser__OpName0_13,
#line 607 "parser.m"
  MR_String * mercury__parser__OpName_14,
#line 607 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_27,
#line 607 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_28,
#line 607 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_29,
#line 607 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_30);

#line 1093 "parser.m"
static void MR_CALL 
mercury__parser__could_start_term_2_p_0(
#line 1093 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1093 "parser.m"
  MR_Word * mercury__parser__HeadVar__2_2);

#line 1077 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_priority_3_p_0(
#line 1077 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1077 "parser.m"
  MR_Integer mercury__parser__MaxPriority_2,
#line 1077 "parser.m"
  MR_Integer mercury__parser__Priority_3);

#line 1059 "parser.m"
static MR_bool MR_CALL 
mercury__parser__find_first_binary_prefix_op_5_p_0(
#line 1059 "parser.m"
  MR_Word mercury__parser__OpInfo_6,
#line 1059 "parser.m"
  MR_Word mercury__parser__OtherOpInfos_7,
#line 1059 "parser.m"
  MR_Integer * mercury__parser__OpPriority_8,
#line 1059 "parser.m"
  MR_Word * mercury__parser__RightAssoc_9,
#line 1059 "parser.m"
  MR_Word * mercury__parser__RightRightAssoc_10);

#line 1046 "parser.m"
static MR_bool MR_CALL 
mercury__parser__find_first_prefix_op_4_p_0(
#line 1046 "parser.m"
  MR_Word mercury__parser__OpInfo_5,
#line 1046 "parser.m"
  MR_Word mercury__parser__OtherOpInfos_6,
#line 1046 "parser.m"
  MR_Integer * mercury__parser__OpPriority_7,
#line 1046 "parser.m"
  MR_Word * mercury__parser__RightAssoc_8);

#line 962 "parser.m"
static void MR_CALL 
mercury__parser__parse_args_5_p_0(
#line 962 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_35,
#line 962 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_34,
#line 962 "parser.m"
  MR_Word * mercury__parser__List_6,
#line 962 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
#line 962 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
#line 962 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
#line 962 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22);

#line 908 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_tail_6_p_0(
#line 908 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_68,
#line 908 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_67,
#line 908 "parser.m"
  MR_Word mercury__parser__Arg_7,
#line 908 "parser.m"
  MR_Word * mercury__parser__List_8,
#line 908 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
#line 908 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
#line 908 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_23,
#line 908 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_24);

#line 893 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_5_p_0(
#line 893 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_22,
#line 893 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_21,
#line 893 "parser.m"
  MR_Word * mercury__parser__List_6,
#line 893 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_13,
#line 893 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_14,
#line 893 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_15,
#line 893 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_16);

#line 873 "parser.m"
static void MR_CALL 
mercury__parser__parse_special_atom_7_p_0(
#line 873 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_32,
#line 873 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_31,
#line 873 "parser.m"
  MR_String mercury__parser__Atom_8,
#line 873 "parser.m"
  MR_Word mercury__parser__TermContext_9,
#line 873 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 873 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
#line 873 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
#line 873 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
#line 873 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21);

#line 838 "parser.m"
static void MR_CALL 
mercury__parser__parse_higher_order_term_rest_7_p_0(
#line 838 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_34,
#line 838 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_33,
#line 838 "parser.m"
  MR_Word mercury__parser__BaseTerm_8,
#line 838 "parser.m"
  MR_Integer mercury__parser__Context_9,
#line 838 "parser.m"
  MR_Word * mercury__parser__TermParse_10,
#line 838 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_20,
#line 838 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_21,
#line 838 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_22,
#line 838 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_23);

#line 664 "parser.m"
static void MR_CALL 
mercury__parser__parse_simple_term_8_p_0(
#line 664 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_153,
#line 664 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_152,
#line 664 "parser.m"
  MR_Word mercury__parser__Token_9,
#line 664 "parser.m"
  MR_Integer mercury__parser__Context_10,
#line 664 "parser.m"
  MR_Integer mercury__parser__Prec_11,
#line 664 "parser.m"
  MR_Word * mercury__parser__TermParse_12,
#line 664 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_47,
#line 664 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_48,
#line 664 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_49,
#line 664 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_50);

#line 585 "parser.m"
static MR_bool MR_CALL 
mercury__parser__parse_backquoted_operator_7_p_0(
#line 585 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_31,
#line 585 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_30,
#line 585 "parser.m"
  MR_Word * mercury__parser__MaybeQualifier_8,
#line 585 "parser.m"
  MR_String * mercury__parser__OpName_9,
#line 585 "parser.m"
  MR_Word * mercury__parser__VariableTerms_10,
#line 585 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
#line 585 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
#line 585 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
#line 585 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22);

#line 502 "parser.m"
static void MR_CALL 
mercury__parser__parse_rest_9_p_0(
#line 502 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_84,
#line 502 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_83,
#line 502 "parser.m"
  MR_Integer mercury__parser__MaxPriority_10,
#line 502 "parser.m"
  MR_Word mercury__parser__TermKind_11,
#line 502 "parser.m"
  MR_Integer mercury__parser__LeftPriority_12,
#line 502 "parser.m"
  MR_Word mercury__parser__LeftTerm_13,
#line 502 "parser.m"
  MR_Word * mercury__parser__Term_14,
#line 502 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_41,
#line 502 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_42,
#line 502 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_43,
#line 502 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_44);

#line 379 "parser.m"
static void MR_CALL 
mercury__parser__parse_left_term_8_p_0(
#line 379 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_113,
#line 379 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_112,
#line 379 "parser.m"
  MR_Integer mercury__parser__MaxPriority_9,
#line 379 "parser.m"
  MR_Word mercury__parser__TermKind_10,
#line 379 "parser.m"
  MR_Integer * mercury__parser__OpPriority_11,
#line 379 "parser.m"
  MR_Word * mercury__parser__Term_12,
#line 379 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_50,
#line 379 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_51,
#line 379 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_52,
#line 379 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_53);

#line 361 "parser.m"
static void MR_CALL 
mercury__parser__do_parse_term_7_p_0(
#line 361 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_27,
#line 361 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_26,
#line 361 "parser.m"
  MR_Integer mercury__parser__MaxPriority_8,
#line 361 "parser.m"
  MR_Word mercury__parser__TermKind_9,
#line 361 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 361 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
#line 361 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
#line 361 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
#line 361 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21);

#line 334 "parser.m"
static void MR_CALL 
mercury__parser__parse_arg_5_p_0(
#line 334 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_21,
#line 334 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
#line 334 "parser.m"
  MR_Word * mercury__parser__Term_6,
#line 334 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_11,
#line 334 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_12,
#line 334 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_13,
#line 334 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_14);

#line 325 "parser.m"
static void MR_CALL 
mercury__parser__parse_term_5_p_0(
#line 325 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_21,
#line 325 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
#line 325 "parser.m"
  MR_Word * mercury__parser__Term_6,
#line 325 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_10,
#line 325 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_11,
#line 325 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_12,
#line 325 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_13);

#line 257 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_for_bad_token_3_p_0(
#line 257 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 257 "parser.m"
  MR_String * mercury__parser__Message_2,
#line 257 "parser.m"
  MR_Integer * mercury__parser__LineNum_3);


static /* final */ const MR_Box mercury__parser_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__parser_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__parser_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__parser_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__parser_scalar_common_6[1][4];

static /* final */ const MR_Box mercury__parser_scalar_common_7[5][1];


#line 99 "lexer.opt"
/* sealed */ struct mercury__parser__vector_common_type_5_0_s {
#line 99 "lexer.opt"
  const MR_Word mercury__parser__vector_common_type_5_0__vct_5_f_0;
#line 99 "lexer.opt"
};

static /* final */ const struct mercury__parser__vector_common_type_5_0_s mercury__parser_vector_common_5[118];

#line 715 "parser.m"
/* sealed */ struct mercury__parser__vector_common_type_8_0_s {
#line 715 "parser.m"
  const MR_Word mercury__parser__vector_common_type_8_0__vct_8_f_0;
#line 715 "parser.m"
};

static /* final */ const struct mercury__parser__vector_common_type_8_0_s mercury__parser_vector_common_8[4];



static /* final */ const MR_Box mercury__parser_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ") in input")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__parser_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__parser_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__parser_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__parser_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__parser_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__parser_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__parser_scalar_common_6[1][4] = {
  /* row 0 */
  {
    (MR_Integer) 4286578719,
    (MR_Integer) 4294967295,
    (MR_Integer) 4294967295,
    (MR_Integer) 4194303
  },
};

static /* final */ const MR_Box mercury__parser_scalar_common_7[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "[]"))
  },
};


static /* final */ const struct mercury__parser__vector_common_type_5_0_s mercury__parser_vector_common_5[118] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 6 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 7 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 8 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 9 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 10 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 11 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 12 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 13 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 14 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 15 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 16 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 17 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 18 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 19 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 20 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 21 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 22 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 23 */   {     (MR_Integer) 0 },
  /* row 24 */   {     (MR_Integer) 13 },
  /* row 25 */   {     (MR_Integer) 8 },
  /* row 26 */   {     (MR_Integer) 10 },
  /* row 27 */   {     (MR_Integer) 12 },
  /* row 28 */   {     (MR_Integer) 7 },
  /* row 29 */   {     (MR_Integer) 13 },
  /* row 30 */   {     (MR_Integer) 8 },
  /* row 31 */   {     (MR_Integer) 5 },
  /* row 32 */   {     (MR_Integer) 5 },
  /* row 33 */   {     (MR_Integer) 13 },
  /* row 34 */   {     (MR_Integer) 13 },
  /* row 35 */   {     (MR_Integer) 5 },
  /* row 36 */   {     (MR_Integer) 13 },
  /* row 37 */   {     (MR_Integer) 6 },
  /* row 38 */   {     (MR_Integer) 9 },
  /* row 39 */   {     (MR_Integer) 3 },
  /* row 40 */   {     (MR_Integer) 4 },
  /* row 41 */   {     (MR_Integer) 4 },
  /* row 42 */   {     (MR_Integer) 4 },
  /* row 43 */   {     (MR_Integer) 4 },
  /* row 44 */   {     (MR_Integer) 4 },
  /* row 45 */   {     (MR_Integer) 4 },
  /* row 46 */   {     (MR_Integer) 4 },
  /* row 47 */   {     (MR_Integer) 4 },
  /* row 48 */   {     (MR_Integer) 4 },
  /* row 49 */   {     (MR_Integer) 13 },
  /* row 50 */   {     (MR_Integer) 5 },
  /* row 51 */   {     (MR_Integer) 13 },
  /* row 52 */   {     (MR_Integer) 13 },
  /* row 53 */   {     (MR_Integer) 13 },
  /* row 54 */   {     (MR_Integer) 13 },
  /* row 55 */   {     (MR_Integer) 13 },
  /* row 56 */   {     (MR_Integer) 2 },
  /* row 57 */   {     (MR_Integer) 2 },
  /* row 58 */   {     (MR_Integer) 2 },
  /* row 59 */   {     (MR_Integer) 2 },
  /* row 60 */   {     (MR_Integer) 2 },
  /* row 61 */   {     (MR_Integer) 2 },
  /* row 62 */   {     (MR_Integer) 2 },
  /* row 63 */   {     (MR_Integer) 2 },
  /* row 64 */   {     (MR_Integer) 2 },
  /* row 65 */   {     (MR_Integer) 2 },
  /* row 66 */   {     (MR_Integer) 2 },
  /* row 67 */   {     (MR_Integer) 2 },
  /* row 68 */   {     (MR_Integer) 2 },
  /* row 69 */   {     (MR_Integer) 2 },
  /* row 70 */   {     (MR_Integer) 2 },
  /* row 71 */   {     (MR_Integer) 2 },
  /* row 72 */   {     (MR_Integer) 2 },
  /* row 73 */   {     (MR_Integer) 2 },
  /* row 74 */   {     (MR_Integer) 2 },
  /* row 75 */   {     (MR_Integer) 2 },
  /* row 76 */   {     (MR_Integer) 2 },
  /* row 77 */   {     (MR_Integer) 2 },
  /* row 78 */   {     (MR_Integer) 2 },
  /* row 79 */   {     (MR_Integer) 2 },
  /* row 80 */   {     (MR_Integer) 2 },
  /* row 81 */   {     (MR_Integer) 2 },
  /* row 82 */   {     (MR_Integer) 5 },
  /* row 83 */   {     (MR_Integer) 13 },
  /* row 84 */   {     (MR_Integer) 5 },
  /* row 85 */   {     (MR_Integer) 13 },
  /* row 86 */   {     (MR_Integer) 2 },
  /* row 87 */   {     (MR_Integer) 11 },
  /* row 88 */   {     (MR_Integer) 1 },
  /* row 89 */   {     (MR_Integer) 1 },
  /* row 90 */   {     (MR_Integer) 1 },
  /* row 91 */   {     (MR_Integer) 1 },
  /* row 92 */   {     (MR_Integer) 1 },
  /* row 93 */   {     (MR_Integer) 1 },
  /* row 94 */   {     (MR_Integer) 1 },
  /* row 95 */   {     (MR_Integer) 1 },
  /* row 96 */   {     (MR_Integer) 1 },
  /* row 97 */   {     (MR_Integer) 1 },
  /* row 98 */   {     (MR_Integer) 1 },
  /* row 99 */   {     (MR_Integer) 1 },
  /* row 100 */   {     (MR_Integer) 1 },
  /* row 101 */   {     (MR_Integer) 1 },
  /* row 102 */   {     (MR_Integer) 1 },
  /* row 103 */   {     (MR_Integer) 1 },
  /* row 104 */   {     (MR_Integer) 1 },
  /* row 105 */   {     (MR_Integer) 1 },
  /* row 106 */   {     (MR_Integer) 1 },
  /* row 107 */   {     (MR_Integer) 1 },
  /* row 108 */   {     (MR_Integer) 1 },
  /* row 109 */   {     (MR_Integer) 1 },
  /* row 110 */   {     (MR_Integer) 1 },
  /* row 111 */   {     (MR_Integer) 1 },
  /* row 112 */   {     (MR_Integer) 1 },
  /* row 113 */   {     (MR_Integer) 1 },
  /* row 114 */   {     (MR_Integer) 5 },
  /* row 115 */   {     (MR_Integer) 5 },
  /* row 116 */   {     (MR_Integer) 5 },
  /* row 117 */   {     (MR_Integer) 13 },
};

static /* final */ const struct mercury__parser__vector_common_type_8_0_s mercury__parser_vector_common_8[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
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
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"



#line 923 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 928 "parser.c"
static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parse_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parser__parser__field_types_parse_1_0,
  NULL,
  NULL,
  NULL
};

#line 943 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__lexer__lexer__type_ctor_info_token_list_0
};

#line 949 "parser.c"
static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parse_1_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__parser__parser__field_types_parse_1_1,
  NULL,
  NULL,
  NULL
};

#line 964 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_0[1] = {
  &mercury__parser__parser__du_functor_desc_parse_1_0
};

#line 969 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_1[1] = {
  &mercury__parser__parser__du_functor_desc_parse_1_1
};

#line 974 "parser.c"
static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_parse_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__parser__parser__du_stag_ordered_parse_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__parser__parser__du_stag_ordered_parse_1_1
  }
};

#line 988 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_parse_1[2] = {
  &mercury__parser__parser__du_functor_desc_parse_1_1,
  &mercury__parser__parser__du_functor_desc_parse_1_0
};

#line 994 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_parse_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1000 "parser.c"
const MR_TypeCtorInfo_Struct mercury__parser__parser__type_ctor_info_parse_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parser____Unify____parse_1_0_10001)),
  ((MR_Box) (mercury__parser____Compare____parse_1_0_10001)),
  (MR_String) "parser",
  (MR_String) "parse",
  {     mercury__parser__parser__du_name_ordered_parse_1 },
  {     mercury__parser__parser__du_ptag_ordered_parse_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__parser__parser__functor_number_map_parse_1
};

#line 1017 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__varset__pti_varset_1__pseudo_2 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1025 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__term__pti_var_1__pseudo_2 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1033 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__parser__term__pti_var_1__pseudo_2
  }
};

#line 1042 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parser_state_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__parser__varset__pti_varset_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2
};

#line 1050 "parser.c"
static const MR_ConstString mercury__parser__parser__field_names_parser_state_2_0[4] = {
  (MR_String) "ps_stream_name",
  (MR_String) "ps_ops_table",
  (MR_String) "ps_varset",
  (MR_String) "ps_var_names"
};

#line 1058 "parser.c"
static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parser_state_2_0 = {
  (MR_String) "parser_state",
  (MR_Integer) 4,
  (MR_Integer) 14,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parser__parser__field_types_parser_state_2_0,
  mercury__parser__parser__field_names_parser_state_2_0,
  NULL,
  NULL
};

#line 1073 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parser_state_2_0[1] = {
  &mercury__parser__parser__du_functor_desc_parser_state_2_0
};

#line 1078 "parser.c"
static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_parser_state_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__parser__parser__du_stag_ordered_parser_state_2_0
  }
};

#line 1087 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_parser_state_2[1] = {
  &mercury__parser__parser__du_functor_desc_parser_state_2_0
};

#line 1092 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_parser_state_2[1] = {
  (MR_Integer) 0
};

#line 1097 "parser.c"
const MR_TypeCtorInfo_Struct mercury__parser__parser__type_ctor_info_parser_state_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parser____Unify____parser_state_2_0_10001)),
  ((MR_Box) (mercury__parser____Compare____parser_state_2_0_10001)),
  (MR_String) "parser",
  (MR_String) "parser_state",
  {     mercury__parser__parser__du_name_ordered_parser_state_2 },
  {     mercury__parser__parser__du_ptag_ordered_parser_state_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__parser__parser__functor_number_map_parser_state_2
};

#line 1114 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_0 = {
  (MR_String) "ordinary_term",
  (MR_Integer) 0
};

#line 1120 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_1 = {
  (MR_String) "argument",
  (MR_Integer) 1
};

#line 1126 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_2 = {
  (MR_String) "list_elem",
  (MR_Integer) 2
};

#line 1132 "parser.c"
static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_value_ordered_term_kind_0[3] = {
  &mercury__parser__parser__enum_functor_desc_term_kind_0_0,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_1,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_2
};

#line 1139 "parser.c"
static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_name_ordered_term_kind_0[3] = {
  &mercury__parser__parser__enum_functor_desc_term_kind_0_1,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_2,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_0
};

#line 1146 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_term_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1153 "parser.c"
const MR_TypeCtorInfo_Struct mercury__parser__parser__type_ctor_info_term_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__parser____Unify____term_kind_0_0_10001)),
  ((MR_Box) (mercury__parser____Compare____term_kind_0_0_10001)),
  (MR_String) "parser",
  (MR_String) "term_kind",
  {     mercury__parser__parser__enum_name_ordered_term_kind_0 },
  {     mercury__parser__parser__enum_value_ordered_term_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__parser__parser__functor_number_map_term_kind_0
};

#line 1170 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0_10001(
#line 1173 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1175 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1177 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3)
#line 1179 "parser.c"
{
#line 1181 "parser.c"
  {
#line 1183 "parser.c"
    MR_bool mercury__parser__succeeded;

#line 1186 "parser.c"
    {
#line 1188 "parser.c"
      mercury__parser__succeeded = mercury__parser____Unify____parse_1_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3));
    }
#line 1191 "parser.c"
    return mercury__parser__succeeded;
#line 1193 "parser.c"
  }
#line 1195 "parser.c"
}

#line 1198 "parser.c"
static void MR_CALL 
mercury__parser____Compare____parse_1_0_10001(
#line 1201 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1203 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_2,
#line 1205 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3,
#line 1207 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4)
#line 1209 "parser.c"
{
#line 1211 "parser.c"
  {
#line 1213 "parser.c"
    MR_Word mercury__parser__conv0_HeadVar__1_1;

#line 1216 "parser.c"
    {
#line 1218 "parser.c"
      mercury__parser____Compare____parse_1_0(((MR_Word) mercury__parser__wrapper_arg_1), &mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_3), ((MR_Word) mercury__parser__wrapper_arg_4));
    }
#line 1221 "parser.c"
    *mercury__parser__wrapper_arg_2 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
#line 1223 "parser.c"
  }
#line 1225 "parser.c"
}

#line 1228 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____parser_state_2_0_10001(
#line 1231 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1233 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1235 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3,
#line 1237 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4)
#line 1239 "parser.c"
{
#line 1241 "parser.c"
  {
#line 1243 "parser.c"
    MR_bool mercury__parser__succeeded;

#line 1246 "parser.c"
    {
#line 1248 "parser.c"
      mercury__parser__succeeded = mercury__parser____Unify____parser_state_2_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3), ((MR_Word) mercury__parser__wrapper_arg_4));
    }
#line 1251 "parser.c"
    return mercury__parser__succeeded;
#line 1253 "parser.c"
  }
#line 1255 "parser.c"
}

#line 1258 "parser.c"
static void MR_CALL 
mercury__parser____Compare____parser_state_2_0_10001(
#line 1261 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1263 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1265 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_3,
#line 1267 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4,
#line 1269 "parser.c"
  MR_Box mercury__parser__wrapper_arg_5)
#line 1271 "parser.c"
{
#line 1273 "parser.c"
  {
#line 1275 "parser.c"
    MR_Word mercury__parser__conv0_HeadVar__1_1;

#line 1278 "parser.c"
    {
#line 1280 "parser.c"
      mercury__parser____Compare____parser_state_2_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), &mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_4), ((MR_Word) mercury__parser__wrapper_arg_5));
    }
#line 1283 "parser.c"
    *mercury__parser__wrapper_arg_3 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
#line 1285 "parser.c"
  }
#line 1287 "parser.c"
}

#line 1290 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0_10001(
#line 1293 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1295 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2)
#line 1297 "parser.c"
{
#line 1299 "parser.c"
  {
#line 1301 "parser.c"
    MR_bool mercury__parser__succeeded;

#line 1304 "parser.c"
    {
#line 1306 "parser.c"
      mercury__parser__succeeded = mercury__parser____Unify____term_kind_0_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2));
    }
#line 1309 "parser.c"
    return mercury__parser__succeeded;
#line 1311 "parser.c"
  }
#line 1313 "parser.c"
}

#line 1316 "parser.c"
static void MR_CALL 
mercury__parser____Compare____term_kind_0_0_10001(
#line 1319 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_1,
#line 1321 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1323 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3)
#line 1325 "parser.c"
{
#line 1327 "parser.c"
  {
#line 1329 "parser.c"
    MR_Word mercury__parser__conv0_HeadVar__1_1;

#line 1332 "parser.c"
    {
#line 1334 "parser.c"
      mercury__parser____Compare____term_kind_0_0(&mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3));
    }
#line 1337 "parser.c"
    *mercury__parser__wrapper_arg_1 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
#line 1339 "parser.c"
  }
#line 1341 "parser.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__parser__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 1191 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
#line 1191 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_24,
#line 1191 "parser.m"
  MR_String mercury__parser__VarName_5,
#line 1191 "parser.m"
  MR_Word * mercury__parser__Var_6,
#line 1191 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_ParserState_0_13,
#line 1191 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_ParserState_14)
#line 1191 "parser.m"
{
#line 1199 "parser.m"
  {
#line 1199 "parser.m"
    MR_bool mercury__parser__succeeded = (strcmp(mercury__parser__VarName_5, (MR_String) "_") == 0);

#line 1199 "parser.m"
    if (mercury__parser__succeeded)
#line 1196 "parser.m"
      {
#line 1196 "parser.m"
        MR_Word mercury__parser__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
#line 1196 "parser.m"
        MR_Word mercury__parser__VarSet_9;
#line 1182 "parser.m"
        MR_String mercury__parser__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
#line 1182 "parser.m"
        MR_Box mercury__parser__V_35_35 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
#line 1182 "parser.m"
        MR_Word mercury__parser__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
#line 1187 "parser.m"
        MR_String mercury__parser__V_42_42;
#line 1187 "parser.m"
        MR_Box mercury__parser__V_43_43;
#line 1187 "parser.m"
        MR_Word mercury__parser__V_45_45;
#line 1187 "parser.m"
        MR_Word mercury__parser__V_44_44;

#line 1197 "parser.m"
        {
#line 1197 "parser.m"
          mercury__varset__new_var_3_p_0(mercury__parser__TypeInfo_for_T_24, mercury__parser__Var_6, mercury__parser__VarSet0_8, &mercury__parser__VarSet_9);
        }
#line 1187 "parser.m"
        mercury__parser__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
#line 1187 "parser.m"
        mercury__parser__V_43_43 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
#line 1187 "parser.m"
        mercury__parser__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
#line 1187 "parser.m"
        mercury__parser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
#line 1187 "parser.m"
        {
#line 1187 "parser.m"
          MR_Word base;
#line 1187 "parser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "parser.m"
          *mercury__parser__STATE_VARIABLE_ParserState_14 = base;
#line 1187 "parser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_42_42));
#line 1187 "parser.m"
          MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__V_43_43;
#line 1187 "parser.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_9));
#line 1187 "parser.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__V_45_45));
#line 1187 "parser.m"
        }
#line 1196 "parser.m"
      }
#line 1199 "parser.m"
    else
#line 1200 "parser.m"
      {
#line 1200 "parser.m"
        MR_Word mercury__parser__Names0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
#line 1184 "parser.m"
        MR_String mercury__parser__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
#line 1184 "parser.m"
        MR_Box mercury__parser__V_49_49 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
#line 1184 "parser.m"
        MR_Word mercury__parser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
#line 1203 "parser.m"
        MR_Word mercury__parser__Var0_11;
#line 1201 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1201 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1201 "parser.m"
        MR_Word mercury__parser__TypeInfo_28_28;
#line 452 "map.opt"
        MR_Box mercury__parser__conv0_Var0_11;

#line 1460 "parser.c"
        {
#line 1462 "parser.c"
          mercury__parser__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1464 "parser.c"
          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_28_28, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_27_27));
#line 1466 "parser.c"
          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_28_28, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_24));
#line 1468 "parser.c"
        }
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__parser__succeeded = mercury__tree234__search_3_p_0(mercury__parser__TypeCtorInfo_26_26, mercury__parser__TypeInfo_28_28, mercury__parser__Names0_10, ((MR_Box) (mercury__parser__VarName_5)), &mercury__parser__conv0_Var0_11);
        }
#line 452 "map.opt"
        if (mercury__parser__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__parser__Var0_11 = ((MR_Word) mercury__parser__conv0_Var0_11);
#line 452 "map.opt"
            mercury__parser__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 1203 "parser.m"
        if (mercury__parser__succeeded)
#line 1202 "parser.m"
          {
#line 1202 "parser.m"
            *mercury__parser__Var_6 = mercury__parser__Var0_11;
#line 1202 "parser.m"
            *mercury__parser__STATE_VARIABLE_ParserState_14 = mercury__parser__STATE_VARIABLE_ParserState_0_13;
#line 1202 "parser.m"
          }
#line 1203 "parser.m"
        else
#line 1204 "parser.m"
          {
#line 1204 "parser.m"
            MR_Word mercury__parser__TypeCtorInfo_29_29;
#line 1204 "parser.m"
            MR_Word mercury__parser__TypeInfo_31_31;
#line 1204 "parser.m"
            MR_Word mercury__parser__TypeCtorInfo_16_69;
#line 1204 "parser.m"
            MR_Word mercury__parser__TypeCtorInfo_18_71;
#line 1204 "parser.m"
            MR_Word mercury__parser__Names_12;
#line 1204 "parser.m"
            MR_Word mercury__parser__VarSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
#line 1204 "parser.m"
            MR_Word mercury__parser__VarSet_19;
#line 1204 "parser.m"
            MR_Word mercury__parser__V_8_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_18, (MR_Integer) 0)));
#line 1204 "parser.m"
            MR_Word mercury__parser__V_9_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_18, (MR_Integer) 1)));
#line 1204 "parser.m"
            MR_Word mercury__parser__V_10_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_18, (MR_Integer) 2)));
#line 1204 "parser.m"
            MR_Word mercury__parser__V_11_67;
#line 1204 "parser.m"
            MR_Word mercury__parser__V_12_68;
#line 1204 "parser.m"
            MR_Integer mercury__parser__V_4_72;
#line 1204 "parser.m"
            MR_Integer mercury__parser__V_5_73 = (MR_Integer) mercury__parser__V_8_63;
#line 1204 "parser.m"
            MR_String mercury__parser__V_85_85;
#line 1204 "parser.m"
            MR_Box mercury__parser__V_86_86;
#line 1182 "parser.m"
            MR_String mercury__parser__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
#line 1182 "parser.m"
            MR_Box mercury__parser__V_57_57 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
#line 1182 "parser.m"
            MR_Word mercury__parser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
#line 1187 "parser.m"
            MR_Word mercury__parser__V_87_87;
#line 1187 "parser.m"
            MR_Word mercury__parser__V_88_88;

#line 132 "term.opt"
            mercury__parser__V_4_72 = (mercury__parser__V_5_73 + (MR_Integer) 1);
#line 131 "term.opt"
            *mercury__parser__Var_6 = (MR_Word) mercury__parser__V_4_72;
#line 131 "term.opt"
            mercury__parser__V_11_67 = (MR_Word) mercury__parser__V_4_72;
#line 1548 "parser.c"
            mercury__parser__TypeCtorInfo_16_69 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1550 "parser.c"
            {
#line 1552 "parser.c"
              mercury__parser__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1554 "parser.c"
              MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_31_31, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_16_69));
#line 1556 "parser.c"
              MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_31_31, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_24));
#line 1558 "parser.c"
            }
#line 1560 "parser.c"
            mercury__parser__TypeCtorInfo_18_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__parser__TypeInfo_for_T_24, mercury__parser__TypeInfo_31_31, mercury__parser__TypeCtorInfo_18_71, *mercury__parser__Var_6, ((MR_Box) (mercury__parser__VarName_5)), mercury__parser__V_9_64, &mercury__parser__V_12_68);
            }
#line 126 "varset.opt"
            {
#line 126 "varset.opt"
              mercury__parser__VarSet_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 126 "varset.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__VarSet_19, 0) = ((MR_Box) (mercury__parser__V_11_67));
#line 126 "varset.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__VarSet_19, 1) = ((MR_Box) (mercury__parser__V_12_68));
#line 126 "varset.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__VarSet_19, 2) = ((MR_Box) (mercury__parser__V_10_65));
#line 126 "varset.opt"
            }
#line 1579 "parser.c"
            mercury__parser__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1206 "parser.m"
            {
#line 1206 "parser.m"
              mercury__map__det_insert_4_p_0(mercury__parser__TypeCtorInfo_29_29, mercury__parser__TypeInfo_31_31, ((MR_Box) (mercury__parser__VarName_5)), ((MR_Box) (*mercury__parser__Var_6)), mercury__parser__Names0_10, &mercury__parser__Names_12);
            }
#line 1187 "parser.m"
            mercury__parser__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
#line 1187 "parser.m"
            mercury__parser__V_86_86 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
#line 1187 "parser.m"
            mercury__parser__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
#line 1187 "parser.m"
            mercury__parser__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
#line 1189 "parser.m"
            {
#line 1189 "parser.m"
              MR_Word base;
#line 1189 "parser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "parser.m"
              *mercury__parser__STATE_VARIABLE_ParserState_14 = base;
#line 1189 "parser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_85_85));
#line 1189 "parser.m"
              MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__V_86_86;
#line 1189 "parser.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_19));
#line 1189 "parser.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Names_12));
#line 1189 "parser.m"
            }
#line 1204 "parser.m"
          }
#line 1200 "parser.m"
      }
#line 1199 "parser.m"
  }
#line 1191 "parser.m"
}

#line 1084 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1084 "parser.m"
  MR_Word mercury__parser__ParserState_4,
#line 1084 "parser.m"
  MR_Integer mercury__parser__TokenContext_5,
#line 1084 "parser.m"
  MR_Word * mercury__parser__TermContext_6)
#line 1084 "parser.m"
{
#line 1087 "parser.m"
  {
#line 1087 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1087 "parser.m"
    MR_String mercury__parser__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 0)));
#line 1178 "parser.m"
    MR_Box mercury__parser__V_12_12 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 1));
#line 1178 "parser.m"
    MR_Word mercury__parser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 2)));
#line 1178 "parser.m"
    MR_Word mercury__parser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 3)));

#line 123 "term.opt"
    {
#line 123 "term.opt"
      MR_Word base;
#line 123 "term.opt"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "term.opt"
      *mercury__parser__TermContext_6 = base;
#line 123 "term.opt"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__FileName_7));
#line 123 "term.opt"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__parser__TokenContext_5));
#line 123 "term.opt"
    }
#line 1087 "parser.m"
  }
#line 1084 "parser.m"
}

#line 1021 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(
#line 1021 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_25,
#line 1021 "parser.m"
  MR_Word mercury__parser__Token_8,
#line 1021 "parser.m"
  MR_Integer mercury__parser__Context_9,
#line 1021 "parser.m"
  MR_String mercury__parser__UsualMessage_10,
#line 1021 "parser.m"
  MR_Word * mercury__parser__Error_11,
#line 1021 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
#line 1021 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
#line 1021 "parser.m"
  MR_Word mercury__parser__PS_13)
#line 1021 "parser.m"
{
#line 1025 "parser.m"
  {
#line 1025 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1032 "parser.m"
    MR_String mercury__parser__Op_14;
#line 1032 "parser.m"
    MR_Box mercury__parser__OpTable_15;
#line 1180 "parser.m"
    MR_String mercury__parser__V_32_32;
#line 1180 "parser.m"
    MR_Word mercury__parser__V_33_33;
#line 1180 "parser.m"
    MR_Word mercury__parser__V_34_34;

#line 1028 "parser.m"
    {
#line 1028 "parser.m"
      MR_Word base;
#line 1028 "parser.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "parser.m"
      *mercury__parser__STATE_VARIABLE_TokensLeft_22 = base;
#line 1028 "parser.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Token_8));
#line 1028 "parser.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Context_9));
#line 1028 "parser.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_21));
#line 1028 "parser.m"
    }
#line 1031 "parser.m"
    if ((mercury__parser__Token_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 1031 "parser.m"
      {
#line 1031 "parser.m"
        mercury__parser__Op_14 = (MR_String) ",";
#line 1031 "parser.m"
        mercury__parser__succeeded = MR_TRUE;
#line 1031 "parser.m"
      }
#line 1031 "parser.m"
    else
#line 1031 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Token_8)) == (MR_mktag((MR_Integer) 1))))
#line 1030 "parser.m"
      {
#line 1030 "parser.m"
        mercury__parser__Op_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_8, (MR_Integer) 0)));
#line 1030 "parser.m"
        mercury__parser__succeeded = MR_TRUE;
#line 1030 "parser.m"
      }
#line 1031 "parser.m"
    else
#line 1031 "parser.m"
      mercury__parser__succeeded = MR_FALSE;
#line 1032 "parser.m"
    if (mercury__parser__succeeded)
#line 1032 "parser.m"
      {
#line 1180 "parser.m"
        mercury__parser__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 0)));
#line 1180 "parser.m"
        mercury__parser__OpTable_15 = (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 1));
#line 1180 "parser.m"
        mercury__parser__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 2)));
#line 1180 "parser.m"
        mercury__parser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 3)));
#line 23 "ops.int"
        {
#line 23 "ops.int"
          MR_Integer mercury__parser__V_16_16;
#line 23 "ops.int"
          MR_Word mercury__parser__V_17_17;
#line 23 "ops.int"
          MR_Word mercury__parser__V_18_18;
#line 23 "ops.int"
          MR_bool MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 23 "ops.int"
          MR_Box mercury__parser__conv3_V_16_16;
#line 23 "ops.int"
          MR_Box mercury__parser__conv2_V_17_17;
#line 23 "ops.int"
          MR_Box mercury__parser__conv1_V_18_18;

#line 23 "ops.int"
          {
#line 23 "ops.int"
            mercury__parser__succeeded = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_25), mercury__parser__OpTable_15, ((MR_Box) (mercury__parser__Op_14)), &mercury__parser__conv3_V_16_16, &mercury__parser__conv2_V_17_17, &mercury__parser__conv1_V_18_18);
          }
#line 23 "ops.int"
          if (mercury__parser__succeeded)
#line 23 "ops.int"
            {
#line 23 "ops.int"
              mercury__parser__V_16_16 = ((MR_Integer) mercury__parser__conv3_V_16_16);
#line 23 "ops.int"
              mercury__parser__V_17_17 = ((MR_Word) mercury__parser__conv2_V_17_17);
#line 23 "ops.int"
              mercury__parser__V_18_18 = ((MR_Word) mercury__parser__conv1_V_18_18);
#line 23 "ops.int"
              mercury__parser__succeeded = MR_TRUE;
#line 23 "ops.int"
            }
#line 23 "ops.int"
        }
#line 1035 "parser.m"
        if (!(mercury__parser__succeeded))
#line 29 "ops.int"
          {
#line 29 "ops.int"
            MR_Integer mercury__parser__V_19_19;
#line 29 "ops.int"
            MR_Word mercury__parser__V_20_20;
#line 29 "ops.int"
            MR_bool MR_CALL (* mercury__parser__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 8)));
#line 29 "ops.int"
            MR_Box mercury__parser__conv6_V_19_19;
#line 29 "ops.int"
            MR_Box mercury__parser__conv5_V_20_20;

#line 29 "ops.int"
            {
#line 29 "ops.int"
              mercury__parser__succeeded = mercury__parser__func_4(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_25), mercury__parser__OpTable_15, ((MR_Box) (mercury__parser__Op_14)), &mercury__parser__conv6_V_19_19, &mercury__parser__conv5_V_20_20);
            }
#line 29 "ops.int"
            if (mercury__parser__succeeded)
#line 29 "ops.int"
              {
#line 29 "ops.int"
                mercury__parser__V_19_19 = ((MR_Integer) mercury__parser__conv6_V_19_19);
#line 29 "ops.int"
                mercury__parser__V_20_20 = ((MR_Word) mercury__parser__conv5_V_20_20);
#line 29 "ops.int"
                mercury__parser__succeeded = MR_TRUE;
#line 29 "ops.int"
              }
#line 29 "ops.int"
          }
#line 1032 "parser.m"
      }
#line 1039 "parser.m"
    if (mercury__parser__succeeded)
#line 1038 "parser.m"
      {
#line 1038 "parser.m"
        {
#line 1038 "parser.m"
          MR_Word base;
#line 1038 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "parser.m"
          *mercury__parser__Error_11 = base;
#line 1038 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
#line 1038 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_22));
#line 1038 "parser.m"
        }
#line 1038 "parser.m"
      }
#line 1039 "parser.m"
    else
#line 1040 "parser.m"
      {
#line 1040 "parser.m"
        MR_Word base;
#line 1040 "parser.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "parser.m"
        *mercury__parser__Error_11 = base;
#line 1040 "parser.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__UsualMessage_10));
#line 1040 "parser.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_22));
#line 1040 "parser.m"
      }
#line 1025 "parser.m"
  }
#line 1021 "parser.m"
}

#line 1007 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 1007 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_16,
#line 1007 "parser.m"
  MR_String mercury__parser__UsualMessage_6,
#line 1007 "parser.m"
  MR_Word * mercury__parser__Error_7,
#line 1007 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_12,
#line 1007 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_13,
#line 1007 "parser.m"
  MR_Word mercury__parser__PS_9)
#line 1007 "parser.m"
{
#line 1016 "parser.m"
  {
#line 1016 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 1016 "parser.m"
    if ((mercury__parser__STATE_VARIABLE_TokensLeft_0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1017 "parser.m"
      {
#line 1018 "parser.m"
        {
#line 1018 "parser.m"
          MR_Word base;
#line 1018 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "parser.m"
          *mercury__parser__Error_7 = base;
#line 1018 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__UsualMessage_6));
#line 1018 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_12));
#line 1018 "parser.m"
        }
#line 1017 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_13 = mercury__parser__STATE_VARIABLE_TokensLeft_0_12;
#line 1017 "parser.m"
      }
#line 1016 "parser.m"
    else
#line 1013 "parser.m"
      {
#line 1013 "parser.m"
        MR_Word mercury__parser__Token_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 0)));
#line 1013 "parser.m"
        MR_Integer mercury__parser__Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 1)));
#line 1013 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 2)));
#line 1032 "parser.m"
        MR_String mercury__parser__Op_27;
#line 1032 "parser.m"
        MR_Box mercury__parser__OpTable_28;
#line 1180 "parser.m"
        MR_String mercury__parser__V_40_40;
#line 1180 "parser.m"
        MR_Word mercury__parser__V_41_41;
#line 1180 "parser.m"
        MR_Word mercury__parser__V_42_42;

#line 1028 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_13 = mercury__parser__STATE_VARIABLE_TokensLeft_0_12;
#line 1031 "parser.m"
        if ((mercury__parser__Token_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 1031 "parser.m"
          {
#line 1031 "parser.m"
            mercury__parser__Op_27 = (MR_String) ",";
#line 1031 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 1031 "parser.m"
          }
#line 1031 "parser.m"
        else
#line 1031 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__Token_10)) == (MR_mktag((MR_Integer) 1))))
#line 1030 "parser.m"
          {
#line 1030 "parser.m"
            mercury__parser__Op_27 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_10, (MR_Integer) 0)));
#line 1030 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 1030 "parser.m"
          }
#line 1031 "parser.m"
        else
#line 1031 "parser.m"
          mercury__parser__succeeded = MR_FALSE;
#line 1032 "parser.m"
        if (mercury__parser__succeeded)
#line 1032 "parser.m"
          {
#line 1180 "parser.m"
            mercury__parser__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 0)));
#line 1180 "parser.m"
            mercury__parser__OpTable_28 = (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 1));
#line 1180 "parser.m"
            mercury__parser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 2)));
#line 1180 "parser.m"
            mercury__parser__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 3)));
#line 23 "ops.int"
            {
#line 23 "ops.int"
              MR_Integer mercury__parser__V_29_29;
#line 23 "ops.int"
              MR_Word mercury__parser__V_30_30;
#line 23 "ops.int"
              MR_Word mercury__parser__V_31_31;
#line 23 "ops.int"
              MR_bool MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 23 "ops.int"
              MR_Box mercury__parser__conv3_V_29_29;
#line 23 "ops.int"
              MR_Box mercury__parser__conv2_V_30_30;
#line 23 "ops.int"
              MR_Box mercury__parser__conv1_V_31_31;

#line 23 "ops.int"
              {
#line 23 "ops.int"
                mercury__parser__succeeded = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_16), mercury__parser__OpTable_28, ((MR_Box) (mercury__parser__Op_27)), &mercury__parser__conv3_V_29_29, &mercury__parser__conv2_V_30_30, &mercury__parser__conv1_V_31_31);
              }
#line 23 "ops.int"
              if (mercury__parser__succeeded)
#line 23 "ops.int"
                {
#line 23 "ops.int"
                  mercury__parser__V_29_29 = ((MR_Integer) mercury__parser__conv3_V_29_29);
#line 23 "ops.int"
                  mercury__parser__V_30_30 = ((MR_Word) mercury__parser__conv2_V_30_30);
#line 23 "ops.int"
                  mercury__parser__V_31_31 = ((MR_Word) mercury__parser__conv1_V_31_31);
#line 23 "ops.int"
                  mercury__parser__succeeded = MR_TRUE;
#line 23 "ops.int"
                }
#line 23 "ops.int"
            }
#line 1035 "parser.m"
            if (!(mercury__parser__succeeded))
#line 29 "ops.int"
              {
#line 29 "ops.int"
                MR_Integer mercury__parser__V_32_32;
#line 29 "ops.int"
                MR_Word mercury__parser__V_33_33;
#line 29 "ops.int"
                MR_bool MR_CALL (* mercury__parser__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 8)));
#line 29 "ops.int"
                MR_Box mercury__parser__conv6_V_32_32;
#line 29 "ops.int"
                MR_Box mercury__parser__conv5_V_33_33;

#line 29 "ops.int"
                {
#line 29 "ops.int"
                  mercury__parser__succeeded = mercury__parser__func_4(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_16), mercury__parser__OpTable_28, ((MR_Box) (mercury__parser__Op_27)), &mercury__parser__conv6_V_32_32, &mercury__parser__conv5_V_33_33);
                }
#line 29 "ops.int"
                if (mercury__parser__succeeded)
#line 29 "ops.int"
                  {
#line 29 "ops.int"
                    mercury__parser__V_32_32 = ((MR_Integer) mercury__parser__conv6_V_32_32);
#line 29 "ops.int"
                    mercury__parser__V_33_33 = ((MR_Word) mercury__parser__conv5_V_33_33);
#line 29 "ops.int"
                    mercury__parser__succeeded = MR_TRUE;
#line 29 "ops.int"
                  }
#line 29 "ops.int"
              }
#line 1032 "parser.m"
          }
#line 1039 "parser.m"
        if (mercury__parser__succeeded)
#line 1038 "parser.m"
          {
#line 1038 "parser.m"
            {
#line 1038 "parser.m"
              MR_Word base;
#line 1038 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "parser.m"
              *mercury__parser__Error_7 = base;
#line 1038 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
#line 1038 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_13));
#line 1038 "parser.m"
            }
#line 1038 "parser.m"
          }
#line 1039 "parser.m"
        else
#line 1040 "parser.m"
          {
#line 1040 "parser.m"
            MR_Word base;
#line 1040 "parser.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "parser.m"
            *mercury__parser__Error_7 = base;
#line 1040 "parser.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__UsualMessage_6));
#line 1040 "parser.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_13));
#line 1040 "parser.m"
          }
#line 1013 "parser.m"
      }
#line 1016 "parser.m"
  }
#line 1007 "parser.m"
}

#line 863 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
#line 863 "parser.m"
  MR_Word mercury__parser__Term_3,
#line 863 "parser.m"
  MR_Word * mercury__parser__ArgTerms_4)
#line 863 "parser.m"
{
#line 869 "parser.m"
  {
#line 869 "parser.m"
    MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 869 "parser.m"
    MR_Word mercury__parser__LeftTerm_5;
#line 869 "parser.m"
    MR_Word mercury__parser__RightTerm_6;
#line 866 "parser.m"
    MR_Word mercury__parser__V_9_9;
#line 866 "parser.m"
    MR_String mercury__parser__V_10_10;
#line 866 "parser.m"
    MR_Word mercury__parser__V_11_11;
#line 866 "parser.m"
    MR_Word mercury__parser__V_12_12;
#line 866 "parser.m"
    MR_Word mercury__parser__V_13_13;
#line 866 "parser.m"
    MR_Word mercury__parser__V_7_7;

#line 866 "parser.m"
    if (mercury__parser__succeeded)
#line 866 "parser.m"
      {
#line 866 "parser.m"
        mercury__parser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 0)));
#line 866 "parser.m"
        mercury__parser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 1)));
#line 866 "parser.m"
        mercury__parser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 2)));
#line 866 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 866 "parser.m"
        if (mercury__parser__succeeded)
#line 866 "parser.m"
          {
#line 866 "parser.m"
            mercury__parser__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__V_9_9, (MR_Integer) 0)));
#line 866 "parser.m"
            mercury__parser__succeeded = (strcmp(mercury__parser__V_10_10, (MR_String) ",") == 0);
#line 866 "parser.m"
            if (mercury__parser__succeeded)
#line 866 "parser.m"
              {
#line 866 "parser.m"
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 866 "parser.m"
                if (mercury__parser__succeeded)
#line 866 "parser.m"
                  {
#line 866 "parser.m"
                    mercury__parser__LeftTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_11_11, (MR_Integer) 0)));
#line 866 "parser.m"
                    mercury__parser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_11_11, (MR_Integer) 1)));
#line 866 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 866 "parser.m"
                    if (mercury__parser__succeeded)
#line 866 "parser.m"
                      {
#line 866 "parser.m"
                        mercury__parser__RightTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_12_12, (MR_Integer) 0)));
#line 866 "parser.m"
                        mercury__parser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_12_12, (MR_Integer) 1)));
#line 866 "parser.m"
                        mercury__parser__succeeded = (mercury__parser__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "parser.m"
                      }
#line 866 "parser.m"
                  }
#line 866 "parser.m"
              }
#line 866 "parser.m"
          }
#line 866 "parser.m"
      }
#line 869 "parser.m"
    if (mercury__parser__succeeded)
#line 867 "parser.m"
      {
#line 867 "parser.m"
        MR_Word mercury__parser__ArgTerms0_8;

#line 867 "parser.m"
        {
#line 867 "parser.m"
          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(mercury__parser__RightTerm_6, &mercury__parser__ArgTerms0_8);
        }
#line 868 "parser.m"
        {
#line 868 "parser.m"
          MR_Word base;
#line 868 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "parser.m"
          *mercury__parser__ArgTerms_4 = base;
#line 868 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__LeftTerm_5));
#line 868 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__ArgTerms0_8));
#line 868 "parser.m"
        }
#line 867 "parser.m"
      }
#line 869 "parser.m"
    else
#line 870 "parser.m"
      {
#line 870 "parser.m"
        MR_Word mercury__parser__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 870 "parser.m"
        {
#line 870 "parser.m"
          MR_Word base;
#line 870 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "parser.m"
          *mercury__parser__ArgTerms_4 = base;
#line 870 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Term_3));
#line 870 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__V_14_14));
#line 870 "parser.m"
        }
#line 870 "parser.m"
      }
#line 869 "parser.m"
  }
#line 863 "parser.m"
}

#line 607 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(
#line 607 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_44,
#line 607 "parser.m"
  MR_Word mercury__parser__MaybeQualifier0_10,
#line 607 "parser.m"
  MR_Word * mercury__parser__MaybeQualifier_11,
#line 607 "parser.m"
  MR_Word mercury__parser__OpCtxt0_12,
#line 607 "parser.m"
  MR_String mercury__parser__OpName0_13,
#line 607 "parser.m"
  MR_String * mercury__parser__OpName_14,
#line 607 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_27,
#line 607 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_28,
#line 607 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_29,
#line 607 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_30)
#line 607 "parser.m"
{
#line 637 "parser.m"
  while (MR_TRUE)
#line 637 "parser.m"
    {
#line 637 "parser.m"
      /* tailcall optimized into a loop */
#line 637 "parser.m"
      {
#line 637 "parser.m"
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_27)) == (MR_mktag((MR_Integer) 1)));
#line 637 "parser.m"
        MR_Integer mercury__parser__SepContext_18;
#line 637 "parser.m"
        MR_String mercury__parser__OpName1_19;
#line 637 "parser.m"
        MR_Integer mercury__parser__NameContext_20;
#line 637 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_33_33;
#line 617 "parser.m"
        MR_String mercury__parser__ModuleSeparator_17;
#line 617 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_31_31;
#line 617 "parser.m"
        MR_Word mercury__parser__V_32_32;
#line 617 "parser.m"
        MR_Word mercury__parser__V_34_34;

#line 617 "parser.m"
        if (mercury__parser__succeeded)
#line 617 "parser.m"
          {
#line 617 "parser.m"
            mercury__parser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_27, (MR_Integer) 0)));
#line 617 "parser.m"
            mercury__parser__SepContext_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_27, (MR_Integer) 1)));
#line 617 "parser.m"
            mercury__parser__STATE_VARIABLE_TokensLeft_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_27, (MR_Integer) 2)));
#line 617 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 617 "parser.m"
            if (mercury__parser__succeeded)
#line 617 "parser.m"
              {
#line 617 "parser.m"
                mercury__parser__ModuleSeparator_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__V_32_32, (MR_Integer) 0)));
#line 619 "parser.m"
                if ((strcmp(mercury__parser__ModuleSeparator_17, (MR_String) ".") == 0))
#line 618 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 619 "parser.m"
                else
#line 619 "parser.m"
                if ((strcmp(mercury__parser__ModuleSeparator_17, (MR_String) ":") == 0))
#line 619 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 619 "parser.m"
                else
#line 619 "parser.m"
                  mercury__parser__succeeded = MR_FALSE;
#line 617 "parser.m"
                if (mercury__parser__succeeded)
#line 617 "parser.m"
                  {
#line 621 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 621 "parser.m"
                    if (mercury__parser__succeeded)
#line 621 "parser.m"
                      {
#line 621 "parser.m"
                        mercury__parser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_31_31, (MR_Integer) 0)));
#line 621 "parser.m"
                        mercury__parser__NameContext_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_31_31, (MR_Integer) 1)));
#line 621 "parser.m"
                        mercury__parser__STATE_VARIABLE_TokensLeft_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_31_31, (MR_Integer) 2)));
#line 621 "parser.m"
                        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 621 "parser.m"
                        if (mercury__parser__succeeded)
#line 621 "parser.m"
                          {
#line 621 "parser.m"
                            mercury__parser__OpName1_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__V_34_34, (MR_Integer) 0)));
#line 622 "parser.m"
                            mercury__parser__succeeded = (strcmp(mercury__parser__OpName1_19, (MR_String) "\140") == 0);
#line 622 "parser.m"
                            mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 621 "parser.m"
                          }
#line 621 "parser.m"
                      }
#line 617 "parser.m"
                  }
#line 617 "parser.m"
              }
#line 617 "parser.m"
          }
#line 637 "parser.m"
        if (mercury__parser__succeeded)
#line 624 "parser.m"
          {
#line 624 "parser.m"
            MR_Word mercury__parser__QTerm1_21;
#line 624 "parser.m"
            MR_Word mercury__parser__MaybeQualifier01_22;
#line 624 "parser.m"
            MR_Word mercury__parser__OpCtxt1_26;
#line 624 "parser.m"
            MR_Word mercury__parser__V_35_35;
#line 624 "parser.m"
            MR_Word mercury__parser__V_36_36;
#line 624 "parser.m"
            MR_String mercury__parser__FileName_64;
#line 1178 "parser.m"
            MR_Box mercury__parser__V_67_67;
#line 1178 "parser.m"
            MR_Word mercury__parser__V_68_68;
#line 1178 "parser.m"
            MR_Word mercury__parser__V_69_69;

#line 624 "parser.m"
            {
#line 624 "parser.m"
              mercury__parser__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 624 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_35_35, 0) = ((MR_Box) (mercury__parser__OpName0_13));
#line 624 "parser.m"
            }
#line 624 "parser.m"
            mercury__parser__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "parser.m"
            {
#line 624 "parser.m"
              mercury__parser__QTerm1_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 624 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_21, 0) = ((MR_Box) (mercury__parser__V_35_35));
#line 624 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_21, 1) = ((MR_Box) (mercury__parser__V_36_36));
#line 624 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_21, 2) = ((MR_Box) (mercury__parser__OpCtxt0_12));
#line 624 "parser.m"
            }
#line 628 "parser.m"
            if ((mercury__parser__MaybeQualifier0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 627 "parser.m"
              {
#line 627 "parser.m"
                mercury__parser__MaybeQualifier01_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "parser.m"
                MR_hl_field(MR_mktag(1), mercury__parser__MaybeQualifier01_22, 0) = ((MR_Box) (mercury__parser__QTerm1_21));
#line 627 "parser.m"
              }
#line 628 "parser.m"
            else
#line 629 "parser.m"
              {
#line 629 "parser.m"
                MR_Word mercury__parser__QTerm0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__MaybeQualifier0_10, (MR_Integer) 0)));
#line 629 "parser.m"
                MR_Word mercury__parser__SepCtxt_24;
#line 629 "parser.m"
                MR_Word mercury__parser__QTerm01_25;
#line 629 "parser.m"
                MR_Word mercury__parser__V_37_37;
#line 629 "parser.m"
                MR_Word mercury__parser__V_39_39;
#line 629 "parser.m"
                MR_Word mercury__parser__V_40_40;
#line 629 "parser.m"
                MR_Word mercury__parser__V_41_41;
#line 629 "parser.m"
                MR_String mercury__parser__FileName_53 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 0)));
#line 1178 "parser.m"
                MR_Box mercury__parser__V_56_56 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 1));
#line 1178 "parser.m"
                MR_Word mercury__parser__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 2)));
#line 1178 "parser.m"
                MR_Word mercury__parser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 3)));

#line 123 "term.opt"
                {
#line 123 "term.opt"
                  mercury__parser__SepCtxt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "term.opt"
                  MR_hl_field(MR_mktag(0), mercury__parser__SepCtxt_24, 0) = ((MR_Box) (mercury__parser__FileName_53));
#line 123 "term.opt"
                  MR_hl_field(MR_mktag(0), mercury__parser__SepCtxt_24, 1) = ((MR_Box) (mercury__parser__SepContext_18));
#line 123 "term.opt"
                }
#line 631 "parser.m"
                mercury__parser__V_37_37 = (MR_Word) &mercury__parser_scalar_common_7[0];
#line 631 "parser.m"
                mercury__parser__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 631 "parser.m"
                {
#line 631 "parser.m"
                  mercury__parser__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_40_40, 0) = ((MR_Box) (mercury__parser__QTerm1_21));
#line 631 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_40_40, 1) = ((MR_Box) (mercury__parser__V_41_41));
#line 631 "parser.m"
                }
#line 631 "parser.m"
                {
#line 631 "parser.m"
                  mercury__parser__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_39_39, 0) = ((MR_Box) (mercury__parser__QTerm0_23));
#line 631 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_39_39, 1) = ((MR_Box) (mercury__parser__V_40_40));
#line 631 "parser.m"
                }
#line 631 "parser.m"
                {
#line 631 "parser.m"
                  mercury__parser__QTerm01_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 631 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__QTerm01_25, 0) = ((MR_Box) (mercury__parser__V_37_37));
#line 631 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__QTerm01_25, 1) = ((MR_Box) (mercury__parser__V_39_39));
#line 631 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__QTerm01_25, 2) = ((MR_Box) (mercury__parser__SepCtxt_24));
#line 631 "parser.m"
                }
#line 632 "parser.m"
                {
#line 632 "parser.m"
                  mercury__parser__MaybeQualifier01_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 632 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__MaybeQualifier01_22, 0) = ((MR_Box) (mercury__parser__QTerm01_25));
#line 632 "parser.m"
                }
#line 629 "parser.m"
              }
#line 1178 "parser.m"
            mercury__parser__FileName_64 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 0)));
#line 1178 "parser.m"
            mercury__parser__V_67_67 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 1));
#line 1178 "parser.m"
            mercury__parser__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 2)));
#line 1178 "parser.m"
            mercury__parser__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 3)));
#line 123 "term.opt"
            {
#line 123 "term.opt"
              mercury__parser__OpCtxt1_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__OpCtxt1_26, 0) = ((MR_Box) (mercury__parser__FileName_64));
#line 123 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__OpCtxt1_26, 1) = ((MR_Box) (mercury__parser__NameContext_20));
#line 123 "term.opt"
            }
#line 635 "parser.m"
            /* direct tailcall eliminated */
#line 635 "parser.m"
            {
#line 635 "parser.m"
              MR_Word mercury__parser__MaybeQualifier0__tmp_copy_10 = mercury__parser__MaybeQualifier01_22;
#line 635 "parser.m"
              MR_Word mercury__parser__OpCtxt0__tmp_copy_12 = mercury__parser__OpCtxt1_26;
#line 635 "parser.m"
              MR_String mercury__parser__OpName0__tmp_copy_13 = mercury__parser__OpName1_19;
#line 635 "parser.m"
              MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_27 = mercury__parser__STATE_VARIABLE_TokensLeft_33_33;

#line 635 "parser.m"
              mercury__parser__STATE_VARIABLE_TokensLeft_0_27 = mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_27;
#line 635 "parser.m"
              mercury__parser__OpName0_13 = mercury__parser__OpName0__tmp_copy_13;
#line 635 "parser.m"
              mercury__parser__OpCtxt0_12 = mercury__parser__OpCtxt0__tmp_copy_12;
#line 635 "parser.m"
              mercury__parser__MaybeQualifier0_10 = mercury__parser__MaybeQualifier0__tmp_copy_10;
#line 635 "parser.m"
            }
#line 635 "parser.m"
            continue;
#line 624 "parser.m"
          }
#line 637 "parser.m"
        else
#line 638 "parser.m"
          {
#line 638 "parser.m"
            *mercury__parser__MaybeQualifier_11 = mercury__parser__MaybeQualifier0_10;
#line 639 "parser.m"
            *mercury__parser__OpName_14 = mercury__parser__OpName0_13;
#line 638 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_30 = mercury__parser__STATE_VARIABLE_PS_0_29;
#line 638 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_28 = mercury__parser__STATE_VARIABLE_TokensLeft_0_27;
#line 638 "parser.m"
          }
#line 637 "parser.m"
      }
#line 637 "parser.m"
      break;
#line 637 "parser.m"
    }
#line 607 "parser.m"
}

#line 148 "parser.m"
void MR_CALL 
mercury__parser____Compare____term_kind_0_0(
#line 148 "parser.m"
  MR_Word * mercury__parser__HeadVar__1_1,
#line 148 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2,
#line 148 "parser.m"
  MR_Word mercury__parser__HeadVar__3_3)
#line 148 "parser.m"
{
#line 148 "parser.m"
  {
#line 148 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 148 "parser.m"
    MR_Integer mercury__parser__Cast_HeadVar1_4 = (MR_Integer) mercury__parser__HeadVar__2_2;
#line 148 "parser.m"
    MR_Integer mercury__parser__Cast_HeadVar2_5 = (MR_Integer) mercury__parser__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__parser__succeeded = (mercury__parser__Cast_HeadVar1_4 < mercury__parser__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__parser__succeeded)
#line 71 "private_builtin.opt"
      *mercury__parser__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__parser__succeeded = (mercury__parser__Cast_HeadVar1_4 == mercury__parser__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__parser__succeeded)
#line 76 "private_builtin.opt"
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 148 "parser.m"
  }
#line 148 "parser.m"
}

#line 148 "parser.m"
MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0(
#line 148 "parser.m"
  MR_Word mercury__parser__HeadVar__2_1,
#line 148 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2)
#line 148 "parser.m"
{
#line 2617 "parser.c"
  {
#line 2619 "parser.c"
    MR_bool mercury__parser__succeeded = (mercury__parser__HeadVar__2_1 == mercury__parser__HeadVar__2_2);

#line 2622 "parser.c"
    return mercury__parser__succeeded;
#line 2624 "parser.c"
  }
#line 148 "parser.m"
}

#line 1124 "parser.m"
void MR_CALL 
mercury__parser____Compare____parser_state_2_0(
#line 1124 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_17,
#line 1124 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_18,
#line 1124 "parser.m"
  MR_Word * mercury__parser__HeadVar__1_1,
#line 1124 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2,
#line 1124 "parser.m"
  MR_Word mercury__parser__HeadVar__3_3)
#line 1124 "parser.m"
{
#line 1124 "parser.m"
  {
#line 1124 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1124 "parser.m"
    MR_Integer mercury__parser__CastX_15 = (MR_Integer) mercury__parser__HeadVar__2_2;
#line 1124 "parser.m"
    MR_Integer mercury__parser__CastY_16 = (MR_Integer) mercury__parser__HeadVar__3_3;

#line 1124 "parser.m"
    mercury__parser__succeeded = (mercury__parser__CastX_15 == mercury__parser__CastY_16);
#line 1124 "parser.m"
    if (mercury__parser__succeeded)
#line 2657 "parser.c"
      *mercury__parser__HeadVar__1_1 = (MR_Integer) 0;
#line 1124 "parser.m"
    else
#line 1124 "parser.m"
      {
#line 1124 "parser.m"
        MR_String mercury__parser__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));
#line 1124 "parser.m"
        MR_Box mercury__parser__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 1));
#line 1124 "parser.m"
        MR_Word mercury__parser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 2)));
#line 1124 "parser.m"
        MR_Word mercury__parser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 3)));
#line 1124 "parser.m"
        MR_String mercury__parser__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 0)));
#line 1124 "parser.m"
        MR_Box mercury__parser__V_9_9 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 1));
#line 1124 "parser.m"
        MR_Word mercury__parser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 2)));
#line 1124 "parser.m"
        MR_Word mercury__parser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 3)));
#line 1124 "parser.m"
        MR_Word mercury__parser__V_12_12;
#line 1124 "parser.m"
        MR_Integer mercury__parser__V_7_30;

#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser____Compare____parser_state_2_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__parser__V_4_4 ;
	S2 =  mercury__parser__V_8_8 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2699 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_7_30  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
        mercury__parser__succeeded = (mercury__parser__V_7_30 < (MR_Integer) 0);
#line 90 "private_builtin.opt"
        if (mercury__parser__succeeded)
#line 89 "private_builtin.opt"
          mercury__parser__V_12_12 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
        else
#line 95 "private_builtin.opt"
          {
#line 92 "private_builtin.opt"
            mercury__parser__succeeded = (mercury__parser__V_7_30 == (MR_Integer) 0);
#line 95 "private_builtin.opt"
            if (mercury__parser__succeeded)
#line 94 "private_builtin.opt"
              mercury__parser__V_12_12 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
            else
#line 96 "private_builtin.opt"
              mercury__parser__V_12_12 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
          }
#line 2728 "parser.c"
        mercury__parser__succeeded = (mercury__parser__V_12_12 == (MR_Integer) 0);
#line 1124 "parser.m"
        mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 1124 "parser.m"
        if (mercury__parser__succeeded)
#line 1124 "parser.m"
          *mercury__parser__HeadVar__1_1 = mercury__parser__V_12_12;
#line 1124 "parser.m"
        else
#line 1124 "parser.m"
          {
#line 1124 "parser.m"
            MR_Word mercury__parser__V_13_13;

#line 1124 "parser.m"
            {
#line 1124 "parser.m"
              mercury__builtin__compare_3_p_0(mercury__parser__TypeInfo_for_Ops_17, &mercury__parser__V_13_13, mercury__parser__V_5_5, mercury__parser__V_9_9);
            }
#line 2748 "parser.c"
            mercury__parser__succeeded = (mercury__parser__V_13_13 == (MR_Integer) 0);
#line 1124 "parser.m"
            mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 1124 "parser.m"
            if (mercury__parser__succeeded)
#line 1124 "parser.m"
              *mercury__parser__HeadVar__1_1 = mercury__parser__V_13_13;
#line 1124 "parser.m"
            else
#line 1124 "parser.m"
              {
#line 1124 "parser.m"
                MR_Word mercury__parser__V_14_14;

#line 1124 "parser.m"
                {
#line 1124 "parser.m"
                  mercury__varset____Compare____varset_1_0(mercury__parser__TypeInfo_for_T_18, &mercury__parser__V_14_14, mercury__parser__V_6_6, mercury__parser__V_10_10);
                }
#line 2768 "parser.c"
                mercury__parser__succeeded = (mercury__parser__V_14_14 == (MR_Integer) 0);
#line 1124 "parser.m"
                mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 1124 "parser.m"
                if (mercury__parser__succeeded)
#line 1124 "parser.m"
                  *mercury__parser__HeadVar__1_1 = mercury__parser__V_14_14;
#line 1124 "parser.m"
                else
#line 1124 "parser.m"
                  {
#line 1124 "parser.m"
                    MR_Word mercury__parser__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1124 "parser.m"
                    MR_Word mercury__parser__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1124 "parser.m"
                    MR_Word mercury__parser__TypeInfo_24_24;

#line 2787 "parser.c"
                    {
#line 2789 "parser.c"
                      mercury__parser__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2791 "parser.c"
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_24_24, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_23_23));
#line 2793 "parser.c"
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_24_24, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_18));
#line 2795 "parser.c"
                    }
#line 1124 "parser.m"
                    {
#line 1124 "parser.m"
                      mercury__tree234____Compare____tree234_2_0(mercury__parser__TypeCtorInfo_22_22, mercury__parser__TypeInfo_24_24, mercury__parser__HeadVar__1_1, (MR_Word) mercury__parser__V_7_7, (MR_Word) mercury__parser__V_11_11);
                    }
#line 1124 "parser.m"
                  }
#line 1124 "parser.m"
              }
#line 1124 "parser.m"
          }
#line 1124 "parser.m"
      }
#line 1124 "parser.m"
  }
#line 1124 "parser.m"
}

#line 1124 "parser.m"
MR_bool MR_CALL 
mercury__parser____Unify____parser_state_2_0(
#line 1124 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_13,
#line 1124 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_14,
#line 1124 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1124 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2)
#line 1124 "parser.m"
{
#line 1124 "parser.m"
  {
#line 1124 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1124 "parser.m"
    MR_Integer mercury__parser__CastX_11 = (MR_Integer) mercury__parser__HeadVar__1_1;
#line 1124 "parser.m"
    MR_Integer mercury__parser__CastY_12 = (MR_Integer) mercury__parser__HeadVar__2_2;

#line 1124 "parser.m"
    mercury__parser__succeeded = (mercury__parser__CastX_11 == mercury__parser__CastY_12);
#line 1124 "parser.m"
    if (mercury__parser__succeeded)
#line 1124 "parser.m"
      mercury__parser__succeeded = MR_TRUE;
#line 1124 "parser.m"
    else
#line 1124 "parser.m"
      {
#line 1124 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_17_17;
#line 1124 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_18_18;
#line 1124 "parser.m"
        MR_Word mercury__parser__TypeInfo_19_19;
#line 1124 "parser.m"
        MR_String mercury__parser__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 1124 "parser.m"
        MR_Box mercury__parser__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 1));
#line 1124 "parser.m"
        MR_Word mercury__parser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 2)));
#line 1124 "parser.m"
        MR_Word mercury__parser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 3)));
#line 1124 "parser.m"
        MR_String mercury__parser__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));
#line 1124 "parser.m"
        MR_Box mercury__parser__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 1));
#line 1124 "parser.m"
        MR_Word mercury__parser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 2)));
#line 1124 "parser.m"
        MR_Word mercury__parser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 3)));

#line 2870 "parser.c"
        mercury__parser__succeeded = (strcmp(mercury__parser__V_3_3, mercury__parser__V_7_7) == 0);
#line 1124 "parser.m"
        if (mercury__parser__succeeded)
#line 1124 "parser.m"
          {
#line 2876 "parser.c"
            {
#line 2878 "parser.c"
              mercury__parser__succeeded = mercury__builtin__unify_2_p_0(mercury__parser__TypeInfo_for_Ops_13, mercury__parser__V_4_4, mercury__parser__V_8_8);
            }
#line 1124 "parser.m"
            if (mercury__parser__succeeded)
#line 1124 "parser.m"
              {
#line 2885 "parser.c"
                {
#line 2887 "parser.c"
                  mercury__parser__succeeded = mercury__varset____Unify____varset_1_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__V_5_5, mercury__parser__V_9_9);
                }
#line 1124 "parser.m"
                if (mercury__parser__succeeded)
#line 1124 "parser.m"
                  {
#line 2894 "parser.c"
                    mercury__parser__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2896 "parser.c"
                    mercury__parser__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2898 "parser.c"
                    {
#line 2900 "parser.c"
                      mercury__parser__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2902 "parser.c"
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_19_19, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_18_18));
#line 2904 "parser.c"
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_19_19, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_14));
#line 2906 "parser.c"
                    }
#line 2908 "parser.c"
                    {
#line 2910 "parser.c"
                      mercury__parser__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__parser__TypeCtorInfo_17_17, mercury__parser__TypeInfo_19_19, (MR_Word) mercury__parser__V_6_6, (MR_Word) mercury__parser__V_10_10);
                    }
#line 1124 "parser.m"
                  }
#line 1124 "parser.m"
              }
#line 1124 "parser.m"
          }
#line 1124 "parser.m"
      }
#line 1124 "parser.m"
    return mercury__parser__succeeded;
#line 1124 "parser.m"
  }
#line 1124 "parser.m"
}

#line 143 "parser.m"
void MR_CALL 
mercury__parser____Compare____parse_1_0(
#line 143 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_19,
#line 143 "parser.m"
  MR_Word * mercury__parser__HeadVar__1_1,
#line 143 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2,
#line 143 "parser.m"
  MR_Word mercury__parser__HeadVar__3_3)
#line 143 "parser.m"
{
#line 143 "parser.m"
  {
#line 143 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 143 "parser.m"
    MR_Integer mercury__parser__CastX_17 = (MR_Integer) mercury__parser__HeadVar__2_2;
#line 143 "parser.m"
    MR_Integer mercury__parser__CastY_18 = (MR_Integer) mercury__parser__HeadVar__3_3;

#line 143 "parser.m"
    mercury__parser__succeeded = (mercury__parser__CastX_17 == mercury__parser__CastY_18);
#line 143 "parser.m"
    if (mercury__parser__succeeded)
#line 2954 "parser.c"
      *mercury__parser__HeadVar__1_1 = (MR_Integer) 0;
#line 143 "parser.m"
    else
#line 143 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 143 "parser.m"
      {
#line 143 "parser.m"
        MR_Word mercury__parser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 1)));
#line 143 "parser.m"
        MR_String mercury__parser__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));

#line 143 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 143 "parser.m"
          {
#line 143 "parser.m"
            MR_String mercury__parser__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__3_3, (MR_Integer) 0)));
#line 143 "parser.m"
            MR_Word mercury__parser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__3_3, (MR_Integer) 1)));
#line 143 "parser.m"
            MR_Word mercury__parser__V_16_16;
#line 143 "parser.m"
            MR_Integer mercury__parser__V_7_28;

#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser____Compare____parse_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__parser__V_23_23 ;
	S2 =  mercury__parser__V_14_14 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2995 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_7_28  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
            mercury__parser__succeeded = (mercury__parser__V_7_28 < (MR_Integer) 0);
#line 90 "private_builtin.opt"
            if (mercury__parser__succeeded)
#line 89 "private_builtin.opt"
              mercury__parser__V_16_16 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
            else
#line 95 "private_builtin.opt"
              {
#line 92 "private_builtin.opt"
                mercury__parser__succeeded = (mercury__parser__V_7_28 == (MR_Integer) 0);
#line 95 "private_builtin.opt"
                if (mercury__parser__succeeded)
#line 94 "private_builtin.opt"
                  mercury__parser__V_16_16 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
                else
#line 96 "private_builtin.opt"
                  mercury__parser__V_16_16 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
              }
#line 3024 "parser.c"
            mercury__parser__succeeded = (mercury__parser__V_16_16 == (MR_Integer) 0);
#line 143 "parser.m"
            mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 143 "parser.m"
            if (mercury__parser__succeeded)
#line 143 "parser.m"
              *mercury__parser__HeadVar__1_1 = mercury__parser__V_16_16;
#line 143 "parser.m"
            else
#line 143 "parser.m"
              {
#line 143 "parser.m"
                mercury__lexer____Compare____token_list_0_0(mercury__parser__HeadVar__1_1, mercury__parser__V_22_22, mercury__parser__V_15_15);
              }
#line 143 "parser.m"
          }
#line 143 "parser.m"
        else
#line 3043 "parser.c"
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 2;
#line 143 "parser.m"
      }
#line 143 "parser.m"
    else
#line 143 "parser.m"
      {
#line 143 "parser.m"
        MR_Box mercury__parser__V_24_24 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0));

#line 143 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3056 "parser.c"
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 1;
#line 143 "parser.m"
        else
#line 143 "parser.m"
          {
#line 143 "parser.m"
            MR_Box mercury__parser__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 0));

#line 143 "parser.m"
            {
#line 143 "parser.m"
              mercury__builtin__compare_3_p_0(mercury__parser__TypeInfo_for_T_19, mercury__parser__HeadVar__1_1, mercury__parser__V_24_24, mercury__parser__V_5_5);
            }
#line 143 "parser.m"
          }
#line 143 "parser.m"
      }
#line 143 "parser.m"
  }
#line 143 "parser.m"
}

#line 143 "parser.m"
MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0(
#line 143 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_11,
#line 143 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 143 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2)
#line 143 "parser.m"
{
#line 143 "parser.m"
  {
#line 143 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 143 "parser.m"
    MR_Integer mercury__parser__CastX_9 = (MR_Integer) mercury__parser__HeadVar__1_1;
#line 143 "parser.m"
    MR_Integer mercury__parser__CastY_10 = (MR_Integer) mercury__parser__HeadVar__2_2;

#line 143 "parser.m"
    mercury__parser__succeeded = (mercury__parser__CastX_9 == mercury__parser__CastY_10);
#line 143 "parser.m"
    if (mercury__parser__succeeded)
#line 143 "parser.m"
      mercury__parser__succeeded = MR_TRUE;
#line 143 "parser.m"
    else
#line 143 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 143 "parser.m"
      {
#line 143 "parser.m"
        MR_String mercury__parser__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 143 "parser.m"
        MR_Word mercury__parser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
#line 143 "parser.m"
        MR_String mercury__parser__V_7_7;
#line 143 "parser.m"
        MR_Word mercury__parser__V_8_8;

#line 143 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 143 "parser.m"
        if (mercury__parser__succeeded)
#line 143 "parser.m"
          {
#line 143 "parser.m"
            mercury__parser__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));
#line 143 "parser.m"
            mercury__parser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 1)));
#line 3130 "parser.c"
            mercury__parser__succeeded = (strcmp(mercury__parser__V_5_5, mercury__parser__V_7_7) == 0);
#line 143 "parser.m"
            if (mercury__parser__succeeded)
#line 3134 "parser.c"
              {
#line 3136 "parser.c"
                mercury__parser__succeeded = mercury__lexer____Unify____token_list_0_0(mercury__parser__V_6_6, mercury__parser__V_8_8);
              }
#line 143 "parser.m"
          }
#line 143 "parser.m"
      }
#line 143 "parser.m"
    else
#line 143 "parser.m"
      {
#line 143 "parser.m"
        MR_Box mercury__parser__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 0));
#line 143 "parser.m"
        MR_Box mercury__parser__V_4_4;

#line 143 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 143 "parser.m"
        if (mercury__parser__succeeded)
#line 143 "parser.m"
          {
#line 143 "parser.m"
            mercury__parser__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0));
#line 3160 "parser.c"
            {
#line 3162 "parser.c"
              mercury__parser__succeeded = mercury__builtin__unify_2_p_0(mercury__parser__TypeInfo_for_T_11, mercury__parser__V_3_3, mercury__parser__V_4_4);
            }
#line 143 "parser.m"
          }
#line 143 "parser.m"
      }
#line 143 "parser.m"
    return mercury__parser__succeeded;
#line 143 "parser.m"
  }
#line 143 "parser.m"
}

#line 1158 "parser.m"
MR_Word MR_CALL 
mercury__parser__parser_state_get_varset_1_f_0(
#line 1158 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_8,
#line 1158 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_9,
#line 1158 "parser.m"
  MR_Word mercury__parser__ParserState_3)
#line 1158 "parser.m"
{
#line 1182 "parser.m"
  {
#line 1182 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1182 "parser.m"
    MR_Word mercury__parser__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 2)));
#line 1182 "parser.m"
    MR_String mercury__parser__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 0)));
#line 1182 "parser.m"
    MR_Box mercury__parser__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 1));
#line 1182 "parser.m"
    MR_Word mercury__parser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 3)));

#line 1182 "parser.m"
    return mercury__parser__X_4;
#line 1182 "parser.m"
  }
#line 1158 "parser.m"
}

#line 1149 "parser.m"
void MR_CALL 
mercury__parser__final_parser_state_2_p_0(
#line 1149 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_5,
#line 1149 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_6,
#line 1149 "parser.m"
  MR_Word mercury__parser__ParserState_3,
#line 1149 "parser.m"
  MR_Word * mercury__parser__VarSet_4)
#line 1149 "parser.m"
{
#line 1182 "parser.m"
  {
#line 1182 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1182 "parser.m"
    MR_String mercury__parser__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 0)));
#line 1182 "parser.m"
    MR_Box mercury__parser__V_10_10 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 1));
#line 1182 "parser.m"
    MR_Word mercury__parser__V_11_11;

#line 1182 "parser.m"
    *mercury__parser__VarSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 2)));
#line 1182 "parser.m"
    mercury__parser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 3)));
#line 1182 "parser.m"
  }
#line 1149 "parser.m"
}

#line 1141 "parser.m"
void MR_CALL 
mercury__parser__init_parser_state_3_p_0(
#line 1141 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_10,
#line 1141 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_9,
#line 1141 "parser.m"
  MR_Box mercury__parser__Ops_4,
#line 1141 "parser.m"
  MR_String mercury__parser__FileName_5,
#line 1141 "parser.m"
  MR_Word * mercury__parser__ParserState_6)
#line 1141 "parser.m"
{
#line 1144 "parser.m"
  {
#line 1144 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1144 "parser.m"
    MR_Word mercury__parser__VarSet_7 = (MR_Word) &mercury__parser_scalar_common_2[2];
#line 1144 "parser.m"
    MR_Word mercury__parser__Names_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1144 "parser.m"
    MR_Word mercury__parser__V_3_15 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 1144 "parser.m"
    MR_Word mercury__parser__V_4_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1144 "parser.m"
    MR_Word mercury__parser__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1147 "parser.m"
    {
#line 1147 "parser.m"
      MR_Word base;
#line 1147 "parser.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "parser.m"
      *mercury__parser__ParserState_6 = base;
#line 1147 "parser.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__FileName_5));
#line 1147 "parser.m"
      MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__Ops_4;
#line 1147 "parser.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_7));
#line 1147 "parser.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Names_8));
#line 1147 "parser.m"
    }
#line 1144 "parser.m"
  }
#line 1141 "parser.m"
}

#line 1093 "parser.m"
static void MR_CALL 
mercury__parser__could_start_term_2_p_0(
#line 1093 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1093 "parser.m"
  MR_Word * mercury__parser__HeadVar__2_2)
#line 1093 "parser.m"
{
#line 1095 "parser.m"
  {
#line 1095 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 1095 "parser.m"
#line 1095 "parser.m"
    switch (MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) {
#line 1095 "parser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1095 "parser.m"
      case (MR_Integer) 0:
#line 1095 "parser.m"
#line 1095 "parser.m"
        switch (MR_unmkbody(mercury__parser__HeadVar__1_1)) {
#line 1095 "parser.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1095 "parser.m"
          case (MR_Integer) 0:
#line 1102 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 1:
#line 1103 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 2:
#line 1104 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 3:
#line 1105 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 4:
#line 1106 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 5:
#line 1107 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 6:
#line 1108 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 7:
#line 1109 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 8:
#line 1110 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 9:
#line 1111 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 10:
#line 1115 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
        }
#line 1095 "parser.m"
        break;
#line 1095 "parser.m"
      case (MR_Integer) 1:
#line 1095 "parser.m"
        *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "parser.m"
        break;
#line 1095 "parser.m"
      case (MR_Integer) 2:
#line 1096 "parser.m"
        *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "parser.m"
        break;
#line 1095 "parser.m"
      case (MR_Integer) 3:
#line 1095 "parser.m"
#line 1095 "parser.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) {
#line 1095 "parser.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1095 "parser.m"
          case (MR_Integer) 0:
#line 1097 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 1:
#line 1098 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 2:
#line 1099 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 3:
#line 1100 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 4:
#line 1101 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 5:
#line 1112 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 6:
#line 1113 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 7:
#line 1114 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
          case (MR_Integer) 8:
#line 1116 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "parser.m"
            break;
#line 1095 "parser.m"
        }
#line 1095 "parser.m"
        break;
#line 1095 "parser.m"
    }
#line 1095 "parser.m"
  }
#line 1093 "parser.m"
}

#line 1077 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_priority_3_p_0(
#line 1077 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1077 "parser.m"
  MR_Integer mercury__parser__MaxPriority_2,
#line 1077 "parser.m"
  MR_Integer mercury__parser__Priority_3)
#line 1077 "parser.m"
{
#line 1079 "parser.m"
  {
#line 1079 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 1079 "parser.m"
#line 1079 "parser.m"
    switch (mercury__parser__HeadVar__1_1) {
#line 1079 "parser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1079 "parser.m"
      case (MR_Integer) 0:
#line 1082 "parser.m"
        mercury__parser__succeeded = (mercury__parser__Priority_3 < mercury__parser__MaxPriority_2);
#line 1079 "parser.m"
        break;
#line 1079 "parser.m"
      case (MR_Integer) 1:
#line 1080 "parser.m"
        mercury__parser__succeeded = (mercury__parser__Priority_3 <= mercury__parser__MaxPriority_2);
#line 1079 "parser.m"
        break;
#line 1079 "parser.m"
    }
#line 1079 "parser.m"
    return mercury__parser__succeeded;
#line 1079 "parser.m"
  }
#line 1077 "parser.m"
}

#line 1059 "parser.m"
static MR_bool MR_CALL 
mercury__parser__find_first_binary_prefix_op_5_p_0(
#line 1059 "parser.m"
  MR_Word mercury__parser__OpInfo_6,
#line 1059 "parser.m"
  MR_Word mercury__parser__OtherOpInfos_7,
#line 1059 "parser.m"
  MR_Integer * mercury__parser__OpPriority_8,
#line 1059 "parser.m"
  MR_Word * mercury__parser__RightAssoc_9,
#line 1059 "parser.m"
  MR_Word * mercury__parser__RightRightAssoc_10)
#line 1059 "parser.m"
{
#line 1063 "parser.m"
  while (MR_TRUE)
#line 1063 "parser.m"
    {
#line 1063 "parser.m"
      /* tailcall optimized into a loop */
#line 1063 "parser.m"
      {
#line 1063 "parser.m"
        MR_bool mercury__parser__succeeded;
#line 1063 "parser.m"
        MR_Word mercury__parser__Class_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__OpInfo_6, (MR_Integer) 0)));
#line 1063 "parser.m"
        MR_Integer mercury__parser__Priority_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parser__OpInfo_6, (MR_Integer) 1)));
#line 1069 "parser.m"
        MR_Word mercury__parser__RightAssocPrime_13;
#line 1069 "parser.m"
        MR_Word mercury__parser__RightRightAssocPrime_14;

#line 1065 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Class_11)) == (MR_mktag((MR_Integer) 2)));
#line 1065 "parser.m"
        if (mercury__parser__succeeded)
#line 1065 "parser.m"
          {
#line 1065 "parser.m"
            mercury__parser__RightAssocPrime_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__parser__Class_11, (MR_Integer) 0)));
#line 1065 "parser.m"
            mercury__parser__RightRightAssocPrime_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__parser__Class_11, (MR_Integer) 1)));
#line 1066 "parser.m"
            *mercury__parser__OpPriority_8 = mercury__parser__Priority_12;
#line 1067 "parser.m"
            *mercury__parser__RightAssoc_9 = mercury__parser__RightAssocPrime_13;
#line 1068 "parser.m"
            *mercury__parser__RightRightAssoc_10 = mercury__parser__RightRightAssocPrime_14;
#line 1066 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 1065 "parser.m"
          }
#line 1065 "parser.m"
        else
#line 1070 "parser.m"
          {
#line 1070 "parser.m"
            MR_Word mercury__parser__HeadOpInfo_15;
#line 1070 "parser.m"
            MR_Word mercury__parser__TailOpInfos_16;

#line 1070 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__OtherOpInfos_7)) == (MR_mktag((MR_Integer) 1)));
#line 1070 "parser.m"
            if (mercury__parser__succeeded)
#line 1070 "parser.m"
              {
#line 1070 "parser.m"
                mercury__parser__HeadOpInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__OtherOpInfos_7, (MR_Integer) 0)));
#line 1070 "parser.m"
                mercury__parser__TailOpInfos_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__OtherOpInfos_7, (MR_Integer) 1)));
#line 1071 "parser.m"
                /* direct tailcall eliminated */
#line 1071 "parser.m"
                {
#line 1071 "parser.m"
                  MR_Word mercury__parser__OpInfo__tmp_copy_6 = mercury__parser__HeadOpInfo_15;
#line 1071 "parser.m"
                  MR_Word mercury__parser__OtherOpInfos__tmp_copy_7 = mercury__parser__TailOpInfos_16;

#line 1071 "parser.m"
                  mercury__parser__OtherOpInfos_7 = mercury__parser__OtherOpInfos__tmp_copy_7;
#line 1071 "parser.m"
                  mercury__parser__OpInfo_6 = mercury__parser__OpInfo__tmp_copy_6;
#line 1071 "parser.m"
                }
#line 1071 "parser.m"
                continue;
#line 1070 "parser.m"
              }
#line 1070 "parser.m"
          }
#line 1063 "parser.m"
        return mercury__parser__succeeded;
#line 1063 "parser.m"
      }
#line 1063 "parser.m"
      break;
#line 1063 "parser.m"
    }
#line 1059 "parser.m"
}

#line 1046 "parser.m"
static MR_bool MR_CALL 
mercury__parser__find_first_prefix_op_4_p_0(
#line 1046 "parser.m"
  MR_Word mercury__parser__OpInfo_5,
#line 1046 "parser.m"
  MR_Word mercury__parser__OtherOpInfos_6,
#line 1046 "parser.m"
  MR_Integer * mercury__parser__OpPriority_7,
#line 1046 "parser.m"
  MR_Word * mercury__parser__RightAssoc_8)
#line 1046 "parser.m"
{
#line 1049 "parser.m"
  while (MR_TRUE)
#line 1049 "parser.m"
    {
#line 1049 "parser.m"
      /* tailcall optimized into a loop */
#line 1049 "parser.m"
      {
#line 1049 "parser.m"
        MR_bool mercury__parser__succeeded;
#line 1049 "parser.m"
        MR_Word mercury__parser__Class_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__OpInfo_5, (MR_Integer) 0)));
#line 1049 "parser.m"
        MR_Integer mercury__parser__Priority_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parser__OpInfo_5, (MR_Integer) 1)));
#line 1054 "parser.m"
        MR_Word mercury__parser__RightAssocPrime_11;

#line 1051 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Class_9)) == (MR_mktag((MR_Integer) 1)));
#line 1051 "parser.m"
        if (mercury__parser__succeeded)
#line 1051 "parser.m"
          {
#line 1051 "parser.m"
            mercury__parser__RightAssocPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Class_9, (MR_Integer) 0)));
#line 1052 "parser.m"
            *mercury__parser__OpPriority_7 = mercury__parser__Priority_10;
#line 1053 "parser.m"
            *mercury__parser__RightAssoc_8 = mercury__parser__RightAssocPrime_11;
#line 1052 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 1051 "parser.m"
          }
#line 1051 "parser.m"
        else
#line 1055 "parser.m"
          {
#line 1055 "parser.m"
            MR_Word mercury__parser__HeadOpInfo_12;
#line 1055 "parser.m"
            MR_Word mercury__parser__TailOpInfos_13;

#line 1055 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__OtherOpInfos_6)) == (MR_mktag((MR_Integer) 1)));
#line 1055 "parser.m"
            if (mercury__parser__succeeded)
#line 1055 "parser.m"
              {
#line 1055 "parser.m"
                mercury__parser__HeadOpInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__OtherOpInfos_6, (MR_Integer) 0)));
#line 1055 "parser.m"
                mercury__parser__TailOpInfos_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__OtherOpInfos_6, (MR_Integer) 1)));
#line 1056 "parser.m"
                /* direct tailcall eliminated */
#line 1056 "parser.m"
                {
#line 1056 "parser.m"
                  MR_Word mercury__parser__OpInfo__tmp_copy_5 = mercury__parser__HeadOpInfo_12;
#line 1056 "parser.m"
                  MR_Word mercury__parser__OtherOpInfos__tmp_copy_6 = mercury__parser__TailOpInfos_13;

#line 1056 "parser.m"
                  mercury__parser__OtherOpInfos_6 = mercury__parser__OtherOpInfos__tmp_copy_6;
#line 1056 "parser.m"
                  mercury__parser__OpInfo_5 = mercury__parser__OpInfo__tmp_copy_5;
#line 1056 "parser.m"
                }
#line 1056 "parser.m"
                continue;
#line 1055 "parser.m"
              }
#line 1055 "parser.m"
          }
#line 1049 "parser.m"
        return mercury__parser__succeeded;
#line 1049 "parser.m"
      }
#line 1049 "parser.m"
      break;
#line 1049 "parser.m"
    }
#line 1046 "parser.m"
}

#line 962 "parser.m"
static void MR_CALL 
mercury__parser__parse_args_5_p_0(
#line 962 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_35,
#line 962 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_34,
#line 962 "parser.m"
  MR_Word * mercury__parser__List_6,
#line 962 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
#line 962 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
#line 962 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
#line 962 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22)
#line 962 "parser.m"
{
#line 967 "parser.m"
  {
#line 967 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 967 "parser.m"
    MR_Word mercury__parser__Arg0_9;
#line 967 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 967 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_24_24;
#line 967 "parser.m"
    MR_Box mercury__parser__OpTable_47 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 1));
#line 967 "parser.m"
    MR_Integer mercury__parser__ArgPriority_48;
#line 967 "parser.m"
    MR_Integer mercury__parser__V_49_49;
#line 1180 "parser.m"
    MR_String mercury__parser__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 0)));
#line 1180 "parser.m"
    MR_Word mercury__parser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 2)));
#line 1180 "parser.m"
    MR_Word mercury__parser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 3)));
#line 37 "ops.int"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
#line 37 "ops.int"
    MR_Box mercury__parser__conv1_V_49_49;

#line 37 "ops.int"
    {
#line 37 "ops.int"
      mercury__parser__conv1_V_49_49 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_34), mercury__parser__OpTable_47);
    }
#line 37 "ops.int"
    mercury__parser__V_49_49 = ((MR_Integer) mercury__parser__conv1_V_49_49);
#line 345 "parser.m"
    mercury__parser__ArgPriority_48 = (mercury__parser__V_49_49 + (MR_Integer) 1);
#line 346 "parser.m"
    {
#line 346 "parser.m"
      mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_35, mercury__parser__TypeClassInfo_for_op_table_34, mercury__parser__ArgPriority_48, (MR_Integer) 1, &mercury__parser__Arg0_9, mercury__parser__STATE_VARIABLE_TokensLeft_0_19, &mercury__parser__STATE_VARIABLE_TokensLeft_23_23, mercury__parser__STATE_VARIABLE_PS_0_21, &mercury__parser__STATE_VARIABLE_PS_24_24);
    }
#line 994 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Arg0_9)) == (MR_mktag((MR_Integer) 1))))
#line 995 "parser.m"
      {
#line 997 "parser.m"
        *mercury__parser__List_6 = (MR_Word) mercury__parser__Arg0_9;
#line 995 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 995 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_22 = mercury__parser__STATE_VARIABLE_PS_24_24;
#line 995 "parser.m"
      }
#line 994 "parser.m"
    else
#line 970 "parser.m"
      {
#line 970 "parser.m"
        MR_Word mercury__parser__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Arg0_9, (MR_Integer) 0)));

#line 989 "parser.m"
        if ((mercury__parser__STATE_VARIABLE_TokensLeft_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "parser.m"
          {
#line 991 "parser.m"
            {
#line 991 "parser.m"
              MR_Word base;
#line 991 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "parser.m"
              *mercury__parser__List_6 = base;
#line 991 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file in argument list"));
#line 991 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_23_23));
#line 991 "parser.m"
            }
#line 990 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 990 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_22 = mercury__parser__STATE_VARIABLE_PS_24_24;
#line 990 "parser.m"
          }
#line 989 "parser.m"
        else
#line 972 "parser.m"
          {
#line 972 "parser.m"
            MR_Word mercury__parser__Token_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 0)));
#line 972 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 2)));
#line 972 "parser.m"
            MR_Integer mercury__parser__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 1)));

#line 973 "parser.m"
            mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 983 "parser.m"
            if (mercury__parser__succeeded)
#line 974 "parser.m"
              {
#line 974 "parser.m"
                MR_Word mercury__parser__Tail0_13;

#line 974 "parser.m"
                {
#line 974 "parser.m"
                  mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_35, mercury__parser__TypeClassInfo_for_op_table_34, &mercury__parser__Tail0_13, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, mercury__parser__STATE_VARIABLE_TokensLeft_20, mercury__parser__STATE_VARIABLE_PS_24_24, mercury__parser__STATE_VARIABLE_PS_22);
                }
#line 978 "parser.m"
                if (((MR_tag((MR_Word) mercury__parser__Tail0_13)) == (MR_mktag((MR_Integer) 1))))
#line 981 "parser.m"
                  *mercury__parser__List_6 = mercury__parser__Tail0_13;
#line 978 "parser.m"
                else
#line 976 "parser.m"
                  {
#line 976 "parser.m"
                    MR_Word mercury__parser__Tail_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_13, (MR_Integer) 0)));
#line 976 "parser.m"
                    MR_Word mercury__parser__V_29_29;

#line 977 "parser.m"
                    {
#line 977 "parser.m"
                      mercury__parser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 977 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_29_29, 0) = ((MR_Box) (mercury__parser__Arg_10));
#line 977 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_29_29, 1) = ((MR_Box) (mercury__parser__Tail_14));
#line 977 "parser.m"
                    }
#line 977 "parser.m"
                    {
#line 977 "parser.m"
                      MR_Word base;
#line 977 "parser.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 977 "parser.m"
                      *mercury__parser__List_6 = base;
#line 977 "parser.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_29_29));
#line 977 "parser.m"
                    }
#line 976 "parser.m"
                  }
#line 974 "parser.m"
              }
#line 983 "parser.m"
            else
#line 985 "parser.m"
              {
#line 983 "parser.m"
                mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 985 "parser.m"
                if (mercury__parser__succeeded)
#line 984 "parser.m"
                  {
#line 984 "parser.m"
                    MR_Word mercury__parser__V_30_30;
#line 984 "parser.m"
                    MR_Word mercury__parser__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 984 "parser.m"
                    {
#line 984 "parser.m"
                      mercury__parser__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_30_30, 0) = ((MR_Box) (mercury__parser__Arg_10));
#line 984 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_30_30, 1) = ((MR_Box) (mercury__parser__V_31_31));
#line 984 "parser.m"
                    }
#line 984 "parser.m"
                    {
#line 984 "parser.m"
                      MR_Word base;
#line 984 "parser.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 984 "parser.m"
                      *mercury__parser__List_6 = base;
#line 984 "parser.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_30_30));
#line 984 "parser.m"
                    }
#line 984 "parser.m"
                    *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_26_26;
#line 984 "parser.m"
                  }
#line 985 "parser.m"
                else
#line 986 "parser.m"
                  {
#line 1032 "parser.m"
                    MR_String mercury__parser__Op_69;
#line 1032 "parser.m"
                    MR_Box mercury__parser__OpTable_70;
#line 1180 "parser.m"
                    MR_String mercury__parser__V_82_82;
#line 1180 "parser.m"
                    MR_Word mercury__parser__V_83_83;
#line 1180 "parser.m"
                    MR_Word mercury__parser__V_84_84;

#line 1028 "parser.m"
                    *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 1031 "parser.m"
                    if ((mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 1031 "parser.m"
                      {
#line 1031 "parser.m"
                        mercury__parser__Op_69 = (MR_String) ",";
#line 1031 "parser.m"
                        mercury__parser__succeeded = MR_TRUE;
#line 1031 "parser.m"
                      }
#line 1031 "parser.m"
                    else
#line 1031 "parser.m"
                    if (((MR_tag((MR_Word) mercury__parser__Token_11)) == (MR_mktag((MR_Integer) 1))))
#line 1030 "parser.m"
                      {
#line 1030 "parser.m"
                        mercury__parser__Op_69 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_11, (MR_Integer) 0)));
#line 1030 "parser.m"
                        mercury__parser__succeeded = MR_TRUE;
#line 1030 "parser.m"
                      }
#line 1031 "parser.m"
                    else
#line 1031 "parser.m"
                      mercury__parser__succeeded = MR_FALSE;
#line 1032 "parser.m"
                    if (mercury__parser__succeeded)
#line 1032 "parser.m"
                      {
#line 1180 "parser.m"
                        mercury__parser__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_24_24, (MR_Integer) 0)));
#line 1180 "parser.m"
                        mercury__parser__OpTable_70 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_24_24, (MR_Integer) 1));
#line 1180 "parser.m"
                        mercury__parser__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_24_24, (MR_Integer) 2)));
#line 1180 "parser.m"
                        mercury__parser__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_24_24, (MR_Integer) 3)));
#line 23 "ops.int"
                        {
#line 23 "ops.int"
                          MR_Integer mercury__parser__V_71_71;
#line 23 "ops.int"
                          MR_Word mercury__parser__V_72_72;
#line 23 "ops.int"
                          MR_Word mercury__parser__V_73_73;
#line 23 "ops.int"
                          MR_bool MR_CALL (* mercury__parser__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 23 "ops.int"
                          MR_Box mercury__parser__conv5_V_71_71;
#line 23 "ops.int"
                          MR_Box mercury__parser__conv4_V_72_72;
#line 23 "ops.int"
                          MR_Box mercury__parser__conv3_V_73_73;

#line 23 "ops.int"
                          {
#line 23 "ops.int"
                            mercury__parser__succeeded = mercury__parser__func_2(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_34), mercury__parser__OpTable_70, ((MR_Box) (mercury__parser__Op_69)), &mercury__parser__conv5_V_71_71, &mercury__parser__conv4_V_72_72, &mercury__parser__conv3_V_73_73);
                          }
#line 23 "ops.int"
                          if (mercury__parser__succeeded)
#line 23 "ops.int"
                            {
#line 23 "ops.int"
                              mercury__parser__V_71_71 = ((MR_Integer) mercury__parser__conv5_V_71_71);
#line 23 "ops.int"
                              mercury__parser__V_72_72 = ((MR_Word) mercury__parser__conv4_V_72_72);
#line 23 "ops.int"
                              mercury__parser__V_73_73 = ((MR_Word) mercury__parser__conv3_V_73_73);
#line 23 "ops.int"
                              mercury__parser__succeeded = MR_TRUE;
#line 23 "ops.int"
                            }
#line 23 "ops.int"
                        }
#line 1035 "parser.m"
                        if (!(mercury__parser__succeeded))
#line 29 "ops.int"
                          {
#line 29 "ops.int"
                            MR_Integer mercury__parser__V_74_74;
#line 29 "ops.int"
                            MR_Word mercury__parser__V_75_75;
#line 29 "ops.int"
                            MR_bool MR_CALL (* mercury__parser__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 8)));
#line 29 "ops.int"
                            MR_Box mercury__parser__conv8_V_74_74;
#line 29 "ops.int"
                            MR_Box mercury__parser__conv7_V_75_75;

#line 29 "ops.int"
                            {
#line 29 "ops.int"
                              mercury__parser__succeeded = mercury__parser__func_6(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_34), mercury__parser__OpTable_70, ((MR_Box) (mercury__parser__Op_69)), &mercury__parser__conv8_V_74_74, &mercury__parser__conv7_V_75_75);
                            }
#line 29 "ops.int"
                            if (mercury__parser__succeeded)
#line 29 "ops.int"
                              {
#line 29 "ops.int"
                                mercury__parser__V_74_74 = ((MR_Integer) mercury__parser__conv8_V_74_74);
#line 29 "ops.int"
                                mercury__parser__V_75_75 = ((MR_Word) mercury__parser__conv7_V_75_75);
#line 29 "ops.int"
                                mercury__parser__succeeded = MR_TRUE;
#line 29 "ops.int"
                              }
#line 29 "ops.int"
                          }
#line 1032 "parser.m"
                      }
#line 1039 "parser.m"
                    if (mercury__parser__succeeded)
#line 1038 "parser.m"
                      {
#line 1038 "parser.m"
                        {
#line 1038 "parser.m"
                          MR_Word base;
#line 1038 "parser.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "parser.m"
                          *mercury__parser__List_6 = base;
#line 1038 "parser.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
#line 1038 "parser.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_20));
#line 1038 "parser.m"
                        }
#line 1038 "parser.m"
                      }
#line 1039 "parser.m"
                    else
#line 1040 "parser.m"
                      {
#line 1040 "parser.m"
                        MR_Word base;
#line 1040 "parser.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "parser.m"
                        *mercury__parser__List_6 = base;
#line 1040 "parser.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "expected \140,\', \140)\', or operator"));
#line 1040 "parser.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_20));
#line 1040 "parser.m"
                      }
#line 986 "parser.m"
                  }
#line 985 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_22 = mercury__parser__STATE_VARIABLE_PS_24_24;
#line 985 "parser.m"
              }
#line 972 "parser.m"
          }
#line 970 "parser.m"
      }
#line 967 "parser.m"
  }
#line 962 "parser.m"
}

#line 908 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_tail_6_p_0(
#line 908 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_68,
#line 908 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_67,
#line 908 "parser.m"
  MR_Word mercury__parser__Arg_7,
#line 908 "parser.m"
  MR_Word * mercury__parser__List_8,
#line 908 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
#line 908 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
#line 908 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_23,
#line 908 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_24)
#line 908 "parser.m"
{
#line 956 "parser.m"
  {
#line 956 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 956 "parser.m"
    if ((mercury__parser__STATE_VARIABLE_TokensLeft_0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "parser.m"
      {
#line 959 "parser.m"
        {
#line 959 "parser.m"
          MR_Word base;
#line 959 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "parser.m"
          *mercury__parser__List_8 = base;
#line 959 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file in list"));
#line 959 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_21));
#line 959 "parser.m"
        }
#line 957 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_0_21;
#line 957 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_24 = mercury__parser__STATE_VARIABLE_PS_0_23;
#line 957 "parser.m"
      }
#line 956 "parser.m"
    else
#line 915 "parser.m"
      {
#line 915 "parser.m"
        MR_Word mercury__parser__Token_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 0)));
#line 915 "parser.m"
        MR_Integer mercury__parser__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 1)));
#line 915 "parser.m"
        MR_Word mercury__parser__TermContext_13;
#line 915 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 2)));
#line 915 "parser.m"
        MR_String mercury__parser__FileName_78 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 0)));
#line 1178 "parser.m"
        MR_Box mercury__parser__V_81_81 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 1));
#line 1178 "parser.m"
        MR_Word mercury__parser__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 2)));
#line 1178 "parser.m"
        MR_Word mercury__parser__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 3)));

#line 123 "term.opt"
        {
#line 123 "term.opt"
          mercury__parser__TermContext_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "term.opt"
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_13, 0) = ((MR_Box) (mercury__parser__FileName_78));
#line 123 "term.opt"
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_13, 1) = ((MR_Box) (mercury__parser__Context_12));
#line 123 "term.opt"
        }
#line 917 "parser.m"
        mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 928 "parser.m"
        if (mercury__parser__succeeded)
#line 918 "parser.m"
          {
#line 918 "parser.m"
            MR_Word mercury__parser__Tail0_14;

#line 918 "parser.m"
            {
#line 918 "parser.m"
              mercury__parser__parse_list_5_p_0(mercury__parser__TypeInfo_for_T_68, mercury__parser__TypeClassInfo_for_op_table_67, &mercury__parser__Tail0_14, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, mercury__parser__STATE_VARIABLE_TokensLeft_22, mercury__parser__STATE_VARIABLE_PS_0_23, mercury__parser__STATE_VARIABLE_PS_24);
            }
#line 923 "parser.m"
            if (((MR_tag((MR_Word) mercury__parser__Tail0_14)) == (MR_mktag((MR_Integer) 1))))
#line 926 "parser.m"
              *mercury__parser__List_8 = mercury__parser__Tail0_14;
#line 923 "parser.m"
            else
#line 920 "parser.m"
              {
#line 920 "parser.m"
                MR_Word mercury__parser__Tail_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_14, (MR_Integer) 0)));
#line 920 "parser.m"
                MR_Word mercury__parser__V_29_29;
#line 920 "parser.m"
                MR_Word mercury__parser__V_30_30 = (MR_Word) &mercury__parser_scalar_common_7[3];
#line 920 "parser.m"
                MR_Word mercury__parser__V_32_32;
#line 920 "parser.m"
                MR_Word mercury__parser__V_33_33;
#line 920 "parser.m"
                MR_Word mercury__parser__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 921 "parser.m"
                {
#line 921 "parser.m"
                  mercury__parser__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_33_33, 0) = ((MR_Box) (mercury__parser__Tail_15));
#line 921 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_33_33, 1) = ((MR_Box) (mercury__parser__V_34_34));
#line 921 "parser.m"
                }
#line 921 "parser.m"
                {
#line 921 "parser.m"
                  mercury__parser__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_32_32, 0) = ((MR_Box) (mercury__parser__Arg_7));
#line 921 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_32_32, 1) = ((MR_Box) (mercury__parser__V_33_33));
#line 921 "parser.m"
                }
#line 921 "parser.m"
                {
#line 921 "parser.m"
                  mercury__parser__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 921 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 0) = ((MR_Box) (mercury__parser__V_30_30));
#line 921 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 1) = ((MR_Box) (mercury__parser__V_32_32));
#line 921 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 2) = ((MR_Box) (mercury__parser__TermContext_13));
#line 921 "parser.m"
                }
#line 921 "parser.m"
                {
#line 921 "parser.m"
                  MR_Word base;
#line 921 "parser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 921 "parser.m"
                  *mercury__parser__List_8 = base;
#line 921 "parser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_29_29));
#line 921 "parser.m"
                }
#line 920 "parser.m"
              }
#line 918 "parser.m"
          }
#line 928 "parser.m"
        else
#line 947 "parser.m"
          {
#line 928 "parser.m"
            mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 947 "parser.m"
            if (mercury__parser__succeeded)
#line 929 "parser.m"
              {
#line 929 "parser.m"
                MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_35_35;
#line 929 "parser.m"
                MR_Word mercury__parser__Tail0_60;

#line 929 "parser.m"
                {
#line 929 "parser.m"
                  mercury__parser__parse_arg_5_p_0(mercury__parser__TypeInfo_for_T_68, mercury__parser__TypeClassInfo_for_op_table_67, &mercury__parser__Tail0_60, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, &mercury__parser__STATE_VARIABLE_TokensLeft_35_35, mercury__parser__STATE_VARIABLE_PS_0_23, mercury__parser__STATE_VARIABLE_PS_24);
                }
#line 942 "parser.m"
                if (((MR_tag((MR_Word) mercury__parser__Tail0_60)) == (MR_mktag((MR_Integer) 1))))
#line 943 "parser.m"
                  {
#line 945 "parser.m"
                    *mercury__parser__List_8 = mercury__parser__Tail0_60;
#line 943 "parser.m"
                    *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_35_35;
#line 943 "parser.m"
                  }
#line 942 "parser.m"
                else
#line 931 "parser.m"
                  {
#line 931 "parser.m"
                    MR_Word mercury__parser__Tail_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_60, (MR_Integer) 0)));
#line 938 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_37_37;
#line 933 "parser.m"
                    MR_Word mercury__parser__V_38_38;
#line 933 "parser.m"
                    MR_Integer mercury__parser___Context_18;

#line 933 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 933 "parser.m"
                    if (mercury__parser__succeeded)
#line 933 "parser.m"
                      {
#line 933 "parser.m"
                        mercury__parser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 0)));
#line 933 "parser.m"
                        mercury__parser___Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 1)));
#line 933 "parser.m"
                        mercury__parser__STATE_VARIABLE_TokensLeft_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 2)));
#line 933 "parser.m"
                        mercury__parser__succeeded = (mercury__parser__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 933 "parser.m"
                      }
#line 938 "parser.m"
                    if (mercury__parser__succeeded)
#line 936 "parser.m"
                      {
#line 936 "parser.m"
                        MR_Word mercury__parser__V_39_39;
#line 936 "parser.m"
                        MR_Word mercury__parser__V_40_40;
#line 936 "parser.m"
                        MR_Word mercury__parser__V_42_42;
#line 936 "parser.m"
                        MR_Word mercury__parser__V_43_43;
#line 936 "parser.m"
                        MR_Word mercury__parser__V_44_44;

#line 936 "parser.m"
                        *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_37_37;
#line 936 "parser.m"
                        mercury__parser__V_40_40 = (MR_Word) &mercury__parser_scalar_common_7[3];
#line 936 "parser.m"
                        mercury__parser__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 936 "parser.m"
                        {
#line 936 "parser.m"
                          mercury__parser__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_43_43, 0) = ((MR_Box) (mercury__parser__Tail_58));
#line 936 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_43_43, 1) = ((MR_Box) (mercury__parser__V_44_44));
#line 936 "parser.m"
                        }
#line 936 "parser.m"
                        {
#line 936 "parser.m"
                          mercury__parser__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_42_42, 0) = ((MR_Box) (mercury__parser__Arg_7));
#line 936 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_42_42, 1) = ((MR_Box) (mercury__parser__V_43_43));
#line 936 "parser.m"
                        }
#line 936 "parser.m"
                        {
#line 936 "parser.m"
                          mercury__parser__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 936 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_39_39, 0) = ((MR_Box) (mercury__parser__V_40_40));
#line 936 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_39_39, 1) = ((MR_Box) (mercury__parser__V_42_42));
#line 936 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_39_39, 2) = ((MR_Box) (mercury__parser__TermContext_13));
#line 936 "parser.m"
                        }
#line 936 "parser.m"
                        {
#line 936 "parser.m"
                          MR_Word base;
#line 936 "parser.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 936 "parser.m"
                          *mercury__parser__List_8 = base;
#line 936 "parser.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_39_39));
#line 936 "parser.m"
                        }
#line 936 "parser.m"
                      }
#line 938 "parser.m"
                    else
#line 939 "parser.m"
                      {
#line 939 "parser.m"
                        MR_Word mercury__parser__conv0_List_8;

#line 939 "parser.m"
                        {
#line 939 "parser.m"
                          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__parser__TypeClassInfo_for_op_table_67, (MR_String) "expecting \']\' or operator", &mercury__parser__conv0_List_8, mercury__parser__STATE_VARIABLE_TokensLeft_35_35, mercury__parser__STATE_VARIABLE_TokensLeft_22, *mercury__parser__STATE_VARIABLE_PS_24);
                        }
#line 939 "parser.m"
                        *mercury__parser__List_8 = (MR_Word) mercury__parser__conv0_List_8;
#line 939 "parser.m"
                      }
#line 931 "parser.m"
                  }
#line 929 "parser.m"
              }
#line 947 "parser.m"
            else
#line 951 "parser.m"
              {
#line 947 "parser.m"
                mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 951 "parser.m"
                if (mercury__parser__succeeded)
#line 948 "parser.m"
                  {
#line 948 "parser.m"
                    MR_Word mercury__parser__V_47_47 = (MR_Word) &mercury__parser_scalar_common_7[4];
#line 948 "parser.m"
                    MR_Word mercury__parser__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 948 "parser.m"
                    MR_Word mercury__parser__V_50_50;
#line 948 "parser.m"
                    MR_Word mercury__parser__V_51_51;
#line 948 "parser.m"
                    MR_Word mercury__parser__V_53_53;
#line 948 "parser.m"
                    MR_Word mercury__parser__V_54_54;
#line 948 "parser.m"
                    MR_Word mercury__parser__V_55_55;
#line 948 "parser.m"
                    MR_Word mercury__parser__Tail_62;

#line 948 "parser.m"
                    {
#line 948 "parser.m"
                      mercury__parser__Tail_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 948 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_62, 0) = ((MR_Box) (mercury__parser__V_47_47));
#line 948 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_62, 1) = ((MR_Box) (mercury__parser__V_49_49));
#line 948 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_62, 2) = ((MR_Box) (mercury__parser__TermContext_13));
#line 948 "parser.m"
                    }
#line 949 "parser.m"
                    mercury__parser__V_51_51 = (MR_Word) &mercury__parser_scalar_common_7[3];
#line 949 "parser.m"
                    mercury__parser__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 949 "parser.m"
                    {
#line 949 "parser.m"
                      mercury__parser__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_54_54, 0) = ((MR_Box) (mercury__parser__Tail_62));
#line 949 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_54_54, 1) = ((MR_Box) (mercury__parser__V_55_55));
#line 949 "parser.m"
                    }
#line 949 "parser.m"
                    {
#line 949 "parser.m"
                      mercury__parser__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_53_53, 0) = ((MR_Box) (mercury__parser__Arg_7));
#line 949 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_53_53, 1) = ((MR_Box) (mercury__parser__V_54_54));
#line 949 "parser.m"
                    }
#line 949 "parser.m"
                    {
#line 949 "parser.m"
                      mercury__parser__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 949 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__V_50_50, 0) = ((MR_Box) (mercury__parser__V_51_51));
#line 949 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__V_50_50, 1) = ((MR_Box) (mercury__parser__V_53_53));
#line 949 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__V_50_50, 2) = ((MR_Box) (mercury__parser__TermContext_13));
#line 949 "parser.m"
                    }
#line 949 "parser.m"
                    {
#line 949 "parser.m"
                      MR_Word base;
#line 949 "parser.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 949 "parser.m"
                      *mercury__parser__List_8 = base;
#line 949 "parser.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_50_50));
#line 949 "parser.m"
                    }
#line 948 "parser.m"
                    *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_26_26;
#line 948 "parser.m"
                  }
#line 951 "parser.m"
                else
#line 952 "parser.m"
                  {
#line 952 "parser.m"
                    MR_Word mercury__parser__conv1_List_8;

#line 952 "parser.m"
                    {
#line 952 "parser.m"
                      mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(mercury__parser__TypeClassInfo_for_op_table_67, mercury__parser__Token_11, mercury__parser__Context_12, (MR_String) "expected comma, \140|\', \140]\', or operator", &mercury__parser__conv1_List_8, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, mercury__parser__STATE_VARIABLE_TokensLeft_22, mercury__parser__STATE_VARIABLE_PS_0_23);
                    }
#line 952 "parser.m"
                    *mercury__parser__List_8 = (MR_Word) mercury__parser__conv1_List_8;
#line 952 "parser.m"
                  }
#line 951 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_24 = mercury__parser__STATE_VARIABLE_PS_0_23;
#line 951 "parser.m"
              }
#line 947 "parser.m"
          }
#line 915 "parser.m"
      }
#line 956 "parser.m"
  }
#line 908 "parser.m"
}

#line 893 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_5_p_0(
#line 893 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_22,
#line 893 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_21,
#line 893 "parser.m"
  MR_Word * mercury__parser__List_6,
#line 893 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_13,
#line 893 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_14,
#line 893 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_15,
#line 893 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_16)
#line 893 "parser.m"
{
#line 897 "parser.m"
  {
#line 897 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 897 "parser.m"
    MR_Word mercury__parser__Arg0_9;
#line 897 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_17_17;
#line 897 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_18_18;
#line 897 "parser.m"
    MR_Box mercury__parser__OpTable_30;
#line 897 "parser.m"
    MR_Integer mercury__parser__ArgPriority_31;
#line 897 "parser.m"
    MR_Integer mercury__parser__V_32_32;
#line 134 "private_builtin.opt"
    MR_Word mercury__parser__TypeInfo_23_38;
#line 1180 "parser.m"
    MR_String mercury__parser__V_41_41;
#line 1180 "parser.m"
    MR_Word mercury__parser__V_42_42;
#line 1180 "parser.m"
    MR_Word mercury__parser__V_43_43;
#line 37 "ops.int"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
#line 37 "ops.int"
    MR_Box mercury__parser__conv1_V_32_32;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__parse_list_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_21 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4598 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_23_38  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 1180 "parser.m"
    mercury__parser__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 0)));
#line 1180 "parser.m"
    mercury__parser__OpTable_30 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 1));
#line 1180 "parser.m"
    mercury__parser__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 2)));
#line 1180 "parser.m"
    mercury__parser__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 3)));
#line 37 "ops.int"
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_21, (MR_Integer) 0)), (MR_Integer) 12)));
#line 37 "ops.int"
    {
#line 37 "ops.int"
      mercury__parser__conv1_V_32_32 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_21), mercury__parser__OpTable_30);
    }
#line 37 "ops.int"
    mercury__parser__V_32_32 = ((MR_Integer) mercury__parser__conv1_V_32_32);
#line 358 "parser.m"
    mercury__parser__ArgPriority_31 = (mercury__parser__V_32_32 + (MR_Integer) 1);
#line 359 "parser.m"
    {
#line 359 "parser.m"
      mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_22, mercury__parser__TypeClassInfo_for_op_table_21, mercury__parser__ArgPriority_31, (MR_Integer) 2, &mercury__parser__Arg0_9, mercury__parser__STATE_VARIABLE_TokensLeft_0_13, &mercury__parser__STATE_VARIABLE_TokensLeft_17_17, mercury__parser__STATE_VARIABLE_PS_0_15, &mercury__parser__STATE_VARIABLE_PS_18_18);
    }
#line 902 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Arg0_9)) == (MR_mktag((MR_Integer) 1))))
#line 903 "parser.m"
      {
#line 905 "parser.m"
        *mercury__parser__List_6 = mercury__parser__Arg0_9;
#line 903 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_14 = mercury__parser__STATE_VARIABLE_TokensLeft_17_17;
#line 903 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_16 = mercury__parser__STATE_VARIABLE_PS_18_18;
#line 903 "parser.m"
      }
#line 902 "parser.m"
    else
#line 900 "parser.m"
      {
#line 900 "parser.m"
        MR_Word mercury__parser__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Arg0_9, (MR_Integer) 0)));

#line 901 "parser.m"
        {
#line 901 "parser.m"
          mercury__parser__parse_list_tail_6_p_0(mercury__parser__TypeInfo_for_T_22, mercury__parser__TypeClassInfo_for_op_table_21, mercury__parser__Arg_10, mercury__parser__List_6, mercury__parser__STATE_VARIABLE_TokensLeft_17_17, mercury__parser__STATE_VARIABLE_TokensLeft_14, mercury__parser__STATE_VARIABLE_PS_18_18, mercury__parser__STATE_VARIABLE_PS_16);
        }
#line 900 "parser.m"
      }
#line 897 "parser.m"
  }
#line 893 "parser.m"
}

#line 873 "parser.m"
static void MR_CALL 
mercury__parser__parse_special_atom_7_p_0(
#line 873 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_32,
#line 873 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_31,
#line 873 "parser.m"
  MR_String mercury__parser__Atom_8,
#line 873 "parser.m"
  MR_Word mercury__parser__TermContext_9,
#line 873 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 873 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
#line 873 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
#line 873 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
#line 873 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21)
#line 873 "parser.m"
{
#line 889 "parser.m"
  {
#line 889 "parser.m"
    MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_18)) == (MR_mktag((MR_Integer) 1)));
#line 889 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_22_22;
#line 879 "parser.m"
    MR_Word mercury__parser__V_23_23;
#line 879 "parser.m"
    MR_Integer mercury__parser___Context_13;

#line 879 "parser.m"
    if (mercury__parser__succeeded)
#line 879 "parser.m"
      {
#line 879 "parser.m"
        mercury__parser__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 0)));
#line 879 "parser.m"
        mercury__parser___Context_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 1)));
#line 879 "parser.m"
        mercury__parser__STATE_VARIABLE_TokensLeft_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 2)));
#line 879 "parser.m"
        mercury__parser__succeeded = (mercury__parser__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 879 "parser.m"
      }
#line 889 "parser.m"
    if (mercury__parser__succeeded)
#line 880 "parser.m"
      {
#line 880 "parser.m"
        MR_Word mercury__parser__Args0_14;

#line 880 "parser.m"
        {
#line 880 "parser.m"
          mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_32, mercury__parser__TypeClassInfo_for_op_table_31, &mercury__parser__Args0_14, mercury__parser__STATE_VARIABLE_TokensLeft_22_22, mercury__parser__STATE_VARIABLE_TokensLeft_19, mercury__parser__STATE_VARIABLE_PS_0_20, mercury__parser__STATE_VARIABLE_PS_21);
        }
#line 884 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__Args0_14)) == (MR_mktag((MR_Integer) 1))))
#line 887 "parser.m"
          *mercury__parser__Term_10 = (MR_Word) mercury__parser__Args0_14;
#line 884 "parser.m"
        else
#line 882 "parser.m"
          {
#line 882 "parser.m"
            MR_Word mercury__parser__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Args0_14, (MR_Integer) 0)));
#line 882 "parser.m"
            MR_Word mercury__parser__V_26_26;
#line 882 "parser.m"
            MR_Word mercury__parser__V_27_27;

#line 883 "parser.m"
            {
#line 883 "parser.m"
              mercury__parser__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 883 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_27_27, 0) = ((MR_Box) (mercury__parser__Atom_8));
#line 883 "parser.m"
            }
#line 883 "parser.m"
            {
#line 883 "parser.m"
              mercury__parser__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 883 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_26_26, 0) = ((MR_Box) (mercury__parser__V_27_27));
#line 883 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_26_26, 1) = ((MR_Box) (mercury__parser__Args_15));
#line 883 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_26_26, 2) = ((MR_Box) (mercury__parser__TermContext_9));
#line 883 "parser.m"
            }
#line 883 "parser.m"
            {
#line 883 "parser.m"
              MR_Word base;
#line 883 "parser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 883 "parser.m"
              *mercury__parser__Term_10 = base;
#line 883 "parser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_26_26));
#line 883 "parser.m"
            }
#line 882 "parser.m"
          }
#line 880 "parser.m"
      }
#line 889 "parser.m"
    else
#line 890 "parser.m"
      {
#line 890 "parser.m"
        MR_Word mercury__parser__V_28_28;
#line 890 "parser.m"
        MR_Word mercury__parser__V_29_29;
#line 890 "parser.m"
        MR_Word mercury__parser__V_30_30;

#line 890 "parser.m"
        {
#line 890 "parser.m"
          mercury__parser__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 890 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 0) = ((MR_Box) (mercury__parser__Atom_8));
#line 890 "parser.m"
        }
#line 890 "parser.m"
        mercury__parser__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 890 "parser.m"
        {
#line 890 "parser.m"
          mercury__parser__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 890 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_28_28, 0) = ((MR_Box) (mercury__parser__V_29_29));
#line 890 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_28_28, 1) = ((MR_Box) (mercury__parser__V_30_30));
#line 890 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_28_28, 2) = ((MR_Box) (mercury__parser__TermContext_9));
#line 890 "parser.m"
        }
#line 890 "parser.m"
        {
#line 890 "parser.m"
          MR_Word base;
#line 890 "parser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 890 "parser.m"
          *mercury__parser__Term_10 = base;
#line 890 "parser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_28_28));
#line 890 "parser.m"
        }
#line 890 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_21 = mercury__parser__STATE_VARIABLE_PS_0_20;
#line 890 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_19 = mercury__parser__STATE_VARIABLE_TokensLeft_0_18;
#line 890 "parser.m"
      }
#line 889 "parser.m"
  }
#line 873 "parser.m"
}

#line 838 "parser.m"
static void MR_CALL 
mercury__parser__parse_higher_order_term_rest_7_p_0(
#line 838 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_34,
#line 838 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_33,
#line 838 "parser.m"
  MR_Word mercury__parser__BaseTerm_8,
#line 838 "parser.m"
  MR_Integer mercury__parser__Context_9,
#line 838 "parser.m"
  MR_Word * mercury__parser__TermParse_10,
#line 838 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_20,
#line 838 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_21,
#line 838 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_22,
#line 838 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_23)
#line 838 "parser.m"
{
#line 843 "parser.m"
  while (MR_TRUE)
#line 843 "parser.m"
    {
#line 843 "parser.m"
      /* tailcall optimized into a loop */
#line 843 "parser.m"
      {
#line 843 "parser.m"
        MR_bool mercury__parser__succeeded;
#line 843 "parser.m"
        MR_Word mercury__parser__TermContext_13;
#line 843 "parser.m"
        MR_Word mercury__parser__ArgsParse_14;
#line 843 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_24_24;
#line 843 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_PS_25_25;
#line 843 "parser.m"
        MR_String mercury__parser__FileName_40;
#line 134 "private_builtin.opt"
        MR_Word mercury__parser__TypeInfo_36_36;
#line 1178 "parser.m"
        MR_Box mercury__parser__V_43_43;
#line 1178 "parser.m"
        MR_Word mercury__parser__V_44_44;
#line 1178 "parser.m"
        MR_Word mercury__parser__V_45_45;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__parse_higher_order_term_rest_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_33 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4894 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_36_36  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 1178 "parser.m"
        mercury__parser__FileName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_22, (MR_Integer) 0)));
#line 1178 "parser.m"
        mercury__parser__V_43_43 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_22, (MR_Integer) 1));
#line 1178 "parser.m"
        mercury__parser__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_22, (MR_Integer) 2)));
#line 1178 "parser.m"
        mercury__parser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_22, (MR_Integer) 3)));
#line 123 "term.opt"
        {
#line 123 "term.opt"
          mercury__parser__TermContext_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "term.opt"
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_13, 0) = ((MR_Box) (mercury__parser__FileName_40));
#line 123 "term.opt"
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_13, 1) = ((MR_Box) (mercury__parser__Context_9));
#line 123 "term.opt"
        }
#line 845 "parser.m"
        {
#line 845 "parser.m"
          mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_34, mercury__parser__TypeClassInfo_for_op_table_33, &mercury__parser__ArgsParse_14, mercury__parser__STATE_VARIABLE_TokensLeft_0_20, &mercury__parser__STATE_VARIABLE_TokensLeft_24_24, mercury__parser__STATE_VARIABLE_PS_0_22, &mercury__parser__STATE_VARIABLE_PS_25_25);
        }
#line 857 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__ArgsParse_14)) == (MR_mktag((MR_Integer) 1))))
#line 858 "parser.m"
          {
#line 860 "parser.m"
            *mercury__parser__TermParse_10 = (MR_Word) mercury__parser__ArgsParse_14;
#line 858 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_21 = mercury__parser__STATE_VARIABLE_TokensLeft_24_24;
#line 858 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_23 = mercury__parser__STATE_VARIABLE_PS_25_25;
#line 858 "parser.m"
          }
#line 857 "parser.m"
        else
#line 847 "parser.m"
          {
#line 847 "parser.m"
            MR_Word mercury__parser__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ArgsParse_14, (MR_Integer) 0)));
#line 847 "parser.m"
            MR_Word mercury__parser__ApplyTerm_16;
#line 847 "parser.m"
            MR_Word mercury__parser__V_26_26 = (MR_Word) &mercury__parser_scalar_common_7[2];
#line 847 "parser.m"
            MR_Word mercury__parser__V_28_28;
#line 854 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_29_29;
#line 850 "parser.m"
            MR_Word mercury__parser__V_30_30;
#line 850 "parser.m"
            MR_Integer mercury__parser___OpenContext_17;

#line 848 "parser.m"
            {
#line 848 "parser.m"
              mercury__parser__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "parser.m"
              MR_hl_field(MR_mktag(1), mercury__parser__V_28_28, 0) = ((MR_Box) (mercury__parser__BaseTerm_8));
#line 848 "parser.m"
              MR_hl_field(MR_mktag(1), mercury__parser__V_28_28, 1) = ((MR_Box) (mercury__parser__Args_15));
#line 848 "parser.m"
            }
#line 848 "parser.m"
            {
#line 848 "parser.m"
              mercury__parser__ApplyTerm_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 848 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__ApplyTerm_16, 0) = ((MR_Box) (mercury__parser__V_26_26));
#line 848 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__ApplyTerm_16, 1) = ((MR_Box) (mercury__parser__V_28_28));
#line 848 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__ApplyTerm_16, 2) = ((MR_Box) (mercury__parser__TermContext_13));
#line 848 "parser.m"
            }
#line 850 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 850 "parser.m"
            if (mercury__parser__succeeded)
#line 850 "parser.m"
              {
#line 850 "parser.m"
                mercury__parser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_24_24, (MR_Integer) 0)));
#line 850 "parser.m"
                mercury__parser___OpenContext_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_24_24, (MR_Integer) 1)));
#line 850 "parser.m"
                mercury__parser__STATE_VARIABLE_TokensLeft_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_24_24, (MR_Integer) 2)));
#line 850 "parser.m"
                mercury__parser__succeeded = (mercury__parser__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 850 "parser.m"
              }
#line 854 "parser.m"
            if (mercury__parser__succeeded)
#line 852 "parser.m"
              {
#line 852 "parser.m"
                /* direct tailcall eliminated */
#line 852 "parser.m"
                {
#line 852 "parser.m"
                  MR_Word mercury__parser__BaseTerm__tmp_copy_8 = mercury__parser__ApplyTerm_16;
#line 852 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_20 = mercury__parser__STATE_VARIABLE_TokensLeft_29_29;
#line 852 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_22 = mercury__parser__STATE_VARIABLE_PS_25_25;

#line 852 "parser.m"
                  mercury__parser__STATE_VARIABLE_PS_0_22 = mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_22;
#line 852 "parser.m"
                  mercury__parser__STATE_VARIABLE_TokensLeft_0_20 = mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_20;
#line 852 "parser.m"
                  mercury__parser__BaseTerm_8 = mercury__parser__BaseTerm__tmp_copy_8;
#line 852 "parser.m"
                }
#line 852 "parser.m"
                continue;
#line 852 "parser.m"
              }
#line 854 "parser.m"
            else
#line 855 "parser.m"
              {
#line 855 "parser.m"
                {
#line 855 "parser.m"
                  MR_Word base;
#line 855 "parser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 855 "parser.m"
                  *mercury__parser__TermParse_10 = base;
#line 855 "parser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__ApplyTerm_16));
#line 855 "parser.m"
                }
#line 855 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_23 = mercury__parser__STATE_VARIABLE_PS_25_25;
#line 855 "parser.m"
                *mercury__parser__STATE_VARIABLE_TokensLeft_21 = mercury__parser__STATE_VARIABLE_TokensLeft_24_24;
#line 855 "parser.m"
              }
#line 847 "parser.m"
          }
#line 843 "parser.m"
      }
#line 843 "parser.m"
      break;
#line 843 "parser.m"
    }
#line 838 "parser.m"
}

#line 664 "parser.m"
static void MR_CALL 
mercury__parser__parse_simple_term_8_p_0(
#line 664 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_153,
#line 664 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_152,
#line 664 "parser.m"
  MR_Word mercury__parser__Token_9,
#line 664 "parser.m"
  MR_Integer mercury__parser__Context_10,
#line 664 "parser.m"
  MR_Integer mercury__parser__Prec_11,
#line 664 "parser.m"
  MR_Word * mercury__parser__TermParse_12,
#line 664 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_47,
#line 664 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_48,
#line 664 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_49,
#line 664 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_50)
#line 664 "parser.m"
{
#line 669 "parser.m"
  {
#line 669 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 669 "parser.m"
    MR_Word mercury__parser__BaseTermParse_21;
#line 669 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_92_92;
#line 669 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_93_93;
#line 825 "parser.m"
    MR_Word mercury__parser__BaseTermOpen_45;
#line 825 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_100_100;
#line 820 "parser.m"
    MR_Word mercury__parser__V_101_101;
#line 821 "parser.m"
    MR_Integer mercury__parser___OpenContext_46;

#line 698 "parser.m"
#line 698 "parser.m"
    switch (MR_tag((MR_Word) mercury__parser__Token_9)) {
#line 698 "parser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 698 "parser.m"
      case (MR_Integer) 0:
#line 698 "parser.m"
#line 698 "parser.m"
        switch (MR_unmkbody(mercury__parser__Token_9)) {
#line 698 "parser.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 698 "parser.m"
          case (MR_Integer) 0:
#line 698 "parser.m"
          case (MR_Integer) 1:
#line 745 "parser.m"
            {
#line 745 "parser.m"
              MR_Word mercury__parser__SubTermParse_33;
#line 745 "parser.m"
              MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_73_73;

#line 746 "parser.m"
              {
#line 746 "parser.m"
                mercury__parser__parse_term_5_p_0(mercury__parser__TypeInfo_for_T_153, mercury__parser__TypeClassInfo_for_op_table_152, &mercury__parser__SubTermParse_33, mercury__parser__STATE_VARIABLE_TokensLeft_0_47, &mercury__parser__STATE_VARIABLE_TokensLeft_73_73, mercury__parser__STATE_VARIABLE_PS_0_49, &mercury__parser__STATE_VARIABLE_PS_93_93);
              }
#line 755 "parser.m"
              if (((MR_tag((MR_Word) mercury__parser__SubTermParse_33)) == (MR_mktag((MR_Integer) 1))))
#line 757 "parser.m"
                {
#line 758 "parser.m"
                  mercury__parser__BaseTermParse_21 = mercury__parser__SubTermParse_33;
#line 757 "parser.m"
                  mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = mercury__parser__STATE_VARIABLE_TokensLeft_73_73;
#line 757 "parser.m"
                }
#line 755 "parser.m"
              else
#line 751 "parser.m"
                {
#line 751 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_75_75;
#line 749 "parser.m"
                  MR_Word mercury__parser__V_76_76;
#line 749 "parser.m"
                  MR_Integer mercury__parser___Context_120;

#line 749 "parser.m"
                  mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 749 "parser.m"
                  if (mercury__parser__succeeded)
#line 749 "parser.m"
                    {
#line 749 "parser.m"
                      mercury__parser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_73_73, (MR_Integer) 0)));
#line 749 "parser.m"
                      mercury__parser___Context_120 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_73_73, (MR_Integer) 1)));
#line 749 "parser.m"
                      mercury__parser__STATE_VARIABLE_TokensLeft_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_73_73, (MR_Integer) 2)));
#line 749 "parser.m"
                      mercury__parser__succeeded = (mercury__parser__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 749 "parser.m"
                    }
#line 751 "parser.m"
                  if (mercury__parser__succeeded)
#line 750 "parser.m"
                    {
#line 750 "parser.m"
                      mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = mercury__parser__STATE_VARIABLE_TokensLeft_75_75;
#line 750 "parser.m"
                      mercury__parser__BaseTermParse_21 = mercury__parser__SubTermParse_33;
#line 750 "parser.m"
                    }
#line 751 "parser.m"
                  else
#line 752 "parser.m"
                    {
#line 752 "parser.m"
                      MR_Word mercury__parser__conv2_BaseTermParse_21;

#line 752 "parser.m"
                      {
#line 752 "parser.m"
                        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__parser__TypeClassInfo_for_op_table_152, (MR_String) "expecting \140)\' or operator", &mercury__parser__conv2_BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_73_73, &mercury__parser__STATE_VARIABLE_TokensLeft_92_92, mercury__parser__STATE_VARIABLE_PS_93_93);
                      }
#line 752 "parser.m"
                      mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__conv2_BaseTermParse_21;
#line 752 "parser.m"
                    }
#line 751 "parser.m"
                }
#line 745 "parser.m"
            }
#line 698 "parser.m"
            break;
#line 698 "parser.m"
          case (MR_Integer) 2:
#line 698 "parser.m"
          case (MR_Integer) 4:
#line 698 "parser.m"
          case (MR_Integer) 6:
#line 698 "parser.m"
          case (MR_Integer) 7:
#line 698 "parser.m"
          case (MR_Integer) 8:
#line 698 "parser.m"
          case (MR_Integer) 9:
#line 698 "parser.m"
          case (MR_Integer) 10:
#line 814 "parser.m"
            {
#line 815 "parser.m"
              MR_Word mercury__parser__conv0_BaseTermParse_21;

#line 815 "parser.m"
              {
#line 815 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(mercury__parser__TypeClassInfo_for_op_table_152, mercury__parser__Token_9, mercury__parser__Context_10, (MR_String) "unexpected token at start of (sub)term", &mercury__parser__conv0_BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_0_47, &mercury__parser__STATE_VARIABLE_TokensLeft_92_92, mercury__parser__STATE_VARIABLE_PS_0_49);
              }
#line 815 "parser.m"
              mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__conv0_BaseTermParse_21;
#line 814 "parser.m"
              mercury__parser__STATE_VARIABLE_PS_93_93 = mercury__parser__STATE_VARIABLE_PS_0_49;
#line 814 "parser.m"
            }
#line 698 "parser.m"
            break;
#line 698 "parser.m"
          case (MR_Integer) 3:
#line 761 "parser.m"
            {
#line 761 "parser.m"
              MR_Word mercury__parser__TermContext_129;
#line 766 "parser.m"
              MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_66_66;
#line 763 "parser.m"
              MR_Word mercury__parser__V_67_67;
#line 763 "parser.m"
              MR_Integer mercury__parser___Context_126;

#line 762 "parser.m"
              {
#line 762 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_49, mercury__parser__Context_10, &mercury__parser__TermContext_129);
              }
#line 763 "parser.m"
              mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_47)) == (MR_mktag((MR_Integer) 1)));
#line 763 "parser.m"
              if (mercury__parser__succeeded)
#line 763 "parser.m"
                {
#line 763 "parser.m"
                  mercury__parser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_47, (MR_Integer) 0)));
#line 763 "parser.m"
                  mercury__parser___Context_126 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_47, (MR_Integer) 1)));
#line 763 "parser.m"
                  mercury__parser__STATE_VARIABLE_TokensLeft_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_47, (MR_Integer) 2)));
#line 763 "parser.m"
                  mercury__parser__succeeded = (mercury__parser__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 763 "parser.m"
                }
#line 766 "parser.m"
              if (mercury__parser__succeeded)
#line 764 "parser.m"
                {
#line 764 "parser.m"
                  {
#line 764 "parser.m"
                    mercury__parser__parse_special_atom_7_p_0(mercury__parser__TypeInfo_for_T_153, mercury__parser__TypeClassInfo_for_op_table_152, (MR_String) "[]", mercury__parser__TermContext_129, &mercury__parser__BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_66_66, &mercury__parser__STATE_VARIABLE_TokensLeft_92_92, mercury__parser__STATE_VARIABLE_PS_0_49, &mercury__parser__STATE_VARIABLE_PS_93_93);
                  }
#line 764 "parser.m"
                }
#line 766 "parser.m"
              else
#line 767 "parser.m"
                {
#line 767 "parser.m"
                  mercury__parser__parse_list_5_p_0(mercury__parser__TypeInfo_for_T_153, mercury__parser__TypeClassInfo_for_op_table_152, &mercury__parser__BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_0_47, &mercury__parser__STATE_VARIABLE_TokensLeft_92_92, mercury__parser__STATE_VARIABLE_PS_0_49, &mercury__parser__STATE_VARIABLE_PS_93_93);
                }
#line 761 "parser.m"
            }
#line 698 "parser.m"
            break;
#line 698 "parser.m"
          case (MR_Integer) 5:
#line 770 "parser.m"
            {
#line 770 "parser.m"
              MR_Word mercury__parser__TermContext_148;
#line 777 "parser.m"
              MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_53_53;
#line 773 "parser.m"
              MR_Word mercury__parser__V_54_54;
#line 773 "parser.m"
              MR_Integer mercury__parser___Context_131;

#line 771 "parser.m"
              {
#line 771 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_49, mercury__parser__Context_10, &mercury__parser__TermContext_148);
              }
#line 773 "parser.m"
              mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_47)) == (MR_mktag((MR_Integer) 1)));
#line 773 "parser.m"
              if (mercury__parser__succeeded)
#line 773 "parser.m"
                {
#line 773 "parser.m"
                  mercury__parser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_47, (MR_Integer) 0)));
#line 773 "parser.m"
                  mercury__parser___Context_131 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_47, (MR_Integer) 1)));
#line 773 "parser.m"
                  mercury__parser__STATE_VARIABLE_TokensLeft_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_47, (MR_Integer) 2)));
#line 773 "parser.m"
                  mercury__parser__succeeded = (mercury__parser__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 773 "parser.m"
                }
#line 777 "parser.m"
              if (mercury__parser__succeeded)
#line 775 "parser.m"
                {
#line 775 "parser.m"
                  {
#line 775 "parser.m"
                    mercury__parser__parse_special_atom_7_p_0(mercury__parser__TypeInfo_for_T_153, mercury__parser__TypeClassInfo_for_op_table_152, (MR_String) "{}", mercury__parser__TermContext_148, &mercury__parser__BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_53_53, &mercury__parser__STATE_VARIABLE_TokensLeft_92_92, mercury__parser__STATE_VARIABLE_PS_0_49, &mercury__parser__STATE_VARIABLE_PS_93_93);
                  }
#line 775 "parser.m"
                }
#line 777 "parser.m"
              else
#line 782 "parser.m"
                {
#line 782 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_58_58;
#line 782 "parser.m"
                  MR_Word mercury__parser__SubTermParse_144;

#line 782 "parser.m"
                  {
#line 782 "parser.m"
                    mercury__parser__parse_term_5_p_0(mercury__parser__TypeInfo_for_T_153, mercury__parser__TypeClassInfo_for_op_table_152, &mercury__parser__SubTermParse_144, mercury__parser__STATE_VARIABLE_TokensLeft_0_47, &mercury__parser__STATE_VARIABLE_TokensLeft_58_58, mercury__parser__STATE_VARIABLE_PS_0_49, &mercury__parser__STATE_VARIABLE_PS_93_93);
                  }
#line 796 "parser.m"
                  if (((MR_tag((MR_Word) mercury__parser__SubTermParse_144)) == (MR_mktag((MR_Integer) 1))))
#line 797 "parser.m"
                    {
#line 799 "parser.m"
                      mercury__parser__BaseTermParse_21 = mercury__parser__SubTermParse_144;
#line 797 "parser.m"
                      mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = mercury__parser__STATE_VARIABLE_TokensLeft_58_58;
#line 797 "parser.m"
                    }
#line 796 "parser.m"
                  else
#line 784 "parser.m"
                    {
#line 784 "parser.m"
                      MR_Word mercury__parser__SubTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__SubTermParse_144, (MR_Integer) 0)));
#line 784 "parser.m"
                      MR_Word mercury__parser__ArgTerms_38;
#line 792 "parser.m"
                      MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_60_60;
#line 787 "parser.m"
                      MR_Word mercury__parser__V_61_61;
#line 787 "parser.m"
                      MR_Integer mercury__parser___Context_133;

#line 785 "parser.m"
                      {
#line 785 "parser.m"
                        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(mercury__parser__SubTerm_37, &mercury__parser__ArgTerms_38);
                      }
#line 787 "parser.m"
                      mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 787 "parser.m"
                      if (mercury__parser__succeeded)
#line 787 "parser.m"
                        {
#line 787 "parser.m"
                          mercury__parser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
#line 787 "parser.m"
                          mercury__parser___Context_133 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
#line 787 "parser.m"
                          mercury__parser__STATE_VARIABLE_TokensLeft_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
#line 787 "parser.m"
                          mercury__parser__succeeded = (mercury__parser__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 787 "parser.m"
                        }
#line 792 "parser.m"
                      if (mercury__parser__succeeded)
#line 790 "parser.m"
                        {
#line 790 "parser.m"
                          MR_Word mercury__parser__V_62_62;
#line 790 "parser.m"
                          MR_Word mercury__parser__BaseTerm_135;

#line 790 "parser.m"
                          mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = mercury__parser__STATE_VARIABLE_TokensLeft_60_60;
#line 790 "parser.m"
                          mercury__parser__V_62_62 = (MR_Word) &mercury__parser_scalar_common_7[1];
#line 790 "parser.m"
                          {
#line 790 "parser.m"
                            mercury__parser__BaseTerm_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 790 "parser.m"
                            MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_135, 0) = ((MR_Box) (mercury__parser__V_62_62));
#line 790 "parser.m"
                            MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_135, 1) = ((MR_Box) (mercury__parser__ArgTerms_38));
#line 790 "parser.m"
                            MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_135, 2) = ((MR_Box) (mercury__parser__TermContext_148));
#line 790 "parser.m"
                          }
#line 791 "parser.m"
                          {
#line 791 "parser.m"
                            mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 791 "parser.m"
                            MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_135));
#line 791 "parser.m"
                          }
#line 790 "parser.m"
                        }
#line 792 "parser.m"
                      else
#line 793 "parser.m"
                        {
#line 793 "parser.m"
                          MR_Word mercury__parser__conv3_BaseTermParse_21;

#line 793 "parser.m"
                          {
#line 793 "parser.m"
                            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__parser__TypeClassInfo_for_op_table_152, (MR_String) "expecting \140}\' or operator", &mercury__parser__conv3_BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_58_58, &mercury__parser__STATE_VARIABLE_TokensLeft_92_92, mercury__parser__STATE_VARIABLE_PS_93_93);
                          }
#line 793 "parser.m"
                          mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__conv3_BaseTermParse_21;
#line 793 "parser.m"
                        }
#line 784 "parser.m"
                    }
#line 782 "parser.m"
                }
#line 770 "parser.m"
            }
#line 698 "parser.m"
            break;
#line 698 "parser.m"
        }
#line 698 "parser.m"
        break;
#line 698 "parser.m"
      case (MR_Integer) 1:
#line 671 "parser.m"
        {
#line 671 "parser.m"
          MR_String mercury__parser__Atom_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_9, (MR_Integer) 0)));
#line 671 "parser.m"
          MR_Word mercury__parser__TermContext_16;
#line 684 "parser.m"
          MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_90_90;
#line 673 "parser.m"
          MR_Word mercury__parser__V_91_91;
#line 673 "parser.m"
          MR_Integer mercury__parser___Context_17;

#line 672 "parser.m"
          {
#line 672 "parser.m"
            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_49, mercury__parser__Context_10, &mercury__parser__TermContext_16);
          }
#line 673 "parser.m"
          mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_47)) == (MR_mktag((MR_Integer) 1)));
#line 673 "parser.m"
          if (mercury__parser__succeeded)
#line 673 "parser.m"
            {
#line 673 "parser.m"
              mercury__parser__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_47, (MR_Integer) 0)));
#line 673 "parser.m"
              mercury__parser___Context_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_47, (MR_Integer) 1)));
#line 673 "parser.m"
              mercury__parser__STATE_VARIABLE_TokensLeft_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_47, (MR_Integer) 2)));
#line 673 "parser.m"
              mercury__parser__succeeded = (mercury__parser__V_91_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 673 "parser.m"
            }
#line 684 "parser.m"
          if (mercury__parser__succeeded)
#line 674 "parser.m"
            {
#line 674 "parser.m"
              MR_Word mercury__parser__ArgsParse_18;

#line 674 "parser.m"
              {
#line 674 "parser.m"
                mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_153, mercury__parser__TypeClassInfo_for_op_table_152, &mercury__parser__ArgsParse_18, mercury__parser__STATE_VARIABLE_TokensLeft_90_90, &mercury__parser__STATE_VARIABLE_TokensLeft_92_92, mercury__parser__STATE_VARIABLE_PS_0_49, &mercury__parser__STATE_VARIABLE_PS_93_93);
              }
#line 679 "parser.m"
              if (((MR_tag((MR_Word) mercury__parser__ArgsParse_18)) == (MR_mktag((MR_Integer) 1))))
#line 682 "parser.m"
                mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__ArgsParse_18;
#line 679 "parser.m"
              else
#line 676 "parser.m"
                {
#line 676 "parser.m"
                  MR_Word mercury__parser__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ArgsParse_18, (MR_Integer) 0)));
#line 676 "parser.m"
                  MR_Word mercury__parser__BaseTerm_20;
#line 676 "parser.m"
                  MR_Word mercury__parser__V_94_94;

#line 677 "parser.m"
                  {
#line 677 "parser.m"
                    mercury__parser__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 677 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_94_94, 0) = ((MR_Box) (mercury__parser__Atom_15));
#line 677 "parser.m"
                  }
#line 677 "parser.m"
                  {
#line 677 "parser.m"
                    mercury__parser__BaseTerm_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 677 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_20, 0) = ((MR_Box) (mercury__parser__V_94_94));
#line 677 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_20, 1) = ((MR_Box) (mercury__parser__Args_19));
#line 677 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_20, 2) = ((MR_Box) (mercury__parser__TermContext_16));
#line 677 "parser.m"
                  }
#line 678 "parser.m"
                  {
#line 678 "parser.m"
                    mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 678 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_20));
#line 678 "parser.m"
                  }
#line 676 "parser.m"
                }
#line 674 "parser.m"
            }
#line 684 "parser.m"
          else
#line 685 "parser.m"
            {
#line 685 "parser.m"
              MR_Box mercury__parser__OpTable_24 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_49, (MR_Integer) 1));
#line 1180 "parser.m"
              MR_String mercury__parser__V_184_184 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_49, (MR_Integer) 0)));
#line 1180 "parser.m"
              MR_Word mercury__parser__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_49, (MR_Integer) 2)));
#line 1180 "parser.m"
              MR_Word mercury__parser__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_49, (MR_Integer) 3)));
#line 687 "parser.m"
              MR_Integer mercury__parser__V_95_95;

#line 687 "parser.m"
              {
#line 687 "parser.m"
                mercury__parser__succeeded = mercury__ops__lookup_op_2_p_0(mercury__parser__TypeClassInfo_for_op_table_152, mercury__parser__OpTable_24, mercury__parser__Atom_15);
              }
#line 687 "parser.m"
              if (mercury__parser__succeeded)
#line 687 "parser.m"
                {
#line 688 "parser.m"
                  {
#line 688 "parser.m"
                    mercury__parser__V_95_95 = mercury__ops__max_priority_1_f_0(mercury__parser__TypeClassInfo_for_op_table_152, mercury__parser__OpTable_24);
                  }
#line 688 "parser.m"
                  mercury__parser__succeeded = (mercury__parser__Prec_11 <= mercury__parser__V_95_95);
#line 687 "parser.m"
                }
#line 693 "parser.m"
              if (mercury__parser__succeeded)
#line 690 "parser.m"
                {
#line 690 "parser.m"
                  MR_Word mercury__parser__conv1_BaseTermParse_21;

#line 690 "parser.m"
                  {
#line 690 "parser.m"
                    mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(mercury__parser__TypeClassInfo_for_op_table_152, mercury__parser__Token_9, mercury__parser__Context_10, (MR_String) "unexpected token at start of (sub)term", &mercury__parser__conv1_BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_0_47, &mercury__parser__STATE_VARIABLE_TokensLeft_92_92, mercury__parser__STATE_VARIABLE_PS_0_49);
                  }
#line 690 "parser.m"
                  mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__conv1_BaseTermParse_21;
#line 690 "parser.m"
                }
#line 693 "parser.m"
              else
#line 694 "parser.m"
                {
#line 694 "parser.m"
                  MR_Word mercury__parser__V_98_98;
#line 694 "parser.m"
                  MR_Word mercury__parser__V_99_99;
#line 694 "parser.m"
                  MR_Word mercury__parser__BaseTerm_104;

#line 694 "parser.m"
                  {
#line 694 "parser.m"
                    mercury__parser__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 694 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_98_98, 0) = ((MR_Box) (mercury__parser__Atom_15));
#line 694 "parser.m"
                  }
#line 694 "parser.m"
                  mercury__parser__V_99_99 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "parser.m"
                  {
#line 694 "parser.m"
                    mercury__parser__BaseTerm_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 694 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_104, 0) = ((MR_Box) (mercury__parser__V_98_98));
#line 694 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_104, 1) = ((MR_Box) (mercury__parser__V_99_99));
#line 694 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_104, 2) = ((MR_Box) (mercury__parser__TermContext_16));
#line 694 "parser.m"
                  }
#line 695 "parser.m"
                  {
#line 695 "parser.m"
                    mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 695 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_104));
#line 695 "parser.m"
                  }
#line 694 "parser.m"
                  mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = mercury__parser__STATE_VARIABLE_TokensLeft_0_47;
#line 694 "parser.m"
                }
#line 685 "parser.m"
              mercury__parser__STATE_VARIABLE_PS_93_93 = mercury__parser__STATE_VARIABLE_PS_0_49;
#line 685 "parser.m"
            }
#line 671 "parser.m"
        }
#line 698 "parser.m"
        break;
#line 698 "parser.m"
      case (MR_Integer) 2:
#line 699 "parser.m"
        {
#line 699 "parser.m"
          MR_String mercury__parser__VarName_25 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__parser__Token_9, (MR_Integer) 0)));
#line 699 "parser.m"
          MR_Word mercury__parser__Var_26;
#line 699 "parser.m"
          MR_Word mercury__parser__TermContext_107;
#line 699 "parser.m"
          MR_Word mercury__parser__BaseTerm_108;

#line 700 "parser.m"
          {
#line 700 "parser.m"
            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(mercury__parser__TypeInfo_for_T_153, mercury__parser__VarName_25, &mercury__parser__Var_26, mercury__parser__STATE_VARIABLE_PS_0_49, &mercury__parser__STATE_VARIABLE_PS_93_93);
          }
#line 701 "parser.m"
          {
#line 701 "parser.m"
            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_93_93, mercury__parser__Context_10, &mercury__parser__TermContext_107);
          }
#line 702 "parser.m"
          {
#line 702 "parser.m"
            mercury__parser__BaseTerm_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "parser.m"
            MR_hl_field(MR_mktag(1), mercury__parser__BaseTerm_108, 0) = ((MR_Box) (mercury__parser__Var_26));
#line 702 "parser.m"
            MR_hl_field(MR_mktag(1), mercury__parser__BaseTerm_108, 1) = ((MR_Box) (mercury__parser__TermContext_107));
#line 702 "parser.m"
          }
#line 703 "parser.m"
          {
#line 703 "parser.m"
            mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 703 "parser.m"
            MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_108));
#line 703 "parser.m"
          }
#line 699 "parser.m"
          mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = mercury__parser__STATE_VARIABLE_TokensLeft_0_47;
#line 699 "parser.m"
        }
#line 698 "parser.m"
        break;
#line 698 "parser.m"
      case (MR_Integer) 3:
#line 698 "parser.m"
#line 698 "parser.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 0)))) {
#line 698 "parser.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 698 "parser.m"
          case (MR_Integer) 0:
#line 705 "parser.m"
            {
#line 705 "parser.m"
              MR_Integer mercury__parser__Int_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
#line 705 "parser.m"
              MR_Word mercury__parser__V_87_87;
#line 705 "parser.m"
              MR_Word mercury__parser__V_88_88;
#line 705 "parser.m"
              MR_Word mercury__parser__TermContext_109;
#line 705 "parser.m"
              MR_Word mercury__parser__BaseTerm_110;

#line 706 "parser.m"
              {
#line 706 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_49, mercury__parser__Context_10, &mercury__parser__TermContext_109);
              }
#line 707 "parser.m"
              {
#line 707 "parser.m"
                mercury__parser__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 707 "parser.m"
                MR_hl_field(MR_mktag(1), mercury__parser__V_87_87, 0) = ((MR_Box) (mercury__parser__Int_27));
#line 707 "parser.m"
              }
#line 707 "parser.m"
              mercury__parser__V_88_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "parser.m"
              {
#line 707 "parser.m"
                mercury__parser__BaseTerm_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 707 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_110, 0) = ((MR_Box) (mercury__parser__V_87_87));
#line 707 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_110, 1) = ((MR_Box) (mercury__parser__V_88_88));
#line 707 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_110, 2) = ((MR_Box) (mercury__parser__TermContext_109));
#line 707 "parser.m"
              }
#line 708 "parser.m"
              {
#line 708 "parser.m"
                mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 708 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_110));
#line 708 "parser.m"
              }
#line 705 "parser.m"
              mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = mercury__parser__STATE_VARIABLE_TokensLeft_0_47;
#line 705 "parser.m"
              mercury__parser__STATE_VARIABLE_PS_93_93 = mercury__parser__STATE_VARIABLE_PS_0_49;
#line 705 "parser.m"
            }
#line 698 "parser.m"
            break;
#line 698 "parser.m"
          case (MR_Integer) 1:
#line 710 "parser.m"
            {
#line 710 "parser.m"
              MR_Word mercury__parser__LexerBase_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
#line 710 "parser.m"
              MR_Word mercury__parser__String_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 2)));
#line 710 "parser.m"
              MR_Word mercury__parser__TermBase_30;
#line 710 "parser.m"
              MR_Word mercury__parser__V_85_85;
#line 710 "parser.m"
              MR_Word mercury__parser__V_86_86;
#line 710 "parser.m"
              MR_Word mercury__parser__TermContext_111;
#line 710 "parser.m"
              MR_Word mercury__parser__BaseTerm_112;

#line 711 "parser.m"
              {
#line 711 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_49, mercury__parser__Context_10, &mercury__parser__TermContext_111);
              }
#line 715 "parser.m"
              mercury__parser__TermBase_30 = ((&mercury__parser_vector_common_8[0 + mercury__parser__LexerBase_28]))->mercury__parser__vector_common_type_8_0__vct_8_f_0;
#line 725 "parser.m"
              {
#line 725 "parser.m"
                mercury__parser__V_85_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "parser.m"
                MR_hl_field(MR_mktag(2), mercury__parser__V_85_85, 0) = ((MR_Box) (mercury__parser__TermBase_30));
#line 725 "parser.m"
                MR_hl_field(MR_mktag(2), mercury__parser__V_85_85, 1) = ((MR_Box) (mercury__parser__String_29));
#line 725 "parser.m"
              }
#line 725 "parser.m"
              mercury__parser__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 725 "parser.m"
              {
#line 725 "parser.m"
                mercury__parser__BaseTerm_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 725 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_112, 0) = ((MR_Box) (mercury__parser__V_85_85));
#line 725 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_112, 1) = ((MR_Box) (mercury__parser__V_86_86));
#line 725 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_112, 2) = ((MR_Box) (mercury__parser__TermContext_111));
#line 725 "parser.m"
              }
#line 726 "parser.m"
              {
#line 726 "parser.m"
                mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 726 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_112));
#line 726 "parser.m"
              }
#line 710 "parser.m"
              mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = mercury__parser__STATE_VARIABLE_TokensLeft_0_47;
#line 710 "parser.m"
              mercury__parser__STATE_VARIABLE_PS_93_93 = mercury__parser__STATE_VARIABLE_PS_0_49;
#line 710 "parser.m"
            }
#line 698 "parser.m"
            break;
#line 698 "parser.m"
          case (MR_Integer) 2:
#line 728 "parser.m"
            {
#line 728 "parser.m"
              MR_Float mercury__parser__Float_31 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
#line 728 "parser.m"
              MR_Word mercury__parser__V_83_83;
#line 728 "parser.m"
              MR_Word mercury__parser__V_84_84;
#line 728 "parser.m"
              MR_Word mercury__parser__TermContext_113;
#line 728 "parser.m"
              MR_Word mercury__parser__BaseTerm_114;

#line 729 "parser.m"
              {
#line 729 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_49, mercury__parser__Context_10, &mercury__parser__TermContext_113);
              }
#line 730 "parser.m"
              {
#line 730 "parser.m"
                mercury__parser__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "parser.m"
                MR_hl_field(MR_mktag(3), mercury__parser__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 730 "parser.m"
                MR_hl_field(MR_mktag(3), mercury__parser__V_83_83, 1) = MR_box_float(mercury__parser__Float_31);
#line 730 "parser.m"
              }
#line 730 "parser.m"
              mercury__parser__V_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "parser.m"
              {
#line 730 "parser.m"
                mercury__parser__BaseTerm_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 730 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_114, 0) = ((MR_Box) (mercury__parser__V_83_83));
#line 730 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_114, 1) = ((MR_Box) (mercury__parser__V_84_84));
#line 730 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_114, 2) = ((MR_Box) (mercury__parser__TermContext_113));
#line 730 "parser.m"
              }
#line 731 "parser.m"
              {
#line 731 "parser.m"
                mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 731 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_114));
#line 731 "parser.m"
              }
#line 728 "parser.m"
              mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = mercury__parser__STATE_VARIABLE_TokensLeft_0_47;
#line 728 "parser.m"
              mercury__parser__STATE_VARIABLE_PS_93_93 = mercury__parser__STATE_VARIABLE_PS_0_49;
#line 728 "parser.m"
            }
#line 698 "parser.m"
            break;
#line 698 "parser.m"
          case (MR_Integer) 3:
#line 733 "parser.m"
            {
#line 733 "parser.m"
              MR_Word mercury__parser__V_81_81;
#line 733 "parser.m"
              MR_Word mercury__parser__V_82_82;
#line 733 "parser.m"
              MR_Word mercury__parser__TermContext_115;
#line 733 "parser.m"
              MR_Word mercury__parser__BaseTerm_116;
#line 733 "parser.m"
              MR_String mercury__parser__String_117 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));

#line 734 "parser.m"
              {
#line 734 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_49, mercury__parser__Context_10, &mercury__parser__TermContext_115);
              }
#line 735 "parser.m"
              {
#line 735 "parser.m"
                mercury__parser__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "parser.m"
                MR_hl_field(MR_mktag(3), mercury__parser__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 735 "parser.m"
                MR_hl_field(MR_mktag(3), mercury__parser__V_81_81, 1) = ((MR_Box) (mercury__parser__String_117));
#line 735 "parser.m"
              }
#line 735 "parser.m"
              mercury__parser__V_82_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 735 "parser.m"
              {
#line 735 "parser.m"
                mercury__parser__BaseTerm_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 735 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_116, 0) = ((MR_Box) (mercury__parser__V_81_81));
#line 735 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_116, 1) = ((MR_Box) (mercury__parser__V_82_82));
#line 735 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_116, 2) = ((MR_Box) (mercury__parser__TermContext_115));
#line 735 "parser.m"
              }
#line 736 "parser.m"
              {
#line 736 "parser.m"
                mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 736 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_116));
#line 736 "parser.m"
              }
#line 733 "parser.m"
              mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = mercury__parser__STATE_VARIABLE_TokensLeft_0_47;
#line 733 "parser.m"
              mercury__parser__STATE_VARIABLE_PS_93_93 = mercury__parser__STATE_VARIABLE_PS_0_49;
#line 733 "parser.m"
            }
#line 698 "parser.m"
            break;
#line 698 "parser.m"
          case (MR_Integer) 4:
#line 738 "parser.m"
            {
#line 738 "parser.m"
              MR_String mercury__parser__Name_32 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
#line 738 "parser.m"
              MR_Word mercury__parser__V_79_79;
#line 738 "parser.m"
              MR_Word mercury__parser__V_80_80;
#line 738 "parser.m"
              MR_Word mercury__parser__TermContext_118;
#line 738 "parser.m"
              MR_Word mercury__parser__BaseTerm_119;

#line 739 "parser.m"
              {
#line 739 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_49, mercury__parser__Context_10, &mercury__parser__TermContext_118);
              }
#line 740 "parser.m"
              {
#line 740 "parser.m"
                mercury__parser__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "parser.m"
                MR_hl_field(MR_mktag(3), mercury__parser__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 740 "parser.m"
                MR_hl_field(MR_mktag(3), mercury__parser__V_79_79, 1) = ((MR_Box) (mercury__parser__Name_32));
#line 740 "parser.m"
              }
#line 740 "parser.m"
              mercury__parser__V_80_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "parser.m"
              {
#line 740 "parser.m"
                mercury__parser__BaseTerm_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 740 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_119, 0) = ((MR_Box) (mercury__parser__V_79_79));
#line 740 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_119, 1) = ((MR_Box) (mercury__parser__V_80_80));
#line 740 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_119, 2) = ((MR_Box) (mercury__parser__TermContext_118));
#line 740 "parser.m"
              }
#line 741 "parser.m"
              {
#line 741 "parser.m"
                mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 741 "parser.m"
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_119));
#line 741 "parser.m"
              }
#line 738 "parser.m"
              mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = mercury__parser__STATE_VARIABLE_TokensLeft_0_47;
#line 738 "parser.m"
              mercury__parser__STATE_VARIABLE_PS_93_93 = mercury__parser__STATE_VARIABLE_PS_0_49;
#line 738 "parser.m"
            }
#line 698 "parser.m"
            break;
#line 698 "parser.m"
          case (MR_Integer) 5:
#line 698 "parser.m"
          case (MR_Integer) 6:
#line 698 "parser.m"
          case (MR_Integer) 7:
#line 698 "parser.m"
          case (MR_Integer) 8:
#line 814 "parser.m"
            {
#line 815 "parser.m"
              MR_Word mercury__parser__conv0_BaseTermParse_21;

#line 815 "parser.m"
              {
#line 815 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(mercury__parser__TypeClassInfo_for_op_table_152, mercury__parser__Token_9, mercury__parser__Context_10, (MR_String) "unexpected token at start of (sub)term", &mercury__parser__conv0_BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_0_47, &mercury__parser__STATE_VARIABLE_TokensLeft_92_92, mercury__parser__STATE_VARIABLE_PS_0_49);
              }
#line 815 "parser.m"
              mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__conv0_BaseTermParse_21;
#line 814 "parser.m"
              mercury__parser__STATE_VARIABLE_PS_93_93 = mercury__parser__STATE_VARIABLE_PS_0_49;
#line 814 "parser.m"
            }
#line 698 "parser.m"
            break;
#line 698 "parser.m"
        }
#line 698 "parser.m"
        break;
#line 698 "parser.m"
    }
#line 820 "parser.m"
    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__BaseTermParse_21)) == (MR_mktag((MR_Integer) 0)));
#line 820 "parser.m"
    if (mercury__parser__succeeded)
#line 820 "parser.m"
      {
#line 820 "parser.m"
        mercury__parser__BaseTermOpen_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, (MR_Integer) 0)));
#line 821 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_92_92)) == (MR_mktag((MR_Integer) 1)));
#line 821 "parser.m"
        if (mercury__parser__succeeded)
#line 821 "parser.m"
          {
#line 821 "parser.m"
            mercury__parser__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_92_92, (MR_Integer) 0)));
#line 821 "parser.m"
            mercury__parser___OpenContext_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_92_92, (MR_Integer) 1)));
#line 821 "parser.m"
            mercury__parser__STATE_VARIABLE_TokensLeft_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_92_92, (MR_Integer) 2)));
#line 821 "parser.m"
            mercury__parser__succeeded = (mercury__parser__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 821 "parser.m"
          }
#line 820 "parser.m"
      }
#line 825 "parser.m"
    if (mercury__parser__succeeded)
#line 823 "parser.m"
      {
#line 823 "parser.m"
        mercury__parser__parse_higher_order_term_rest_7_p_0(mercury__parser__TypeInfo_for_T_153, mercury__parser__TypeClassInfo_for_op_table_152, mercury__parser__BaseTermOpen_45, mercury__parser__Context_10, mercury__parser__TermParse_12, mercury__parser__STATE_VARIABLE_TokensLeft_100_100, mercury__parser__STATE_VARIABLE_TokensLeft_48, mercury__parser__STATE_VARIABLE_PS_93_93, mercury__parser__STATE_VARIABLE_PS_50);
      }
#line 825 "parser.m"
    else
#line 826 "parser.m"
      {
#line 826 "parser.m"
        *mercury__parser__TermParse_12 = mercury__parser__BaseTermParse_21;
#line 826 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_50 = mercury__parser__STATE_VARIABLE_PS_93_93;
#line 826 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_48 = mercury__parser__STATE_VARIABLE_TokensLeft_92_92;
#line 826 "parser.m"
      }
#line 669 "parser.m"
  }
#line 664 "parser.m"
}

#line 585 "parser.m"
static MR_bool MR_CALL 
mercury__parser__parse_backquoted_operator_7_p_0(
#line 585 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_31,
#line 585 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_30,
#line 585 "parser.m"
  MR_Word * mercury__parser__MaybeQualifier_8,
#line 585 "parser.m"
  MR_String * mercury__parser__OpName_9,
#line 585 "parser.m"
  MR_Word * mercury__parser__VariableTerms_10,
#line 585 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
#line 585 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
#line 585 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
#line 585 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22)
#line 585 "parser.m"
{
#line 591 "parser.m"
  {
#line 591 "parser.m"
    MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_19)) == (MR_mktag((MR_Integer) 1)));
#line 591 "parser.m"
    MR_Word mercury__parser__Token_13;
#line 591 "parser.m"
    MR_Integer mercury__parser__Context_14;
#line 591 "parser.m"
    MR_Word mercury__parser__TermContext_15;
#line 591 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 591 "parser.m"
    MR_String mercury__parser__FileName_38;
#line 1178 "parser.m"
    MR_Box mercury__parser__V_41_41;
#line 1178 "parser.m"
    MR_Word mercury__parser__V_42_42;
#line 1178 "parser.m"
    MR_Word mercury__parser__V_43_43;

#line 592 "parser.m"
    if (mercury__parser__succeeded)
#line 592 "parser.m"
      {
#line 592 "parser.m"
        mercury__parser__Token_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 0)));
#line 592 "parser.m"
        mercury__parser__Context_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 1)));
#line 592 "parser.m"
        mercury__parser__STATE_VARIABLE_TokensLeft_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 2)));
#line 1178 "parser.m"
        mercury__parser__FileName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 0)));
#line 1178 "parser.m"
        mercury__parser__V_41_41 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 1));
#line 1178 "parser.m"
        mercury__parser__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 2)));
#line 1178 "parser.m"
        mercury__parser__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 3)));
#line 123 "term.opt"
        {
#line 123 "term.opt"
          mercury__parser__TermContext_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "term.opt"
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_15, 0) = ((MR_Box) (mercury__parser__FileName_38));
#line 123 "term.opt"
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_15, 1) = ((MR_Box) (mercury__parser__Context_14));
#line 123 "term.opt"
        }
#line 600 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__Token_13)) == (MR_mktag((MR_Integer) 1))))
#line 601 "parser.m"
          {
#line 601 "parser.m"
            MR_String mercury__parser__OpName0_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_13, (MR_Integer) 0)));
#line 601 "parser.m"
            MR_Word mercury__parser__V_24_24;

#line 602 "parser.m"
            *mercury__parser__VariableTerms_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 603 "parser.m"
            mercury__parser__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 603 "parser.m"
            {
#line 603 "parser.m"
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(mercury__parser__TypeClassInfo_for_op_table_30, mercury__parser__V_24_24, mercury__parser__MaybeQualifier_8, mercury__parser__TermContext_15, mercury__parser__OpName0_18, mercury__parser__OpName_9, mercury__parser__STATE_VARIABLE_TokensLeft_23_23, mercury__parser__STATE_VARIABLE_TokensLeft_20, mercury__parser__STATE_VARIABLE_PS_0_21, mercury__parser__STATE_VARIABLE_PS_22);
            }
#line 601 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 601 "parser.m"
          }
#line 600 "parser.m"
        else
#line 600 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__Token_13)) == (MR_mktag((MR_Integer) 2))))
#line 595 "parser.m"
          {
#line 595 "parser.m"
            MR_String mercury__parser__VariableOp_16 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__parser__Token_13, (MR_Integer) 0)));
#line 595 "parser.m"
            MR_Word mercury__parser__Var_17;
#line 595 "parser.m"
            MR_Word mercury__parser__V_28_28;
#line 595 "parser.m"
            MR_Word mercury__parser__V_29_29;

#line 596 "parser.m"
            *mercury__parser__MaybeQualifier_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "parser.m"
            *mercury__parser__OpName_9 = (MR_String) "";
#line 598 "parser.m"
            {
#line 598 "parser.m"
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(mercury__parser__TypeInfo_for_T_31, mercury__parser__VariableOp_16, &mercury__parser__Var_17, mercury__parser__STATE_VARIABLE_PS_0_21, mercury__parser__STATE_VARIABLE_PS_22);
            }
#line 599 "parser.m"
            {
#line 599 "parser.m"
              mercury__parser__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "parser.m"
              MR_hl_field(MR_mktag(1), mercury__parser__V_28_28, 0) = ((MR_Box) (mercury__parser__Var_17));
#line 599 "parser.m"
              MR_hl_field(MR_mktag(1), mercury__parser__V_28_28, 1) = ((MR_Box) (mercury__parser__TermContext_15));
#line 599 "parser.m"
            }
#line 599 "parser.m"
            mercury__parser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "parser.m"
            {
#line 599 "parser.m"
              MR_Word base;
#line 599 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "parser.m"
              *mercury__parser__VariableTerms_10 = base;
#line 599 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__V_28_28));
#line 599 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__V_29_29));
#line 599 "parser.m"
            }
#line 595 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 595 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 595 "parser.m"
          }
#line 600 "parser.m"
        else
#line 600 "parser.m"
          mercury__parser__succeeded = MR_FALSE;
#line 592 "parser.m"
      }
#line 591 "parser.m"
    return mercury__parser__succeeded;
#line 591 "parser.m"
  }
#line 585 "parser.m"
}

#line 502 "parser.m"
static void MR_CALL 
mercury__parser__parse_rest_9_p_0(
#line 502 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_84,
#line 502 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_83,
#line 502 "parser.m"
  MR_Integer mercury__parser__MaxPriority_10,
#line 502 "parser.m"
  MR_Word mercury__parser__TermKind_11,
#line 502 "parser.m"
  MR_Integer mercury__parser__LeftPriority_12,
#line 502 "parser.m"
  MR_Word mercury__parser__LeftTerm_13,
#line 502 "parser.m"
  MR_Word * mercury__parser__Term_14,
#line 502 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_41,
#line 502 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_42,
#line 502 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_43,
#line 502 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_44)
#line 502 "parser.m"
{
#line 569 "parser.m"
  while (MR_TRUE)
#line 569 "parser.m"
    {
#line 569 "parser.m"
      /* tailcall optimized into a loop */
#line 569 "parser.m"
      {
#line 569 "parser.m"
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_41)) == (MR_mktag((MR_Integer) 1)));
#line 569 "parser.m"
        MR_Integer mercury__parser__Context_18;
#line 569 "parser.m"
        MR_Integer mercury__parser__OpPriority_24;
#line 569 "parser.m"
        MR_Word mercury__parser__RightAssoc_26;
#line 569 "parser.m"
        MR_Word mercury__parser__MaybeQualifier_27;
#line 569 "parser.m"
        MR_String mercury__parser__Op_28;
#line 569 "parser.m"
        MR_Word mercury__parser__VariableTerms_29;
#line 569 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_PS_47_47;
#line 569 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_48_48;
#line 511 "parser.m"
        MR_Word mercury__parser__Token_17;
#line 511 "parser.m"
        MR_String mercury__parser__Op0_19;
#line 511 "parser.m"
        MR_Word mercury__parser__LeftAssoc_25;
#line 511 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_45_45;
#line 537 "parser.m"
        MR_Integer mercury__parser__OpPriority0_21;
#line 537 "parser.m"
        MR_Word mercury__parser__LeftAssoc0_22;
#line 537 "parser.m"
        MR_Word mercury__parser__RightAssoc0_23;
#line 526 "parser.m"
        MR_Box mercury__parser__OpTable_20;
#line 1180 "parser.m"
        MR_String mercury__parser__V_99_99;
#line 1180 "parser.m"
        MR_Word mercury__parser__V_100_100;
#line 1180 "parser.m"
        MR_Word mercury__parser__V_101_101;

#line 511 "parser.m"
        if (mercury__parser__succeeded)
#line 511 "parser.m"
          {
#line 511 "parser.m"
            mercury__parser__Token_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 0)));
#line 511 "parser.m"
            mercury__parser__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 1)));
#line 511 "parser.m"
            mercury__parser__STATE_VARIABLE_TokensLeft_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 2)));
#line 516 "parser.m"
#line 516 "parser.m"
            switch (MR_tag((MR_Word) mercury__parser__Token_17)) {
#line 516 "parser.m"
              default:
#line 516 "parser.m"
                mercury__parser__succeeded = MR_FALSE;
#line 516 "parser.m"
                break;
#line 516 "parser.m"
              case (MR_Integer) 0:
#line 516 "parser.m"
#line 516 "parser.m"
                switch (MR_unmkbody(mercury__parser__Token_17)) {
#line 516 "parser.m"
                  default:
#line 516 "parser.m"
                    mercury__parser__succeeded = MR_FALSE;
#line 516 "parser.m"
                    break;
#line 516 "parser.m"
                  case (MR_Integer) 7:
#line 517 "parser.m"
                    {
#line 518 "parser.m"
                      mercury__parser__succeeded = (mercury__parser__TermKind_11 == (MR_Integer) 2);
#line 518 "parser.m"
                      mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 517 "parser.m"
                      if (mercury__parser__succeeded)
#line 517 "parser.m"
                        {
#line 519 "parser.m"
                          mercury__parser__Op0_19 = (MR_String) "|";
#line 519 "parser.m"
                          mercury__parser__succeeded = MR_TRUE;
#line 517 "parser.m"
                        }
#line 517 "parser.m"
                    }
#line 516 "parser.m"
                    break;
#line 516 "parser.m"
                  case (MR_Integer) 8:
#line 513 "parser.m"
                    {
#line 514 "parser.m"
                      mercury__parser__succeeded = (mercury__parser__TermKind_11 == (MR_Integer) 0);
#line 513 "parser.m"
                      if (mercury__parser__succeeded)
#line 513 "parser.m"
                        {
#line 515 "parser.m"
                          mercury__parser__Op0_19 = (MR_String) ",";
#line 515 "parser.m"
                          mercury__parser__succeeded = MR_TRUE;
#line 513 "parser.m"
                        }
#line 513 "parser.m"
                    }
#line 516 "parser.m"
                    break;
#line 516 "parser.m"
                }
#line 516 "parser.m"
                break;
#line 516 "parser.m"
              case (MR_Integer) 1:
#line 521 "parser.m"
                {
#line 521 "parser.m"
                  mercury__parser__Op0_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_17, (MR_Integer) 0)));
#line 521 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 521 "parser.m"
                }
#line 516 "parser.m"
                break;
#line 516 "parser.m"
            }
#line 511 "parser.m"
            if (mercury__parser__succeeded)
#line 511 "parser.m"
              {
#line 526 "parser.m"
                mercury__parser__succeeded = (strcmp(mercury__parser__Op0_19, (MR_String) "\140") == 0);
#line 526 "parser.m"
                if (mercury__parser__succeeded)
#line 526 "parser.m"
                  {
#line 1180 "parser.m"
                    mercury__parser__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 0)));
#line 1180 "parser.m"
                    mercury__parser__OpTable_20 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
#line 1180 "parser.m"
                    mercury__parser__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 2)));
#line 1180 "parser.m"
                    mercury__parser__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 3)));
#line 528 "parser.m"
                    {
#line 528 "parser.m"
                      mercury__parser__succeeded = mercury__ops__lookup_operator_term_4_p_0(mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__OpTable_20, &mercury__parser__OpPriority0_21, &mercury__parser__LeftAssoc0_22, &mercury__parser__RightAssoc0_23);
                    }
#line 526 "parser.m"
                  }
#line 537 "parser.m"
                if (mercury__parser__succeeded)
#line 531 "parser.m"
                  {
#line 531 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_46_46;
#line 531 "parser.m"
                    MR_Word mercury__parser__V_49_49;
#line 531 "parser.m"
                    MR_String mercury__parser__V_50_50;
#line 536 "parser.m"
                    MR_Integer mercury__parser___Context_30;

#line 531 "parser.m"
                    mercury__parser__OpPriority_24 = mercury__parser__OpPriority0_21;
#line 532 "parser.m"
                    mercury__parser__LeftAssoc_25 = mercury__parser__LeftAssoc0_22;
#line 533 "parser.m"
                    mercury__parser__RightAssoc_26 = mercury__parser__RightAssoc0_23;
#line 534 "parser.m"
                    {
#line 534 "parser.m"
                      mercury__parser__succeeded = mercury__parser__parse_backquoted_operator_7_p_0(mercury__parser__TypeInfo_for_T_84, mercury__parser__TypeClassInfo_for_op_table_83, &mercury__parser__MaybeQualifier_27, &mercury__parser__Op_28, &mercury__parser__VariableTerms_29, mercury__parser__STATE_VARIABLE_TokensLeft_45_45, &mercury__parser__STATE_VARIABLE_TokensLeft_46_46, mercury__parser__STATE_VARIABLE_PS_0_43, &mercury__parser__STATE_VARIABLE_PS_47_47);
                    }
#line 531 "parser.m"
                    if (mercury__parser__succeeded)
#line 531 "parser.m"
                      {
#line 536 "parser.m"
                        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 536 "parser.m"
                        if (mercury__parser__succeeded)
#line 536 "parser.m"
                          {
#line 536 "parser.m"
                            mercury__parser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_46_46, (MR_Integer) 0)));
#line 536 "parser.m"
                            mercury__parser___Context_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_46_46, (MR_Integer) 1)));
#line 536 "parser.m"
                            mercury__parser__STATE_VARIABLE_TokensLeft_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_46_46, (MR_Integer) 2)));
#line 536 "parser.m"
                            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 536 "parser.m"
                            if (mercury__parser__succeeded)
#line 536 "parser.m"
                              {
#line 536 "parser.m"
                                mercury__parser__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__V_49_49, (MR_Integer) 0)));
#line 536 "parser.m"
                                mercury__parser__succeeded = (strcmp(mercury__parser__V_50_50, (MR_String) "\140") == 0);
#line 536 "parser.m"
                              }
#line 536 "parser.m"
                          }
#line 531 "parser.m"
                      }
#line 531 "parser.m"
                  }
#line 537 "parser.m"
                else
#line 538 "parser.m"
                  {
#line 538 "parser.m"
                    MR_Box mercury__parser__OpTable_71;
#line 1180 "parser.m"
                    MR_String mercury__parser__V_104_104;
#line 1180 "parser.m"
                    MR_Word mercury__parser__V_105_105;
#line 1180 "parser.m"
                    MR_Word mercury__parser__V_106_106;

#line 538 "parser.m"
                    mercury__parser__Op_28 = mercury__parser__Op0_19;
#line 539 "parser.m"
                    mercury__parser__VariableTerms_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 540 "parser.m"
                    mercury__parser__MaybeQualifier_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1180 "parser.m"
                    mercury__parser__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 0)));
#line 1180 "parser.m"
                    mercury__parser__OpTable_71 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
#line 1180 "parser.m"
                    mercury__parser__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 2)));
#line 1180 "parser.m"
                    mercury__parser__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 3)));
#line 542 "parser.m"
                    {
#line 542 "parser.m"
                      mercury__parser__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__OpTable_71, mercury__parser__Op_28, &mercury__parser__OpPriority_24, &mercury__parser__LeftAssoc_25, &mercury__parser__RightAssoc_26);
                    }
#line 538 "parser.m"
                    if (mercury__parser__succeeded)
#line 538 "parser.m"
                      {
#line 538 "parser.m"
                        mercury__parser__STATE_VARIABLE_PS_47_47 = mercury__parser__STATE_VARIABLE_PS_0_43;
#line 538 "parser.m"
                        mercury__parser__STATE_VARIABLE_TokensLeft_48_48 = mercury__parser__STATE_VARIABLE_TokensLeft_45_45;
#line 538 "parser.m"
                        mercury__parser__succeeded = MR_TRUE;
#line 538 "parser.m"
                      }
#line 538 "parser.m"
                  }
#line 511 "parser.m"
                if (mercury__parser__succeeded)
#line 511 "parser.m"
                  {
#line 544 "parser.m"
                    mercury__parser__succeeded = (mercury__parser__OpPriority_24 <= mercury__parser__MaxPriority_10);
#line 511 "parser.m"
                    if (mercury__parser__succeeded)
#line 545 "parser.m"
                      {
#line 545 "parser.m"
                        mercury__parser__succeeded = mercury__parser__check_priority_3_p_0(mercury__parser__LeftAssoc_25, mercury__parser__OpPriority_24, mercury__parser__LeftPriority_12);
                      }
#line 511 "parser.m"
                  }
#line 511 "parser.m"
              }
#line 511 "parser.m"
          }
#line 569 "parser.m"
        if (mercury__parser__succeeded)
#line 547 "parser.m"
          {
#line 547 "parser.m"
            MR_Integer mercury__parser__RightPriority_31;
#line 547 "parser.m"
            MR_Word mercury__parser__RightTerm0_32;
#line 547 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_51_51;
#line 547 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_PS_52_52;

#line 40 "ops.opt"
#line 40 "ops.opt"
            switch (mercury__parser__RightAssoc_26) {
#line 40 "ops.opt"
              default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
              case (MR_Integer) 0:
#line 41 "ops.opt"
                {
#line 42 "ops.opt"
                  mercury__parser__RightPriority_31 = (mercury__parser__OpPriority_24 - (MR_Integer) 1);
#line 41 "ops.opt"
                }
#line 40 "ops.opt"
                break;
#line 40 "ops.opt"
              case (MR_Integer) 1:
#line 40 "ops.opt"
                mercury__parser__RightPriority_31 = mercury__parser__OpPriority_24;
#line 40 "ops.opt"
                break;
#line 40 "ops.opt"
            }
#line 548 "parser.m"
            {
#line 548 "parser.m"
              mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_84, mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__RightPriority_31, mercury__parser__TermKind_11, &mercury__parser__RightTerm0_32, mercury__parser__STATE_VARIABLE_TokensLeft_48_48, &mercury__parser__STATE_VARIABLE_TokensLeft_51_51, mercury__parser__STATE_VARIABLE_PS_47_47, &mercury__parser__STATE_VARIABLE_PS_52_52);
            }
#line 564 "parser.m"
            if (((MR_tag((MR_Word) mercury__parser__RightTerm0_32)) == (MR_mktag((MR_Integer) 1))))
#line 565 "parser.m"
              {
#line 567 "parser.m"
                *mercury__parser__Term_14 = mercury__parser__RightTerm0_32;
#line 565 "parser.m"
                *mercury__parser__STATE_VARIABLE_TokensLeft_42 = mercury__parser__STATE_VARIABLE_TokensLeft_51_51;
#line 565 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_44 = mercury__parser__STATE_VARIABLE_PS_52_52;
#line 565 "parser.m"
              }
#line 564 "parser.m"
            else
#line 550 "parser.m"
              {
#line 550 "parser.m"
                MR_Word mercury__parser__TypeCtorInfo_91_91;
#line 550 "parser.m"
                MR_Word mercury__parser__TypeInfo_92_92;
#line 550 "parser.m"
                MR_Word mercury__parser__RightTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightTerm0_32, (MR_Integer) 0)));
#line 550 "parser.m"
                MR_Word mercury__parser__TermContext_34;
#line 550 "parser.m"
                MR_Word mercury__parser__OpTermArgs0_35;
#line 550 "parser.m"
                MR_Word mercury__parser__OpTerm0_36;
#line 550 "parser.m"
                MR_Word mercury__parser__OpTerm_37;
#line 550 "parser.m"
                MR_Word mercury__parser__V_53_53;
#line 550 "parser.m"
                MR_Word mercury__parser__V_54_54;
#line 550 "parser.m"
                MR_Word mercury__parser__V_55_55;
#line 550 "parser.m"
                MR_Word mercury__parser__V_56_56;
#line 552 "parser.m"
                MR_Word mercury__parser__conv0_OpTermArgs0_35;

#line 551 "parser.m"
                {
#line 551 "parser.m"
                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_52_52, mercury__parser__Context_18, &mercury__parser__TermContext_34);
                }
#line 6651 "parser.c"
                mercury__parser__TypeCtorInfo_91_91 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 6653 "parser.c"
                {
#line 6655 "parser.c"
                  mercury__parser__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6657 "parser.c"
                  MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_92_92, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_91_91));
#line 6659 "parser.c"
                  MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_92_92, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_84));
#line 6661 "parser.c"
                }
#line 552 "parser.m"
                mercury__parser__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "parser.m"
                {
#line 552 "parser.m"
                  mercury__parser__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_54_54, 0) = ((MR_Box) (mercury__parser__RightTerm_33));
#line 552 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_54_54, 1) = ((MR_Box) (mercury__parser__V_55_55));
#line 552 "parser.m"
                }
#line 552 "parser.m"
                {
#line 552 "parser.m"
                  mercury__parser__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_53_53, 0) = ((MR_Box) (mercury__parser__LeftTerm_13));
#line 552 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_53_53, 1) = ((MR_Box) (mercury__parser__V_54_54));
#line 552 "parser.m"
                }
#line 552 "parser.m"
                {
#line 552 "parser.m"
                  mercury__parser__conv0_OpTermArgs0_35 = mercury__list__f_43_43_2_f_0(mercury__parser__TypeInfo_92_92, (MR_Word) mercury__parser__VariableTerms_29, (MR_Word) mercury__parser__V_53_53);
                }
#line 552 "parser.m"
                mercury__parser__OpTermArgs0_35 = (MR_Word) mercury__parser__conv0_OpTermArgs0_35;
#line 553 "parser.m"
                {
#line 553 "parser.m"
                  mercury__parser__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 553 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_56_56, 0) = ((MR_Box) (mercury__parser__Op_28));
#line 553 "parser.m"
                }
#line 553 "parser.m"
                {
#line 553 "parser.m"
                  mercury__parser__OpTerm0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 553 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_36, 0) = ((MR_Box) (mercury__parser__V_56_56));
#line 553 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_36, 1) = ((MR_Box) (mercury__parser__OpTermArgs0_35));
#line 553 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_36, 2) = ((MR_Box) (mercury__parser__TermContext_34));
#line 553 "parser.m"
                }
#line 557 "parser.m"
                if ((mercury__parser__MaybeQualifier_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "parser.m"
                  mercury__parser__OpTerm_37 = mercury__parser__OpTerm0_36;
#line 557 "parser.m"
                else
#line 558 "parser.m"
                  {
#line 558 "parser.m"
                    MR_Word mercury__parser__QTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__MaybeQualifier_27, (MR_Integer) 0)));
#line 558 "parser.m"
                    MR_Word mercury__parser__V_57_57 = (MR_Word) &mercury__parser_scalar_common_7[0];
#line 558 "parser.m"
                    MR_Word mercury__parser__V_59_59;
#line 558 "parser.m"
                    MR_Word mercury__parser__V_60_60;
#line 558 "parser.m"
                    MR_Word mercury__parser__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 559 "parser.m"
                    {
#line 559 "parser.m"
                      mercury__parser__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_60_60, 0) = ((MR_Box) (mercury__parser__OpTerm0_36));
#line 559 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_60_60, 1) = ((MR_Box) (mercury__parser__V_61_61));
#line 559 "parser.m"
                    }
#line 559 "parser.m"
                    {
#line 559 "parser.m"
                      mercury__parser__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_59_59, 0) = ((MR_Box) (mercury__parser__QTerm_38));
#line 559 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_59_59, 1) = ((MR_Box) (mercury__parser__V_60_60));
#line 559 "parser.m"
                    }
#line 559 "parser.m"
                    {
#line 559 "parser.m"
                      mercury__parser__OpTerm_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 559 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_37, 0) = ((MR_Box) (mercury__parser__V_57_57));
#line 559 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_37, 1) = ((MR_Box) (mercury__parser__V_59_59));
#line 559 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_37, 2) = ((MR_Box) (mercury__parser__TermContext_34));
#line 559 "parser.m"
                    }
#line 558 "parser.m"
                  }
#line 562 "parser.m"
                /* direct tailcall eliminated */
#line 562 "parser.m"
                {
#line 562 "parser.m"
                  MR_Integer mercury__parser__LeftPriority__tmp_copy_12 = mercury__parser__OpPriority_24;
#line 562 "parser.m"
                  MR_Word mercury__parser__LeftTerm__tmp_copy_13 = mercury__parser__OpTerm_37;
#line 562 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_41 = mercury__parser__STATE_VARIABLE_TokensLeft_51_51;
#line 562 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_43 = mercury__parser__STATE_VARIABLE_PS_52_52;

#line 562 "parser.m"
                  mercury__parser__STATE_VARIABLE_PS_0_43 = mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_43;
#line 562 "parser.m"
                  mercury__parser__STATE_VARIABLE_TokensLeft_0_41 = mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_41;
#line 562 "parser.m"
                  mercury__parser__LeftTerm_13 = mercury__parser__LeftTerm__tmp_copy_13;
#line 562 "parser.m"
                  mercury__parser__LeftPriority_12 = mercury__parser__LeftPriority__tmp_copy_12;
#line 562 "parser.m"
                }
#line 562 "parser.m"
                continue;
#line 550 "parser.m"
              }
#line 547 "parser.m"
          }
#line 569 "parser.m"
        else
#line 581 "parser.m"
          {
#line 581 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_64_64;
#line 581 "parser.m"
            MR_Integer mercury__parser__Context_76;
#line 581 "parser.m"
            MR_Integer mercury__parser__OpPriority_78;
#line 581 "parser.m"
            MR_String mercury__parser__Op_80;
#line 571 "parser.m"
            MR_Word mercury__parser__V_65_65;
#line 571 "parser.m"
            MR_Box mercury__parser__OpTable_72;
#line 571 "parser.m"
            MR_Word mercury__parser__LeftAssoc_73;
#line 1180 "parser.m"
            MR_String mercury__parser__V_113_113;
#line 1180 "parser.m"
            MR_Word mercury__parser__V_114_114;
#line 1180 "parser.m"
            MR_Word mercury__parser__V_115_115;

#line 571 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_41)) == (MR_mktag((MR_Integer) 1)));
#line 571 "parser.m"
            if (mercury__parser__succeeded)
#line 571 "parser.m"
              {
#line 571 "parser.m"
                mercury__parser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 0)));
#line 571 "parser.m"
                mercury__parser__Context_76 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 1)));
#line 571 "parser.m"
                mercury__parser__STATE_VARIABLE_TokensLeft_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 2)));
#line 571 "parser.m"
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 571 "parser.m"
                if (mercury__parser__succeeded)
#line 571 "parser.m"
                  {
#line 571 "parser.m"
                    mercury__parser__Op_80 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__V_65_65, (MR_Integer) 0)));
#line 1180 "parser.m"
                    mercury__parser__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 0)));
#line 1180 "parser.m"
                    mercury__parser__OpTable_72 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
#line 1180 "parser.m"
                    mercury__parser__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 2)));
#line 1180 "parser.m"
                    mercury__parser__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 3)));
#line 573 "parser.m"
                    {
#line 573 "parser.m"
                      mercury__parser__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__OpTable_72, mercury__parser__Op_80, &mercury__parser__OpPriority_78, &mercury__parser__LeftAssoc_73);
                    }
#line 571 "parser.m"
                    if (mercury__parser__succeeded)
#line 571 "parser.m"
                      {
#line 574 "parser.m"
                        mercury__parser__succeeded = (mercury__parser__OpPriority_78 <= mercury__parser__MaxPriority_10);
#line 571 "parser.m"
                        if (mercury__parser__succeeded)
#line 575 "parser.m"
                          {
#line 575 "parser.m"
                            mercury__parser__succeeded = mercury__parser__check_priority_3_p_0(mercury__parser__LeftAssoc_73, mercury__parser__OpPriority_78, mercury__parser__LeftPriority_12);
                          }
#line 571 "parser.m"
                      }
#line 571 "parser.m"
                  }
#line 571 "parser.m"
              }
#line 581 "parser.m"
            if (mercury__parser__succeeded)
#line 577 "parser.m"
              {
#line 577 "parser.m"
                MR_Word mercury__parser__V_66_66;
#line 577 "parser.m"
                MR_Word mercury__parser__V_67_67;
#line 577 "parser.m"
                MR_Word mercury__parser__V_68_68;
#line 577 "parser.m"
                MR_Word mercury__parser__TermContext_74;
#line 577 "parser.m"
                MR_Word mercury__parser__OpTerm_75;

#line 577 "parser.m"
                {
#line 577 "parser.m"
                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_43, mercury__parser__Context_76, &mercury__parser__TermContext_74);
                }
#line 578 "parser.m"
                {
#line 578 "parser.m"
                  mercury__parser__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 578 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_66_66, 0) = ((MR_Box) (mercury__parser__Op_80));
#line 578 "parser.m"
                }
#line 578 "parser.m"
                mercury__parser__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "parser.m"
                {
#line 578 "parser.m"
                  mercury__parser__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_67_67, 0) = ((MR_Box) (mercury__parser__LeftTerm_13));
#line 578 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_67_67, 1) = ((MR_Box) (mercury__parser__V_68_68));
#line 578 "parser.m"
                }
#line 578 "parser.m"
                {
#line 578 "parser.m"
                  mercury__parser__OpTerm_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 578 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_75, 0) = ((MR_Box) (mercury__parser__V_66_66));
#line 578 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_75, 1) = ((MR_Box) (mercury__parser__V_67_67));
#line 578 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_75, 2) = ((MR_Box) (mercury__parser__TermContext_74));
#line 578 "parser.m"
                }
#line 579 "parser.m"
                /* direct tailcall eliminated */
#line 579 "parser.m"
                {
#line 579 "parser.m"
                  MR_Integer mercury__parser__LeftPriority__tmp_copy_12 = mercury__parser__OpPriority_78;
#line 579 "parser.m"
                  MR_Word mercury__parser__LeftTerm__tmp_copy_13 = mercury__parser__OpTerm_75;
#line 579 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_41 = mercury__parser__STATE_VARIABLE_TokensLeft_64_64;

#line 579 "parser.m"
                  mercury__parser__STATE_VARIABLE_TokensLeft_0_41 = mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_41;
#line 579 "parser.m"
                  mercury__parser__LeftTerm_13 = mercury__parser__LeftTerm__tmp_copy_13;
#line 579 "parser.m"
                  mercury__parser__LeftPriority_12 = mercury__parser__LeftPriority__tmp_copy_12;
#line 579 "parser.m"
                }
#line 579 "parser.m"
                continue;
#line 577 "parser.m"
              }
#line 581 "parser.m"
            else
#line 582 "parser.m"
              {
#line 582 "parser.m"
                {
#line 582 "parser.m"
                  MR_Word base;
#line 582 "parser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 582 "parser.m"
                  *mercury__parser__Term_14 = base;
#line 582 "parser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__LeftTerm_13));
#line 582 "parser.m"
                }
#line 582 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_44 = mercury__parser__STATE_VARIABLE_PS_0_43;
#line 582 "parser.m"
                *mercury__parser__STATE_VARIABLE_TokensLeft_42 = mercury__parser__STATE_VARIABLE_TokensLeft_0_41;
#line 582 "parser.m"
              }
#line 581 "parser.m"
          }
#line 569 "parser.m"
      }
#line 569 "parser.m"
      break;
#line 569 "parser.m"
    }
#line 502 "parser.m"
}

#line 379 "parser.m"
static void MR_CALL 
mercury__parser__parse_left_term_8_p_0(
#line 379 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_113,
#line 379 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_112,
#line 379 "parser.m"
  MR_Integer mercury__parser__MaxPriority_9,
#line 379 "parser.m"
  MR_Word mercury__parser__TermKind_10,
#line 379 "parser.m"
  MR_Integer * mercury__parser__OpPriority_11,
#line 379 "parser.m"
  MR_Word * mercury__parser__Term_12,
#line 379 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_50,
#line 379 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_51,
#line 379 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_52,
#line 379 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_53)
#line 379 "parser.m"
{
#line 495 "parser.m"
  {
#line 495 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 495 "parser.m"
    if ((mercury__parser__STATE_VARIABLE_TokensLeft_0_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 496 "parser.m"
      {
#line 497 "parser.m"
        {
#line 497 "parser.m"
          MR_Word base;
#line 497 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "parser.m"
          *mercury__parser__Term_12 = base;
#line 497 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file at start of sub-term"));
#line 497 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_50));
#line 497 "parser.m"
        }
#line 499 "parser.m"
        *mercury__parser__OpPriority_11 = (MR_Integer) 0;
#line 496 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_51 = mercury__parser__STATE_VARIABLE_TokensLeft_0_50;
#line 496 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_53 = mercury__parser__STATE_VARIABLE_PS_0_52;
#line 496 "parser.m"
      }
#line 495 "parser.m"
    else
#line 386 "parser.m"
      {
#line 386 "parser.m"
        MR_Word mercury__parser__Token_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_50, (MR_Integer) 0)));
#line 386 "parser.m"
        MR_Integer mercury__parser__Context_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_50, (MR_Integer) 1)));
#line 386 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_50, (MR_Integer) 2)));
#line 411 "parser.m"
        MR_Word mercury__parser__NewFunctor_22;
#line 411 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_56_56;
#line 389 "parser.m"
        MR_String mercury__parser__TokenName_17;
#line 389 "parser.m"
        MR_Word mercury__parser__NextToken_18;
#line 391 "parser.m"
        MR_Integer mercury__parser___NextContext_19;

#line 389 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_15)) == (MR_mktag((MR_Integer) 1)));
#line 389 "parser.m"
        if (mercury__parser__succeeded)
#line 389 "parser.m"
          {
#line 389 "parser.m"
            mercury__parser__TokenName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_15, (MR_Integer) 0)));
#line 390 "parser.m"
            mercury__parser__succeeded = (strcmp(mercury__parser__TokenName_17, (MR_String) "-") == 0);
#line 389 "parser.m"
            if (mercury__parser__succeeded)
#line 389 "parser.m"
              {
#line 391 "parser.m"
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 391 "parser.m"
                if (mercury__parser__succeeded)
#line 391 "parser.m"
                  {
#line 391 "parser.m"
                    mercury__parser__NextToken_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_55_55, (MR_Integer) 0)));
#line 391 "parser.m"
                    mercury__parser___NextContext_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_55_55, (MR_Integer) 1)));
#line 391 "parser.m"
                    mercury__parser__STATE_VARIABLE_TokensLeft_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_55_55, (MR_Integer) 2)));
#line 397 "parser.m"
#line 397 "parser.m"
                    switch (MR_tag((MR_Word) mercury__parser__NextToken_18)) {
#line 397 "parser.m"
                      default:
#line 397 "parser.m"
                        mercury__parser__succeeded = MR_FALSE;
#line 397 "parser.m"
                        break;
#line 397 "parser.m"
                      case (MR_Integer) 3:
#line 397 "parser.m"
#line 397 "parser.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 0)))) {
#line 397 "parser.m"
                          default:
#line 397 "parser.m"
                            mercury__parser__succeeded = MR_FALSE;
#line 397 "parser.m"
                            break;
#line 397 "parser.m"
                          case (MR_Integer) 0:
#line 394 "parser.m"
                            {
#line 394 "parser.m"
                              MR_Integer mercury__parser__X_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 1)));
#line 394 "parser.m"
                              MR_Integer mercury__parser__NegX_21 = ((MR_Integer) 0 - mercury__parser__X_20);

#line 396 "parser.m"
                              {
#line 396 "parser.m"
                                mercury__parser__NewFunctor_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 396 "parser.m"
                                MR_hl_field(MR_mktag(1), mercury__parser__NewFunctor_22, 0) = ((MR_Box) (mercury__parser__NegX_21));
#line 396 "parser.m"
                              }
#line 394 "parser.m"
                              mercury__parser__succeeded = MR_TRUE;
#line 394 "parser.m"
                            }
#line 397 "parser.m"
                            break;
#line 397 "parser.m"
                          case (MR_Integer) 1:
#line 398 "parser.m"
                            {
#line 398 "parser.m"
                              MR_Word mercury__parser__V_58_58;
#line 398 "parser.m"
                              MR_Integer mercury__parser__V_59_59;
#line 398 "parser.m"
                              MR_Word mercury__parser__X_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 2)));
#line 398 "parser.m"
                              MR_Integer mercury__parser__NegX_85;
#line 398 "parser.m"
                              MR_Word mercury__parser__V_123_123;
#line 398 "parser.m"
                              MR_Word mercury__parser__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 1)));

#line 399 "parser.m"
                              {
#line 399 "parser.m"
                                mercury__parser__V_58_58 = mercury__integer__f_minus_1_f_0(mercury__parser__X_84);
                              }
#line 399 "parser.m"
                              {
#line 399 "parser.m"
                                mercury__parser__V_59_59 = mercury__int__min_int_0_f_0();
                              }
#line 399 "parser.m"
                              {
#line 399 "parser.m"
                                mercury__parser__V_123_123 = mercury__integer__integer_1_f_0(mercury__parser__V_59_59);
                              }
#line 399 "parser.m"
                              {
#line 399 "parser.m"
                                mercury__parser__succeeded = mercury__integer____Unify____integer_0_0(mercury__parser__V_58_58, mercury__parser__V_123_123);
                              }
#line 398 "parser.m"
                              if (mercury__parser__succeeded)
#line 398 "parser.m"
                                {
#line 400 "parser.m"
                                  {
#line 400 "parser.m"
                                    mercury__parser__NegX_85 = mercury__int__min_int_0_f_0();
                                  }
#line 401 "parser.m"
                                  {
#line 401 "parser.m"
                                    mercury__parser__NewFunctor_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "parser.m"
                                    MR_hl_field(MR_mktag(1), mercury__parser__NewFunctor_22, 0) = ((MR_Box) (mercury__parser__NegX_85));
#line 401 "parser.m"
                                  }
#line 401 "parser.m"
                                  mercury__parser__succeeded = MR_TRUE;
#line 398 "parser.m"
                                }
#line 398 "parser.m"
                            }
#line 397 "parser.m"
                            break;
#line 397 "parser.m"
                          case (MR_Integer) 2:
#line 403 "parser.m"
                            {
#line 403 "parser.m"
                              MR_Float mercury__parser__F_24 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 1)));
#line 403 "parser.m"
                              MR_Float mercury__parser__NegF_25 = (((MR_Float) 0.0000000000000000) - mercury__parser__F_24);

#line 405 "parser.m"
                              {
#line 405 "parser.m"
                                mercury__parser__NewFunctor_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "parser.m"
                                MR_hl_field(MR_mktag(3), mercury__parser__NewFunctor_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 405 "parser.m"
                                MR_hl_field(MR_mktag(3), mercury__parser__NewFunctor_22, 1) = MR_box_float(mercury__parser__NegF_25);
#line 405 "parser.m"
                              }
#line 403 "parser.m"
                              mercury__parser__succeeded = MR_TRUE;
#line 403 "parser.m"
                            }
#line 397 "parser.m"
                            break;
#line 397 "parser.m"
                        }
#line 397 "parser.m"
                        break;
#line 397 "parser.m"
                    }
#line 391 "parser.m"
                  }
#line 389 "parser.m"
              }
#line 389 "parser.m"
          }
#line 411 "parser.m"
        if (mercury__parser__succeeded)
#line 408 "parser.m"
          {
#line 408 "parser.m"
            MR_Word mercury__parser__TermContext_26;
#line 408 "parser.m"
            MR_Word mercury__parser__V_61_61;
#line 408 "parser.m"
            MR_Word mercury__parser__V_62_62;

#line 408 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_51 = mercury__parser__STATE_VARIABLE_TokensLeft_56_56;
#line 408 "parser.m"
            {
#line 408 "parser.m"
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_52, mercury__parser__Context_16, &mercury__parser__TermContext_26);
            }
#line 409 "parser.m"
            mercury__parser__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "parser.m"
            {
#line 409 "parser.m"
              mercury__parser__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 409 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_61_61, 0) = ((MR_Box) (mercury__parser__NewFunctor_22));
#line 409 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_61_61, 1) = ((MR_Box) (mercury__parser__V_62_62));
#line 409 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_61_61, 2) = ((MR_Box) (mercury__parser__TermContext_26));
#line 409 "parser.m"
            }
#line 409 "parser.m"
            {
#line 409 "parser.m"
              MR_Word base;
#line 409 "parser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 409 "parser.m"
              *mercury__parser__Term_12 = base;
#line 409 "parser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_61_61));
#line 409 "parser.m"
            }
#line 410 "parser.m"
            *mercury__parser__OpPriority_11 = (MR_Integer) 0;
#line 408 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_53 = mercury__parser__STATE_VARIABLE_PS_0_52;
#line 408 "parser.m"
          }
#line 411 "parser.m"
        else
#line 489 "parser.m"
          {
#line 489 "parser.m"
            MR_Word mercury__parser__OpInfo_28;
#line 489 "parser.m"
            MR_Word mercury__parser__OtherOpInfos_29;
#line 489 "parser.m"
            MR_String mercury__parser__TokenName_109;
#line 412 "parser.m"
            MR_Box mercury__parser__OpTable_27;
#line 1180 "parser.m"
            MR_String mercury__parser__V_129_129;
#line 1180 "parser.m"
            MR_Word mercury__parser__V_130_130;
#line 1180 "parser.m"
            MR_Word mercury__parser__V_131_131;

#line 412 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_15)) == (MR_mktag((MR_Integer) 1)));
#line 412 "parser.m"
            if (mercury__parser__succeeded)
#line 412 "parser.m"
              {
#line 412 "parser.m"
                mercury__parser__TokenName_109 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_15, (MR_Integer) 0)));
#line 1180 "parser.m"
                mercury__parser__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_52, (MR_Integer) 0)));
#line 1180 "parser.m"
                mercury__parser__OpTable_27 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_52, (MR_Integer) 1));
#line 1180 "parser.m"
                mercury__parser__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_52, (MR_Integer) 2)));
#line 1180 "parser.m"
                mercury__parser__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_52, (MR_Integer) 3)));
#line 414 "parser.m"
                {
#line 414 "parser.m"
                  mercury__parser__succeeded = mercury__ops__lookup_op_infos_4_p_0(mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__OpTable_27, mercury__parser__TokenName_109, &mercury__parser__OpInfo_28, &mercury__parser__OtherOpInfos_29);
                }
#line 412 "parser.m"
              }
#line 489 "parser.m"
            if (mercury__parser__succeeded)
#line 455 "parser.m"
              {
#line 455 "parser.m"
                MR_Integer mercury__parser__BinOpPriority_30;
#line 455 "parser.m"
                MR_Word mercury__parser__RightAssoc_31;
#line 455 "parser.m"
                MR_Word mercury__parser__RightRightAssoc_32;
#line 422 "parser.m"
                MR_Word mercury__parser__V_63_63;
#line 422 "parser.m"
                MR_Word mercury__parser__NextToken_86;
#line 422 "parser.m"
                MR_Word mercury__parser__V_124_124;
#line 424 "parser.m"
                MR_Integer mercury__parser__V_33_33;
#line 424 "parser.m"
                MR_Word mercury__parser__V_34_34;

#line 421 "parser.m"
                {
#line 421 "parser.m"
                  mercury__parser__succeeded = mercury__parser__find_first_binary_prefix_op_5_p_0(mercury__parser__OpInfo_28, mercury__parser__OtherOpInfos_29, &mercury__parser__BinOpPriority_30, &mercury__parser__RightAssoc_31, &mercury__parser__RightRightAssoc_32);
                }
#line 422 "parser.m"
                if (mercury__parser__succeeded)
#line 422 "parser.m"
                  {
#line 423 "parser.m"
                    mercury__parser__succeeded = (mercury__parser__BinOpPriority_30 <= mercury__parser__MaxPriority_9);
#line 422 "parser.m"
                    if (mercury__parser__succeeded)
#line 422 "parser.m"
                      {
#line 424 "parser.m"
                        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 424 "parser.m"
                        if (mercury__parser__succeeded)
#line 424 "parser.m"
                          {
#line 424 "parser.m"
                            mercury__parser__NextToken_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_55_55, (MR_Integer) 0)));
#line 424 "parser.m"
                            mercury__parser__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_55_55, (MR_Integer) 1)));
#line 424 "parser.m"
                            mercury__parser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_55_55, (MR_Integer) 2)));
#line 425 "parser.m"
                            mercury__parser__V_63_63 = (MR_Integer) 1;
#line 425 "parser.m"
                            {
#line 425 "parser.m"
                              mercury__parser__could_start_term_2_p_0(mercury__parser__NextToken_86, &mercury__parser__V_124_124);
                            }
#line 425 "parser.m"
                            mercury__parser__succeeded = (mercury__parser__V_63_63 == mercury__parser__V_124_124);
#line 422 "parser.m"
                            if (mercury__parser__succeeded)
#line 422 "parser.m"
                              {
#line 426 "parser.m"
                                mercury__parser__succeeded = (mercury__parser__NextToken_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 426 "parser.m"
                                mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 422 "parser.m"
                              }
#line 424 "parser.m"
                          }
#line 422 "parser.m"
                      }
#line 422 "parser.m"
                  }
#line 455 "parser.m"
                if (mercury__parser__succeeded)
#line 429 "parser.m"
                  {
#line 429 "parser.m"
                    MR_Integer mercury__parser__RightPriority_35;
#line 429 "parser.m"
                    MR_Integer mercury__parser__RightRightPriority_36;
#line 429 "parser.m"
                    MR_Word mercury__parser__RightResult_37;
#line 429 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_64_64;
#line 429 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_PS_65_65;

#line 429 "parser.m"
                    *mercury__parser__OpPriority_11 = mercury__parser__BinOpPriority_30;
#line 40 "ops.opt"
#line 40 "ops.opt"
                    switch (mercury__parser__RightAssoc_31) {
#line 40 "ops.opt"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
                      case (MR_Integer) 0:
#line 41 "ops.opt"
                        {
#line 42 "ops.opt"
                          mercury__parser__RightPriority_35 = (*mercury__parser__OpPriority_11 - (MR_Integer) 1);
#line 41 "ops.opt"
                        }
#line 40 "ops.opt"
                        break;
#line 40 "ops.opt"
                      case (MR_Integer) 1:
#line 40 "ops.opt"
                        mercury__parser__RightPriority_35 = *mercury__parser__OpPriority_11;
#line 40 "ops.opt"
                        break;
#line 40 "ops.opt"
                    }
#line 40 "ops.opt"
#line 40 "ops.opt"
                    switch (mercury__parser__RightRightAssoc_32) {
#line 40 "ops.opt"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
                      case (MR_Integer) 0:
#line 41 "ops.opt"
                        {
#line 42 "ops.opt"
                          mercury__parser__RightRightPriority_36 = (*mercury__parser__OpPriority_11 - (MR_Integer) 1);
#line 41 "ops.opt"
                        }
#line 40 "ops.opt"
                        break;
#line 40 "ops.opt"
                      case (MR_Integer) 1:
#line 40 "ops.opt"
                        mercury__parser__RightRightPriority_36 = *mercury__parser__OpPriority_11;
#line 40 "ops.opt"
                        break;
#line 40 "ops.opt"
                    }
#line 434 "parser.m"
                    {
#line 434 "parser.m"
                      mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_113, mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__RightPriority_35, mercury__parser__TermKind_10, &mercury__parser__RightResult_37, mercury__parser__STATE_VARIABLE_TokensLeft_55_55, &mercury__parser__STATE_VARIABLE_TokensLeft_64_64, mercury__parser__STATE_VARIABLE_PS_0_52, &mercury__parser__STATE_VARIABLE_PS_65_65);
                    }
#line 450 "parser.m"
                    if (((MR_tag((MR_Word) mercury__parser__RightResult_37)) == (MR_mktag((MR_Integer) 1))))
#line 451 "parser.m"
                      {
#line 453 "parser.m"
                        *mercury__parser__Term_12 = mercury__parser__RightResult_37;
#line 451 "parser.m"
                        *mercury__parser__STATE_VARIABLE_TokensLeft_51 = mercury__parser__STATE_VARIABLE_TokensLeft_64_64;
#line 451 "parser.m"
                        *mercury__parser__STATE_VARIABLE_PS_53 = mercury__parser__STATE_VARIABLE_PS_65_65;
#line 451 "parser.m"
                      }
#line 450 "parser.m"
                    else
#line 437 "parser.m"
                      {
#line 437 "parser.m"
                        MR_Word mercury__parser__RightTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightResult_37, (MR_Integer) 0)));
#line 437 "parser.m"
                        MR_Word mercury__parser__RightRightResult_39;

#line 438 "parser.m"
                        {
#line 438 "parser.m"
                          mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_113, mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__RightRightPriority_36, mercury__parser__TermKind_10, &mercury__parser__RightRightResult_39, mercury__parser__STATE_VARIABLE_TokensLeft_64_64, mercury__parser__STATE_VARIABLE_TokensLeft_51, mercury__parser__STATE_VARIABLE_PS_65_65, mercury__parser__STATE_VARIABLE_PS_53);
                        }
#line 445 "parser.m"
                        if (((MR_tag((MR_Word) mercury__parser__RightRightResult_39)) == (MR_mktag((MR_Integer) 1))))
#line 448 "parser.m"
                          *mercury__parser__Term_12 = mercury__parser__RightRightResult_39;
#line 445 "parser.m"
                        else
#line 441 "parser.m"
                          {
#line 441 "parser.m"
                            MR_Word mercury__parser__RightRightTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightRightResult_39, (MR_Integer) 0)));
#line 441 "parser.m"
                            MR_Word mercury__parser__V_68_68;
#line 441 "parser.m"
                            MR_Word mercury__parser__V_69_69;
#line 441 "parser.m"
                            MR_Word mercury__parser__V_70_70;
#line 441 "parser.m"
                            MR_Word mercury__parser__V_71_71;
#line 441 "parser.m"
                            MR_Word mercury__parser__V_72_72;
#line 441 "parser.m"
                            MR_Word mercury__parser__TermContext_87;

#line 442 "parser.m"
                            {
#line 442 "parser.m"
                              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*mercury__parser__STATE_VARIABLE_PS_53, mercury__parser__Context_16, &mercury__parser__TermContext_87);
                            }
#line 443 "parser.m"
                            {
#line 443 "parser.m"
                              mercury__parser__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 443 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_69_69, 0) = ((MR_Box) (mercury__parser__TokenName_109));
#line 443 "parser.m"
                            }
#line 444 "parser.m"
                            mercury__parser__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 444 "parser.m"
                            {
#line 444 "parser.m"
                              mercury__parser__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_71_71, 0) = ((MR_Box) (mercury__parser__RightRightTerm_40));
#line 444 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_71_71, 1) = ((MR_Box) (mercury__parser__V_72_72));
#line 444 "parser.m"
                            }
#line 444 "parser.m"
                            {
#line 444 "parser.m"
                              mercury__parser__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_70_70, 0) = ((MR_Box) (mercury__parser__RightTerm_38));
#line 444 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_70_70, 1) = ((MR_Box) (mercury__parser__V_71_71));
#line 444 "parser.m"
                            }
#line 443 "parser.m"
                            {
#line 443 "parser.m"
                              mercury__parser__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 443 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_68_68, 0) = ((MR_Box) (mercury__parser__V_69_69));
#line 443 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_68_68, 1) = ((MR_Box) (mercury__parser__V_70_70));
#line 443 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_68_68, 2) = ((MR_Box) (mercury__parser__TermContext_87));
#line 443 "parser.m"
                            }
#line 443 "parser.m"
                            {
#line 443 "parser.m"
                              MR_Word base;
#line 443 "parser.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 443 "parser.m"
                              *mercury__parser__Term_12 = base;
#line 443 "parser.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_68_68));
#line 443 "parser.m"
                            }
#line 441 "parser.m"
                          }
#line 437 "parser.m"
                      }
#line 429 "parser.m"
                  }
#line 455 "parser.m"
                else
#line 482 "parser.m"
                  {
#line 482 "parser.m"
                    MR_Integer mercury__parser__UnOpPriority_45;
#line 482 "parser.m"
                    MR_Word mercury__parser__RightAssoc_103;
#line 461 "parser.m"
                    MR_Word mercury__parser__V_73_73;
#line 461 "parser.m"
                    MR_Word mercury__parser__NextToken_92;
#line 461 "parser.m"
                    MR_Word mercury__parser__V_125_125;
#line 463 "parser.m"
                    MR_Integer mercury__parser__V_46_46;
#line 463 "parser.m"
                    MR_Word mercury__parser__V_47_47;

#line 460 "parser.m"
                    {
#line 460 "parser.m"
                      mercury__parser__succeeded = mercury__parser__find_first_prefix_op_4_p_0(mercury__parser__OpInfo_28, mercury__parser__OtherOpInfos_29, &mercury__parser__UnOpPriority_45, &mercury__parser__RightAssoc_103);
                    }
#line 461 "parser.m"
                    if (mercury__parser__succeeded)
#line 461 "parser.m"
                      {
#line 462 "parser.m"
                        mercury__parser__succeeded = (mercury__parser__UnOpPriority_45 <= mercury__parser__MaxPriority_9);
#line 461 "parser.m"
                        if (mercury__parser__succeeded)
#line 461 "parser.m"
                          {
#line 463 "parser.m"
                            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 463 "parser.m"
                            if (mercury__parser__succeeded)
#line 463 "parser.m"
                              {
#line 463 "parser.m"
                                mercury__parser__NextToken_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_55_55, (MR_Integer) 0)));
#line 463 "parser.m"
                                mercury__parser__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_55_55, (MR_Integer) 1)));
#line 463 "parser.m"
                                mercury__parser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_55_55, (MR_Integer) 2)));
#line 464 "parser.m"
                                mercury__parser__V_73_73 = (MR_Integer) 1;
#line 464 "parser.m"
                                {
#line 464 "parser.m"
                                  mercury__parser__could_start_term_2_p_0(mercury__parser__NextToken_92, &mercury__parser__V_125_125);
                                }
#line 464 "parser.m"
                                mercury__parser__succeeded = (mercury__parser__V_73_73 == mercury__parser__V_125_125);
#line 461 "parser.m"
                                if (mercury__parser__succeeded)
#line 461 "parser.m"
                                  {
#line 465 "parser.m"
                                    mercury__parser__succeeded = (mercury__parser__NextToken_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 465 "parser.m"
                                    mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 461 "parser.m"
                                  }
#line 463 "parser.m"
                              }
#line 461 "parser.m"
                          }
#line 461 "parser.m"
                      }
#line 482 "parser.m"
                    if (mercury__parser__succeeded)
#line 467 "parser.m"
                      {
#line 467 "parser.m"
                        MR_Integer mercury__parser__RightPriority_98;
#line 467 "parser.m"
                        MR_Word mercury__parser__RightResult_99;

#line 467 "parser.m"
                        *mercury__parser__OpPriority_11 = mercury__parser__UnOpPriority_45;
#line 40 "ops.opt"
#line 40 "ops.opt"
                        switch (mercury__parser__RightAssoc_103) {
#line 40 "ops.opt"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
                          case (MR_Integer) 0:
#line 41 "ops.opt"
                            {
#line 42 "ops.opt"
                              mercury__parser__RightPriority_98 = (*mercury__parser__OpPriority_11 - (MR_Integer) 1);
#line 41 "ops.opt"
                            }
#line 40 "ops.opt"
                            break;
#line 40 "ops.opt"
                          case (MR_Integer) 1:
#line 40 "ops.opt"
                            mercury__parser__RightPriority_98 = *mercury__parser__OpPriority_11;
#line 40 "ops.opt"
                            break;
#line 40 "ops.opt"
                        }
#line 470 "parser.m"
                        {
#line 470 "parser.m"
                          mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_113, mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__RightPriority_98, mercury__parser__TermKind_10, &mercury__parser__RightResult_99, mercury__parser__STATE_VARIABLE_TokensLeft_55_55, mercury__parser__STATE_VARIABLE_TokensLeft_51, mercury__parser__STATE_VARIABLE_PS_0_52, mercury__parser__STATE_VARIABLE_PS_53);
                        }
#line 477 "parser.m"
                        if (((MR_tag((MR_Word) mercury__parser__RightResult_99)) == (MR_mktag((MR_Integer) 1))))
#line 480 "parser.m"
                          *mercury__parser__Term_12 = mercury__parser__RightResult_99;
#line 477 "parser.m"
                        else
#line 473 "parser.m"
                          {
#line 473 "parser.m"
                            MR_Word mercury__parser__V_76_76;
#line 473 "parser.m"
                            MR_Word mercury__parser__V_77_77;
#line 473 "parser.m"
                            MR_Word mercury__parser__V_78_78;
#line 473 "parser.m"
                            MR_Word mercury__parser__V_79_79;
#line 473 "parser.m"
                            MR_Word mercury__parser__TermContext_93;
#line 473 "parser.m"
                            MR_Word mercury__parser__RightTerm_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightResult_99, (MR_Integer) 0)));

#line 474 "parser.m"
                            {
#line 474 "parser.m"
                              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*mercury__parser__STATE_VARIABLE_PS_53, mercury__parser__Context_16, &mercury__parser__TermContext_93);
                            }
#line 475 "parser.m"
                            {
#line 475 "parser.m"
                              mercury__parser__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 475 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_77_77, 0) = ((MR_Box) (mercury__parser__TokenName_109));
#line 475 "parser.m"
                            }
#line 475 "parser.m"
                            mercury__parser__V_79_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 475 "parser.m"
                            {
#line 475 "parser.m"
                              mercury__parser__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_78_78, 0) = ((MR_Box) (mercury__parser__RightTerm_94));
#line 475 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_78_78, 1) = ((MR_Box) (mercury__parser__V_79_79));
#line 475 "parser.m"
                            }
#line 475 "parser.m"
                            {
#line 475 "parser.m"
                              mercury__parser__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 475 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_76_76, 0) = ((MR_Box) (mercury__parser__V_77_77));
#line 475 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_76_76, 1) = ((MR_Box) (mercury__parser__V_78_78));
#line 475 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_76_76, 2) = ((MR_Box) (mercury__parser__TermContext_93));
#line 475 "parser.m"
                            }
#line 475 "parser.m"
                            {
#line 475 "parser.m"
                              MR_Word base;
#line 475 "parser.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 475 "parser.m"
                              *mercury__parser__Term_12 = base;
#line 475 "parser.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_76_76));
#line 475 "parser.m"
                            }
#line 473 "parser.m"
                          }
#line 467 "parser.m"
                      }
#line 482 "parser.m"
                    else
#line 486 "parser.m"
                      {
#line 485 "parser.m"
                        {
#line 485 "parser.m"
                          mercury__parser__parse_simple_term_8_p_0(mercury__parser__TypeInfo_for_T_113, mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__Token_15, mercury__parser__Context_16, mercury__parser__MaxPriority_9, mercury__parser__Term_12, mercury__parser__STATE_VARIABLE_TokensLeft_55_55, mercury__parser__STATE_VARIABLE_TokensLeft_51, mercury__parser__STATE_VARIABLE_PS_0_52, mercury__parser__STATE_VARIABLE_PS_53);
                        }
#line 487 "parser.m"
                        *mercury__parser__OpPriority_11 = (MR_Integer) 0;
#line 486 "parser.m"
                      }
#line 482 "parser.m"
                  }
#line 455 "parser.m"
              }
#line 489 "parser.m"
            else
#line 492 "parser.m"
              {
#line 491 "parser.m"
                {
#line 491 "parser.m"
                  mercury__parser__parse_simple_term_8_p_0(mercury__parser__TypeInfo_for_T_113, mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__Token_15, mercury__parser__Context_16, mercury__parser__MaxPriority_9, mercury__parser__Term_12, mercury__parser__STATE_VARIABLE_TokensLeft_55_55, mercury__parser__STATE_VARIABLE_TokensLeft_51, mercury__parser__STATE_VARIABLE_PS_0_52, mercury__parser__STATE_VARIABLE_PS_53);
                }
#line 493 "parser.m"
                *mercury__parser__OpPriority_11 = (MR_Integer) 0;
#line 492 "parser.m"
              }
#line 489 "parser.m"
          }
#line 386 "parser.m"
      }
#line 495 "parser.m"
  }
#line 379 "parser.m"
}

#line 361 "parser.m"
static void MR_CALL 
mercury__parser__do_parse_term_7_p_0(
#line 361 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_27,
#line 361 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_26,
#line 361 "parser.m"
  MR_Integer mercury__parser__MaxPriority_8,
#line 361 "parser.m"
  MR_Word mercury__parser__TermKind_9,
#line 361 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 361 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
#line 361 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
#line 361 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
#line 361 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21)
#line 361 "parser.m"
{
#line 366 "parser.m"
  {
#line 366 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 366 "parser.m"
    MR_Integer mercury__parser__LeftPriority_13;
#line 366 "parser.m"
    MR_Word mercury__parser__LeftTerm0_14;
#line 366 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_22_22;
#line 366 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_23_23;

#line 367 "parser.m"
    {
#line 367 "parser.m"
      mercury__parser__parse_left_term_8_p_0(mercury__parser__TypeInfo_for_T_27, mercury__parser__TypeClassInfo_for_op_table_26, mercury__parser__MaxPriority_8, mercury__parser__TermKind_9, &mercury__parser__LeftPriority_13, &mercury__parser__LeftTerm0_14, mercury__parser__STATE_VARIABLE_TokensLeft_0_18, &mercury__parser__STATE_VARIABLE_TokensLeft_22_22, mercury__parser__STATE_VARIABLE_PS_0_20, &mercury__parser__STATE_VARIABLE_PS_23_23);
    }
#line 373 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__LeftTerm0_14)) == (MR_mktag((MR_Integer) 1))))
#line 374 "parser.m"
      {
#line 376 "parser.m"
        *mercury__parser__Term_10 = mercury__parser__LeftTerm0_14;
#line 374 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_19 = mercury__parser__STATE_VARIABLE_TokensLeft_22_22;
#line 374 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_21 = mercury__parser__STATE_VARIABLE_PS_23_23;
#line 374 "parser.m"
      }
#line 373 "parser.m"
    else
#line 370 "parser.m"
      {
#line 370 "parser.m"
        MR_Word mercury__parser__LeftTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__LeftTerm0_14, (MR_Integer) 0)));

#line 371 "parser.m"
        {
#line 371 "parser.m"
          mercury__parser__parse_rest_9_p_0(mercury__parser__TypeInfo_for_T_27, mercury__parser__TypeClassInfo_for_op_table_26, mercury__parser__MaxPriority_8, mercury__parser__TermKind_9, mercury__parser__LeftPriority_13, mercury__parser__LeftTerm_15, mercury__parser__Term_10, mercury__parser__STATE_VARIABLE_TokensLeft_22_22, mercury__parser__STATE_VARIABLE_TokensLeft_19, mercury__parser__STATE_VARIABLE_PS_23_23, mercury__parser__STATE_VARIABLE_PS_21);
        }
#line 370 "parser.m"
      }
#line 366 "parser.m"
  }
#line 361 "parser.m"
}

#line 334 "parser.m"
static void MR_CALL 
mercury__parser__parse_arg_5_p_0(
#line 334 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_21,
#line 334 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
#line 334 "parser.m"
  MR_Word * mercury__parser__Term_6,
#line 334 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_11,
#line 334 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_12,
#line 334 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_13,
#line 334 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_14)
#line 334 "parser.m"
{
#line 338 "parser.m"
  {
#line 338 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 338 "parser.m"
    MR_Box mercury__parser__OpTable_9;
#line 338 "parser.m"
    MR_Integer mercury__parser__ArgPriority_10;
#line 338 "parser.m"
    MR_Integer mercury__parser__V_15_15;
#line 134 "private_builtin.opt"
    MR_Word mercury__parser__TypeInfo_23_23;
#line 1180 "parser.m"
    MR_String mercury__parser__V_26_26;
#line 1180 "parser.m"
    MR_Word mercury__parser__V_27_27;
#line 1180 "parser.m"
    MR_Word mercury__parser__V_28_28;
#line 37 "ops.int"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
#line 37 "ops.int"
    MR_Box mercury__parser__conv1_V_15_15;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__parse_arg_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_20 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7923 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_23_23  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 1180 "parser.m"
    mercury__parser__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 0)));
#line 1180 "parser.m"
    mercury__parser__OpTable_9 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 1));
#line 1180 "parser.m"
    mercury__parser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 2)));
#line 1180 "parser.m"
    mercury__parser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 3)));
#line 37 "ops.int"
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_20, (MR_Integer) 0)), (MR_Integer) 12)));
#line 37 "ops.int"
    {
#line 37 "ops.int"
      mercury__parser__conv1_V_15_15 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_20), mercury__parser__OpTable_9);
    }
#line 37 "ops.int"
    mercury__parser__V_15_15 = ((MR_Integer) mercury__parser__conv1_V_15_15);
#line 345 "parser.m"
    mercury__parser__ArgPriority_10 = (mercury__parser__V_15_15 + (MR_Integer) 1);
#line 346 "parser.m"
    {
#line 346 "parser.m"
      mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_21, mercury__parser__TypeClassInfo_for_op_table_20, mercury__parser__ArgPriority_10, (MR_Integer) 1, mercury__parser__Term_6, mercury__parser__STATE_VARIABLE_TokensLeft_0_11, mercury__parser__STATE_VARIABLE_TokensLeft_12, mercury__parser__STATE_VARIABLE_PS_0_13, mercury__parser__STATE_VARIABLE_PS_14);
    }
#line 338 "parser.m"
  }
#line 334 "parser.m"
}

#line 325 "parser.m"
static void MR_CALL 
mercury__parser__parse_term_5_p_0(
#line 325 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_21,
#line 325 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
#line 325 "parser.m"
  MR_Word * mercury__parser__Term_6,
#line 325 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_10,
#line 325 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_11,
#line 325 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_12,
#line 325 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_13)
#line 325 "parser.m"
{
#line 329 "parser.m"
  {
#line 329 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 329 "parser.m"
    MR_Box mercury__parser__OpTable_9;
#line 329 "parser.m"
    MR_Integer mercury__parser__V_14_14;
#line 329 "parser.m"
    MR_Integer mercury__parser__V_18_18;
#line 134 "private_builtin.opt"
    MR_Word mercury__parser__TypeInfo_23_23;
#line 1180 "parser.m"
    MR_String mercury__parser__V_26_26;
#line 1180 "parser.m"
    MR_Word mercury__parser__V_27_27;
#line 1180 "parser.m"
    MR_Word mercury__parser__V_28_28;
#line 37 "ops.int"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
#line 37 "ops.int"
    MR_Box mercury__parser__conv1_V_18_18;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__parse_term_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_20 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8016 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_23_23  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 1180 "parser.m"
    mercury__parser__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 0)));
#line 1180 "parser.m"
    mercury__parser__OpTable_9 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 1));
#line 1180 "parser.m"
    mercury__parser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 2)));
#line 1180 "parser.m"
    mercury__parser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 3)));
#line 37 "ops.int"
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_20, (MR_Integer) 0)), (MR_Integer) 12)));
#line 37 "ops.int"
    {
#line 37 "ops.int"
      mercury__parser__conv1_V_18_18 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_20), mercury__parser__OpTable_9);
    }
#line 37 "ops.int"
    mercury__parser__V_18_18 = ((MR_Integer) mercury__parser__conv1_V_18_18);
#line 331 "parser.m"
    mercury__parser__V_14_14 = (mercury__parser__V_18_18 + (MR_Integer) 1);
#line 331 "parser.m"
    {
#line 331 "parser.m"
      mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_21, mercury__parser__TypeClassInfo_for_op_table_20, mercury__parser__V_14_14, (MR_Integer) 0, mercury__parser__Term_6, mercury__parser__STATE_VARIABLE_TokensLeft_0_10, mercury__parser__STATE_VARIABLE_TokensLeft_11, mercury__parser__STATE_VARIABLE_PS_0_12, mercury__parser__STATE_VARIABLE_PS_13);
    }
#line 329 "parser.m"
  }
#line 325 "parser.m"
}

#line 304 "parser.m"
void MR_CALL 
mercury__parser__parse_whole_term_5_p_0(
#line 304 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_25,
#line 304 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_24,
#line 304 "parser.m"
  MR_Word * mercury__parser__Term_6,
#line 304 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_14,
#line 304 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_15,
#line 304 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_16,
#line 304 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_17)
#line 304 "parser.m"
{
#line 309 "parser.m"
  {
#line 309 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 309 "parser.m"
    MR_Word mercury__parser__Term0_9;
#line 309 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_18_18;
#line 309 "parser.m"
    MR_Box mercury__parser__OpTable_35 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 1));
#line 309 "parser.m"
    MR_Integer mercury__parser__V_36_36;
#line 309 "parser.m"
    MR_Integer mercury__parser__V_40_40;
#line 1180 "parser.m"
    MR_String mercury__parser__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 0)));
#line 1180 "parser.m"
    MR_Word mercury__parser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 2)));
#line 1180 "parser.m"
    MR_Word mercury__parser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 3)));
#line 37 "ops.int"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 37 "ops.int"
    MR_Box mercury__parser__conv1_V_40_40;

#line 37 "ops.int"
    {
#line 37 "ops.int"
      mercury__parser__conv1_V_40_40 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_24), mercury__parser__OpTable_35);
    }
#line 37 "ops.int"
    mercury__parser__V_40_40 = ((MR_Integer) mercury__parser__conv1_V_40_40);
#line 331 "parser.m"
    mercury__parser__V_36_36 = (mercury__parser__V_40_40 + (MR_Integer) 1);
#line 331 "parser.m"
    {
#line 331 "parser.m"
      mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_25, mercury__parser__TypeClassInfo_for_op_table_24, mercury__parser__V_36_36, (MR_Integer) 0, &mercury__parser__Term0_9, mercury__parser__STATE_VARIABLE_TokensLeft_0_14, &mercury__parser__STATE_VARIABLE_TokensLeft_18_18, mercury__parser__STATE_VARIABLE_PS_0_16, mercury__parser__STATE_VARIABLE_PS_17);
    }
#line 319 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Term0_9)) == (MR_mktag((MR_Integer) 1))))
#line 321 "parser.m"
      {
#line 322 "parser.m"
        *mercury__parser__Term_6 = mercury__parser__Term0_9;
#line 321 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_15 = mercury__parser__STATE_VARIABLE_TokensLeft_18_18;
#line 321 "parser.m"
      }
#line 319 "parser.m"
    else
#line 315 "parser.m"
      {
#line 315 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_20_20;
#line 313 "parser.m"
        MR_Word mercury__parser__V_21_21;
#line 313 "parser.m"
        MR_Integer mercury__parser___Context_11;

#line 313 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 313 "parser.m"
        if (mercury__parser__succeeded)
#line 313 "parser.m"
          {
#line 313 "parser.m"
            mercury__parser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 0)));
#line 313 "parser.m"
            mercury__parser___Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 1)));
#line 313 "parser.m"
            mercury__parser__STATE_VARIABLE_TokensLeft_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 2)));
#line 313 "parser.m"
            mercury__parser__succeeded = (mercury__parser__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 313 "parser.m"
          }
#line 315 "parser.m"
        if (mercury__parser__succeeded)
#line 314 "parser.m"
          {
#line 314 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_15 = mercury__parser__STATE_VARIABLE_TokensLeft_20_20;
#line 314 "parser.m"
            *mercury__parser__Term_6 = mercury__parser__Term0_9;
#line 314 "parser.m"
          }
#line 315 "parser.m"
        else
#line 316 "parser.m"
          {
#line 1016 "parser.m"
            if ((mercury__parser__STATE_VARIABLE_TokensLeft_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1017 "parser.m"
              {
#line 1018 "parser.m"
                {
#line 1018 "parser.m"
                  MR_Word base;
#line 1018 "parser.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "parser.m"
                  *mercury__parser__Term_6 = base;
#line 1018 "parser.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator or \140.\' expected"));
#line 1018 "parser.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_18_18));
#line 1018 "parser.m"
                }
#line 1017 "parser.m"
                *mercury__parser__STATE_VARIABLE_TokensLeft_15 = mercury__parser__STATE_VARIABLE_TokensLeft_18_18;
#line 1017 "parser.m"
              }
#line 1016 "parser.m"
            else
#line 1013 "parser.m"
              {
#line 1013 "parser.m"
                MR_Word mercury__parser__Token_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 0)));
#line 1013 "parser.m"
                MR_Integer mercury__parser__Context_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 1)));
#line 1013 "parser.m"
                MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_14_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 2)));
#line 1032 "parser.m"
                MR_String mercury__parser__Op_67;
#line 1032 "parser.m"
                MR_Box mercury__parser__OpTable_68;
#line 1180 "parser.m"
                MR_String mercury__parser__V_80_80;
#line 1180 "parser.m"
                MR_Word mercury__parser__V_81_81;
#line 1180 "parser.m"
                MR_Word mercury__parser__V_82_82;

#line 1028 "parser.m"
                *mercury__parser__STATE_VARIABLE_TokensLeft_15 = mercury__parser__STATE_VARIABLE_TokensLeft_18_18;
#line 1031 "parser.m"
                if ((mercury__parser__Token_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 1031 "parser.m"
                  {
#line 1031 "parser.m"
                    mercury__parser__Op_67 = (MR_String) ",";
#line 1031 "parser.m"
                    mercury__parser__succeeded = MR_TRUE;
#line 1031 "parser.m"
                  }
#line 1031 "parser.m"
                else
#line 1031 "parser.m"
                if (((MR_tag((MR_Word) mercury__parser__Token_55)) == (MR_mktag((MR_Integer) 1))))
#line 1030 "parser.m"
                  {
#line 1030 "parser.m"
                    mercury__parser__Op_67 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_55, (MR_Integer) 0)));
#line 1030 "parser.m"
                    mercury__parser__succeeded = MR_TRUE;
#line 1030 "parser.m"
                  }
#line 1031 "parser.m"
                else
#line 1031 "parser.m"
                  mercury__parser__succeeded = MR_FALSE;
#line 1032 "parser.m"
                if (mercury__parser__succeeded)
#line 1032 "parser.m"
                  {
#line 1180 "parser.m"
                    mercury__parser__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_17, (MR_Integer) 0)));
#line 1180 "parser.m"
                    mercury__parser__OpTable_68 = (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_17, (MR_Integer) 1));
#line 1180 "parser.m"
                    mercury__parser__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_17, (MR_Integer) 2)));
#line 1180 "parser.m"
                    mercury__parser__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_17, (MR_Integer) 3)));
#line 23 "ops.int"
                    {
#line 23 "ops.int"
                      MR_Integer mercury__parser__V_69_69;
#line 23 "ops.int"
                      MR_Word mercury__parser__V_70_70;
#line 23 "ops.int"
                      MR_Word mercury__parser__V_71_71;
#line 23 "ops.int"
                      MR_bool MR_CALL (* mercury__parser__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 23 "ops.int"
                      MR_Box mercury__parser__conv5_V_69_69;
#line 23 "ops.int"
                      MR_Box mercury__parser__conv4_V_70_70;
#line 23 "ops.int"
                      MR_Box mercury__parser__conv3_V_71_71;

#line 23 "ops.int"
                      {
#line 23 "ops.int"
                        mercury__parser__succeeded = mercury__parser__func_2(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_24), mercury__parser__OpTable_68, ((MR_Box) (mercury__parser__Op_67)), &mercury__parser__conv5_V_69_69, &mercury__parser__conv4_V_70_70, &mercury__parser__conv3_V_71_71);
                      }
#line 23 "ops.int"
                      if (mercury__parser__succeeded)
#line 23 "ops.int"
                        {
#line 23 "ops.int"
                          mercury__parser__V_69_69 = ((MR_Integer) mercury__parser__conv5_V_69_69);
#line 23 "ops.int"
                          mercury__parser__V_70_70 = ((MR_Word) mercury__parser__conv4_V_70_70);
#line 23 "ops.int"
                          mercury__parser__V_71_71 = ((MR_Word) mercury__parser__conv3_V_71_71);
#line 23 "ops.int"
                          mercury__parser__succeeded = MR_TRUE;
#line 23 "ops.int"
                        }
#line 23 "ops.int"
                    }
#line 1035 "parser.m"
                    if (!(mercury__parser__succeeded))
#line 29 "ops.int"
                      {
#line 29 "ops.int"
                        MR_Integer mercury__parser__V_72_72;
#line 29 "ops.int"
                        MR_Word mercury__parser__V_73_73;
#line 29 "ops.int"
                        MR_bool MR_CALL (* mercury__parser__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 8)));
#line 29 "ops.int"
                        MR_Box mercury__parser__conv8_V_72_72;
#line 29 "ops.int"
                        MR_Box mercury__parser__conv7_V_73_73;

#line 29 "ops.int"
                        {
#line 29 "ops.int"
                          mercury__parser__succeeded = mercury__parser__func_6(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_24), mercury__parser__OpTable_68, ((MR_Box) (mercury__parser__Op_67)), &mercury__parser__conv8_V_72_72, &mercury__parser__conv7_V_73_73);
                        }
#line 29 "ops.int"
                        if (mercury__parser__succeeded)
#line 29 "ops.int"
                          {
#line 29 "ops.int"
                            mercury__parser__V_72_72 = ((MR_Integer) mercury__parser__conv8_V_72_72);
#line 29 "ops.int"
                            mercury__parser__V_73_73 = ((MR_Word) mercury__parser__conv7_V_73_73);
#line 29 "ops.int"
                            mercury__parser__succeeded = MR_TRUE;
#line 29 "ops.int"
                          }
#line 29 "ops.int"
                      }
#line 1032 "parser.m"
                  }
#line 1039 "parser.m"
                if (mercury__parser__succeeded)
#line 1038 "parser.m"
                  {
#line 1038 "parser.m"
                    {
#line 1038 "parser.m"
                      MR_Word base;
#line 1038 "parser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "parser.m"
                      *mercury__parser__Term_6 = base;
#line 1038 "parser.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
#line 1038 "parser.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_15));
#line 1038 "parser.m"
                    }
#line 1038 "parser.m"
                  }
#line 1039 "parser.m"
                else
#line 1040 "parser.m"
                  {
#line 1040 "parser.m"
                    MR_Word base;
#line 1040 "parser.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "parser.m"
                    *mercury__parser__Term_6 = base;
#line 1040 "parser.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator or \140.\' expected"));
#line 1040 "parser.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_15));
#line 1040 "parser.m"
                  }
#line 1013 "parser.m"
              }
#line 316 "parser.m"
          }
#line 315 "parser.m"
      }
#line 309 "parser.m"
  }
#line 304 "parser.m"
}

#line 257 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_for_bad_token_3_p_0(
#line 257 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 257 "parser.m"
  MR_String * mercury__parser__Message_2,
#line 257 "parser.m"
  MR_Integer * mercury__parser__LineNum_3)
#line 257 "parser.m"
{
#line 8376 "parser.c"
  while (MR_TRUE)
#line 8378 "parser.c"
    {
#line 8380 "parser.c"
      /* tailcall optimized into a loop */
#line 8382 "parser.c"
      {
#line 8384 "parser.c"
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 8386 "parser.c"
        MR_Word mercury__parser__Token_4;
#line 8388 "parser.c"
        MR_Integer mercury__parser__LineNum0_5;
#line 8390 "parser.c"
        MR_Word mercury__parser__Tokens_6;

#line 8393 "parser.c"
        if (mercury__parser__succeeded)
#line 8395 "parser.c"
          {
#line 8397 "parser.c"
            mercury__parser__Token_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 8399 "parser.c"
            mercury__parser__LineNum0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
#line 8401 "parser.c"
            mercury__parser__Tokens_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 2)));
#line 266 "parser.m"
#line 266 "parser.m"
            switch (MR_tag((MR_Word) mercury__parser__Token_4)) {
#line 266 "parser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 266 "parser.m"
              case (MR_Integer) 0:
#line 299 "parser.m"
                {
#line 299 "parser.m"
                  /* direct tailcall eliminated */
#line 299 "parser.m"
                  {
#line 299 "parser.m"
                    MR_Word mercury__parser__HeadVar__1__tmp_copy_1 = mercury__parser__Tokens_6;

#line 299 "parser.m"
                    mercury__parser__HeadVar__1_1 = mercury__parser__HeadVar__1__tmp_copy_1;
#line 299 "parser.m"
                  }
#line 299 "parser.m"
                  continue;
#line 299 "parser.m"
                }
#line 266 "parser.m"
                break;
#line 266 "parser.m"
              case (MR_Integer) 1:
#line 266 "parser.m"
              case (MR_Integer) 2:
#line 299 "parser.m"
                {
#line 299 "parser.m"
                  /* direct tailcall eliminated */
#line 299 "parser.m"
                  {
#line 299 "parser.m"
                    MR_Word mercury__parser__HeadVar__1__tmp_copy_1 = mercury__parser__Tokens_6;

#line 299 "parser.m"
                    mercury__parser__HeadVar__1_1 = mercury__parser__HeadVar__1__tmp_copy_1;
#line 299 "parser.m"
                  }
#line 299 "parser.m"
                  continue;
#line 299 "parser.m"
                }
#line 266 "parser.m"
                break;
#line 266 "parser.m"
              case (MR_Integer) 3:
#line 266 "parser.m"
#line 266 "parser.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 0)))) {
#line 266 "parser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 266 "parser.m"
                  case (MR_Integer) 0:
#line 266 "parser.m"
                  case (MR_Integer) 1:
#line 266 "parser.m"
                  case (MR_Integer) 2:
#line 266 "parser.m"
                  case (MR_Integer) 3:
#line 266 "parser.m"
                  case (MR_Integer) 4:
#line 266 "parser.m"
                  case (MR_Integer) 8:
#line 299 "parser.m"
                    {
#line 299 "parser.m"
                      /* direct tailcall eliminated */
#line 299 "parser.m"
                      {
#line 299 "parser.m"
                        MR_Word mercury__parser__HeadVar__1__tmp_copy_1 = mercury__parser__Tokens_6;

#line 299 "parser.m"
                        mercury__parser__HeadVar__1_1 = mercury__parser__HeadVar__1__tmp_copy_1;
#line 299 "parser.m"
                      }
#line 299 "parser.m"
                      continue;
#line 299 "parser.m"
                    }
#line 266 "parser.m"
                    break;
#line 266 "parser.m"
                  case (MR_Integer) 5:
#line 267 "parser.m"
                    {
#line 267 "parser.m"
                      MR_Char mercury__parser__Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));
#line 267 "parser.m"
                      MR_Integer mercury__parser__Code_12;
#line 267 "parser.m"
                      MR_String mercury__parser__Decimal_13;
#line 267 "parser.m"
                      MR_String mercury__parser__Hex_14;
#line 267 "parser.m"
                      MR_Word mercury__parser__V_28_28;
#line 267 "parser.m"
                      MR_Word mercury__parser__V_30_30;
#line 267 "parser.m"
                      MR_Word mercury__parser__V_31_31;
#line 267 "parser.m"
                      MR_Word mercury__parser__V_33_33;
#line 267 "parser.m"
                      MR_Word mercury__parser__V_34_34;
#line 267 "parser.m"
                      MR_Word mercury__parser__V_36_36;

#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__parser__check_for_bad_token_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__parser__Char_11 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8528 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Code_12  = Int;
#line 110 "char.opt"
}
#line 269 "parser.m"
                      {
#line 269 "parser.m"
                        mercury__string__int_to_base_string_3_p_0(mercury__parser__Code_12, (MR_Integer) 10, &mercury__parser__Decimal_13);
                      }
#line 270 "parser.m"
                      {
#line 270 "parser.m"
                        mercury__string__int_to_base_string_3_p_0(mercury__parser__Code_12, (MR_Integer) 16, &mercury__parser__Hex_14);
                      }
#line 272 "parser.m"
                      mercury__parser__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "parser.m"
                      mercury__parser__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__parser_scalar_common_1[1]);
#line 272 "parser.m"
                      {
#line 272 "parser.m"
                        mercury__parser__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_33_33, 0) = ((MR_Box) (mercury__parser__Decimal_13));
#line 272 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_33_33, 1) = ((MR_Box) (mercury__parser__V_34_34));
#line 272 "parser.m"
                      }
#line 272 "parser.m"
                      {
#line 272 "parser.m"
                        mercury__parser__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_31_31, 0) = ((MR_Box) ((MR_String) " ("));
#line 272 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_31_31, 1) = ((MR_Box) (mercury__parser__V_33_33));
#line 272 "parser.m"
                      }
#line 271 "parser.m"
                      {
#line 271 "parser.m"
                        mercury__parser__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_30_30, 0) = ((MR_Box) (mercury__parser__Hex_14));
#line 271 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_30_30, 1) = ((MR_Box) (mercury__parser__V_31_31));
#line 271 "parser.m"
                      }
#line 271 "parser.m"
                      {
#line 271 "parser.m"
                        mercury__parser__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_28_28, 0) = ((MR_Box) ((MR_String) "Syntax error: Illegal character 0x"));
#line 271 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_28_28, 1) = ((MR_Box) (mercury__parser__V_30_30));
#line 271 "parser.m"
                      }
#line 195 "string.opt"
                      {
#line 195 "string.opt"
                        *mercury__parser__Message_2 = mercury__string__append_list_1_f_0(mercury__parser__V_28_28);
                      }
#line 273 "parser.m"
                      *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
#line 267 "parser.m"
                      mercury__parser__succeeded = MR_TRUE;
#line 267 "parser.m"
                    }
#line 266 "parser.m"
                    break;
#line 266 "parser.m"
                  case (MR_Integer) 6:
#line 275 "parser.m"
                    {
#line 275 "parser.m"
                      MR_String mercury__parser__ErrorMessage_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));

#line 276 "parser.m"
                      {
#line 276 "parser.m"
                        mercury__string__append_3_p_2((MR_String) "Syntax error: ", mercury__parser__ErrorMessage_15, mercury__parser__Message_2);
                      }
#line 277 "parser.m"
                      *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
#line 275 "parser.m"
                      mercury__parser__succeeded = MR_TRUE;
#line 275 "parser.m"
                    }
#line 266 "parser.m"
                    break;
#line 266 "parser.m"
                  case (MR_Integer) 7:
#line 262 "parser.m"
                    {
#line 262 "parser.m"
                      MR_Word mercury__parser__IO_Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));
#line 262 "parser.m"
                      MR_String mercury__parser__IO_ErrorMessage_10 = (MR_String) mercury__parser__IO_Error_9;

#line 264 "parser.m"
                      {
#line 264 "parser.m"
                        mercury__string__append_3_p_2((MR_String) "I/O error: ", mercury__parser__IO_ErrorMessage_10, mercury__parser__Message_2);
                      }
#line 265 "parser.m"
                      *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
#line 262 "parser.m"
                      mercury__parser__succeeded = MR_TRUE;
#line 262 "parser.m"
                    }
#line 266 "parser.m"
                    break;
#line 266 "parser.m"
                }
#line 266 "parser.m"
                break;
#line 266 "parser.m"
            }
#line 8650 "parser.c"
          }
#line 8652 "parser.c"
        return mercury__parser__succeeded;
#line 8654 "parser.c"
      }
#line 8656 "parser.c"
      break;
#line 8658 "parser.c"
    }
#line 257 "parser.m"
}

#line 210 "parser.m"
void MR_CALL 
mercury__parser__check_for_errors_5_p_0(
#line 210 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_45,
#line 210 "parser.m"
  MR_Word mercury__parser__Parse_6,
#line 210 "parser.m"
  MR_Word mercury__parser__VarSet_7,
#line 210 "parser.m"
  MR_Word mercury__parser__Tokens_8,
#line 210 "parser.m"
  MR_Word mercury__parser__LeftOverTokens_9,
#line 210 "parser.m"
  MR_Word * mercury__parser__Result_10)
#line 210 "parser.m"
{
#line 240 "parser.m"
  {
#line 240 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 240 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Parse_6)) == (MR_mktag((MR_Integer) 1))))
#line 215 "parser.m"
      {
#line 215 "parser.m"
        MR_String mercury__parser__ErrorMessage_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Parse_6, (MR_Integer) 0)));
#line 215 "parser.m"
        MR_Word mercury__parser__ErrorTokens_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Parse_6, (MR_Integer) 1)));
#line 215 "parser.m"
        MR_String mercury__parser__Message_15;
#line 215 "parser.m"
        MR_Integer mercury__parser__LineNum_16;
#line 220 "parser.m"
        MR_String mercury__parser__BadTokenMessage_13;
#line 220 "parser.m"
        MR_Integer mercury__parser__BadTokenLineNum_14;

#line 217 "parser.m"
        {
#line 217 "parser.m"
          mercury__parser__succeeded = mercury__parser__check_for_bad_token_3_p_0(mercury__parser__Tokens_8, &mercury__parser__BadTokenMessage_13, &mercury__parser__BadTokenLineNum_14);
        }
#line 220 "parser.m"
        if (mercury__parser__succeeded)
#line 218 "parser.m"
          {
#line 218 "parser.m"
            mercury__parser__Message_15 = mercury__parser__BadTokenMessage_13;
#line 219 "parser.m"
            mercury__parser__LineNum_16 = mercury__parser__BadTokenLineNum_14;
#line 218 "parser.m"
          }
#line 220 "parser.m"
        else
#line 228 "parser.m"
        if ((mercury__parser__ErrorTokens_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "parser.m"
          {
#line 232 "parser.m"
            if ((mercury__parser__Tokens_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 233 "parser.m"
              {
#line 234 "parser.m"
                {
#line 234 "parser.m"
                  mercury__require__error_1_p_0((MR_String) "check_for_errors");
#line 234 "parser.m"
                  return;
                }
#line 233 "parser.m"
              }
#line 232 "parser.m"
            else
#line 231 "parser.m"
              {
#line 231 "parser.m"
                MR_Word mercury__parser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_8, (MR_Integer) 0)));
#line 231 "parser.m"
                MR_Word mercury__parser__V_22_22;

#line 231 "parser.m"
                mercury__parser__LineNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_8, (MR_Integer) 1)));
#line 231 "parser.m"
                mercury__parser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_8, (MR_Integer) 2)));
#line 231 "parser.m"
              }
#line 157 "string.opt"
            {
#line 157 "string.opt"
              mercury__string__append_3_p_2((MR_String) "Syntax error: ", mercury__parser__ErrorMessage_11, &mercury__parser__Message_15);
            }
#line 229 "parser.m"
          }
#line 228 "parser.m"
        else
#line 223 "parser.m"
          {
#line 223 "parser.m"
            MR_Word mercury__parser__ErrorTok_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_12, (MR_Integer) 0)));
#line 223 "parser.m"
            MR_String mercury__parser__TokString_20;
#line 223 "parser.m"
            MR_String mercury__parser__V_30_30;
#line 223 "parser.m"
            MR_String mercury__parser__V_31_31;
#line 223 "parser.m"
            MR_Word mercury__parser__V_19_19;

#line 223 "parser.m"
            mercury__parser__LineNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_12, (MR_Integer) 1)));
#line 223 "parser.m"
            mercury__parser__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_12, (MR_Integer) 2)));
#line 224 "parser.m"
            {
#line 224 "parser.m"
              mercury__lexer__token_to_string_2_p_0(mercury__parser__ErrorTok_17, &mercury__parser__TokString_20);
            }
#line 157 "string.opt"
            {
#line 157 "string.opt"
              mercury__string__append_3_p_2((MR_String) ": ", mercury__parser__ErrorMessage_11, &mercury__parser__V_31_31);
            }
#line 157 "string.opt"
            {
#line 157 "string.opt"
              mercury__string__append_3_p_2(mercury__parser__TokString_20, mercury__parser__V_31_31, &mercury__parser__V_30_30);
            }
#line 157 "string.opt"
            {
#line 157 "string.opt"
              mercury__string__append_3_p_2((MR_String) "Syntax error at ", mercury__parser__V_30_30, &mercury__parser__Message_15);
            }
#line 223 "parser.m"
          }
#line 239 "parser.m"
        {
#line 239 "parser.m"
          MR_Word base;
#line 239 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "parser.m"
          *mercury__parser__Result_10 = base;
#line 239 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_15));
#line 239 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_16));
#line 239 "parser.m"
        }
#line 215 "parser.m"
      }
#line 240 "parser.m"
    else
#line 241 "parser.m"
      {
#line 241 "parser.m"
        MR_Word mercury__parser__Term_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Parse_6, (MR_Integer) 0)));
#line 244 "parser.m"
        MR_String mercury__parser__Message_39;
#line 244 "parser.m"
        MR_Integer mercury__parser__LineNum_40;

#line 242 "parser.m"
        {
#line 242 "parser.m"
          mercury__parser__succeeded = mercury__parser__check_for_bad_token_3_p_0(mercury__parser__Tokens_8, &mercury__parser__Message_39, &mercury__parser__LineNum_40);
        }
#line 244 "parser.m"
        if (mercury__parser__succeeded)
#line 243 "parser.m"
          {
#line 243 "parser.m"
            MR_Word base;
#line 243 "parser.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "parser.m"
            *mercury__parser__Result_10 = base;
#line 243 "parser.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_39));
#line 243 "parser.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_40));
#line 243 "parser.m"
          }
#line 244 "parser.m"
        else
#line 250 "parser.m"
        if ((mercury__parser__LeftOverTokens_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 252 "parser.m"
          {
#line 252 "parser.m"
            MR_Word base;
#line 252 "parser.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "parser.m"
            *mercury__parser__Result_10 = base;
#line 252 "parser.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__parser__VarSet_7));
#line 252 "parser.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__parser__Term_23));
#line 252 "parser.m"
          }
#line 250 "parser.m"
        else
#line 246 "parser.m"
          {
#line 246 "parser.m"
            MR_Word mercury__parser__Token_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__LeftOverTokens_9, (MR_Integer) 0)));
#line 246 "parser.m"
            MR_String mercury__parser__Message_33;
#line 246 "parser.m"
            MR_Integer mercury__parser__LineNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__LeftOverTokens_9, (MR_Integer) 1)));
#line 246 "parser.m"
            MR_String mercury__parser__TokString_35;
#line 246 "parser.m"
            MR_Word mercury__parser__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__LeftOverTokens_9, (MR_Integer) 2)));

#line 247 "parser.m"
            {
#line 247 "parser.m"
              mercury__lexer__token_to_string_2_p_0(mercury__parser__Token_24, &mercury__parser__TokString_35);
            }
#line 157 "string.opt"
            {
#line 157 "string.opt"
              mercury__string__append_3_p_2((MR_String) "Syntax error: unexpected ", mercury__parser__TokString_35, &mercury__parser__Message_33);
            }
#line 249 "parser.m"
            {
#line 249 "parser.m"
              MR_Word base;
#line 249 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "parser.m"
              *mercury__parser__Result_10 = base;
#line 249 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_33));
#line 249 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_34));
#line 249 "parser.m"
            }
#line 246 "parser.m"
          }
#line 241 "parser.m"
      }
#line 240 "parser.m"
  }
#line 210 "parser.m"
}

#line 120 "parser.m"
void MR_CALL 
mercury__parser__parse_tokens_with_op_table_4_p_0(
#line 120 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_18,
#line 120 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_17,
#line 120 "parser.m"
  MR_Box mercury__parser__Ops_5,
#line 120 "parser.m"
  MR_String mercury__parser__FileName_6,
#line 120 "parser.m"
  MR_Word mercury__parser__Tokens_7,
#line 120 "parser.m"
  MR_Word * mercury__parser__Result_8)
#line 120 "parser.m"
{
#line 201 "parser.m"
  {
#line 201 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 201 "parser.m"
    if ((mercury__parser__Tokens_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "parser.m"
      *mercury__parser__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 201 "parser.m"
    else
#line 202 "parser.m"
      {
#line 202 "parser.m"
        MR_Word mercury__parser__ParserState0_12;
#line 202 "parser.m"
        MR_Word mercury__parser__Term_13;
#line 202 "parser.m"
        MR_Word mercury__parser__LeftOverTokens_14;
#line 202 "parser.m"
        MR_Word mercury__parser__ParserState_15;
#line 202 "parser.m"
        MR_Word mercury__parser__VarSet_16;
#line 202 "parser.m"
        MR_Word mercury__parser__VarSet_24 = (MR_Word) &mercury__parser_scalar_common_2[2];
#line 202 "parser.m"
        MR_Word mercury__parser__Names_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "parser.m"
        MR_Word mercury__parser__V_3_30 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 202 "parser.m"
        MR_Word mercury__parser__V_4_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "parser.m"
        MR_Word mercury__parser__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1182 "parser.m"
        MR_String mercury__parser__V_47_47;
#line 1182 "parser.m"
        MR_Box mercury__parser__V_48_48;
#line 1182 "parser.m"
        MR_Word mercury__parser__V_49_49;

#line 1147 "parser.m"
        {
#line 1147 "parser.m"
          mercury__parser__ParserState0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 0) = ((MR_Box) (mercury__parser__FileName_6));
#line 1147 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 1) = mercury__parser__Ops_5;
#line 1147 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 2) = ((MR_Box) (mercury__parser__VarSet_24));
#line 1147 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 3) = ((MR_Box) (mercury__parser__Names_25));
#line 1147 "parser.m"
        }
#line 204 "parser.m"
        {
#line 204 "parser.m"
          mercury__parser__parse_whole_term_5_p_0(mercury__parser__TypeInfo_for_T_18, mercury__parser__TypeClassInfo_for_op_table_17, &mercury__parser__Term_13, mercury__parser__Tokens_7, &mercury__parser__LeftOverTokens_14, mercury__parser__ParserState0_12, &mercury__parser__ParserState_15);
        }
#line 1182 "parser.m"
        mercury__parser__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 0)));
#line 1182 "parser.m"
        mercury__parser__V_48_48 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 1));
#line 1182 "parser.m"
        mercury__parser__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 2)));
#line 1182 "parser.m"
        mercury__parser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 3)));
#line 207 "parser.m"
        {
#line 207 "parser.m"
          mercury__parser__check_for_errors_5_p_0(mercury__parser__TypeInfo_for_T_18, mercury__parser__Term_13, mercury__parser__VarSet_16, mercury__parser__Tokens_7, mercury__parser__LeftOverTokens_14, mercury__parser__Result_8);
        }
#line 202 "parser.m"
      }
#line 201 "parser.m"
  }
#line 120 "parser.m"
}

#line 116 "parser.m"
void MR_CALL 
mercury__parser__parse_tokens_3_p_0(
#line 116 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_8,
#line 116 "parser.m"
  MR_String mercury__parser__FileName_4,
#line 116 "parser.m"
  MR_Word mercury__parser__Tokens_5,
#line 116 "parser.m"
  MR_Word * mercury__parser__Result_6)
#line 116 "parser.m"
{
#line 193 "parser.m"
  {
#line 193 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 193 "parser.m"
    MR_Word mercury__parser__TypeClassInfo_for_op_table_9;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9031 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_9 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 194 "parser.m"
    {
#line 194 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_8, mercury__parser__TypeClassInfo_for_op_table_9, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_4, mercury__parser__Tokens_5, mercury__parser__Result_6);
    }
#line 193 "parser.m"
  }
#line 116 "parser.m"
}

#line 108 "parser.m"
void MR_CALL 
mercury__parser__read_term_from_substring_with_op_table_7_p_0(
#line 108 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_17,
#line 108 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_16,
#line 108 "parser.m"
  MR_Box mercury__parser__Ops_8,
#line 108 "parser.m"
  MR_String mercury__parser__FileName_9,
#line 108 "parser.m"
  MR_String mercury__parser__String_10,
#line 108 "parser.m"
  MR_Integer mercury__parser__Len_11,
#line 108 "parser.m"
  MR_Word mercury__parser__StartPos_12,
#line 108 "parser.m"
  MR_Word * mercury__parser__EndPos_13,
#line 108 "parser.m"
  MR_Word * mercury__parser__Result_14)
#line 108 "parser.m"
{
#line 187 "parser.m"
  {
#line 187 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 187 "parser.m"
    MR_Word mercury__parser__Tokens_15;

#line 188 "parser.m"
    {
#line 188 "parser.m"
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_10, mercury__parser__Len_11, &mercury__parser__Tokens_15, mercury__parser__StartPos_12, mercury__parser__EndPos_13);
    }
#line 189 "parser.m"
    {
#line 189 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_17, mercury__parser__TypeClassInfo_for_op_table_16, mercury__parser__Ops_8, mercury__parser__FileName_9, mercury__parser__Tokens_15, mercury__parser__Result_14);
    }
#line 187 "parser.m"
  }
#line 108 "parser.m"
}

#line 102 "parser.m"
void MR_CALL 
mercury__parser__read_term_from_substring_6_p_0(
#line 102 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_14,
#line 102 "parser.m"
  MR_String mercury__parser__FileName_7,
#line 102 "parser.m"
  MR_String mercury__parser__String_8,
#line 102 "parser.m"
  MR_Integer mercury__parser__Len_9,
#line 102 "parser.m"
  MR_Word mercury__parser__StartPos_10,
#line 102 "parser.m"
  MR_Word * mercury__parser__EndPos_11,
#line 102 "parser.m"
  MR_Word * mercury__parser__Result_12)
#line 102 "parser.m"
{
#line 182 "parser.m"
  {
#line 182 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 182 "parser.m"
    MR_Word mercury__parser__TypeClassInfo_for_op_table_15;
#line 182 "parser.m"
    MR_Word mercury__parser__Tokens_23;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9118 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_15 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 188 "parser.m"
    {
#line 188 "parser.m"
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_8, mercury__parser__Len_9, &mercury__parser__Tokens_23, mercury__parser__StartPos_10, mercury__parser__EndPos_11);
    }
#line 189 "parser.m"
    {
#line 189 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__TypeClassInfo_for_op_table_15, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_7, mercury__parser__Tokens_23, mercury__parser__Result_12);
    }
#line 182 "parser.m"
  }
#line 102 "parser.m"
}

#line 96 "parser.m"
void MR_CALL 
mercury__parser__read_term_from_string_with_op_table_5_p_0(
#line 96 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_17,
#line 96 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_16,
#line 96 "parser.m"
  MR_Box mercury__parser__Ops_6,
#line 96 "parser.m"
  MR_String mercury__parser__FileName_7,
#line 96 "parser.m"
  MR_String mercury__parser__String_8,
#line 96 "parser.m"
  MR_Word * mercury__parser__EndPos_9,
#line 96 "parser.m"
  MR_Word * mercury__parser__Result_10)
#line 96 "parser.m"
{
#line 176 "parser.m"
  {
#line 176 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 176 "parser.m"
    MR_Integer mercury__parser__Len_11;
#line 176 "parser.m"
    MR_Word mercury__parser__StartPos_12;
#line 176 "parser.m"
    MR_Word mercury__parser__Tokens_25;

#line 701 "string.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_from_string_with_op_table_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parser__String_8 ;
		{
#line 701 "string.opt"

    Length = strlen(Str);

#line 9178 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Len_11  = Length;
#line 701 "string.opt"
}
#line 178 "parser.m"
    mercury__parser__StartPos_12 = (MR_Word) &mercury__parser_scalar_common_2[1];
#line 188 "parser.m"
    {
#line 188 "parser.m"
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_8, mercury__parser__Len_11, &mercury__parser__Tokens_25, mercury__parser__StartPos_12, mercury__parser__EndPos_9);
    }
#line 189 "parser.m"
    {
#line 189 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_17, mercury__parser__TypeClassInfo_for_op_table_16, mercury__parser__Ops_6, mercury__parser__FileName_7, mercury__parser__Tokens_25, mercury__parser__Result_10);
    }
#line 176 "parser.m"
  }
#line 96 "parser.m"
}

#line 90 "parser.m"
void MR_CALL 
mercury__parser__read_term_from_string_4_p_0(
#line 90 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_10,
#line 90 "parser.m"
  MR_String mercury__parser__FileName_5,
#line 90 "parser.m"
  MR_String mercury__parser__String_6,
#line 90 "parser.m"
  MR_Word * mercury__parser__EndPos_7,
#line 90 "parser.m"
  MR_Word * mercury__parser__Result_8)
#line 90 "parser.m"
{
#line 172 "parser.m"
  {
#line 172 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 172 "parser.m"
    MR_Word mercury__parser__TypeClassInfo_for_op_table_11;
#line 172 "parser.m"
    MR_Integer mercury__parser__Len_17;
#line 172 "parser.m"
    MR_Word mercury__parser__StartPos_18;
#line 172 "parser.m"
    MR_Word mercury__parser__Tokens_29;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9232 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_11 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 701 "string.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_from_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parser__String_6 ;
		{
#line 701 "string.opt"

    Length = strlen(Str);

#line 9247 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Len_17  = Length;
#line 701 "string.opt"
}
#line 178 "parser.m"
    mercury__parser__StartPos_18 = (MR_Word) &mercury__parser_scalar_common_2[1];
#line 188 "parser.m"
    {
#line 188 "parser.m"
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_6, mercury__parser__Len_17, &mercury__parser__Tokens_29, mercury__parser__StartPos_18, mercury__parser__EndPos_7);
    }
#line 189 "parser.m"
    {
#line 189 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_10, mercury__parser__TypeClassInfo_for_op_table_11, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_5, mercury__parser__Tokens_29, mercury__parser__Result_8);
    }
#line 172 "parser.m"
  }
#line 90 "parser.m"
}

#line 76 "parser.m"
void MR_CALL 
mercury__parser__read_term_filename_with_op_table_5_p_0(
#line 76 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_15,
#line 76 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_14,
#line 76 "parser.m"
  MR_Box mercury__parser__Ops_6,
#line 76 "parser.m"
  MR_String mercury__parser__FileName_7,
#line 76 "parser.m"
  MR_Word * mercury__parser__Result_8)
#line 76 "parser.m"
{
#line 168 "parser.m"
  {
#line 168 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 168 "parser.m"
    MR_Word mercury__parser__Tokens_10;
#line 168 "parser.m"
    MR_Word mercury__parser__V_6_19;
#line 168 "parser.m"
    MR_Word mercury__parser__V_7_21;
#line 168 "parser.m"
    MR_Integer mercury__parser__V_8_22;
#line 168 "parser.m"
    MR_Word mercury__parser__V_12_39;
#line 168 "parser.m"
    MR_Char mercury__parser__V_13_40;
#line 168 "parser.m"
    MR_Integer mercury__parser__V_10_49;
#line 168 "parser.m"
    MR_Box mercury__parser__V_5_60;

#line 840 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{
#line 840 "io.opt"

    Stream = mercury_current_text_input();

#line 9318 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_5_60  = (MR_Box) Stream;
#line 840 "io.opt"
}
#line 837 "io.opt"
    mercury__parser__V_6_19 = (MR_Word) mercury__parser__V_5_60;
#line 1153 "io.opt"
    {
#line 1153 "io.opt"
      mercury__io__read_char_code_2_4_p_0(mercury__parser__V_5_60, &mercury__parser__V_10_49);
    }
#line 1159 "io.opt"
    mercury__parser__succeeded = (mercury__parser__V_10_49 == (MR_Integer) -1);
#line 1165 "io.opt"
    if (mercury__parser__succeeded)
#line 1161 "io.opt"
      {
#line 1161 "io.opt"
        mercury__parser__V_12_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 35 "char.opt"
        {
#line 35 "char.opt"
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__parser__V_13_40);
        }
#line 1161 "io.opt"
      }
#line 1165 "io.opt"
    else
#line 1172 "io.opt"
      {
#line 1172 "io.opt"
        MR_Char mercury__parser__V_11_52;

#line 103 "char.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__parser__V_10_49 ;
		{
#line 103 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 9369 "parser.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__parser__V_11_52  = Character;
#line 103 "char.opt"
	}
mercury__parser__succeeded  = SUCCESS_INDICATOR;
}
#line 1172 "io.opt"
        if (mercury__parser__succeeded)
#line 1169 "io.opt"
          {
#line 1169 "io.opt"
            mercury__parser__V_12_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1170 "io.opt"
            mercury__parser__V_13_40 = mercury__parser__V_11_52;
#line 1169 "io.opt"
          }
#line 1172 "io.opt"
        else
#line 1173 "io.opt"
          {
#line 1173 "io.opt"
            MR_String mercury__parser__V_12_54;
#line 1173 "io.opt"
            MR_Word mercury__parser__V_19_55;
#line 1173 "io.opt"
            MR_Box mercury__parser__V_8_67;

#line 787 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_5_p_0

	MR_Integer Error;

		{
#line 787 "io.opt"
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for.  Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}
#line 9417 "parser.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__parser__V_8_67 );
#line 787 "io.opt"
}
#line 952 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__parser__V_8_67 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{
#line 952 "io.opt"

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);

#line 9439 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_12_54  = Msg;
#line 952 "io.opt"
}
#line 1176 "io.opt"
            mercury__parser__V_19_55 = (MR_Word) mercury__parser__V_12_54;
#line 1175 "io.opt"
            {
#line 1175 "io.opt"
              mercury__parser__V_12_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "io.opt"
              MR_hl_field(MR_mktag(1), mercury__parser__V_12_39, 0) = ((MR_Box) (mercury__parser__V_19_55));
#line 1175 "io.opt"
            }
#line 35 "char.opt"
            {
#line 35 "char.opt"
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__parser__V_13_40);
            }
#line 1173 "io.opt"
          }
#line 1172 "io.opt"
      }
#line 63 "lexer.opt"
#line 63 "lexer.opt"
    switch (MR_tag((MR_Word) mercury__parser__V_12_39)) {
#line 63 "lexer.opt"
      default: /*NOTREACHED*/ MR_assert(0);
#line 63 "lexer.opt"
      case (MR_Integer) 0:
#line 63 "lexer.opt"
#line 63 "lexer.opt"
        switch (MR_unmkbody(mercury__parser__V_12_39)) {
#line 63 "lexer.opt"
          default: /*NOTREACHED*/ MR_assert(0);
#line 63 "lexer.opt"
          case (MR_Integer) 0:
#line 73 "lexer.opt"
            {
#line 73 "lexer.opt"
              MR_Word mercury__parser__V_15_43;

#line 99 "lexer.opt"
              if ((((MR_Unsigned) (mercury__parser__V_13_40 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
#line 99 "lexer.opt"
                if ((((mercury__parser_scalar_common_6[0])[(((mercury__parser__V_13_40 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__parser__V_13_40 - (MR_Integer) 9)) & (MR_Integer) 31))))))
#line 99 "lexer.opt"
                  {
#line 99 "lexer.opt"
                    mercury__parser__V_15_43 = ((&mercury__parser_vector_common_5[0 + (mercury__parser__V_13_40 - (MR_Integer) 9)]))->mercury__parser__vector_common_type_5_0__vct_5_f_0;
#line 99 "lexer.opt"
                    mercury__parser__succeeded = MR_TRUE;
#line 99 "lexer.opt"
                  }
#line 99 "lexer.opt"
                else
#line 99 "lexer.opt"
                  mercury__parser__succeeded = MR_FALSE;
#line 99 "lexer.opt"
              else
#line 99 "lexer.opt"
                mercury__parser__succeeded = MR_FALSE;
#line 73 "lexer.opt"
              if (mercury__parser__succeeded)
#line 72 "lexer.opt"
                {
#line 72 "lexer.opt"
                  mercury__lexer__execute_get_token_action_8_p_0(mercury__parser__V_6_19, mercury__parser__V_13_40, mercury__parser__V_15_43, (MR_Integer) 1, &mercury__parser__V_7_21, &mercury__parser__V_8_22);
                }
#line 73 "lexer.opt"
              else
#line 74 "lexer.opt"
                {
#line 74 "lexer.opt"
                  MR_Box mercury__parser__V_5_96 = (MR_Box) mercury__parser__V_6_19;

#line 764 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__parser__V_5_96 ;
		{
#line 764 "io.opt"

    LineNum = MR_line_number(*Stream);

#line 9531 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_8_22  = LineNum;
#line 764 "io.opt"
}
#line 75 "lexer.opt"
                  {
#line 75 "lexer.opt"
                    mercury__parser__V_7_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 75 "lexer.opt"
                    MR_hl_field(MR_mktag(3), mercury__parser__V_7_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 75 "lexer.opt"
                    MR_hl_field(MR_mktag(3), mercury__parser__V_7_21, 1) = ((MR_Box) (MR_Word) (mercury__parser__V_13_40));
#line 75 "lexer.opt"
                  }
#line 74 "lexer.opt"
                }
#line 73 "lexer.opt"
            }
#line 63 "lexer.opt"
            break;
#line 63 "lexer.opt"
          case (MR_Integer) 1:
#line 64 "lexer.opt"
            {
#line 64 "lexer.opt"
              MR_Box mercury__parser__V_5_78 = (MR_Box) mercury__parser__V_6_19;

#line 764 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__parser__V_5_78 ;
		{
#line 764 "io.opt"

    LineNum = MR_line_number(*Stream);

#line 9574 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_8_22  = LineNum;
#line 764 "io.opt"
}
#line 66 "lexer.opt"
              mercury__parser__V_7_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 64 "lexer.opt"
            }
#line 63 "lexer.opt"
            break;
#line 63 "lexer.opt"
        }
#line 63 "lexer.opt"
        break;
#line 63 "lexer.opt"
      case (MR_Integer) 1:
#line 60 "lexer.opt"
        {
#line 60 "lexer.opt"
          MR_Word mercury__parser__V_14_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_12_39, (MR_Integer) 0)));
#line 60 "lexer.opt"
          MR_Box mercury__parser__V_5_86 = (MR_Box) mercury__parser__V_6_19;

#line 764 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__parser__V_5_86 ;
		{
#line 764 "io.opt"

    LineNum = MR_line_number(*Stream);

#line 9613 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_8_22  = LineNum;
#line 764 "io.opt"
}
#line 62 "lexer.opt"
          {
#line 62 "lexer.opt"
            mercury__parser__V_7_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 62 "lexer.opt"
            MR_hl_field(MR_mktag(3), mercury__parser__V_7_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 62 "lexer.opt"
            MR_hl_field(MR_mktag(3), mercury__parser__V_7_21, 1) = ((MR_Box) (mercury__parser__V_14_42));
#line 62 "lexer.opt"
          }
#line 60 "lexer.opt"
        }
#line 63 "lexer.opt"
        break;
#line 63 "lexer.opt"
    }
#line 82 "lexer.opt"
    {
#line 82 "lexer.opt"
      mercury__lexer__get_token_list_2_6_p_0(mercury__parser__V_6_19, mercury__parser__V_7_21, mercury__parser__V_8_22, &mercury__parser__Tokens_10);
    }
#line 170 "parser.m"
    {
#line 170 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_15, mercury__parser__TypeClassInfo_for_op_table_14, mercury__parser__Ops_6, mercury__parser__FileName_7, mercury__parser__Tokens_10, mercury__parser__Result_8);
    }
#line 168 "parser.m"
  }
#line 76 "parser.m"
}

#line 69 "parser.m"
void MR_CALL 
mercury__parser__read_term_filename_4_p_0(
#line 69 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_12,
#line 69 "parser.m"
  MR_String mercury__parser__FileName_5,
#line 69 "parser.m"
  MR_Word * mercury__parser__Result_6)
#line 69 "parser.m"
{
#line 164 "parser.m"
  {
#line 164 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 164 "parser.m"
    MR_Word mercury__parser__TypeClassInfo_for_op_table_13;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9671 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_13 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 165 "parser.m"
    {
#line 165 "parser.m"
      mercury__parser__read_term_filename_with_op_table_5_p_0(mercury__parser__TypeInfo_for_T_12, mercury__parser__TypeClassInfo_for_op_table_13, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_5, mercury__parser__Result_6);
    }
#line 164 "parser.m"
  }
#line 69 "parser.m"
}

#line 59 "parser.m"
void MR_CALL 
mercury__parser__read_term_with_op_table_4_p_0(
#line 59 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_14,
#line 59 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_13,
#line 59 "parser.m"
  MR_Box mercury__parser__Ops_5,
#line 59 "parser.m"
  MR_Word * mercury__parser__Result_6)
#line 59 "parser.m"
{
#line 160 "parser.m"
  {
#line 160 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 160 "parser.m"
    MR_String mercury__parser__FileName_8;
#line 160 "parser.m"
    MR_Box mercury__parser__V_6_19;

#line 840 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{
#line 840 "io.opt"

    Stream = mercury_current_text_input();

#line 9716 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_6_19  = (MR_Box) Stream;
#line 840 "io.opt"
}
#line 937 "io.opt"
    {
#line 937 "io.opt"
      mercury__io__stream_name_4_p_0(mercury__parser__V_6_19, &mercury__parser__FileName_8);
    }
#line 162 "parser.m"
    {
#line 162 "parser.m"
      mercury__parser__read_term_filename_with_op_table_5_p_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__TypeClassInfo_for_op_table_13, mercury__parser__Ops_5, mercury__parser__FileName_8, mercury__parser__Result_6);
    }
#line 160 "parser.m"
  }
#line 59 "parser.m"
}

#line 52 "parser.m"
void MR_CALL 
mercury__parser__read_term_3_p_0(
#line 52 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_12,
#line 52 "parser.m"
  MR_Word * mercury__parser__Result_4)
#line 52 "parser.m"
{
#line 155 "parser.m"
  {
#line 155 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 155 "parser.m"
    MR_Word mercury__parser__TypeClassInfo_for_op_table_13;
#line 155 "parser.m"
    MR_String mercury__parser__FileName_6;
#line 155 "parser.m"
    MR_Box mercury__parser__V_6_18;

#line 840 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_3_p_0

	MercuryFilePtr Stream;

		{
#line 840 "io.opt"

    Stream = mercury_current_text_input();

#line 9769 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_6_18  = (MR_Box) Stream;
#line 840 "io.opt"
}
#line 937 "io.opt"
    {
#line 937 "io.opt"
      mercury__io__stream_name_4_p_0(mercury__parser__V_6_18, &mercury__parser__FileName_6);
    }
#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9783 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_13 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 157 "parser.m"
    {
#line 157 "parser.m"
      mercury__parser__read_term_filename_with_op_table_5_p_0(mercury__parser__TypeInfo_for_T_12, mercury__parser__TypeClassInfo_for_op_table_13, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_6, mercury__parser__Result_4);
    }
#line 155 "parser.m"
  }
#line 52 "parser.m"
}

void mercury__parser__init(void)
{
}

void mercury__parser__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__parser__parser__type_ctor_info_parse_1);
	MR_register_type_ctor_info(&mercury__parser__parser__type_ctor_info_parser_state_2);
	MR_register_type_ctor_info(&mercury__parser__parser__type_ctor_info_term_kind_0);
}

void mercury__parser__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parser. */
