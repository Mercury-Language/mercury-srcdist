/*
** Automatically generated from `parser.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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

#line 1115 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
#line 1115 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_24,
#line 1115 "parser.m"
  MR_String mercury__parser__VarName_5,
#line 1115 "parser.m"
  MR_Word * mercury__parser__Var_6,
#line 1115 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_ParserState_0_13,
#line 1115 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_ParserState_14);

#line 1008 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1008 "parser.m"
  MR_Word mercury__parser__ParserState_4,
#line 1008 "parser.m"
  MR_Integer mercury__parser__TokenContext_5,
#line 1008 "parser.m"
  MR_Word * mercury__parser__TermContext_6);

#line 976 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(
#line 976 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_25,
#line 976 "parser.m"
  MR_Word mercury__parser__Token_8,
#line 976 "parser.m"
  MR_Integer mercury__parser__Context_9,
#line 976 "parser.m"
  MR_String mercury__parser__UsualMessage_10,
#line 976 "parser.m"
  MR_Word * mercury__parser__Error_11,
#line 976 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
#line 976 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
#line 976 "parser.m"
  MR_Word mercury__parser__PS_13);

#line 962 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 962 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_16,
#line 962 "parser.m"
  MR_String mercury__parser__UsualMessage_6,
#line 962 "parser.m"
  MR_Word * mercury__parser__Error_7,
#line 962 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_12,
#line 962 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_13,
#line 962 "parser.m"
  MR_Word mercury__parser__PS_9);

#line 789 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
#line 789 "parser.m"
  MR_Word mercury__parser__Term_3,
#line 789 "parser.m"
  MR_Word * mercury__parser__ArgTerms_4);

#line 588 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_9_p_0(
#line 588 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_44,
#line 588 "parser.m"
  MR_Word mercury__parser__Qualifier0_10,
#line 588 "parser.m"
  MR_Word * mercury__parser__Qualifier_11,
#line 588 "parser.m"
  MR_Word mercury__parser__OpCtxt0_12,
#line 588 "parser.m"
  MR_String mercury__parser__OpName0_13,
#line 588 "parser.m"
  MR_String * mercury__parser__OpName_14,
#line 588 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_26,
#line 588 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_27,
#line 588 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_28,
#line 588 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_29);

#line 1017 "parser.m"
static void MR_CALL 
mercury__parser__could_start_term_2_p_0(
#line 1017 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1017 "parser.m"
  MR_Word * mercury__parser__HeadVar__2_2);

#line 1001 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_priority_3_p_0(
#line 1001 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1001 "parser.m"
  MR_Integer mercury__parser__MaxPriority_2,
#line 1001 "parser.m"
  MR_Integer mercury__parser__Priority_3);

#line 917 "parser.m"
static void MR_CALL 
mercury__parser__parse_args_5_p_0(
#line 917 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_35,
#line 917 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_34,
#line 917 "parser.m"
  MR_Word * mercury__parser__List_6,
#line 917 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
#line 917 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
#line 917 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
#line 917 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22);

#line 863 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_2_6_p_0(
#line 863 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_68,
#line 863 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_67,
#line 863 "parser.m"
  MR_Word mercury__parser__Arg_7,
#line 863 "parser.m"
  MR_Word * mercury__parser__List_8,
#line 863 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
#line 863 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
#line 863 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_23,
#line 863 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_24);

#line 848 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_5_p_0(
#line 848 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_22,
#line 848 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_21,
#line 848 "parser.m"
  MR_Word * mercury__parser__List_6,
#line 848 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_13,
#line 848 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_14,
#line 848 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_15,
#line 848 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_16);

#line 828 "parser.m"
static void MR_CALL 
mercury__parser__parse_special_atom_7_p_0(
#line 828 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_32,
#line 828 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_31,
#line 828 "parser.m"
  MR_String mercury__parser__Atom_8,
#line 828 "parser.m"
  MR_Word mercury__parser__TermContext_9,
#line 828 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 828 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
#line 828 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
#line 828 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
#line 828 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21);

#line 799 "parser.m"
static void MR_CALL 
mercury__parser__check_for_higher_order_term_7_p_0(
#line 799 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_36,
#line 799 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_35,
#line 799 "parser.m"
  MR_Word mercury__parser__Term0_8,
#line 799 "parser.m"
  MR_Integer mercury__parser__Context_9,
#line 799 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 799 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
#line 799 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
#line 799 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_23,
#line 799 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_24);

#line 660 "parser.m"
static MR_bool MR_CALL 
mercury__parser__parse_simple_term_2_8_p_0(
#line 660 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_131,
#line 660 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_130,
#line 660 "parser.m"
  MR_Word mercury__parser__Token_9,
#line 660 "parser.m"
  MR_Integer mercury__parser__Context_10,
#line 660 "parser.m"
  MR_Integer mercury__parser__Prec_11,
#line 660 "parser.m"
  MR_Word * mercury__parser__Term_12,
#line 660 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_40,
#line 660 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_41,
#line 660 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_42,
#line 660 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_43);

#line 625 "parser.m"
static void MR_CALL 
mercury__parser__parse_simple_term_8_p_0(
#line 625 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_27,
#line 625 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_26,
#line 625 "parser.m"
  MR_Word mercury__parser__Token_9,
#line 625 "parser.m"
  MR_Integer mercury__parser__Context_10,
#line 625 "parser.m"
  MR_Integer mercury__parser__Priority_11,
#line 625 "parser.m"
  MR_Word * mercury__parser__Term_12,
#line 625 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_16,
#line 625 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_17,
#line 625 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_18,
#line 625 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_19);

#line 567 "parser.m"
static MR_bool MR_CALL 
mercury__parser__parse_backquoted_operator_7_p_0(
#line 567 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_31,
#line 567 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_30,
#line 567 "parser.m"
  MR_Word * mercury__parser__Qualifier_8,
#line 567 "parser.m"
  MR_String * mercury__parser__OpName_9,
#line 567 "parser.m"
  MR_Word * mercury__parser__VariableTerm_10,
#line 567 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
#line 567 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
#line 567 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
#line 567 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22);

#line 483 "parser.m"
static void MR_CALL 
mercury__parser__parse_rest_9_p_0(
#line 483 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_84,
#line 483 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_83,
#line 483 "parser.m"
  MR_Integer mercury__parser__MaxPriority_10,
#line 483 "parser.m"
  MR_Word mercury__parser__TermKind_11,
#line 483 "parser.m"
  MR_Integer mercury__parser__LeftPriority_12,
#line 483 "parser.m"
  MR_Word mercury__parser__LeftTerm_13,
#line 483 "parser.m"
  MR_Word * mercury__parser__Term_14,
#line 483 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_40,
#line 483 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_41,
#line 483 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_42,
#line 483 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_43);

#line 376 "parser.m"
static void MR_CALL 
mercury__parser__parse_left_term_8_p_0(
#line 376 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_123,
#line 376 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_122,
#line 376 "parser.m"
  MR_Integer mercury__parser__MaxPriority_9,
#line 376 "parser.m"
  MR_Word mercury__parser__TermKind_10,
#line 376 "parser.m"
  MR_Integer * mercury__parser__OpPriority_11,
#line 376 "parser.m"
  MR_Word * mercury__parser__Term_12,
#line 376 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_53,
#line 376 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_54,
#line 376 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_55,
#line 376 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_56);

#line 358 "parser.m"
static void MR_CALL 
mercury__parser__parse_term_2_7_p_0(
#line 358 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_27,
#line 358 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_26,
#line 358 "parser.m"
  MR_Integer mercury__parser__MaxPriority_8,
#line 358 "parser.m"
  MR_Word mercury__parser__TermKind_9,
#line 358 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 358 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
#line 358 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
#line 358 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
#line 358 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21);

#line 331 "parser.m"
static void MR_CALL 
mercury__parser__parse_arg_5_p_0(
#line 331 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_21,
#line 331 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
#line 331 "parser.m"
  MR_Word * mercury__parser__Term_6,
#line 331 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_11,
#line 331 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_12,
#line 331 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_13,
#line 331 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_14);

#line 322 "parser.m"
static void MR_CALL 
mercury__parser__parse_term_5_p_0(
#line 322 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_21,
#line 322 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
#line 322 "parser.m"
  MR_Word * mercury__parser__Term_6,
#line 322 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_10,
#line 322 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_11,
#line 322 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_12,
#line 322 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_13);

#line 254 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_for_bad_token_3_p_0(
#line 254 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 254 "parser.m"
  MR_String * mercury__parser__Message_2,
#line 254 "parser.m"
  MR_Integer * mercury__parser__LineNum_3);


static /* final */ const MR_Box mercury__parser_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__parser_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__parser_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__parser_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__parser_scalar_common_5[5][1];


#line 703 "parser.m"
/* sealed */ struct mercury__parser__vector_common_type_6_0_s {
#line 703 "parser.m"
  const MR_Word mercury__parser__vector_common_type_6_0__vct_6_f_0;
#line 703 "parser.m"
};

static /* final */ const struct mercury__parser__vector_common_type_6_0_s mercury__parser_vector_common_6[4];



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

static /* final */ const MR_Box mercury__parser_scalar_common_5[5][1] = {
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


static /* final */ const struct mercury__parser__vector_common_type_6_0_s mercury__parser_vector_common_6[4] = {
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



#line 779 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 784 "parser.c"
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

#line 799 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__lexer__lexer__type_ctor_info_token_list_0
};

#line 805 "parser.c"
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

#line 820 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_0[1] = {
  &mercury__parser__parser__du_functor_desc_parse_1_0
};

#line 825 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_1[1] = {
  &mercury__parser__parser__du_functor_desc_parse_1_1
};

#line 830 "parser.c"
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

#line 844 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_parse_1[2] = {
  &mercury__parser__parser__du_functor_desc_parse_1_1,
  &mercury__parser__parser__du_functor_desc_parse_1_0
};

#line 850 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_parse_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 856 "parser.c"
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

#line 873 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__varset__pti_varset_1__pseudo_2 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 881 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__term__pti_var_1__pseudo_2 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 889 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__parser__term__pti_var_1__pseudo_2
  }
};

#line 898 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parser_state_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__parser__varset__pti_varset_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2
};

#line 906 "parser.c"
static const MR_ConstString mercury__parser__parser__field_names_parser_state_2_0[4] = {
  (MR_String) "ps_stream_name",
  (MR_String) "ps_ops_table",
  (MR_String) "ps_varset",
  (MR_String) "ps_var_names"
};

#line 914 "parser.c"
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

#line 929 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parser_state_2_0[1] = {
  &mercury__parser__parser__du_functor_desc_parser_state_2_0
};

#line 934 "parser.c"
static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_parser_state_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__parser__parser__du_stag_ordered_parser_state_2_0
  }
};

#line 943 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_parser_state_2[1] = {
  &mercury__parser__parser__du_functor_desc_parser_state_2_0
};

#line 948 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_parser_state_2[1] = {
  (MR_Integer) 0
};

#line 953 "parser.c"
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

#line 970 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_0 = {
  (MR_String) "ordinary_term",
  (MR_Integer) 0
};

#line 976 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_1 = {
  (MR_String) "argument",
  (MR_Integer) 1
};

#line 982 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_2 = {
  (MR_String) "list_elem",
  (MR_Integer) 2
};

#line 988 "parser.c"
static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_value_ordered_term_kind_0[3] = {
  &mercury__parser__parser__enum_functor_desc_term_kind_0_0,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_1,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_2
};

#line 995 "parser.c"
static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_name_ordered_term_kind_0[3] = {
  &mercury__parser__parser__enum_functor_desc_term_kind_0_1,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_2,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_0
};

#line 1002 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_term_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1009 "parser.c"
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

#line 1026 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0_10001(
#line 1029 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1031 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1033 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3)
#line 1035 "parser.c"
{
#line 1037 "parser.c"
  {
#line 1039 "parser.c"
    MR_bool mercury__parser__succeeded;

#line 1042 "parser.c"
    {
#line 1044 "parser.c"
      mercury__parser__succeeded = mercury__parser____Unify____parse_1_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3));
    }
#line 1047 "parser.c"
    return mercury__parser__succeeded;
#line 1049 "parser.c"
  }
#line 1051 "parser.c"
}

#line 1054 "parser.c"
static void MR_CALL 
mercury__parser____Compare____parse_1_0_10001(
#line 1057 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1059 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_2,
#line 1061 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3,
#line 1063 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4)
#line 1065 "parser.c"
{
#line 1067 "parser.c"
  {
#line 1069 "parser.c"
    MR_Word mercury__parser__conv0_HeadVar__1_1;

#line 1072 "parser.c"
    {
#line 1074 "parser.c"
      mercury__parser____Compare____parse_1_0(((MR_Word) mercury__parser__wrapper_arg_1), &mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_3), ((MR_Word) mercury__parser__wrapper_arg_4));
    }
#line 1077 "parser.c"
    *mercury__parser__wrapper_arg_2 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
#line 1079 "parser.c"
  }
#line 1081 "parser.c"
}

#line 1084 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____parser_state_2_0_10001(
#line 1087 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1089 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1091 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3,
#line 1093 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4)
#line 1095 "parser.c"
{
#line 1097 "parser.c"
  {
#line 1099 "parser.c"
    MR_bool mercury__parser__succeeded;

#line 1102 "parser.c"
    {
#line 1104 "parser.c"
      mercury__parser__succeeded = mercury__parser____Unify____parser_state_2_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3), ((MR_Word) mercury__parser__wrapper_arg_4));
    }
#line 1107 "parser.c"
    return mercury__parser__succeeded;
#line 1109 "parser.c"
  }
#line 1111 "parser.c"
}

#line 1114 "parser.c"
static void MR_CALL 
mercury__parser____Compare____parser_state_2_0_10001(
#line 1117 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1119 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1121 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_3,
#line 1123 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4,
#line 1125 "parser.c"
  MR_Box mercury__parser__wrapper_arg_5)
#line 1127 "parser.c"
{
#line 1129 "parser.c"
  {
#line 1131 "parser.c"
    MR_Word mercury__parser__conv0_HeadVar__1_1;

#line 1134 "parser.c"
    {
#line 1136 "parser.c"
      mercury__parser____Compare____parser_state_2_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), &mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_4), ((MR_Word) mercury__parser__wrapper_arg_5));
    }
#line 1139 "parser.c"
    *mercury__parser__wrapper_arg_3 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
#line 1141 "parser.c"
  }
#line 1143 "parser.c"
}

#line 1146 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0_10001(
#line 1149 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1151 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2)
#line 1153 "parser.c"
{
#line 1155 "parser.c"
  {
#line 1157 "parser.c"
    MR_bool mercury__parser__succeeded;

#line 1160 "parser.c"
    {
#line 1162 "parser.c"
      mercury__parser__succeeded = mercury__parser____Unify____term_kind_0_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2));
    }
#line 1165 "parser.c"
    return mercury__parser__succeeded;
#line 1167 "parser.c"
  }
#line 1169 "parser.c"
}

#line 1172 "parser.c"
static void MR_CALL 
mercury__parser____Compare____term_kind_0_0_10001(
#line 1175 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_1,
#line 1177 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1179 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3)
#line 1181 "parser.c"
{
#line 1183 "parser.c"
  {
#line 1185 "parser.c"
    MR_Word mercury__parser__conv0_HeadVar__1_1;

#line 1188 "parser.c"
    {
#line 1190 "parser.c"
      mercury__parser____Compare____term_kind_0_0(&mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3));
    }
#line 1193 "parser.c"
    *mercury__parser__wrapper_arg_1 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
#line 1195 "parser.c"
  }
#line 1197 "parser.c"
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

#line 1115 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
#line 1115 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_24,
#line 1115 "parser.m"
  MR_String mercury__parser__VarName_5,
#line 1115 "parser.m"
  MR_Word * mercury__parser__Var_6,
#line 1115 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_ParserState_0_13,
#line 1115 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_ParserState_14)
#line 1115 "parser.m"
{
#line 1123 "parser.m"
  {
#line 1123 "parser.m"
    MR_bool mercury__parser__succeeded = (strcmp(mercury__parser__VarName_5, (MR_String) "_") == 0);

#line 1123 "parser.m"
    if (mercury__parser__succeeded)
#line 1120 "parser.m"
      {
#line 1120 "parser.m"
        MR_Word mercury__parser__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
#line 1120 "parser.m"
        MR_Word mercury__parser__VarSet_9;
#line 1106 "parser.m"
        MR_String mercury__parser__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
#line 1106 "parser.m"
        MR_Box mercury__parser__V_35_35 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
#line 1106 "parser.m"
        MR_Word mercury__parser__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
#line 1111 "parser.m"
        MR_String mercury__parser__V_42_42;
#line 1111 "parser.m"
        MR_Box mercury__parser__V_43_43;
#line 1111 "parser.m"
        MR_Word mercury__parser__V_45_45;
#line 1111 "parser.m"
        MR_Word mercury__parser__V_44_44;

#line 1121 "parser.m"
        {
#line 1121 "parser.m"
          mercury__varset__new_var_3_p_0(mercury__parser__TypeInfo_for_T_24, mercury__parser__Var_6, mercury__parser__VarSet0_8, &mercury__parser__VarSet_9);
        }
#line 1111 "parser.m"
        mercury__parser__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
#line 1111 "parser.m"
        mercury__parser__V_43_43 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
#line 1111 "parser.m"
        mercury__parser__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
#line 1111 "parser.m"
        mercury__parser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
#line 1111 "parser.m"
        {
#line 1111 "parser.m"
          MR_Word base;
#line 1111 "parser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "parser.m"
          *mercury__parser__STATE_VARIABLE_ParserState_14 = base;
#line 1111 "parser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_42_42));
#line 1111 "parser.m"
          MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__V_43_43;
#line 1111 "parser.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_9));
#line 1111 "parser.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__V_45_45));
#line 1111 "parser.m"
        }
#line 1120 "parser.m"
      }
#line 1123 "parser.m"
    else
#line 1124 "parser.m"
      {
#line 1124 "parser.m"
        MR_Word mercury__parser__Names0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
#line 1108 "parser.m"
        MR_String mercury__parser__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
#line 1108 "parser.m"
        MR_Box mercury__parser__V_49_49 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
#line 1108 "parser.m"
        MR_Word mercury__parser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
#line 1127 "parser.m"
        MR_Word mercury__parser__Var0_11;
#line 1125 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1125 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1125 "parser.m"
        MR_Word mercury__parser__TypeInfo_28_28;
#line 452 "map.opt"
        MR_Box mercury__parser__conv0_Var0_11;

#line 1316 "parser.c"
        {
#line 1318 "parser.c"
          mercury__parser__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1320 "parser.c"
          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_28_28, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_27_27));
#line 1322 "parser.c"
          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_28_28, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_24));
#line 1324 "parser.c"
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
#line 1127 "parser.m"
        if (mercury__parser__succeeded)
#line 1126 "parser.m"
          {
#line 1126 "parser.m"
            *mercury__parser__Var_6 = mercury__parser__Var0_11;
#line 1126 "parser.m"
            *mercury__parser__STATE_VARIABLE_ParserState_14 = mercury__parser__STATE_VARIABLE_ParserState_0_13;
#line 1126 "parser.m"
          }
#line 1127 "parser.m"
        else
#line 1128 "parser.m"
          {
#line 1128 "parser.m"
            MR_Word mercury__parser__TypeCtorInfo_29_29;
#line 1128 "parser.m"
            MR_Word mercury__parser__TypeInfo_31_31;
#line 1128 "parser.m"
            MR_Word mercury__parser__TypeCtorInfo_16_69;
#line 1128 "parser.m"
            MR_Word mercury__parser__TypeCtorInfo_18_71;
#line 1128 "parser.m"
            MR_Word mercury__parser__Names_12;
#line 1128 "parser.m"
            MR_Word mercury__parser__VarSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
#line 1128 "parser.m"
            MR_Word mercury__parser__VarSet_19;
#line 1128 "parser.m"
            MR_Word mercury__parser__V_8_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_18, (MR_Integer) 0)));
#line 1128 "parser.m"
            MR_Word mercury__parser__V_9_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_18, (MR_Integer) 1)));
#line 1128 "parser.m"
            MR_Word mercury__parser__V_10_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_18, (MR_Integer) 2)));
#line 1128 "parser.m"
            MR_Word mercury__parser__V_11_67;
#line 1128 "parser.m"
            MR_Word mercury__parser__V_12_68;
#line 1128 "parser.m"
            MR_Integer mercury__parser__V_4_72;
#line 1128 "parser.m"
            MR_Integer mercury__parser__V_5_73 = (MR_Integer) mercury__parser__V_8_63;
#line 1128 "parser.m"
            MR_String mercury__parser__V_85_85;
#line 1128 "parser.m"
            MR_Box mercury__parser__V_86_86;
#line 1106 "parser.m"
            MR_String mercury__parser__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
#line 1106 "parser.m"
            MR_Box mercury__parser__V_57_57 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
#line 1106 "parser.m"
            MR_Word mercury__parser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
#line 1111 "parser.m"
            MR_Word mercury__parser__V_87_87;
#line 1111 "parser.m"
            MR_Word mercury__parser__V_88_88;

#line 132 "term.opt"
            mercury__parser__V_4_72 = (mercury__parser__V_5_73 + (MR_Integer) 1);
#line 131 "term.opt"
            *mercury__parser__Var_6 = (MR_Word) mercury__parser__V_4_72;
#line 131 "term.opt"
            mercury__parser__V_11_67 = (MR_Word) mercury__parser__V_4_72;
#line 1404 "parser.c"
            mercury__parser__TypeCtorInfo_16_69 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1406 "parser.c"
            {
#line 1408 "parser.c"
              mercury__parser__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1410 "parser.c"
              MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_31_31, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_16_69));
#line 1412 "parser.c"
              MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_31_31, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_24));
#line 1414 "parser.c"
            }
#line 1416 "parser.c"
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
#line 1435 "parser.c"
            mercury__parser__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1130 "parser.m"
            {
#line 1130 "parser.m"
              mercury__map__det_insert_4_p_0(mercury__parser__TypeCtorInfo_29_29, mercury__parser__TypeInfo_31_31, ((MR_Box) (mercury__parser__VarName_5)), ((MR_Box) (*mercury__parser__Var_6)), mercury__parser__Names0_10, &mercury__parser__Names_12);
            }
#line 1111 "parser.m"
            mercury__parser__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
#line 1111 "parser.m"
            mercury__parser__V_86_86 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
#line 1111 "parser.m"
            mercury__parser__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
#line 1111 "parser.m"
            mercury__parser__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
#line 1113 "parser.m"
            {
#line 1113 "parser.m"
              MR_Word base;
#line 1113 "parser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1113 "parser.m"
              *mercury__parser__STATE_VARIABLE_ParserState_14 = base;
#line 1113 "parser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_85_85));
#line 1113 "parser.m"
              MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__V_86_86;
#line 1113 "parser.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_19));
#line 1113 "parser.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Names_12));
#line 1113 "parser.m"
            }
#line 1128 "parser.m"
          }
#line 1124 "parser.m"
      }
#line 1123 "parser.m"
  }
#line 1115 "parser.m"
}

#line 1008 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1008 "parser.m"
  MR_Word mercury__parser__ParserState_4,
#line 1008 "parser.m"
  MR_Integer mercury__parser__TokenContext_5,
#line 1008 "parser.m"
  MR_Word * mercury__parser__TermContext_6)
#line 1008 "parser.m"
{
#line 1011 "parser.m"
  {
#line 1011 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1011 "parser.m"
    MR_String mercury__parser__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 0)));
#line 1102 "parser.m"
    MR_Box mercury__parser__V_12_12 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 1));
#line 1102 "parser.m"
    MR_Word mercury__parser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 2)));
#line 1102 "parser.m"
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
#line 1011 "parser.m"
  }
#line 1008 "parser.m"
}

#line 976 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(
#line 976 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_25,
#line 976 "parser.m"
  MR_Word mercury__parser__Token_8,
#line 976 "parser.m"
  MR_Integer mercury__parser__Context_9,
#line 976 "parser.m"
  MR_String mercury__parser__UsualMessage_10,
#line 976 "parser.m"
  MR_Word * mercury__parser__Error_11,
#line 976 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
#line 976 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
#line 976 "parser.m"
  MR_Word mercury__parser__PS_13)
#line 976 "parser.m"
{
#line 980 "parser.m"
  {
#line 980 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 987 "parser.m"
    MR_String mercury__parser__Op_14;
#line 987 "parser.m"
    MR_Box mercury__parser__OpTable_15;
#line 1104 "parser.m"
    MR_String mercury__parser__V_32_32;
#line 1104 "parser.m"
    MR_Word mercury__parser__V_33_33;
#line 1104 "parser.m"
    MR_Word mercury__parser__V_34_34;

#line 983 "parser.m"
    {
#line 983 "parser.m"
      MR_Word base;
#line 983 "parser.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 983 "parser.m"
      *mercury__parser__STATE_VARIABLE_TokensLeft_22 = base;
#line 983 "parser.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Token_8));
#line 983 "parser.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Context_9));
#line 983 "parser.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_21));
#line 983 "parser.m"
    }
#line 986 "parser.m"
    if ((mercury__parser__Token_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 986 "parser.m"
      {
#line 986 "parser.m"
        mercury__parser__Op_14 = (MR_String) ",";
#line 986 "parser.m"
        mercury__parser__succeeded = MR_TRUE;
#line 986 "parser.m"
      }
#line 986 "parser.m"
    else
#line 986 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Token_8)) == (MR_mktag((MR_Integer) 1))))
#line 985 "parser.m"
      {
#line 985 "parser.m"
        mercury__parser__Op_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_8, (MR_Integer) 0)));
#line 985 "parser.m"
        mercury__parser__succeeded = MR_TRUE;
#line 985 "parser.m"
      }
#line 986 "parser.m"
    else
#line 986 "parser.m"
      mercury__parser__succeeded = MR_FALSE;
#line 987 "parser.m"
    if (mercury__parser__succeeded)
#line 987 "parser.m"
      {
#line 1104 "parser.m"
        mercury__parser__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 0)));
#line 1104 "parser.m"
        mercury__parser__OpTable_15 = (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 1));
#line 1104 "parser.m"
        mercury__parser__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 2)));
#line 1104 "parser.m"
        mercury__parser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 3)));
#line 1610 "parser.c"
        {
#line 1612 "parser.c"
          MR_Integer mercury__parser__V_16_16;
#line 1614 "parser.c"
          MR_Word mercury__parser__V_17_17;
#line 1616 "parser.c"
          MR_Word mercury__parser__V_18_18;
#line 1618 "parser.c"
          MR_bool MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1620 "parser.c"
          MR_Box mercury__parser__conv3_V_16_16;
#line 1622 "parser.c"
          MR_Box mercury__parser__conv2_V_17_17;
#line 1624 "parser.c"
          MR_Box mercury__parser__conv1_V_18_18;

#line 1627 "parser.c"
          {
#line 1629 "parser.c"
            mercury__parser__succeeded = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_25), mercury__parser__OpTable_15, ((MR_Box) (mercury__parser__Op_14)), &mercury__parser__conv3_V_16_16, &mercury__parser__conv2_V_17_17, &mercury__parser__conv1_V_18_18);
          }
#line 1632 "parser.c"
          if (mercury__parser__succeeded)
#line 1634 "parser.c"
            {
#line 1636 "parser.c"
              mercury__parser__V_16_16 = ((MR_Integer) mercury__parser__conv3_V_16_16);
#line 1638 "parser.c"
              mercury__parser__V_17_17 = ((MR_Word) mercury__parser__conv2_V_17_17);
#line 1640 "parser.c"
              mercury__parser__V_18_18 = ((MR_Word) mercury__parser__conv1_V_18_18);
#line 1642 "parser.c"
              mercury__parser__succeeded = MR_TRUE;
#line 1644 "parser.c"
            }
#line 1646 "parser.c"
        }
#line 990 "parser.m"
        if (!(mercury__parser__succeeded))
#line 1650 "parser.c"
          {
#line 1652 "parser.c"
            MR_Integer mercury__parser__V_19_19;
#line 1654 "parser.c"
            MR_Word mercury__parser__V_20_20;
#line 1656 "parser.c"
            MR_bool MR_CALL (* mercury__parser__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 8)));
#line 1658 "parser.c"
            MR_Box mercury__parser__conv6_V_19_19;
#line 1660 "parser.c"
            MR_Box mercury__parser__conv5_V_20_20;

#line 1663 "parser.c"
            {
#line 1665 "parser.c"
              mercury__parser__succeeded = mercury__parser__func_4(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_25), mercury__parser__OpTable_15, ((MR_Box) (mercury__parser__Op_14)), &mercury__parser__conv6_V_19_19, &mercury__parser__conv5_V_20_20);
            }
#line 1668 "parser.c"
            if (mercury__parser__succeeded)
#line 1670 "parser.c"
              {
#line 1672 "parser.c"
                mercury__parser__V_19_19 = ((MR_Integer) mercury__parser__conv6_V_19_19);
#line 1674 "parser.c"
                mercury__parser__V_20_20 = ((MR_Word) mercury__parser__conv5_V_20_20);
#line 1676 "parser.c"
                mercury__parser__succeeded = MR_TRUE;
#line 1678 "parser.c"
              }
#line 1680 "parser.c"
          }
#line 987 "parser.m"
      }
#line 994 "parser.m"
    if (mercury__parser__succeeded)
#line 993 "parser.m"
      {
#line 993 "parser.m"
        {
#line 993 "parser.m"
          MR_Word base;
#line 993 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "parser.m"
          *mercury__parser__Error_11 = base;
#line 993 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
#line 993 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_22));
#line 993 "parser.m"
        }
#line 993 "parser.m"
      }
#line 994 "parser.m"
    else
#line 995 "parser.m"
      {
#line 995 "parser.m"
        MR_Word base;
#line 995 "parser.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "parser.m"
        *mercury__parser__Error_11 = base;
#line 995 "parser.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__UsualMessage_10));
#line 995 "parser.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_22));
#line 995 "parser.m"
      }
#line 980 "parser.m"
  }
#line 976 "parser.m"
}

#line 962 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 962 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_16,
#line 962 "parser.m"
  MR_String mercury__parser__UsualMessage_6,
#line 962 "parser.m"
  MR_Word * mercury__parser__Error_7,
#line 962 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_12,
#line 962 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_13,
#line 962 "parser.m"
  MR_Word mercury__parser__PS_9)
#line 962 "parser.m"
{
#line 971 "parser.m"
  {
#line 971 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 971 "parser.m"
    if ((mercury__parser__STATE_VARIABLE_TokensLeft_0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "parser.m"
      {
#line 973 "parser.m"
        {
#line 973 "parser.m"
          MR_Word base;
#line 973 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "parser.m"
          *mercury__parser__Error_7 = base;
#line 973 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__UsualMessage_6));
#line 973 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_12));
#line 973 "parser.m"
        }
#line 972 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_13 = mercury__parser__STATE_VARIABLE_TokensLeft_0_12;
#line 972 "parser.m"
      }
#line 971 "parser.m"
    else
#line 968 "parser.m"
      {
#line 968 "parser.m"
        MR_Word mercury__parser__Token_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 0)));
#line 968 "parser.m"
        MR_Integer mercury__parser__Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 1)));
#line 968 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 2)));
#line 987 "parser.m"
        MR_String mercury__parser__Op_27;
#line 987 "parser.m"
        MR_Box mercury__parser__OpTable_28;
#line 1104 "parser.m"
        MR_String mercury__parser__V_40_40;
#line 1104 "parser.m"
        MR_Word mercury__parser__V_41_41;
#line 1104 "parser.m"
        MR_Word mercury__parser__V_42_42;

#line 983 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_13 = mercury__parser__STATE_VARIABLE_TokensLeft_0_12;
#line 986 "parser.m"
        if ((mercury__parser__Token_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 986 "parser.m"
          {
#line 986 "parser.m"
            mercury__parser__Op_27 = (MR_String) ",";
#line 986 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 986 "parser.m"
          }
#line 986 "parser.m"
        else
#line 986 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__Token_10)) == (MR_mktag((MR_Integer) 1))))
#line 985 "parser.m"
          {
#line 985 "parser.m"
            mercury__parser__Op_27 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_10, (MR_Integer) 0)));
#line 985 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 985 "parser.m"
          }
#line 986 "parser.m"
        else
#line 986 "parser.m"
          mercury__parser__succeeded = MR_FALSE;
#line 987 "parser.m"
        if (mercury__parser__succeeded)
#line 987 "parser.m"
          {
#line 1104 "parser.m"
            mercury__parser__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 0)));
#line 1104 "parser.m"
            mercury__parser__OpTable_28 = (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 1));
#line 1104 "parser.m"
            mercury__parser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 2)));
#line 1104 "parser.m"
            mercury__parser__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 3)));
#line 1830 "parser.c"
            {
#line 1832 "parser.c"
              MR_Integer mercury__parser__V_29_29;
#line 1834 "parser.c"
              MR_Word mercury__parser__V_30_30;
#line 1836 "parser.c"
              MR_Word mercury__parser__V_31_31;
#line 1838 "parser.c"
              MR_bool MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1840 "parser.c"
              MR_Box mercury__parser__conv3_V_29_29;
#line 1842 "parser.c"
              MR_Box mercury__parser__conv2_V_30_30;
#line 1844 "parser.c"
              MR_Box mercury__parser__conv1_V_31_31;

#line 1847 "parser.c"
              {
#line 1849 "parser.c"
                mercury__parser__succeeded = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_16), mercury__parser__OpTable_28, ((MR_Box) (mercury__parser__Op_27)), &mercury__parser__conv3_V_29_29, &mercury__parser__conv2_V_30_30, &mercury__parser__conv1_V_31_31);
              }
#line 1852 "parser.c"
              if (mercury__parser__succeeded)
#line 1854 "parser.c"
                {
#line 1856 "parser.c"
                  mercury__parser__V_29_29 = ((MR_Integer) mercury__parser__conv3_V_29_29);
#line 1858 "parser.c"
                  mercury__parser__V_30_30 = ((MR_Word) mercury__parser__conv2_V_30_30);
#line 1860 "parser.c"
                  mercury__parser__V_31_31 = ((MR_Word) mercury__parser__conv1_V_31_31);
#line 1862 "parser.c"
                  mercury__parser__succeeded = MR_TRUE;
#line 1864 "parser.c"
                }
#line 1866 "parser.c"
            }
#line 990 "parser.m"
            if (!(mercury__parser__succeeded))
#line 1870 "parser.c"
              {
#line 1872 "parser.c"
                MR_Integer mercury__parser__V_32_32;
#line 1874 "parser.c"
                MR_Word mercury__parser__V_33_33;
#line 1876 "parser.c"
                MR_bool MR_CALL (* mercury__parser__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 8)));
#line 1878 "parser.c"
                MR_Box mercury__parser__conv6_V_32_32;
#line 1880 "parser.c"
                MR_Box mercury__parser__conv5_V_33_33;

#line 1883 "parser.c"
                {
#line 1885 "parser.c"
                  mercury__parser__succeeded = mercury__parser__func_4(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_16), mercury__parser__OpTable_28, ((MR_Box) (mercury__parser__Op_27)), &mercury__parser__conv6_V_32_32, &mercury__parser__conv5_V_33_33);
                }
#line 1888 "parser.c"
                if (mercury__parser__succeeded)
#line 1890 "parser.c"
                  {
#line 1892 "parser.c"
                    mercury__parser__V_32_32 = ((MR_Integer) mercury__parser__conv6_V_32_32);
#line 1894 "parser.c"
                    mercury__parser__V_33_33 = ((MR_Word) mercury__parser__conv5_V_33_33);
#line 1896 "parser.c"
                    mercury__parser__succeeded = MR_TRUE;
#line 1898 "parser.c"
                  }
#line 1900 "parser.c"
              }
#line 987 "parser.m"
          }
#line 994 "parser.m"
        if (mercury__parser__succeeded)
#line 993 "parser.m"
          {
#line 993 "parser.m"
            {
#line 993 "parser.m"
              MR_Word base;
#line 993 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "parser.m"
              *mercury__parser__Error_7 = base;
#line 993 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
#line 993 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_13));
#line 993 "parser.m"
            }
#line 993 "parser.m"
          }
#line 994 "parser.m"
        else
#line 995 "parser.m"
          {
#line 995 "parser.m"
            MR_Word base;
#line 995 "parser.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "parser.m"
            *mercury__parser__Error_7 = base;
#line 995 "parser.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__UsualMessage_6));
#line 995 "parser.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_13));
#line 995 "parser.m"
          }
#line 968 "parser.m"
      }
#line 971 "parser.m"
  }
#line 962 "parser.m"
}

#line 789 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
#line 789 "parser.m"
  MR_Word mercury__parser__Term_3,
#line 789 "parser.m"
  MR_Word * mercury__parser__ArgTerms_4)
#line 789 "parser.m"
{
#line 795 "parser.m"
  {
#line 795 "parser.m"
    MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 795 "parser.m"
    MR_Word mercury__parser__LeftTerm_5;
#line 795 "parser.m"
    MR_Word mercury__parser__RightTerm_6;
#line 792 "parser.m"
    MR_Word mercury__parser__V_9_9;
#line 792 "parser.m"
    MR_String mercury__parser__V_10_10;
#line 792 "parser.m"
    MR_Word mercury__parser__V_11_11;
#line 792 "parser.m"
    MR_Word mercury__parser__V_12_12;
#line 792 "parser.m"
    MR_Word mercury__parser__V_13_13;
#line 792 "parser.m"
    MR_Word mercury__parser__V_7_7;

#line 792 "parser.m"
    if (mercury__parser__succeeded)
#line 792 "parser.m"
      {
#line 792 "parser.m"
        mercury__parser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 0)));
#line 792 "parser.m"
        mercury__parser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 1)));
#line 792 "parser.m"
        mercury__parser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 2)));
#line 792 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 792 "parser.m"
        if (mercury__parser__succeeded)
#line 792 "parser.m"
          {
#line 792 "parser.m"
            mercury__parser__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__V_9_9, (MR_Integer) 0)));
#line 792 "parser.m"
            mercury__parser__succeeded = (strcmp(mercury__parser__V_10_10, (MR_String) ",") == 0);
#line 792 "parser.m"
            if (mercury__parser__succeeded)
#line 792 "parser.m"
              {
#line 792 "parser.m"
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 792 "parser.m"
                if (mercury__parser__succeeded)
#line 792 "parser.m"
                  {
#line 792 "parser.m"
                    mercury__parser__LeftTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_11_11, (MR_Integer) 0)));
#line 792 "parser.m"
                    mercury__parser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_11_11, (MR_Integer) 1)));
#line 792 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 792 "parser.m"
                    if (mercury__parser__succeeded)
#line 792 "parser.m"
                      {
#line 792 "parser.m"
                        mercury__parser__RightTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_12_12, (MR_Integer) 0)));
#line 792 "parser.m"
                        mercury__parser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_12_12, (MR_Integer) 1)));
#line 792 "parser.m"
                        mercury__parser__succeeded = (mercury__parser__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "parser.m"
                      }
#line 792 "parser.m"
                  }
#line 792 "parser.m"
              }
#line 792 "parser.m"
          }
#line 792 "parser.m"
      }
#line 795 "parser.m"
    if (mercury__parser__succeeded)
#line 793 "parser.m"
      {
#line 793 "parser.m"
        MR_Word mercury__parser__ArgTerms0_8;

#line 793 "parser.m"
        {
#line 793 "parser.m"
          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(mercury__parser__RightTerm_6, &mercury__parser__ArgTerms0_8);
        }
#line 794 "parser.m"
        {
#line 794 "parser.m"
          MR_Word base;
#line 794 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "parser.m"
          *mercury__parser__ArgTerms_4 = base;
#line 794 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__LeftTerm_5));
#line 794 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__ArgTerms0_8));
#line 794 "parser.m"
        }
#line 793 "parser.m"
      }
#line 795 "parser.m"
    else
#line 796 "parser.m"
      {
#line 796 "parser.m"
        MR_Word mercury__parser__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 796 "parser.m"
        {
#line 796 "parser.m"
          MR_Word base;
#line 796 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "parser.m"
          *mercury__parser__ArgTerms_4 = base;
#line 796 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Term_3));
#line 796 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__V_14_14));
#line 796 "parser.m"
        }
#line 796 "parser.m"
      }
#line 795 "parser.m"
  }
#line 789 "parser.m"
}

#line 588 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_9_p_0(
#line 588 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_44,
#line 588 "parser.m"
  MR_Word mercury__parser__Qualifier0_10,
#line 588 "parser.m"
  MR_Word * mercury__parser__Qualifier_11,
#line 588 "parser.m"
  MR_Word mercury__parser__OpCtxt0_12,
#line 588 "parser.m"
  MR_String mercury__parser__OpName0_13,
#line 588 "parser.m"
  MR_String * mercury__parser__OpName_14,
#line 588 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_26,
#line 588 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_27,
#line 588 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_28,
#line 588 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_29)
#line 588 "parser.m"
{
#line 618 "parser.m"
  while (MR_TRUE)
#line 618 "parser.m"
    {
#line 618 "parser.m"
      /* tailcall optimized into a loop */
#line 618 "parser.m"
      {
#line 618 "parser.m"
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_26)) == (MR_mktag((MR_Integer) 1)));
#line 618 "parser.m"
        MR_Integer mercury__parser__SepContext_18;
#line 618 "parser.m"
        MR_String mercury__parser__OpName1_19;
#line 618 "parser.m"
        MR_Integer mercury__parser__NameContext_20;
#line 618 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_32_32;
#line 597 "parser.m"
        MR_String mercury__parser__ModuleSeparator_17;
#line 597 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_30_30;
#line 597 "parser.m"
        MR_Word mercury__parser__V_31_31;
#line 597 "parser.m"
        MR_Word mercury__parser__V_33_33;

#line 597 "parser.m"
        if (mercury__parser__succeeded)
#line 597 "parser.m"
          {
#line 597 "parser.m"
            mercury__parser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_26, (MR_Integer) 0)));
#line 597 "parser.m"
            mercury__parser__SepContext_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_26, (MR_Integer) 1)));
#line 597 "parser.m"
            mercury__parser__STATE_VARIABLE_TokensLeft_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_26, (MR_Integer) 2)));
#line 597 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 597 "parser.m"
            if (mercury__parser__succeeded)
#line 597 "parser.m"
              {
#line 597 "parser.m"
                mercury__parser__ModuleSeparator_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__V_31_31, (MR_Integer) 0)));
#line 600 "parser.m"
                if ((strcmp(mercury__parser__ModuleSeparator_17, (MR_String) ".") == 0))
#line 599 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 600 "parser.m"
                else
#line 600 "parser.m"
                if ((strcmp(mercury__parser__ModuleSeparator_17, (MR_String) ":") == 0))
#line 601 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 600 "parser.m"
                else
#line 600 "parser.m"
                  mercury__parser__succeeded = MR_FALSE;
#line 597 "parser.m"
                if (mercury__parser__succeeded)
#line 597 "parser.m"
                  {
#line 603 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 603 "parser.m"
                    if (mercury__parser__succeeded)
#line 603 "parser.m"
                      {
#line 603 "parser.m"
                        mercury__parser__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_30_30, (MR_Integer) 0)));
#line 603 "parser.m"
                        mercury__parser__NameContext_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_30_30, (MR_Integer) 1)));
#line 603 "parser.m"
                        mercury__parser__STATE_VARIABLE_TokensLeft_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_30_30, (MR_Integer) 2)));
#line 603 "parser.m"
                        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 603 "parser.m"
                        if (mercury__parser__succeeded)
#line 603 "parser.m"
                          {
#line 603 "parser.m"
                            mercury__parser__OpName1_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__V_33_33, (MR_Integer) 0)));
#line 604 "parser.m"
                            mercury__parser__succeeded = (strcmp(mercury__parser__OpName1_19, (MR_String) "\140") == 0);
#line 604 "parser.m"
                            mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 603 "parser.m"
                          }
#line 603 "parser.m"
                      }
#line 597 "parser.m"
                  }
#line 597 "parser.m"
              }
#line 597 "parser.m"
          }
#line 618 "parser.m"
        if (mercury__parser__succeeded)
#line 606 "parser.m"
          {
#line 606 "parser.m"
            MR_Word mercury__parser__SepCtxt_21;
#line 606 "parser.m"
            MR_Word mercury__parser__OpCtxt1_22;
#line 606 "parser.m"
            MR_Word mercury__parser__QTerm1_23;
#line 606 "parser.m"
            MR_Word mercury__parser__Qualifier1_24;
#line 606 "parser.m"
            MR_Word mercury__parser__V_34_34;
#line 606 "parser.m"
            MR_Word mercury__parser__V_35_35;
#line 606 "parser.m"
            MR_String mercury__parser__FileName_63 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_28, (MR_Integer) 0)));
#line 1102 "parser.m"
            MR_Box mercury__parser__V_55_55 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_28, (MR_Integer) 1));
#line 1102 "parser.m"
            MR_Word mercury__parser__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_28, (MR_Integer) 2)));
#line 1102 "parser.m"
            MR_Word mercury__parser__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_28, (MR_Integer) 3)));

#line 123 "term.opt"
            {
#line 123 "term.opt"
              mercury__parser__SepCtxt_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__SepCtxt_21, 0) = ((MR_Box) (mercury__parser__FileName_63));
#line 123 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__SepCtxt_21, 1) = ((MR_Box) (mercury__parser__SepContext_18));
#line 123 "term.opt"
            }
#line 123 "term.opt"
            {
#line 123 "term.opt"
              mercury__parser__OpCtxt1_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__OpCtxt1_22, 0) = ((MR_Box) (mercury__parser__FileName_63));
#line 123 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__OpCtxt1_22, 1) = ((MR_Box) (mercury__parser__NameContext_20));
#line 123 "term.opt"
            }
#line 608 "parser.m"
            {
#line 608 "parser.m"
              mercury__parser__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 608 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_34_34, 0) = ((MR_Box) (mercury__parser__OpName0_13));
#line 608 "parser.m"
            }
#line 608 "parser.m"
            mercury__parser__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 608 "parser.m"
            {
#line 608 "parser.m"
              mercury__parser__QTerm1_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_23, 0) = ((MR_Box) (mercury__parser__V_34_34));
#line 608 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_23, 1) = ((MR_Box) (mercury__parser__V_35_35));
#line 608 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_23, 2) = ((MR_Box) (mercury__parser__OpCtxt0_12));
#line 608 "parser.m"
            }
#line 612 "parser.m"
            if ((mercury__parser__Qualifier0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "parser.m"
              {
#line 611 "parser.m"
                mercury__parser__Qualifier1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 611 "parser.m"
                MR_hl_field(MR_mktag(1), mercury__parser__Qualifier1_24, 0) = ((MR_Box) (mercury__parser__QTerm1_23));
#line 611 "parser.m"
              }
#line 612 "parser.m"
            else
#line 613 "parser.m"
              {
#line 613 "parser.m"
                MR_Word mercury__parser__QTerm0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Qualifier0_10, (MR_Integer) 0)));
#line 613 "parser.m"
                MR_Word mercury__parser__V_36_36;
#line 613 "parser.m"
                MR_Word mercury__parser__V_37_37 = (MR_Word) &mercury__parser_scalar_common_5[0];
#line 613 "parser.m"
                MR_Word mercury__parser__V_39_39;
#line 613 "parser.m"
                MR_Word mercury__parser__V_40_40;
#line 613 "parser.m"
                MR_Word mercury__parser__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 614 "parser.m"
                {
#line 614 "parser.m"
                  mercury__parser__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_40_40, 0) = ((MR_Box) (mercury__parser__QTerm1_23));
#line 614 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_40_40, 1) = ((MR_Box) (mercury__parser__V_41_41));
#line 614 "parser.m"
                }
#line 614 "parser.m"
                {
#line 614 "parser.m"
                  mercury__parser__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_39_39, 0) = ((MR_Box) (mercury__parser__QTerm0_25));
#line 614 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_39_39, 1) = ((MR_Box) (mercury__parser__V_40_40));
#line 614 "parser.m"
                }
#line 614 "parser.m"
                {
#line 614 "parser.m"
                  mercury__parser__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 614 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_36_36, 0) = ((MR_Box) (mercury__parser__V_37_37));
#line 614 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_36_36, 1) = ((MR_Box) (mercury__parser__V_39_39));
#line 614 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_36_36, 2) = ((MR_Box) (mercury__parser__SepCtxt_21));
#line 614 "parser.m"
                }
#line 614 "parser.m"
                {
#line 614 "parser.m"
                  mercury__parser__Qualifier1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 614 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__Qualifier1_24, 0) = ((MR_Box) (mercury__parser__V_36_36));
#line 614 "parser.m"
                }
#line 613 "parser.m"
              }
#line 616 "parser.m"
            /* direct tailcall eliminated */
#line 616 "parser.m"
            {
#line 616 "parser.m"
              MR_Word mercury__parser__Qualifier0__tmp_copy_10 = mercury__parser__Qualifier1_24;
#line 616 "parser.m"
              MR_Word mercury__parser__OpCtxt0__tmp_copy_12 = mercury__parser__OpCtxt1_22;
#line 616 "parser.m"
              MR_String mercury__parser__OpName0__tmp_copy_13 = mercury__parser__OpName1_19;
#line 616 "parser.m"
              MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_26 = mercury__parser__STATE_VARIABLE_TokensLeft_32_32;

#line 616 "parser.m"
              mercury__parser__STATE_VARIABLE_TokensLeft_0_26 = mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_26;
#line 616 "parser.m"
              mercury__parser__OpName0_13 = mercury__parser__OpName0__tmp_copy_13;
#line 616 "parser.m"
              mercury__parser__OpCtxt0_12 = mercury__parser__OpCtxt0__tmp_copy_12;
#line 616 "parser.m"
              mercury__parser__Qualifier0_10 = mercury__parser__Qualifier0__tmp_copy_10;
#line 616 "parser.m"
            }
#line 616 "parser.m"
            continue;
#line 606 "parser.m"
          }
#line 618 "parser.m"
        else
#line 619 "parser.m"
          {
#line 619 "parser.m"
            *mercury__parser__Qualifier_11 = mercury__parser__Qualifier0_10;
#line 620 "parser.m"
            *mercury__parser__OpName_14 = mercury__parser__OpName0_13;
#line 619 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_29 = mercury__parser__STATE_VARIABLE_PS_0_28;
#line 619 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_27 = mercury__parser__STATE_VARIABLE_TokensLeft_0_26;
#line 619 "parser.m"
          }
#line 618 "parser.m"
      }
#line 618 "parser.m"
      break;
#line 618 "parser.m"
    }
#line 588 "parser.m"
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

#line 71 "private_builtin.opt"
    mercury__parser__succeeded = (mercury__parser__Cast_HeadVar1_4 < mercury__parser__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
    if (mercury__parser__succeeded)
#line 73 "private_builtin.opt"
      *mercury__parser__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
    else
#line 79 "private_builtin.opt"
      {
#line 76 "private_builtin.opt"
        mercury__parser__succeeded = (mercury__parser__Cast_HeadVar1_4 == mercury__parser__Cast_HeadVar2_5);
#line 79 "private_builtin.opt"
        if (mercury__parser__succeeded)
#line 78 "private_builtin.opt"
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
        else
#line 80 "private_builtin.opt"
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
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
#line 2453 "parser.c"
  {
#line 2455 "parser.c"
    MR_bool mercury__parser__succeeded = (mercury__parser__HeadVar__2_1 == mercury__parser__HeadVar__2_2);

#line 2458 "parser.c"
    return mercury__parser__succeeded;
#line 2460 "parser.c"
  }
#line 148 "parser.m"
}

#line 1048 "parser.m"
void MR_CALL 
mercury__parser____Compare____parser_state_2_0(
#line 1048 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_17,
#line 1048 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_18,
#line 1048 "parser.m"
  MR_Word * mercury__parser__HeadVar__1_1,
#line 1048 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2,
#line 1048 "parser.m"
  MR_Word mercury__parser__HeadVar__3_3)
#line 1048 "parser.m"
{
#line 1048 "parser.m"
  {
#line 1048 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1048 "parser.m"
    MR_Integer mercury__parser__CastX_15 = (MR_Integer) mercury__parser__HeadVar__2_2;
#line 1048 "parser.m"
    MR_Integer mercury__parser__CastY_16 = (MR_Integer) mercury__parser__HeadVar__3_3;

#line 1048 "parser.m"
    mercury__parser__succeeded = (mercury__parser__CastX_15 == mercury__parser__CastY_16);
#line 1048 "parser.m"
    if (mercury__parser__succeeded)
#line 2493 "parser.c"
      *mercury__parser__HeadVar__1_1 = (MR_Integer) 0;
#line 1048 "parser.m"
    else
#line 1048 "parser.m"
      {
#line 1048 "parser.m"
        MR_String mercury__parser__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));
#line 1048 "parser.m"
        MR_Box mercury__parser__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 1));
#line 1048 "parser.m"
        MR_Word mercury__parser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 2)));
#line 1048 "parser.m"
        MR_Word mercury__parser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 3)));
#line 1048 "parser.m"
        MR_String mercury__parser__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 0)));
#line 1048 "parser.m"
        MR_Box mercury__parser__V_9_9 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 1));
#line 1048 "parser.m"
        MR_Word mercury__parser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 2)));
#line 1048 "parser.m"
        MR_Word mercury__parser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 3)));
#line 1048 "parser.m"
        MR_Word mercury__parser__V_12_12;
#line 1048 "parser.m"
        MR_Integer mercury__parser__V_7_30;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser____Compare____parser_state_2_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__parser__V_4_4 ;
	S2 =  mercury__parser__V_8_8 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2535 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_7_30  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
        mercury__parser__succeeded = (mercury__parser__V_7_30 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
        if (mercury__parser__succeeded)
#line 91 "private_builtin.opt"
          mercury__parser__V_12_12 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
        else
#line 97 "private_builtin.opt"
          {
#line 94 "private_builtin.opt"
            mercury__parser__succeeded = (mercury__parser__V_7_30 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
            if (mercury__parser__succeeded)
#line 96 "private_builtin.opt"
              mercury__parser__V_12_12 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
            else
#line 98 "private_builtin.opt"
              mercury__parser__V_12_12 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
          }
#line 2564 "parser.c"
        mercury__parser__succeeded = (mercury__parser__V_12_12 == (MR_Integer) 0);
#line 1048 "parser.m"
        mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 1048 "parser.m"
        if (mercury__parser__succeeded)
#line 1048 "parser.m"
          *mercury__parser__HeadVar__1_1 = mercury__parser__V_12_12;
#line 1048 "parser.m"
        else
#line 1048 "parser.m"
          {
#line 1048 "parser.m"
            MR_Word mercury__parser__V_13_13;

#line 1048 "parser.m"
            {
#line 1048 "parser.m"
              mercury__builtin__compare_3_p_0(mercury__parser__TypeInfo_for_Ops_17, &mercury__parser__V_13_13, mercury__parser__V_5_5, mercury__parser__V_9_9);
            }
#line 2584 "parser.c"
            mercury__parser__succeeded = (mercury__parser__V_13_13 == (MR_Integer) 0);
#line 1048 "parser.m"
            mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 1048 "parser.m"
            if (mercury__parser__succeeded)
#line 1048 "parser.m"
              *mercury__parser__HeadVar__1_1 = mercury__parser__V_13_13;
#line 1048 "parser.m"
            else
#line 1048 "parser.m"
              {
#line 1048 "parser.m"
                MR_Word mercury__parser__V_14_14;

#line 1048 "parser.m"
                {
#line 1048 "parser.m"
                  mercury__varset____Compare____varset_1_0(mercury__parser__TypeInfo_for_T_18, &mercury__parser__V_14_14, mercury__parser__V_6_6, mercury__parser__V_10_10);
                }
#line 2604 "parser.c"
                mercury__parser__succeeded = (mercury__parser__V_14_14 == (MR_Integer) 0);
#line 1048 "parser.m"
                mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 1048 "parser.m"
                if (mercury__parser__succeeded)
#line 1048 "parser.m"
                  *mercury__parser__HeadVar__1_1 = mercury__parser__V_14_14;
#line 1048 "parser.m"
                else
#line 1048 "parser.m"
                  {
#line 1048 "parser.m"
                    MR_Word mercury__parser__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1048 "parser.m"
                    MR_Word mercury__parser__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1048 "parser.m"
                    MR_Word mercury__parser__TypeInfo_24_24;

#line 2623 "parser.c"
                    {
#line 2625 "parser.c"
                      mercury__parser__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2627 "parser.c"
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_24_24, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_23_23));
#line 2629 "parser.c"
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_24_24, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_18));
#line 2631 "parser.c"
                    }
#line 1048 "parser.m"
                    {
#line 1048 "parser.m"
                      mercury__tree234____Compare____tree234_2_0(mercury__parser__TypeCtorInfo_22_22, mercury__parser__TypeInfo_24_24, mercury__parser__HeadVar__1_1, (MR_Word) mercury__parser__V_7_7, (MR_Word) mercury__parser__V_11_11);
#line 1048 "parser.m"
                      return;
                    }
#line 1048 "parser.m"
                  }
#line 1048 "parser.m"
              }
#line 1048 "parser.m"
          }
#line 1048 "parser.m"
      }
#line 1048 "parser.m"
  }
#line 1048 "parser.m"
}

#line 1048 "parser.m"
MR_bool MR_CALL 
mercury__parser____Unify____parser_state_2_0(
#line 1048 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_13,
#line 1048 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_14,
#line 1048 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1048 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2)
#line 1048 "parser.m"
{
#line 1048 "parser.m"
  {
#line 1048 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1048 "parser.m"
    MR_Integer mercury__parser__CastX_11 = (MR_Integer) mercury__parser__HeadVar__1_1;
#line 1048 "parser.m"
    MR_Integer mercury__parser__CastY_12 = (MR_Integer) mercury__parser__HeadVar__2_2;

#line 1048 "parser.m"
    mercury__parser__succeeded = (mercury__parser__CastX_11 == mercury__parser__CastY_12);
#line 1048 "parser.m"
    if (mercury__parser__succeeded)
#line 1048 "parser.m"
      mercury__parser__succeeded = MR_TRUE;
#line 1048 "parser.m"
    else
#line 1048 "parser.m"
      {
#line 1048 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_17_17;
#line 1048 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_18_18;
#line 1048 "parser.m"
        MR_Word mercury__parser__TypeInfo_19_19;
#line 1048 "parser.m"
        MR_String mercury__parser__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 1048 "parser.m"
        MR_Box mercury__parser__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 1));
#line 1048 "parser.m"
        MR_Word mercury__parser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 2)));
#line 1048 "parser.m"
        MR_Word mercury__parser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 3)));
#line 1048 "parser.m"
        MR_String mercury__parser__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));
#line 1048 "parser.m"
        MR_Box mercury__parser__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 1));
#line 1048 "parser.m"
        MR_Word mercury__parser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 2)));
#line 1048 "parser.m"
        MR_Word mercury__parser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 3)));

#line 2708 "parser.c"
        mercury__parser__succeeded = (strcmp(mercury__parser__V_3_3, mercury__parser__V_7_7) == 0);
#line 1048 "parser.m"
        if (mercury__parser__succeeded)
#line 1048 "parser.m"
          {
#line 2714 "parser.c"
            {
#line 2716 "parser.c"
              mercury__parser__succeeded = mercury__builtin__unify_2_p_0(mercury__parser__TypeInfo_for_Ops_13, mercury__parser__V_4_4, mercury__parser__V_8_8);
            }
#line 1048 "parser.m"
            if (mercury__parser__succeeded)
#line 1048 "parser.m"
              {
#line 2723 "parser.c"
                {
#line 2725 "parser.c"
                  mercury__parser__succeeded = mercury__varset____Unify____varset_1_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__V_5_5, mercury__parser__V_9_9);
                }
#line 1048 "parser.m"
                if (mercury__parser__succeeded)
#line 1048 "parser.m"
                  {
#line 2732 "parser.c"
                    mercury__parser__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2734 "parser.c"
                    mercury__parser__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2736 "parser.c"
                    {
#line 2738 "parser.c"
                      mercury__parser__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2740 "parser.c"
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_19_19, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_18_18));
#line 2742 "parser.c"
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_19_19, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_14));
#line 2744 "parser.c"
                    }
#line 2746 "parser.c"
                    {
#line 2748 "parser.c"
                      return mercury__parser__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__parser__TypeCtorInfo_17_17, mercury__parser__TypeInfo_19_19, (MR_Word) mercury__parser__V_6_6, (MR_Word) mercury__parser__V_10_10);
                    }
#line 1048 "parser.m"
                  }
#line 1048 "parser.m"
              }
#line 1048 "parser.m"
          }
#line 1048 "parser.m"
      }
#line 1048 "parser.m"
    return mercury__parser__succeeded;
#line 1048 "parser.m"
  }
#line 1048 "parser.m"
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
#line 2792 "parser.c"
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

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser____Compare____parse_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__parser__V_23_23 ;
	S2 =  mercury__parser__V_14_14 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2833 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_7_28  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
            mercury__parser__succeeded = (mercury__parser__V_7_28 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
            if (mercury__parser__succeeded)
#line 91 "private_builtin.opt"
              mercury__parser__V_16_16 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
            else
#line 97 "private_builtin.opt"
              {
#line 94 "private_builtin.opt"
                mercury__parser__succeeded = (mercury__parser__V_7_28 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                if (mercury__parser__succeeded)
#line 96 "private_builtin.opt"
                  mercury__parser__V_16_16 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                else
#line 98 "private_builtin.opt"
                  mercury__parser__V_16_16 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
              }
#line 2862 "parser.c"
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
#line 143 "parser.m"
                return;
              }
#line 143 "parser.m"
          }
#line 143 "parser.m"
        else
#line 2883 "parser.c"
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
#line 2896 "parser.c"
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
#line 143 "parser.m"
              return;
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
#line 2972 "parser.c"
            mercury__parser__succeeded = (strcmp(mercury__parser__V_5_5, mercury__parser__V_7_7) == 0);
#line 143 "parser.m"
            if (mercury__parser__succeeded)
#line 2976 "parser.c"
              {
#line 2978 "parser.c"
                return mercury__parser__succeeded = mercury__lexer____Unify____token_list_0_0(mercury__parser__V_6_6, mercury__parser__V_8_8);
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
#line 3002 "parser.c"
            {
#line 3004 "parser.c"
              return mercury__parser__succeeded = mercury__builtin__unify_2_p_0(mercury__parser__TypeInfo_for_T_11, mercury__parser__V_3_3, mercury__parser__V_4_4);
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

#line 1082 "parser.m"
MR_Word MR_CALL 
mercury__parser__parser_state_get_varset_1_f_0(
#line 1082 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_8,
#line 1082 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_9,
#line 1082 "parser.m"
  MR_Word mercury__parser__ParserState_3)
#line 1082 "parser.m"
{
#line 1106 "parser.m"
  {
#line 1106 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1106 "parser.m"
    MR_Word mercury__parser__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 2)));
#line 1106 "parser.m"
    MR_String mercury__parser__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 0)));
#line 1106 "parser.m"
    MR_Box mercury__parser__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 1));
#line 1106 "parser.m"
    MR_Word mercury__parser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 3)));

#line 1106 "parser.m"
    return mercury__parser__X_4;
#line 1106 "parser.m"
  }
#line 1082 "parser.m"
}

#line 1073 "parser.m"
void MR_CALL 
mercury__parser__final_parser_state_2_p_0(
#line 1073 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_5,
#line 1073 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_6,
#line 1073 "parser.m"
  MR_Word mercury__parser__ParserState_3,
#line 1073 "parser.m"
  MR_Word * mercury__parser__VarSet_4)
#line 1073 "parser.m"
{
#line 1106 "parser.m"
  {
#line 1106 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1106 "parser.m"
    MR_String mercury__parser__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 0)));
#line 1106 "parser.m"
    MR_Box mercury__parser__V_10_10 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 1));
#line 1106 "parser.m"
    MR_Word mercury__parser__V_11_11;

#line 1106 "parser.m"
    *mercury__parser__VarSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 2)));
#line 1106 "parser.m"
    mercury__parser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 3)));
#line 1106 "parser.m"
  }
#line 1073 "parser.m"
}

#line 1065 "parser.m"
void MR_CALL 
mercury__parser__init_parser_state_3_p_0(
#line 1065 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_10,
#line 1065 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_9,
#line 1065 "parser.m"
  MR_Box mercury__parser__Ops_4,
#line 1065 "parser.m"
  MR_String mercury__parser__FileName_5,
#line 1065 "parser.m"
  MR_Word * mercury__parser__ParserState_6)
#line 1065 "parser.m"
{
#line 1068 "parser.m"
  {
#line 1068 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1068 "parser.m"
    MR_Word mercury__parser__VarSet_7 = (MR_Word) &mercury__parser_scalar_common_2[2];
#line 1068 "parser.m"
    MR_Word mercury__parser__Names_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1068 "parser.m"
    MR_Word mercury__parser__V_3_15 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 1068 "parser.m"
    MR_Word mercury__parser__V_4_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1068 "parser.m"
    MR_Word mercury__parser__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1071 "parser.m"
    {
#line 1071 "parser.m"
      MR_Word base;
#line 1071 "parser.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "parser.m"
      *mercury__parser__ParserState_6 = base;
#line 1071 "parser.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__FileName_5));
#line 1071 "parser.m"
      MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__Ops_4;
#line 1071 "parser.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_7));
#line 1071 "parser.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Names_8));
#line 1071 "parser.m"
    }
#line 1068 "parser.m"
  }
#line 1065 "parser.m"
}

#line 1017 "parser.m"
static void MR_CALL 
mercury__parser__could_start_term_2_p_0(
#line 1017 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1017 "parser.m"
  MR_Word * mercury__parser__HeadVar__2_2)
#line 1017 "parser.m"
{
#line 1019 "parser.m"
  {
#line 1019 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 1019 "parser.m"
#line 1019 "parser.m"
    switch (MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) {
#line 1019 "parser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1019 "parser.m"
      case (MR_Integer) 0:
#line 1019 "parser.m"
#line 1019 "parser.m"
        switch (MR_unmkbody(mercury__parser__HeadVar__1_1)) {
#line 1019 "parser.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1019 "parser.m"
          case (MR_Integer) 0:
#line 1026 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 1:
#line 1027 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 2:
#line 1028 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 3:
#line 1029 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 4:
#line 1030 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 5:
#line 1031 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 6:
#line 1032 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 7:
#line 1033 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 8:
#line 1034 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 9:
#line 1035 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 10:
#line 1039 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
        }
#line 1019 "parser.m"
        break;
#line 1019 "parser.m"
      case (MR_Integer) 1:
#line 1019 "parser.m"
        *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1019 "parser.m"
        break;
#line 1019 "parser.m"
      case (MR_Integer) 2:
#line 1020 "parser.m"
        *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1019 "parser.m"
        break;
#line 1019 "parser.m"
      case (MR_Integer) 3:
#line 1019 "parser.m"
#line 1019 "parser.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) {
#line 1019 "parser.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1019 "parser.m"
          case (MR_Integer) 0:
#line 1021 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 1:
#line 1022 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 2:
#line 1023 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 3:
#line 1024 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 4:
#line 1025 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 5:
#line 1036 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 6:
#line 1037 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 7:
#line 1038 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
          case (MR_Integer) 8:
#line 1040 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 1019 "parser.m"
            break;
#line 1019 "parser.m"
        }
#line 1019 "parser.m"
        break;
#line 1019 "parser.m"
    }
#line 1019 "parser.m"
  }
#line 1017 "parser.m"
}

#line 1001 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_priority_3_p_0(
#line 1001 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1001 "parser.m"
  MR_Integer mercury__parser__MaxPriority_2,
#line 1001 "parser.m"
  MR_Integer mercury__parser__Priority_3)
#line 1001 "parser.m"
{
#line 1003 "parser.m"
  {
#line 1003 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 1003 "parser.m"
#line 1003 "parser.m"
    switch (mercury__parser__HeadVar__1_1) {
#line 1003 "parser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1003 "parser.m"
      case (MR_Integer) 0:
#line 1006 "parser.m"
        mercury__parser__succeeded = (mercury__parser__Priority_3 < mercury__parser__MaxPriority_2);
#line 1003 "parser.m"
        break;
#line 1003 "parser.m"
      case (MR_Integer) 1:
#line 1004 "parser.m"
        mercury__parser__succeeded = (mercury__parser__Priority_3 <= mercury__parser__MaxPriority_2);
#line 1003 "parser.m"
        break;
#line 1003 "parser.m"
    }
#line 1003 "parser.m"
    return mercury__parser__succeeded;
#line 1003 "parser.m"
  }
#line 1001 "parser.m"
}

#line 917 "parser.m"
static void MR_CALL 
mercury__parser__parse_args_5_p_0(
#line 917 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_35,
#line 917 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_34,
#line 917 "parser.m"
  MR_Word * mercury__parser__List_6,
#line 917 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
#line 917 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
#line 917 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
#line 917 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22)
#line 917 "parser.m"
{
#line 922 "parser.m"
  {
#line 922 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 922 "parser.m"
    MR_Word mercury__parser__Arg0_9;
#line 922 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 922 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_24_24;
#line 922 "parser.m"
    MR_Box mercury__parser__OpTable_47 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 1));
#line 922 "parser.m"
    MR_Integer mercury__parser__ArgPriority_48;
#line 922 "parser.m"
    MR_Integer mercury__parser__V_49_49;
#line 1104 "parser.m"
    MR_String mercury__parser__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 0)));
#line 1104 "parser.m"
    MR_Word mercury__parser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 2)));
#line 1104 "parser.m"
    MR_Word mercury__parser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 3)));
#line 3398 "parser.c"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
#line 3400 "parser.c"
    MR_Box mercury__parser__conv1_V_49_49;

#line 3403 "parser.c"
    {
#line 3405 "parser.c"
      mercury__parser__conv1_V_49_49 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_34), mercury__parser__OpTable_47);
    }
#line 3408 "parser.c"
    mercury__parser__V_49_49 = ((MR_Integer) mercury__parser__conv1_V_49_49);
#line 342 "parser.m"
    mercury__parser__ArgPriority_48 = (mercury__parser__V_49_49 + (MR_Integer) 1);
#line 343 "parser.m"
    {
#line 343 "parser.m"
      mercury__parser__parse_term_2_7_p_0(mercury__parser__TypeInfo_for_T_35, mercury__parser__TypeClassInfo_for_op_table_34, mercury__parser__ArgPriority_48, (MR_Integer) 1, &mercury__parser__Arg0_9, mercury__parser__STATE_VARIABLE_TokensLeft_0_19, &mercury__parser__STATE_VARIABLE_TokensLeft_23_23, mercury__parser__STATE_VARIABLE_PS_0_21, &mercury__parser__STATE_VARIABLE_PS_24_24);
    }
#line 949 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Arg0_9)) == (MR_mktag((MR_Integer) 1))))
#line 950 "parser.m"
      {
#line 952 "parser.m"
        *mercury__parser__List_6 = (MR_Word) mercury__parser__Arg0_9;
#line 950 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 950 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_22 = mercury__parser__STATE_VARIABLE_PS_24_24;
#line 950 "parser.m"
      }
#line 949 "parser.m"
    else
#line 925 "parser.m"
      {
#line 925 "parser.m"
        MR_Word mercury__parser__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Arg0_9, (MR_Integer) 0)));

#line 944 "parser.m"
        if ((mercury__parser__STATE_VARIABLE_TokensLeft_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 945 "parser.m"
          {
#line 946 "parser.m"
            {
#line 946 "parser.m"
              MR_Word base;
#line 946 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "parser.m"
              *mercury__parser__List_6 = base;
#line 946 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file in argument list"));
#line 946 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_23_23));
#line 946 "parser.m"
            }
#line 945 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 945 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_22 = mercury__parser__STATE_VARIABLE_PS_24_24;
#line 945 "parser.m"
          }
#line 944 "parser.m"
        else
#line 927 "parser.m"
          {
#line 927 "parser.m"
            MR_Word mercury__parser__Token_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 0)));
#line 927 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 2)));
#line 927 "parser.m"
            MR_Integer mercury__parser__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 1)));

#line 928 "parser.m"
            mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 938 "parser.m"
            if (mercury__parser__succeeded)
#line 929 "parser.m"
              {
#line 929 "parser.m"
                MR_Word mercury__parser__Tail0_13;

#line 929 "parser.m"
                {
#line 929 "parser.m"
                  mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_35, mercury__parser__TypeClassInfo_for_op_table_34, &mercury__parser__Tail0_13, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, mercury__parser__STATE_VARIABLE_TokensLeft_20, mercury__parser__STATE_VARIABLE_PS_24_24, mercury__parser__STATE_VARIABLE_PS_22);
                }
#line 933 "parser.m"
                if (((MR_tag((MR_Word) mercury__parser__Tail0_13)) == (MR_mktag((MR_Integer) 1))))
#line 936 "parser.m"
                  *mercury__parser__List_6 = mercury__parser__Tail0_13;
#line 933 "parser.m"
                else
#line 931 "parser.m"
                  {
#line 931 "parser.m"
                    MR_Word mercury__parser__Tail_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_13, (MR_Integer) 0)));
#line 931 "parser.m"
                    MR_Word mercury__parser__V_29_29;

#line 932 "parser.m"
                    {
#line 932 "parser.m"
                      mercury__parser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_29_29, 0) = ((MR_Box) (mercury__parser__Arg_10));
#line 932 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_29_29, 1) = ((MR_Box) (mercury__parser__Tail_14));
#line 932 "parser.m"
                    }
#line 932 "parser.m"
                    {
#line 932 "parser.m"
                      MR_Word base;
#line 932 "parser.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 932 "parser.m"
                      *mercury__parser__List_6 = base;
#line 932 "parser.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_29_29));
#line 932 "parser.m"
                    }
#line 931 "parser.m"
                  }
#line 929 "parser.m"
              }
#line 938 "parser.m"
            else
#line 940 "parser.m"
              {
#line 938 "parser.m"
                mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 940 "parser.m"
                if (mercury__parser__succeeded)
#line 939 "parser.m"
                  {
#line 939 "parser.m"
                    MR_Word mercury__parser__V_30_30;
#line 939 "parser.m"
                    MR_Word mercury__parser__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 939 "parser.m"
                    {
#line 939 "parser.m"
                      mercury__parser__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_30_30, 0) = ((MR_Box) (mercury__parser__Arg_10));
#line 939 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_30_30, 1) = ((MR_Box) (mercury__parser__V_31_31));
#line 939 "parser.m"
                    }
#line 939 "parser.m"
                    {
#line 939 "parser.m"
                      MR_Word base;
#line 939 "parser.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 939 "parser.m"
                      *mercury__parser__List_6 = base;
#line 939 "parser.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_30_30));
#line 939 "parser.m"
                    }
#line 939 "parser.m"
                    *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_26_26;
#line 939 "parser.m"
                  }
#line 940 "parser.m"
                else
#line 941 "parser.m"
                  {
#line 987 "parser.m"
                    MR_String mercury__parser__Op_69;
#line 987 "parser.m"
                    MR_Box mercury__parser__OpTable_70;
#line 1104 "parser.m"
                    MR_String mercury__parser__V_82_82;
#line 1104 "parser.m"
                    MR_Word mercury__parser__V_83_83;
#line 1104 "parser.m"
                    MR_Word mercury__parser__V_84_84;

#line 983 "parser.m"
                    *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 986 "parser.m"
                    if ((mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 986 "parser.m"
                      {
#line 986 "parser.m"
                        mercury__parser__Op_69 = (MR_String) ",";
#line 986 "parser.m"
                        mercury__parser__succeeded = MR_TRUE;
#line 986 "parser.m"
                      }
#line 986 "parser.m"
                    else
#line 986 "parser.m"
                    if (((MR_tag((MR_Word) mercury__parser__Token_11)) == (MR_mktag((MR_Integer) 1))))
#line 985 "parser.m"
                      {
#line 985 "parser.m"
                        mercury__parser__Op_69 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_11, (MR_Integer) 0)));
#line 985 "parser.m"
                        mercury__parser__succeeded = MR_TRUE;
#line 985 "parser.m"
                      }
#line 986 "parser.m"
                    else
#line 986 "parser.m"
                      mercury__parser__succeeded = MR_FALSE;
#line 987 "parser.m"
                    if (mercury__parser__succeeded)
#line 987 "parser.m"
                      {
#line 1104 "parser.m"
                        mercury__parser__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_24_24, (MR_Integer) 0)));
#line 1104 "parser.m"
                        mercury__parser__OpTable_70 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_24_24, (MR_Integer) 1));
#line 1104 "parser.m"
                        mercury__parser__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_24_24, (MR_Integer) 2)));
#line 1104 "parser.m"
                        mercury__parser__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_24_24, (MR_Integer) 3)));
#line 3620 "parser.c"
                        {
#line 3622 "parser.c"
                          MR_Integer mercury__parser__V_71_71;
#line 3624 "parser.c"
                          MR_Word mercury__parser__V_72_72;
#line 3626 "parser.c"
                          MR_Word mercury__parser__V_73_73;
#line 3628 "parser.c"
                          MR_bool MR_CALL (* mercury__parser__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3630 "parser.c"
                          MR_Box mercury__parser__conv5_V_71_71;
#line 3632 "parser.c"
                          MR_Box mercury__parser__conv4_V_72_72;
#line 3634 "parser.c"
                          MR_Box mercury__parser__conv3_V_73_73;

#line 3637 "parser.c"
                          {
#line 3639 "parser.c"
                            mercury__parser__succeeded = mercury__parser__func_2(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_34), mercury__parser__OpTable_70, ((MR_Box) (mercury__parser__Op_69)), &mercury__parser__conv5_V_71_71, &mercury__parser__conv4_V_72_72, &mercury__parser__conv3_V_73_73);
                          }
#line 3642 "parser.c"
                          if (mercury__parser__succeeded)
#line 3644 "parser.c"
                            {
#line 3646 "parser.c"
                              mercury__parser__V_71_71 = ((MR_Integer) mercury__parser__conv5_V_71_71);
#line 3648 "parser.c"
                              mercury__parser__V_72_72 = ((MR_Word) mercury__parser__conv4_V_72_72);
#line 3650 "parser.c"
                              mercury__parser__V_73_73 = ((MR_Word) mercury__parser__conv3_V_73_73);
#line 3652 "parser.c"
                              mercury__parser__succeeded = MR_TRUE;
#line 3654 "parser.c"
                            }
#line 3656 "parser.c"
                        }
#line 990 "parser.m"
                        if (!(mercury__parser__succeeded))
#line 3660 "parser.c"
                          {
#line 3662 "parser.c"
                            MR_Integer mercury__parser__V_74_74;
#line 3664 "parser.c"
                            MR_Word mercury__parser__V_75_75;
#line 3666 "parser.c"
                            MR_bool MR_CALL (* mercury__parser__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 8)));
#line 3668 "parser.c"
                            MR_Box mercury__parser__conv8_V_74_74;
#line 3670 "parser.c"
                            MR_Box mercury__parser__conv7_V_75_75;

#line 3673 "parser.c"
                            {
#line 3675 "parser.c"
                              mercury__parser__succeeded = mercury__parser__func_6(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_34), mercury__parser__OpTable_70, ((MR_Box) (mercury__parser__Op_69)), &mercury__parser__conv8_V_74_74, &mercury__parser__conv7_V_75_75);
                            }
#line 3678 "parser.c"
                            if (mercury__parser__succeeded)
#line 3680 "parser.c"
                              {
#line 3682 "parser.c"
                                mercury__parser__V_74_74 = ((MR_Integer) mercury__parser__conv8_V_74_74);
#line 3684 "parser.c"
                                mercury__parser__V_75_75 = ((MR_Word) mercury__parser__conv7_V_75_75);
#line 3686 "parser.c"
                                mercury__parser__succeeded = MR_TRUE;
#line 3688 "parser.c"
                              }
#line 3690 "parser.c"
                          }
#line 987 "parser.m"
                      }
#line 994 "parser.m"
                    if (mercury__parser__succeeded)
#line 993 "parser.m"
                      {
#line 993 "parser.m"
                        {
#line 993 "parser.m"
                          MR_Word base;
#line 993 "parser.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "parser.m"
                          *mercury__parser__List_6 = base;
#line 993 "parser.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
#line 993 "parser.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_20));
#line 993 "parser.m"
                        }
#line 993 "parser.m"
                      }
#line 994 "parser.m"
                    else
#line 995 "parser.m"
                      {
#line 995 "parser.m"
                        MR_Word base;
#line 995 "parser.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "parser.m"
                        *mercury__parser__List_6 = base;
#line 995 "parser.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "expected \140,\', \140)\', or operator"));
#line 995 "parser.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_20));
#line 995 "parser.m"
                      }
#line 941 "parser.m"
                  }
#line 940 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_22 = mercury__parser__STATE_VARIABLE_PS_24_24;
#line 940 "parser.m"
              }
#line 927 "parser.m"
          }
#line 925 "parser.m"
      }
#line 922 "parser.m"
  }
#line 917 "parser.m"
}

#line 863 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_2_6_p_0(
#line 863 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_68,
#line 863 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_67,
#line 863 "parser.m"
  MR_Word mercury__parser__Arg_7,
#line 863 "parser.m"
  MR_Word * mercury__parser__List_8,
#line 863 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
#line 863 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
#line 863 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_23,
#line 863 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_24)
#line 863 "parser.m"
{
#line 911 "parser.m"
  {
#line 911 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 911 "parser.m"
    if ((mercury__parser__STATE_VARIABLE_TokensLeft_0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "parser.m"
      {
#line 914 "parser.m"
        {
#line 914 "parser.m"
          MR_Word base;
#line 914 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "parser.m"
          *mercury__parser__List_8 = base;
#line 914 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file in list"));
#line 914 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_21));
#line 914 "parser.m"
        }
#line 912 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_0_21;
#line 912 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_24 = mercury__parser__STATE_VARIABLE_PS_0_23;
#line 912 "parser.m"
      }
#line 911 "parser.m"
    else
#line 870 "parser.m"
      {
#line 870 "parser.m"
        MR_Word mercury__parser__Token_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 0)));
#line 870 "parser.m"
        MR_Integer mercury__parser__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 1)));
#line 870 "parser.m"
        MR_Word mercury__parser__TermContext_13;
#line 870 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 2)));
#line 870 "parser.m"
        MR_String mercury__parser__FileName_78 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 0)));
#line 1102 "parser.m"
        MR_Box mercury__parser__V_81_81 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 1));
#line 1102 "parser.m"
        MR_Word mercury__parser__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 2)));
#line 1102 "parser.m"
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
#line 872 "parser.m"
        mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 883 "parser.m"
        if (mercury__parser__succeeded)
#line 873 "parser.m"
          {
#line 873 "parser.m"
            MR_Word mercury__parser__Tail0_14;

#line 873 "parser.m"
            {
#line 873 "parser.m"
              mercury__parser__parse_list_5_p_0(mercury__parser__TypeInfo_for_T_68, mercury__parser__TypeClassInfo_for_op_table_67, &mercury__parser__Tail0_14, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, mercury__parser__STATE_VARIABLE_TokensLeft_22, mercury__parser__STATE_VARIABLE_PS_0_23, mercury__parser__STATE_VARIABLE_PS_24);
            }
#line 878 "parser.m"
            if (((MR_tag((MR_Word) mercury__parser__Tail0_14)) == (MR_mktag((MR_Integer) 1))))
#line 881 "parser.m"
              *mercury__parser__List_8 = mercury__parser__Tail0_14;
#line 878 "parser.m"
            else
#line 875 "parser.m"
              {
#line 875 "parser.m"
                MR_Word mercury__parser__Tail_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_14, (MR_Integer) 0)));
#line 875 "parser.m"
                MR_Word mercury__parser__V_29_29;
#line 875 "parser.m"
                MR_Word mercury__parser__V_30_30 = (MR_Word) &mercury__parser_scalar_common_5[3];
#line 875 "parser.m"
                MR_Word mercury__parser__V_32_32;
#line 875 "parser.m"
                MR_Word mercury__parser__V_33_33;
#line 875 "parser.m"
                MR_Word mercury__parser__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 876 "parser.m"
                {
#line 876 "parser.m"
                  mercury__parser__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_33_33, 0) = ((MR_Box) (mercury__parser__Tail_15));
#line 876 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_33_33, 1) = ((MR_Box) (mercury__parser__V_34_34));
#line 876 "parser.m"
                }
#line 876 "parser.m"
                {
#line 876 "parser.m"
                  mercury__parser__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_32_32, 0) = ((MR_Box) (mercury__parser__Arg_7));
#line 876 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_32_32, 1) = ((MR_Box) (mercury__parser__V_33_33));
#line 876 "parser.m"
                }
#line 876 "parser.m"
                {
#line 876 "parser.m"
                  mercury__parser__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 876 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 0) = ((MR_Box) (mercury__parser__V_30_30));
#line 876 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 1) = ((MR_Box) (mercury__parser__V_32_32));
#line 876 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 2) = ((MR_Box) (mercury__parser__TermContext_13));
#line 876 "parser.m"
                }
#line 876 "parser.m"
                {
#line 876 "parser.m"
                  MR_Word base;
#line 876 "parser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 876 "parser.m"
                  *mercury__parser__List_8 = base;
#line 876 "parser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_29_29));
#line 876 "parser.m"
                }
#line 875 "parser.m"
              }
#line 873 "parser.m"
          }
#line 883 "parser.m"
        else
#line 902 "parser.m"
          {
#line 883 "parser.m"
            mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 902 "parser.m"
            if (mercury__parser__succeeded)
#line 884 "parser.m"
              {
#line 884 "parser.m"
                MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_35_35;
#line 884 "parser.m"
                MR_Word mercury__parser__Tail0_60;

#line 884 "parser.m"
                {
#line 884 "parser.m"
                  mercury__parser__parse_arg_5_p_0(mercury__parser__TypeInfo_for_T_68, mercury__parser__TypeClassInfo_for_op_table_67, &mercury__parser__Tail0_60, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, &mercury__parser__STATE_VARIABLE_TokensLeft_35_35, mercury__parser__STATE_VARIABLE_PS_0_23, mercury__parser__STATE_VARIABLE_PS_24);
                }
#line 897 "parser.m"
                if (((MR_tag((MR_Word) mercury__parser__Tail0_60)) == (MR_mktag((MR_Integer) 1))))
#line 898 "parser.m"
                  {
#line 900 "parser.m"
                    *mercury__parser__List_8 = mercury__parser__Tail0_60;
#line 898 "parser.m"
                    *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_35_35;
#line 898 "parser.m"
                  }
#line 897 "parser.m"
                else
#line 886 "parser.m"
                  {
#line 886 "parser.m"
                    MR_Word mercury__parser__Tail_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_60, (MR_Integer) 0)));
#line 893 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_37_37;
#line 888 "parser.m"
                    MR_Word mercury__parser__V_38_38;
#line 888 "parser.m"
                    MR_Integer mercury__parser___Context_18;

#line 888 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 888 "parser.m"
                    if (mercury__parser__succeeded)
#line 888 "parser.m"
                      {
#line 888 "parser.m"
                        mercury__parser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 0)));
#line 888 "parser.m"
                        mercury__parser___Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 1)));
#line 888 "parser.m"
                        mercury__parser__STATE_VARIABLE_TokensLeft_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 2)));
#line 888 "parser.m"
                        mercury__parser__succeeded = (mercury__parser__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 888 "parser.m"
                      }
#line 893 "parser.m"
                    if (mercury__parser__succeeded)
#line 891 "parser.m"
                      {
#line 891 "parser.m"
                        MR_Word mercury__parser__V_39_39;
#line 891 "parser.m"
                        MR_Word mercury__parser__V_40_40;
#line 891 "parser.m"
                        MR_Word mercury__parser__V_42_42;
#line 891 "parser.m"
                        MR_Word mercury__parser__V_43_43;
#line 891 "parser.m"
                        MR_Word mercury__parser__V_44_44;

#line 891 "parser.m"
                        *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_37_37;
#line 891 "parser.m"
                        mercury__parser__V_40_40 = (MR_Word) &mercury__parser_scalar_common_5[3];
#line 891 "parser.m"
                        mercury__parser__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 891 "parser.m"
                        {
#line 891 "parser.m"
                          mercury__parser__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_43_43, 0) = ((MR_Box) (mercury__parser__Tail_58));
#line 891 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_43_43, 1) = ((MR_Box) (mercury__parser__V_44_44));
#line 891 "parser.m"
                        }
#line 891 "parser.m"
                        {
#line 891 "parser.m"
                          mercury__parser__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_42_42, 0) = ((MR_Box) (mercury__parser__Arg_7));
#line 891 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_42_42, 1) = ((MR_Box) (mercury__parser__V_43_43));
#line 891 "parser.m"
                        }
#line 891 "parser.m"
                        {
#line 891 "parser.m"
                          mercury__parser__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 891 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_39_39, 0) = ((MR_Box) (mercury__parser__V_40_40));
#line 891 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_39_39, 1) = ((MR_Box) (mercury__parser__V_42_42));
#line 891 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_39_39, 2) = ((MR_Box) (mercury__parser__TermContext_13));
#line 891 "parser.m"
                        }
#line 891 "parser.m"
                        {
#line 891 "parser.m"
                          MR_Word base;
#line 891 "parser.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 891 "parser.m"
                          *mercury__parser__List_8 = base;
#line 891 "parser.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_39_39));
#line 891 "parser.m"
                        }
#line 891 "parser.m"
                      }
#line 893 "parser.m"
                    else
#line 894 "parser.m"
                      {
#line 894 "parser.m"
                        MR_Word mercury__parser__conv0_List_8;

#line 894 "parser.m"
                        {
#line 894 "parser.m"
                          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__parser__TypeClassInfo_for_op_table_67, (MR_String) "expecting \']\' or operator", &mercury__parser__conv0_List_8, mercury__parser__STATE_VARIABLE_TokensLeft_35_35, mercury__parser__STATE_VARIABLE_TokensLeft_22, *mercury__parser__STATE_VARIABLE_PS_24);
                        }
#line 894 "parser.m"
                        *mercury__parser__List_8 = (MR_Word) mercury__parser__conv0_List_8;
#line 894 "parser.m"
                      }
#line 886 "parser.m"
                  }
#line 884 "parser.m"
              }
#line 902 "parser.m"
            else
#line 906 "parser.m"
              {
#line 902 "parser.m"
                mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 906 "parser.m"
                if (mercury__parser__succeeded)
#line 903 "parser.m"
                  {
#line 903 "parser.m"
                    MR_Word mercury__parser__V_47_47 = (MR_Word) &mercury__parser_scalar_common_5[4];
#line 903 "parser.m"
                    MR_Word mercury__parser__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 903 "parser.m"
                    MR_Word mercury__parser__V_50_50;
#line 903 "parser.m"
                    MR_Word mercury__parser__V_51_51;
#line 903 "parser.m"
                    MR_Word mercury__parser__V_53_53;
#line 903 "parser.m"
                    MR_Word mercury__parser__V_54_54;
#line 903 "parser.m"
                    MR_Word mercury__parser__V_55_55;
#line 903 "parser.m"
                    MR_Word mercury__parser__Tail_62;

#line 903 "parser.m"
                    {
#line 903 "parser.m"
                      mercury__parser__Tail_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 903 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_62, 0) = ((MR_Box) (mercury__parser__V_47_47));
#line 903 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_62, 1) = ((MR_Box) (mercury__parser__V_49_49));
#line 903 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_62, 2) = ((MR_Box) (mercury__parser__TermContext_13));
#line 903 "parser.m"
                    }
#line 904 "parser.m"
                    mercury__parser__V_51_51 = (MR_Word) &mercury__parser_scalar_common_5[3];
#line 904 "parser.m"
                    mercury__parser__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 904 "parser.m"
                    {
#line 904 "parser.m"
                      mercury__parser__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_54_54, 0) = ((MR_Box) (mercury__parser__Tail_62));
#line 904 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_54_54, 1) = ((MR_Box) (mercury__parser__V_55_55));
#line 904 "parser.m"
                    }
#line 904 "parser.m"
                    {
#line 904 "parser.m"
                      mercury__parser__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_53_53, 0) = ((MR_Box) (mercury__parser__Arg_7));
#line 904 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_53_53, 1) = ((MR_Box) (mercury__parser__V_54_54));
#line 904 "parser.m"
                    }
#line 904 "parser.m"
                    {
#line 904 "parser.m"
                      mercury__parser__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 904 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__V_50_50, 0) = ((MR_Box) (mercury__parser__V_51_51));
#line 904 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__V_50_50, 1) = ((MR_Box) (mercury__parser__V_53_53));
#line 904 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__V_50_50, 2) = ((MR_Box) (mercury__parser__TermContext_13));
#line 904 "parser.m"
                    }
#line 904 "parser.m"
                    {
#line 904 "parser.m"
                      MR_Word base;
#line 904 "parser.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 904 "parser.m"
                      *mercury__parser__List_8 = base;
#line 904 "parser.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_50_50));
#line 904 "parser.m"
                    }
#line 903 "parser.m"
                    *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_26_26;
#line 903 "parser.m"
                  }
#line 906 "parser.m"
                else
#line 907 "parser.m"
                  {
#line 907 "parser.m"
                    MR_Word mercury__parser__conv1_List_8;

#line 907 "parser.m"
                    {
#line 907 "parser.m"
                      mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(mercury__parser__TypeClassInfo_for_op_table_67, mercury__parser__Token_11, mercury__parser__Context_12, (MR_String) "expected comma, \140|\', \140]\', or operator", &mercury__parser__conv1_List_8, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, mercury__parser__STATE_VARIABLE_TokensLeft_22, mercury__parser__STATE_VARIABLE_PS_0_23);
                    }
#line 907 "parser.m"
                    *mercury__parser__List_8 = (MR_Word) mercury__parser__conv1_List_8;
#line 907 "parser.m"
                  }
#line 906 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_24 = mercury__parser__STATE_VARIABLE_PS_0_23;
#line 906 "parser.m"
              }
#line 902 "parser.m"
          }
#line 870 "parser.m"
      }
#line 911 "parser.m"
  }
#line 863 "parser.m"
}

#line 848 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_5_p_0(
#line 848 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_22,
#line 848 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_21,
#line 848 "parser.m"
  MR_Word * mercury__parser__List_6,
#line 848 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_13,
#line 848 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_14,
#line 848 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_15,
#line 848 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_16)
#line 848 "parser.m"
{
#line 852 "parser.m"
  {
#line 852 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 852 "parser.m"
    MR_Word mercury__parser__Arg0_9;
#line 852 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_17_17;
#line 852 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_18_18;
#line 852 "parser.m"
    MR_Box mercury__parser__OpTable_30;
#line 852 "parser.m"
    MR_Integer mercury__parser__ArgPriority_31;
#line 852 "parser.m"
    MR_Integer mercury__parser__V_32_32;
#line 136 "private_builtin.opt"
    MR_Word mercury__parser__TypeInfo_23_38;
#line 1104 "parser.m"
    MR_String mercury__parser__V_41_41;
#line 1104 "parser.m"
    MR_Word mercury__parser__V_42_42;
#line 1104 "parser.m"
    MR_Word mercury__parser__V_43_43;
#line 4218 "parser.c"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
#line 4220 "parser.c"
    MR_Box mercury__parser__conv1_V_32_32;

#line 136 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__parse_list_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_21 ;
	Index =  (MR_Integer) 1 ;
		{
#line 136 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4238 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_23_38  = TypeInfo;
#line 136 "private_builtin.opt"
}
#line 1104 "parser.m"
    mercury__parser__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 0)));
#line 1104 "parser.m"
    mercury__parser__OpTable_30 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 1));
#line 1104 "parser.m"
    mercury__parser__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 2)));
#line 1104 "parser.m"
    mercury__parser__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 3)));
#line 4253 "parser.c"
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_21, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4255 "parser.c"
    {
#line 4257 "parser.c"
      mercury__parser__conv1_V_32_32 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_21), mercury__parser__OpTable_30);
    }
#line 4260 "parser.c"
    mercury__parser__V_32_32 = ((MR_Integer) mercury__parser__conv1_V_32_32);
#line 355 "parser.m"
    mercury__parser__ArgPriority_31 = (mercury__parser__V_32_32 + (MR_Integer) 1);
#line 356 "parser.m"
    {
#line 356 "parser.m"
      mercury__parser__parse_term_2_7_p_0(mercury__parser__TypeInfo_for_T_22, mercury__parser__TypeClassInfo_for_op_table_21, mercury__parser__ArgPriority_31, (MR_Integer) 2, &mercury__parser__Arg0_9, mercury__parser__STATE_VARIABLE_TokensLeft_0_13, &mercury__parser__STATE_VARIABLE_TokensLeft_17_17, mercury__parser__STATE_VARIABLE_PS_0_15, &mercury__parser__STATE_VARIABLE_PS_18_18);
    }
#line 857 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Arg0_9)) == (MR_mktag((MR_Integer) 1))))
#line 858 "parser.m"
      {
#line 860 "parser.m"
        *mercury__parser__List_6 = mercury__parser__Arg0_9;
#line 858 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_14 = mercury__parser__STATE_VARIABLE_TokensLeft_17_17;
#line 858 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_16 = mercury__parser__STATE_VARIABLE_PS_18_18;
#line 858 "parser.m"
      }
#line 857 "parser.m"
    else
#line 855 "parser.m"
      {
#line 855 "parser.m"
        MR_Word mercury__parser__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Arg0_9, (MR_Integer) 0)));

#line 856 "parser.m"
        {
#line 856 "parser.m"
          mercury__parser__parse_list_2_6_p_0(mercury__parser__TypeInfo_for_T_22, mercury__parser__TypeClassInfo_for_op_table_21, mercury__parser__Arg_10, mercury__parser__List_6, mercury__parser__STATE_VARIABLE_TokensLeft_17_17, mercury__parser__STATE_VARIABLE_TokensLeft_14, mercury__parser__STATE_VARIABLE_PS_18_18, mercury__parser__STATE_VARIABLE_PS_16);
#line 856 "parser.m"
          return;
        }
#line 855 "parser.m"
      }
#line 852 "parser.m"
  }
#line 848 "parser.m"
}

#line 828 "parser.m"
static void MR_CALL 
mercury__parser__parse_special_atom_7_p_0(
#line 828 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_32,
#line 828 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_31,
#line 828 "parser.m"
  MR_String mercury__parser__Atom_8,
#line 828 "parser.m"
  MR_Word mercury__parser__TermContext_9,
#line 828 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 828 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
#line 828 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
#line 828 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
#line 828 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21)
#line 828 "parser.m"
{
#line 844 "parser.m"
  {
#line 844 "parser.m"
    MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_18)) == (MR_mktag((MR_Integer) 1)));
#line 844 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_22_22;
#line 834 "parser.m"
    MR_Word mercury__parser__V_23_23;
#line 834 "parser.m"
    MR_Integer mercury__parser___Context_13;

#line 834 "parser.m"
    if (mercury__parser__succeeded)
#line 834 "parser.m"
      {
#line 834 "parser.m"
        mercury__parser__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 0)));
#line 834 "parser.m"
        mercury__parser___Context_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 1)));
#line 834 "parser.m"
        mercury__parser__STATE_VARIABLE_TokensLeft_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 2)));
#line 834 "parser.m"
        mercury__parser__succeeded = (mercury__parser__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 834 "parser.m"
      }
#line 844 "parser.m"
    if (mercury__parser__succeeded)
#line 835 "parser.m"
      {
#line 835 "parser.m"
        MR_Word mercury__parser__Args0_14;

#line 835 "parser.m"
        {
#line 835 "parser.m"
          mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_32, mercury__parser__TypeClassInfo_for_op_table_31, &mercury__parser__Args0_14, mercury__parser__STATE_VARIABLE_TokensLeft_22_22, mercury__parser__STATE_VARIABLE_TokensLeft_19, mercury__parser__STATE_VARIABLE_PS_0_20, mercury__parser__STATE_VARIABLE_PS_21);
        }
#line 839 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__Args0_14)) == (MR_mktag((MR_Integer) 1))))
#line 842 "parser.m"
          *mercury__parser__Term_10 = (MR_Word) mercury__parser__Args0_14;
#line 839 "parser.m"
        else
#line 837 "parser.m"
          {
#line 837 "parser.m"
            MR_Word mercury__parser__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Args0_14, (MR_Integer) 0)));
#line 837 "parser.m"
            MR_Word mercury__parser__V_26_26;
#line 837 "parser.m"
            MR_Word mercury__parser__V_27_27;

#line 838 "parser.m"
            {
#line 838 "parser.m"
              mercury__parser__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 838 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_27_27, 0) = ((MR_Box) (mercury__parser__Atom_8));
#line 838 "parser.m"
            }
#line 838 "parser.m"
            {
#line 838 "parser.m"
              mercury__parser__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 838 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_26_26, 0) = ((MR_Box) (mercury__parser__V_27_27));
#line 838 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_26_26, 1) = ((MR_Box) (mercury__parser__Args_15));
#line 838 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_26_26, 2) = ((MR_Box) (mercury__parser__TermContext_9));
#line 838 "parser.m"
            }
#line 838 "parser.m"
            {
#line 838 "parser.m"
              MR_Word base;
#line 838 "parser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 838 "parser.m"
              *mercury__parser__Term_10 = base;
#line 838 "parser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_26_26));
#line 838 "parser.m"
            }
#line 837 "parser.m"
          }
#line 835 "parser.m"
      }
#line 844 "parser.m"
    else
#line 845 "parser.m"
      {
#line 845 "parser.m"
        MR_Word mercury__parser__V_28_28;
#line 845 "parser.m"
        MR_Word mercury__parser__V_29_29;
#line 845 "parser.m"
        MR_Word mercury__parser__V_30_30;

#line 845 "parser.m"
        {
#line 845 "parser.m"
          mercury__parser__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 845 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 0) = ((MR_Box) (mercury__parser__Atom_8));
#line 845 "parser.m"
        }
#line 845 "parser.m"
        mercury__parser__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "parser.m"
        {
#line 845 "parser.m"
          mercury__parser__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 845 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_28_28, 0) = ((MR_Box) (mercury__parser__V_29_29));
#line 845 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_28_28, 1) = ((MR_Box) (mercury__parser__V_30_30));
#line 845 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_28_28, 2) = ((MR_Box) (mercury__parser__TermContext_9));
#line 845 "parser.m"
        }
#line 845 "parser.m"
        {
#line 845 "parser.m"
          MR_Word base;
#line 845 "parser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 845 "parser.m"
          *mercury__parser__Term_10 = base;
#line 845 "parser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_28_28));
#line 845 "parser.m"
        }
#line 845 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_21 = mercury__parser__STATE_VARIABLE_PS_0_20;
#line 845 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_19 = mercury__parser__STATE_VARIABLE_TokensLeft_0_18;
#line 845 "parser.m"
      }
#line 844 "parser.m"
  }
#line 828 "parser.m"
}

#line 799 "parser.m"
static void MR_CALL 
mercury__parser__check_for_higher_order_term_7_p_0(
#line 799 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_36,
#line 799 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_35,
#line 799 "parser.m"
  MR_Word mercury__parser__Term0_8,
#line 799 "parser.m"
  MR_Integer mercury__parser__Context_9,
#line 799 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 799 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
#line 799 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
#line 799 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_23,
#line 799 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_24)
#line 799 "parser.m"
{
#line 824 "parser.m"
  while (MR_TRUE)
#line 824 "parser.m"
    {
#line 824 "parser.m"
      /* tailcall optimized into a loop */
#line 824 "parser.m"
      {
#line 824 "parser.m"
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Term0_8)) == (MR_mktag((MR_Integer) 0)));
#line 824 "parser.m"
        MR_Word mercury__parser__Term1_13;
#line 824 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_25_25;
#line 809 "parser.m"
        MR_Word mercury__parser__V_26_26;
#line 810 "parser.m"
        MR_Integer mercury__parser___Context_14;

#line 809 "parser.m"
        if (mercury__parser__succeeded)
#line 809 "parser.m"
          {
#line 809 "parser.m"
            mercury__parser__Term1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term0_8, (MR_Integer) 0)));
#line 810 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_21)) == (MR_mktag((MR_Integer) 1)));
#line 810 "parser.m"
            if (mercury__parser__succeeded)
#line 810 "parser.m"
              {
#line 810 "parser.m"
                mercury__parser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 0)));
#line 810 "parser.m"
                mercury__parser___Context_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 1)));
#line 810 "parser.m"
                mercury__parser__STATE_VARIABLE_TokensLeft_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 2)));
#line 810 "parser.m"
                mercury__parser__succeeded = (mercury__parser__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 810 "parser.m"
              }
#line 809 "parser.m"
          }
#line 824 "parser.m"
        if (mercury__parser__succeeded)
#line 812 "parser.m"
          {
#line 812 "parser.m"
            MR_Word mercury__parser__TermContext_15;
#line 812 "parser.m"
            MR_Word mercury__parser__Args0_16;
#line 812 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_27_27;
#line 812 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_PS_28_28;
#line 812 "parser.m"
            MR_String mercury__parser__FileName_42;
#line 136 "private_builtin.opt"
            MR_Word mercury__parser__TypeInfo_38_38;
#line 1102 "parser.m"
            MR_Box mercury__parser__V_45_45;
#line 1102 "parser.m"
            MR_Word mercury__parser__V_46_46;
#line 1102 "parser.m"
            MR_Word mercury__parser__V_47_47;

#line 136 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__check_for_higher_order_term_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_35 ;
	Index =  (MR_Integer) 1 ;
		{
#line 136 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4573 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_38_38  = TypeInfo;
#line 136 "private_builtin.opt"
}
#line 1102 "parser.m"
            mercury__parser__FileName_42 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 0)));
#line 1102 "parser.m"
            mercury__parser__V_45_45 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 1));
#line 1102 "parser.m"
            mercury__parser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 2)));
#line 1102 "parser.m"
            mercury__parser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 3)));
#line 123 "term.opt"
            {
#line 123 "term.opt"
              mercury__parser__TermContext_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__TermContext_15, 0) = ((MR_Box) (mercury__parser__FileName_42));
#line 123 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__TermContext_15, 1) = ((MR_Box) (mercury__parser__Context_9));
#line 123 "term.opt"
            }
#line 813 "parser.m"
            {
#line 813 "parser.m"
              mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_36, mercury__parser__TypeClassInfo_for_op_table_35, &mercury__parser__Args0_16, mercury__parser__STATE_VARIABLE_TokensLeft_25_25, &mercury__parser__STATE_VARIABLE_TokensLeft_27_27, mercury__parser__STATE_VARIABLE_PS_0_23, &mercury__parser__STATE_VARIABLE_PS_28_28);
            }
#line 819 "parser.m"
            if (((MR_tag((MR_Word) mercury__parser__Args0_16)) == (MR_mktag((MR_Integer) 1))))
#line 821 "parser.m"
              {
#line 822 "parser.m"
                *mercury__parser__Term_10 = (MR_Word) mercury__parser__Args0_16;
#line 821 "parser.m"
                *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_27_27;
#line 821 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_24 = mercury__parser__STATE_VARIABLE_PS_28_28;
#line 821 "parser.m"
              }
#line 819 "parser.m"
            else
#line 815 "parser.m"
              {
#line 815 "parser.m"
                MR_Word mercury__parser__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Args0_16, (MR_Integer) 0)));
#line 815 "parser.m"
                MR_Word mercury__parser__Term2_18;
#line 815 "parser.m"
                MR_Word mercury__parser__V_29_29;
#line 815 "parser.m"
                MR_Word mercury__parser__V_30_30 = (MR_Word) &mercury__parser_scalar_common_5[2];
#line 815 "parser.m"
                MR_Word mercury__parser__V_32_32;

#line 816 "parser.m"
                {
#line 816 "parser.m"
                  mercury__parser__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_32_32, 0) = ((MR_Box) (mercury__parser__Term1_13));
#line 816 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_32_32, 1) = ((MR_Box) (mercury__parser__Args_17));
#line 816 "parser.m"
                }
#line 816 "parser.m"
                {
#line 816 "parser.m"
                  mercury__parser__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 816 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 0) = ((MR_Box) (mercury__parser__V_30_30));
#line 816 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 1) = ((MR_Box) (mercury__parser__V_32_32));
#line 816 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 2) = ((MR_Box) (mercury__parser__TermContext_15));
#line 816 "parser.m"
                }
#line 816 "parser.m"
                {
#line 816 "parser.m"
                  mercury__parser__Term2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 816 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__Term2_18, 0) = ((MR_Box) (mercury__parser__V_29_29));
#line 816 "parser.m"
                }
#line 818 "parser.m"
                /* direct tailcall eliminated */
#line 818 "parser.m"
                {
#line 818 "parser.m"
                  MR_Word mercury__parser__Term0__tmp_copy_8 = mercury__parser__Term2_18;
#line 818 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_21 = mercury__parser__STATE_VARIABLE_TokensLeft_27_27;
#line 818 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_23 = mercury__parser__STATE_VARIABLE_PS_28_28;

#line 818 "parser.m"
                  mercury__parser__STATE_VARIABLE_PS_0_23 = mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_23;
#line 818 "parser.m"
                  mercury__parser__STATE_VARIABLE_TokensLeft_0_21 = mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_21;
#line 818 "parser.m"
                  mercury__parser__Term0_8 = mercury__parser__Term0__tmp_copy_8;
#line 818 "parser.m"
                }
#line 818 "parser.m"
                continue;
#line 815 "parser.m"
              }
#line 812 "parser.m"
          }
#line 824 "parser.m"
        else
#line 825 "parser.m"
          {
#line 825 "parser.m"
            *mercury__parser__Term_10 = mercury__parser__Term0_8;
#line 825 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_24 = mercury__parser__STATE_VARIABLE_PS_0_23;
#line 825 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_0_21;
#line 825 "parser.m"
          }
#line 824 "parser.m"
      }
#line 824 "parser.m"
      break;
#line 824 "parser.m"
    }
#line 799 "parser.m"
}

#line 660 "parser.m"
static MR_bool MR_CALL 
mercury__parser__parse_simple_term_2_8_p_0(
#line 660 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_131,
#line 660 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_130,
#line 660 "parser.m"
  MR_Word mercury__parser__Token_9,
#line 660 "parser.m"
  MR_Integer mercury__parser__Context_10,
#line 660 "parser.m"
  MR_Integer mercury__parser__Prec_11,
#line 660 "parser.m"
  MR_Word * mercury__parser__Term_12,
#line 660 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_40,
#line 660 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_41,
#line 660 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_42,
#line 660 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_43)
#line 660 "parser.m"
{
#line 688 "parser.m"
  while (MR_TRUE)
#line 688 "parser.m"
    {
#line 688 "parser.m"
      /* tailcall optimized into a loop */
#line 688 "parser.m"
      {
#line 688 "parser.m"
        MR_bool mercury__parser__succeeded;

#line 688 "parser.m"
#line 688 "parser.m"
        switch (MR_tag((MR_Word) mercury__parser__Token_9)) {
#line 688 "parser.m"
          default:
#line 688 "parser.m"
            mercury__parser__succeeded = MR_FALSE;
#line 688 "parser.m"
            break;
#line 688 "parser.m"
          case (MR_Integer) 0:
#line 688 "parser.m"
#line 688 "parser.m"
            switch (MR_unmkbody(mercury__parser__Token_9)) {
#line 688 "parser.m"
              default:
#line 688 "parser.m"
                mercury__parser__succeeded = MR_FALSE;
#line 688 "parser.m"
                break;
#line 688 "parser.m"
              case (MR_Integer) 0:
#line 729 "parser.m"
                {
#line 729 "parser.m"
                  MR_Word mercury__parser__Term0_31;
#line 729 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_68_68;

#line 730 "parser.m"
                  {
#line 730 "parser.m"
                    mercury__parser__parse_term_5_p_0(mercury__parser__TypeInfo_for_T_131, mercury__parser__TypeClassInfo_for_op_table_130, &mercury__parser__Term0_31, mercury__parser__STATE_VARIABLE_TokensLeft_0_40, &mercury__parser__STATE_VARIABLE_TokensLeft_68_68, mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__STATE_VARIABLE_PS_43);
                  }
#line 739 "parser.m"
                  if (((MR_tag((MR_Word) mercury__parser__Term0_31)) == (MR_mktag((MR_Integer) 1))))
#line 741 "parser.m"
                    {
#line 742 "parser.m"
                      *mercury__parser__Term_12 = mercury__parser__Term0_31;
#line 741 "parser.m"
                      *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_68_68;
#line 741 "parser.m"
                    }
#line 739 "parser.m"
                  else
#line 735 "parser.m"
                    {
#line 735 "parser.m"
                      MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_70_70;
#line 733 "parser.m"
                      MR_Word mercury__parser__V_71_71;
#line 733 "parser.m"
                      MR_Integer mercury__parser___Context_108;

#line 733 "parser.m"
                      mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 733 "parser.m"
                      if (mercury__parser__succeeded)
#line 733 "parser.m"
                        {
#line 733 "parser.m"
                          mercury__parser__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_68_68, (MR_Integer) 0)));
#line 733 "parser.m"
                          mercury__parser___Context_108 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_68_68, (MR_Integer) 1)));
#line 733 "parser.m"
                          mercury__parser__STATE_VARIABLE_TokensLeft_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_68_68, (MR_Integer) 2)));
#line 733 "parser.m"
                          mercury__parser__succeeded = (mercury__parser__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 733 "parser.m"
                        }
#line 735 "parser.m"
                      if (mercury__parser__succeeded)
#line 734 "parser.m"
                        {
#line 734 "parser.m"
                          *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_70_70;
#line 734 "parser.m"
                          *mercury__parser__Term_12 = mercury__parser__Term0_31;
#line 734 "parser.m"
                        }
#line 735 "parser.m"
                      else
#line 736 "parser.m"
                        {
#line 736 "parser.m"
                          MR_Word mercury__parser__conv0_Term_12;

#line 736 "parser.m"
                          {
#line 736 "parser.m"
                            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__parser__TypeClassInfo_for_op_table_130, (MR_String) "expecting \140)\' or operator", &mercury__parser__conv0_Term_12, mercury__parser__STATE_VARIABLE_TokensLeft_68_68, mercury__parser__STATE_VARIABLE_TokensLeft_41, *mercury__parser__STATE_VARIABLE_PS_43);
                          }
#line 736 "parser.m"
                          *mercury__parser__Term_12 = (MR_Word) mercury__parser__conv0_Term_12;
#line 736 "parser.m"
                        }
#line 735 "parser.m"
                    }
#line 729 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 729 "parser.m"
                }
#line 688 "parser.m"
                break;
#line 688 "parser.m"
              case (MR_Integer) 1:
#line 745 "parser.m"
                {
#line 745 "parser.m"
                  MR_Word mercury__parser__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 746 "parser.m"
                  /* direct tailcall eliminated */
#line 746 "parser.m"
                  {
#line 746 "parser.m"
                    MR_Word mercury__parser__Token__tmp_copy_9 = mercury__parser__V_65_65;

#line 746 "parser.m"
                    mercury__parser__Token_9 = mercury__parser__Token__tmp_copy_9;
#line 746 "parser.m"
                  }
#line 746 "parser.m"
                  continue;
#line 745 "parser.m"
                }
#line 688 "parser.m"
                break;
#line 688 "parser.m"
              case (MR_Integer) 3:
#line 748 "parser.m"
                {
#line 748 "parser.m"
                  MR_Word mercury__parser__TermContext_117;
#line 752 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_58_58;
#line 750 "parser.m"
                  MR_Word mercury__parser__V_59_59;
#line 750 "parser.m"
                  MR_Integer mercury__parser___Context_114;

#line 749 "parser.m"
                  {
#line 749 "parser.m"
                    mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__Context_10, &mercury__parser__TermContext_117);
                  }
#line 750 "parser.m"
                  mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_40)) == (MR_mktag((MR_Integer) 1)));
#line 750 "parser.m"
                  if (mercury__parser__succeeded)
#line 750 "parser.m"
                    {
#line 750 "parser.m"
                      mercury__parser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 0)));
#line 750 "parser.m"
                      mercury__parser___Context_114 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 1)));
#line 750 "parser.m"
                      mercury__parser__STATE_VARIABLE_TokensLeft_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 2)));
#line 750 "parser.m"
                      mercury__parser__succeeded = (mercury__parser__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 750 "parser.m"
                    }
#line 752 "parser.m"
                  if (mercury__parser__succeeded)
#line 751 "parser.m"
                    {
#line 751 "parser.m"
                      {
#line 751 "parser.m"
                        mercury__parser__parse_special_atom_7_p_0(mercury__parser__TypeInfo_for_T_131, mercury__parser__TypeClassInfo_for_op_table_130, (MR_String) "[]", mercury__parser__TermContext_117, mercury__parser__Term_12, mercury__parser__STATE_VARIABLE_TokensLeft_58_58, mercury__parser__STATE_VARIABLE_TokensLeft_41, mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__STATE_VARIABLE_PS_43);
                      }
#line 751 "parser.m"
                    }
#line 752 "parser.m"
                  else
#line 753 "parser.m"
                    {
#line 753 "parser.m"
                      mercury__parser__parse_list_5_p_0(mercury__parser__TypeInfo_for_T_131, mercury__parser__TypeClassInfo_for_op_table_130, mercury__parser__Term_12, mercury__parser__STATE_VARIABLE_TokensLeft_0_40, mercury__parser__STATE_VARIABLE_TokensLeft_41, mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__STATE_VARIABLE_PS_43);
                    }
#line 748 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 748 "parser.m"
                }
#line 688 "parser.m"
                break;
#line 688 "parser.m"
              case (MR_Integer) 5:
#line 756 "parser.m"
                {
#line 756 "parser.m"
                  MR_Word mercury__parser__TermContext_128;
#line 762 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_44_44;
#line 759 "parser.m"
                  MR_Word mercury__parser__V_45_45;
#line 759 "parser.m"
                  MR_Integer mercury__parser___Context_119;

#line 757 "parser.m"
                  {
#line 757 "parser.m"
                    mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__Context_10, &mercury__parser__TermContext_128);
                  }
#line 759 "parser.m"
                  mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_40)) == (MR_mktag((MR_Integer) 1)));
#line 759 "parser.m"
                  if (mercury__parser__succeeded)
#line 759 "parser.m"
                    {
#line 759 "parser.m"
                      mercury__parser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 0)));
#line 759 "parser.m"
                      mercury__parser___Context_119 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 1)));
#line 759 "parser.m"
                      mercury__parser__STATE_VARIABLE_TokensLeft_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 2)));
#line 759 "parser.m"
                      mercury__parser__succeeded = (mercury__parser__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 759 "parser.m"
                    }
#line 762 "parser.m"
                  if (mercury__parser__succeeded)
#line 761 "parser.m"
                    {
#line 761 "parser.m"
                      {
#line 761 "parser.m"
                        mercury__parser__parse_special_atom_7_p_0(mercury__parser__TypeInfo_for_T_131, mercury__parser__TypeClassInfo_for_op_table_130, (MR_String) "{}", mercury__parser__TermContext_128, mercury__parser__Term_12, mercury__parser__STATE_VARIABLE_TokensLeft_44_44, mercury__parser__STATE_VARIABLE_TokensLeft_41, mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__STATE_VARIABLE_PS_43);
                      }
#line 761 "parser.m"
                    }
#line 762 "parser.m"
                  else
#line 767 "parser.m"
                    {
#line 767 "parser.m"
                      MR_Word mercury__parser__SubTerm0_35;
#line 767 "parser.m"
                      MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_49_49;

#line 767 "parser.m"
                      {
#line 767 "parser.m"
                        mercury__parser__parse_term_5_p_0(mercury__parser__TypeInfo_for_T_131, mercury__parser__TypeClassInfo_for_op_table_130, &mercury__parser__SubTerm0_35, mercury__parser__STATE_VARIABLE_TokensLeft_0_40, &mercury__parser__STATE_VARIABLE_TokensLeft_49_49, mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__STATE_VARIABLE_PS_43);
                      }
#line 781 "parser.m"
                      if (((MR_tag((MR_Word) mercury__parser__SubTerm0_35)) == (MR_mktag((MR_Integer) 1))))
#line 782 "parser.m"
                        {
#line 784 "parser.m"
                          *mercury__parser__Term_12 = mercury__parser__SubTerm0_35;
#line 782 "parser.m"
                          *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_49_49;
#line 782 "parser.m"
                        }
#line 781 "parser.m"
                      else
#line 769 "parser.m"
                        {
#line 769 "parser.m"
                          MR_Word mercury__parser__SubTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__SubTerm0_35, (MR_Integer) 0)));
#line 769 "parser.m"
                          MR_Word mercury__parser__ArgTerms_37;
#line 777 "parser.m"
                          MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_51_51;
#line 772 "parser.m"
                          MR_Word mercury__parser__V_52_52;
#line 772 "parser.m"
                          MR_Integer mercury__parser___Context_121;

#line 770 "parser.m"
                          {
#line 770 "parser.m"
                            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(mercury__parser__SubTerm_36, &mercury__parser__ArgTerms_37);
                          }
#line 772 "parser.m"
                          mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 772 "parser.m"
                          if (mercury__parser__succeeded)
#line 772 "parser.m"
                            {
#line 772 "parser.m"
                              mercury__parser__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_49_49, (MR_Integer) 0)));
#line 772 "parser.m"
                              mercury__parser___Context_121 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_49_49, (MR_Integer) 1)));
#line 772 "parser.m"
                              mercury__parser__STATE_VARIABLE_TokensLeft_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_49_49, (MR_Integer) 2)));
#line 772 "parser.m"
                              mercury__parser__succeeded = (mercury__parser__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 772 "parser.m"
                            }
#line 777 "parser.m"
                          if (mercury__parser__succeeded)
#line 775 "parser.m"
                            {
#line 775 "parser.m"
                              MR_Word mercury__parser__V_53_53;
#line 775 "parser.m"
                              MR_Word mercury__parser__V_54_54;

#line 775 "parser.m"
                              *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_51_51;
#line 775 "parser.m"
                              mercury__parser__V_54_54 = (MR_Word) &mercury__parser_scalar_common_5[1];
#line 775 "parser.m"
                              {
#line 775 "parser.m"
                                mercury__parser__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 775 "parser.m"
                                MR_hl_field(MR_mktag(0), mercury__parser__V_53_53, 0) = ((MR_Box) (mercury__parser__V_54_54));
#line 775 "parser.m"
                                MR_hl_field(MR_mktag(0), mercury__parser__V_53_53, 1) = ((MR_Box) (mercury__parser__ArgTerms_37));
#line 775 "parser.m"
                                MR_hl_field(MR_mktag(0), mercury__parser__V_53_53, 2) = ((MR_Box) (mercury__parser__TermContext_128));
#line 775 "parser.m"
                              }
#line 775 "parser.m"
                              {
#line 775 "parser.m"
                                MR_Word base;
#line 775 "parser.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 775 "parser.m"
                                *mercury__parser__Term_12 = base;
#line 775 "parser.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_53_53));
#line 775 "parser.m"
                              }
#line 775 "parser.m"
                            }
#line 777 "parser.m"
                          else
#line 778 "parser.m"
                            {
#line 778 "parser.m"
                              MR_Word mercury__parser__conv1_Term_12;

#line 778 "parser.m"
                              {
#line 778 "parser.m"
                                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__parser__TypeClassInfo_for_op_table_130, (MR_String) "expecting \140}\' or operator", &mercury__parser__conv1_Term_12, mercury__parser__STATE_VARIABLE_TokensLeft_49_49, mercury__parser__STATE_VARIABLE_TokensLeft_41, *mercury__parser__STATE_VARIABLE_PS_43);
                              }
#line 778 "parser.m"
                              *mercury__parser__Term_12 = (MR_Word) mercury__parser__conv1_Term_12;
#line 778 "parser.m"
                            }
#line 769 "parser.m"
                        }
#line 767 "parser.m"
                    }
#line 756 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 756 "parser.m"
                }
#line 688 "parser.m"
                break;
#line 688 "parser.m"
            }
#line 688 "parser.m"
            break;
#line 688 "parser.m"
          case (MR_Integer) 1:
#line 667 "parser.m"
            {
#line 667 "parser.m"
              MR_String mercury__parser__Atom_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_9, (MR_Integer) 0)));
#line 667 "parser.m"
              MR_Word mercury__parser__TermContext_16;
#line 679 "parser.m"
              MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_91_91;
#line 669 "parser.m"
              MR_Word mercury__parser__V_92_92;
#line 669 "parser.m"
              MR_Integer mercury__parser___Context_17;

#line 668 "parser.m"
              {
#line 668 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__Context_10, &mercury__parser__TermContext_16);
              }
#line 669 "parser.m"
              mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_40)) == (MR_mktag((MR_Integer) 1)));
#line 669 "parser.m"
              if (mercury__parser__succeeded)
#line 669 "parser.m"
                {
#line 669 "parser.m"
                  mercury__parser__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 0)));
#line 669 "parser.m"
                  mercury__parser___Context_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 1)));
#line 669 "parser.m"
                  mercury__parser__STATE_VARIABLE_TokensLeft_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 2)));
#line 669 "parser.m"
                  mercury__parser__succeeded = (mercury__parser__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 669 "parser.m"
                }
#line 679 "parser.m"
              if (mercury__parser__succeeded)
#line 670 "parser.m"
                {
#line 670 "parser.m"
                  MR_Word mercury__parser__Args0_18;

#line 670 "parser.m"
                  {
#line 670 "parser.m"
                    mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_131, mercury__parser__TypeClassInfo_for_op_table_130, &mercury__parser__Args0_18, mercury__parser__STATE_VARIABLE_TokensLeft_91_91, mercury__parser__STATE_VARIABLE_TokensLeft_41, mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__STATE_VARIABLE_PS_43);
                  }
#line 674 "parser.m"
                  if (((MR_tag((MR_Word) mercury__parser__Args0_18)) == (MR_mktag((MR_Integer) 1))))
#line 677 "parser.m"
                    *mercury__parser__Term_12 = (MR_Word) mercury__parser__Args0_18;
#line 674 "parser.m"
                  else
#line 672 "parser.m"
                    {
#line 672 "parser.m"
                      MR_Word mercury__parser__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Args0_18, (MR_Integer) 0)));
#line 672 "parser.m"
                      MR_Word mercury__parser__V_95_95;
#line 672 "parser.m"
                      MR_Word mercury__parser__V_96_96;

#line 673 "parser.m"
                      {
#line 673 "parser.m"
                        mercury__parser__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 673 "parser.m"
                        MR_hl_field(MR_mktag(0), mercury__parser__V_96_96, 0) = ((MR_Box) (mercury__parser__Atom_15));
#line 673 "parser.m"
                      }
#line 673 "parser.m"
                      {
#line 673 "parser.m"
                        mercury__parser__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 673 "parser.m"
                        MR_hl_field(MR_mktag(0), mercury__parser__V_95_95, 0) = ((MR_Box) (mercury__parser__V_96_96));
#line 673 "parser.m"
                        MR_hl_field(MR_mktag(0), mercury__parser__V_95_95, 1) = ((MR_Box) (mercury__parser__Args_19));
#line 673 "parser.m"
                        MR_hl_field(MR_mktag(0), mercury__parser__V_95_95, 2) = ((MR_Box) (mercury__parser__TermContext_16));
#line 673 "parser.m"
                      }
#line 673 "parser.m"
                      {
#line 673 "parser.m"
                        MR_Word base;
#line 673 "parser.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 673 "parser.m"
                        *mercury__parser__Term_12 = base;
#line 673 "parser.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_95_95));
#line 673 "parser.m"
                      }
#line 672 "parser.m"
                    }
#line 670 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 670 "parser.m"
                }
#line 679 "parser.m"
              else
#line 680 "parser.m"
                {
#line 680 "parser.m"
                  MR_Box mercury__parser__OpTable_22 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 1));
#line 680 "parser.m"
                  MR_Word mercury__parser__V_98_98;
#line 680 "parser.m"
                  MR_Word mercury__parser__V_99_99;
#line 680 "parser.m"
                  MR_Word mercury__parser__V_100_100;
#line 1104 "parser.m"
                  MR_String mercury__parser__V_158_158 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 0)));
#line 1104 "parser.m"
                  MR_Word mercury__parser__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 2)));
#line 1104 "parser.m"
                  MR_Word mercury__parser__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 3)));

#line 681 "parser.m"
                  {
#line 681 "parser.m"
                    mercury__parser__succeeded = mercury__ops__lookup_op_2_p_0(mercury__parser__TypeClassInfo_for_op_table_130, mercury__parser__OpTable_22, mercury__parser__Atom_15);
                  }
#line 683 "parser.m"
                  if (mercury__parser__succeeded)
#line 682 "parser.m"
                    {
#line 682 "parser.m"
                      MR_Integer mercury__parser__V_97_97;

#line 682 "parser.m"
                      {
#line 682 "parser.m"
                        mercury__parser__V_97_97 = mercury__ops__max_priority_1_f_0(mercury__parser__TypeClassInfo_for_op_table_130, mercury__parser__OpTable_22);
                      }
#line 682 "parser.m"
                      mercury__parser__succeeded = (mercury__parser__Prec_11 > mercury__parser__V_97_97);
#line 682 "parser.m"
                    }
#line 683 "parser.m"
                  else
#line 684 "parser.m"
                    mercury__parser__succeeded = MR_TRUE;
#line 680 "parser.m"
                  if (mercury__parser__succeeded)
#line 680 "parser.m"
                    {
#line 686 "parser.m"
                      mercury__parser__V_100_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 680 "parser.m"
                      *mercury__parser__STATE_VARIABLE_PS_43 = mercury__parser__STATE_VARIABLE_PS_0_42;
#line 680 "parser.m"
                      *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_0_40;
#line 686 "parser.m"
                      {
#line 686 "parser.m"
                        mercury__parser__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 686 "parser.m"
                        MR_hl_field(MR_mktag(0), mercury__parser__V_99_99, 0) = ((MR_Box) (mercury__parser__Atom_15));
#line 686 "parser.m"
                      }
#line 686 "parser.m"
                      {
#line 686 "parser.m"
                        mercury__parser__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 686 "parser.m"
                        MR_hl_field(MR_mktag(0), mercury__parser__V_98_98, 0) = ((MR_Box) (mercury__parser__V_99_99));
#line 686 "parser.m"
                        MR_hl_field(MR_mktag(0), mercury__parser__V_98_98, 1) = ((MR_Box) (mercury__parser__V_100_100));
#line 686 "parser.m"
                        MR_hl_field(MR_mktag(0), mercury__parser__V_98_98, 2) = ((MR_Box) (mercury__parser__TermContext_16));
#line 686 "parser.m"
                      }
#line 686 "parser.m"
                      {
#line 686 "parser.m"
                        MR_Word base;
#line 686 "parser.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 686 "parser.m"
                        *mercury__parser__Term_12 = base;
#line 686 "parser.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_98_98));
#line 686 "parser.m"
                      }
#line 686 "parser.m"
                      mercury__parser__succeeded = MR_TRUE;
#line 680 "parser.m"
                    }
#line 680 "parser.m"
                }
#line 667 "parser.m"
            }
#line 688 "parser.m"
            break;
#line 688 "parser.m"
          case (MR_Integer) 2:
#line 689 "parser.m"
            {
#line 689 "parser.m"
              MR_String mercury__parser__VarName_23 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__parser__Token_9, (MR_Integer) 0)));
#line 689 "parser.m"
              MR_Word mercury__parser__Var_24;
#line 689 "parser.m"
              MR_Word mercury__parser__V_90_90;
#line 689 "parser.m"
              MR_Word mercury__parser__TermContext_101;

#line 690 "parser.m"
              {
#line 690 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(mercury__parser__TypeInfo_for_T_131, mercury__parser__VarName_23, &mercury__parser__Var_24, mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__STATE_VARIABLE_PS_43);
              }
#line 691 "parser.m"
              {
#line 691 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*mercury__parser__STATE_VARIABLE_PS_43, mercury__parser__Context_10, &mercury__parser__TermContext_101);
              }
#line 692 "parser.m"
              {
#line 692 "parser.m"
                mercury__parser__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "parser.m"
                MR_hl_field(MR_mktag(1), mercury__parser__V_90_90, 0) = ((MR_Box) (mercury__parser__Var_24));
#line 692 "parser.m"
                MR_hl_field(MR_mktag(1), mercury__parser__V_90_90, 1) = ((MR_Box) (mercury__parser__TermContext_101));
#line 692 "parser.m"
              }
#line 692 "parser.m"
              {
#line 692 "parser.m"
                MR_Word base;
#line 692 "parser.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 692 "parser.m"
                *mercury__parser__Term_12 = base;
#line 692 "parser.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_90_90));
#line 692 "parser.m"
              }
#line 689 "parser.m"
              *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_0_40;
#line 689 "parser.m"
              mercury__parser__succeeded = MR_TRUE;
#line 689 "parser.m"
            }
#line 688 "parser.m"
            break;
#line 688 "parser.m"
          case (MR_Integer) 3:
#line 688 "parser.m"
#line 688 "parser.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 0)))) {
#line 688 "parser.m"
              default:
#line 688 "parser.m"
                mercury__parser__succeeded = MR_FALSE;
#line 688 "parser.m"
                break;
#line 688 "parser.m"
              case (MR_Integer) 0:
#line 694 "parser.m"
                {
#line 694 "parser.m"
                  MR_Integer mercury__parser__Int_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
#line 694 "parser.m"
                  MR_Word mercury__parser__V_86_86;
#line 694 "parser.m"
                  MR_Word mercury__parser__V_87_87;
#line 694 "parser.m"
                  MR_Word mercury__parser__V_88_88;
#line 694 "parser.m"
                  MR_Word mercury__parser__TermContext_102;

#line 695 "parser.m"
                  {
#line 695 "parser.m"
                    mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__Context_10, &mercury__parser__TermContext_102);
                  }
#line 696 "parser.m"
                  {
#line 696 "parser.m"
                    mercury__parser__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 696 "parser.m"
                    MR_hl_field(MR_mktag(1), mercury__parser__V_87_87, 0) = ((MR_Box) (mercury__parser__Int_25));
#line 696 "parser.m"
                  }
#line 696 "parser.m"
                  mercury__parser__V_88_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "parser.m"
                  {
#line 696 "parser.m"
                    mercury__parser__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 696 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_86_86, 0) = ((MR_Box) (mercury__parser__V_87_87));
#line 696 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_86_86, 1) = ((MR_Box) (mercury__parser__V_88_88));
#line 696 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_86_86, 2) = ((MR_Box) (mercury__parser__TermContext_102));
#line 696 "parser.m"
                  }
#line 696 "parser.m"
                  {
#line 696 "parser.m"
                    MR_Word base;
#line 696 "parser.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 696 "parser.m"
                    *mercury__parser__Term_12 = base;
#line 696 "parser.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_86_86));
#line 696 "parser.m"
                  }
#line 694 "parser.m"
                  *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_0_40;
#line 694 "parser.m"
                  *mercury__parser__STATE_VARIABLE_PS_43 = mercury__parser__STATE_VARIABLE_PS_0_42;
#line 694 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 694 "parser.m"
                }
#line 688 "parser.m"
                break;
#line 688 "parser.m"
              case (MR_Integer) 1:
#line 698 "parser.m"
                {
#line 698 "parser.m"
                  MR_Word mercury__parser__LexerBase_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
#line 698 "parser.m"
                  MR_Word mercury__parser__String_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 2)));
#line 698 "parser.m"
                  MR_Word mercury__parser__TermBase_28;
#line 698 "parser.m"
                  MR_Word mercury__parser__V_83_83;
#line 698 "parser.m"
                  MR_Word mercury__parser__V_84_84;
#line 698 "parser.m"
                  MR_Word mercury__parser__V_85_85;
#line 698 "parser.m"
                  MR_Word mercury__parser__TermContext_103;

#line 699 "parser.m"
                  {
#line 699 "parser.m"
                    mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__Context_10, &mercury__parser__TermContext_103);
                  }
#line 703 "parser.m"
                  mercury__parser__TermBase_28 = ((&mercury__parser_vector_common_6[0 + mercury__parser__LexerBase_26]))->mercury__parser__vector_common_type_6_0__vct_6_f_0;
#line 713 "parser.m"
                  {
#line 713 "parser.m"
                    mercury__parser__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "parser.m"
                    MR_hl_field(MR_mktag(2), mercury__parser__V_84_84, 0) = ((MR_Box) (mercury__parser__TermBase_28));
#line 713 "parser.m"
                    MR_hl_field(MR_mktag(2), mercury__parser__V_84_84, 1) = ((MR_Box) (mercury__parser__String_27));
#line 713 "parser.m"
                  }
#line 713 "parser.m"
                  mercury__parser__V_85_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 713 "parser.m"
                  {
#line 713 "parser.m"
                    mercury__parser__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 713 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_83_83, 0) = ((MR_Box) (mercury__parser__V_84_84));
#line 713 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_83_83, 1) = ((MR_Box) (mercury__parser__V_85_85));
#line 713 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_83_83, 2) = ((MR_Box) (mercury__parser__TermContext_103));
#line 713 "parser.m"
                  }
#line 713 "parser.m"
                  {
#line 713 "parser.m"
                    MR_Word base;
#line 713 "parser.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 713 "parser.m"
                    *mercury__parser__Term_12 = base;
#line 713 "parser.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_83_83));
#line 713 "parser.m"
                  }
#line 698 "parser.m"
                  *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_0_40;
#line 698 "parser.m"
                  *mercury__parser__STATE_VARIABLE_PS_43 = mercury__parser__STATE_VARIABLE_PS_0_42;
#line 698 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 698 "parser.m"
                }
#line 688 "parser.m"
                break;
#line 688 "parser.m"
              case (MR_Integer) 2:
#line 716 "parser.m"
                {
#line 716 "parser.m"
                  MR_Float mercury__parser__Float_29 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
#line 716 "parser.m"
                  MR_Word mercury__parser__V_80_80;
#line 716 "parser.m"
                  MR_Word mercury__parser__V_81_81;
#line 716 "parser.m"
                  MR_Word mercury__parser__V_82_82;
#line 716 "parser.m"
                  MR_Word mercury__parser__TermContext_104;

#line 717 "parser.m"
                  {
#line 717 "parser.m"
                    mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__Context_10, &mercury__parser__TermContext_104);
                  }
#line 718 "parser.m"
                  {
#line 718 "parser.m"
                    mercury__parser__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "parser.m"
                    MR_hl_field(MR_mktag(3), mercury__parser__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 718 "parser.m"
                    MR_hl_field(MR_mktag(3), mercury__parser__V_81_81, 1) = MR_box_float(mercury__parser__Float_29);
#line 718 "parser.m"
                  }
#line 718 "parser.m"
                  mercury__parser__V_82_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 718 "parser.m"
                  {
#line 718 "parser.m"
                    mercury__parser__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 718 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_80_80, 0) = ((MR_Box) (mercury__parser__V_81_81));
#line 718 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_80_80, 1) = ((MR_Box) (mercury__parser__V_82_82));
#line 718 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_80_80, 2) = ((MR_Box) (mercury__parser__TermContext_104));
#line 718 "parser.m"
                  }
#line 718 "parser.m"
                  {
#line 718 "parser.m"
                    MR_Word base;
#line 718 "parser.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 718 "parser.m"
                    *mercury__parser__Term_12 = base;
#line 718 "parser.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_80_80));
#line 718 "parser.m"
                  }
#line 716 "parser.m"
                  *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_0_40;
#line 716 "parser.m"
                  *mercury__parser__STATE_VARIABLE_PS_43 = mercury__parser__STATE_VARIABLE_PS_0_42;
#line 716 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 716 "parser.m"
                }
#line 688 "parser.m"
                break;
#line 688 "parser.m"
              case (MR_Integer) 3:
#line 720 "parser.m"
                {
#line 720 "parser.m"
                  MR_Word mercury__parser__V_77_77;
#line 720 "parser.m"
                  MR_Word mercury__parser__V_78_78;
#line 720 "parser.m"
                  MR_Word mercury__parser__V_79_79;
#line 720 "parser.m"
                  MR_Word mercury__parser__TermContext_105;
#line 720 "parser.m"
                  MR_String mercury__parser__String_106 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));

#line 721 "parser.m"
                  {
#line 721 "parser.m"
                    mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__Context_10, &mercury__parser__TermContext_105);
                  }
#line 722 "parser.m"
                  {
#line 722 "parser.m"
                    mercury__parser__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "parser.m"
                    MR_hl_field(MR_mktag(3), mercury__parser__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 722 "parser.m"
                    MR_hl_field(MR_mktag(3), mercury__parser__V_78_78, 1) = ((MR_Box) (mercury__parser__String_106));
#line 722 "parser.m"
                  }
#line 722 "parser.m"
                  mercury__parser__V_79_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 722 "parser.m"
                  {
#line 722 "parser.m"
                    mercury__parser__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 722 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_77_77, 0) = ((MR_Box) (mercury__parser__V_78_78));
#line 722 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_77_77, 1) = ((MR_Box) (mercury__parser__V_79_79));
#line 722 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_77_77, 2) = ((MR_Box) (mercury__parser__TermContext_105));
#line 722 "parser.m"
                  }
#line 722 "parser.m"
                  {
#line 722 "parser.m"
                    MR_Word base;
#line 722 "parser.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 722 "parser.m"
                    *mercury__parser__Term_12 = base;
#line 722 "parser.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_77_77));
#line 722 "parser.m"
                  }
#line 720 "parser.m"
                  *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_0_40;
#line 720 "parser.m"
                  *mercury__parser__STATE_VARIABLE_PS_43 = mercury__parser__STATE_VARIABLE_PS_0_42;
#line 720 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 720 "parser.m"
                }
#line 688 "parser.m"
                break;
#line 688 "parser.m"
              case (MR_Integer) 4:
#line 724 "parser.m"
                {
#line 724 "parser.m"
                  MR_String mercury__parser__Name_30 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
#line 724 "parser.m"
                  MR_Word mercury__parser__V_74_74;
#line 724 "parser.m"
                  MR_Word mercury__parser__V_75_75;
#line 724 "parser.m"
                  MR_Word mercury__parser__V_76_76;
#line 724 "parser.m"
                  MR_Word mercury__parser__TermContext_107;

#line 725 "parser.m"
                  {
#line 725 "parser.m"
                    mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__Context_10, &mercury__parser__TermContext_107);
                  }
#line 726 "parser.m"
                  {
#line 726 "parser.m"
                    mercury__parser__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "parser.m"
                    MR_hl_field(MR_mktag(3), mercury__parser__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 726 "parser.m"
                    MR_hl_field(MR_mktag(3), mercury__parser__V_75_75, 1) = ((MR_Box) (mercury__parser__Name_30));
#line 726 "parser.m"
                  }
#line 726 "parser.m"
                  mercury__parser__V_76_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 726 "parser.m"
                  {
#line 726 "parser.m"
                    mercury__parser__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 726 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_74_74, 0) = ((MR_Box) (mercury__parser__V_75_75));
#line 726 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_74_74, 1) = ((MR_Box) (mercury__parser__V_76_76));
#line 726 "parser.m"
                    MR_hl_field(MR_mktag(0), mercury__parser__V_74_74, 2) = ((MR_Box) (mercury__parser__TermContext_107));
#line 726 "parser.m"
                  }
#line 726 "parser.m"
                  {
#line 726 "parser.m"
                    MR_Word base;
#line 726 "parser.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 726 "parser.m"
                    *mercury__parser__Term_12 = base;
#line 726 "parser.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_74_74));
#line 726 "parser.m"
                  }
#line 724 "parser.m"
                  *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_0_40;
#line 724 "parser.m"
                  *mercury__parser__STATE_VARIABLE_PS_43 = mercury__parser__STATE_VARIABLE_PS_0_42;
#line 724 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 724 "parser.m"
                }
#line 688 "parser.m"
                break;
#line 688 "parser.m"
            }
#line 688 "parser.m"
            break;
#line 688 "parser.m"
        }
#line 688 "parser.m"
        return mercury__parser__succeeded;
#line 688 "parser.m"
      }
#line 688 "parser.m"
      break;
#line 688 "parser.m"
    }
#line 660 "parser.m"
}

#line 625 "parser.m"
static void MR_CALL 
mercury__parser__parse_simple_term_8_p_0(
#line 625 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_27,
#line 625 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_26,
#line 625 "parser.m"
  MR_Word mercury__parser__Token_9,
#line 625 "parser.m"
  MR_Integer mercury__parser__Context_10,
#line 625 "parser.m"
  MR_Integer mercury__parser__Priority_11,
#line 625 "parser.m"
  MR_Word * mercury__parser__Term_12,
#line 625 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_16,
#line 625 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_17,
#line 625 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_18,
#line 625 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_19)
#line 625 "parser.m"
{
#line 635 "parser.m"
  {
#line 635 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 635 "parser.m"
    MR_Word mercury__parser__Term0_15;
#line 635 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_20_20;
#line 635 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_21_21;

#line 632 "parser.m"
    {
#line 632 "parser.m"
      mercury__parser__succeeded = mercury__parser__parse_simple_term_2_8_p_0(mercury__parser__TypeInfo_for_T_27, mercury__parser__TypeClassInfo_for_op_table_26, mercury__parser__Token_9, mercury__parser__Context_10, mercury__parser__Priority_11, &mercury__parser__Term0_15, mercury__parser__STATE_VARIABLE_TokensLeft_0_16, &mercury__parser__STATE_VARIABLE_TokensLeft_20_20, mercury__parser__STATE_VARIABLE_PS_0_18, &mercury__parser__STATE_VARIABLE_PS_21_21);
    }
#line 635 "parser.m"
    if (mercury__parser__succeeded)
#line 634 "parser.m"
      {
#line 634 "parser.m"
        mercury__parser__check_for_higher_order_term_7_p_0(mercury__parser__TypeInfo_for_T_27, mercury__parser__TypeClassInfo_for_op_table_26, mercury__parser__Term0_15, mercury__parser__Context_10, mercury__parser__Term_12, mercury__parser__STATE_VARIABLE_TokensLeft_20_20, mercury__parser__STATE_VARIABLE_TokensLeft_17, mercury__parser__STATE_VARIABLE_PS_21_21, mercury__parser__STATE_VARIABLE_PS_19);
#line 634 "parser.m"
        return;
      }
#line 635 "parser.m"
    else
#line 636 "parser.m"
      {
#line 987 "parser.m"
        MR_String mercury__parser__Op_38;
#line 987 "parser.m"
        MR_Box mercury__parser__OpTable_39;
#line 1104 "parser.m"
        MR_String mercury__parser__V_51_51;
#line 1104 "parser.m"
        MR_Word mercury__parser__V_52_52;
#line 1104 "parser.m"
        MR_Word mercury__parser__V_53_53;

#line 983 "parser.m"
        {
#line 983 "parser.m"
          MR_Word base;
#line 983 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 983 "parser.m"
          *mercury__parser__STATE_VARIABLE_TokensLeft_17 = base;
#line 983 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Token_9));
#line 983 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Context_10));
#line 983 "parser.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_16));
#line 983 "parser.m"
        }
#line 986 "parser.m"
        if ((mercury__parser__Token_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 986 "parser.m"
          {
#line 986 "parser.m"
            mercury__parser__Op_38 = (MR_String) ",";
#line 986 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 986 "parser.m"
          }
#line 986 "parser.m"
        else
#line 986 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__Token_9)) == (MR_mktag((MR_Integer) 1))))
#line 985 "parser.m"
          {
#line 985 "parser.m"
            mercury__parser__Op_38 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_9, (MR_Integer) 0)));
#line 985 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 985 "parser.m"
          }
#line 986 "parser.m"
        else
#line 986 "parser.m"
          mercury__parser__succeeded = MR_FALSE;
#line 987 "parser.m"
        if (mercury__parser__succeeded)
#line 987 "parser.m"
          {
#line 1104 "parser.m"
            mercury__parser__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_18, (MR_Integer) 0)));
#line 1104 "parser.m"
            mercury__parser__OpTable_39 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_18, (MR_Integer) 1));
#line 1104 "parser.m"
            mercury__parser__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_18, (MR_Integer) 2)));
#line 1104 "parser.m"
            mercury__parser__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_18, (MR_Integer) 3)));
#line 5834 "parser.c"
            {
#line 5836 "parser.c"
              MR_Integer mercury__parser__V_40_40;
#line 5838 "parser.c"
              MR_Word mercury__parser__V_41_41;
#line 5840 "parser.c"
              MR_Word mercury__parser__V_42_42;
#line 5842 "parser.c"
              MR_bool MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5844 "parser.c"
              MR_Box mercury__parser__conv3_V_40_40;
#line 5846 "parser.c"
              MR_Box mercury__parser__conv2_V_41_41;
#line 5848 "parser.c"
              MR_Box mercury__parser__conv1_V_42_42;

#line 5851 "parser.c"
              {
#line 5853 "parser.c"
                mercury__parser__succeeded = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_26), mercury__parser__OpTable_39, ((MR_Box) (mercury__parser__Op_38)), &mercury__parser__conv3_V_40_40, &mercury__parser__conv2_V_41_41, &mercury__parser__conv1_V_42_42);
              }
#line 5856 "parser.c"
              if (mercury__parser__succeeded)
#line 5858 "parser.c"
                {
#line 5860 "parser.c"
                  mercury__parser__V_40_40 = ((MR_Integer) mercury__parser__conv3_V_40_40);
#line 5862 "parser.c"
                  mercury__parser__V_41_41 = ((MR_Word) mercury__parser__conv2_V_41_41);
#line 5864 "parser.c"
                  mercury__parser__V_42_42 = ((MR_Word) mercury__parser__conv1_V_42_42);
#line 5866 "parser.c"
                  mercury__parser__succeeded = MR_TRUE;
#line 5868 "parser.c"
                }
#line 5870 "parser.c"
            }
#line 990 "parser.m"
            if (!(mercury__parser__succeeded))
#line 5874 "parser.c"
              {
#line 5876 "parser.c"
                MR_Integer mercury__parser__V_43_43;
#line 5878 "parser.c"
                MR_Word mercury__parser__V_44_44;
#line 5880 "parser.c"
                MR_bool MR_CALL (* mercury__parser__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 8)));
#line 5882 "parser.c"
                MR_Box mercury__parser__conv6_V_43_43;
#line 5884 "parser.c"
                MR_Box mercury__parser__conv5_V_44_44;

#line 5887 "parser.c"
                {
#line 5889 "parser.c"
                  mercury__parser__succeeded = mercury__parser__func_4(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_26), mercury__parser__OpTable_39, ((MR_Box) (mercury__parser__Op_38)), &mercury__parser__conv6_V_43_43, &mercury__parser__conv5_V_44_44);
                }
#line 5892 "parser.c"
                if (mercury__parser__succeeded)
#line 5894 "parser.c"
                  {
#line 5896 "parser.c"
                    mercury__parser__V_43_43 = ((MR_Integer) mercury__parser__conv6_V_43_43);
#line 5898 "parser.c"
                    mercury__parser__V_44_44 = ((MR_Word) mercury__parser__conv5_V_44_44);
#line 5900 "parser.c"
                    mercury__parser__succeeded = MR_TRUE;
#line 5902 "parser.c"
                  }
#line 5904 "parser.c"
              }
#line 987 "parser.m"
          }
#line 994 "parser.m"
        if (mercury__parser__succeeded)
#line 993 "parser.m"
          {
#line 993 "parser.m"
            {
#line 993 "parser.m"
              MR_Word base;
#line 993 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "parser.m"
              *mercury__parser__Term_12 = base;
#line 993 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
#line 993 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_17));
#line 993 "parser.m"
            }
#line 993 "parser.m"
          }
#line 994 "parser.m"
        else
#line 995 "parser.m"
          {
#line 995 "parser.m"
            MR_Word base;
#line 995 "parser.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "parser.m"
            *mercury__parser__Term_12 = base;
#line 995 "parser.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected token at start of (sub)term"));
#line 995 "parser.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_17));
#line 995 "parser.m"
          }
#line 636 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_19 = mercury__parser__STATE_VARIABLE_PS_0_18;
#line 636 "parser.m"
      }
#line 635 "parser.m"
  }
#line 625 "parser.m"
}

#line 567 "parser.m"
static MR_bool MR_CALL 
mercury__parser__parse_backquoted_operator_7_p_0(
#line 567 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_31,
#line 567 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_30,
#line 567 "parser.m"
  MR_Word * mercury__parser__Qualifier_8,
#line 567 "parser.m"
  MR_String * mercury__parser__OpName_9,
#line 567 "parser.m"
  MR_Word * mercury__parser__VariableTerm_10,
#line 567 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
#line 567 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
#line 567 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
#line 567 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22)
#line 567 "parser.m"
{
#line 572 "parser.m"
  {
#line 572 "parser.m"
    MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_19)) == (MR_mktag((MR_Integer) 1)));
#line 572 "parser.m"
    MR_Word mercury__parser__Token_13;
#line 572 "parser.m"
    MR_Integer mercury__parser__Context_14;
#line 572 "parser.m"
    MR_Word mercury__parser__TermContext_15;
#line 572 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 572 "parser.m"
    MR_String mercury__parser__FileName_38;
#line 1102 "parser.m"
    MR_Box mercury__parser__V_41_41;
#line 1102 "parser.m"
    MR_Word mercury__parser__V_42_42;
#line 1102 "parser.m"
    MR_Word mercury__parser__V_43_43;

#line 573 "parser.m"
    if (mercury__parser__succeeded)
#line 573 "parser.m"
      {
#line 573 "parser.m"
        mercury__parser__Token_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 0)));
#line 573 "parser.m"
        mercury__parser__Context_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 1)));
#line 573 "parser.m"
        mercury__parser__STATE_VARIABLE_TokensLeft_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 2)));
#line 1102 "parser.m"
        mercury__parser__FileName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 0)));
#line 1102 "parser.m"
        mercury__parser__V_41_41 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 1));
#line 1102 "parser.m"
        mercury__parser__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 2)));
#line 1102 "parser.m"
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
#line 581 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__Token_13)) == (MR_mktag((MR_Integer) 1))))
#line 582 "parser.m"
          {
#line 582 "parser.m"
            MR_String mercury__parser__OpName0_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_13, (MR_Integer) 0)));
#line 582 "parser.m"
            MR_Word mercury__parser__V_24_24;

#line 583 "parser.m"
            *mercury__parser__VariableTerm_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "parser.m"
            mercury__parser__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "parser.m"
            {
#line 584 "parser.m"
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_9_p_0(mercury__parser__TypeClassInfo_for_op_table_30, mercury__parser__V_24_24, mercury__parser__Qualifier_8, mercury__parser__TermContext_15, mercury__parser__OpName0_18, mercury__parser__OpName_9, mercury__parser__STATE_VARIABLE_TokensLeft_23_23, mercury__parser__STATE_VARIABLE_TokensLeft_20, mercury__parser__STATE_VARIABLE_PS_0_21, mercury__parser__STATE_VARIABLE_PS_22);
            }
#line 582 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 582 "parser.m"
          }
#line 581 "parser.m"
        else
#line 581 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__Token_13)) == (MR_mktag((MR_Integer) 2))))
#line 576 "parser.m"
          {
#line 576 "parser.m"
            MR_String mercury__parser__VariableOp_16 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__parser__Token_13, (MR_Integer) 0)));
#line 576 "parser.m"
            MR_Word mercury__parser__Var_17;
#line 576 "parser.m"
            MR_Word mercury__parser__V_28_28;
#line 576 "parser.m"
            MR_Word mercury__parser__V_29_29;

#line 577 "parser.m"
            *mercury__parser__Qualifier_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "parser.m"
            *mercury__parser__OpName_9 = (MR_String) "";
#line 579 "parser.m"
            {
#line 579 "parser.m"
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(mercury__parser__TypeInfo_for_T_31, mercury__parser__VariableOp_16, &mercury__parser__Var_17, mercury__parser__STATE_VARIABLE_PS_0_21, mercury__parser__STATE_VARIABLE_PS_22);
            }
#line 580 "parser.m"
            {
#line 580 "parser.m"
              mercury__parser__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "parser.m"
              MR_hl_field(MR_mktag(1), mercury__parser__V_28_28, 0) = ((MR_Box) (mercury__parser__Var_17));
#line 580 "parser.m"
              MR_hl_field(MR_mktag(1), mercury__parser__V_28_28, 1) = ((MR_Box) (mercury__parser__TermContext_15));
#line 580 "parser.m"
            }
#line 580 "parser.m"
            mercury__parser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "parser.m"
            {
#line 580 "parser.m"
              MR_Word base;
#line 580 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "parser.m"
              *mercury__parser__VariableTerm_10 = base;
#line 580 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__V_28_28));
#line 580 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__V_29_29));
#line 580 "parser.m"
            }
#line 576 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
#line 576 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 576 "parser.m"
          }
#line 581 "parser.m"
        else
#line 581 "parser.m"
          mercury__parser__succeeded = MR_FALSE;
#line 573 "parser.m"
      }
#line 572 "parser.m"
    return mercury__parser__succeeded;
#line 572 "parser.m"
  }
#line 567 "parser.m"
}

#line 483 "parser.m"
static void MR_CALL 
mercury__parser__parse_rest_9_p_0(
#line 483 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_84,
#line 483 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_83,
#line 483 "parser.m"
  MR_Integer mercury__parser__MaxPriority_10,
#line 483 "parser.m"
  MR_Word mercury__parser__TermKind_11,
#line 483 "parser.m"
  MR_Integer mercury__parser__LeftPriority_12,
#line 483 "parser.m"
  MR_Word mercury__parser__LeftTerm_13,
#line 483 "parser.m"
  MR_Word * mercury__parser__Term_14,
#line 483 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_40,
#line 483 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_41,
#line 483 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_42,
#line 483 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_43)
#line 483 "parser.m"
{
#line 551 "parser.m"
  while (MR_TRUE)
#line 551 "parser.m"
    {
#line 551 "parser.m"
      /* tailcall optimized into a loop */
#line 551 "parser.m"
      {
#line 551 "parser.m"
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_40)) == (MR_mktag((MR_Integer) 1)));
#line 551 "parser.m"
        MR_Integer mercury__parser__Context_18;
#line 551 "parser.m"
        MR_Integer mercury__parser__OpPriority_24;
#line 551 "parser.m"
        MR_Word mercury__parser__RightAssoc_26;
#line 551 "parser.m"
        MR_Word mercury__parser__Qualifier_27;
#line 551 "parser.m"
        MR_String mercury__parser__Op_28;
#line 551 "parser.m"
        MR_Word mercury__parser__VariableTerm_29;
#line 551 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_PS_46_46;
#line 551 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_47_47;
#line 492 "parser.m"
        MR_Word mercury__parser__Token_17;
#line 492 "parser.m"
        MR_String mercury__parser__Op0_19;
#line 492 "parser.m"
        MR_Word mercury__parser__LeftAssoc_25;
#line 492 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_44_44;
#line 518 "parser.m"
        MR_Integer mercury__parser__OpPriority0_21;
#line 518 "parser.m"
        MR_Word mercury__parser__LeftAssoc0_22;
#line 518 "parser.m"
        MR_Word mercury__parser__RightAssoc0_23;
#line 507 "parser.m"
        MR_Box mercury__parser__OpTable_20;
#line 1104 "parser.m"
        MR_String mercury__parser__V_99_99;
#line 1104 "parser.m"
        MR_Word mercury__parser__V_100_100;
#line 1104 "parser.m"
        MR_Word mercury__parser__V_101_101;

#line 492 "parser.m"
        if (mercury__parser__succeeded)
#line 492 "parser.m"
          {
#line 492 "parser.m"
            mercury__parser__Token_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 0)));
#line 492 "parser.m"
            mercury__parser__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 1)));
#line 492 "parser.m"
            mercury__parser__STATE_VARIABLE_TokensLeft_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 2)));
#line 497 "parser.m"
#line 497 "parser.m"
            switch (MR_tag((MR_Word) mercury__parser__Token_17)) {
#line 497 "parser.m"
              default:
#line 497 "parser.m"
                mercury__parser__succeeded = MR_FALSE;
#line 497 "parser.m"
                break;
#line 497 "parser.m"
              case (MR_Integer) 0:
#line 497 "parser.m"
#line 497 "parser.m"
                switch (MR_unmkbody(mercury__parser__Token_17)) {
#line 497 "parser.m"
                  default:
#line 497 "parser.m"
                    mercury__parser__succeeded = MR_FALSE;
#line 497 "parser.m"
                    break;
#line 497 "parser.m"
                  case (MR_Integer) 7:
#line 498 "parser.m"
                    {
#line 499 "parser.m"
                      mercury__parser__succeeded = (mercury__parser__TermKind_11 == (MR_Integer) 2);
#line 499 "parser.m"
                      mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 498 "parser.m"
                      if (mercury__parser__succeeded)
#line 498 "parser.m"
                        {
#line 500 "parser.m"
                          mercury__parser__Op0_19 = (MR_String) "|";
#line 500 "parser.m"
                          mercury__parser__succeeded = MR_TRUE;
#line 498 "parser.m"
                        }
#line 498 "parser.m"
                    }
#line 497 "parser.m"
                    break;
#line 497 "parser.m"
                  case (MR_Integer) 8:
#line 494 "parser.m"
                    {
#line 495 "parser.m"
                      mercury__parser__succeeded = (mercury__parser__TermKind_11 == (MR_Integer) 0);
#line 494 "parser.m"
                      if (mercury__parser__succeeded)
#line 494 "parser.m"
                        {
#line 496 "parser.m"
                          mercury__parser__Op0_19 = (MR_String) ",";
#line 496 "parser.m"
                          mercury__parser__succeeded = MR_TRUE;
#line 494 "parser.m"
                        }
#line 494 "parser.m"
                    }
#line 497 "parser.m"
                    break;
#line 497 "parser.m"
                }
#line 497 "parser.m"
                break;
#line 497 "parser.m"
              case (MR_Integer) 1:
#line 502 "parser.m"
                {
#line 502 "parser.m"
                  mercury__parser__Op0_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_17, (MR_Integer) 0)));
#line 502 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 502 "parser.m"
                }
#line 497 "parser.m"
                break;
#line 497 "parser.m"
            }
#line 492 "parser.m"
            if (mercury__parser__succeeded)
#line 492 "parser.m"
              {
#line 507 "parser.m"
                mercury__parser__succeeded = (strcmp(mercury__parser__Op0_19, (MR_String) "\140") == 0);
#line 507 "parser.m"
                if (mercury__parser__succeeded)
#line 507 "parser.m"
                  {
#line 1104 "parser.m"
                    mercury__parser__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 0)));
#line 1104 "parser.m"
                    mercury__parser__OpTable_20 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 1));
#line 1104 "parser.m"
                    mercury__parser__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 2)));
#line 1104 "parser.m"
                    mercury__parser__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 3)));
#line 509 "parser.m"
                    {
#line 509 "parser.m"
                      mercury__parser__succeeded = mercury__ops__lookup_operator_term_4_p_0(mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__OpTable_20, &mercury__parser__OpPriority0_21, &mercury__parser__LeftAssoc0_22, &mercury__parser__RightAssoc0_23);
                    }
#line 507 "parser.m"
                  }
#line 518 "parser.m"
                if (mercury__parser__succeeded)
#line 512 "parser.m"
                  {
#line 512 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_45_45;
#line 512 "parser.m"
                    MR_Word mercury__parser__V_48_48;
#line 512 "parser.m"
                    MR_String mercury__parser__V_49_49;
#line 517 "parser.m"
                    MR_Integer mercury__parser___Context_30;

#line 512 "parser.m"
                    mercury__parser__OpPriority_24 = mercury__parser__OpPriority0_21;
#line 513 "parser.m"
                    mercury__parser__LeftAssoc_25 = mercury__parser__LeftAssoc0_22;
#line 514 "parser.m"
                    mercury__parser__RightAssoc_26 = mercury__parser__RightAssoc0_23;
#line 515 "parser.m"
                    {
#line 515 "parser.m"
                      mercury__parser__succeeded = mercury__parser__parse_backquoted_operator_7_p_0(mercury__parser__TypeInfo_for_T_84, mercury__parser__TypeClassInfo_for_op_table_83, &mercury__parser__Qualifier_27, &mercury__parser__Op_28, &mercury__parser__VariableTerm_29, mercury__parser__STATE_VARIABLE_TokensLeft_44_44, &mercury__parser__STATE_VARIABLE_TokensLeft_45_45, mercury__parser__STATE_VARIABLE_PS_0_42, &mercury__parser__STATE_VARIABLE_PS_46_46);
                    }
#line 512 "parser.m"
                    if (mercury__parser__succeeded)
#line 512 "parser.m"
                      {
#line 517 "parser.m"
                        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 517 "parser.m"
                        if (mercury__parser__succeeded)
#line 517 "parser.m"
                          {
#line 517 "parser.m"
                            mercury__parser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_45_45, (MR_Integer) 0)));
#line 517 "parser.m"
                            mercury__parser___Context_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_45_45, (MR_Integer) 1)));
#line 517 "parser.m"
                            mercury__parser__STATE_VARIABLE_TokensLeft_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_45_45, (MR_Integer) 2)));
#line 517 "parser.m"
                            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 517 "parser.m"
                            if (mercury__parser__succeeded)
#line 517 "parser.m"
                              {
#line 517 "parser.m"
                                mercury__parser__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__V_48_48, (MR_Integer) 0)));
#line 517 "parser.m"
                                mercury__parser__succeeded = (strcmp(mercury__parser__V_49_49, (MR_String) "\140") == 0);
#line 517 "parser.m"
                              }
#line 517 "parser.m"
                          }
#line 512 "parser.m"
                      }
#line 512 "parser.m"
                  }
#line 518 "parser.m"
                else
#line 519 "parser.m"
                  {
#line 519 "parser.m"
                    MR_Box mercury__parser__OpTable_71;
#line 1104 "parser.m"
                    MR_String mercury__parser__V_104_104;
#line 1104 "parser.m"
                    MR_Word mercury__parser__V_105_105;
#line 1104 "parser.m"
                    MR_Word mercury__parser__V_106_106;

#line 519 "parser.m"
                    mercury__parser__Op_28 = mercury__parser__Op0_19;
#line 520 "parser.m"
                    mercury__parser__VariableTerm_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 521 "parser.m"
                    mercury__parser__Qualifier_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1104 "parser.m"
                    mercury__parser__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 0)));
#line 1104 "parser.m"
                    mercury__parser__OpTable_71 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 1));
#line 1104 "parser.m"
                    mercury__parser__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 2)));
#line 1104 "parser.m"
                    mercury__parser__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 3)));
#line 523 "parser.m"
                    {
#line 523 "parser.m"
                      mercury__parser__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__OpTable_71, mercury__parser__Op_28, &mercury__parser__OpPriority_24, &mercury__parser__LeftAssoc_25, &mercury__parser__RightAssoc_26);
                    }
#line 519 "parser.m"
                    if (mercury__parser__succeeded)
#line 519 "parser.m"
                      {
#line 519 "parser.m"
                        mercury__parser__STATE_VARIABLE_PS_46_46 = mercury__parser__STATE_VARIABLE_PS_0_42;
#line 519 "parser.m"
                        mercury__parser__STATE_VARIABLE_TokensLeft_47_47 = mercury__parser__STATE_VARIABLE_TokensLeft_44_44;
#line 519 "parser.m"
                        mercury__parser__succeeded = MR_TRUE;
#line 519 "parser.m"
                      }
#line 519 "parser.m"
                  }
#line 492 "parser.m"
                if (mercury__parser__succeeded)
#line 492 "parser.m"
                  {
#line 525 "parser.m"
                    mercury__parser__succeeded = (mercury__parser__OpPriority_24 <= mercury__parser__MaxPriority_10);
#line 492 "parser.m"
                    if (mercury__parser__succeeded)
#line 526 "parser.m"
                      {
#line 526 "parser.m"
                        mercury__parser__succeeded = mercury__parser__check_priority_3_p_0(mercury__parser__LeftAssoc_25, mercury__parser__OpPriority_24, mercury__parser__LeftPriority_12);
                      }
#line 492 "parser.m"
                  }
#line 492 "parser.m"
              }
#line 492 "parser.m"
          }
#line 551 "parser.m"
        if (mercury__parser__succeeded)
#line 528 "parser.m"
          {
#line 528 "parser.m"
            MR_Integer mercury__parser__RightPriority_31;
#line 528 "parser.m"
            MR_Word mercury__parser__RightTerm0_32;
#line 528 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_50_50;
#line 528 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_PS_51_51;

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
#line 529 "parser.m"
            {
#line 529 "parser.m"
              mercury__parser__parse_term_2_7_p_0(mercury__parser__TypeInfo_for_T_84, mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__RightPriority_31, mercury__parser__TermKind_11, &mercury__parser__RightTerm0_32, mercury__parser__STATE_VARIABLE_TokensLeft_47_47, &mercury__parser__STATE_VARIABLE_TokensLeft_50_50, mercury__parser__STATE_VARIABLE_PS_46_46, &mercury__parser__STATE_VARIABLE_PS_51_51);
            }
#line 546 "parser.m"
            if (((MR_tag((MR_Word) mercury__parser__RightTerm0_32)) == (MR_mktag((MR_Integer) 1))))
#line 547 "parser.m"
              {
#line 549 "parser.m"
                *mercury__parser__Term_14 = mercury__parser__RightTerm0_32;
#line 547 "parser.m"
                *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_50_50;
#line 547 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_43 = mercury__parser__STATE_VARIABLE_PS_51_51;
#line 547 "parser.m"
              }
#line 546 "parser.m"
            else
#line 531 "parser.m"
              {
#line 531 "parser.m"
                MR_Word mercury__parser__TypeCtorInfo_91_91;
#line 531 "parser.m"
                MR_Word mercury__parser__TypeInfo_92_92;
#line 531 "parser.m"
                MR_Word mercury__parser__RightTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightTerm0_32, (MR_Integer) 0)));
#line 531 "parser.m"
                MR_Word mercury__parser__TermContext_34;
#line 531 "parser.m"
                MR_Word mercury__parser__OpTerm0_35;
#line 531 "parser.m"
                MR_Word mercury__parser__OpTerm_36;
#line 531 "parser.m"
                MR_Word mercury__parser__V_52_52;
#line 531 "parser.m"
                MR_Word mercury__parser__V_53_53;
#line 531 "parser.m"
                MR_Word mercury__parser__V_54_54;
#line 531 "parser.m"
                MR_Word mercury__parser__V_55_55;
#line 531 "parser.m"
                MR_Word mercury__parser__V_56_56;
#line 534 "parser.m"
                MR_Word mercury__parser__conv0_V_53_53;

#line 532 "parser.m"
                {
#line 532 "parser.m"
                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_51_51, mercury__parser__Context_18, &mercury__parser__TermContext_34);
                }
#line 533 "parser.m"
                {
#line 533 "parser.m"
                  mercury__parser__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 533 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_52_52, 0) = ((MR_Box) (mercury__parser__Op_28));
#line 533 "parser.m"
                }
#line 6525 "parser.c"
                mercury__parser__TypeCtorInfo_91_91 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 6527 "parser.c"
                {
#line 6529 "parser.c"
                  mercury__parser__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6531 "parser.c"
                  MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_92_92, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_91_91));
#line 6533 "parser.c"
                  MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_92_92, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_84));
#line 6535 "parser.c"
                }
#line 534 "parser.m"
                mercury__parser__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 534 "parser.m"
                {
#line 534 "parser.m"
                  mercury__parser__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_55_55, 0) = ((MR_Box) (mercury__parser__RightTerm_33));
#line 534 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_55_55, 1) = ((MR_Box) (mercury__parser__V_56_56));
#line 534 "parser.m"
                }
#line 534 "parser.m"
                {
#line 534 "parser.m"
                  mercury__parser__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_54_54, 0) = ((MR_Box) (mercury__parser__LeftTerm_13));
#line 534 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_54_54, 1) = ((MR_Box) (mercury__parser__V_55_55));
#line 534 "parser.m"
                }
#line 534 "parser.m"
                {
#line 534 "parser.m"
                  mercury__parser__conv0_V_53_53 = mercury__list__append_2_f_0(mercury__parser__TypeInfo_92_92, (MR_Word) mercury__parser__VariableTerm_29, (MR_Word) mercury__parser__V_54_54);
                }
#line 534 "parser.m"
                mercury__parser__V_53_53 = (MR_Word) mercury__parser__conv0_V_53_53;
#line 533 "parser.m"
                {
#line 533 "parser.m"
                  mercury__parser__OpTerm0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 533 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_35, 0) = ((MR_Box) (mercury__parser__V_52_52));
#line 533 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_35, 1) = ((MR_Box) (mercury__parser__V_53_53));
#line 533 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_35, 2) = ((MR_Box) (mercury__parser__TermContext_34));
#line 533 "parser.m"
                }
#line 539 "parser.m"
                if ((mercury__parser__Qualifier_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "parser.m"
                  mercury__parser__OpTerm_36 = mercury__parser__OpTerm0_35;
#line 539 "parser.m"
                else
#line 540 "parser.m"
                  {
#line 540 "parser.m"
                    MR_Word mercury__parser__QTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Qualifier_27, (MR_Integer) 0)));
#line 540 "parser.m"
                    MR_Word mercury__parser__V_57_57 = (MR_Word) &mercury__parser_scalar_common_5[0];
#line 540 "parser.m"
                    MR_Word mercury__parser__V_59_59;
#line 540 "parser.m"
                    MR_Word mercury__parser__V_60_60;
#line 540 "parser.m"
                    MR_Word mercury__parser__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 541 "parser.m"
                    {
#line 541 "parser.m"
                      mercury__parser__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_60_60, 0) = ((MR_Box) (mercury__parser__OpTerm0_35));
#line 541 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_60_60, 1) = ((MR_Box) (mercury__parser__V_61_61));
#line 541 "parser.m"
                    }
#line 541 "parser.m"
                    {
#line 541 "parser.m"
                      mercury__parser__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_59_59, 0) = ((MR_Box) (mercury__parser__QTerm_37));
#line 541 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_59_59, 1) = ((MR_Box) (mercury__parser__V_60_60));
#line 541 "parser.m"
                    }
#line 541 "parser.m"
                    {
#line 541 "parser.m"
                      mercury__parser__OpTerm_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 541 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_36, 0) = ((MR_Box) (mercury__parser__V_57_57));
#line 541 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_36, 1) = ((MR_Box) (mercury__parser__V_59_59));
#line 541 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_36, 2) = ((MR_Box) (mercury__parser__TermContext_34));
#line 541 "parser.m"
                    }
#line 540 "parser.m"
                  }
#line 544 "parser.m"
                /* direct tailcall eliminated */
#line 544 "parser.m"
                {
#line 544 "parser.m"
                  MR_Integer mercury__parser__LeftPriority__tmp_copy_12 = mercury__parser__OpPriority_24;
#line 544 "parser.m"
                  MR_Word mercury__parser__LeftTerm__tmp_copy_13 = mercury__parser__OpTerm_36;
#line 544 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_40 = mercury__parser__STATE_VARIABLE_TokensLeft_50_50;
#line 544 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_42 = mercury__parser__STATE_VARIABLE_PS_51_51;

#line 544 "parser.m"
                  mercury__parser__STATE_VARIABLE_PS_0_42 = mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_42;
#line 544 "parser.m"
                  mercury__parser__STATE_VARIABLE_TokensLeft_0_40 = mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_40;
#line 544 "parser.m"
                  mercury__parser__LeftTerm_13 = mercury__parser__LeftTerm__tmp_copy_13;
#line 544 "parser.m"
                  mercury__parser__LeftPriority_12 = mercury__parser__LeftPriority__tmp_copy_12;
#line 544 "parser.m"
                }
#line 544 "parser.m"
                continue;
#line 531 "parser.m"
              }
#line 528 "parser.m"
          }
#line 551 "parser.m"
        else
#line 563 "parser.m"
          {
#line 563 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_64_64;
#line 563 "parser.m"
            MR_Integer mercury__parser__Context_76;
#line 563 "parser.m"
            MR_Integer mercury__parser__OpPriority_78;
#line 563 "parser.m"
            MR_String mercury__parser__Op_80;
#line 553 "parser.m"
            MR_Word mercury__parser__V_65_65;
#line 553 "parser.m"
            MR_Box mercury__parser__OpTable_72;
#line 553 "parser.m"
            MR_Word mercury__parser__LeftAssoc_73;
#line 1104 "parser.m"
            MR_String mercury__parser__V_113_113;
#line 1104 "parser.m"
            MR_Word mercury__parser__V_114_114;
#line 1104 "parser.m"
            MR_Word mercury__parser__V_115_115;

#line 553 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_40)) == (MR_mktag((MR_Integer) 1)));
#line 553 "parser.m"
            if (mercury__parser__succeeded)
#line 553 "parser.m"
              {
#line 553 "parser.m"
                mercury__parser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 0)));
#line 553 "parser.m"
                mercury__parser__Context_76 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 1)));
#line 553 "parser.m"
                mercury__parser__STATE_VARIABLE_TokensLeft_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_40, (MR_Integer) 2)));
#line 553 "parser.m"
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 553 "parser.m"
                if (mercury__parser__succeeded)
#line 553 "parser.m"
                  {
#line 553 "parser.m"
                    mercury__parser__Op_80 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__V_65_65, (MR_Integer) 0)));
#line 1104 "parser.m"
                    mercury__parser__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 0)));
#line 1104 "parser.m"
                    mercury__parser__OpTable_72 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 1));
#line 1104 "parser.m"
                    mercury__parser__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 2)));
#line 1104 "parser.m"
                    mercury__parser__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_42, (MR_Integer) 3)));
#line 555 "parser.m"
                    {
#line 555 "parser.m"
                      mercury__parser__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__OpTable_72, mercury__parser__Op_80, &mercury__parser__OpPriority_78, &mercury__parser__LeftAssoc_73);
                    }
#line 553 "parser.m"
                    if (mercury__parser__succeeded)
#line 553 "parser.m"
                      {
#line 556 "parser.m"
                        mercury__parser__succeeded = (mercury__parser__OpPriority_78 <= mercury__parser__MaxPriority_10);
#line 553 "parser.m"
                        if (mercury__parser__succeeded)
#line 557 "parser.m"
                          {
#line 557 "parser.m"
                            mercury__parser__succeeded = mercury__parser__check_priority_3_p_0(mercury__parser__LeftAssoc_73, mercury__parser__OpPriority_78, mercury__parser__LeftPriority_12);
                          }
#line 553 "parser.m"
                      }
#line 553 "parser.m"
                  }
#line 553 "parser.m"
              }
#line 563 "parser.m"
            if (mercury__parser__succeeded)
#line 559 "parser.m"
              {
#line 559 "parser.m"
                MR_Word mercury__parser__V_66_66;
#line 559 "parser.m"
                MR_Word mercury__parser__V_67_67;
#line 559 "parser.m"
                MR_Word mercury__parser__V_68_68;
#line 559 "parser.m"
                MR_Word mercury__parser__TermContext_74;
#line 559 "parser.m"
                MR_Word mercury__parser__OpTerm_75;

#line 559 "parser.m"
                {
#line 559 "parser.m"
                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_42, mercury__parser__Context_76, &mercury__parser__TermContext_74);
                }
#line 560 "parser.m"
                {
#line 560 "parser.m"
                  mercury__parser__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 560 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_66_66, 0) = ((MR_Box) (mercury__parser__Op_80));
#line 560 "parser.m"
                }
#line 560 "parser.m"
                mercury__parser__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 560 "parser.m"
                {
#line 560 "parser.m"
                  mercury__parser__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_67_67, 0) = ((MR_Box) (mercury__parser__LeftTerm_13));
#line 560 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_67_67, 1) = ((MR_Box) (mercury__parser__V_68_68));
#line 560 "parser.m"
                }
#line 560 "parser.m"
                {
#line 560 "parser.m"
                  mercury__parser__OpTerm_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 560 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_75, 0) = ((MR_Box) (mercury__parser__V_66_66));
#line 560 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_75, 1) = ((MR_Box) (mercury__parser__V_67_67));
#line 560 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_75, 2) = ((MR_Box) (mercury__parser__TermContext_74));
#line 560 "parser.m"
                }
#line 561 "parser.m"
                /* direct tailcall eliminated */
#line 561 "parser.m"
                {
#line 561 "parser.m"
                  MR_Integer mercury__parser__LeftPriority__tmp_copy_12 = mercury__parser__OpPriority_78;
#line 561 "parser.m"
                  MR_Word mercury__parser__LeftTerm__tmp_copy_13 = mercury__parser__OpTerm_75;
#line 561 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_40 = mercury__parser__STATE_VARIABLE_TokensLeft_64_64;

#line 561 "parser.m"
                  mercury__parser__STATE_VARIABLE_TokensLeft_0_40 = mercury__parser__STATE_VARIABLE_TokensLeft_0__tmp_copy_40;
#line 561 "parser.m"
                  mercury__parser__LeftTerm_13 = mercury__parser__LeftTerm__tmp_copy_13;
#line 561 "parser.m"
                  mercury__parser__LeftPriority_12 = mercury__parser__LeftPriority__tmp_copy_12;
#line 561 "parser.m"
                }
#line 561 "parser.m"
                continue;
#line 559 "parser.m"
              }
#line 563 "parser.m"
            else
#line 564 "parser.m"
              {
#line 564 "parser.m"
                {
#line 564 "parser.m"
                  MR_Word base;
#line 564 "parser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 564 "parser.m"
                  *mercury__parser__Term_14 = base;
#line 564 "parser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__LeftTerm_13));
#line 564 "parser.m"
                }
#line 564 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_43 = mercury__parser__STATE_VARIABLE_PS_0_42;
#line 564 "parser.m"
                *mercury__parser__STATE_VARIABLE_TokensLeft_41 = mercury__parser__STATE_VARIABLE_TokensLeft_0_40;
#line 564 "parser.m"
              }
#line 563 "parser.m"
          }
#line 551 "parser.m"
      }
#line 551 "parser.m"
      break;
#line 551 "parser.m"
    }
#line 483 "parser.m"
}

#line 376 "parser.m"
static void MR_CALL 
mercury__parser__parse_left_term_8_p_0(
#line 376 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_123,
#line 376 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_122,
#line 376 "parser.m"
  MR_Integer mercury__parser__MaxPriority_9,
#line 376 "parser.m"
  MR_Word mercury__parser__TermKind_10,
#line 376 "parser.m"
  MR_Integer * mercury__parser__OpPriority_11,
#line 376 "parser.m"
  MR_Word * mercury__parser__Term_12,
#line 376 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_53,
#line 376 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_54,
#line 376 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_55,
#line 376 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_56)
#line 376 "parser.m"
{
#line 476 "parser.m"
  {
#line 476 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 476 "parser.m"
    if ((mercury__parser__STATE_VARIABLE_TokensLeft_0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "parser.m"
      {
#line 478 "parser.m"
        {
#line 478 "parser.m"
          MR_Word base;
#line 478 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "parser.m"
          *mercury__parser__Term_12 = base;
#line 478 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file at start of sub-term"));
#line 478 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_53));
#line 478 "parser.m"
        }
#line 480 "parser.m"
        *mercury__parser__OpPriority_11 = (MR_Integer) 0;
#line 477 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_54 = mercury__parser__STATE_VARIABLE_TokensLeft_0_53;
#line 477 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_56 = mercury__parser__STATE_VARIABLE_PS_0_55;
#line 477 "parser.m"
      }
#line 476 "parser.m"
    else
#line 383 "parser.m"
      {
#line 383 "parser.m"
        MR_Word mercury__parser__Token_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_53, (MR_Integer) 0)));
#line 383 "parser.m"
        MR_Integer mercury__parser__Context_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_53, (MR_Integer) 1)));
#line 383 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_53, (MR_Integer) 2)));
#line 400 "parser.m"
        MR_Integer mercury__parser__NegX_20;
#line 400 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_60_60;
#line 386 "parser.m"
        MR_Word mercury__parser__IntToken_17;
#line 386 "parser.m"
        MR_String mercury__parser__V_59_59;
#line 387 "parser.m"
        MR_Integer mercury__parser___IntContext_18;

#line 386 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_15)) == (MR_mktag((MR_Integer) 1)));
#line 386 "parser.m"
        if (mercury__parser__succeeded)
#line 386 "parser.m"
          {
#line 386 "parser.m"
            mercury__parser__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_15, (MR_Integer) 0)));
#line 386 "parser.m"
            mercury__parser__succeeded = (strcmp(mercury__parser__V_59_59, (MR_String) "-") == 0);
#line 386 "parser.m"
            if (mercury__parser__succeeded)
#line 386 "parser.m"
              {
#line 387 "parser.m"
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 387 "parser.m"
                if (mercury__parser__succeeded)
#line 387 "parser.m"
                  {
#line 387 "parser.m"
                    mercury__parser__IntToken_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
#line 387 "parser.m"
                    mercury__parser___IntContext_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
#line 387 "parser.m"
                    mercury__parser__STATE_VARIABLE_TokensLeft_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
#line 391 "parser.m"
                    if (((((MR_tag((MR_Word) mercury__parser__IntToken_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__IntToken_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 392 "parser.m"
                      {
#line 392 "parser.m"
                        MR_Word mercury__parser__V_61_61;
#line 392 "parser.m"
                        MR_Integer mercury__parser__V_62_62;
#line 392 "parser.m"
                        MR_Word mercury__parser__X_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__IntToken_17, (MR_Integer) 2)));
#line 392 "parser.m"
                        MR_Word mercury__parser__V_137_137;
#line 392 "parser.m"
                        MR_Word mercury__parser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__IntToken_17, (MR_Integer) 1)));

#line 393 "parser.m"
                        {
#line 393 "parser.m"
                          mercury__parser__V_61_61 = mercury__integer__f_minus_1_f_0(mercury__parser__X_95);
                        }
#line 393 "parser.m"
                        {
#line 393 "parser.m"
                          mercury__parser__V_62_62 = mercury__int__min_int_0_f_0();
                        }
#line 393 "parser.m"
                        {
#line 393 "parser.m"
                          mercury__parser__V_137_137 = mercury__integer__integer_1_f_0(mercury__parser__V_62_62);
                        }
#line 393 "parser.m"
                        {
#line 393 "parser.m"
                          mercury__parser__succeeded = mercury__integer____Unify____integer_0_0(mercury__parser__V_61_61, mercury__parser__V_137_137);
                        }
#line 392 "parser.m"
                        if (mercury__parser__succeeded)
#line 392 "parser.m"
                          {
#line 394 "parser.m"
                            {
#line 394 "parser.m"
                              mercury__parser__NegX_20 = mercury__int__min_int_0_f_0();
                            }
#line 394 "parser.m"
                            mercury__parser__succeeded = MR_TRUE;
#line 392 "parser.m"
                          }
#line 392 "parser.m"
                      }
#line 391 "parser.m"
                    else
#line 391 "parser.m"
                    if (((((MR_tag((MR_Word) mercury__parser__IntToken_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__IntToken_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 389 "parser.m"
                      {
#line 389 "parser.m"
                        MR_Integer mercury__parser__X_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__parser__IntToken_17, (MR_Integer) 1)));

#line 390 "parser.m"
                        mercury__parser__NegX_20 = ((MR_Integer) 0 - mercury__parser__X_19);
#line 389 "parser.m"
                        mercury__parser__succeeded = MR_TRUE;
#line 389 "parser.m"
                      }
#line 391 "parser.m"
                    else
#line 391 "parser.m"
                      mercury__parser__succeeded = MR_FALSE;
#line 387 "parser.m"
                  }
#line 386 "parser.m"
              }
#line 386 "parser.m"
          }
#line 400 "parser.m"
        if (mercury__parser__succeeded)
#line 397 "parser.m"
          {
#line 397 "parser.m"
            MR_Word mercury__parser__TermContext_22;
#line 397 "parser.m"
            MR_Word mercury__parser__V_64_64;
#line 397 "parser.m"
            MR_Word mercury__parser__V_65_65;
#line 397 "parser.m"
            MR_Word mercury__parser__V_66_66;

#line 397 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_54 = mercury__parser__STATE_VARIABLE_TokensLeft_60_60;
#line 397 "parser.m"
            {
#line 397 "parser.m"
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_55, mercury__parser__Context_16, &mercury__parser__TermContext_22);
            }
#line 398 "parser.m"
            {
#line 398 "parser.m"
              mercury__parser__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "parser.m"
              MR_hl_field(MR_mktag(1), mercury__parser__V_65_65, 0) = ((MR_Box) (mercury__parser__NegX_20));
#line 398 "parser.m"
            }
#line 398 "parser.m"
            mercury__parser__V_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "parser.m"
            {
#line 398 "parser.m"
              mercury__parser__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 398 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_64_64, 0) = ((MR_Box) (mercury__parser__V_65_65));
#line 398 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_64_64, 1) = ((MR_Box) (mercury__parser__V_66_66));
#line 398 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_64_64, 2) = ((MR_Box) (mercury__parser__TermContext_22));
#line 398 "parser.m"
            }
#line 398 "parser.m"
            {
#line 398 "parser.m"
              MR_Word base;
#line 398 "parser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "parser.m"
              *mercury__parser__Term_12 = base;
#line 398 "parser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_64_64));
#line 398 "parser.m"
            }
#line 399 "parser.m"
            *mercury__parser__OpPriority_11 = (MR_Integer) 0;
#line 397 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_56 = mercury__parser__STATE_VARIABLE_PS_0_55;
#line 397 "parser.m"
          }
#line 400 "parser.m"
        else
#line 409 "parser.m"
          {
#line 409 "parser.m"
            MR_Float mercury__parser__F_23;
#line 409 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_68_68;
#line 402 "parser.m"
            MR_String mercury__parser__V_67_67;
#line 402 "parser.m"
            MR_Word mercury__parser__V_69_69;
#line 403 "parser.m"
            MR_Integer mercury__parser___FloatContext_24;

#line 402 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_15)) == (MR_mktag((MR_Integer) 1)));
#line 402 "parser.m"
            if (mercury__parser__succeeded)
#line 402 "parser.m"
              {
#line 402 "parser.m"
                mercury__parser__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_15, (MR_Integer) 0)));
#line 402 "parser.m"
                mercury__parser__succeeded = (strcmp(mercury__parser__V_67_67, (MR_String) "-") == 0);
#line 402 "parser.m"
                if (mercury__parser__succeeded)
#line 402 "parser.m"
                  {
#line 403 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 403 "parser.m"
                    if (mercury__parser__succeeded)
#line 403 "parser.m"
                      {
#line 403 "parser.m"
                        mercury__parser__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
#line 403 "parser.m"
                        mercury__parser___FloatContext_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
#line 403 "parser.m"
                        mercury__parser__STATE_VARIABLE_TokensLeft_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
#line 403 "parser.m"
                        mercury__parser__succeeded = ((((MR_tag((MR_Word) mercury__parser__V_69_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__V_69_69, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 403 "parser.m"
                        if (mercury__parser__succeeded)
#line 403 "parser.m"
                          mercury__parser__F_23 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__parser__V_69_69, (MR_Integer) 1)));
#line 403 "parser.m"
                      }
#line 402 "parser.m"
                  }
#line 402 "parser.m"
              }
#line 409 "parser.m"
            if (mercury__parser__succeeded)
#line 405 "parser.m"
              {
#line 405 "parser.m"
                MR_Float mercury__parser__NegF_25;
#line 405 "parser.m"
                MR_Word mercury__parser__V_71_71;
#line 405 "parser.m"
                MR_Word mercury__parser__V_72_72;
#line 405 "parser.m"
                MR_Word mercury__parser__V_73_73;
#line 405 "parser.m"
                MR_Word mercury__parser__TermContext_96;

#line 405 "parser.m"
                *mercury__parser__STATE_VARIABLE_TokensLeft_54 = mercury__parser__STATE_VARIABLE_TokensLeft_68_68;
#line 405 "parser.m"
                {
#line 405 "parser.m"
                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_55, mercury__parser__Context_16, &mercury__parser__TermContext_96);
                }
#line 406 "parser.m"
                mercury__parser__NegF_25 = (((MR_Float) 0.0000000000000000) - mercury__parser__F_23);
#line 407 "parser.m"
                {
#line 407 "parser.m"
                  mercury__parser__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "parser.m"
                  MR_hl_field(MR_mktag(3), mercury__parser__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 407 "parser.m"
                  MR_hl_field(MR_mktag(3), mercury__parser__V_72_72, 1) = MR_box_float(mercury__parser__NegF_25);
#line 407 "parser.m"
                }
#line 407 "parser.m"
                mercury__parser__V_73_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 407 "parser.m"
                {
#line 407 "parser.m"
                  mercury__parser__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 407 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_71_71, 0) = ((MR_Box) (mercury__parser__V_72_72));
#line 407 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_71_71, 1) = ((MR_Box) (mercury__parser__V_73_73));
#line 407 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_71_71, 2) = ((MR_Box) (mercury__parser__TermContext_96));
#line 407 "parser.m"
                }
#line 407 "parser.m"
                {
#line 407 "parser.m"
                  MR_Word base;
#line 407 "parser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 407 "parser.m"
                  *mercury__parser__Term_12 = base;
#line 407 "parser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_71_71));
#line 407 "parser.m"
                }
#line 408 "parser.m"
                *mercury__parser__OpPriority_11 = (MR_Integer) 0;
#line 405 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_56 = mercury__parser__STATE_VARIABLE_PS_0_55;
#line 405 "parser.m"
              }
#line 409 "parser.m"
            else
#line 446 "parser.m"
              {
#line 446 "parser.m"
                MR_String mercury__parser__Op_26;
#line 446 "parser.m"
                MR_Integer mercury__parser__BinOpPriority_30;
#line 446 "parser.m"
                MR_Word mercury__parser__RightAssoc_31;
#line 446 "parser.m"
                MR_Word mercury__parser__RightRightAssoc_32;
#line 411 "parser.m"
                MR_Box mercury__parser__OpTable_29;
#line 411 "parser.m"
                MR_Word mercury__parser__NextToken_33;
#line 411 "parser.m"
                MR_Word mercury__parser__V_75_75;
#line 411 "parser.m"
                MR_Word mercury__parser__V_138_138;
#line 412 "parser.m"
                MR_Word mercury__parser__V_74_74;
#line 412 "parser.m"
                MR_Integer mercury__parser__V_27_27;
#line 412 "parser.m"
                MR_Word mercury__parser__V_28_28;
#line 1104 "parser.m"
                MR_String mercury__parser__V_143_143;
#line 1104 "parser.m"
                MR_Word mercury__parser__V_144_144;
#line 1104 "parser.m"
                MR_Word mercury__parser__V_145_145;
#line 417 "parser.m"
                MR_Integer mercury__parser__V_34_34;
#line 417 "parser.m"
                MR_Word mercury__parser__V_35_35;

#line 411 "parser.m"
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_15)) == (MR_mktag((MR_Integer) 1)));
#line 411 "parser.m"
                if (mercury__parser__succeeded)
#line 411 "parser.m"
                  {
#line 411 "parser.m"
                    mercury__parser__Op_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_15, (MR_Integer) 0)));
#line 412 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 412 "parser.m"
                    if (mercury__parser__succeeded)
#line 412 "parser.m"
                      {
#line 412 "parser.m"
                        mercury__parser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
#line 412 "parser.m"
                        mercury__parser__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
#line 412 "parser.m"
                        mercury__parser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
#line 412 "parser.m"
                        mercury__parser__succeeded = (mercury__parser__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 412 "parser.m"
                      }
#line 412 "parser.m"
                    mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 411 "parser.m"
                    if (mercury__parser__succeeded)
#line 411 "parser.m"
                      {
#line 1104 "parser.m"
                        mercury__parser__V_143_143 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 0)));
#line 1104 "parser.m"
                        mercury__parser__OpTable_29 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 1));
#line 1104 "parser.m"
                        mercury__parser__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 2)));
#line 1104 "parser.m"
                        mercury__parser__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 3)));
#line 414 "parser.m"
                        {
#line 414 "parser.m"
                          mercury__parser__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__parser__TypeClassInfo_for_op_table_122, mercury__parser__OpTable_29, mercury__parser__Op_26, &mercury__parser__BinOpPriority_30, &mercury__parser__RightAssoc_31, &mercury__parser__RightRightAssoc_32);
                        }
#line 411 "parser.m"
                        if (mercury__parser__succeeded)
#line 411 "parser.m"
                          {
#line 416 "parser.m"
                            mercury__parser__succeeded = (mercury__parser__BinOpPriority_30 <= mercury__parser__MaxPriority_9);
#line 411 "parser.m"
                            if (mercury__parser__succeeded)
#line 411 "parser.m"
                              {
#line 417 "parser.m"
                                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 417 "parser.m"
                                if (mercury__parser__succeeded)
#line 417 "parser.m"
                                  {
#line 417 "parser.m"
                                    mercury__parser__NextToken_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
#line 417 "parser.m"
                                    mercury__parser__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
#line 417 "parser.m"
                                    mercury__parser__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
#line 418 "parser.m"
                                    mercury__parser__V_75_75 = (MR_Integer) 1;
#line 418 "parser.m"
                                    {
#line 418 "parser.m"
                                      mercury__parser__could_start_term_2_p_0(mercury__parser__NextToken_33, &mercury__parser__V_138_138);
                                    }
#line 418 "parser.m"
                                    mercury__parser__succeeded = (mercury__parser__V_75_75 == mercury__parser__V_138_138);
#line 417 "parser.m"
                                  }
#line 411 "parser.m"
                              }
#line 411 "parser.m"
                          }
#line 411 "parser.m"
                      }
#line 411 "parser.m"
                  }
#line 446 "parser.m"
                if (mercury__parser__succeeded)
#line 421 "parser.m"
                  {
#line 421 "parser.m"
                    MR_Integer mercury__parser__RightPriority_36;
#line 421 "parser.m"
                    MR_Integer mercury__parser__RightRightPriority_37;
#line 421 "parser.m"
                    MR_Word mercury__parser__RightResult_38;
#line 421 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_76_76;
#line 421 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_PS_77_77;

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
                          mercury__parser__RightPriority_36 = (mercury__parser__BinOpPriority_30 - (MR_Integer) 1);
#line 41 "ops.opt"
                        }
#line 40 "ops.opt"
                        break;
#line 40 "ops.opt"
                      case (MR_Integer) 1:
#line 40 "ops.opt"
                        mercury__parser__RightPriority_36 = mercury__parser__BinOpPriority_30;
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
                          mercury__parser__RightRightPriority_37 = (mercury__parser__BinOpPriority_30 - (MR_Integer) 1);
#line 41 "ops.opt"
                        }
#line 40 "ops.opt"
                        break;
#line 40 "ops.opt"
                      case (MR_Integer) 1:
#line 40 "ops.opt"
                        mercury__parser__RightRightPriority_37 = mercury__parser__BinOpPriority_30;
#line 40 "ops.opt"
                        break;
#line 40 "ops.opt"
                    }
#line 424 "parser.m"
                    *mercury__parser__OpPriority_11 = mercury__parser__BinOpPriority_30;
#line 425 "parser.m"
                    {
#line 425 "parser.m"
                      mercury__parser__parse_term_2_7_p_0(mercury__parser__TypeInfo_for_T_123, mercury__parser__TypeClassInfo_for_op_table_122, mercury__parser__RightPriority_36, mercury__parser__TermKind_10, &mercury__parser__RightResult_38, mercury__parser__STATE_VARIABLE_TokensLeft_58_58, &mercury__parser__STATE_VARIABLE_TokensLeft_76_76, mercury__parser__STATE_VARIABLE_PS_0_55, &mercury__parser__STATE_VARIABLE_PS_77_77);
                    }
#line 441 "parser.m"
                    if (((MR_tag((MR_Word) mercury__parser__RightResult_38)) == (MR_mktag((MR_Integer) 1))))
#line 442 "parser.m"
                      {
#line 444 "parser.m"
                        *mercury__parser__Term_12 = mercury__parser__RightResult_38;
#line 442 "parser.m"
                        *mercury__parser__STATE_VARIABLE_TokensLeft_54 = mercury__parser__STATE_VARIABLE_TokensLeft_76_76;
#line 442 "parser.m"
                        *mercury__parser__STATE_VARIABLE_PS_56 = mercury__parser__STATE_VARIABLE_PS_77_77;
#line 442 "parser.m"
                      }
#line 441 "parser.m"
                    else
#line 428 "parser.m"
                      {
#line 428 "parser.m"
                        MR_Word mercury__parser__RightTerm_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightResult_38, (MR_Integer) 0)));
#line 428 "parser.m"
                        MR_Word mercury__parser__RightRightResult_40;

#line 429 "parser.m"
                        {
#line 429 "parser.m"
                          mercury__parser__parse_term_2_7_p_0(mercury__parser__TypeInfo_for_T_123, mercury__parser__TypeClassInfo_for_op_table_122, mercury__parser__RightRightPriority_37, mercury__parser__TermKind_10, &mercury__parser__RightRightResult_40, mercury__parser__STATE_VARIABLE_TokensLeft_76_76, mercury__parser__STATE_VARIABLE_TokensLeft_54, mercury__parser__STATE_VARIABLE_PS_77_77, mercury__parser__STATE_VARIABLE_PS_56);
                        }
#line 436 "parser.m"
                        if (((MR_tag((MR_Word) mercury__parser__RightRightResult_40)) == (MR_mktag((MR_Integer) 1))))
#line 439 "parser.m"
                          *mercury__parser__Term_12 = mercury__parser__RightRightResult_40;
#line 436 "parser.m"
                        else
#line 432 "parser.m"
                          {
#line 432 "parser.m"
                            MR_Word mercury__parser__RightRightTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightRightResult_40, (MR_Integer) 0)));
#line 432 "parser.m"
                            MR_Word mercury__parser__V_80_80;
#line 432 "parser.m"
                            MR_Word mercury__parser__V_81_81;
#line 432 "parser.m"
                            MR_Word mercury__parser__V_82_82;
#line 432 "parser.m"
                            MR_Word mercury__parser__V_83_83;
#line 432 "parser.m"
                            MR_Word mercury__parser__V_84_84;
#line 432 "parser.m"
                            MR_Word mercury__parser__TermContext_97;

#line 433 "parser.m"
                            {
#line 433 "parser.m"
                              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*mercury__parser__STATE_VARIABLE_PS_56, mercury__parser__Context_16, &mercury__parser__TermContext_97);
                            }
#line 434 "parser.m"
                            {
#line 434 "parser.m"
                              mercury__parser__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 434 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_81_81, 0) = ((MR_Box) (mercury__parser__Op_26));
#line 434 "parser.m"
                            }
#line 435 "parser.m"
                            mercury__parser__V_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "parser.m"
                            {
#line 435 "parser.m"
                              mercury__parser__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_83_83, 0) = ((MR_Box) (mercury__parser__RightRightTerm_41));
#line 435 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_83_83, 1) = ((MR_Box) (mercury__parser__V_84_84));
#line 435 "parser.m"
                            }
#line 435 "parser.m"
                            {
#line 435 "parser.m"
                              mercury__parser__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_82_82, 0) = ((MR_Box) (mercury__parser__RightTerm_39));
#line 435 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_82_82, 1) = ((MR_Box) (mercury__parser__V_83_83));
#line 435 "parser.m"
                            }
#line 434 "parser.m"
                            {
#line 434 "parser.m"
                              mercury__parser__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 434 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_80_80, 0) = ((MR_Box) (mercury__parser__V_81_81));
#line 434 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_80_80, 1) = ((MR_Box) (mercury__parser__V_82_82));
#line 434 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_80_80, 2) = ((MR_Box) (mercury__parser__TermContext_97));
#line 434 "parser.m"
                            }
#line 434 "parser.m"
                            {
#line 434 "parser.m"
                              MR_Word base;
#line 434 "parser.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 434 "parser.m"
                              *mercury__parser__Term_12 = base;
#line 434 "parser.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_80_80));
#line 434 "parser.m"
                            }
#line 432 "parser.m"
                          }
#line 428 "parser.m"
                      }
#line 421 "parser.m"
                  }
#line 446 "parser.m"
                else
#line 471 "parser.m"
                  {
#line 471 "parser.m"
                    MR_Integer mercury__parser__UnOpPriority_48;
#line 471 "parser.m"
                    MR_String mercury__parser__Op_113;
#line 471 "parser.m"
                    MR_Word mercury__parser__RightAssoc_115;
#line 448 "parser.m"
                    MR_Word mercury__parser__V_86_86;
#line 448 "parser.m"
                    MR_Box mercury__parser__OpTable_102;
#line 448 "parser.m"
                    MR_Word mercury__parser__NextToken_103;
#line 448 "parser.m"
                    MR_Word mercury__parser__V_139_139;
#line 449 "parser.m"
                    MR_Word mercury__parser__V_85_85;
#line 449 "parser.m"
                    MR_Integer mercury__parser__V_46_46;
#line 449 "parser.m"
                    MR_Word mercury__parser__V_47_47;
#line 1104 "parser.m"
                    MR_String mercury__parser__V_156_156;
#line 1104 "parser.m"
                    MR_Word mercury__parser__V_157_157;
#line 1104 "parser.m"
                    MR_Word mercury__parser__V_158_158;
#line 453 "parser.m"
                    MR_Integer mercury__parser__V_49_49;
#line 453 "parser.m"
                    MR_Word mercury__parser__V_50_50;

#line 448 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_15)) == (MR_mktag((MR_Integer) 1)));
#line 448 "parser.m"
                    if (mercury__parser__succeeded)
#line 448 "parser.m"
                      {
#line 448 "parser.m"
                        mercury__parser__Op_113 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_15, (MR_Integer) 0)));
#line 449 "parser.m"
                        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 449 "parser.m"
                        if (mercury__parser__succeeded)
#line 449 "parser.m"
                          {
#line 449 "parser.m"
                            mercury__parser__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
#line 449 "parser.m"
                            mercury__parser__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
#line 449 "parser.m"
                            mercury__parser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
#line 449 "parser.m"
                            mercury__parser__succeeded = (mercury__parser__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 449 "parser.m"
                          }
#line 449 "parser.m"
                        mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 448 "parser.m"
                        if (mercury__parser__succeeded)
#line 448 "parser.m"
                          {
#line 1104 "parser.m"
                            mercury__parser__V_156_156 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 0)));
#line 1104 "parser.m"
                            mercury__parser__OpTable_102 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 1));
#line 1104 "parser.m"
                            mercury__parser__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 2)));
#line 1104 "parser.m"
                            mercury__parser__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 3)));
#line 451 "parser.m"
                            {
#line 451 "parser.m"
                              mercury__parser__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__parser__TypeClassInfo_for_op_table_122, mercury__parser__OpTable_102, mercury__parser__Op_113, &mercury__parser__UnOpPriority_48, &mercury__parser__RightAssoc_115);
                            }
#line 448 "parser.m"
                            if (mercury__parser__succeeded)
#line 448 "parser.m"
                              {
#line 452 "parser.m"
                                mercury__parser__succeeded = (mercury__parser__UnOpPriority_48 <= mercury__parser__MaxPriority_9);
#line 448 "parser.m"
                                if (mercury__parser__succeeded)
#line 448 "parser.m"
                                  {
#line 453 "parser.m"
                                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 453 "parser.m"
                                    if (mercury__parser__succeeded)
#line 453 "parser.m"
                                      {
#line 453 "parser.m"
                                        mercury__parser__NextToken_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
#line 453 "parser.m"
                                        mercury__parser__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
#line 453 "parser.m"
                                        mercury__parser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
#line 454 "parser.m"
                                        mercury__parser__V_86_86 = (MR_Integer) 1;
#line 454 "parser.m"
                                        {
#line 454 "parser.m"
                                          mercury__parser__could_start_term_2_p_0(mercury__parser__NextToken_103, &mercury__parser__V_139_139);
                                        }
#line 454 "parser.m"
                                        mercury__parser__succeeded = (mercury__parser__V_86_86 == mercury__parser__V_139_139);
#line 453 "parser.m"
                                      }
#line 448 "parser.m"
                                  }
#line 448 "parser.m"
                              }
#line 448 "parser.m"
                          }
#line 448 "parser.m"
                      }
#line 471 "parser.m"
                    if (mercury__parser__succeeded)
#line 457 "parser.m"
                      {
#line 457 "parser.m"
                        MR_Integer mercury__parser__RightPriority_109;
#line 457 "parser.m"
                        MR_Word mercury__parser__RightResult_110;

#line 40 "ops.opt"
#line 40 "ops.opt"
                        switch (mercury__parser__RightAssoc_115) {
#line 40 "ops.opt"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
                          case (MR_Integer) 0:
#line 41 "ops.opt"
                            {
#line 42 "ops.opt"
                              mercury__parser__RightPriority_109 = (mercury__parser__UnOpPriority_48 - (MR_Integer) 1);
#line 41 "ops.opt"
                            }
#line 40 "ops.opt"
                            break;
#line 40 "ops.opt"
                          case (MR_Integer) 1:
#line 40 "ops.opt"
                            mercury__parser__RightPriority_109 = mercury__parser__UnOpPriority_48;
#line 40 "ops.opt"
                            break;
#line 40 "ops.opt"
                        }
#line 458 "parser.m"
                        {
#line 458 "parser.m"
                          mercury__parser__parse_term_2_7_p_0(mercury__parser__TypeInfo_for_T_123, mercury__parser__TypeClassInfo_for_op_table_122, mercury__parser__RightPriority_109, mercury__parser__TermKind_10, &mercury__parser__RightResult_110, mercury__parser__STATE_VARIABLE_TokensLeft_58_58, mercury__parser__STATE_VARIABLE_TokensLeft_54, mercury__parser__STATE_VARIABLE_PS_0_55, mercury__parser__STATE_VARIABLE_PS_56);
                        }
#line 460 "parser.m"
                        *mercury__parser__OpPriority_11 = mercury__parser__UnOpPriority_48;
#line 466 "parser.m"
                        if (((MR_tag((MR_Word) mercury__parser__RightResult_110)) == (MR_mktag((MR_Integer) 1))))
#line 469 "parser.m"
                          *mercury__parser__Term_12 = mercury__parser__RightResult_110;
#line 466 "parser.m"
                        else
#line 462 "parser.m"
                          {
#line 462 "parser.m"
                            MR_Word mercury__parser__V_89_89;
#line 462 "parser.m"
                            MR_Word mercury__parser__V_90_90;
#line 462 "parser.m"
                            MR_Word mercury__parser__V_91_91;
#line 462 "parser.m"
                            MR_Word mercury__parser__V_92_92;
#line 462 "parser.m"
                            MR_Word mercury__parser__TermContext_104;
#line 462 "parser.m"
                            MR_Word mercury__parser__RightTerm_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightResult_110, (MR_Integer) 0)));

#line 463 "parser.m"
                            {
#line 463 "parser.m"
                              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*mercury__parser__STATE_VARIABLE_PS_56, mercury__parser__Context_16, &mercury__parser__TermContext_104);
                            }
#line 464 "parser.m"
                            {
#line 464 "parser.m"
                              mercury__parser__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 464 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_90_90, 0) = ((MR_Box) (mercury__parser__Op_113));
#line 464 "parser.m"
                            }
#line 464 "parser.m"
                            mercury__parser__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 464 "parser.m"
                            {
#line 464 "parser.m"
                              mercury__parser__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_91_91, 0) = ((MR_Box) (mercury__parser__RightTerm_105));
#line 464 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_91_91, 1) = ((MR_Box) (mercury__parser__V_92_92));
#line 464 "parser.m"
                            }
#line 464 "parser.m"
                            {
#line 464 "parser.m"
                              mercury__parser__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 464 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_89_89, 0) = ((MR_Box) (mercury__parser__V_90_90));
#line 464 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_89_89, 1) = ((MR_Box) (mercury__parser__V_91_91));
#line 464 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_89_89, 2) = ((MR_Box) (mercury__parser__TermContext_104));
#line 464 "parser.m"
                            }
#line 464 "parser.m"
                            {
#line 464 "parser.m"
                              MR_Word base;
#line 464 "parser.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 464 "parser.m"
                              *mercury__parser__Term_12 = base;
#line 464 "parser.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_89_89));
#line 464 "parser.m"
                            }
#line 462 "parser.m"
                          }
#line 457 "parser.m"
                      }
#line 471 "parser.m"
                    else
#line 473 "parser.m"
                      {
#line 472 "parser.m"
                        {
#line 472 "parser.m"
                          mercury__parser__parse_simple_term_8_p_0(mercury__parser__TypeInfo_for_T_123, mercury__parser__TypeClassInfo_for_op_table_122, mercury__parser__Token_15, mercury__parser__Context_16, mercury__parser__MaxPriority_9, mercury__parser__Term_12, mercury__parser__STATE_VARIABLE_TokensLeft_58_58, mercury__parser__STATE_VARIABLE_TokensLeft_54, mercury__parser__STATE_VARIABLE_PS_0_55, mercury__parser__STATE_VARIABLE_PS_56);
                        }
#line 474 "parser.m"
                        *mercury__parser__OpPriority_11 = (MR_Integer) 0;
#line 473 "parser.m"
                      }
#line 471 "parser.m"
                  }
#line 446 "parser.m"
              }
#line 409 "parser.m"
          }
#line 383 "parser.m"
      }
#line 476 "parser.m"
  }
#line 376 "parser.m"
}

#line 358 "parser.m"
static void MR_CALL 
mercury__parser__parse_term_2_7_p_0(
#line 358 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_27,
#line 358 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_26,
#line 358 "parser.m"
  MR_Integer mercury__parser__MaxPriority_8,
#line 358 "parser.m"
  MR_Word mercury__parser__TermKind_9,
#line 358 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 358 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
#line 358 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
#line 358 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
#line 358 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21)
#line 358 "parser.m"
{
#line 363 "parser.m"
  {
#line 363 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 363 "parser.m"
    MR_Integer mercury__parser__LeftPriority_13;
#line 363 "parser.m"
    MR_Word mercury__parser__LeftTerm0_14;
#line 363 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_22_22;
#line 363 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_23_23;

#line 364 "parser.m"
    {
#line 364 "parser.m"
      mercury__parser__parse_left_term_8_p_0(mercury__parser__TypeInfo_for_T_27, mercury__parser__TypeClassInfo_for_op_table_26, mercury__parser__MaxPriority_8, mercury__parser__TermKind_9, &mercury__parser__LeftPriority_13, &mercury__parser__LeftTerm0_14, mercury__parser__STATE_VARIABLE_TokensLeft_0_18, &mercury__parser__STATE_VARIABLE_TokensLeft_22_22, mercury__parser__STATE_VARIABLE_PS_0_20, &mercury__parser__STATE_VARIABLE_PS_23_23);
    }
#line 370 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__LeftTerm0_14)) == (MR_mktag((MR_Integer) 1))))
#line 371 "parser.m"
      {
#line 373 "parser.m"
        *mercury__parser__Term_10 = mercury__parser__LeftTerm0_14;
#line 371 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_19 = mercury__parser__STATE_VARIABLE_TokensLeft_22_22;
#line 371 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_21 = mercury__parser__STATE_VARIABLE_PS_23_23;
#line 371 "parser.m"
      }
#line 370 "parser.m"
    else
#line 367 "parser.m"
      {
#line 367 "parser.m"
        MR_Word mercury__parser__LeftTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__LeftTerm0_14, (MR_Integer) 0)));

#line 368 "parser.m"
        {
#line 368 "parser.m"
          mercury__parser__parse_rest_9_p_0(mercury__parser__TypeInfo_for_T_27, mercury__parser__TypeClassInfo_for_op_table_26, mercury__parser__MaxPriority_8, mercury__parser__TermKind_9, mercury__parser__LeftPriority_13, mercury__parser__LeftTerm_15, mercury__parser__Term_10, mercury__parser__STATE_VARIABLE_TokensLeft_22_22, mercury__parser__STATE_VARIABLE_TokensLeft_19, mercury__parser__STATE_VARIABLE_PS_23_23, mercury__parser__STATE_VARIABLE_PS_21);
#line 368 "parser.m"
          return;
        }
#line 367 "parser.m"
      }
#line 363 "parser.m"
  }
#line 358 "parser.m"
}

#line 331 "parser.m"
static void MR_CALL 
mercury__parser__parse_arg_5_p_0(
#line 331 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_21,
#line 331 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
#line 331 "parser.m"
  MR_Word * mercury__parser__Term_6,
#line 331 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_11,
#line 331 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_12,
#line 331 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_13,
#line 331 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_14)
#line 331 "parser.m"
{
#line 335 "parser.m"
  {
#line 335 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 335 "parser.m"
    MR_Box mercury__parser__OpTable_9;
#line 335 "parser.m"
    MR_Integer mercury__parser__ArgPriority_10;
#line 335 "parser.m"
    MR_Integer mercury__parser__V_15_15;
#line 136 "private_builtin.opt"
    MR_Word mercury__parser__TypeInfo_23_23;
#line 1104 "parser.m"
    MR_String mercury__parser__V_26_26;
#line 1104 "parser.m"
    MR_Word mercury__parser__V_27_27;
#line 1104 "parser.m"
    MR_Word mercury__parser__V_28_28;
#line 7874 "parser.c"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
#line 7876 "parser.c"
    MR_Box mercury__parser__conv1_V_15_15;

#line 136 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__parse_arg_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_20 ;
	Index =  (MR_Integer) 1 ;
		{
#line 136 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7894 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_23_23  = TypeInfo;
#line 136 "private_builtin.opt"
}
#line 1104 "parser.m"
    mercury__parser__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 0)));
#line 1104 "parser.m"
    mercury__parser__OpTable_9 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 1));
#line 1104 "parser.m"
    mercury__parser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 2)));
#line 1104 "parser.m"
    mercury__parser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 3)));
#line 7909 "parser.c"
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_20, (MR_Integer) 0)), (MR_Integer) 12)));
#line 7911 "parser.c"
    {
#line 7913 "parser.c"
      mercury__parser__conv1_V_15_15 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_20), mercury__parser__OpTable_9);
    }
#line 7916 "parser.c"
    mercury__parser__V_15_15 = ((MR_Integer) mercury__parser__conv1_V_15_15);
#line 342 "parser.m"
    mercury__parser__ArgPriority_10 = (mercury__parser__V_15_15 + (MR_Integer) 1);
#line 343 "parser.m"
    {
#line 343 "parser.m"
      mercury__parser__parse_term_2_7_p_0(mercury__parser__TypeInfo_for_T_21, mercury__parser__TypeClassInfo_for_op_table_20, mercury__parser__ArgPriority_10, (MR_Integer) 1, mercury__parser__Term_6, mercury__parser__STATE_VARIABLE_TokensLeft_0_11, mercury__parser__STATE_VARIABLE_TokensLeft_12, mercury__parser__STATE_VARIABLE_PS_0_13, mercury__parser__STATE_VARIABLE_PS_14);
#line 343 "parser.m"
      return;
    }
#line 335 "parser.m"
  }
#line 331 "parser.m"
}

#line 322 "parser.m"
static void MR_CALL 
mercury__parser__parse_term_5_p_0(
#line 322 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_21,
#line 322 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
#line 322 "parser.m"
  MR_Word * mercury__parser__Term_6,
#line 322 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_10,
#line 322 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_11,
#line 322 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_12,
#line 322 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_13)
#line 322 "parser.m"
{
#line 326 "parser.m"
  {
#line 326 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 326 "parser.m"
    MR_Box mercury__parser__OpTable_9;
#line 326 "parser.m"
    MR_Integer mercury__parser__V_14_14;
#line 326 "parser.m"
    MR_Integer mercury__parser__V_18_18;
#line 136 "private_builtin.opt"
    MR_Word mercury__parser__TypeInfo_23_23;
#line 1104 "parser.m"
    MR_String mercury__parser__V_26_26;
#line 1104 "parser.m"
    MR_Word mercury__parser__V_27_27;
#line 1104 "parser.m"
    MR_Word mercury__parser__V_28_28;
#line 7969 "parser.c"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
#line 7971 "parser.c"
    MR_Box mercury__parser__conv1_V_18_18;

#line 136 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__parse_term_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_20 ;
	Index =  (MR_Integer) 1 ;
		{
#line 136 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7989 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_23_23  = TypeInfo;
#line 136 "private_builtin.opt"
}
#line 1104 "parser.m"
    mercury__parser__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 0)));
#line 1104 "parser.m"
    mercury__parser__OpTable_9 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 1));
#line 1104 "parser.m"
    mercury__parser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 2)));
#line 1104 "parser.m"
    mercury__parser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 3)));
#line 8004 "parser.c"
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_20, (MR_Integer) 0)), (MR_Integer) 12)));
#line 8006 "parser.c"
    {
#line 8008 "parser.c"
      mercury__parser__conv1_V_18_18 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_20), mercury__parser__OpTable_9);
    }
#line 8011 "parser.c"
    mercury__parser__V_18_18 = ((MR_Integer) mercury__parser__conv1_V_18_18);
#line 328 "parser.m"
    mercury__parser__V_14_14 = (mercury__parser__V_18_18 + (MR_Integer) 1);
#line 328 "parser.m"
    {
#line 328 "parser.m"
      mercury__parser__parse_term_2_7_p_0(mercury__parser__TypeInfo_for_T_21, mercury__parser__TypeClassInfo_for_op_table_20, mercury__parser__V_14_14, (MR_Integer) 0, mercury__parser__Term_6, mercury__parser__STATE_VARIABLE_TokensLeft_0_10, mercury__parser__STATE_VARIABLE_TokensLeft_11, mercury__parser__STATE_VARIABLE_PS_0_12, mercury__parser__STATE_VARIABLE_PS_13);
#line 328 "parser.m"
      return;
    }
#line 326 "parser.m"
  }
#line 322 "parser.m"
}

#line 301 "parser.m"
void MR_CALL 
mercury__parser__parse_whole_term_5_p_0(
#line 301 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_25,
#line 301 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_24,
#line 301 "parser.m"
  MR_Word * mercury__parser__Term_6,
#line 301 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_14,
#line 301 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_15,
#line 301 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_16,
#line 301 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_17)
#line 301 "parser.m"
{
#line 306 "parser.m"
  {
#line 306 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 306 "parser.m"
    MR_Word mercury__parser__Term0_9;
#line 306 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_18_18;
#line 306 "parser.m"
    MR_Box mercury__parser__OpTable_35 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 1));
#line 306 "parser.m"
    MR_Integer mercury__parser__V_36_36;
#line 306 "parser.m"
    MR_Integer mercury__parser__V_40_40;
#line 1104 "parser.m"
    MR_String mercury__parser__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 0)));
#line 1104 "parser.m"
    MR_Word mercury__parser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 2)));
#line 1104 "parser.m"
    MR_Word mercury__parser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 3)));
#line 8066 "parser.c"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
#line 8068 "parser.c"
    MR_Box mercury__parser__conv1_V_40_40;

#line 8071 "parser.c"
    {
#line 8073 "parser.c"
      mercury__parser__conv1_V_40_40 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_24), mercury__parser__OpTable_35);
    }
#line 8076 "parser.c"
    mercury__parser__V_40_40 = ((MR_Integer) mercury__parser__conv1_V_40_40);
#line 328 "parser.m"
    mercury__parser__V_36_36 = (mercury__parser__V_40_40 + (MR_Integer) 1);
#line 328 "parser.m"
    {
#line 328 "parser.m"
      mercury__parser__parse_term_2_7_p_0(mercury__parser__TypeInfo_for_T_25, mercury__parser__TypeClassInfo_for_op_table_24, mercury__parser__V_36_36, (MR_Integer) 0, &mercury__parser__Term0_9, mercury__parser__STATE_VARIABLE_TokensLeft_0_14, &mercury__parser__STATE_VARIABLE_TokensLeft_18_18, mercury__parser__STATE_VARIABLE_PS_0_16, mercury__parser__STATE_VARIABLE_PS_17);
    }
#line 316 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Term0_9)) == (MR_mktag((MR_Integer) 1))))
#line 318 "parser.m"
      {
#line 319 "parser.m"
        *mercury__parser__Term_6 = mercury__parser__Term0_9;
#line 318 "parser.m"
        *mercury__parser__STATE_VARIABLE_TokensLeft_15 = mercury__parser__STATE_VARIABLE_TokensLeft_18_18;
#line 318 "parser.m"
      }
#line 316 "parser.m"
    else
#line 312 "parser.m"
      {
#line 312 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_20_20;
#line 310 "parser.m"
        MR_Word mercury__parser__V_21_21;
#line 310 "parser.m"
        MR_Integer mercury__parser___Context_11;

#line 310 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 310 "parser.m"
        if (mercury__parser__succeeded)
#line 310 "parser.m"
          {
#line 310 "parser.m"
            mercury__parser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 0)));
#line 310 "parser.m"
            mercury__parser___Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 1)));
#line 310 "parser.m"
            mercury__parser__STATE_VARIABLE_TokensLeft_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 2)));
#line 310 "parser.m"
            mercury__parser__succeeded = (mercury__parser__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 310 "parser.m"
          }
#line 312 "parser.m"
        if (mercury__parser__succeeded)
#line 311 "parser.m"
          {
#line 311 "parser.m"
            *mercury__parser__STATE_VARIABLE_TokensLeft_15 = mercury__parser__STATE_VARIABLE_TokensLeft_20_20;
#line 311 "parser.m"
            *mercury__parser__Term_6 = mercury__parser__Term0_9;
#line 311 "parser.m"
          }
#line 312 "parser.m"
        else
#line 313 "parser.m"
          {
#line 971 "parser.m"
            if ((mercury__parser__STATE_VARIABLE_TokensLeft_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "parser.m"
              {
#line 973 "parser.m"
                {
#line 973 "parser.m"
                  MR_Word base;
#line 973 "parser.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "parser.m"
                  *mercury__parser__Term_6 = base;
#line 973 "parser.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator or \140.\' expected"));
#line 973 "parser.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_18_18));
#line 973 "parser.m"
                }
#line 972 "parser.m"
                *mercury__parser__STATE_VARIABLE_TokensLeft_15 = mercury__parser__STATE_VARIABLE_TokensLeft_18_18;
#line 972 "parser.m"
              }
#line 971 "parser.m"
            else
#line 968 "parser.m"
              {
#line 968 "parser.m"
                MR_Word mercury__parser__Token_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 0)));
#line 968 "parser.m"
                MR_Integer mercury__parser__Context_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 1)));
#line 968 "parser.m"
                MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_14_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 2)));
#line 987 "parser.m"
                MR_String mercury__parser__Op_67;
#line 987 "parser.m"
                MR_Box mercury__parser__OpTable_68;
#line 1104 "parser.m"
                MR_String mercury__parser__V_80_80;
#line 1104 "parser.m"
                MR_Word mercury__parser__V_81_81;
#line 1104 "parser.m"
                MR_Word mercury__parser__V_82_82;

#line 983 "parser.m"
                *mercury__parser__STATE_VARIABLE_TokensLeft_15 = mercury__parser__STATE_VARIABLE_TokensLeft_18_18;
#line 986 "parser.m"
                if ((mercury__parser__Token_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 986 "parser.m"
                  {
#line 986 "parser.m"
                    mercury__parser__Op_67 = (MR_String) ",";
#line 986 "parser.m"
                    mercury__parser__succeeded = MR_TRUE;
#line 986 "parser.m"
                  }
#line 986 "parser.m"
                else
#line 986 "parser.m"
                if (((MR_tag((MR_Word) mercury__parser__Token_55)) == (MR_mktag((MR_Integer) 1))))
#line 985 "parser.m"
                  {
#line 985 "parser.m"
                    mercury__parser__Op_67 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_55, (MR_Integer) 0)));
#line 985 "parser.m"
                    mercury__parser__succeeded = MR_TRUE;
#line 985 "parser.m"
                  }
#line 986 "parser.m"
                else
#line 986 "parser.m"
                  mercury__parser__succeeded = MR_FALSE;
#line 987 "parser.m"
                if (mercury__parser__succeeded)
#line 987 "parser.m"
                  {
#line 1104 "parser.m"
                    mercury__parser__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_17, (MR_Integer) 0)));
#line 1104 "parser.m"
                    mercury__parser__OpTable_68 = (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_17, (MR_Integer) 1));
#line 1104 "parser.m"
                    mercury__parser__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_17, (MR_Integer) 2)));
#line 1104 "parser.m"
                    mercury__parser__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_17, (MR_Integer) 3)));
#line 8219 "parser.c"
                    {
#line 8221 "parser.c"
                      MR_Integer mercury__parser__V_69_69;
#line 8223 "parser.c"
                      MR_Word mercury__parser__V_70_70;
#line 8225 "parser.c"
                      MR_Word mercury__parser__V_71_71;
#line 8227 "parser.c"
                      MR_bool MR_CALL (* mercury__parser__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8229 "parser.c"
                      MR_Box mercury__parser__conv5_V_69_69;
#line 8231 "parser.c"
                      MR_Box mercury__parser__conv4_V_70_70;
#line 8233 "parser.c"
                      MR_Box mercury__parser__conv3_V_71_71;

#line 8236 "parser.c"
                      {
#line 8238 "parser.c"
                        mercury__parser__succeeded = mercury__parser__func_2(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_24), mercury__parser__OpTable_68, ((MR_Box) (mercury__parser__Op_67)), &mercury__parser__conv5_V_69_69, &mercury__parser__conv4_V_70_70, &mercury__parser__conv3_V_71_71);
                      }
#line 8241 "parser.c"
                      if (mercury__parser__succeeded)
#line 8243 "parser.c"
                        {
#line 8245 "parser.c"
                          mercury__parser__V_69_69 = ((MR_Integer) mercury__parser__conv5_V_69_69);
#line 8247 "parser.c"
                          mercury__parser__V_70_70 = ((MR_Word) mercury__parser__conv4_V_70_70);
#line 8249 "parser.c"
                          mercury__parser__V_71_71 = ((MR_Word) mercury__parser__conv3_V_71_71);
#line 8251 "parser.c"
                          mercury__parser__succeeded = MR_TRUE;
#line 8253 "parser.c"
                        }
#line 8255 "parser.c"
                    }
#line 990 "parser.m"
                    if (!(mercury__parser__succeeded))
#line 8259 "parser.c"
                      {
#line 8261 "parser.c"
                        MR_Integer mercury__parser__V_72_72;
#line 8263 "parser.c"
                        MR_Word mercury__parser__V_73_73;
#line 8265 "parser.c"
                        MR_bool MR_CALL (* mercury__parser__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 8)));
#line 8267 "parser.c"
                        MR_Box mercury__parser__conv8_V_72_72;
#line 8269 "parser.c"
                        MR_Box mercury__parser__conv7_V_73_73;

#line 8272 "parser.c"
                        {
#line 8274 "parser.c"
                          mercury__parser__succeeded = mercury__parser__func_6(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_24), mercury__parser__OpTable_68, ((MR_Box) (mercury__parser__Op_67)), &mercury__parser__conv8_V_72_72, &mercury__parser__conv7_V_73_73);
                        }
#line 8277 "parser.c"
                        if (mercury__parser__succeeded)
#line 8279 "parser.c"
                          {
#line 8281 "parser.c"
                            mercury__parser__V_72_72 = ((MR_Integer) mercury__parser__conv8_V_72_72);
#line 8283 "parser.c"
                            mercury__parser__V_73_73 = ((MR_Word) mercury__parser__conv7_V_73_73);
#line 8285 "parser.c"
                            mercury__parser__succeeded = MR_TRUE;
#line 8287 "parser.c"
                          }
#line 8289 "parser.c"
                      }
#line 987 "parser.m"
                  }
#line 994 "parser.m"
                if (mercury__parser__succeeded)
#line 993 "parser.m"
                  {
#line 993 "parser.m"
                    {
#line 993 "parser.m"
                      MR_Word base;
#line 993 "parser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "parser.m"
                      *mercury__parser__Term_6 = base;
#line 993 "parser.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
#line 993 "parser.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_15));
#line 993 "parser.m"
                    }
#line 993 "parser.m"
                  }
#line 994 "parser.m"
                else
#line 995 "parser.m"
                  {
#line 995 "parser.m"
                    MR_Word base;
#line 995 "parser.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "parser.m"
                    *mercury__parser__Term_6 = base;
#line 995 "parser.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator or \140.\' expected"));
#line 995 "parser.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_15));
#line 995 "parser.m"
                  }
#line 968 "parser.m"
              }
#line 313 "parser.m"
          }
#line 312 "parser.m"
      }
#line 306 "parser.m"
  }
#line 301 "parser.m"
}

#line 254 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_for_bad_token_3_p_0(
#line 254 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 254 "parser.m"
  MR_String * mercury__parser__Message_2,
#line 254 "parser.m"
  MR_Integer * mercury__parser__LineNum_3)
#line 254 "parser.m"
{
#line 8351 "parser.c"
  while (MR_TRUE)
#line 8353 "parser.c"
    {
#line 8355 "parser.c"
      /* tailcall optimized into a loop */
#line 8357 "parser.c"
      {
#line 8359 "parser.c"
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 8361 "parser.c"
        MR_Word mercury__parser__Token_4;
#line 8363 "parser.c"
        MR_Integer mercury__parser__LineNum0_5;
#line 8365 "parser.c"
        MR_Word mercury__parser__Tokens_6;

#line 8368 "parser.c"
        if (mercury__parser__succeeded)
#line 8370 "parser.c"
          {
#line 8372 "parser.c"
            mercury__parser__Token_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 8374 "parser.c"
            mercury__parser__LineNum0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
#line 8376 "parser.c"
            mercury__parser__Tokens_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 2)));
#line 263 "parser.m"
#line 263 "parser.m"
            switch (MR_tag((MR_Word) mercury__parser__Token_4)) {
#line 263 "parser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 263 "parser.m"
              case (MR_Integer) 0:
#line 296 "parser.m"
                {
#line 296 "parser.m"
                  /* direct tailcall eliminated */
#line 296 "parser.m"
                  {
#line 296 "parser.m"
                    MR_Word mercury__parser__HeadVar__1__tmp_copy_1 = mercury__parser__Tokens_6;

#line 296 "parser.m"
                    mercury__parser__HeadVar__1_1 = mercury__parser__HeadVar__1__tmp_copy_1;
#line 296 "parser.m"
                  }
#line 296 "parser.m"
                  continue;
#line 296 "parser.m"
                }
#line 263 "parser.m"
                break;
#line 263 "parser.m"
              case (MR_Integer) 1:
#line 263 "parser.m"
              case (MR_Integer) 2:
#line 296 "parser.m"
                {
#line 296 "parser.m"
                  /* direct tailcall eliminated */
#line 296 "parser.m"
                  {
#line 296 "parser.m"
                    MR_Word mercury__parser__HeadVar__1__tmp_copy_1 = mercury__parser__Tokens_6;

#line 296 "parser.m"
                    mercury__parser__HeadVar__1_1 = mercury__parser__HeadVar__1__tmp_copy_1;
#line 296 "parser.m"
                  }
#line 296 "parser.m"
                  continue;
#line 296 "parser.m"
                }
#line 263 "parser.m"
                break;
#line 263 "parser.m"
              case (MR_Integer) 3:
#line 263 "parser.m"
#line 263 "parser.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 0)))) {
#line 263 "parser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 263 "parser.m"
                  case (MR_Integer) 0:
#line 263 "parser.m"
                  case (MR_Integer) 1:
#line 263 "parser.m"
                  case (MR_Integer) 2:
#line 263 "parser.m"
                  case (MR_Integer) 3:
#line 263 "parser.m"
                  case (MR_Integer) 4:
#line 263 "parser.m"
                  case (MR_Integer) 8:
#line 296 "parser.m"
                    {
#line 296 "parser.m"
                      /* direct tailcall eliminated */
#line 296 "parser.m"
                      {
#line 296 "parser.m"
                        MR_Word mercury__parser__HeadVar__1__tmp_copy_1 = mercury__parser__Tokens_6;

#line 296 "parser.m"
                        mercury__parser__HeadVar__1_1 = mercury__parser__HeadVar__1__tmp_copy_1;
#line 296 "parser.m"
                      }
#line 296 "parser.m"
                      continue;
#line 296 "parser.m"
                    }
#line 263 "parser.m"
                    break;
#line 263 "parser.m"
                  case (MR_Integer) 5:
#line 264 "parser.m"
                    {
#line 264 "parser.m"
                      MR_Char mercury__parser__Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));
#line 264 "parser.m"
                      MR_Integer mercury__parser__Code_12;
#line 264 "parser.m"
                      MR_String mercury__parser__Decimal_13;
#line 264 "parser.m"
                      MR_String mercury__parser__Hex_14;
#line 264 "parser.m"
                      MR_Word mercury__parser__V_28_28;
#line 264 "parser.m"
                      MR_Word mercury__parser__V_30_30;
#line 264 "parser.m"
                      MR_Word mercury__parser__V_31_31;
#line 264 "parser.m"
                      MR_Word mercury__parser__V_33_33;
#line 264 "parser.m"
                      MR_Word mercury__parser__V_34_34;
#line 264 "parser.m"
                      MR_Word mercury__parser__V_36_36;

#line 111 "char.opt"
{
#define MR_PROC_LABEL mercury__parser__check_for_bad_token_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__parser__Char_11 ;
		{
#line 111 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8503 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Code_12  = Int;
#line 111 "char.opt"
}
#line 266 "parser.m"
                      {
#line 266 "parser.m"
                        mercury__string__int_to_base_string_3_p_0(mercury__parser__Code_12, (MR_Integer) 10, &mercury__parser__Decimal_13);
                      }
#line 267 "parser.m"
                      {
#line 267 "parser.m"
                        mercury__string__int_to_base_string_3_p_0(mercury__parser__Code_12, (MR_Integer) 16, &mercury__parser__Hex_14);
                      }
#line 269 "parser.m"
                      mercury__parser__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 269 "parser.m"
                      mercury__parser__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__parser_scalar_common_1[1]);
#line 269 "parser.m"
                      {
#line 269 "parser.m"
                        mercury__parser__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_33_33, 0) = ((MR_Box) (mercury__parser__Decimal_13));
#line 269 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_33_33, 1) = ((MR_Box) (mercury__parser__V_34_34));
#line 269 "parser.m"
                      }
#line 269 "parser.m"
                      {
#line 269 "parser.m"
                        mercury__parser__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_31_31, 0) = ((MR_Box) ((MR_String) " ("));
#line 269 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_31_31, 1) = ((MR_Box) (mercury__parser__V_33_33));
#line 269 "parser.m"
                      }
#line 268 "parser.m"
                      {
#line 268 "parser.m"
                        mercury__parser__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_30_30, 0) = ((MR_Box) (mercury__parser__Hex_14));
#line 268 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_30_30, 1) = ((MR_Box) (mercury__parser__V_31_31));
#line 268 "parser.m"
                      }
#line 268 "parser.m"
                      {
#line 268 "parser.m"
                        mercury__parser__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_28_28, 0) = ((MR_Box) ((MR_String) "Syntax error: Illegal character 0x"));
#line 268 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_28_28, 1) = ((MR_Box) (mercury__parser__V_30_30));
#line 268 "parser.m"
                      }
#line 197 "string.opt"
                      {
#line 197 "string.opt"
                        *mercury__parser__Message_2 = mercury__string__append_list_1_f_0(mercury__parser__V_28_28);
                      }
#line 270 "parser.m"
                      *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
#line 264 "parser.m"
                      mercury__parser__succeeded = MR_TRUE;
#line 264 "parser.m"
                    }
#line 263 "parser.m"
                    break;
#line 263 "parser.m"
                  case (MR_Integer) 6:
#line 272 "parser.m"
                    {
#line 272 "parser.m"
                      MR_String mercury__parser__ErrorMessage_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));

#line 273 "parser.m"
                      {
#line 273 "parser.m"
                        mercury__string__append_3_p_2((MR_String) "Syntax error: ", mercury__parser__ErrorMessage_15, mercury__parser__Message_2);
                      }
#line 274 "parser.m"
                      *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
#line 272 "parser.m"
                      mercury__parser__succeeded = MR_TRUE;
#line 272 "parser.m"
                    }
#line 263 "parser.m"
                    break;
#line 263 "parser.m"
                  case (MR_Integer) 7:
#line 259 "parser.m"
                    {
#line 259 "parser.m"
                      MR_Word mercury__parser__IO_Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));
#line 259 "parser.m"
                      MR_String mercury__parser__IO_ErrorMessage_10 = (MR_String) mercury__parser__IO_Error_9;

#line 261 "parser.m"
                      {
#line 261 "parser.m"
                        mercury__string__append_3_p_2((MR_String) "I/O error: ", mercury__parser__IO_ErrorMessage_10, mercury__parser__Message_2);
                      }
#line 262 "parser.m"
                      *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
#line 259 "parser.m"
                      mercury__parser__succeeded = MR_TRUE;
#line 259 "parser.m"
                    }
#line 263 "parser.m"
                    break;
#line 263 "parser.m"
                }
#line 263 "parser.m"
                break;
#line 263 "parser.m"
            }
#line 8625 "parser.c"
          }
#line 8627 "parser.c"
        return mercury__parser__succeeded;
#line 8629 "parser.c"
      }
#line 8631 "parser.c"
      break;
#line 8633 "parser.c"
    }
#line 254 "parser.m"
}

#line 210 "parser.m"
void MR_CALL 
mercury__parser__check_for_errors_5_p_0(
#line 210 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_43,
#line 210 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 210 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2,
#line 210 "parser.m"
  MR_Word mercury__parser__Tokens_3,
#line 210 "parser.m"
  MR_Word mercury__parser__HeadVar__4_4,
#line 210 "parser.m"
  MR_Word * mercury__parser__Result_5)
#line 210 "parser.m"
{
#line 214 "parser.m"
  {
#line 214 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 214 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 214 "parser.m"
      {
#line 214 "parser.m"
        MR_String mercury__parser__ErrorMessage_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 214 "parser.m"
        MR_Word mercury__parser__ErrorTokens_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "parser.m"
        MR_String mercury__parser__Message_14;
#line 214 "parser.m"
        MR_Integer mercury__parser__LineNum_15;
#line 219 "parser.m"
        MR_String mercury__parser__BadTokenMessage_12;
#line 219 "parser.m"
        MR_Integer mercury__parser__BadTokenLineNum_13;

#line 216 "parser.m"
        {
#line 216 "parser.m"
          mercury__parser__succeeded = mercury__parser__check_for_bad_token_3_p_0(mercury__parser__Tokens_3, &mercury__parser__BadTokenMessage_12, &mercury__parser__BadTokenLineNum_13);
        }
#line 219 "parser.m"
        if (mercury__parser__succeeded)
#line 217 "parser.m"
          {
#line 217 "parser.m"
            mercury__parser__Message_14 = mercury__parser__BadTokenMessage_12;
#line 218 "parser.m"
            mercury__parser__LineNum_15 = mercury__parser__BadTokenLineNum_13;
#line 217 "parser.m"
          }
#line 219 "parser.m"
        else
#line 226 "parser.m"
        if ((mercury__parser__ErrorTokens_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "parser.m"
          {
#line 230 "parser.m"
            if ((mercury__parser__Tokens_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "parser.m"
              {
#line 232 "parser.m"
                {
#line 232 "parser.m"
                  mercury__require__error_1_p_0((MR_String) "check_for_errors");
#line 232 "parser.m"
                  return;
                }
#line 231 "parser.m"
              }
#line 230 "parser.m"
            else
#line 229 "parser.m"
              {
#line 229 "parser.m"
                MR_Word mercury__parser__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_3, (MR_Integer) 0)));
#line 229 "parser.m"
                MR_Word mercury__parser__V_21_21;

#line 229 "parser.m"
                mercury__parser__LineNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_3, (MR_Integer) 1)));
#line 229 "parser.m"
                mercury__parser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_3, (MR_Integer) 2)));
#line 229 "parser.m"
              }
#line 159 "string.opt"
            {
#line 159 "string.opt"
              mercury__string__append_3_p_2((MR_String) "Syntax error: ", mercury__parser__ErrorMessage_6, &mercury__parser__Message_14);
            }
#line 227 "parser.m"
          }
#line 226 "parser.m"
        else
#line 222 "parser.m"
          {
#line 222 "parser.m"
            MR_Word mercury__parser__ErrorTok_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_7, (MR_Integer) 0)));
#line 222 "parser.m"
            MR_String mercury__parser__TokString_19;
#line 222 "parser.m"
            MR_String mercury__parser__V_25_25;
#line 222 "parser.m"
            MR_String mercury__parser__V_26_26;
#line 222 "parser.m"
            MR_Word mercury__parser__V_18_18;

#line 222 "parser.m"
            mercury__parser__LineNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_7, (MR_Integer) 1)));
#line 222 "parser.m"
            mercury__parser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_7, (MR_Integer) 2)));
#line 223 "parser.m"
            {
#line 223 "parser.m"
              mercury__lexer__token_to_string_2_p_0(mercury__parser__ErrorTok_16, &mercury__parser__TokString_19);
            }
#line 159 "string.opt"
            {
#line 159 "string.opt"
              mercury__string__append_3_p_2((MR_String) ": ", mercury__parser__ErrorMessage_6, &mercury__parser__V_26_26);
            }
#line 159 "string.opt"
            {
#line 159 "string.opt"
              mercury__string__append_3_p_2(mercury__parser__TokString_19, mercury__parser__V_26_26, &mercury__parser__V_25_25);
            }
#line 159 "string.opt"
            {
#line 159 "string.opt"
              mercury__string__append_3_p_2((MR_String) "Syntax error at ", mercury__parser__V_25_25, &mercury__parser__Message_14);
            }
#line 222 "parser.m"
          }
#line 237 "parser.m"
        {
#line 237 "parser.m"
          MR_Word base;
#line 237 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "parser.m"
          *mercury__parser__Result_5 = base;
#line 237 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_14));
#line 237 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_15));
#line 237 "parser.m"
        }
#line 214 "parser.m"
      }
#line 214 "parser.m"
    else
#line 239 "parser.m"
      {
#line 239 "parser.m"
        MR_Word mercury__parser__Term_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "parser.m"
        MR_String mercury__parser__Message_33;
#line 242 "parser.m"
        MR_Integer mercury__parser__LineNum_34;

#line 240 "parser.m"
        {
#line 240 "parser.m"
          mercury__parser__succeeded = mercury__parser__check_for_bad_token_3_p_0(mercury__parser__Tokens_3, &mercury__parser__Message_33, &mercury__parser__LineNum_34);
        }
#line 242 "parser.m"
        if (mercury__parser__succeeded)
#line 241 "parser.m"
          {
#line 241 "parser.m"
            MR_Word base;
#line 241 "parser.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "parser.m"
            *mercury__parser__Result_5 = base;
#line 241 "parser.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_33));
#line 241 "parser.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_34));
#line 241 "parser.m"
          }
#line 242 "parser.m"
        else
#line 248 "parser.m"
        if ((mercury__parser__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "parser.m"
          {
#line 250 "parser.m"
            MR_Word base;
#line 250 "parser.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "parser.m"
            *mercury__parser__Result_5 = base;
#line 250 "parser.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__parser__HeadVar__2_2));
#line 250 "parser.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__parser__Term_28));
#line 250 "parser.m"
          }
#line 248 "parser.m"
        else
#line 244 "parser.m"
          {
#line 244 "parser.m"
            MR_Word mercury__parser__Token_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__4_4, (MR_Integer) 0)));
#line 244 "parser.m"
            MR_String mercury__parser__TokString_37;
#line 244 "parser.m"
            MR_String mercury__parser__Message_39;
#line 244 "parser.m"
            MR_Integer mercury__parser__LineNum_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__4_4, (MR_Integer) 1)));
#line 244 "parser.m"
            MR_Word mercury__parser__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__4_4, (MR_Integer) 2)));

#line 245 "parser.m"
            {
#line 245 "parser.m"
              mercury__lexer__token_to_string_2_p_0(mercury__parser__Token_35, &mercury__parser__TokString_37);
            }
#line 159 "string.opt"
            {
#line 159 "string.opt"
              mercury__string__append_3_p_2((MR_String) "Syntax error: unexpected ", mercury__parser__TokString_37, &mercury__parser__Message_39);
            }
#line 247 "parser.m"
            {
#line 247 "parser.m"
              MR_Word base;
#line 247 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "parser.m"
              *mercury__parser__Result_5 = base;
#line 247 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_39));
#line 247 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_40));
#line 247 "parser.m"
            }
#line 244 "parser.m"
          }
#line 239 "parser.m"
      }
#line 214 "parser.m"
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
#line 1106 "parser.m"
        MR_String mercury__parser__V_47_47;
#line 1106 "parser.m"
        MR_Box mercury__parser__V_48_48;
#line 1106 "parser.m"
        MR_Word mercury__parser__V_49_49;

#line 1071 "parser.m"
        {
#line 1071 "parser.m"
          mercury__parser__ParserState0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 0) = ((MR_Box) (mercury__parser__FileName_6));
#line 1071 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 1) = mercury__parser__Ops_5;
#line 1071 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 2) = ((MR_Box) (mercury__parser__VarSet_24));
#line 1071 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 3) = ((MR_Box) (mercury__parser__Names_25));
#line 1071 "parser.m"
        }
#line 204 "parser.m"
        {
#line 204 "parser.m"
          mercury__parser__parse_whole_term_5_p_0(mercury__parser__TypeInfo_for_T_18, mercury__parser__TypeClassInfo_for_op_table_17, &mercury__parser__Term_13, mercury__parser__Tokens_7, &mercury__parser__LeftOverTokens_14, mercury__parser__ParserState0_12, &mercury__parser__ParserState_15);
        }
#line 1106 "parser.m"
        mercury__parser__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 0)));
#line 1106 "parser.m"
        mercury__parser__V_48_48 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 1));
#line 1106 "parser.m"
        mercury__parser__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 2)));
#line 1106 "parser.m"
        mercury__parser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 3)));
#line 207 "parser.m"
        {
#line 207 "parser.m"
          mercury__parser__check_for_errors_5_p_0(mercury__parser__TypeInfo_for_T_18, mercury__parser__Term_13, mercury__parser__VarSet_16, mercury__parser__Tokens_7, mercury__parser__LeftOverTokens_14, mercury__parser__Result_8);
#line 207 "parser.m"
          return;
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
#line 9008 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_9 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 194 "parser.m"
    {
#line 194 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_8, mercury__parser__TypeClassInfo_for_op_table_9, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_4, mercury__parser__Tokens_5, mercury__parser__Result_6);
#line 194 "parser.m"
      return;
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
#line 189 "parser.m"
      return;
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
#line 9099 "parser.c"
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
#line 189 "parser.m"
      return;
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

#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_from_string_with_op_table_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parser__String_8 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 9161 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Len_11  = Length;
#line 703 "string.opt"
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
#line 189 "parser.m"
      return;
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
#line 9217 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_11 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_from_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parser__String_6 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 9232 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Len_17  = Length;
#line 703 "string.opt"
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
#line 189 "parser.m"
      return;
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
    MR_Box mercury__parser__V_4_26;

#line 848 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{
#line 848 "io.opt"

    Stream = mercury_current_text_input();

#line 9299 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_4_26  = (MR_Box) Stream;
#line 848 "io.opt"
}
#line 845 "io.opt"
    mercury__parser__V_6_19 = (MR_Word) mercury__parser__V_4_26;
#line 39 "lexer.opt"
    {
#line 39 "lexer.opt"
      mercury__lexer__get_token_5_p_0(mercury__parser__V_6_19, &mercury__parser__V_7_21, &mercury__parser__V_8_22);
    }
#line 40 "lexer.opt"
    {
#line 40 "lexer.opt"
      mercury__lexer__get_token_list_2_6_p_0(mercury__parser__V_6_19, mercury__parser__V_7_21, mercury__parser__V_8_22, &mercury__parser__Tokens_10);
    }
#line 170 "parser.m"
    {
#line 170 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_15, mercury__parser__TypeClassInfo_for_op_table_14, mercury__parser__Ops_6, mercury__parser__FileName_7, mercury__parser__Tokens_10, mercury__parser__Result_8);
#line 170 "parser.m"
      return;
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
#line 164 "parser.m"
    MR_Word mercury__parser__Tokens_20;
#line 164 "parser.m"
    MR_Word mercury__parser__V_6_25;
#line 164 "parser.m"
    MR_Word mercury__parser__V_7_27;
#line 164 "parser.m"
    MR_Integer mercury__parser__V_8_28;
#line 164 "parser.m"
    MR_Box mercury__parser__V_4_32;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9360 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_13 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 848 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_filename_4_p_0

	MercuryFilePtr Stream;

		{
#line 848 "io.opt"

    Stream = mercury_current_text_input();

#line 9373 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_4_32  = (MR_Box) Stream;
#line 848 "io.opt"
}
#line 845 "io.opt"
    mercury__parser__V_6_25 = (MR_Word) mercury__parser__V_4_32;
#line 39 "lexer.opt"
    {
#line 39 "lexer.opt"
      mercury__lexer__get_token_5_p_0(mercury__parser__V_6_25, &mercury__parser__V_7_27, &mercury__parser__V_8_28);
    }
#line 40 "lexer.opt"
    {
#line 40 "lexer.opt"
      mercury__lexer__get_token_list_2_6_p_0(mercury__parser__V_6_25, mercury__parser__V_7_27, mercury__parser__V_8_28, &mercury__parser__Tokens_20);
    }
#line 170 "parser.m"
    {
#line 170 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_12, mercury__parser__TypeClassInfo_for_op_table_13, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_5, mercury__parser__Tokens_20, mercury__parser__Result_6);
#line 170 "parser.m"
      return;
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
#line 160 "parser.m"
    MR_Word mercury__parser__Tokens_30;
#line 160 "parser.m"
    MR_Word mercury__parser__V_6_35;
#line 160 "parser.m"
    MR_Word mercury__parser__V_7_37;
#line 160 "parser.m"
    MR_Integer mercury__parser__V_8_38;
#line 160 "parser.m"
    MR_Box mercury__parser__V_4_42;

#line 848 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{
#line 848 "io.opt"

    Stream = mercury_current_text_input();

#line 9447 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_6_19  = (MR_Box) Stream;
#line 848 "io.opt"
}
#line 945 "io.opt"
    {
#line 945 "io.opt"
      mercury__io__stream_name_4_p_0(mercury__parser__V_6_19, &mercury__parser__FileName_8);
    }
#line 848 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{
#line 848 "io.opt"

    Stream = mercury_current_text_input();

#line 9470 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_4_42  = (MR_Box) Stream;
#line 848 "io.opt"
}
#line 845 "io.opt"
    mercury__parser__V_6_35 = (MR_Word) mercury__parser__V_4_42;
#line 39 "lexer.opt"
    {
#line 39 "lexer.opt"
      mercury__lexer__get_token_5_p_0(mercury__parser__V_6_35, &mercury__parser__V_7_37, &mercury__parser__V_8_38);
    }
#line 40 "lexer.opt"
    {
#line 40 "lexer.opt"
      mercury__lexer__get_token_list_2_6_p_0(mercury__parser__V_6_35, mercury__parser__V_7_37, mercury__parser__V_8_38, &mercury__parser__Tokens_30);
    }
#line 170 "parser.m"
    {
#line 170 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__TypeClassInfo_for_op_table_13, mercury__parser__Ops_5, mercury__parser__FileName_8, mercury__parser__Tokens_30, mercury__parser__Result_6);
#line 170 "parser.m"
      return;
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
#line 155 "parser.m"
    MR_Word mercury__parser__Tokens_29;
#line 155 "parser.m"
    MR_Word mercury__parser__V_6_34;
#line 155 "parser.m"
    MR_Word mercury__parser__V_7_36;
#line 155 "parser.m"
    MR_Integer mercury__parser__V_8_37;
#line 155 "parser.m"
    MR_Box mercury__parser__V_4_41;

#line 848 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_3_p_0

	MercuryFilePtr Stream;

		{
#line 848 "io.opt"

    Stream = mercury_current_text_input();

#line 9542 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_6_18  = (MR_Box) Stream;
#line 848 "io.opt"
}
#line 945 "io.opt"
    {
#line 945 "io.opt"
      mercury__io__stream_name_4_p_0(mercury__parser__V_6_18, &mercury__parser__FileName_6);
    }
#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9556 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_13 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 848 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_3_p_0

	MercuryFilePtr Stream;

		{
#line 848 "io.opt"

    Stream = mercury_current_text_input();

#line 9569 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_4_41  = (MR_Box) Stream;
#line 848 "io.opt"
}
#line 845 "io.opt"
    mercury__parser__V_6_34 = (MR_Word) mercury__parser__V_4_41;
#line 39 "lexer.opt"
    {
#line 39 "lexer.opt"
      mercury__lexer__get_token_5_p_0(mercury__parser__V_6_34, &mercury__parser__V_7_36, &mercury__parser__V_8_37);
    }
#line 40 "lexer.opt"
    {
#line 40 "lexer.opt"
      mercury__lexer__get_token_list_2_6_p_0(mercury__parser__V_6_34, mercury__parser__V_7_36, mercury__parser__V_8_37, &mercury__parser__Tokens_29);
    }
#line 170 "parser.m"
    {
#line 170 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_12, mercury__parser__TypeClassInfo_for_op_table_13, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_6, mercury__parser__Tokens_29, mercury__parser__Result_4);
#line 170 "parser.m"
      return;
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
