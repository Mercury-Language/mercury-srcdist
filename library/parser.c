/*
** Automatically generated from `parser.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_state_2_0[5];

#line 132 "parser.c"
static const MR_ConstString mercury__parser__parser__field_names_state_2_0[5];

#line 135 "parser.c"
static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_state_2_0;

#line 138 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_state_2_0[1];

#line 141 "parser.c"
static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_state_2[1];

#line 144 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_state_2[1];

#line 147 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_state_2[1];

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
mercury__parser____Unify____state_2_0_10001(
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
mercury__parser____Compare____state_2_0_10001(
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

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1125 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1125 "parser.m"
  MR_Word mercury__parser__ParserState_4,
#line 1125 "parser.m"
  MR_Integer mercury__parser__TokenContext_5,
#line 1125 "parser.m"
  MR_Word * mercury__parser__TermContext_6);

#line 1109 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_p_0(
#line 1109 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_5,
#line 1109 "parser.m"
  MR_Word mercury__parser__ParserState_3,
#line 1109 "parser.m"
  MR_Box * mercury__parser__OpTable_4);

#line 1087 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
#line 1087 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_21,
#line 1087 "parser.m"
  MR_String mercury__parser__VarName_5,
#line 1087 "parser.m"
  MR_Word * mercury__parser__Var_6,
#line 1087 "parser.m"
  MR_Word mercury__parser__ParserState0_7,
#line 1087 "parser.m"
  MR_Word * mercury__parser__ParserState_8);

#line 1072 "parser.m"
static MR_bool MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1072 "parser.m"
  MR_Word * mercury__parser__Token_4,
#line 1072 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_7,
#line 1072 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_8);

#line 1057 "parser.m"
static MR_bool MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_p_1(
#line 1057 "parser.m"
  MR_Word * mercury__parser__Token_5,
#line 1057 "parser.m"
  MR_Integer * mercury__parser__Context_6,
#line 1057 "parser.m"
  MR_Word mercury__parser__ParserState0_7,
#line 1057 "parser.m"
  MR_Word * mercury__parser__ParserState_8);

#line 1048 "parser.m"
static MR_bool MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1048 "parser.m"
  MR_Word mercury__parser__Token_4,
#line 1048 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_7,
#line 1048 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_8);

#line 984 "parser.m"
static MR_Word MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_101_114_114_111_114_95_95_91_49_44_32_50_44_32_51_93_95_48_2_f_0(
#line 984 "parser.m"
  MR_Word mercury__parser__ParserState_4,
#line 984 "parser.m"
  MR_String mercury__parser__Message_5);

#line 960 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 960 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_23,
#line 960 "parser.m"
  MR_Word mercury__parser__Token_7,
#line 960 "parser.m"
  MR_Integer mercury__parser__Context_8,
#line 960 "parser.m"
  MR_String mercury__parser__UsualMessage_9,
#line 960 "parser.m"
  MR_Word * mercury__parser__Error_10,
#line 960 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_19,
#line 960 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_20);

#line 950 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 950 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_14,
#line 950 "parser.m"
  MR_String mercury__parser__UsualMessage_5,
#line 950 "parser.m"
  MR_Word * mercury__parser__Error_6,
#line 950 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_10,
#line 950 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_11);

#line 733 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
#line 733 "parser.m"
  MR_Word mercury__parser__Term_3,
#line 733 "parser.m"
  MR_Word * mercury__parser__ArgTerms_4);

#line 562 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_p_0(
#line 562 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_38,
#line 562 "parser.m"
  MR_Word mercury__parser__Qualifier0_8,
#line 562 "parser.m"
  MR_Word * mercury__parser__Qualifier_9,
#line 562 "parser.m"
  MR_Word mercury__parser__OpCtxt0_10,
#line 562 "parser.m"
  MR_String mercury__parser__OpName0_11,
#line 562 "parser.m"
  MR_String * mercury__parser__OpName_12,
#line 562 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_23,
#line 562 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_24);

#line 1118 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_priority_3_p_0(
#line 1118 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1118 "parser.m"
  MR_Integer mercury__parser__MaxPriority_2,
#line 1118 "parser.m"
  MR_Integer mercury__parser__Priority_3);

#line 1018 "parser.m"
static MR_bool MR_CALL 
mercury__parser__max_int_plus_1_2_p_0(
#line 1018 "parser.m"
  MR_Integer mercury__parser__HeadVar__1_1,
#line 1018 "parser.m"
  MR_String mercury__parser__HeadVar__2_2);

#line 991 "parser.m"
static void MR_CALL 
mercury__parser__could_start_term_2_p_0(
#line 991 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 991 "parser.m"
  MR_Word * mercury__parser__HeadVar__2_2);

#line 849 "parser.m"
static void MR_CALL 
mercury__parser__parse_args_3_p_0(
#line 849 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_28,
#line 849 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_27,
#line 849 "parser.m"
  MR_Word * mercury__parser__List_4,
#line 849 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_16,
#line 849 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_17);

#line 804 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_2_4_p_0(
#line 804 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_59,
#line 804 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_58,
#line 804 "parser.m"
  MR_Word mercury__parser__Arg_5,
#line 804 "parser.m"
  MR_Word * mercury__parser__List_6,
#line 804 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_17,
#line 804 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_18);

#line 790 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_3_p_0(
#line 790 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_15,
#line 790 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_14,
#line 790 "parser.m"
  MR_Word * mercury__parser__List_4,
#line 790 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_10,
#line 790 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_11);

#line 771 "parser.m"
static void MR_CALL 
mercury__parser__parse_special_atom_5_p_0(
#line 771 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_25,
#line 771 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_24,
#line 771 "parser.m"
  MR_String mercury__parser__Atom_6,
#line 771 "parser.m"
  MR_Word mercury__parser__TermContext_7,
#line 771 "parser.m"
  MR_Word * mercury__parser__Term_8,
#line 771 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_14,
#line 771 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_15);

#line 743 "parser.m"
static void MR_CALL 
mercury__parser__check_for_higher_order_term_5_p_0(
#line 743 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_28,
#line 743 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_27,
#line 743 "parser.m"
  MR_Word mercury__parser__Term0_6,
#line 743 "parser.m"
  MR_Integer mercury__parser__Context_7,
#line 743 "parser.m"
  MR_Word * mercury__parser__Term_8,
#line 743 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_17,
#line 743 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_18);

#line 629 "parser.m"
static MR_bool MR_CALL 
mercury__parser__parse_simple_term_2_6_p_0(
#line 629 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_151,
#line 629 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_150,
#line 629 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 629 "parser.m"
  MR_Integer mercury__parser__HeadVar__2_2,
#line 629 "parser.m"
  MR_Integer mercury__parser__Prec_3,
#line 629 "parser.m"
  MR_Word * mercury__parser__HeadVar__4_4,
#line 629 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_5,
#line 629 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_6);

#line 597 "parser.m"
static void MR_CALL 
mercury__parser__parse_simple_term_6_p_0(
#line 597 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_20,
#line 597 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_19,
#line 597 "parser.m"
  MR_Word mercury__parser__Token_7,
#line 597 "parser.m"
  MR_Integer mercury__parser__Context_8,
#line 597 "parser.m"
  MR_Integer mercury__parser__Priority_9,
#line 597 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 597 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_13,
#line 597 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_14);

#line 542 "parser.m"
static MR_bool MR_CALL 
mercury__parser__parse_backquoted_operator_5_p_0(
#line 542 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_25,
#line 542 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_24,
#line 542 "parser.m"
  MR_Word * mercury__parser__Qualifier_6,
#line 542 "parser.m"
  MR_String * mercury__parser__OpName_7,
#line 542 "parser.m"
  MR_Word * mercury__parser__VariableTerm_8,
#line 542 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_16,
#line 542 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_17);

#line 462 "parser.m"
static void MR_CALL 
mercury__parser__parse_rest_7_p_0(
#line 462 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_74,
#line 462 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_73,
#line 462 "parser.m"
  MR_Integer mercury__parser__MaxPriority_8,
#line 462 "parser.m"
  MR_Word mercury__parser__TermKind_9,
#line 462 "parser.m"
  MR_Integer mercury__parser__LeftPriority_10,
#line 462 "parser.m"
  MR_Word mercury__parser__LeftTerm_11,
#line 462 "parser.m"
  MR_Word * mercury__parser__Term_12,
#line 462 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_36,
#line 462 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_37);

#line 363 "parser.m"
static void MR_CALL 
mercury__parser__parse_left_term_6_p_0(
#line 363 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_108,
#line 363 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_107,
#line 363 "parser.m"
  MR_Integer mercury__parser__MaxPriority_7,
#line 363 "parser.m"
  MR_Word mercury__parser__TermKind_8,
#line 363 "parser.m"
  MR_Integer * mercury__parser__OpPriority_9,
#line 363 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 363 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_44,
#line 363 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_45);

#line 349 "parser.m"
static void MR_CALL 
mercury__parser__parse_term_2_5_p_0(
#line 349 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_20,
#line 349 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_19,
#line 349 "parser.m"
  MR_Integer mercury__parser__MaxPriority_6,
#line 349 "parser.m"
  MR_Word mercury__parser__TermKind_7,
#line 349 "parser.m"
  MR_Word * mercury__parser__Term_8,
#line 349 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_15,
#line 349 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_16);

#line 324 "parser.m"
static void MR_CALL 
mercury__parser__parse_arg_3_p_0(
#line 324 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_15,
#line 324 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_14,
#line 324 "parser.m"
  MR_Word * mercury__parser__Term_4,
#line 324 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_8,
#line 324 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_9);

#line 317 "parser.m"
static void MR_CALL 
mercury__parser__parse_term_3_p_0(
#line 317 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_15,
#line 317 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_14,
#line 317 "parser.m"
  MR_Word * mercury__parser__Term_4,
#line 317 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_7,
#line 317 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_8);

#line 252 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_for_bad_token_3_p_0(
#line 252 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 252 "parser.m"
  MR_String * mercury__parser__Message_2,
#line 252 "parser.m"
  MR_Integer * mercury__parser__LineNum_3);


static /* final */ const MR_Box mercury__parser_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__parser_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__parser_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__parser_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__parser_scalar_common_5[6][1];




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

static /* final */ const MR_Box mercury__parser_scalar_common_5[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\140"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "[]"))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "private_builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 1050 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1055 "parser.c"
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

#line 1070 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__lexer__lexer__type_ctor_info_token_list_0
};

#line 1076 "parser.c"
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

#line 1091 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_0[1] = {
  &mercury__parser__parser__du_functor_desc_parse_1_0
};

#line 1096 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_1[1] = {
  &mercury__parser__parser__du_functor_desc_parse_1_1
};

#line 1101 "parser.c"
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

#line 1115 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_parse_1[2] = {
  &mercury__parser__parser__du_functor_desc_parse_1_1,
  &mercury__parser__parser__du_functor_desc_parse_1_0
};

#line 1121 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_parse_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1127 "parser.c"
const MR_TypeCtorInfo_Struct mercury__parser__parser__type_ctor_info_parse_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parser____Unify____parse_1_0_10001)),
  ((MR_Box) (mercury__parser____Compare____parse_1_0_10001)),
  (MR_String) "parser",
  (MR_String) "parse",
  {
    mercury__parser__parser__du_name_ordered_parse_1
  },
  {
    mercury__parser__parser__du_ptag_ordered_parse_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__parser__parser__functor_number_map_parse_1
};

#line 1148 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__varset__pti_varset_1__pseudo_2 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1156 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__term__pti_var_1__pseudo_2 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1164 "parser.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__parser__term__pti_var_1__pseudo_2
  }
};

#line 1173 "parser.c"
static const MR_PseudoTypeInfo mercury__parser__parser__field_types_state_2_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__parser__varset__pti_varset_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__lexer__lexer__type_ctor_info_token_list_0,
  (MR_PseudoTypeInfo) &mercury__parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2
};

#line 1182 "parser.c"
static const MR_ConstString mercury__parser__parser__field_names_state_2_0[5] = {
  (MR_String) "stream_name",
  (MR_String) "ops_table",
  (MR_String) "varset",
  (MR_String) "tokens_left",
  (MR_String) "var_names"
};

#line 1191 "parser.c"
static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_state_2_0 = {
  (MR_String) "state",
  (MR_Integer) 5,
  (MR_Integer) 22,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parser__parser__field_types_state_2_0,
  mercury__parser__parser__field_names_state_2_0,
  NULL,
  NULL
};

#line 1206 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_state_2_0[1] = {
  &mercury__parser__parser__du_functor_desc_state_2_0
};

#line 1211 "parser.c"
static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_state_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__parser__parser__du_stag_ordered_state_2_0
  }
};

#line 1220 "parser.c"
static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_state_2[1] = {
  &mercury__parser__parser__du_functor_desc_state_2_0
};

#line 1225 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_state_2[1] = {
  (MR_Integer) 0
};

#line 1230 "parser.c"
const MR_TypeCtorInfo_Struct mercury__parser__parser__type_ctor_info_state_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parser____Unify____state_2_0_10001)),
  ((MR_Box) (mercury__parser____Compare____state_2_0_10001)),
  (MR_String) "parser",
  (MR_String) "state",
  {
    mercury__parser__parser__du_name_ordered_state_2
  },
  {
    mercury__parser__parser__du_ptag_ordered_state_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__parser__parser__functor_number_map_state_2
};

#line 1251 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_0 = {
  (MR_String) "ordinary_term",
  (MR_Integer) 0
};

#line 1257 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_1 = {
  (MR_String) "argument",
  (MR_Integer) 1
};

#line 1263 "parser.c"
static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_2 = {
  (MR_String) "list_elem",
  (MR_Integer) 2
};

#line 1269 "parser.c"
static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_value_ordered_term_kind_0[3] = {
  &mercury__parser__parser__enum_functor_desc_term_kind_0_0,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_1,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_2
};

#line 1276 "parser.c"
static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_name_ordered_term_kind_0[3] = {
  &mercury__parser__parser__enum_functor_desc_term_kind_0_1,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_2,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_0
};

#line 1283 "parser.c"
static const MR_Integer mercury__parser__parser__functor_number_map_term_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1290 "parser.c"
const MR_TypeCtorInfo_Struct mercury__parser__parser__type_ctor_info_term_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__parser____Unify____term_kind_0_0_10001)),
  ((MR_Box) (mercury__parser____Compare____term_kind_0_0_10001)),
  (MR_String) "parser",
  (MR_String) "term_kind",
  {
    mercury__parser__parser__enum_name_ordered_term_kind_0
  },
  {
    mercury__parser__parser__enum_value_ordered_term_kind_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__parser__parser__functor_number_map_term_kind_0
};

#line 1311 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0_10001(
#line 1314 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1316 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1318 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3)
#line 1320 "parser.c"
{
#line 1322 "parser.c"
  {
#line 1324 "parser.c"
    MR_bool mercury__parser__succeeded;

#line 1327 "parser.c"
    {
#line 1329 "parser.c"
      mercury__parser__succeeded = mercury__parser____Unify____parse_1_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3));
    }
#line 1332 "parser.c"
    return mercury__parser__succeeded;
#line 1334 "parser.c"
  }
#line 1336 "parser.c"
}

#line 1339 "parser.c"
static void MR_CALL 
mercury__parser____Compare____parse_1_0_10001(
#line 1342 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1344 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_2,
#line 1346 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3,
#line 1348 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4)
#line 1350 "parser.c"
{
#line 1352 "parser.c"
  {
#line 1354 "parser.c"
    MR_Word mercury__parser__conv0_HeadVar__1_1;

#line 1357 "parser.c"
    {
#line 1359 "parser.c"
      mercury__parser____Compare____parse_1_0(((MR_Word) mercury__parser__wrapper_arg_1), &mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_3), ((MR_Word) mercury__parser__wrapper_arg_4));
    }
#line 1362 "parser.c"
    *mercury__parser__wrapper_arg_2 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
#line 1364 "parser.c"
  }
#line 1366 "parser.c"
}

#line 1369 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____state_2_0_10001(
#line 1372 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1374 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1376 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3,
#line 1378 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4)
#line 1380 "parser.c"
{
#line 1382 "parser.c"
  {
#line 1384 "parser.c"
    MR_bool mercury__parser__succeeded;

#line 1387 "parser.c"
    {
#line 1389 "parser.c"
      mercury__parser__succeeded = mercury__parser____Unify____state_2_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3), ((MR_Word) mercury__parser__wrapper_arg_4));
    }
#line 1392 "parser.c"
    return mercury__parser__succeeded;
#line 1394 "parser.c"
  }
#line 1396 "parser.c"
}

#line 1399 "parser.c"
static void MR_CALL 
mercury__parser____Compare____state_2_0_10001(
#line 1402 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1404 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1406 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_3,
#line 1408 "parser.c"
  MR_Box mercury__parser__wrapper_arg_4,
#line 1410 "parser.c"
  MR_Box mercury__parser__wrapper_arg_5)
#line 1412 "parser.c"
{
#line 1414 "parser.c"
  {
#line 1416 "parser.c"
    MR_Word mercury__parser__conv0_HeadVar__1_1;

#line 1419 "parser.c"
    {
#line 1421 "parser.c"
      mercury__parser____Compare____state_2_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), &mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_4), ((MR_Word) mercury__parser__wrapper_arg_5));
    }
#line 1424 "parser.c"
    *mercury__parser__wrapper_arg_3 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
#line 1426 "parser.c"
  }
#line 1428 "parser.c"
}

#line 1431 "parser.c"
static MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0_10001(
#line 1434 "parser.c"
  MR_Box mercury__parser__wrapper_arg_1,
#line 1436 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2)
#line 1438 "parser.c"
{
#line 1440 "parser.c"
  {
#line 1442 "parser.c"
    MR_bool mercury__parser__succeeded;

#line 1445 "parser.c"
    {
#line 1447 "parser.c"
      mercury__parser__succeeded = mercury__parser____Unify____term_kind_0_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2));
    }
#line 1450 "parser.c"
    return mercury__parser__succeeded;
#line 1452 "parser.c"
  }
#line 1454 "parser.c"
}

#line 1457 "parser.c"
static void MR_CALL 
mercury__parser____Compare____term_kind_0_0_10001(
#line 1460 "parser.c"
  MR_Box * mercury__parser__wrapper_arg_1,
#line 1462 "parser.c"
  MR_Box mercury__parser__wrapper_arg_2,
#line 1464 "parser.c"
  MR_Box mercury__parser__wrapper_arg_3)
#line 1466 "parser.c"
{
#line 1468 "parser.c"
  {
#line 1470 "parser.c"
    MR_Word mercury__parser__conv0_HeadVar__1_1;

#line 1473 "parser.c"
    {
#line 1475 "parser.c"
      mercury__parser____Compare____term_kind_0_0(&mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3));
    }
#line 1478 "parser.c"
    *mercury__parser__wrapper_arg_1 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
#line 1480 "parser.c"
  }
#line 1482 "parser.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__parser__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 1125 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1125 "parser.m"
  MR_Word mercury__parser__ParserState_4,
#line 1125 "parser.m"
  MR_Integer mercury__parser__TokenContext_5,
#line 1125 "parser.m"
  MR_Word * mercury__parser__TermContext_6)
#line 1125 "parser.m"
{
#line 1128 "parser.m"
  {
#line 1128 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1128 "parser.m"
    MR_String mercury__parser__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 0)));
#line 930 "parser.m"
    MR_Box mercury__parser__V_11_11 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 1));
#line 930 "parser.m"
    MR_Word mercury__parser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 2)));
#line 930 "parser.m"
    MR_Word mercury__parser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 3)));
#line 930 "parser.m"
    MR_Word mercury__parser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 4)));

#line 165 "term.opt"
    {
#line 165 "term.opt"
      MR_Word base;
#line 165 "term.opt"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 165 "term.opt"
      *mercury__parser__TermContext_6 = base;
#line 165 "term.opt"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__FileName_7));
#line 165 "term.opt"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__parser__TokenContext_5));
#line 165 "term.opt"
    }
#line 1128 "parser.m"
  }
#line 1125 "parser.m"
}

#line 1109 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_p_0(
#line 1109 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_5,
#line 1109 "parser.m"
  MR_Word mercury__parser__ParserState_3,
#line 1109 "parser.m"
  MR_Box * mercury__parser__OpTable_4)
#line 1109 "parser.m"
{
#line 1113 "parser.m"
  {
#line 1113 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 133 "private_builtin.opt"
    MR_Word mercury__parser__TypeInfo_8_8;
#line 931 "parser.m"
    MR_String mercury__parser__V_10_10;
#line 931 "parser.m"
    MR_Word mercury__parser__V_11_11;
#line 931 "parser.m"
    MR_Word mercury__parser__V_12_12;
#line 931 "parser.m"
    MR_Word mercury__parser__V_13_13;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_5 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 1588 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_8_8  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 931 "parser.m"
    mercury__parser__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 0)));
#line 931 "parser.m"
    *mercury__parser__OpTable_4 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 1));
#line 931 "parser.m"
    mercury__parser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 2)));
#line 931 "parser.m"
    mercury__parser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 3)));
#line 931 "parser.m"
    mercury__parser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 4)));
#line 1113 "parser.m"
  }
#line 1109 "parser.m"
}

#line 1087 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
#line 1087 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_21,
#line 1087 "parser.m"
  MR_String mercury__parser__VarName_5,
#line 1087 "parser.m"
  MR_Word * mercury__parser__Var_6,
#line 1087 "parser.m"
  MR_Word mercury__parser__ParserState0_7,
#line 1087 "parser.m"
  MR_Word * mercury__parser__ParserState_8)
#line 1087 "parser.m"
{
#line 1095 "parser.m"
  {
#line 1095 "parser.m"
    MR_bool mercury__parser__succeeded = (strcmp(mercury__parser__VarName_5, (MR_String) "_") == 0);

#line 1095 "parser.m"
    if (mercury__parser__succeeded)
#line 1092 "parser.m"
      {
#line 1092 "parser.m"
        MR_Word mercury__parser__VarSet0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 2)));
#line 1092 "parser.m"
        MR_Word mercury__parser__VarSet_10;
#line 932 "parser.m"
        MR_String mercury__parser__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 0)));
#line 932 "parser.m"
        MR_Box mercury__parser__V_31_31 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 1));
#line 932 "parser.m"
        MR_Word mercury__parser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 3)));
#line 932 "parser.m"
        MR_Word mercury__parser__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 4)));
#line 936 "parser.m"
        MR_String mercury__parser__V_36_36;
#line 936 "parser.m"
        MR_Box mercury__parser__V_37_37;
#line 936 "parser.m"
        MR_Word mercury__parser__V_39_39;
#line 936 "parser.m"
        MR_Word mercury__parser__V_40_40;
#line 936 "parser.m"
        MR_Word mercury__parser__V_38_38;

#line 1093 "parser.m"
        {
#line 1093 "parser.m"
          mercury__varset__new_var_3_p_0(mercury__parser__TypeInfo_for_T_21, mercury__parser__Var_6, mercury__parser__VarSet0_9, &mercury__parser__VarSet_10);
        }
#line 936 "parser.m"
        mercury__parser__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 0)));
#line 936 "parser.m"
        mercury__parser__V_37_37 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 1));
#line 936 "parser.m"
        mercury__parser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 2)));
#line 936 "parser.m"
        mercury__parser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 3)));
#line 936 "parser.m"
        mercury__parser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 4)));
#line 936 "parser.m"
        {
#line 936 "parser.m"
          MR_Word base;
#line 936 "parser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 936 "parser.m"
          *mercury__parser__ParserState_8 = base;
#line 936 "parser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_36_36));
#line 936 "parser.m"
          MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__V_37_37;
#line 936 "parser.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_10));
#line 936 "parser.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__V_39_39));
#line 936 "parser.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__parser__V_40_40));
#line 936 "parser.m"
        }
#line 1092 "parser.m"
      }
#line 1095 "parser.m"
    else
#line 1096 "parser.m"
      {
#line 1096 "parser.m"
        MR_Word mercury__parser__Names0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 4)));
#line 934 "parser.m"
        MR_String mercury__parser__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 0)));
#line 934 "parser.m"
        MR_Box mercury__parser__V_43_43 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 1));
#line 934 "parser.m"
        MR_Word mercury__parser__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 2)));
#line 934 "parser.m"
        MR_Word mercury__parser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 3)));
#line 1100 "parser.m"
        MR_Word mercury__parser__Var0_12;
#line 1097 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1097 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1097 "parser.m"
        MR_Word mercury__parser__TypeInfo_25_25;
#line 41 "map.opt"
        MR_Box mercury__parser__conv0_Var0_12;

#line 1719 "parser.c"
        {
#line 1721 "parser.c"
          mercury__parser__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1723 "parser.c"
          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_25_25, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_24_24));
#line 1725 "parser.c"
          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_25_25, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_21));
#line 1727 "parser.c"
        }
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__parser__succeeded = mercury__tree234__search_3_p_0(mercury__parser__TypeCtorInfo_23_23, mercury__parser__TypeInfo_25_25, mercury__parser__Names0_11, ((MR_Box) (mercury__parser__VarName_5)), &mercury__parser__conv0_Var0_12);
        }
#line 41 "map.opt"
        if (mercury__parser__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__parser__Var0_12 = ((MR_Word) mercury__parser__conv0_Var0_12);
#line 41 "map.opt"
            mercury__parser__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 1100 "parser.m"
        if (mercury__parser__succeeded)
#line 1098 "parser.m"
          {
#line 1098 "parser.m"
            *mercury__parser__Var_6 = mercury__parser__Var0_12;
#line 1099 "parser.m"
            *mercury__parser__ParserState_8 = mercury__parser__ParserState0_7;
#line 1098 "parser.m"
          }
#line 1100 "parser.m"
        else
#line 1101 "parser.m"
          {
#line 1101 "parser.m"
            MR_Word mercury__parser__TypeCtorInfo_26_26;
#line 1101 "parser.m"
            MR_Word mercury__parser__TypeInfo_28_28;
#line 1101 "parser.m"
            MR_Word mercury__parser__TypeCtorInfo_13_61;
#line 1101 "parser.m"
            MR_Word mercury__parser__TypeCtorInfo_15_63;
#line 1101 "parser.m"
            MR_Word mercury__parser__Names_13;
#line 1101 "parser.m"
            MR_Word mercury__parser__VarSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 2)));
#line 1101 "parser.m"
            MR_Word mercury__parser__VarSet_16;
#line 1101 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_MaxId_0_10_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_15, (MR_Integer) 0)));
#line 1101 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_Names_0_11_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_15, (MR_Integer) 1)));
#line 1101 "parser.m"
            MR_Word mercury__parser__Values_9_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_15, (MR_Integer) 2)));
#line 1101 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_MaxId_12_59;
#line 1101 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_Names_13_60;
#line 1101 "parser.m"
            MR_Integer mercury__parser__V_4_64;
#line 1101 "parser.m"
            MR_Integer mercury__parser__V0_5_65 = (MR_Integer) mercury__parser__STATE_VARIABLE_MaxId_0_10_56;
#line 1101 "parser.m"
            MR_String mercury__parser__V_74_74;
#line 1101 "parser.m"
            MR_Box mercury__parser__V_75_75;
#line 1101 "parser.m"
            MR_Word mercury__parser__V_77_77;
#line 932 "parser.m"
            MR_String mercury__parser__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 0)));
#line 932 "parser.m"
            MR_Box mercury__parser__V_51_51 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 1));
#line 932 "parser.m"
            MR_Word mercury__parser__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 3)));
#line 932 "parser.m"
            MR_Word mercury__parser__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 4)));
#line 936 "parser.m"
            MR_Word mercury__parser__V_76_76;
#line 936 "parser.m"
            MR_Word mercury__parser__V_78_78;

#line 19 "term.opt"
            mercury__parser__V_4_64 = (mercury__parser__V0_5_65 + (MR_Integer) 1);
#line 18 "term.opt"
            *mercury__parser__Var_6 = (MR_Word) mercury__parser__V_4_64;
#line 18 "term.opt"
            mercury__parser__STATE_VARIABLE_MaxId_12_59 = (MR_Word) mercury__parser__V_4_64;
#line 1811 "parser.c"
            mercury__parser__TypeCtorInfo_13_61 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1813 "parser.c"
            {
#line 1815 "parser.c"
              mercury__parser__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1817 "parser.c"
              MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_28_28, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_13_61));
#line 1819 "parser.c"
              MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_28_28, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_21));
#line 1821 "parser.c"
            }
#line 1823 "parser.c"
            mercury__parser__TypeCtorInfo_15_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__parser__TypeInfo_for_T_21, mercury__parser__TypeInfo_28_28, mercury__parser__TypeCtorInfo_15_63, *mercury__parser__Var_6, ((MR_Box) (mercury__parser__VarName_5)), mercury__parser__STATE_VARIABLE_Names_0_11_57, &mercury__parser__STATE_VARIABLE_Names_13_60);
            }
#line 17 "varset.opt"
            {
#line 17 "varset.opt"
              mercury__parser__VarSet_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17 "varset.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__VarSet_16, 0) = ((MR_Box) (mercury__parser__STATE_VARIABLE_MaxId_12_59));
#line 17 "varset.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__VarSet_16, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_Names_13_60));
#line 17 "varset.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__VarSet_16, 2) = ((MR_Box) (mercury__parser__Values_9_58));
#line 17 "varset.opt"
            }
#line 1842 "parser.c"
            mercury__parser__TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1103 "parser.m"
            {
#line 1103 "parser.m"
              mercury__map__det_insert_4_p_0(mercury__parser__TypeCtorInfo_26_26, mercury__parser__TypeInfo_28_28, ((MR_Box) (mercury__parser__VarName_5)), ((MR_Box) (*mercury__parser__Var_6)), mercury__parser__Names0_11, &mercury__parser__Names_13);
            }
#line 936 "parser.m"
            mercury__parser__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 0)));
#line 936 "parser.m"
            mercury__parser__V_75_75 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 1));
#line 936 "parser.m"
            mercury__parser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 2)));
#line 936 "parser.m"
            mercury__parser__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 3)));
#line 936 "parser.m"
            mercury__parser__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 4)));
#line 940 "parser.m"
            {
#line 940 "parser.m"
              MR_Word base;
#line 940 "parser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 940 "parser.m"
              *mercury__parser__ParserState_8 = base;
#line 940 "parser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_74_74));
#line 940 "parser.m"
              MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__V_75_75;
#line 940 "parser.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_16));
#line 940 "parser.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__V_77_77));
#line 940 "parser.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__parser__Names_13));
#line 940 "parser.m"
            }
#line 1101 "parser.m"
          }
#line 1096 "parser.m"
      }
#line 1095 "parser.m"
  }
#line 1087 "parser.m"
}

#line 1072 "parser.m"
static MR_bool MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1072 "parser.m"
  MR_Word * mercury__parser__Token_4,
#line 1072 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_7,
#line 1072 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_8)
#line 1072 "parser.m"
{
#line 1081 "parser.m"
  {
#line 1081 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1081 "parser.m"
    MR_Word mercury__parser__Tokens_15;
#line 933 "parser.m"
    MR_String mercury__parser__V_18_18;
#line 933 "parser.m"
    MR_Box mercury__parser__V_19_19;
#line 933 "parser.m"
    MR_Word mercury__parser__V_20_20;
#line 933 "parser.m"
    MR_Word mercury__parser__V_21_21;
#line 1083 "parser.m"
    MR_Integer mercury__parser___Context_6;
#line 1083 "parser.m"
    MR_Word mercury__parser__V_16_16;

#line 1081 "parser.m"
    *mercury__parser__STATE_VARIABLE_PS_8 = mercury__parser__STATE_VARIABLE_PS_0_7;
#line 933 "parser.m"
    mercury__parser__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 0)));
#line 933 "parser.m"
    mercury__parser__V_19_19 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 1));
#line 933 "parser.m"
    mercury__parser__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 2)));
#line 933 "parser.m"
    mercury__parser__Tokens_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 3)));
#line 933 "parser.m"
    mercury__parser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 4)));
#line 1083 "parser.m"
    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens_15)) == (MR_mktag((MR_Integer) 1)));
#line 1083 "parser.m"
    if (mercury__parser__succeeded)
#line 1083 "parser.m"
      {
#line 1083 "parser.m"
        *mercury__parser__Token_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_15, (MR_Integer) 0)));
#line 1083 "parser.m"
        mercury__parser___Context_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_15, (MR_Integer) 1)));
#line 1083 "parser.m"
        mercury__parser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_15, (MR_Integer) 2)));
#line 1083 "parser.m"
      }
#line 1081 "parser.m"
    return mercury__parser__succeeded;
#line 1081 "parser.m"
  }
#line 1072 "parser.m"
}

#line 1057 "parser.m"
static MR_bool MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_p_1(
#line 1057 "parser.m"
  MR_Word * mercury__parser__Token_5,
#line 1057 "parser.m"
  MR_Integer * mercury__parser__Context_6,
#line 1057 "parser.m"
  MR_Word mercury__parser__ParserState0_7,
#line 1057 "parser.m"
  MR_Word * mercury__parser__ParserState_8)
#line 1057 "parser.m"
{
#line 1059 "parser.m"
  {
#line 1059 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1059 "parser.m"
    MR_Word mercury__parser__Tokens0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 3)));
#line 1059 "parser.m"
    MR_Word mercury__parser__Tokens_10;
#line 1059 "parser.m"
    MR_String mercury__parser__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 0)));
#line 1059 "parser.m"
    MR_Box mercury__parser__V_15_15 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 1));
#line 1059 "parser.m"
    MR_Word mercury__parser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 2)));
#line 1059 "parser.m"
    MR_Word mercury__parser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_7, (MR_Integer) 4)));

#line 1061 "parser.m"
    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens0_9)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "parser.m"
    if (mercury__parser__succeeded)
#line 1061 "parser.m"
      {
#line 1061 "parser.m"
        *mercury__parser__Token_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_9, (MR_Integer) 0)));
#line 1061 "parser.m"
        *mercury__parser__Context_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_9, (MR_Integer) 1)));
#line 1061 "parser.m"
        mercury__parser__Tokens_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_9, (MR_Integer) 2)));
#line 938 "parser.m"
        {
#line 938 "parser.m"
          MR_Word base;
#line 938 "parser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
          *mercury__parser__ParserState_8 = base;
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_14_14));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__V_15_15;
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__V_16_16));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Tokens_10));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__parser__V_17_17));
#line 938 "parser.m"
        }
#line 938 "parser.m"
        mercury__parser__succeeded = MR_TRUE;
#line 1061 "parser.m"
      }
#line 1059 "parser.m"
    return mercury__parser__succeeded;
#line 1059 "parser.m"
  }
#line 1057 "parser.m"
}

#line 1048 "parser.m"
static MR_bool MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1048 "parser.m"
  MR_Word mercury__parser__Token_4,
#line 1048 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_7,
#line 1048 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_8)
#line 1048 "parser.m"
{
#line 1059 "parser.m"
  {
#line 1059 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1059 "parser.m"
    MR_Word mercury__parser__Tokens0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 3)));
#line 1059 "parser.m"
    MR_Word mercury__parser__Tokens_17;
#line 1059 "parser.m"
    MR_Word mercury__parser__V_18_18;
#line 933 "parser.m"
    MR_String mercury__parser__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 0)));
#line 933 "parser.m"
    MR_Box mercury__parser__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 1));
#line 933 "parser.m"
    MR_Word mercury__parser__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 2)));
#line 933 "parser.m"
    MR_Word mercury__parser__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 4)));
#line 1061 "parser.m"
    MR_Integer mercury__parser___Context_6;
#line 938 "parser.m"
    MR_String mercury__parser__V_27_27;
#line 938 "parser.m"
    MR_Box mercury__parser__V_28_28;
#line 938 "parser.m"
    MR_Word mercury__parser__V_29_29;
#line 938 "parser.m"
    MR_Word mercury__parser__V_31_31;
#line 938 "parser.m"
    MR_Word mercury__parser__V_30_30;

#line 1061 "parser.m"
    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens0_16)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "parser.m"
    if (mercury__parser__succeeded)
#line 1061 "parser.m"
      {
#line 1061 "parser.m"
        mercury__parser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_16, (MR_Integer) 0)));
#line 1061 "parser.m"
        mercury__parser___Context_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_16, (MR_Integer) 1)));
#line 1061 "parser.m"
        mercury__parser__Tokens_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_16, (MR_Integer) 2)));
#line 1061 "parser.m"
        {
#line 1061 "parser.m"
          mercury__parser__succeeded = mercury__lexer____Unify____token_0_0(mercury__parser__Token_4, mercury__parser__V_18_18);
        }
#line 1059 "parser.m"
        if (mercury__parser__succeeded)
#line 1059 "parser.m"
          {
#line 938 "parser.m"
            mercury__parser__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 0)));
#line 938 "parser.m"
            mercury__parser__V_28_28 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 1));
#line 938 "parser.m"
            mercury__parser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 2)));
#line 938 "parser.m"
            mercury__parser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 3)));
#line 938 "parser.m"
            mercury__parser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 4)));
#line 938 "parser.m"
            {
#line 938 "parser.m"
              MR_Word base;
#line 938 "parser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
              *mercury__parser__STATE_VARIABLE_PS_8 = base;
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_27_27));
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__V_28_28;
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__V_29_29));
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Tokens_17));
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__parser__V_31_31));
#line 938 "parser.m"
            }
#line 938 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 1059 "parser.m"
          }
#line 1061 "parser.m"
      }
#line 1059 "parser.m"
    return mercury__parser__succeeded;
#line 1059 "parser.m"
  }
#line 1048 "parser.m"
}

#line 984 "parser.m"
static MR_Word MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_101_114_114_111_114_95_95_91_49_44_32_50_44_32_51_93_95_48_2_f_0(
#line 984 "parser.m"
  MR_Word mercury__parser__ParserState_4,
#line 984 "parser.m"
  MR_String mercury__parser__Message_5)
#line 984 "parser.m"
{
#line 986 "parser.m"
  {
#line 986 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 986 "parser.m"
    MR_Word mercury__parser__HeadVar__3_3;
#line 986 "parser.m"
    MR_Word mercury__parser__Tokens_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 3)));
#line 933 "parser.m"
    MR_String mercury__parser__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 0)));
#line 933 "parser.m"
    MR_Box mercury__parser__V_12_12 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 1));
#line 933 "parser.m"
    MR_Word mercury__parser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 2)));
#line 933 "parser.m"
    MR_Word mercury__parser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 4)));

#line 986 "parser.m"
    {
#line 986 "parser.m"
      mercury__parser__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "parser.m"
      MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__3_3, 0) = ((MR_Box) (mercury__parser__Message_5));
#line 986 "parser.m"
      MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__3_3, 1) = ((MR_Box) (mercury__parser__Tokens_6));
#line 986 "parser.m"
    }
#line 986 "parser.m"
    return mercury__parser__HeadVar__3_3;
#line 986 "parser.m"
  }
#line 984 "parser.m"
}

#line 960 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 960 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_23,
#line 960 "parser.m"
  MR_Word mercury__parser__Token_7,
#line 960 "parser.m"
  MR_Integer mercury__parser__Context_8,
#line 960 "parser.m"
  MR_String mercury__parser__UsualMessage_9,
#line 960 "parser.m"
  MR_Word * mercury__parser__Error_10,
#line 960 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_19,
#line 960 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_20)
#line 960 "parser.m"
{
#line 964 "parser.m"
  {
#line 964 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 964 "parser.m"
    MR_Word mercury__parser__Tokens0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_19, (MR_Integer) 3)));
#line 964 "parser.m"
    MR_Word mercury__parser__Tokens_35;
#line 964 "parser.m"
    MR_String mercury__parser__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_19, (MR_Integer) 0)));
#line 964 "parser.m"
    MR_Box mercury__parser__V_38_38 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_19, (MR_Integer) 1));
#line 964 "parser.m"
    MR_Word mercury__parser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_19, (MR_Integer) 2)));
#line 964 "parser.m"
    MR_Word mercury__parser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_19, (MR_Integer) 4)));
#line 971 "parser.m"
    MR_String mercury__parser__Op_12;
#line 971 "parser.m"
    MR_Box mercury__parser__OpTable_13;
#line 931 "parser.m"
    MR_String mercury__parser__V_53_53;
#line 931 "parser.m"
    MR_Word mercury__parser__V_54_54;
#line 931 "parser.m"
    MR_Word mercury__parser__V_55_55;
#line 931 "parser.m"
    MR_Word mercury__parser__V_56_56;

#line 1069 "parser.m"
    {
#line 1069 "parser.m"
      mercury__parser__Tokens_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "parser.m"
      MR_hl_field(MR_mktag(1), mercury__parser__Tokens_35, 0) = ((MR_Box) (mercury__parser__Token_7));
#line 1069 "parser.m"
      MR_hl_field(MR_mktag(1), mercury__parser__Tokens_35, 1) = ((MR_Box) (mercury__parser__Context_8));
#line 1069 "parser.m"
      MR_hl_field(MR_mktag(1), mercury__parser__Tokens_35, 2) = ((MR_Box) (mercury__parser__Tokens0_34));
#line 1069 "parser.m"
    }
#line 938 "parser.m"
    {
#line 938 "parser.m"
      MR_Word base;
#line 938 "parser.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
      *mercury__parser__STATE_VARIABLE_PS_20 = base;
#line 938 "parser.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_37_37));
#line 938 "parser.m"
      MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__V_38_38;
#line 938 "parser.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__V_39_39));
#line 938 "parser.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Tokens_35));
#line 938 "parser.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__parser__V_40_40));
#line 938 "parser.m"
    }
#line 970 "parser.m"
    if ((mercury__parser__Token_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 970 "parser.m"
      {
#line 970 "parser.m"
        mercury__parser__Op_12 = (MR_String) ",";
#line 970 "parser.m"
        mercury__parser__succeeded = MR_TRUE;
#line 970 "parser.m"
      }
#line 970 "parser.m"
    else
#line 970 "parser.m"
      if (((MR_tag((MR_Word) mercury__parser__Token_7)) == (MR_mktag((MR_Integer) 1))))
#line 969 "parser.m"
        {
#line 969 "parser.m"
          mercury__parser__Op_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_7, (MR_Integer) 0)));
#line 969 "parser.m"
          mercury__parser__succeeded = MR_TRUE;
#line 969 "parser.m"
        }
#line 970 "parser.m"
      else
#line 970 "parser.m"
        mercury__parser__succeeded = MR_FALSE;
#line 971 "parser.m"
    if (mercury__parser__succeeded)
#line 971 "parser.m"
      {
#line 931 "parser.m"
        mercury__parser__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 0)));
#line 931 "parser.m"
        mercury__parser__OpTable_13 = (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 1));
#line 931 "parser.m"
        mercury__parser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 2)));
#line 931 "parser.m"
        mercury__parser__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 3)));
#line 931 "parser.m"
        mercury__parser__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 4)));
#line 2293 "parser.c"
        {
#line 2295 "parser.c"
          MR_Integer mercury__parser__V_14_14;
#line 2297 "parser.c"
          MR_Word mercury__parser__V_15_15;
#line 2299 "parser.c"
          MR_Word mercury__parser__V_16_16;
#line 2301 "parser.c"
          MR_bool MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2303 "parser.c"
          MR_Box mercury__parser__conv3_V_14_14;
#line 2305 "parser.c"
          MR_Box mercury__parser__conv2_V_15_15;
#line 2307 "parser.c"
          MR_Box mercury__parser__conv1_V_16_16;

#line 2310 "parser.c"
          {
#line 2312 "parser.c"
            mercury__parser__succeeded = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_23), mercury__parser__OpTable_13, ((MR_Box) (mercury__parser__Op_12)), &mercury__parser__conv3_V_14_14, &mercury__parser__conv2_V_15_15, &mercury__parser__conv1_V_16_16);
          }
#line 2315 "parser.c"
          if (mercury__parser__succeeded)
#line 2317 "parser.c"
            {
#line 2319 "parser.c"
              mercury__parser__V_14_14 = ((MR_Integer) mercury__parser__conv3_V_14_14);
#line 2321 "parser.c"
              mercury__parser__V_15_15 = ((MR_Word) mercury__parser__conv2_V_15_15);
#line 2323 "parser.c"
              mercury__parser__V_16_16 = ((MR_Word) mercury__parser__conv1_V_16_16);
#line 2325 "parser.c"
              mercury__parser__succeeded = MR_TRUE;
#line 2327 "parser.c"
            }
#line 2329 "parser.c"
        }
#line 974 "parser.m"
        if (!(mercury__parser__succeeded))
#line 2333 "parser.c"
          {
#line 2335 "parser.c"
            MR_Integer mercury__parser__V_17_17;
#line 2337 "parser.c"
            MR_Word mercury__parser__V_18_18;
#line 2339 "parser.c"
            MR_bool MR_CALL (* mercury__parser__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 8)));
#line 2341 "parser.c"
            MR_Box mercury__parser__conv6_V_17_17;
#line 2343 "parser.c"
            MR_Box mercury__parser__conv5_V_18_18;

#line 2346 "parser.c"
            {
#line 2348 "parser.c"
              mercury__parser__succeeded = mercury__parser__func_4(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_23), mercury__parser__OpTable_13, ((MR_Box) (mercury__parser__Op_12)), &mercury__parser__conv6_V_17_17, &mercury__parser__conv5_V_18_18);
            }
#line 2351 "parser.c"
            if (mercury__parser__succeeded)
#line 2353 "parser.c"
              {
#line 2355 "parser.c"
                mercury__parser__V_17_17 = ((MR_Integer) mercury__parser__conv6_V_17_17);
#line 2357 "parser.c"
                mercury__parser__V_18_18 = ((MR_Word) mercury__parser__conv5_V_18_18);
#line 2359 "parser.c"
                mercury__parser__succeeded = MR_TRUE;
#line 2361 "parser.c"
              }
#line 2363 "parser.c"
          }
#line 971 "parser.m"
      }
#line 978 "parser.m"
    if (mercury__parser__succeeded)
#line 977 "parser.m"
      {
#line 977 "parser.m"
        MR_Word mercury__parser__Tokens_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 3)));
#line 933 "parser.m"
        MR_String mercury__parser__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 0)));
#line 933 "parser.m"
        MR_Box mercury__parser__V_62_62 = (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 1));
#line 933 "parser.m"
        MR_Word mercury__parser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 2)));
#line 933 "parser.m"
        MR_Word mercury__parser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 4)));

#line 986 "parser.m"
        {
#line 986 "parser.m"
          MR_Word base;
#line 986 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "parser.m"
          *mercury__parser__Error_10 = base;
#line 986 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
#line 986 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Tokens_59));
#line 986 "parser.m"
        }
#line 977 "parser.m"
      }
#line 978 "parser.m"
    else
#line 979 "parser.m"
      {
#line 979 "parser.m"
        MR_Word mercury__parser__Tokens_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 3)));
#line 933 "parser.m"
        MR_String mercury__parser__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 0)));
#line 933 "parser.m"
        MR_Box mercury__parser__V_70_70 = (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 1));
#line 933 "parser.m"
        MR_Word mercury__parser__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 2)));
#line 933 "parser.m"
        MR_Word mercury__parser__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_20, (MR_Integer) 4)));

#line 986 "parser.m"
        {
#line 986 "parser.m"
          MR_Word base;
#line 986 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "parser.m"
          *mercury__parser__Error_10 = base;
#line 986 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__UsualMessage_9));
#line 986 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Tokens_67));
#line 986 "parser.m"
        }
#line 979 "parser.m"
      }
#line 964 "parser.m"
  }
#line 960 "parser.m"
}

#line 950 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 950 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_14,
#line 950 "parser.m"
  MR_String mercury__parser__UsualMessage_5,
#line 950 "parser.m"
  MR_Word * mercury__parser__Error_6,
#line 950 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_10,
#line 950 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_11)
#line 950 "parser.m"
{
#line 956 "parser.m"
  {
#line 956 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 956 "parser.m"
    MR_Word mercury__parser__Token_8;
#line 956 "parser.m"
    MR_Integer mercury__parser__Context_9;
#line 956 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_12_12;
#line 954 "parser.m"
    MR_Word mercury__parser__Tokens0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 3)));
#line 954 "parser.m"
    MR_Word mercury__parser__Tokens_26;
#line 954 "parser.m"
    MR_String mercury__parser__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 0)));
#line 954 "parser.m"
    MR_Box mercury__parser__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 1));
#line 954 "parser.m"
    MR_Word mercury__parser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 2)));
#line 954 "parser.m"
    MR_Word mercury__parser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 4)));

#line 1061 "parser.m"
    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens0_25)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "parser.m"
    if (mercury__parser__succeeded)
#line 1061 "parser.m"
      {
#line 1061 "parser.m"
        mercury__parser__Token_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_25, (MR_Integer) 0)));
#line 1061 "parser.m"
        mercury__parser__Context_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_25, (MR_Integer) 1)));
#line 1061 "parser.m"
        mercury__parser__Tokens_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_25, (MR_Integer) 2)));
#line 938 "parser.m"
        {
#line 938 "parser.m"
          mercury__parser__STATE_VARIABLE_PS_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, 0) = ((MR_Box) (mercury__parser__V_28_28));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, 1) = mercury__parser__V_29_29;
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, 2) = ((MR_Box) (mercury__parser__V_30_30));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, 3) = ((MR_Box) (mercury__parser__Tokens_26));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, 4) = ((MR_Box) (mercury__parser__V_31_31));
#line 938 "parser.m"
        }
#line 938 "parser.m"
        mercury__parser__succeeded = MR_TRUE;
#line 1061 "parser.m"
      }
#line 956 "parser.m"
    if (mercury__parser__succeeded)
#line 955 "parser.m"
      {
#line 955 "parser.m"
        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_p_0(mercury__parser__TypeClassInfo_for_op_table_14, mercury__parser__Token_8, mercury__parser__Context_9, mercury__parser__UsualMessage_5, mercury__parser__Error_6, mercury__parser__STATE_VARIABLE_PS_12_12, mercury__parser__STATE_VARIABLE_PS_11);
#line 955 "parser.m"
        return;
      }
#line 956 "parser.m"
    else
#line 957 "parser.m"
      {
#line 957 "parser.m"
        MR_Word mercury__parser__Tokens_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 3)));
#line 933 "parser.m"
        MR_String mercury__parser__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 0)));
#line 933 "parser.m"
        MR_Box mercury__parser__V_44_44 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 1));
#line 933 "parser.m"
        MR_Word mercury__parser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 2)));
#line 933 "parser.m"
        MR_Word mercury__parser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 4)));

#line 986 "parser.m"
        {
#line 986 "parser.m"
          MR_Word base;
#line 986 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "parser.m"
          *mercury__parser__Error_6 = base;
#line 986 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__UsualMessage_5));
#line 986 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Tokens_41));
#line 986 "parser.m"
        }
#line 957 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_11 = mercury__parser__STATE_VARIABLE_PS_0_10;
#line 957 "parser.m"
      }
#line 956 "parser.m"
  }
#line 950 "parser.m"
}

#line 733 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
#line 733 "parser.m"
  MR_Word mercury__parser__Term_3,
#line 733 "parser.m"
  MR_Word * mercury__parser__ArgTerms_4)
#line 733 "parser.m"
{
#line 739 "parser.m"
  {
#line 739 "parser.m"
    MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 739 "parser.m"
    MR_Word mercury__parser__LeftTerm_5;
#line 739 "parser.m"
    MR_Word mercury__parser__RightTerm_6;
#line 736 "parser.m"
    MR_Word mercury__parser__V_9_9;
#line 736 "parser.m"
    MR_String mercury__parser__V_10_10;
#line 736 "parser.m"
    MR_Word mercury__parser__V_11_11;
#line 736 "parser.m"
    MR_Word mercury__parser__V_12_12;
#line 736 "parser.m"
    MR_Word mercury__parser__V_13_13;
#line 736 "parser.m"
    MR_Word mercury__parser__V_7_7;

#line 736 "parser.m"
    if (mercury__parser__succeeded)
#line 736 "parser.m"
      {
#line 736 "parser.m"
        mercury__parser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 0)));
#line 736 "parser.m"
        mercury__parser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 1)));
#line 736 "parser.m"
        mercury__parser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 2)));
#line 736 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 736 "parser.m"
        if (mercury__parser__succeeded)
#line 736 "parser.m"
          {
#line 736 "parser.m"
            mercury__parser__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__V_9_9, (MR_Integer) 0)));
#line 736 "parser.m"
            mercury__parser__succeeded = (strcmp(mercury__parser__V_10_10, (MR_String) ",") == 0);
#line 736 "parser.m"
            if (mercury__parser__succeeded)
#line 736 "parser.m"
              {
#line 736 "parser.m"
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 736 "parser.m"
                if (mercury__parser__succeeded)
#line 736 "parser.m"
                  {
#line 736 "parser.m"
                    mercury__parser__LeftTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_11_11, (MR_Integer) 0)));
#line 736 "parser.m"
                    mercury__parser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_11_11, (MR_Integer) 1)));
#line 736 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 736 "parser.m"
                    if (mercury__parser__succeeded)
#line 736 "parser.m"
                      {
#line 736 "parser.m"
                        mercury__parser__RightTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_12_12, (MR_Integer) 0)));
#line 736 "parser.m"
                        mercury__parser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_12_12, (MR_Integer) 1)));
#line 736 "parser.m"
                        mercury__parser__succeeded = (mercury__parser__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "parser.m"
                      }
#line 736 "parser.m"
                  }
#line 736 "parser.m"
              }
#line 736 "parser.m"
          }
#line 736 "parser.m"
      }
#line 739 "parser.m"
    if (mercury__parser__succeeded)
#line 737 "parser.m"
      {
#line 737 "parser.m"
        MR_Word mercury__parser__ArgTerms0_8;

#line 737 "parser.m"
        {
#line 737 "parser.m"
          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(mercury__parser__RightTerm_6, &mercury__parser__ArgTerms0_8);
        }
#line 738 "parser.m"
        {
#line 738 "parser.m"
          MR_Word base;
#line 738 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "parser.m"
          *mercury__parser__ArgTerms_4 = base;
#line 738 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__LeftTerm_5));
#line 738 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__ArgTerms0_8));
#line 738 "parser.m"
        }
#line 737 "parser.m"
      }
#line 739 "parser.m"
    else
#line 740 "parser.m"
      {
#line 740 "parser.m"
        MR_Word mercury__parser__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 740 "parser.m"
        {
#line 740 "parser.m"
          MR_Word base;
#line 740 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "parser.m"
          *mercury__parser__ArgTerms_4 = base;
#line 740 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Term_3));
#line 740 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__V_14_14));
#line 740 "parser.m"
        }
#line 740 "parser.m"
      }
#line 739 "parser.m"
  }
#line 733 "parser.m"
}

#line 562 "parser.m"
static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_p_0(
#line 562 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_38,
#line 562 "parser.m"
  MR_Word mercury__parser__Qualifier0_8,
#line 562 "parser.m"
  MR_Word * mercury__parser__Qualifier_9,
#line 562 "parser.m"
  MR_Word mercury__parser__OpCtxt0_10,
#line 562 "parser.m"
  MR_String mercury__parser__OpName0_11,
#line 562 "parser.m"
  MR_String * mercury__parser__OpName_12,
#line 562 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_23,
#line 562 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_24)
#line 562 "parser.m"
{
#line 590 "parser.m"
  while (MR_TRUE)
#line 590 "parser.m"
    {
#line 590 "parser.m"
      /* tailcall optimized into a loop */
#line 590 "parser.m"
      {
#line 590 "parser.m"
        MR_bool mercury__parser__succeeded;
#line 590 "parser.m"
        MR_Integer mercury__parser__SepContext_15;
#line 590 "parser.m"
        MR_String mercury__parser__OpName1_16;
#line 590 "parser.m"
        MR_Integer mercury__parser__NameContext_17;
#line 590 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_PS_28_28;
#line 569 "parser.m"
        MR_String mercury__parser__ModuleSeparator_14;
#line 569 "parser.m"
        MR_Word mercury__parser__V_25_25;
#line 569 "parser.m"
        MR_Word mercury__parser__V_27_27;
#line 569 "parser.m"
        MR_Word mercury__parser__Tokens0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 3)));
#line 569 "parser.m"
        MR_String mercury__parser__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 0)));
#line 569 "parser.m"
        MR_Box mercury__parser__V_54_54 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 1));
#line 569 "parser.m"
        MR_Word mercury__parser__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 2)));
#line 569 "parser.m"
        MR_Word mercury__parser__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 4)));
#line 569 "parser.m"
        MR_String mercury__parser__V_59_59;
#line 569 "parser.m"
        MR_Box mercury__parser__V_60_60;
#line 569 "parser.m"
        MR_Word mercury__parser__V_61_61;
#line 569 "parser.m"
        MR_Word mercury__parser__V_63_63;
#line 569 "parser.m"
        MR_Word mercury__parser__Tokens0_68;
#line 569 "parser.m"
        MR_Word mercury__parser__Tokens_69;

#line 1061 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens0_50)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "parser.m"
        if (mercury__parser__succeeded)
#line 1061 "parser.m"
          {
#line 1061 "parser.m"
            mercury__parser__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_50, (MR_Integer) 0)));
#line 1061 "parser.m"
            mercury__parser__SepContext_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_50, (MR_Integer) 1)));
#line 1061 "parser.m"
            mercury__parser__Tokens0_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_50, (MR_Integer) 2)));
#line 938 "parser.m"
            mercury__parser__V_59_59 = mercury__parser__V_53_53;
#line 938 "parser.m"
            mercury__parser__V_60_60 = mercury__parser__V_54_54;
#line 938 "parser.m"
            mercury__parser__V_61_61 = mercury__parser__V_55_55;
#line 938 "parser.m"
            mercury__parser__V_63_63 = mercury__parser__V_56_56;
#line 569 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 569 "parser.m"
            if (mercury__parser__succeeded)
#line 569 "parser.m"
              {
#line 569 "parser.m"
                mercury__parser__ModuleSeparator_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__V_25_25, (MR_Integer) 0)));
#line 572 "parser.m"
                if ((strcmp(mercury__parser__ModuleSeparator_14, (MR_String) ".") == 0))
#line 571 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 572 "parser.m"
                else
#line 572 "parser.m"
                  if ((strcmp(mercury__parser__ModuleSeparator_14, (MR_String) ":") == 0))
#line 573 "parser.m"
                    mercury__parser__succeeded = MR_TRUE;
#line 572 "parser.m"
                  else
#line 572 "parser.m"
                    mercury__parser__succeeded = MR_FALSE;
#line 569 "parser.m"
                if (mercury__parser__succeeded)
#line 569 "parser.m"
                  {
#line 1061 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens0_68)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "parser.m"
                    if (mercury__parser__succeeded)
#line 1061 "parser.m"
                      {
#line 1061 "parser.m"
                        mercury__parser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_68, (MR_Integer) 0)));
#line 1061 "parser.m"
                        mercury__parser__NameContext_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_68, (MR_Integer) 1)));
#line 1061 "parser.m"
                        mercury__parser__Tokens_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_68, (MR_Integer) 2)));
#line 938 "parser.m"
                        {
#line 938 "parser.m"
                          mercury__parser__STATE_VARIABLE_PS_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_28_28, 0) = ((MR_Box) (mercury__parser__V_59_59));
#line 938 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_28_28, 1) = mercury__parser__V_60_60;
#line 938 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_28_28, 2) = ((MR_Box) (mercury__parser__V_61_61));
#line 938 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_28_28, 3) = ((MR_Box) (mercury__parser__Tokens_69));
#line 938 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_28_28, 4) = ((MR_Box) (mercury__parser__V_63_63));
#line 938 "parser.m"
                        }
#line 575 "parser.m"
                        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 575 "parser.m"
                        if (mercury__parser__succeeded)
#line 575 "parser.m"
                          {
#line 575 "parser.m"
                            mercury__parser__OpName1_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__V_27_27, (MR_Integer) 0)));
#line 576 "parser.m"
                            mercury__parser__succeeded = (strcmp(mercury__parser__OpName1_16, (MR_String) "\140") == 0);
#line 576 "parser.m"
                            mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 575 "parser.m"
                          }
#line 1061 "parser.m"
                      }
#line 569 "parser.m"
                  }
#line 569 "parser.m"
              }
#line 1061 "parser.m"
          }
#line 590 "parser.m"
        if (mercury__parser__succeeded)
#line 578 "parser.m"
          {
#line 578 "parser.m"
            MR_Word mercury__parser__SepCtxt_18;
#line 578 "parser.m"
            MR_Word mercury__parser__OpCtxt1_19;
#line 578 "parser.m"
            MR_Word mercury__parser__QTerm1_20;
#line 578 "parser.m"
            MR_Word mercury__parser__Qualifier1_21;
#line 578 "parser.m"
            MR_Word mercury__parser__V_29_29;
#line 578 "parser.m"
            MR_Word mercury__parser__V_30_30;
#line 578 "parser.m"
            MR_String mercury__parser__FileName_85 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_28_28, (MR_Integer) 0)));
#line 930 "parser.m"
            MR_Box mercury__parser__V_87_87 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_28_28, (MR_Integer) 1));
#line 930 "parser.m"
            MR_Word mercury__parser__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_28_28, (MR_Integer) 2)));
#line 930 "parser.m"
            MR_Word mercury__parser__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_28_28, (MR_Integer) 3)));
#line 930 "parser.m"
            MR_Word mercury__parser__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_28_28, (MR_Integer) 4)));

#line 165 "term.opt"
            {
#line 165 "term.opt"
              mercury__parser__SepCtxt_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 165 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__SepCtxt_18, 0) = ((MR_Box) (mercury__parser__FileName_85));
#line 165 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__SepCtxt_18, 1) = ((MR_Box) (mercury__parser__SepContext_15));
#line 165 "term.opt"
            }
#line 579 "parser.m"
            {
#line 579 "parser.m"
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_28_28, mercury__parser__NameContext_17, &mercury__parser__OpCtxt1_19);
            }
#line 580 "parser.m"
            {
#line 580 "parser.m"
              mercury__parser__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 580 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_29_29, 0) = ((MR_Box) (mercury__parser__OpName0_11));
#line 580 "parser.m"
            }
#line 580 "parser.m"
            mercury__parser__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "parser.m"
            {
#line 580 "parser.m"
              mercury__parser__QTerm1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 580 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_20, 0) = ((MR_Box) (mercury__parser__V_29_29));
#line 580 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_20, 1) = ((MR_Box) (mercury__parser__V_30_30));
#line 580 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_20, 2) = ((MR_Box) (mercury__parser__OpCtxt0_10));
#line 580 "parser.m"
            }
#line 584 "parser.m"
            if ((mercury__parser__Qualifier0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "parser.m"
              {
#line 583 "parser.m"
                mercury__parser__Qualifier1_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 583 "parser.m"
                MR_hl_field(MR_mktag(1), mercury__parser__Qualifier1_21, 0) = ((MR_Box) (mercury__parser__QTerm1_20));
#line 583 "parser.m"
              }
#line 584 "parser.m"
            else
#line 585 "parser.m"
              {
#line 585 "parser.m"
                MR_Word mercury__parser__QTerm0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Qualifier0_8, (MR_Integer) 0)));
#line 585 "parser.m"
                MR_Word mercury__parser__V_31_31;
#line 585 "parser.m"
                MR_Word mercury__parser__V_32_32 = (MR_Word) &mercury__parser_scalar_common_5[1];
#line 585 "parser.m"
                MR_Word mercury__parser__V_34_34;
#line 585 "parser.m"
                MR_Word mercury__parser__V_35_35;
#line 585 "parser.m"
                MR_Word mercury__parser__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 586 "parser.m"
                {
#line 586 "parser.m"
                  mercury__parser__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_35_35, 0) = ((MR_Box) (mercury__parser__QTerm1_20));
#line 586 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_35_35, 1) = ((MR_Box) (mercury__parser__V_36_36));
#line 586 "parser.m"
                }
#line 586 "parser.m"
                {
#line 586 "parser.m"
                  mercury__parser__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_34_34, 0) = ((MR_Box) (mercury__parser__QTerm0_22));
#line 586 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_34_34, 1) = ((MR_Box) (mercury__parser__V_35_35));
#line 586 "parser.m"
                }
#line 586 "parser.m"
                {
#line 586 "parser.m"
                  mercury__parser__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 586 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_31_31, 0) = ((MR_Box) (mercury__parser__V_32_32));
#line 586 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_31_31, 1) = ((MR_Box) (mercury__parser__V_34_34));
#line 586 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_31_31, 2) = ((MR_Box) (mercury__parser__SepCtxt_18));
#line 586 "parser.m"
                }
#line 586 "parser.m"
                {
#line 586 "parser.m"
                  mercury__parser__Qualifier1_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 586 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__Qualifier1_21, 0) = ((MR_Box) (mercury__parser__V_31_31));
#line 586 "parser.m"
                }
#line 585 "parser.m"
              }
#line 588 "parser.m"
            /* direct tailcall eliminated */
#line 588 "parser.m"
            {
#line 588 "parser.m"
              MR_Word mercury__parser__Qualifier0__tmp_copy_8 = mercury__parser__Qualifier1_21;
#line 588 "parser.m"
              MR_Word mercury__parser__OpCtxt0__tmp_copy_10 = mercury__parser__OpCtxt1_19;
#line 588 "parser.m"
              MR_String mercury__parser__OpName0__tmp_copy_11 = mercury__parser__OpName1_16;
#line 588 "parser.m"
              MR_Word mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_23 = mercury__parser__STATE_VARIABLE_PS_28_28;

#line 588 "parser.m"
              mercury__parser__STATE_VARIABLE_PS_0_23 = mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_23;
#line 588 "parser.m"
              mercury__parser__OpName0_11 = mercury__parser__OpName0__tmp_copy_11;
#line 588 "parser.m"
              mercury__parser__OpCtxt0_10 = mercury__parser__OpCtxt0__tmp_copy_10;
#line 588 "parser.m"
              mercury__parser__Qualifier0_8 = mercury__parser__Qualifier0__tmp_copy_8;
#line 588 "parser.m"
            }
#line 588 "parser.m"
            continue;
#line 578 "parser.m"
          }
#line 590 "parser.m"
        else
#line 591 "parser.m"
          {
#line 591 "parser.m"
            *mercury__parser__Qualifier_9 = mercury__parser__Qualifier0_8;
#line 592 "parser.m"
            *mercury__parser__OpName_12 = mercury__parser__OpName0_11;
#line 591 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_24 = mercury__parser__STATE_VARIABLE_PS_0_23;
#line 591 "parser.m"
          }
#line 590 "parser.m"
      }
#line 590 "parser.m"
      break;
#line 590 "parser.m"
    }
#line 562 "parser.m"
}

#line 147 "parser.m"
void MR_CALL 
mercury__parser____Compare____term_kind_0_0(
#line 147 "parser.m"
  MR_Word * mercury__parser__HeadVar__1_1,
#line 147 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2,
#line 147 "parser.m"
  MR_Word mercury__parser__HeadVar__3_3)
#line 147 "parser.m"
{
#line 147 "parser.m"
  {
#line 147 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 147 "parser.m"
    MR_Integer mercury__parser__Cast_HeadVar1_4 = (MR_Integer) mercury__parser__HeadVar__2_2;
#line 147 "parser.m"
    MR_Integer mercury__parser__Cast_HeadVar2_5 = (MR_Integer) mercury__parser__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__parser__succeeded = (mercury__parser__Cast_HeadVar1_4 < mercury__parser__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__parser__succeeded)
#line 68 "private_builtin.opt"
      *mercury__parser__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__parser__succeeded = (mercury__parser__Cast_HeadVar1_4 == mercury__parser__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__parser__succeeded)
#line 73 "private_builtin.opt"
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 147 "parser.m"
  }
#line 147 "parser.m"
}

#line 147 "parser.m"
MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0(
#line 147 "parser.m"
  MR_Word mercury__parser__HeadVar__2_1,
#line 147 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2)
#line 147 "parser.m"
{
#line 3094 "parser.c"
  {
#line 3096 "parser.c"
    MR_bool mercury__parser__succeeded = (mercury__parser__HeadVar__2_1 == mercury__parser__HeadVar__2_2);

#line 3099 "parser.c"
    return mercury__parser__succeeded;
#line 3101 "parser.c"
  }
#line 147 "parser.m"
}

#line 888 "parser.m"
void MR_CALL 
mercury__parser____Compare____state_2_0(
#line 888 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_20,
#line 888 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_21,
#line 888 "parser.m"
  MR_Word * mercury__parser__HeadVar__1_1,
#line 888 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2,
#line 888 "parser.m"
  MR_Word mercury__parser__HeadVar__3_3)
#line 888 "parser.m"
{
#line 888 "parser.m"
  {
#line 888 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 888 "parser.m"
    MR_Integer mercury__parser__CastX_18 = (MR_Integer) mercury__parser__HeadVar__2_2;
#line 888 "parser.m"
    MR_Integer mercury__parser__CastY_19 = (MR_Integer) mercury__parser__HeadVar__3_3;

#line 888 "parser.m"
    mercury__parser__succeeded = (mercury__parser__CastX_18 == mercury__parser__CastY_19);
#line 888 "parser.m"
    if (mercury__parser__succeeded)
#line 3134 "parser.c"
      *mercury__parser__HeadVar__1_1 = (MR_Integer) 0;
#line 888 "parser.m"
    else
#line 888 "parser.m"
      {
#line 888 "parser.m"
        MR_String mercury__parser__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));
#line 888 "parser.m"
        MR_Box mercury__parser__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 1));
#line 888 "parser.m"
        MR_Word mercury__parser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 2)));
#line 888 "parser.m"
        MR_Word mercury__parser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 3)));
#line 888 "parser.m"
        MR_Word mercury__parser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 4)));
#line 888 "parser.m"
        MR_String mercury__parser__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 0)));
#line 888 "parser.m"
        MR_Box mercury__parser__V_10_10 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 1));
#line 888 "parser.m"
        MR_Word mercury__parser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 2)));
#line 888 "parser.m"
        MR_Word mercury__parser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 3)));
#line 888 "parser.m"
        MR_Word mercury__parser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 4)));
#line 888 "parser.m"
        MR_Word mercury__parser__V_14_14;
#line 888 "parser.m"
        MR_Integer mercury__parser__Res_7_34;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser____Compare____state_2_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__parser__V_4_4 ;
	S2 =  mercury__parser__V_9_9 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3180 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Res_7_34  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__parser__succeeded = (mercury__parser__Res_7_34 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__parser__succeeded)
#line 104 "private_builtin.opt"
          mercury__parser__V_14_14 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__parser__succeeded = (mercury__parser__Res_7_34 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__parser__succeeded)
#line 109 "private_builtin.opt"
              mercury__parser__V_14_14 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              mercury__parser__V_14_14 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 3209 "parser.c"
        mercury__parser__succeeded = (mercury__parser__V_14_14 == (MR_Integer) 0);
#line 888 "parser.m"
        mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 888 "parser.m"
        if (mercury__parser__succeeded)
#line 888 "parser.m"
          *mercury__parser__HeadVar__1_1 = mercury__parser__V_14_14;
#line 888 "parser.m"
        else
#line 888 "parser.m"
          {
#line 888 "parser.m"
            MR_Word mercury__parser__V_15_15;

#line 888 "parser.m"
            {
#line 888 "parser.m"
              mercury__builtin__compare_3_p_0(mercury__parser__TypeInfo_for_Ops_20, &mercury__parser__V_15_15, mercury__parser__V_5_5, mercury__parser__V_10_10);
            }
#line 3229 "parser.c"
            mercury__parser__succeeded = (mercury__parser__V_15_15 == (MR_Integer) 0);
#line 888 "parser.m"
            mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 888 "parser.m"
            if (mercury__parser__succeeded)
#line 888 "parser.m"
              *mercury__parser__HeadVar__1_1 = mercury__parser__V_15_15;
#line 888 "parser.m"
            else
#line 888 "parser.m"
              {
#line 888 "parser.m"
                MR_Word mercury__parser__V_16_16;

#line 888 "parser.m"
                {
#line 888 "parser.m"
                  mercury__varset____Compare____varset_1_0(mercury__parser__TypeInfo_for_T_21, &mercury__parser__V_16_16, mercury__parser__V_6_6, mercury__parser__V_11_11);
                }
#line 3249 "parser.c"
                mercury__parser__succeeded = (mercury__parser__V_16_16 == (MR_Integer) 0);
#line 888 "parser.m"
                mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 888 "parser.m"
                if (mercury__parser__succeeded)
#line 888 "parser.m"
                  *mercury__parser__HeadVar__1_1 = mercury__parser__V_16_16;
#line 888 "parser.m"
                else
#line 888 "parser.m"
                  {
#line 888 "parser.m"
                    MR_Word mercury__parser__V_17_17;

#line 888 "parser.m"
                    {
#line 888 "parser.m"
                      mercury__lexer____Compare____token_list_0_0(&mercury__parser__V_17_17, mercury__parser__V_7_7, mercury__parser__V_12_12);
                    }
#line 3269 "parser.c"
                    mercury__parser__succeeded = (mercury__parser__V_17_17 == (MR_Integer) 0);
#line 888 "parser.m"
                    mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 888 "parser.m"
                    if (mercury__parser__succeeded)
#line 888 "parser.m"
                      *mercury__parser__HeadVar__1_1 = mercury__parser__V_17_17;
#line 888 "parser.m"
                    else
#line 888 "parser.m"
                      {
#line 888 "parser.m"
                        MR_Word mercury__parser__TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 888 "parser.m"
                        MR_Word mercury__parser__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 888 "parser.m"
                        MR_Word mercury__parser__TypeInfo_28_28;

#line 3288 "parser.c"
                        {
#line 3290 "parser.c"
                          mercury__parser__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3292 "parser.c"
                          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_28_28, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_27_27));
#line 3294 "parser.c"
                          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_28_28, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_21));
#line 3296 "parser.c"
                        }
#line 888 "parser.m"
                        {
#line 888 "parser.m"
                          mercury__tree234____Compare____tree234_2_0(mercury__parser__TypeCtorInfo_26_26, mercury__parser__TypeInfo_28_28, mercury__parser__HeadVar__1_1, (MR_Word) mercury__parser__V_8_8, (MR_Word) mercury__parser__V_13_13);
#line 888 "parser.m"
                          return;
                        }
#line 888 "parser.m"
                      }
#line 888 "parser.m"
                  }
#line 888 "parser.m"
              }
#line 888 "parser.m"
          }
#line 888 "parser.m"
      }
#line 888 "parser.m"
  }
#line 888 "parser.m"
}

#line 888 "parser.m"
MR_bool MR_CALL 
mercury__parser____Unify____state_2_0(
#line 888 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_15,
#line 888 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_16,
#line 888 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 888 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2)
#line 888 "parser.m"
{
#line 888 "parser.m"
  {
#line 888 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 888 "parser.m"
    MR_Integer mercury__parser__CastX_13 = (MR_Integer) mercury__parser__HeadVar__1_1;
#line 888 "parser.m"
    MR_Integer mercury__parser__CastY_14 = (MR_Integer) mercury__parser__HeadVar__2_2;

#line 888 "parser.m"
    mercury__parser__succeeded = (mercury__parser__CastX_13 == mercury__parser__CastY_14);
#line 888 "parser.m"
    if (mercury__parser__succeeded)
#line 888 "parser.m"
      mercury__parser__succeeded = MR_TRUE;
#line 888 "parser.m"
    else
#line 888 "parser.m"
      {
#line 888 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_20_20;
#line 888 "parser.m"
        MR_Word mercury__parser__TypeCtorInfo_21_21;
#line 888 "parser.m"
        MR_Word mercury__parser__TypeInfo_22_22;
#line 888 "parser.m"
        MR_String mercury__parser__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 888 "parser.m"
        MR_Box mercury__parser__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 1));
#line 888 "parser.m"
        MR_Word mercury__parser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 2)));
#line 888 "parser.m"
        MR_Word mercury__parser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 3)));
#line 888 "parser.m"
        MR_Word mercury__parser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 4)));
#line 888 "parser.m"
        MR_String mercury__parser__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));
#line 888 "parser.m"
        MR_Box mercury__parser__V_9_9 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 1));
#line 888 "parser.m"
        MR_Word mercury__parser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 2)));
#line 888 "parser.m"
        MR_Word mercury__parser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 3)));
#line 888 "parser.m"
        MR_Word mercury__parser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 4)));

#line 3379 "parser.c"
        mercury__parser__succeeded = (strcmp(mercury__parser__V_3_3, mercury__parser__V_8_8) == 0);
#line 888 "parser.m"
        if (mercury__parser__succeeded)
#line 888 "parser.m"
          {
#line 3385 "parser.c"
            {
#line 3387 "parser.c"
              mercury__parser__succeeded = mercury__builtin__unify_2_p_0(mercury__parser__TypeInfo_for_Ops_15, mercury__parser__V_4_4, mercury__parser__V_9_9);
            }
#line 888 "parser.m"
            if (mercury__parser__succeeded)
#line 888 "parser.m"
              {
#line 3394 "parser.c"
                {
#line 3396 "parser.c"
                  mercury__parser__succeeded = mercury__varset____Unify____varset_1_0(mercury__parser__TypeInfo_for_T_16, mercury__parser__V_5_5, mercury__parser__V_10_10);
                }
#line 888 "parser.m"
                if (mercury__parser__succeeded)
#line 888 "parser.m"
                  {
#line 3403 "parser.c"
                    {
#line 3405 "parser.c"
                      mercury__parser__succeeded = mercury__lexer____Unify____token_list_0_0(mercury__parser__V_6_6, mercury__parser__V_11_11);
                    }
#line 888 "parser.m"
                    if (mercury__parser__succeeded)
#line 888 "parser.m"
                      {
#line 3412 "parser.c"
                        mercury__parser__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3414 "parser.c"
                        mercury__parser__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3416 "parser.c"
                        {
#line 3418 "parser.c"
                          mercury__parser__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3420 "parser.c"
                          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_22_22, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_21_21));
#line 3422 "parser.c"
                          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_22_22, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_16));
#line 3424 "parser.c"
                        }
#line 3426 "parser.c"
                        {
#line 3428 "parser.c"
                          return mercury__parser__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__parser__TypeCtorInfo_20_20, mercury__parser__TypeInfo_22_22, (MR_Word) mercury__parser__V_7_7, (MR_Word) mercury__parser__V_12_12);
                        }
#line 888 "parser.m"
                      }
#line 888 "parser.m"
                  }
#line 888 "parser.m"
              }
#line 888 "parser.m"
          }
#line 888 "parser.m"
      }
#line 888 "parser.m"
    return mercury__parser__succeeded;
#line 888 "parser.m"
  }
#line 888 "parser.m"
}

#line 142 "parser.m"
void MR_CALL 
mercury__parser____Compare____parse_1_0(
#line 142 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_19,
#line 142 "parser.m"
  MR_Word * mercury__parser__HeadVar__1_1,
#line 142 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2,
#line 142 "parser.m"
  MR_Word mercury__parser__HeadVar__3_3)
#line 142 "parser.m"
{
#line 142 "parser.m"
  {
#line 142 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 142 "parser.m"
    MR_Integer mercury__parser__CastX_17 = (MR_Integer) mercury__parser__HeadVar__2_2;
#line 142 "parser.m"
    MR_Integer mercury__parser__CastY_18 = (MR_Integer) mercury__parser__HeadVar__3_3;

#line 142 "parser.m"
    mercury__parser__succeeded = (mercury__parser__CastX_17 == mercury__parser__CastY_18);
#line 142 "parser.m"
    if (mercury__parser__succeeded)
#line 3474 "parser.c"
      *mercury__parser__HeadVar__1_1 = (MR_Integer) 0;
#line 142 "parser.m"
    else
#line 142 "parser.m"
      if (((MR_tag((MR_Word) mercury__parser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 142 "parser.m"
        {
#line 142 "parser.m"
          MR_Word mercury__parser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "parser.m"
          MR_String mercury__parser__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));

#line 142 "parser.m"
          if (((MR_tag((MR_Word) mercury__parser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 142 "parser.m"
            {
#line 142 "parser.m"
              MR_String mercury__parser__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__3_3, (MR_Integer) 0)));
#line 142 "parser.m"
              MR_Word mercury__parser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__3_3, (MR_Integer) 1)));
#line 142 "parser.m"
              MR_Word mercury__parser__V_16_16;
#line 142 "parser.m"
              MR_Integer mercury__parser__Res_7_28;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser____Compare____parse_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__parser__V_23_23 ;
	S2 =  mercury__parser__V_14_14 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3515 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Res_7_28  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__parser__succeeded = (mercury__parser__Res_7_28 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__parser__succeeded)
#line 104 "private_builtin.opt"
                mercury__parser__V_16_16 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__parser__succeeded = (mercury__parser__Res_7_28 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__parser__succeeded)
#line 109 "private_builtin.opt"
                    mercury__parser__V_16_16 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    mercury__parser__V_16_16 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 3544 "parser.c"
              mercury__parser__succeeded = (mercury__parser__V_16_16 == (MR_Integer) 0);
#line 142 "parser.m"
              mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 142 "parser.m"
              if (mercury__parser__succeeded)
#line 142 "parser.m"
                *mercury__parser__HeadVar__1_1 = mercury__parser__V_16_16;
#line 142 "parser.m"
              else
#line 142 "parser.m"
                {
#line 142 "parser.m"
                  mercury__lexer____Compare____token_list_0_0(mercury__parser__HeadVar__1_1, mercury__parser__V_22_22, mercury__parser__V_15_15);
#line 142 "parser.m"
                  return;
                }
#line 142 "parser.m"
            }
#line 142 "parser.m"
          else
#line 3565 "parser.c"
            *mercury__parser__HeadVar__1_1 = (MR_Integer) 2;
#line 142 "parser.m"
        }
#line 142 "parser.m"
      else
#line 142 "parser.m"
        {
#line 142 "parser.m"
          MR_Box mercury__parser__V_24_24 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0));

#line 142 "parser.m"
          if (((MR_tag((MR_Word) mercury__parser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3578 "parser.c"
            *mercury__parser__HeadVar__1_1 = (MR_Integer) 1;
#line 142 "parser.m"
          else
#line 142 "parser.m"
            {
#line 142 "parser.m"
              MR_Box mercury__parser__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 0));

#line 142 "parser.m"
              {
#line 142 "parser.m"
                mercury__builtin__compare_3_p_0(mercury__parser__TypeInfo_for_T_19, mercury__parser__HeadVar__1_1, mercury__parser__V_24_24, mercury__parser__V_5_5);
#line 142 "parser.m"
                return;
              }
#line 142 "parser.m"
            }
#line 142 "parser.m"
        }
#line 142 "parser.m"
  }
#line 142 "parser.m"
}

#line 142 "parser.m"
MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0(
#line 142 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_11,
#line 142 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 142 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2)
#line 142 "parser.m"
{
#line 142 "parser.m"
  {
#line 142 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 142 "parser.m"
    MR_Integer mercury__parser__CastX_9 = (MR_Integer) mercury__parser__HeadVar__1_1;
#line 142 "parser.m"
    MR_Integer mercury__parser__CastY_10 = (MR_Integer) mercury__parser__HeadVar__2_2;

#line 142 "parser.m"
    mercury__parser__succeeded = (mercury__parser__CastX_9 == mercury__parser__CastY_10);
#line 142 "parser.m"
    if (mercury__parser__succeeded)
#line 142 "parser.m"
      mercury__parser__succeeded = MR_TRUE;
#line 142 "parser.m"
    else
#line 142 "parser.m"
      if (((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 142 "parser.m"
        {
#line 142 "parser.m"
          MR_String mercury__parser__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 142 "parser.m"
          MR_Word mercury__parser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
#line 142 "parser.m"
          MR_String mercury__parser__V_7_7;
#line 142 "parser.m"
          MR_Word mercury__parser__V_8_8;

#line 142 "parser.m"
          mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 142 "parser.m"
          if (mercury__parser__succeeded)
#line 142 "parser.m"
            {
#line 142 "parser.m"
              mercury__parser__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "parser.m"
              mercury__parser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 1)));
#line 3654 "parser.c"
              mercury__parser__succeeded = (strcmp(mercury__parser__V_5_5, mercury__parser__V_7_7) == 0);
#line 142 "parser.m"
              if (mercury__parser__succeeded)
#line 3658 "parser.c"
                {
#line 3660 "parser.c"
                  return mercury__parser__succeeded = mercury__lexer____Unify____token_list_0_0(mercury__parser__V_6_6, mercury__parser__V_8_8);
                }
#line 142 "parser.m"
            }
#line 142 "parser.m"
        }
#line 142 "parser.m"
      else
#line 142 "parser.m"
        {
#line 142 "parser.m"
          MR_Box mercury__parser__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 0));
#line 142 "parser.m"
          MR_Box mercury__parser__V_4_4;

#line 142 "parser.m"
          mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 142 "parser.m"
          if (mercury__parser__succeeded)
#line 142 "parser.m"
            {
#line 142 "parser.m"
              mercury__parser__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0));
#line 3684 "parser.c"
              {
#line 3686 "parser.c"
                return mercury__parser__succeeded = mercury__builtin__unify_2_p_0(mercury__parser__TypeInfo_for_T_11, mercury__parser__V_3_3, mercury__parser__V_4_4);
              }
#line 142 "parser.m"
            }
#line 142 "parser.m"
        }
#line 142 "parser.m"
    return mercury__parser__succeeded;
#line 142 "parser.m"
  }
#line 142 "parser.m"
}

#line 1118 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_priority_3_p_0(
#line 1118 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 1118 "parser.m"
  MR_Integer mercury__parser__MaxPriority_2,
#line 1118 "parser.m"
  MR_Integer mercury__parser__Priority_3)
#line 1118 "parser.m"
{
#line 1120 "parser.m"
  {
#line 1120 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 1120 "parser.m"
    if ((mercury__parser__HeadVar__1_1 == (MR_Integer) 0))
#line 1123 "parser.m"
      mercury__parser__succeeded = (mercury__parser__Priority_3 < mercury__parser__MaxPriority_2);
#line 1120 "parser.m"
    else
#line 1121 "parser.m"
      mercury__parser__succeeded = (mercury__parser__Priority_3 <= mercury__parser__MaxPriority_2);
#line 1120 "parser.m"
    return mercury__parser__succeeded;
#line 1120 "parser.m"
  }
#line 1118 "parser.m"
}

#line 1033 "parser.m"
void MR_CALL 
mercury__parser__final_parser_state_3_p_0(
#line 1033 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_7,
#line 1033 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_8,
#line 1033 "parser.m"
  MR_Word mercury__parser__ParserState_4,
#line 1033 "parser.m"
  MR_Word * mercury__parser__VarSet_5,
#line 1033 "parser.m"
  MR_Word * mercury__parser__TokenList_6)
#line 1033 "parser.m"
{
#line 932 "parser.m"
  {
#line 932 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 932 "parser.m"
    MR_String mercury__parser__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 0)));
#line 932 "parser.m"
    MR_Box mercury__parser__V_11_11 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 1));
#line 932 "parser.m"
    MR_Word mercury__parser__V_13_13;

#line 932 "parser.m"
    *mercury__parser__VarSet_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 2)));
#line 932 "parser.m"
    *mercury__parser__TokenList_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 3)));
#line 932 "parser.m"
    mercury__parser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 4)));
#line 932 "parser.m"
  }
#line 1033 "parser.m"
}

#line 1025 "parser.m"
void MR_CALL 
mercury__parser__init_parser_state_4_p_0(
#line 1025 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_12,
#line 1025 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_11,
#line 1025 "parser.m"
  MR_Box mercury__parser__Ops_5,
#line 1025 "parser.m"
  MR_String mercury__parser__FileName_6,
#line 1025 "parser.m"
  MR_Word mercury__parser__Tokens_7,
#line 1025 "parser.m"
  MR_Word * mercury__parser__ParserState_8)
#line 1025 "parser.m"
{
#line 1028 "parser.m"
  {
#line 1028 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 1028 "parser.m"
    MR_Word mercury__parser__VarSet_9 = (MR_Word) &mercury__parser_scalar_common_2[2];
#line 1028 "parser.m"
    MR_Word mercury__parser__Names_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1028 "parser.m"
    MR_Word mercury__parser__VarSupply_2_16 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 1028 "parser.m"
    MR_Word mercury__parser__Names_3_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1028 "parser.m"
    MR_Word mercury__parser__Values_4_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1031 "parser.m"
    {
#line 1031 "parser.m"
      MR_Word base;
#line 1031 "parser.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1031 "parser.m"
      *mercury__parser__ParserState_8 = base;
#line 1031 "parser.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__FileName_6));
#line 1031 "parser.m"
      MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__Ops_5;
#line 1031 "parser.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_9));
#line 1031 "parser.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Tokens_7));
#line 1031 "parser.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__parser__Names_10));
#line 1031 "parser.m"
    }
#line 1028 "parser.m"
  }
#line 1025 "parser.m"
}

#line 1018 "parser.m"
static MR_bool MR_CALL 
mercury__parser__max_int_plus_1_2_p_0(
#line 1018 "parser.m"
  MR_Integer mercury__parser__HeadVar__1_1,
#line 1018 "parser.m"
  MR_String mercury__parser__HeadVar__2_2)
#line 1018 "parser.m"
{
#line 1020 "parser.m"
  {
#line 1020 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 1020 "parser.m"
    if ((mercury__parser__HeadVar__1_1 == (MR_Integer) 32))
#line 1020 "parser.m"
      mercury__parser__succeeded = (strcmp(mercury__parser__HeadVar__2_2, (MR_String) "2147483648") == 0);
#line 1020 "parser.m"
    else
#line 1020 "parser.m"
      if ((mercury__parser__HeadVar__1_1 == (MR_Integer) 64))
#line 1021 "parser.m"
        mercury__parser__succeeded = (strcmp(mercury__parser__HeadVar__2_2, (MR_String) "9223372036854775808") == 0);
#line 1020 "parser.m"
      else
#line 1020 "parser.m"
        mercury__parser__succeeded = MR_FALSE;
#line 1020 "parser.m"
    return mercury__parser__succeeded;
#line 1020 "parser.m"
  }
#line 1018 "parser.m"
}

#line 991 "parser.m"
static void MR_CALL 
mercury__parser__could_start_term_2_p_0(
#line 991 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 991 "parser.m"
  MR_Word * mercury__parser__HeadVar__2_2)
#line 991 "parser.m"
{
#line 993 "parser.m"
  {
#line 993 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 993 "parser.m"
    if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1002 "parser.m"
      *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "parser.m"
    else
#line 993 "parser.m"
      if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 1006 "parser.m"
        *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "parser.m"
      else
#line 993 "parser.m"
        if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1004 "parser.m"
          *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "parser.m"
        else
#line 993 "parser.m"
          if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 1008 "parser.m"
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "parser.m"
          else
#line 993 "parser.m"
            if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 1009 "parser.m"
              *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "parser.m"
            else
#line 993 "parser.m"
              if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 1013 "parser.m"
                *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "parser.m"
              else
#line 993 "parser.m"
                if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 1007 "parser.m"
                  *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "parser.m"
                else
#line 993 "parser.m"
                  if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1000 "parser.m"
                    *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 993 "parser.m"
                  else
#line 993 "parser.m"
                    if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1001 "parser.m"
                      *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 993 "parser.m"
                    else
#line 993 "parser.m"
                      if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1005 "parser.m"
                        *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 993 "parser.m"
                      else
#line 993 "parser.m"
                        if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1003 "parser.m"
                          *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 993 "parser.m"
                        else
#line 993 "parser.m"
                          if (((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 993 "parser.m"
                            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 993 "parser.m"
                          else
#line 993 "parser.m"
                            if (((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 994 "parser.m"
                              *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 993 "parser.m"
                            else
#line 993 "parser.m"
                              if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 996 "parser.m"
                                *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 993 "parser.m"
                              else
#line 993 "parser.m"
                                if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1011 "parser.m"
                                  *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "parser.m"
                                else
#line 993 "parser.m"
                                  if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 997 "parser.m"
                                    *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 993 "parser.m"
                                  else
#line 993 "parser.m"
                                    if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 999 "parser.m"
                                      *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 993 "parser.m"
                                    else
#line 993 "parser.m"
                                      if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 995 "parser.m"
                                        *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 993 "parser.m"
                                      else
#line 993 "parser.m"
                                        if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1014 "parser.m"
                                          *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "parser.m"
                                        else
#line 993 "parser.m"
                                          if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1012 "parser.m"
                                            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "parser.m"
                                          else
#line 993 "parser.m"
                                            if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1010 "parser.m"
                                              *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
#line 993 "parser.m"
                                            else
#line 998 "parser.m"
                                              *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
#line 993 "parser.m"
  }
#line 991 "parser.m"
}

#line 907 "parser.m"
MR_Word MR_CALL 
mercury__parser__parser_state_get_tokens_left_1_f_0(
#line 907 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_8,
#line 907 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_9,
#line 907 "parser.m"
  MR_Word mercury__parser__ParserState_3)
#line 907 "parser.m"
{
#line 933 "parser.m"
  {
#line 933 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 933 "parser.m"
    MR_Word mercury__parser__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 3)));
#line 933 "parser.m"
    MR_String mercury__parser__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 0)));
#line 933 "parser.m"
    MR_Box mercury__parser__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 1));
#line 933 "parser.m"
    MR_Word mercury__parser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 2)));
#line 933 "parser.m"
    MR_Word mercury__parser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 4)));

#line 933 "parser.m"
    return mercury__parser__HeadVar__2_2;
#line 933 "parser.m"
  }
#line 907 "parser.m"
}

#line 906 "parser.m"
MR_Word MR_CALL 
mercury__parser__parser_state_get_varset_1_f_0(
#line 906 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_Ops_8,
#line 906 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_9,
#line 906 "parser.m"
  MR_Word mercury__parser__ParserState_3)
#line 906 "parser.m"
{
#line 932 "parser.m"
  {
#line 932 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 932 "parser.m"
    MR_Word mercury__parser__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 2)));
#line 932 "parser.m"
    MR_String mercury__parser__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 0)));
#line 932 "parser.m"
    MR_Box mercury__parser__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 1));
#line 932 "parser.m"
    MR_Word mercury__parser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 3)));
#line 932 "parser.m"
    MR_Word mercury__parser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 4)));

#line 932 "parser.m"
    return mercury__parser__HeadVar__2_2;
#line 932 "parser.m"
  }
#line 906 "parser.m"
}

#line 849 "parser.m"
static void MR_CALL 
mercury__parser__parse_args_3_p_0(
#line 849 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_28,
#line 849 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_27,
#line 849 "parser.m"
  MR_Word * mercury__parser__List_4,
#line 849 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_16,
#line 849 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_17)
#line 849 "parser.m"
{
#line 852 "parser.m"
  {
#line 852 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 852 "parser.m"
    MR_Word mercury__parser__Arg0_6;
#line 852 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_18_18;
#line 852 "parser.m"
    MR_Box mercury__parser__OpTable_45 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 1));
#line 852 "parser.m"
    MR_Integer mercury__parser__ArgPriority_46;
#line 852 "parser.m"
    MR_Integer mercury__parser__V_47_47;
#line 931 "parser.m"
    MR_String mercury__parser__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 0)));
#line 931 "parser.m"
    MR_Word mercury__parser__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 2)));
#line 931 "parser.m"
    MR_Word mercury__parser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 3)));
#line 931 "parser.m"
    MR_Word mercury__parser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 4)));
#line 4110 "parser.c"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4112 "parser.c"
    MR_Box mercury__parser__conv1_V_47_47;

#line 4115 "parser.c"
    {
#line 4117 "parser.c"
      mercury__parser__conv1_V_47_47 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_27), mercury__parser__OpTable_45);
    }
#line 4120 "parser.c"
    mercury__parser__V_47_47 = ((MR_Integer) mercury__parser__conv1_V_47_47);
#line 334 "parser.m"
    mercury__parser__ArgPriority_46 = (mercury__parser__V_47_47 + (MR_Integer) 1);
#line 335 "parser.m"
    {
#line 335 "parser.m"
      mercury__parser__parse_term_2_5_p_0(mercury__parser__TypeInfo_for_T_28, mercury__parser__TypeClassInfo_for_op_table_27, mercury__parser__ArgPriority_46, (MR_Integer) 1, &mercury__parser__Arg0_6, mercury__parser__STATE_VARIABLE_PS_0_16, &mercury__parser__STATE_VARIABLE_PS_18_18);
    }
#line 876 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Arg0_6)) == (MR_mktag((MR_Integer) 1))))
#line 877 "parser.m"
      {
#line 879 "parser.m"
        *mercury__parser__List_4 = (MR_Word) mercury__parser__Arg0_6;
#line 877 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_17 = mercury__parser__STATE_VARIABLE_PS_18_18;
#line 877 "parser.m"
      }
#line 876 "parser.m"
    else
#line 855 "parser.m"
      {
#line 855 "parser.m"
        MR_Word mercury__parser__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Arg0_6, (MR_Integer) 0)));
#line 873 "parser.m"
        MR_Word mercury__parser__Token_8;
#line 873 "parser.m"
        MR_Integer mercury__parser__Context_9;
#line 873 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_PS_19_19;
#line 856 "parser.m"
        MR_Word mercury__parser__Tokens0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, (MR_Integer) 3)));
#line 856 "parser.m"
        MR_Word mercury__parser__Tokens_65;
#line 856 "parser.m"
        MR_String mercury__parser__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, (MR_Integer) 0)));
#line 856 "parser.m"
        MR_Box mercury__parser__V_68_68 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, (MR_Integer) 1));
#line 856 "parser.m"
        MR_Word mercury__parser__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, (MR_Integer) 2)));
#line 856 "parser.m"
        MR_Word mercury__parser__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, (MR_Integer) 4)));

#line 1061 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens0_64)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "parser.m"
        if (mercury__parser__succeeded)
#line 1061 "parser.m"
          {
#line 1061 "parser.m"
            mercury__parser__Token_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_64, (MR_Integer) 0)));
#line 1061 "parser.m"
            mercury__parser__Context_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_64, (MR_Integer) 1)));
#line 1061 "parser.m"
            mercury__parser__Tokens_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_64, (MR_Integer) 2)));
#line 938 "parser.m"
            {
#line 938 "parser.m"
              mercury__parser__STATE_VARIABLE_PS_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_19_19, 0) = ((MR_Box) (mercury__parser__V_67_67));
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_19_19, 1) = mercury__parser__V_68_68;
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_19_19, 2) = ((MR_Box) (mercury__parser__V_69_69));
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_19_19, 3) = ((MR_Box) (mercury__parser__Tokens_65));
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_19_19, 4) = ((MR_Box) (mercury__parser__V_70_70));
#line 938 "parser.m"
            }
#line 938 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 1061 "parser.m"
          }
#line 873 "parser.m"
        if (mercury__parser__succeeded)
#line 867 "parser.m"
          {
#line 857 "parser.m"
            mercury__parser__succeeded = (mercury__parser__Token_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 867 "parser.m"
            if (mercury__parser__succeeded)
#line 858 "parser.m"
              {
#line 858 "parser.m"
                MR_Word mercury__parser__Tail0_10;

#line 858 "parser.m"
                {
#line 858 "parser.m"
                  mercury__parser__parse_args_3_p_0(mercury__parser__TypeInfo_for_T_28, mercury__parser__TypeClassInfo_for_op_table_27, &mercury__parser__Tail0_10, mercury__parser__STATE_VARIABLE_PS_19_19, mercury__parser__STATE_VARIABLE_PS_17);
                }
#line 862 "parser.m"
                if (((MR_tag((MR_Word) mercury__parser__Tail0_10)) == (MR_mktag((MR_Integer) 1))))
#line 865 "parser.m"
                  *mercury__parser__List_4 = mercury__parser__Tail0_10;
#line 862 "parser.m"
                else
#line 860 "parser.m"
                  {
#line 860 "parser.m"
                    MR_Word mercury__parser__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_10, (MR_Integer) 0)));
#line 860 "parser.m"
                    MR_Word mercury__parser__V_21_21;

#line 861 "parser.m"
                    {
#line 861 "parser.m"
                      mercury__parser__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_21_21, 0) = ((MR_Box) (mercury__parser__Arg_7));
#line 861 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_21_21, 1) = ((MR_Box) (mercury__parser__Tail_11));
#line 861 "parser.m"
                    }
#line 861 "parser.m"
                    {
#line 861 "parser.m"
                      MR_Word base;
#line 861 "parser.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 861 "parser.m"
                      *mercury__parser__List_4 = base;
#line 861 "parser.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_21_21));
#line 861 "parser.m"
                    }
#line 860 "parser.m"
                  }
#line 858 "parser.m"
              }
#line 867 "parser.m"
            else
#line 869 "parser.m"
              {
#line 867 "parser.m"
                mercury__parser__succeeded = (mercury__parser__Token_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 869 "parser.m"
                if (mercury__parser__succeeded)
#line 868 "parser.m"
                  {
#line 868 "parser.m"
                    MR_Word mercury__parser__V_22_22;
#line 868 "parser.m"
                    MR_Word mercury__parser__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 868 "parser.m"
                    {
#line 868 "parser.m"
                      mercury__parser__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_22_22, 0) = ((MR_Box) (mercury__parser__Arg_7));
#line 868 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_22_22, 1) = ((MR_Box) (mercury__parser__V_23_23));
#line 868 "parser.m"
                    }
#line 868 "parser.m"
                    {
#line 868 "parser.m"
                      MR_Word base;
#line 868 "parser.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 868 "parser.m"
                      *mercury__parser__List_4 = base;
#line 868 "parser.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_22_22));
#line 868 "parser.m"
                    }
#line 868 "parser.m"
                    *mercury__parser__STATE_VARIABLE_PS_17 = mercury__parser__STATE_VARIABLE_PS_19_19;
#line 868 "parser.m"
                  }
#line 869 "parser.m"
                else
#line 870 "parser.m"
                  {
#line 870 "parser.m"
                    MR_Word mercury__parser__conv2_List_4;

#line 870 "parser.m"
                    {
#line 870 "parser.m"
                      mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_p_0(mercury__parser__TypeClassInfo_for_op_table_27, mercury__parser__Token_8, mercury__parser__Context_9, (MR_String) "expected \140,\', \140)\', or operator", &mercury__parser__conv2_List_4, mercury__parser__STATE_VARIABLE_PS_19_19, mercury__parser__STATE_VARIABLE_PS_17);
                    }
#line 870 "parser.m"
                    *mercury__parser__List_4 = (MR_Word) mercury__parser__conv2_List_4;
#line 870 "parser.m"
                  }
#line 869 "parser.m"
              }
#line 867 "parser.m"
          }
#line 873 "parser.m"
        else
#line 874 "parser.m"
          {
#line 874 "parser.m"
            MR_Word mercury__parser__Tokens_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, (MR_Integer) 3)));
#line 933 "parser.m"
            MR_String mercury__parser__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, (MR_Integer) 0)));
#line 933 "parser.m"
            MR_Box mercury__parser__V_83_83 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, (MR_Integer) 1));
#line 933 "parser.m"
            MR_Word mercury__parser__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, (MR_Integer) 2)));
#line 933 "parser.m"
            MR_Word mercury__parser__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, (MR_Integer) 4)));

#line 986 "parser.m"
            {
#line 986 "parser.m"
              MR_Word base;
#line 986 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "parser.m"
              *mercury__parser__List_4 = base;
#line 986 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file in argument list"));
#line 986 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Tokens_80));
#line 986 "parser.m"
            }
#line 874 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_17 = mercury__parser__STATE_VARIABLE_PS_18_18;
#line 874 "parser.m"
          }
#line 855 "parser.m"
      }
#line 852 "parser.m"
  }
#line 849 "parser.m"
}

#line 804 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_2_4_p_0(
#line 804 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_59,
#line 804 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_58,
#line 804 "parser.m"
  MR_Word mercury__parser__Arg_5,
#line 804 "parser.m"
  MR_Word * mercury__parser__List_6,
#line 804 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_17,
#line 804 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_18)
#line 804 "parser.m"
{
#line 844 "parser.m"
  {
#line 844 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 844 "parser.m"
    MR_Word mercury__parser__Token_8;
#line 844 "parser.m"
    MR_Integer mercury__parser__Context_9;
#line 844 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_19_19;
#line 808 "parser.m"
    MR_Word mercury__parser__Tokens0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 3)));
#line 808 "parser.m"
    MR_Word mercury__parser__Tokens_78;
#line 808 "parser.m"
    MR_String mercury__parser__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 0)));
#line 808 "parser.m"
    MR_Box mercury__parser__V_81_81 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 1));
#line 808 "parser.m"
    MR_Word mercury__parser__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 2)));
#line 808 "parser.m"
    MR_Word mercury__parser__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 4)));

#line 1061 "parser.m"
    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens0_77)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "parser.m"
    if (mercury__parser__succeeded)
#line 1061 "parser.m"
      {
#line 1061 "parser.m"
        mercury__parser__Token_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_77, (MR_Integer) 0)));
#line 1061 "parser.m"
        mercury__parser__Context_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_77, (MR_Integer) 1)));
#line 1061 "parser.m"
        mercury__parser__Tokens_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_77, (MR_Integer) 2)));
#line 938 "parser.m"
        {
#line 938 "parser.m"
          mercury__parser__STATE_VARIABLE_PS_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_19_19, 0) = ((MR_Box) (mercury__parser__V_80_80));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_19_19, 1) = mercury__parser__V_81_81;
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_19_19, 2) = ((MR_Box) (mercury__parser__V_82_82));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_19_19, 3) = ((MR_Box) (mercury__parser__Tokens_78));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_19_19, 4) = ((MR_Box) (mercury__parser__V_83_83));
#line 938 "parser.m"
        }
#line 938 "parser.m"
        mercury__parser__succeeded = MR_TRUE;
#line 1061 "parser.m"
      }
#line 844 "parser.m"
    if (mercury__parser__succeeded)
#line 809 "parser.m"
      {
#line 809 "parser.m"
        MR_Word mercury__parser__TermContext_10;

#line 809 "parser.m"
        {
#line 809 "parser.m"
          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_19_19, mercury__parser__Context_9, &mercury__parser__TermContext_10);
        }
#line 810 "parser.m"
        mercury__parser__succeeded = (mercury__parser__Token_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 821 "parser.m"
        if (mercury__parser__succeeded)
#line 811 "parser.m"
          {
#line 811 "parser.m"
            MR_Word mercury__parser__Tail0_11;

#line 811 "parser.m"
            {
#line 811 "parser.m"
              mercury__parser__parse_list_3_p_0(mercury__parser__TypeInfo_for_T_59, mercury__parser__TypeClassInfo_for_op_table_58, &mercury__parser__Tail0_11, mercury__parser__STATE_VARIABLE_PS_19_19, mercury__parser__STATE_VARIABLE_PS_18);
            }
#line 816 "parser.m"
            if (((MR_tag((MR_Word) mercury__parser__Tail0_11)) == (MR_mktag((MR_Integer) 1))))
#line 819 "parser.m"
              *mercury__parser__List_6 = mercury__parser__Tail0_11;
#line 816 "parser.m"
            else
#line 813 "parser.m"
              {
#line 813 "parser.m"
                MR_Word mercury__parser__Tail_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_11, (MR_Integer) 0)));
#line 813 "parser.m"
                MR_Word mercury__parser__V_21_21;
#line 813 "parser.m"
                MR_Word mercury__parser__V_22_22 = (MR_Word) &mercury__parser_scalar_common_5[4];
#line 813 "parser.m"
                MR_Word mercury__parser__V_24_24;
#line 813 "parser.m"
                MR_Word mercury__parser__V_25_25;
#line 813 "parser.m"
                MR_Word mercury__parser__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 814 "parser.m"
                {
#line 814 "parser.m"
                  mercury__parser__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_25_25, 0) = ((MR_Box) (mercury__parser__Tail_12));
#line 814 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_25_25, 1) = ((MR_Box) (mercury__parser__V_26_26));
#line 814 "parser.m"
                }
#line 814 "parser.m"
                {
#line 814 "parser.m"
                  mercury__parser__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_24_24, 0) = ((MR_Box) (mercury__parser__Arg_5));
#line 814 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_24_24, 1) = ((MR_Box) (mercury__parser__V_25_25));
#line 814 "parser.m"
                }
#line 814 "parser.m"
                {
#line 814 "parser.m"
                  mercury__parser__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 814 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_21_21, 0) = ((MR_Box) (mercury__parser__V_22_22));
#line 814 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_21_21, 1) = ((MR_Box) (mercury__parser__V_24_24));
#line 814 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_21_21, 2) = ((MR_Box) (mercury__parser__TermContext_10));
#line 814 "parser.m"
                }
#line 814 "parser.m"
                {
#line 814 "parser.m"
                  MR_Word base;
#line 814 "parser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 814 "parser.m"
                  *mercury__parser__List_6 = base;
#line 814 "parser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_21_21));
#line 814 "parser.m"
                }
#line 813 "parser.m"
              }
#line 811 "parser.m"
          }
#line 821 "parser.m"
        else
#line 836 "parser.m"
          {
#line 821 "parser.m"
            mercury__parser__succeeded = (mercury__parser__Token_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 836 "parser.m"
            if (mercury__parser__succeeded)
#line 822 "parser.m"
              {
#line 822 "parser.m"
                MR_Word mercury__parser__STATE_VARIABLE_PS_27_27;
#line 822 "parser.m"
                MR_Word mercury__parser__Tail0_52;

#line 822 "parser.m"
                {
#line 822 "parser.m"
                  mercury__parser__parse_arg_3_p_0(mercury__parser__TypeInfo_for_T_59, mercury__parser__TypeClassInfo_for_op_table_58, &mercury__parser__Tail0_52, mercury__parser__STATE_VARIABLE_PS_19_19, &mercury__parser__STATE_VARIABLE_PS_27_27);
                }
#line 831 "parser.m"
                if (((MR_tag((MR_Word) mercury__parser__Tail0_52)) == (MR_mktag((MR_Integer) 1))))
#line 832 "parser.m"
                  {
#line 834 "parser.m"
                    *mercury__parser__List_6 = mercury__parser__Tail0_52;
#line 832 "parser.m"
                    *mercury__parser__STATE_VARIABLE_PS_18 = mercury__parser__STATE_VARIABLE_PS_27_27;
#line 832 "parser.m"
                  }
#line 831 "parser.m"
                else
#line 824 "parser.m"
                  {
#line 824 "parser.m"
                    MR_Word mercury__parser__Tail_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_52, (MR_Integer) 0)));
#line 828 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_PS_29_29;
#line 825 "parser.m"
                    MR_Word mercury__parser__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));

#line 825 "parser.m"
                    {
#line 825 "parser.m"
                      mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__V_28_28, mercury__parser__STATE_VARIABLE_PS_27_27, &mercury__parser__STATE_VARIABLE_PS_29_29);
                    }
#line 828 "parser.m"
                    if (mercury__parser__succeeded)
#line 826 "parser.m"
                      {
#line 826 "parser.m"
                        MR_Word mercury__parser__V_30_30;
#line 826 "parser.m"
                        MR_Word mercury__parser__V_31_31;
#line 826 "parser.m"
                        MR_Word mercury__parser__V_33_33;
#line 826 "parser.m"
                        MR_Word mercury__parser__V_34_34;
#line 826 "parser.m"
                        MR_Word mercury__parser__V_35_35;

#line 826 "parser.m"
                        *mercury__parser__STATE_VARIABLE_PS_18 = mercury__parser__STATE_VARIABLE_PS_29_29;
#line 826 "parser.m"
                        mercury__parser__V_31_31 = (MR_Word) &mercury__parser_scalar_common_5[4];
#line 826 "parser.m"
                        mercury__parser__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 826 "parser.m"
                        {
#line 826 "parser.m"
                          mercury__parser__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_34_34, 0) = ((MR_Box) (mercury__parser__Tail_50));
#line 826 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_34_34, 1) = ((MR_Box) (mercury__parser__V_35_35));
#line 826 "parser.m"
                        }
#line 826 "parser.m"
                        {
#line 826 "parser.m"
                          mercury__parser__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_33_33, 0) = ((MR_Box) (mercury__parser__Arg_5));
#line 826 "parser.m"
                          MR_hl_field(MR_mktag(1), mercury__parser__V_33_33, 1) = ((MR_Box) (mercury__parser__V_34_34));
#line 826 "parser.m"
                        }
#line 826 "parser.m"
                        {
#line 826 "parser.m"
                          mercury__parser__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 826 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_30_30, 0) = ((MR_Box) (mercury__parser__V_31_31));
#line 826 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_30_30, 1) = ((MR_Box) (mercury__parser__V_33_33));
#line 826 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_30_30, 2) = ((MR_Box) (mercury__parser__TermContext_10));
#line 826 "parser.m"
                        }
#line 826 "parser.m"
                        {
#line 826 "parser.m"
                          MR_Word base;
#line 826 "parser.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 826 "parser.m"
                          *mercury__parser__List_6 = base;
#line 826 "parser.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_30_30));
#line 826 "parser.m"
                        }
#line 826 "parser.m"
                      }
#line 828 "parser.m"
                    else
#line 829 "parser.m"
                      {
#line 829 "parser.m"
                        MR_Word mercury__parser__conv0_List_6;

#line 829 "parser.m"
                        {
#line 829 "parser.m"
                          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__parser__TypeClassInfo_for_op_table_58, (MR_String) "expecting \']\' or operator", &mercury__parser__conv0_List_6, mercury__parser__STATE_VARIABLE_PS_27_27, mercury__parser__STATE_VARIABLE_PS_18);
                        }
#line 829 "parser.m"
                        *mercury__parser__List_6 = (MR_Word) mercury__parser__conv0_List_6;
#line 829 "parser.m"
                      }
#line 824 "parser.m"
                  }
#line 822 "parser.m"
              }
#line 836 "parser.m"
            else
#line 840 "parser.m"
              {
#line 836 "parser.m"
                mercury__parser__succeeded = (mercury__parser__Token_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 840 "parser.m"
                if (mercury__parser__succeeded)
#line 837 "parser.m"
                  {
#line 837 "parser.m"
                    MR_Word mercury__parser__V_38_38 = (MR_Word) &mercury__parser_scalar_common_5[5];
#line 837 "parser.m"
                    MR_Word mercury__parser__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 837 "parser.m"
                    MR_Word mercury__parser__V_41_41;
#line 837 "parser.m"
                    MR_Word mercury__parser__V_42_42;
#line 837 "parser.m"
                    MR_Word mercury__parser__V_44_44;
#line 837 "parser.m"
                    MR_Word mercury__parser__V_45_45;
#line 837 "parser.m"
                    MR_Word mercury__parser__V_46_46;
#line 837 "parser.m"
                    MR_Word mercury__parser__Tail_54;

#line 837 "parser.m"
                    {
#line 837 "parser.m"
                      mercury__parser__Tail_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 837 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_54, 0) = ((MR_Box) (mercury__parser__V_38_38));
#line 837 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_54, 1) = ((MR_Box) (mercury__parser__V_40_40));
#line 837 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_54, 2) = ((MR_Box) (mercury__parser__TermContext_10));
#line 837 "parser.m"
                    }
#line 838 "parser.m"
                    mercury__parser__V_42_42 = (MR_Word) &mercury__parser_scalar_common_5[4];
#line 838 "parser.m"
                    mercury__parser__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 838 "parser.m"
                    {
#line 838 "parser.m"
                      mercury__parser__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_45_45, 0) = ((MR_Box) (mercury__parser__Tail_54));
#line 838 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_45_45, 1) = ((MR_Box) (mercury__parser__V_46_46));
#line 838 "parser.m"
                    }
#line 838 "parser.m"
                    {
#line 838 "parser.m"
                      mercury__parser__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_44_44, 0) = ((MR_Box) (mercury__parser__Arg_5));
#line 838 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_44_44, 1) = ((MR_Box) (mercury__parser__V_45_45));
#line 838 "parser.m"
                    }
#line 838 "parser.m"
                    {
#line 838 "parser.m"
                      mercury__parser__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 838 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__V_41_41, 0) = ((MR_Box) (mercury__parser__V_42_42));
#line 838 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__V_41_41, 1) = ((MR_Box) (mercury__parser__V_44_44));
#line 838 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__V_41_41, 2) = ((MR_Box) (mercury__parser__TermContext_10));
#line 838 "parser.m"
                    }
#line 838 "parser.m"
                    {
#line 838 "parser.m"
                      MR_Word base;
#line 838 "parser.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 838 "parser.m"
                      *mercury__parser__List_6 = base;
#line 838 "parser.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_41_41));
#line 838 "parser.m"
                    }
#line 837 "parser.m"
                    *mercury__parser__STATE_VARIABLE_PS_18 = mercury__parser__STATE_VARIABLE_PS_19_19;
#line 837 "parser.m"
                  }
#line 840 "parser.m"
                else
#line 841 "parser.m"
                  {
#line 841 "parser.m"
                    MR_Word mercury__parser__conv1_List_6;

#line 841 "parser.m"
                    {
#line 841 "parser.m"
                      mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_6_p_0(mercury__parser__TypeClassInfo_for_op_table_58, mercury__parser__Token_8, mercury__parser__Context_9, (MR_String) "expected comma, \140|\', \140]\', or operator", &mercury__parser__conv1_List_6, mercury__parser__STATE_VARIABLE_PS_19_19, mercury__parser__STATE_VARIABLE_PS_18);
                    }
#line 841 "parser.m"
                    *mercury__parser__List_6 = (MR_Word) mercury__parser__conv1_List_6;
#line 841 "parser.m"
                  }
#line 840 "parser.m"
              }
#line 836 "parser.m"
          }
#line 809 "parser.m"
      }
#line 844 "parser.m"
    else
#line 846 "parser.m"
      {
#line 846 "parser.m"
        {
#line 846 "parser.m"
          *mercury__parser__List_6 = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_101_114_114_111_114_95_95_91_49_44_32_50_44_32_51_93_95_48_2_f_0(mercury__parser__STATE_VARIABLE_PS_0_17, (MR_String) "unexpected end-of-file in list");
        }
#line 846 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_18 = mercury__parser__STATE_VARIABLE_PS_0_17;
#line 846 "parser.m"
      }
#line 844 "parser.m"
  }
#line 804 "parser.m"
}

#line 790 "parser.m"
static void MR_CALL 
mercury__parser__parse_list_3_p_0(
#line 790 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_15,
#line 790 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_14,
#line 790 "parser.m"
  MR_Word * mercury__parser__List_4,
#line 790 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_10,
#line 790 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_11)
#line 790 "parser.m"
{
#line 793 "parser.m"
  {
#line 793 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 793 "parser.m"
    MR_Word mercury__parser__Arg0_6;
#line 793 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_12_12;
#line 793 "parser.m"
    MR_Box mercury__parser__OpTable_20;
#line 793 "parser.m"
    MR_Integer mercury__parser__ArgPriority_21;
#line 793 "parser.m"
    MR_Integer mercury__parser__V_22_22;
#line 133 "private_builtin.opt"
    MR_Word mercury__parser__TypeInfo_8_29;
#line 931 "parser.m"
    MR_String mercury__parser__V_31_31;
#line 931 "parser.m"
    MR_Word mercury__parser__V_32_32;
#line 931 "parser.m"
    MR_Word mercury__parser__V_33_33;
#line 931 "parser.m"
    MR_Word mercury__parser__V_34_34;
#line 4824 "parser.c"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
#line 4826 "parser.c"
    MR_Box mercury__parser__conv1_V_22_22;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__parse_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_14 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4844 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_8_29  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 931 "parser.m"
    mercury__parser__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 0)));
#line 931 "parser.m"
    mercury__parser__OpTable_20 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 1));
#line 931 "parser.m"
    mercury__parser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 2)));
#line 931 "parser.m"
    mercury__parser__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 3)));
#line 931 "parser.m"
    mercury__parser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 4)));
#line 4861 "parser.c"
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 4863 "parser.c"
    {
#line 4865 "parser.c"
      mercury__parser__conv1_V_22_22 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_14), mercury__parser__OpTable_20);
    }
#line 4868 "parser.c"
    mercury__parser__V_22_22 = ((MR_Integer) mercury__parser__conv1_V_22_22);
#line 346 "parser.m"
    mercury__parser__ArgPriority_21 = (mercury__parser__V_22_22 + (MR_Integer) 1);
#line 347 "parser.m"
    {
#line 347 "parser.m"
      mercury__parser__parse_term_2_5_p_0(mercury__parser__TypeInfo_for_T_15, mercury__parser__TypeClassInfo_for_op_table_14, mercury__parser__ArgPriority_21, (MR_Integer) 2, &mercury__parser__Arg0_6, mercury__parser__STATE_VARIABLE_PS_0_10, &mercury__parser__STATE_VARIABLE_PS_12_12);
    }
#line 798 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Arg0_6)) == (MR_mktag((MR_Integer) 1))))
#line 799 "parser.m"
      {
#line 801 "parser.m"
        *mercury__parser__List_4 = mercury__parser__Arg0_6;
#line 799 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_11 = mercury__parser__STATE_VARIABLE_PS_12_12;
#line 799 "parser.m"
      }
#line 798 "parser.m"
    else
#line 796 "parser.m"
      {
#line 796 "parser.m"
        MR_Word mercury__parser__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Arg0_6, (MR_Integer) 0)));

#line 797 "parser.m"
        {
#line 797 "parser.m"
          mercury__parser__parse_list_2_4_p_0(mercury__parser__TypeInfo_for_T_15, mercury__parser__TypeClassInfo_for_op_table_14, mercury__parser__Arg_7, mercury__parser__List_4, mercury__parser__STATE_VARIABLE_PS_12_12, mercury__parser__STATE_VARIABLE_PS_11);
#line 797 "parser.m"
          return;
        }
#line 796 "parser.m"
      }
#line 793 "parser.m"
  }
#line 790 "parser.m"
}

#line 771 "parser.m"
static void MR_CALL 
mercury__parser__parse_special_atom_5_p_0(
#line 771 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_25,
#line 771 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_24,
#line 771 "parser.m"
  MR_String mercury__parser__Atom_6,
#line 771 "parser.m"
  MR_Word mercury__parser__TermContext_7,
#line 771 "parser.m"
  MR_Word * mercury__parser__Term_8,
#line 771 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_14,
#line 771 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_15)
#line 771 "parser.m"
{
#line 786 "parser.m"
  {
#line 786 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 786 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_17_17;
#line 776 "parser.m"
    MR_Word mercury__parser__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 776 "parser.m"
    MR_Word mercury__parser__Tokens0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_14, (MR_Integer) 3)));
#line 776 "parser.m"
    MR_Word mercury__parser__Tokens_39;
#line 776 "parser.m"
    MR_Word mercury__parser__V_40_40;
#line 933 "parser.m"
    MR_String mercury__parser__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_14, (MR_Integer) 0)));
#line 933 "parser.m"
    MR_Box mercury__parser__V_44_44 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_14, (MR_Integer) 1));
#line 933 "parser.m"
    MR_Word mercury__parser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_14, (MR_Integer) 2)));
#line 933 "parser.m"
    MR_Word mercury__parser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_14, (MR_Integer) 4)));
#line 1061 "parser.m"
    MR_Integer mercury__parser___Context_32;
#line 938 "parser.m"
    MR_String mercury__parser__V_49_49;
#line 938 "parser.m"
    MR_Box mercury__parser__V_50_50;
#line 938 "parser.m"
    MR_Word mercury__parser__V_51_51;
#line 938 "parser.m"
    MR_Word mercury__parser__V_53_53;
#line 938 "parser.m"
    MR_Word mercury__parser__V_52_52;

#line 1061 "parser.m"
    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens0_38)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "parser.m"
    if (mercury__parser__succeeded)
#line 1061 "parser.m"
      {
#line 1061 "parser.m"
        mercury__parser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_38, (MR_Integer) 0)));
#line 1061 "parser.m"
        mercury__parser___Context_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_38, (MR_Integer) 1)));
#line 1061 "parser.m"
        mercury__parser__Tokens_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_38, (MR_Integer) 2)));
#line 1061 "parser.m"
        {
#line 1061 "parser.m"
          mercury__parser__succeeded = mercury__lexer____Unify____token_0_0(mercury__parser__V_16_16, mercury__parser__V_40_40);
        }
#line 776 "parser.m"
        if (mercury__parser__succeeded)
#line 776 "parser.m"
          {
#line 938 "parser.m"
            mercury__parser__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_14, (MR_Integer) 0)));
#line 938 "parser.m"
            mercury__parser__V_50_50 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_14, (MR_Integer) 1));
#line 938 "parser.m"
            mercury__parser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_14, (MR_Integer) 2)));
#line 938 "parser.m"
            mercury__parser__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_14, (MR_Integer) 3)));
#line 938 "parser.m"
            mercury__parser__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_14, (MR_Integer) 4)));
#line 938 "parser.m"
            {
#line 938 "parser.m"
              mercury__parser__STATE_VARIABLE_PS_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_17_17, 0) = ((MR_Box) (mercury__parser__V_49_49));
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_17_17, 1) = mercury__parser__V_50_50;
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_17_17, 2) = ((MR_Box) (mercury__parser__V_51_51));
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_17_17, 3) = ((MR_Box) (mercury__parser__Tokens_39));
#line 938 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_17_17, 4) = ((MR_Box) (mercury__parser__V_53_53));
#line 938 "parser.m"
            }
#line 938 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 776 "parser.m"
          }
#line 1061 "parser.m"
      }
#line 786 "parser.m"
    if (mercury__parser__succeeded)
#line 777 "parser.m"
      {
#line 777 "parser.m"
        MR_Word mercury__parser__Args0_10;

#line 777 "parser.m"
        {
#line 777 "parser.m"
          mercury__parser__parse_args_3_p_0(mercury__parser__TypeInfo_for_T_25, mercury__parser__TypeClassInfo_for_op_table_24, &mercury__parser__Args0_10, mercury__parser__STATE_VARIABLE_PS_17_17, mercury__parser__STATE_VARIABLE_PS_15);
        }
#line 781 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__Args0_10)) == (MR_mktag((MR_Integer) 1))))
#line 784 "parser.m"
          *mercury__parser__Term_8 = (MR_Word) mercury__parser__Args0_10;
#line 781 "parser.m"
        else
#line 779 "parser.m"
          {
#line 779 "parser.m"
            MR_Word mercury__parser__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Args0_10, (MR_Integer) 0)));
#line 779 "parser.m"
            MR_Word mercury__parser__V_19_19;
#line 779 "parser.m"
            MR_Word mercury__parser__V_20_20;

#line 780 "parser.m"
            {
#line 780 "parser.m"
              mercury__parser__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 780 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_20_20, 0) = ((MR_Box) (mercury__parser__Atom_6));
#line 780 "parser.m"
            }
#line 780 "parser.m"
            {
#line 780 "parser.m"
              mercury__parser__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 780 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_19_19, 0) = ((MR_Box) (mercury__parser__V_20_20));
#line 780 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_19_19, 1) = ((MR_Box) (mercury__parser__Args_11));
#line 780 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_19_19, 2) = ((MR_Box) (mercury__parser__TermContext_7));
#line 780 "parser.m"
            }
#line 780 "parser.m"
            {
#line 780 "parser.m"
              MR_Word base;
#line 780 "parser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 780 "parser.m"
              *mercury__parser__Term_8 = base;
#line 780 "parser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_19_19));
#line 780 "parser.m"
            }
#line 779 "parser.m"
          }
#line 777 "parser.m"
      }
#line 786 "parser.m"
    else
#line 787 "parser.m"
      {
#line 787 "parser.m"
        MR_Word mercury__parser__V_21_21;
#line 787 "parser.m"
        MR_Word mercury__parser__V_22_22;
#line 787 "parser.m"
        MR_Word mercury__parser__V_23_23;

#line 787 "parser.m"
        {
#line 787 "parser.m"
          mercury__parser__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 787 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_22_22, 0) = ((MR_Box) (mercury__parser__Atom_6));
#line 787 "parser.m"
        }
#line 787 "parser.m"
        mercury__parser__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 787 "parser.m"
        {
#line 787 "parser.m"
          mercury__parser__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 787 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_21_21, 0) = ((MR_Box) (mercury__parser__V_22_22));
#line 787 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_21_21, 1) = ((MR_Box) (mercury__parser__V_23_23));
#line 787 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__V_21_21, 2) = ((MR_Box) (mercury__parser__TermContext_7));
#line 787 "parser.m"
        }
#line 787 "parser.m"
        {
#line 787 "parser.m"
          MR_Word base;
#line 787 "parser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 787 "parser.m"
          *mercury__parser__Term_8 = base;
#line 787 "parser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_21_21));
#line 787 "parser.m"
        }
#line 787 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_15 = mercury__parser__STATE_VARIABLE_PS_0_14;
#line 787 "parser.m"
      }
#line 786 "parser.m"
  }
#line 771 "parser.m"
}

#line 743 "parser.m"
static void MR_CALL 
mercury__parser__check_for_higher_order_term_5_p_0(
#line 743 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_28,
#line 743 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_27,
#line 743 "parser.m"
  MR_Word mercury__parser__Term0_6,
#line 743 "parser.m"
  MR_Integer mercury__parser__Context_7,
#line 743 "parser.m"
  MR_Word * mercury__parser__Term_8,
#line 743 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_17,
#line 743 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_18)
#line 743 "parser.m"
{
#line 767 "parser.m"
  while (MR_TRUE)
#line 767 "parser.m"
    {
#line 767 "parser.m"
      /* tailcall optimized into a loop */
#line 767 "parser.m"
      {
#line 767 "parser.m"
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Term0_6)) == (MR_mktag((MR_Integer) 0)));
#line 767 "parser.m"
        MR_Word mercury__parser__Term1_10;
#line 767 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_PS_20_20;
#line 767 "parser.m"
        MR_String mercury__parser__V_54_54;
#line 752 "parser.m"
        MR_Word mercury__parser__V_19_19;
#line 752 "parser.m"
        MR_Word mercury__parser__Tokens0_43;
#line 752 "parser.m"
        MR_Word mercury__parser__Tokens_44;
#line 752 "parser.m"
        MR_Word mercury__parser__V_45_45;
#line 933 "parser.m"
        MR_String mercury__parser__V_48_48;
#line 933 "parser.m"
        MR_Box mercury__parser__V_49_49;
#line 933 "parser.m"
        MR_Word mercury__parser__V_50_50;
#line 933 "parser.m"
        MR_Word mercury__parser__V_51_51;
#line 1061 "parser.m"
        MR_Integer mercury__parser___Context_37;
#line 938 "parser.m"
        MR_Box mercury__parser__V_55_55;
#line 938 "parser.m"
        MR_Word mercury__parser__V_56_56;
#line 938 "parser.m"
        MR_Word mercury__parser__V_58_58;
#line 938 "parser.m"
        MR_Word mercury__parser__V_57_57;

#line 752 "parser.m"
        if (mercury__parser__succeeded)
#line 752 "parser.m"
          {
#line 752 "parser.m"
            mercury__parser__Term1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term0_6, (MR_Integer) 0)));
#line 753 "parser.m"
            mercury__parser__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 933 "parser.m"
            mercury__parser__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 0)));
#line 933 "parser.m"
            mercury__parser__V_49_49 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 1));
#line 933 "parser.m"
            mercury__parser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 2)));
#line 933 "parser.m"
            mercury__parser__Tokens0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 3)));
#line 933 "parser.m"
            mercury__parser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 4)));
#line 1061 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens0_43)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "parser.m"
            if (mercury__parser__succeeded)
#line 1061 "parser.m"
              {
#line 1061 "parser.m"
                mercury__parser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_43, (MR_Integer) 0)));
#line 1061 "parser.m"
                mercury__parser___Context_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_43, (MR_Integer) 1)));
#line 1061 "parser.m"
                mercury__parser__Tokens_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_43, (MR_Integer) 2)));
#line 1061 "parser.m"
                {
#line 1061 "parser.m"
                  mercury__parser__succeeded = mercury__lexer____Unify____token_0_0(mercury__parser__V_19_19, mercury__parser__V_45_45);
                }
#line 752 "parser.m"
                if (mercury__parser__succeeded)
#line 752 "parser.m"
                  {
#line 938 "parser.m"
                    mercury__parser__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 0)));
#line 938 "parser.m"
                    mercury__parser__V_55_55 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 1));
#line 938 "parser.m"
                    mercury__parser__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 2)));
#line 938 "parser.m"
                    mercury__parser__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 3)));
#line 938 "parser.m"
                    mercury__parser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_17, (MR_Integer) 4)));
#line 938 "parser.m"
                    {
#line 938 "parser.m"
                      mercury__parser__STATE_VARIABLE_PS_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_20_20, 0) = ((MR_Box) (mercury__parser__V_54_54));
#line 938 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_20_20, 1) = mercury__parser__V_55_55;
#line 938 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_20_20, 2) = ((MR_Box) (mercury__parser__V_56_56));
#line 938 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_20_20, 3) = ((MR_Box) (mercury__parser__Tokens_44));
#line 938 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_20_20, 4) = ((MR_Box) (mercury__parser__V_58_58));
#line 938 "parser.m"
                    }
#line 938 "parser.m"
                    mercury__parser__succeeded = MR_TRUE;
#line 752 "parser.m"
                  }
#line 1061 "parser.m"
              }
#line 752 "parser.m"
          }
#line 767 "parser.m"
        if (mercury__parser__succeeded)
#line 755 "parser.m"
          {
#line 755 "parser.m"
            MR_Word mercury__parser__TermContext_11;
#line 755 "parser.m"
            MR_Word mercury__parser__Args0_12;
#line 755 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_PS_21_21;

#line 165 "term.opt"
            {
#line 165 "term.opt"
              mercury__parser__TermContext_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 165 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__TermContext_11, 0) = ((MR_Box) (mercury__parser__V_54_54));
#line 165 "term.opt"
              MR_hl_field(MR_mktag(0), mercury__parser__TermContext_11, 1) = ((MR_Box) (mercury__parser__Context_7));
#line 165 "term.opt"
            }
#line 756 "parser.m"
            {
#line 756 "parser.m"
              mercury__parser__parse_args_3_p_0(mercury__parser__TypeInfo_for_T_28, mercury__parser__TypeClassInfo_for_op_table_27, &mercury__parser__Args0_12, mercury__parser__STATE_VARIABLE_PS_20_20, &mercury__parser__STATE_VARIABLE_PS_21_21);
            }
#line 762 "parser.m"
            if (((MR_tag((MR_Word) mercury__parser__Args0_12)) == (MR_mktag((MR_Integer) 1))))
#line 764 "parser.m"
              {
#line 765 "parser.m"
                *mercury__parser__Term_8 = (MR_Word) mercury__parser__Args0_12;
#line 764 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_18 = mercury__parser__STATE_VARIABLE_PS_21_21;
#line 764 "parser.m"
              }
#line 762 "parser.m"
            else
#line 758 "parser.m"
              {
#line 758 "parser.m"
                MR_Word mercury__parser__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Args0_12, (MR_Integer) 0)));
#line 758 "parser.m"
                MR_Word mercury__parser__Term2_14;
#line 758 "parser.m"
                MR_Word mercury__parser__V_22_22;
#line 758 "parser.m"
                MR_Word mercury__parser__V_23_23 = (MR_Word) &mercury__parser_scalar_common_5[3];
#line 758 "parser.m"
                MR_Word mercury__parser__V_25_25;

#line 759 "parser.m"
                {
#line 759 "parser.m"
                  mercury__parser__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_25_25, 0) = ((MR_Box) (mercury__parser__Term1_10));
#line 759 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_25_25, 1) = ((MR_Box) (mercury__parser__Args_13));
#line 759 "parser.m"
                }
#line 759 "parser.m"
                {
#line 759 "parser.m"
                  mercury__parser__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 759 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_22_22, 0) = ((MR_Box) (mercury__parser__V_23_23));
#line 759 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_22_22, 1) = ((MR_Box) (mercury__parser__V_25_25));
#line 759 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_22_22, 2) = ((MR_Box) (mercury__parser__TermContext_11));
#line 759 "parser.m"
                }
#line 759 "parser.m"
                {
#line 759 "parser.m"
                  mercury__parser__Term2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 759 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__Term2_14, 0) = ((MR_Box) (mercury__parser__V_22_22));
#line 759 "parser.m"
                }
#line 761 "parser.m"
                /* direct tailcall eliminated */
#line 761 "parser.m"
                {
#line 761 "parser.m"
                  MR_Word mercury__parser__Term0__tmp_copy_6 = mercury__parser__Term2_14;
#line 761 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_17 = mercury__parser__STATE_VARIABLE_PS_21_21;

#line 761 "parser.m"
                  mercury__parser__STATE_VARIABLE_PS_0_17 = mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_17;
#line 761 "parser.m"
                  mercury__parser__Term0_6 = mercury__parser__Term0__tmp_copy_6;
#line 761 "parser.m"
                }
#line 761 "parser.m"
                continue;
#line 758 "parser.m"
              }
#line 755 "parser.m"
          }
#line 767 "parser.m"
        else
#line 768 "parser.m"
          {
#line 768 "parser.m"
            *mercury__parser__Term_8 = mercury__parser__Term0_6;
#line 768 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_18 = mercury__parser__STATE_VARIABLE_PS_0_17;
#line 768 "parser.m"
          }
#line 767 "parser.m"
      }
#line 767 "parser.m"
      break;
#line 767 "parser.m"
    }
#line 743 "parser.m"
}

#line 629 "parser.m"
static MR_bool MR_CALL 
mercury__parser__parse_simple_term_2_6_p_0(
#line 629 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_151,
#line 629 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_150,
#line 629 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 629 "parser.m"
  MR_Integer mercury__parser__HeadVar__2_2,
#line 629 "parser.m"
  MR_Integer mercury__parser__Prec_3,
#line 629 "parser.m"
  MR_Word * mercury__parser__HeadVar__4_4,
#line 629 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_5,
#line 629 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_6)
#line 629 "parser.m"
{
#line 633 "parser.m"
  while (MR_TRUE)
#line 633 "parser.m"
    {
#line 633 "parser.m"
      /* tailcall optimized into a loop */
#line 633 "parser.m"
      {
#line 633 "parser.m"
        MR_bool mercury__parser__succeeded;

#line 633 "parser.m"
        if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 681 "parser.m"
          {
#line 681 "parser.m"
            MR_Word mercury__parser__Term0_95;
#line 681 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_PS_101_101;

#line 682 "parser.m"
            {
#line 682 "parser.m"
              mercury__parser__parse_term_3_p_0(mercury__parser__TypeInfo_for_T_151, mercury__parser__TypeClassInfo_for_op_table_150, &mercury__parser__Term0_95, mercury__parser__STATE_VARIABLE_PS_0_5, &mercury__parser__STATE_VARIABLE_PS_101_101);
            }
#line 690 "parser.m"
            if (((MR_tag((MR_Word) mercury__parser__Term0_95)) == (MR_mktag((MR_Integer) 1))))
#line 692 "parser.m"
              {
#line 693 "parser.m"
                *mercury__parser__HeadVar__4_4 = mercury__parser__Term0_95;
#line 692 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_6 = mercury__parser__STATE_VARIABLE_PS_101_101;
#line 692 "parser.m"
              }
#line 690 "parser.m"
            else
#line 687 "parser.m"
              {
#line 687 "parser.m"
                MR_Word mercury__parser__STATE_VARIABLE_PS_103_103;
#line 685 "parser.m"
                MR_Word mercury__parser__V_102_102 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

#line 685 "parser.m"
                {
#line 685 "parser.m"
                  mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__V_102_102, mercury__parser__STATE_VARIABLE_PS_101_101, &mercury__parser__STATE_VARIABLE_PS_103_103);
                }
#line 687 "parser.m"
                if (mercury__parser__succeeded)
#line 686 "parser.m"
                  {
#line 686 "parser.m"
                    *mercury__parser__STATE_VARIABLE_PS_6 = mercury__parser__STATE_VARIABLE_PS_103_103;
#line 686 "parser.m"
                    *mercury__parser__HeadVar__4_4 = mercury__parser__Term0_95;
#line 686 "parser.m"
                  }
#line 687 "parser.m"
                else
#line 688 "parser.m"
                  {
#line 688 "parser.m"
                    MR_Word mercury__parser__conv0_HeadVar__4_4;

#line 688 "parser.m"
                    {
#line 688 "parser.m"
                      mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__parser__TypeClassInfo_for_op_table_150, (MR_String) "expecting \140)\' or operator", &mercury__parser__conv0_HeadVar__4_4, mercury__parser__STATE_VARIABLE_PS_101_101, mercury__parser__STATE_VARIABLE_PS_6);
                    }
#line 688 "parser.m"
                    *mercury__parser__HeadVar__4_4 = (MR_Word) mercury__parser__conv0_HeadVar__4_4;
#line 688 "parser.m"
                  }
#line 687 "parser.m"
              }
#line 681 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 681 "parser.m"
          }
#line 633 "parser.m"
        else
#line 633 "parser.m"
          if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 696 "parser.m"
            {
#line 696 "parser.m"
              MR_Word mercury__parser__V_112_112 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 697 "parser.m"
              /* direct tailcall eliminated */
#line 697 "parser.m"
              {
#line 697 "parser.m"
                MR_Word mercury__parser__HeadVar__1__tmp_copy_1 = mercury__parser__V_112_112;

#line 697 "parser.m"
                mercury__parser__HeadVar__1_1 = mercury__parser__HeadVar__1__tmp_copy_1;
#line 697 "parser.m"
              }
#line 697 "parser.m"
              continue;
#line 696 "parser.m"
            }
#line 633 "parser.m"
          else
#line 633 "parser.m"
            if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 707 "parser.m"
              {
#line 707 "parser.m"
                MR_Word mercury__parser__TermContext_130;
#line 711 "parser.m"
                MR_Word mercury__parser__STATE_VARIABLE_PS_139_139;
#line 709 "parser.m"
                MR_Word mercury__parser__V_138_138;

#line 708 "parser.m"
                {
#line 708 "parser.m"
                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_5, mercury__parser__HeadVar__2_2, &mercury__parser__TermContext_130);
                }
#line 709 "parser.m"
                mercury__parser__V_138_138 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 709 "parser.m"
                {
#line 709 "parser.m"
                  mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__V_138_138, mercury__parser__STATE_VARIABLE_PS_0_5, &mercury__parser__STATE_VARIABLE_PS_139_139);
                }
#line 711 "parser.m"
                if (mercury__parser__succeeded)
#line 710 "parser.m"
                  {
#line 710 "parser.m"
                    {
#line 710 "parser.m"
                      mercury__parser__parse_special_atom_5_p_0(mercury__parser__TypeInfo_for_T_151, mercury__parser__TypeClassInfo_for_op_table_150, (MR_String) "{}", mercury__parser__TermContext_130, mercury__parser__HeadVar__4_4, mercury__parser__STATE_VARIABLE_PS_139_139, mercury__parser__STATE_VARIABLE_PS_6);
                    }
#line 710 "parser.m"
                  }
#line 711 "parser.m"
                else
#line 716 "parser.m"
                  {
#line 716 "parser.m"
                    MR_Word mercury__parser__SubTerm0_131;
#line 716 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_PS_142_142;

#line 716 "parser.m"
                    {
#line 716 "parser.m"
                      mercury__parser__parse_term_3_p_0(mercury__parser__TypeInfo_for_T_151, mercury__parser__TypeClassInfo_for_op_table_150, &mercury__parser__SubTerm0_131, mercury__parser__STATE_VARIABLE_PS_0_5, &mercury__parser__STATE_VARIABLE_PS_142_142);
                    }
#line 726 "parser.m"
                    if (((MR_tag((MR_Word) mercury__parser__SubTerm0_131)) == (MR_mktag((MR_Integer) 1))))
#line 727 "parser.m"
                      {
#line 729 "parser.m"
                        *mercury__parser__HeadVar__4_4 = mercury__parser__SubTerm0_131;
#line 727 "parser.m"
                        *mercury__parser__STATE_VARIABLE_PS_6 = mercury__parser__STATE_VARIABLE_PS_142_142;
#line 727 "parser.m"
                      }
#line 726 "parser.m"
                    else
#line 718 "parser.m"
                      {
#line 718 "parser.m"
                        MR_Word mercury__parser__SubTerm_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__SubTerm0_131, (MR_Integer) 0)));
#line 718 "parser.m"
                        MR_Word mercury__parser__ArgTerms_133;
#line 723 "parser.m"
                        MR_Word mercury__parser__STATE_VARIABLE_PS_144_144;
#line 720 "parser.m"
                        MR_Word mercury__parser__V_143_143;

#line 719 "parser.m"
                        {
#line 719 "parser.m"
                          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(mercury__parser__SubTerm_132, &mercury__parser__ArgTerms_133);
                        }
#line 720 "parser.m"
                        mercury__parser__V_143_143 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 720 "parser.m"
                        {
#line 720 "parser.m"
                          mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__V_143_143, mercury__parser__STATE_VARIABLE_PS_142_142, &mercury__parser__STATE_VARIABLE_PS_144_144);
                        }
#line 723 "parser.m"
                        if (mercury__parser__succeeded)
#line 721 "parser.m"
                          {
#line 721 "parser.m"
                            MR_Word mercury__parser__V_145_145;
#line 721 "parser.m"
                            MR_Word mercury__parser__V_146_146;

#line 721 "parser.m"
                            *mercury__parser__STATE_VARIABLE_PS_6 = mercury__parser__STATE_VARIABLE_PS_144_144;
#line 721 "parser.m"
                            mercury__parser__V_146_146 = (MR_Word) &mercury__parser_scalar_common_5[2];
#line 721 "parser.m"
                            {
#line 721 "parser.m"
                              mercury__parser__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 721 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_145_145, 0) = ((MR_Box) (mercury__parser__V_146_146));
#line 721 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_145_145, 1) = ((MR_Box) (mercury__parser__ArgTerms_133));
#line 721 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_145_145, 2) = ((MR_Box) (mercury__parser__TermContext_130));
#line 721 "parser.m"
                            }
#line 721 "parser.m"
                            {
#line 721 "parser.m"
                              MR_Word base;
#line 721 "parser.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 721 "parser.m"
                              *mercury__parser__HeadVar__4_4 = base;
#line 721 "parser.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_145_145));
#line 721 "parser.m"
                            }
#line 721 "parser.m"
                          }
#line 723 "parser.m"
                        else
#line 724 "parser.m"
                          {
#line 724 "parser.m"
                            MR_Word mercury__parser__conv1_HeadVar__4_4;

#line 724 "parser.m"
                            {
#line 724 "parser.m"
                              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__parser__TypeClassInfo_for_op_table_150, (MR_String) "expecting \140}\' or operator", &mercury__parser__conv1_HeadVar__4_4, mercury__parser__STATE_VARIABLE_PS_142_142, mercury__parser__STATE_VARIABLE_PS_6);
                            }
#line 724 "parser.m"
                            *mercury__parser__HeadVar__4_4 = (MR_Word) mercury__parser__conv1_HeadVar__4_4;
#line 724 "parser.m"
                          }
#line 718 "parser.m"
                      }
#line 716 "parser.m"
                  }
#line 707 "parser.m"
                mercury__parser__succeeded = MR_TRUE;
#line 707 "parser.m"
              }
#line 633 "parser.m"
            else
#line 633 "parser.m"
              if ((mercury__parser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 699 "parser.m"
                {
#line 699 "parser.m"
                  MR_Word mercury__parser__TermContext_118;
#line 703 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_PS_122_122;
#line 701 "parser.m"
                  MR_Word mercury__parser__V_121_121;

#line 700 "parser.m"
                  {
#line 700 "parser.m"
                    mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_5, mercury__parser__HeadVar__2_2, &mercury__parser__TermContext_118);
                  }
#line 701 "parser.m"
                  mercury__parser__V_121_121 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 701 "parser.m"
                  {
#line 701 "parser.m"
                    mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__V_121_121, mercury__parser__STATE_VARIABLE_PS_0_5, &mercury__parser__STATE_VARIABLE_PS_122_122);
                  }
#line 703 "parser.m"
                  if (mercury__parser__succeeded)
#line 702 "parser.m"
                    {
#line 702 "parser.m"
                      {
#line 702 "parser.m"
                        mercury__parser__parse_special_atom_5_p_0(mercury__parser__TypeInfo_for_T_151, mercury__parser__TypeClassInfo_for_op_table_150, (MR_String) "[]", mercury__parser__TermContext_118, mercury__parser__HeadVar__4_4, mercury__parser__STATE_VARIABLE_PS_122_122, mercury__parser__STATE_VARIABLE_PS_6);
                      }
#line 702 "parser.m"
                    }
#line 703 "parser.m"
                  else
#line 704 "parser.m"
                    {
#line 704 "parser.m"
                      mercury__parser__parse_list_3_p_0(mercury__parser__TypeInfo_for_T_151, mercury__parser__TypeClassInfo_for_op_table_150, mercury__parser__HeadVar__4_4, mercury__parser__STATE_VARIABLE_PS_0_5, mercury__parser__STATE_VARIABLE_PS_6);
                    }
#line 699 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 699 "parser.m"
                }
#line 633 "parser.m"
              else
#line 633 "parser.m"
                if (((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 633 "parser.m"
                  {
#line 633 "parser.m"
                    MR_String mercury__parser__Atom_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 633 "parser.m"
                    MR_Word mercury__parser__TermContext_12;
#line 645 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_PS_21_21;
#line 635 "parser.m"
                    MR_Word mercury__parser__V_20_20;

#line 634 "parser.m"
                    {
#line 634 "parser.m"
                      mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_5, mercury__parser__HeadVar__2_2, &mercury__parser__TermContext_12);
                    }
#line 635 "parser.m"
                    mercury__parser__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 635 "parser.m"
                    {
#line 635 "parser.m"
                      mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__V_20_20, mercury__parser__STATE_VARIABLE_PS_0_5, &mercury__parser__STATE_VARIABLE_PS_21_21);
                    }
#line 645 "parser.m"
                    if (mercury__parser__succeeded)
#line 636 "parser.m"
                      {
#line 636 "parser.m"
                        MR_Word mercury__parser__Args0_13;

#line 636 "parser.m"
                        {
#line 636 "parser.m"
                          mercury__parser__parse_args_3_p_0(mercury__parser__TypeInfo_for_T_151, mercury__parser__TypeClassInfo_for_op_table_150, &mercury__parser__Args0_13, mercury__parser__STATE_VARIABLE_PS_21_21, mercury__parser__STATE_VARIABLE_PS_6);
                        }
#line 640 "parser.m"
                        if (((MR_tag((MR_Word) mercury__parser__Args0_13)) == (MR_mktag((MR_Integer) 1))))
#line 643 "parser.m"
                          *mercury__parser__HeadVar__4_4 = (MR_Word) mercury__parser__Args0_13;
#line 640 "parser.m"
                        else
#line 638 "parser.m"
                          {
#line 638 "parser.m"
                            MR_Word mercury__parser__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Args0_13, (MR_Integer) 0)));
#line 638 "parser.m"
                            MR_Word mercury__parser__V_23_23;
#line 638 "parser.m"
                            MR_Word mercury__parser__V_24_24;

#line 639 "parser.m"
                            {
#line 639 "parser.m"
                              mercury__parser__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 639 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_24_24, 0) = ((MR_Box) (mercury__parser__Atom_7));
#line 639 "parser.m"
                            }
#line 639 "parser.m"
                            {
#line 639 "parser.m"
                              mercury__parser__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 639 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_23_23, 0) = ((MR_Box) (mercury__parser__V_24_24));
#line 639 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_23_23, 1) = ((MR_Box) (mercury__parser__Args_14));
#line 639 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_23_23, 2) = ((MR_Box) (mercury__parser__TermContext_12));
#line 639 "parser.m"
                            }
#line 639 "parser.m"
                            {
#line 639 "parser.m"
                              MR_Word base;
#line 639 "parser.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 639 "parser.m"
                              *mercury__parser__HeadVar__4_4 = base;
#line 639 "parser.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_23_23));
#line 639 "parser.m"
                            }
#line 638 "parser.m"
                          }
#line 636 "parser.m"
                        mercury__parser__succeeded = MR_TRUE;
#line 636 "parser.m"
                      }
#line 645 "parser.m"
                    else
#line 646 "parser.m"
                      {
#line 646 "parser.m"
                        MR_Box mercury__parser__OpTable_17;
#line 646 "parser.m"
                        MR_Word mercury__parser__V_26_26;
#line 646 "parser.m"
                        MR_Word mercury__parser__V_27_27;
#line 646 "parser.m"
                        MR_Word mercury__parser__V_28_28;

#line 646 "parser.m"
                        {
#line 646 "parser.m"
                          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_p_0(mercury__parser__TypeClassInfo_for_op_table_150, mercury__parser__STATE_VARIABLE_PS_0_5, &mercury__parser__OpTable_17);
                        }
#line 647 "parser.m"
                        {
#line 647 "parser.m"
                          mercury__parser__succeeded = mercury__ops__lookup_op_2_p_0(mercury__parser__TypeClassInfo_for_op_table_150, mercury__parser__OpTable_17, mercury__parser__Atom_7);
                        }
#line 649 "parser.m"
                        if (mercury__parser__succeeded)
#line 648 "parser.m"
                          {
#line 648 "parser.m"
                            MR_Integer mercury__parser__V_25_25;

#line 648 "parser.m"
                            {
#line 648 "parser.m"
                              mercury__parser__V_25_25 = mercury__ops__max_priority_1_f_0(mercury__parser__TypeClassInfo_for_op_table_150, mercury__parser__OpTable_17);
                            }
#line 648 "parser.m"
                            mercury__parser__succeeded = (mercury__parser__Prec_3 > mercury__parser__V_25_25);
#line 648 "parser.m"
                          }
#line 649 "parser.m"
                        else
#line 650 "parser.m"
                          mercury__parser__succeeded = MR_TRUE;
#line 646 "parser.m"
                        if (mercury__parser__succeeded)
#line 646 "parser.m"
                          {
#line 652 "parser.m"
                            mercury__parser__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "parser.m"
                            *mercury__parser__STATE_VARIABLE_PS_6 = mercury__parser__STATE_VARIABLE_PS_0_5;
#line 652 "parser.m"
                            {
#line 652 "parser.m"
                              mercury__parser__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 652 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_27_27, 0) = ((MR_Box) (mercury__parser__Atom_7));
#line 652 "parser.m"
                            }
#line 652 "parser.m"
                            {
#line 652 "parser.m"
                              mercury__parser__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 652 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_26_26, 0) = ((MR_Box) (mercury__parser__V_27_27));
#line 652 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_26_26, 1) = ((MR_Box) (mercury__parser__V_28_28));
#line 652 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_26_26, 2) = ((MR_Box) (mercury__parser__TermContext_12));
#line 652 "parser.m"
                            }
#line 652 "parser.m"
                            {
#line 652 "parser.m"
                              MR_Word base;
#line 652 "parser.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 652 "parser.m"
                              *mercury__parser__HeadVar__4_4 = base;
#line 652 "parser.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_26_26));
#line 652 "parser.m"
                            }
#line 652 "parser.m"
                            mercury__parser__succeeded = MR_TRUE;
#line 646 "parser.m"
                          }
#line 646 "parser.m"
                      }
#line 633 "parser.m"
                  }
#line 633 "parser.m"
                else
#line 633 "parser.m"
                  if (((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 655 "parser.m"
                    {
#line 655 "parser.m"
                      MR_String mercury__parser__VarName_29 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 655 "parser.m"
                      MR_Word mercury__parser__Var_34;
#line 655 "parser.m"
                      MR_Word mercury__parser__TermContext_35;
#line 655 "parser.m"
                      MR_Word mercury__parser__V_39_39;

#line 656 "parser.m"
                      {
#line 656 "parser.m"
                        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(mercury__parser__TypeInfo_for_T_151, mercury__parser__VarName_29, &mercury__parser__Var_34, mercury__parser__STATE_VARIABLE_PS_0_5, mercury__parser__STATE_VARIABLE_PS_6);
                      }
#line 657 "parser.m"
                      {
#line 657 "parser.m"
                        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*mercury__parser__STATE_VARIABLE_PS_6, mercury__parser__HeadVar__2_2, &mercury__parser__TermContext_35);
                      }
#line 658 "parser.m"
                      {
#line 658 "parser.m"
                        mercury__parser__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_39_39, 0) = ((MR_Box) (mercury__parser__Var_34));
#line 658 "parser.m"
                        MR_hl_field(MR_mktag(1), mercury__parser__V_39_39, 1) = ((MR_Box) (mercury__parser__TermContext_35));
#line 658 "parser.m"
                      }
#line 658 "parser.m"
                      {
#line 658 "parser.m"
                        MR_Word base;
#line 658 "parser.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 658 "parser.m"
                        *mercury__parser__HeadVar__4_4 = base;
#line 658 "parser.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_39_39));
#line 658 "parser.m"
                      }
#line 655 "parser.m"
                      mercury__parser__succeeded = MR_TRUE;
#line 655 "parser.m"
                    }
#line 633 "parser.m"
                  else
#line 633 "parser.m"
                    if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 668 "parser.m"
                      {
#line 668 "parser.m"
                        MR_Float mercury__parser__Float_58 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
#line 668 "parser.m"
                        MR_Word mercury__parser__TermContext_63;
#line 668 "parser.m"
                        MR_Word mercury__parser__V_66_66;
#line 668 "parser.m"
                        MR_Word mercury__parser__V_67_67;
#line 668 "parser.m"
                        MR_Word mercury__parser__V_68_68;

#line 669 "parser.m"
                        {
#line 669 "parser.m"
                          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_5, mercury__parser__HeadVar__2_2, &mercury__parser__TermContext_63);
                        }
#line 670 "parser.m"
                        {
#line 670 "parser.m"
                          mercury__parser__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "parser.m"
                          MR_hl_field(MR_mktag(3), mercury__parser__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 670 "parser.m"
                          MR_hl_field(MR_mktag(3), mercury__parser__V_67_67, 1) = MR_box_float(mercury__parser__Float_58);
#line 670 "parser.m"
                        }
#line 670 "parser.m"
                        mercury__parser__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 670 "parser.m"
                        {
#line 670 "parser.m"
                          mercury__parser__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 670 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_66_66, 0) = ((MR_Box) (mercury__parser__V_67_67));
#line 670 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_66_66, 1) = ((MR_Box) (mercury__parser__V_68_68));
#line 670 "parser.m"
                          MR_hl_field(MR_mktag(0), mercury__parser__V_66_66, 2) = ((MR_Box) (mercury__parser__TermContext_63));
#line 670 "parser.m"
                        }
#line 670 "parser.m"
                        {
#line 670 "parser.m"
                          MR_Word base;
#line 670 "parser.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 670 "parser.m"
                          *mercury__parser__HeadVar__4_4 = base;
#line 670 "parser.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_66_66));
#line 670 "parser.m"
                        }
#line 668 "parser.m"
                        *mercury__parser__STATE_VARIABLE_PS_6 = mercury__parser__STATE_VARIABLE_PS_0_5;
#line 668 "parser.m"
                        mercury__parser__succeeded = MR_TRUE;
#line 668 "parser.m"
                      }
#line 633 "parser.m"
                    else
#line 633 "parser.m"
                      if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 676 "parser.m"
                        {
#line 676 "parser.m"
                          MR_String mercury__parser__Name_80 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
#line 676 "parser.m"
                          MR_Word mercury__parser__TermContext_85;
#line 676 "parser.m"
                          MR_Word mercury__parser__V_88_88;
#line 676 "parser.m"
                          MR_Word mercury__parser__V_89_89;
#line 676 "parser.m"
                          MR_Word mercury__parser__V_90_90;

#line 677 "parser.m"
                          {
#line 677 "parser.m"
                            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_5, mercury__parser__HeadVar__2_2, &mercury__parser__TermContext_85);
                          }
#line 678 "parser.m"
                          {
#line 678 "parser.m"
                            mercury__parser__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "parser.m"
                            MR_hl_field(MR_mktag(3), mercury__parser__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 678 "parser.m"
                            MR_hl_field(MR_mktag(3), mercury__parser__V_89_89, 1) = ((MR_Box) (mercury__parser__Name_80));
#line 678 "parser.m"
                          }
#line 678 "parser.m"
                          mercury__parser__V_90_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 678 "parser.m"
                          {
#line 678 "parser.m"
                            mercury__parser__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 678 "parser.m"
                            MR_hl_field(MR_mktag(0), mercury__parser__V_88_88, 0) = ((MR_Box) (mercury__parser__V_89_89));
#line 678 "parser.m"
                            MR_hl_field(MR_mktag(0), mercury__parser__V_88_88, 1) = ((MR_Box) (mercury__parser__V_90_90));
#line 678 "parser.m"
                            MR_hl_field(MR_mktag(0), mercury__parser__V_88_88, 2) = ((MR_Box) (mercury__parser__TermContext_85));
#line 678 "parser.m"
                          }
#line 678 "parser.m"
                          {
#line 678 "parser.m"
                            MR_Word base;
#line 678 "parser.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 678 "parser.m"
                            *mercury__parser__HeadVar__4_4 = base;
#line 678 "parser.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_88_88));
#line 678 "parser.m"
                          }
#line 676 "parser.m"
                          *mercury__parser__STATE_VARIABLE_PS_6 = mercury__parser__STATE_VARIABLE_PS_0_5;
#line 676 "parser.m"
                          mercury__parser__succeeded = MR_TRUE;
#line 676 "parser.m"
                        }
#line 633 "parser.m"
                      else
#line 633 "parser.m"
                        if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 660 "parser.m"
                          {
#line 660 "parser.m"
                            MR_Integer mercury__parser__Int_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
#line 660 "parser.m"
                            MR_Word mercury__parser__TermContext_45;
#line 660 "parser.m"
                            MR_Word mercury__parser__V_48_48;
#line 660 "parser.m"
                            MR_Word mercury__parser__V_49_49;
#line 660 "parser.m"
                            MR_Word mercury__parser__V_50_50;

#line 661 "parser.m"
                            {
#line 661 "parser.m"
                              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_5, mercury__parser__HeadVar__2_2, &mercury__parser__TermContext_45);
                            }
#line 662 "parser.m"
                            {
#line 662 "parser.m"
                              mercury__parser__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 662 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_49_49, 0) = ((MR_Box) (mercury__parser__Int_40));
#line 662 "parser.m"
                            }
#line 662 "parser.m"
                            mercury__parser__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 662 "parser.m"
                            {
#line 662 "parser.m"
                              mercury__parser__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 662 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_48_48, 0) = ((MR_Box) (mercury__parser__V_49_49));
#line 662 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_48_48, 1) = ((MR_Box) (mercury__parser__V_50_50));
#line 662 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_48_48, 2) = ((MR_Box) (mercury__parser__TermContext_45));
#line 662 "parser.m"
                            }
#line 662 "parser.m"
                            {
#line 662 "parser.m"
                              MR_Word base;
#line 662 "parser.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 662 "parser.m"
                              *mercury__parser__HeadVar__4_4 = base;
#line 662 "parser.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_48_48));
#line 662 "parser.m"
                            }
#line 660 "parser.m"
                            *mercury__parser__STATE_VARIABLE_PS_6 = mercury__parser__STATE_VARIABLE_PS_0_5;
#line 660 "parser.m"
                            mercury__parser__succeeded = MR_TRUE;
#line 660 "parser.m"
                          }
#line 633 "parser.m"
                        else
#line 633 "parser.m"
                          if (((((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 672 "parser.m"
                            {
#line 672 "parser.m"
                              MR_String mercury__parser__String_69 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
#line 672 "parser.m"
                              MR_Word mercury__parser__TermContext_74;
#line 672 "parser.m"
                              MR_Word mercury__parser__V_77_77;
#line 672 "parser.m"
                              MR_Word mercury__parser__V_78_78;
#line 672 "parser.m"
                              MR_Word mercury__parser__V_79_79;

#line 673 "parser.m"
                              {
#line 673 "parser.m"
                                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_5, mercury__parser__HeadVar__2_2, &mercury__parser__TermContext_74);
                              }
#line 674 "parser.m"
                              {
#line 674 "parser.m"
                                mercury__parser__V_78_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 674 "parser.m"
                                MR_hl_field(MR_mktag(2), mercury__parser__V_78_78, 0) = ((MR_Box) (mercury__parser__String_69));
#line 674 "parser.m"
                              }
#line 674 "parser.m"
                              mercury__parser__V_79_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 674 "parser.m"
                              {
#line 674 "parser.m"
                                mercury__parser__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 674 "parser.m"
                                MR_hl_field(MR_mktag(0), mercury__parser__V_77_77, 0) = ((MR_Box) (mercury__parser__V_78_78));
#line 674 "parser.m"
                                MR_hl_field(MR_mktag(0), mercury__parser__V_77_77, 1) = ((MR_Box) (mercury__parser__V_79_79));
#line 674 "parser.m"
                                MR_hl_field(MR_mktag(0), mercury__parser__V_77_77, 2) = ((MR_Box) (mercury__parser__TermContext_74));
#line 674 "parser.m"
                              }
#line 674 "parser.m"
                              {
#line 674 "parser.m"
                                MR_Word base;
#line 674 "parser.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 674 "parser.m"
                                *mercury__parser__HeadVar__4_4 = base;
#line 674 "parser.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_77_77));
#line 674 "parser.m"
                              }
#line 672 "parser.m"
                              *mercury__parser__STATE_VARIABLE_PS_6 = mercury__parser__STATE_VARIABLE_PS_0_5;
#line 672 "parser.m"
                              mercury__parser__succeeded = MR_TRUE;
#line 672 "parser.m"
                            }
#line 633 "parser.m"
                          else
#line 633 "parser.m"
                            mercury__parser__succeeded = MR_FALSE;
#line 633 "parser.m"
        return mercury__parser__succeeded;
#line 633 "parser.m"
      }
#line 633 "parser.m"
      break;
#line 633 "parser.m"
    }
#line 629 "parser.m"
}

#line 597 "parser.m"
static void MR_CALL 
mercury__parser__parse_simple_term_6_p_0(
#line 597 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_20,
#line 597 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_19,
#line 597 "parser.m"
  MR_Word mercury__parser__Token_7,
#line 597 "parser.m"
  MR_Integer mercury__parser__Context_8,
#line 597 "parser.m"
  MR_Integer mercury__parser__Priority_9,
#line 597 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 597 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_13,
#line 597 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_14)
#line 597 "parser.m"
{
#line 604 "parser.m"
  {
#line 604 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 604 "parser.m"
    MR_Word mercury__parser__Term0_12;
#line 604 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_15_15;

#line 602 "parser.m"
    {
#line 602 "parser.m"
      mercury__parser__succeeded = mercury__parser__parse_simple_term_2_6_p_0(mercury__parser__TypeInfo_for_T_20, mercury__parser__TypeClassInfo_for_op_table_19, mercury__parser__Token_7, mercury__parser__Context_8, mercury__parser__Priority_9, &mercury__parser__Term0_12, mercury__parser__STATE_VARIABLE_PS_0_13, &mercury__parser__STATE_VARIABLE_PS_15_15);
    }
#line 604 "parser.m"
    if (mercury__parser__succeeded)
#line 603 "parser.m"
      {
#line 603 "parser.m"
        mercury__parser__check_for_higher_order_term_5_p_0(mercury__parser__TypeInfo_for_T_20, mercury__parser__TypeClassInfo_for_op_table_19, mercury__parser__Term0_12, mercury__parser__Context_8, mercury__parser__Term_10, mercury__parser__STATE_VARIABLE_PS_15_15, mercury__parser__STATE_VARIABLE_PS_14);
#line 603 "parser.m"
        return;
      }
#line 604 "parser.m"
    else
#line 605 "parser.m"
      {
#line 605 "parser.m"
        MR_Word mercury__parser__Tokens0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 3)));
#line 605 "parser.m"
        MR_Word mercury__parser__Tokens_48;
#line 605 "parser.m"
        MR_String mercury__parser__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 0)));
#line 605 "parser.m"
        MR_Box mercury__parser__V_51_51 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 1));
#line 605 "parser.m"
        MR_Word mercury__parser__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 2)));
#line 605 "parser.m"
        MR_Word mercury__parser__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 4)));
#line 971 "parser.m"
        MR_String mercury__parser__Op_30;
#line 971 "parser.m"
        MR_Box mercury__parser__OpTable_31;
#line 931 "parser.m"
        MR_String mercury__parser__V_66_66;
#line 931 "parser.m"
        MR_Word mercury__parser__V_67_67;
#line 931 "parser.m"
        MR_Word mercury__parser__V_68_68;
#line 931 "parser.m"
        MR_Word mercury__parser__V_69_69;

#line 1069 "parser.m"
        {
#line 1069 "parser.m"
          mercury__parser__Tokens_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "parser.m"
          MR_hl_field(MR_mktag(1), mercury__parser__Tokens_48, 0) = ((MR_Box) (mercury__parser__Token_7));
#line 1069 "parser.m"
          MR_hl_field(MR_mktag(1), mercury__parser__Tokens_48, 1) = ((MR_Box) (mercury__parser__Context_8));
#line 1069 "parser.m"
          MR_hl_field(MR_mktag(1), mercury__parser__Tokens_48, 2) = ((MR_Box) (mercury__parser__Tokens0_47));
#line 1069 "parser.m"
        }
#line 938 "parser.m"
        {
#line 938 "parser.m"
          MR_Word base;
#line 938 "parser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
          *mercury__parser__STATE_VARIABLE_PS_14 = base;
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_50_50));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__V_51_51;
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__V_52_52));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Tokens_48));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__parser__V_53_53));
#line 938 "parser.m"
        }
#line 970 "parser.m"
        if ((mercury__parser__Token_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 970 "parser.m"
          {
#line 970 "parser.m"
            mercury__parser__Op_30 = (MR_String) ",";
#line 970 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 970 "parser.m"
          }
#line 970 "parser.m"
        else
#line 970 "parser.m"
          if (((MR_tag((MR_Word) mercury__parser__Token_7)) == (MR_mktag((MR_Integer) 1))))
#line 969 "parser.m"
            {
#line 969 "parser.m"
              mercury__parser__Op_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_7, (MR_Integer) 0)));
#line 969 "parser.m"
              mercury__parser__succeeded = MR_TRUE;
#line 969 "parser.m"
            }
#line 970 "parser.m"
          else
#line 970 "parser.m"
            mercury__parser__succeeded = MR_FALSE;
#line 971 "parser.m"
        if (mercury__parser__succeeded)
#line 971 "parser.m"
          {
#line 931 "parser.m"
            mercury__parser__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 0)));
#line 931 "parser.m"
            mercury__parser__OpTable_31 = (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 1));
#line 931 "parser.m"
            mercury__parser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 2)));
#line 931 "parser.m"
            mercury__parser__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 3)));
#line 931 "parser.m"
            mercury__parser__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 4)));
#line 6355 "parser.c"
            {
#line 6357 "parser.c"
              MR_Integer mercury__parser__V_32_32;
#line 6359 "parser.c"
              MR_Word mercury__parser__V_33_33;
#line 6361 "parser.c"
              MR_Word mercury__parser__V_34_34;
#line 6363 "parser.c"
              MR_bool MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6365 "parser.c"
              MR_Box mercury__parser__conv3_V_32_32;
#line 6367 "parser.c"
              MR_Box mercury__parser__conv2_V_33_33;
#line 6369 "parser.c"
              MR_Box mercury__parser__conv1_V_34_34;

#line 6372 "parser.c"
              {
#line 6374 "parser.c"
                mercury__parser__succeeded = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_19), mercury__parser__OpTable_31, ((MR_Box) (mercury__parser__Op_30)), &mercury__parser__conv3_V_32_32, &mercury__parser__conv2_V_33_33, &mercury__parser__conv1_V_34_34);
              }
#line 6377 "parser.c"
              if (mercury__parser__succeeded)
#line 6379 "parser.c"
                {
#line 6381 "parser.c"
                  mercury__parser__V_32_32 = ((MR_Integer) mercury__parser__conv3_V_32_32);
#line 6383 "parser.c"
                  mercury__parser__V_33_33 = ((MR_Word) mercury__parser__conv2_V_33_33);
#line 6385 "parser.c"
                  mercury__parser__V_34_34 = ((MR_Word) mercury__parser__conv1_V_34_34);
#line 6387 "parser.c"
                  mercury__parser__succeeded = MR_TRUE;
#line 6389 "parser.c"
                }
#line 6391 "parser.c"
            }
#line 974 "parser.m"
            if (!(mercury__parser__succeeded))
#line 6395 "parser.c"
              {
#line 6397 "parser.c"
                MR_Integer mercury__parser__V_35_35;
#line 6399 "parser.c"
                MR_Word mercury__parser__V_36_36;
#line 6401 "parser.c"
                MR_bool MR_CALL (* mercury__parser__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_19, (MR_Integer) 0)), (MR_Integer) 8)));
#line 6403 "parser.c"
                MR_Box mercury__parser__conv6_V_35_35;
#line 6405 "parser.c"
                MR_Box mercury__parser__conv5_V_36_36;

#line 6408 "parser.c"
                {
#line 6410 "parser.c"
                  mercury__parser__succeeded = mercury__parser__func_4(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_19), mercury__parser__OpTable_31, ((MR_Box) (mercury__parser__Op_30)), &mercury__parser__conv6_V_35_35, &mercury__parser__conv5_V_36_36);
                }
#line 6413 "parser.c"
                if (mercury__parser__succeeded)
#line 6415 "parser.c"
                  {
#line 6417 "parser.c"
                    mercury__parser__V_35_35 = ((MR_Integer) mercury__parser__conv6_V_35_35);
#line 6419 "parser.c"
                    mercury__parser__V_36_36 = ((MR_Word) mercury__parser__conv5_V_36_36);
#line 6421 "parser.c"
                    mercury__parser__succeeded = MR_TRUE;
#line 6423 "parser.c"
                  }
#line 6425 "parser.c"
              }
#line 971 "parser.m"
          }
#line 978 "parser.m"
        if (mercury__parser__succeeded)
#line 977 "parser.m"
          {
#line 977 "parser.m"
            MR_Word mercury__parser__Tokens_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 3)));
#line 933 "parser.m"
            MR_String mercury__parser__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 0)));
#line 933 "parser.m"
            MR_Box mercury__parser__V_75_75 = (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 1));
#line 933 "parser.m"
            MR_Word mercury__parser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 2)));
#line 933 "parser.m"
            MR_Word mercury__parser__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 4)));

#line 986 "parser.m"
            {
#line 986 "parser.m"
              MR_Word base;
#line 986 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "parser.m"
              *mercury__parser__Term_10 = base;
#line 986 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
#line 986 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Tokens_72));
#line 986 "parser.m"
            }
#line 977 "parser.m"
          }
#line 978 "parser.m"
        else
#line 979 "parser.m"
          {
#line 979 "parser.m"
            MR_Word mercury__parser__Tokens_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 3)));
#line 933 "parser.m"
            MR_String mercury__parser__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 0)));
#line 933 "parser.m"
            MR_Box mercury__parser__V_83_83 = (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 1));
#line 933 "parser.m"
            MR_Word mercury__parser__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 2)));
#line 933 "parser.m"
            MR_Word mercury__parser__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mercury__parser__STATE_VARIABLE_PS_14, (MR_Integer) 4)));

#line 986 "parser.m"
            {
#line 986 "parser.m"
              MR_Word base;
#line 986 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "parser.m"
              *mercury__parser__Term_10 = base;
#line 986 "parser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected token at start of (sub)term"));
#line 986 "parser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Tokens_80));
#line 986 "parser.m"
            }
#line 979 "parser.m"
          }
#line 605 "parser.m"
      }
#line 604 "parser.m"
  }
#line 597 "parser.m"
}

#line 542 "parser.m"
static MR_bool MR_CALL 
mercury__parser__parse_backquoted_operator_5_p_0(
#line 542 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_25,
#line 542 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_24,
#line 542 "parser.m"
  MR_Word * mercury__parser__Qualifier_6,
#line 542 "parser.m"
  MR_String * mercury__parser__OpName_7,
#line 542 "parser.m"
  MR_Word * mercury__parser__VariableTerm_8,
#line 542 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_16,
#line 542 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_17)
#line 542 "parser.m"
{
#line 546 "parser.m"
  {
#line 546 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 546 "parser.m"
    MR_Word mercury__parser__Token_10;
#line 546 "parser.m"
    MR_Integer mercury__parser__Context_11;
#line 546 "parser.m"
    MR_Word mercury__parser__TermContext_12;
#line 546 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_18_18;
#line 546 "parser.m"
    MR_Word mercury__parser__Tokens0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 3)));
#line 546 "parser.m"
    MR_Word mercury__parser__Tokens_35;
#line 546 "parser.m"
    MR_String mercury__parser__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 0)));
#line 546 "parser.m"
    MR_Box mercury__parser__V_38_38 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 1));
#line 546 "parser.m"
    MR_Word mercury__parser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 2)));
#line 546 "parser.m"
    MR_Word mercury__parser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 4)));
#line 546 "parser.m"
    MR_String mercury__parser__FileName_51;
#line 938 "parser.m"
    MR_Box mercury__parser__V_44_44;
#line 938 "parser.m"
    MR_Word mercury__parser__V_45_45;
#line 938 "parser.m"
    MR_Word mercury__parser__V_47_47;

#line 1061 "parser.m"
    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens0_34)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "parser.m"
    if (mercury__parser__succeeded)
#line 1061 "parser.m"
      {
#line 1061 "parser.m"
        mercury__parser__Token_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_34, (MR_Integer) 0)));
#line 1061 "parser.m"
        mercury__parser__Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_34, (MR_Integer) 1)));
#line 1061 "parser.m"
        mercury__parser__Tokens_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_34, (MR_Integer) 2)));
#line 938 "parser.m"
        mercury__parser__FileName_51 = mercury__parser__V_37_37;
#line 938 "parser.m"
        mercury__parser__V_44_44 = mercury__parser__V_38_38;
#line 938 "parser.m"
        mercury__parser__V_45_45 = mercury__parser__V_39_39;
#line 938 "parser.m"
        mercury__parser__V_47_47 = mercury__parser__V_40_40;
#line 938 "parser.m"
        {
#line 938 "parser.m"
          mercury__parser__STATE_VARIABLE_PS_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, 0) = ((MR_Box) (mercury__parser__FileName_51));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, 1) = mercury__parser__V_44_44;
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, 2) = ((MR_Box) (mercury__parser__V_45_45));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, 3) = ((MR_Box) (mercury__parser__Tokens_35));
#line 938 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_18_18, 4) = ((MR_Box) (mercury__parser__V_47_47));
#line 938 "parser.m"
        }
#line 165 "term.opt"
        {
#line 165 "term.opt"
          mercury__parser__TermContext_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 165 "term.opt"
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_12, 0) = ((MR_Box) (mercury__parser__FileName_51));
#line 165 "term.opt"
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_12, 1) = ((MR_Box) (mercury__parser__Context_11));
#line 165 "term.opt"
        }
#line 555 "parser.m"
        if (((MR_tag((MR_Word) mercury__parser__Token_10)) == (MR_mktag((MR_Integer) 1))))
#line 556 "parser.m"
          {
#line 556 "parser.m"
            MR_String mercury__parser__OpName0_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_10, (MR_Integer) 0)));
#line 556 "parser.m"
            MR_Word mercury__parser__V_19_19;

#line 557 "parser.m"
            *mercury__parser__VariableTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 558 "parser.m"
            mercury__parser__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 558 "parser.m"
            {
#line 558 "parser.m"
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_50_95_95_91_49_93_95_48_7_p_0(mercury__parser__TypeClassInfo_for_op_table_24, mercury__parser__V_19_19, mercury__parser__Qualifier_6, mercury__parser__TermContext_12, mercury__parser__OpName0_15, mercury__parser__OpName_7, mercury__parser__STATE_VARIABLE_PS_18_18, mercury__parser__STATE_VARIABLE_PS_17);
            }
#line 556 "parser.m"
            mercury__parser__succeeded = MR_TRUE;
#line 556 "parser.m"
          }
#line 555 "parser.m"
        else
#line 555 "parser.m"
          if (((MR_tag((MR_Word) mercury__parser__Token_10)) == (MR_mktag((MR_Integer) 2))))
#line 550 "parser.m"
            {
#line 550 "parser.m"
              MR_String mercury__parser__VariableOp_13 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__parser__Token_10, (MR_Integer) 0)));
#line 550 "parser.m"
              MR_Word mercury__parser__Var_14;
#line 550 "parser.m"
              MR_Word mercury__parser__V_22_22;
#line 550 "parser.m"
              MR_Word mercury__parser__V_23_23;

#line 551 "parser.m"
              *mercury__parser__Qualifier_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "parser.m"
              *mercury__parser__OpName_7 = (MR_String) "";
#line 553 "parser.m"
              {
#line 553 "parser.m"
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(mercury__parser__TypeInfo_for_T_25, mercury__parser__VariableOp_13, &mercury__parser__Var_14, mercury__parser__STATE_VARIABLE_PS_18_18, mercury__parser__STATE_VARIABLE_PS_17);
              }
#line 554 "parser.m"
              {
#line 554 "parser.m"
                mercury__parser__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "parser.m"
                MR_hl_field(MR_mktag(1), mercury__parser__V_22_22, 0) = ((MR_Box) (mercury__parser__Var_14));
#line 554 "parser.m"
                MR_hl_field(MR_mktag(1), mercury__parser__V_22_22, 1) = ((MR_Box) (mercury__parser__TermContext_12));
#line 554 "parser.m"
              }
#line 554 "parser.m"
              mercury__parser__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 554 "parser.m"
              {
#line 554 "parser.m"
                MR_Word base;
#line 554 "parser.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "parser.m"
                *mercury__parser__VariableTerm_8 = base;
#line 554 "parser.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__V_22_22));
#line 554 "parser.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__V_23_23));
#line 554 "parser.m"
              }
#line 550 "parser.m"
              mercury__parser__succeeded = MR_TRUE;
#line 550 "parser.m"
            }
#line 555 "parser.m"
          else
#line 555 "parser.m"
            mercury__parser__succeeded = MR_FALSE;
#line 1061 "parser.m"
      }
#line 546 "parser.m"
    return mercury__parser__succeeded;
#line 546 "parser.m"
  }
#line 542 "parser.m"
}

#line 462 "parser.m"
static void MR_CALL 
mercury__parser__parse_rest_7_p_0(
#line 462 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_74,
#line 462 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_73,
#line 462 "parser.m"
  MR_Integer mercury__parser__MaxPriority_8,
#line 462 "parser.m"
  MR_Word mercury__parser__TermKind_9,
#line 462 "parser.m"
  MR_Integer mercury__parser__LeftPriority_10,
#line 462 "parser.m"
  MR_Word mercury__parser__LeftTerm_11,
#line 462 "parser.m"
  MR_Word * mercury__parser__Term_12,
#line 462 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_36,
#line 462 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_37)
#line 462 "parser.m"
{
#line 527 "parser.m"
  while (MR_TRUE)
#line 527 "parser.m"
    {
#line 527 "parser.m"
      /* tailcall optimized into a loop */
#line 527 "parser.m"
      {
#line 527 "parser.m"
        MR_bool mercury__parser__succeeded;
#line 527 "parser.m"
        MR_Integer mercury__parser__Context_15;
#line 527 "parser.m"
        MR_Integer mercury__parser__OpPriority_21;
#line 527 "parser.m"
        MR_Word mercury__parser__RightAssoc_23;
#line 527 "parser.m"
        MR_Word mercury__parser__Qualifier_24;
#line 527 "parser.m"
        MR_String mercury__parser__Op_25;
#line 527 "parser.m"
        MR_Word mercury__parser__VariableTerm_26;
#line 527 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_PS_41_41;
#line 469 "parser.m"
        MR_Word mercury__parser__Token_14;
#line 469 "parser.m"
        MR_String mercury__parser__Op0_16;
#line 469 "parser.m"
        MR_Word mercury__parser__LeftAssoc_22;
#line 469 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_PS_38_38;
#line 494 "parser.m"
        MR_Integer mercury__parser__OpPriority0_18;
#line 494 "parser.m"
        MR_Word mercury__parser__LeftAssoc0_19;
#line 494 "parser.m"
        MR_Word mercury__parser__RightAssoc0_20;
#line 484 "parser.m"
        MR_Box mercury__parser__OpTable_17;
#line 931 "parser.m"
        MR_String mercury__parser__V_91_91;
#line 931 "parser.m"
        MR_Word mercury__parser__V_92_92;
#line 931 "parser.m"
        MR_Word mercury__parser__V_93_93;
#line 931 "parser.m"
        MR_Word mercury__parser__V_94_94;
#line 6756 "parser.c"
        MR_bool MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
#line 6758 "parser.c"
        MR_Box mercury__parser__conv3_OpPriority0_18;
#line 6760 "parser.c"
        MR_Box mercury__parser__conv2_LeftAssoc0_19;
#line 6762 "parser.c"
        MR_Box mercury__parser__conv1_RightAssoc0_20;

#line 469 "parser.m"
        {
#line 469 "parser.m"
          mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_p_1(&mercury__parser__Token_14, &mercury__parser__Context_15, mercury__parser__STATE_VARIABLE_PS_0_36, &mercury__parser__STATE_VARIABLE_PS_38_38);
        }
#line 469 "parser.m"
        if (mercury__parser__succeeded)
#line 469 "parser.m"
          {
#line 474 "parser.m"
            if ((mercury__parser__Token_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 471 "parser.m"
              {
#line 472 "parser.m"
                mercury__parser__succeeded = (mercury__parser__TermKind_9 == (MR_Integer) 0);
#line 471 "parser.m"
                if (mercury__parser__succeeded)
#line 471 "parser.m"
                  {
#line 473 "parser.m"
                    mercury__parser__Op0_16 = (MR_String) ",";
#line 473 "parser.m"
                    mercury__parser__succeeded = MR_TRUE;
#line 471 "parser.m"
                  }
#line 471 "parser.m"
              }
#line 474 "parser.m"
            else
#line 474 "parser.m"
              if ((mercury__parser__Token_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 475 "parser.m"
                {
#line 476 "parser.m"
                  mercury__parser__succeeded = (mercury__parser__TermKind_9 == (MR_Integer) 2);
#line 476 "parser.m"
                  mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 475 "parser.m"
                  if (mercury__parser__succeeded)
#line 475 "parser.m"
                    {
#line 477 "parser.m"
                      mercury__parser__Op0_16 = (MR_String) "|";
#line 477 "parser.m"
                      mercury__parser__succeeded = MR_TRUE;
#line 475 "parser.m"
                    }
#line 475 "parser.m"
                }
#line 474 "parser.m"
              else
#line 474 "parser.m"
                if (((MR_tag((MR_Word) mercury__parser__Token_14)) == (MR_mktag((MR_Integer) 1))))
#line 479 "parser.m"
                  {
#line 479 "parser.m"
                    mercury__parser__Op0_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_14, (MR_Integer) 0)));
#line 479 "parser.m"
                    mercury__parser__succeeded = MR_TRUE;
#line 479 "parser.m"
                  }
#line 474 "parser.m"
                else
#line 474 "parser.m"
                  mercury__parser__succeeded = MR_FALSE;
#line 469 "parser.m"
            if (mercury__parser__succeeded)
#line 469 "parser.m"
              {
#line 484 "parser.m"
                mercury__parser__succeeded = (strcmp(mercury__parser__Op0_16, (MR_String) "\140") == 0);
#line 484 "parser.m"
                if (mercury__parser__succeeded)
#line 484 "parser.m"
                  {
#line 931 "parser.m"
                    mercury__parser__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_38_38, (MR_Integer) 0)));
#line 931 "parser.m"
                    mercury__parser__OpTable_17 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_38_38, (MR_Integer) 1));
#line 931 "parser.m"
                    mercury__parser__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_38_38, (MR_Integer) 2)));
#line 931 "parser.m"
                    mercury__parser__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_38_38, (MR_Integer) 3)));
#line 931 "parser.m"
                    mercury__parser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_38_38, (MR_Integer) 4)));
#line 6850 "parser.c"
                    mercury__parser__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_73, (MR_Integer) 0)), (MR_Integer) 11)));
#line 6852 "parser.c"
                    {
#line 6854 "parser.c"
                      mercury__parser__succeeded = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_73), mercury__parser__OpTable_17, &mercury__parser__conv3_OpPriority0_18, &mercury__parser__conv2_LeftAssoc0_19, &mercury__parser__conv1_RightAssoc0_20);
                    }
#line 6857 "parser.c"
                    if (mercury__parser__succeeded)
#line 6859 "parser.c"
                      {
#line 6861 "parser.c"
                        mercury__parser__OpPriority0_18 = ((MR_Integer) mercury__parser__conv3_OpPriority0_18);
#line 6863 "parser.c"
                        mercury__parser__LeftAssoc0_19 = ((MR_Word) mercury__parser__conv2_LeftAssoc0_19);
#line 6865 "parser.c"
                        mercury__parser__RightAssoc0_20 = ((MR_Word) mercury__parser__conv1_RightAssoc0_20);
#line 6867 "parser.c"
                        mercury__parser__succeeded = MR_TRUE;
#line 6869 "parser.c"
                      }
#line 484 "parser.m"
                  }
#line 494 "parser.m"
                if (mercury__parser__succeeded)
#line 489 "parser.m"
                  {
#line 489 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_PS_39_39;
#line 489 "parser.m"
                    MR_Word mercury__parser__V_40_40;
#line 489 "parser.m"
                    MR_String mercury__parser__V_42_42;

#line 489 "parser.m"
                    mercury__parser__OpPriority_21 = mercury__parser__OpPriority0_18;
#line 490 "parser.m"
                    mercury__parser__LeftAssoc_22 = mercury__parser__LeftAssoc0_19;
#line 491 "parser.m"
                    mercury__parser__RightAssoc_23 = mercury__parser__RightAssoc0_20;
#line 492 "parser.m"
                    {
#line 492 "parser.m"
                      mercury__parser__succeeded = mercury__parser__parse_backquoted_operator_5_p_0(mercury__parser__TypeInfo_for_T_74, mercury__parser__TypeClassInfo_for_op_table_73, &mercury__parser__Qualifier_24, &mercury__parser__Op_25, &mercury__parser__VariableTerm_26, mercury__parser__STATE_VARIABLE_PS_38_38, &mercury__parser__STATE_VARIABLE_PS_39_39);
                    }
#line 489 "parser.m"
                    if (mercury__parser__succeeded)
#line 489 "parser.m"
                      {
#line 493 "parser.m"
                        mercury__parser__V_42_42 = (MR_String) "\140";
#line 493 "parser.m"
                        mercury__parser__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__parser_scalar_common_5[0]);
#line 493 "parser.m"
                        {
#line 493 "parser.m"
                          mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__V_40_40, mercury__parser__STATE_VARIABLE_PS_39_39, &mercury__parser__STATE_VARIABLE_PS_41_41);
                        }
#line 489 "parser.m"
                      }
#line 489 "parser.m"
                  }
#line 494 "parser.m"
                else
#line 495 "parser.m"
                  {
#line 495 "parser.m"
                    MR_Box mercury__parser__OpTable_61;
#line 6918 "parser.c"
                    MR_bool MR_CALL (* mercury__parser__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
#line 6920 "parser.c"
                    MR_Box mercury__parser__conv7_OpPriority_21;
#line 6922 "parser.c"
                    MR_Box mercury__parser__conv6_LeftAssoc_22;
#line 6924 "parser.c"
                    MR_Box mercury__parser__conv5_RightAssoc_23;

#line 495 "parser.m"
                    mercury__parser__Op_25 = mercury__parser__Op0_16;
#line 496 "parser.m"
                    mercury__parser__VariableTerm_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 497 "parser.m"
                    mercury__parser__Qualifier_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 498 "parser.m"
                    {
#line 498 "parser.m"
                      mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_p_0(mercury__parser__TypeClassInfo_for_op_table_73, mercury__parser__STATE_VARIABLE_PS_38_38, &mercury__parser__OpTable_61);
                    }
#line 6938 "parser.c"
                    mercury__parser__func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_73, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6940 "parser.c"
                    {
#line 6942 "parser.c"
                      mercury__parser__succeeded = mercury__parser__func_4(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_73), mercury__parser__OpTable_61, ((MR_Box) (mercury__parser__Op_25)), &mercury__parser__conv7_OpPriority_21, &mercury__parser__conv6_LeftAssoc_22, &mercury__parser__conv5_RightAssoc_23);
                    }
#line 6945 "parser.c"
                    if (mercury__parser__succeeded)
#line 6947 "parser.c"
                      {
#line 6949 "parser.c"
                        mercury__parser__OpPriority_21 = ((MR_Integer) mercury__parser__conv7_OpPriority_21);
#line 6951 "parser.c"
                        mercury__parser__LeftAssoc_22 = ((MR_Word) mercury__parser__conv6_LeftAssoc_22);
#line 6953 "parser.c"
                        mercury__parser__RightAssoc_23 = ((MR_Word) mercury__parser__conv5_RightAssoc_23);
#line 6955 "parser.c"
                        mercury__parser__succeeded = MR_TRUE;
#line 6957 "parser.c"
                      }
#line 495 "parser.m"
                    if (mercury__parser__succeeded)
#line 495 "parser.m"
                      {
#line 495 "parser.m"
                        mercury__parser__STATE_VARIABLE_PS_41_41 = mercury__parser__STATE_VARIABLE_PS_38_38;
#line 495 "parser.m"
                        mercury__parser__succeeded = MR_TRUE;
#line 495 "parser.m"
                      }
#line 495 "parser.m"
                  }
#line 469 "parser.m"
                if (mercury__parser__succeeded)
#line 469 "parser.m"
                  {
#line 502 "parser.m"
                    mercury__parser__succeeded = (mercury__parser__OpPriority_21 <= mercury__parser__MaxPriority_8);
#line 469 "parser.m"
                    if (mercury__parser__succeeded)
#line 503 "parser.m"
                      {
#line 503 "parser.m"
                        mercury__parser__succeeded = mercury__parser__check_priority_3_p_0(mercury__parser__LeftAssoc_22, mercury__parser__OpPriority_21, mercury__parser__LeftPriority_10);
                      }
#line 469 "parser.m"
                  }
#line 469 "parser.m"
              }
#line 469 "parser.m"
          }
#line 527 "parser.m"
        if (mercury__parser__succeeded)
#line 505 "parser.m"
          {
#line 505 "parser.m"
            MR_Integer mercury__parser__RightPriority_27;
#line 505 "parser.m"
            MR_Word mercury__parser__RightTerm0_28;
#line 505 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_PS_43_43;

#line 34 "ops.opt"
            if ((mercury__parser__RightAssoc_23 == (MR_Integer) 0))
#line 35 "ops.opt"
              {
#line 36 "ops.opt"
                mercury__parser__RightPriority_27 = (mercury__parser__OpPriority_21 - (MR_Integer) 1);
#line 35 "ops.opt"
              }
#line 34 "ops.opt"
            else
#line 34 "ops.opt"
              mercury__parser__RightPriority_27 = mercury__parser__OpPriority_21;
#line 506 "parser.m"
            {
#line 506 "parser.m"
              mercury__parser__parse_term_2_5_p_0(mercury__parser__TypeInfo_for_T_74, mercury__parser__TypeClassInfo_for_op_table_73, mercury__parser__RightPriority_27, mercury__parser__TermKind_9, &mercury__parser__RightTerm0_28, mercury__parser__STATE_VARIABLE_PS_41_41, &mercury__parser__STATE_VARIABLE_PS_43_43);
            }
#line 522 "parser.m"
            if (((MR_tag((MR_Word) mercury__parser__RightTerm0_28)) == (MR_mktag((MR_Integer) 1))))
#line 523 "parser.m"
              {
#line 525 "parser.m"
                *mercury__parser__Term_12 = mercury__parser__RightTerm0_28;
#line 523 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_37 = mercury__parser__STATE_VARIABLE_PS_43_43;
#line 523 "parser.m"
              }
#line 522 "parser.m"
            else
#line 508 "parser.m"
              {
#line 508 "parser.m"
                MR_Word mercury__parser__TypeCtorInfo_80_80;
#line 508 "parser.m"
                MR_Word mercury__parser__TypeInfo_81_81;
#line 508 "parser.m"
                MR_Word mercury__parser__RightTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightTerm0_28, (MR_Integer) 0)));
#line 508 "parser.m"
                MR_Word mercury__parser__TermContext_30;
#line 508 "parser.m"
                MR_Word mercury__parser__OpTerm0_31;
#line 508 "parser.m"
                MR_Word mercury__parser__OpTerm_32;
#line 508 "parser.m"
                MR_Word mercury__parser__V_44_44;
#line 508 "parser.m"
                MR_Word mercury__parser__V_45_45;
#line 508 "parser.m"
                MR_Word mercury__parser__V_46_46;
#line 508 "parser.m"
                MR_Word mercury__parser__V_47_47;
#line 508 "parser.m"
                MR_Word mercury__parser__V_48_48;
#line 511 "parser.m"
                MR_Word mercury__parser__conv8_V_45_45;

#line 509 "parser.m"
                {
#line 509 "parser.m"
                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_43_43, mercury__parser__Context_15, &mercury__parser__TermContext_30);
                }
#line 510 "parser.m"
                {
#line 510 "parser.m"
                  mercury__parser__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 510 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_44_44, 0) = ((MR_Box) (mercury__parser__Op_25));
#line 510 "parser.m"
                }
#line 7070 "parser.c"
                mercury__parser__TypeCtorInfo_80_80 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 7072 "parser.c"
                {
#line 7074 "parser.c"
                  mercury__parser__TypeInfo_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7076 "parser.c"
                  MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_81_81, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_80_80));
#line 7078 "parser.c"
                  MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_81_81, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_74));
#line 7080 "parser.c"
                }
#line 511 "parser.m"
                mercury__parser__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 511 "parser.m"
                {
#line 511 "parser.m"
                  mercury__parser__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_47_47, 0) = ((MR_Box) (mercury__parser__RightTerm_29));
#line 511 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_47_47, 1) = ((MR_Box) (mercury__parser__V_48_48));
#line 511 "parser.m"
                }
#line 511 "parser.m"
                {
#line 511 "parser.m"
                  mercury__parser__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_46_46, 0) = ((MR_Box) (mercury__parser__LeftTerm_11));
#line 511 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_46_46, 1) = ((MR_Box) (mercury__parser__V_47_47));
#line 511 "parser.m"
                }
#line 511 "parser.m"
                {
#line 511 "parser.m"
                  mercury__parser__conv8_V_45_45 = mercury__list__append_2_f_0(mercury__parser__TypeInfo_81_81, (MR_Word) mercury__parser__VariableTerm_26, (MR_Word) mercury__parser__V_46_46);
                }
#line 511 "parser.m"
                mercury__parser__V_45_45 = (MR_Word) mercury__parser__conv8_V_45_45;
#line 510 "parser.m"
                {
#line 510 "parser.m"
                  mercury__parser__OpTerm0_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 510 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_31, 0) = ((MR_Box) (mercury__parser__V_44_44));
#line 510 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_31, 1) = ((MR_Box) (mercury__parser__V_45_45));
#line 510 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_31, 2) = ((MR_Box) (mercury__parser__TermContext_30));
#line 510 "parser.m"
                }
#line 516 "parser.m"
                if ((mercury__parser__Qualifier_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "parser.m"
                  mercury__parser__OpTerm_32 = mercury__parser__OpTerm0_31;
#line 516 "parser.m"
                else
#line 517 "parser.m"
                  {
#line 517 "parser.m"
                    MR_Word mercury__parser__QTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Qualifier_24, (MR_Integer) 0)));
#line 517 "parser.m"
                    MR_Word mercury__parser__V_49_49 = (MR_Word) &mercury__parser_scalar_common_5[1];
#line 517 "parser.m"
                    MR_Word mercury__parser__V_51_51;
#line 517 "parser.m"
                    MR_Word mercury__parser__V_52_52;
#line 517 "parser.m"
                    MR_Word mercury__parser__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 518 "parser.m"
                    {
#line 518 "parser.m"
                      mercury__parser__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_52_52, 0) = ((MR_Box) (mercury__parser__OpTerm0_31));
#line 518 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_52_52, 1) = ((MR_Box) (mercury__parser__V_53_53));
#line 518 "parser.m"
                    }
#line 518 "parser.m"
                    {
#line 518 "parser.m"
                      mercury__parser__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_51_51, 0) = ((MR_Box) (mercury__parser__QTerm_33));
#line 518 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_51_51, 1) = ((MR_Box) (mercury__parser__V_52_52));
#line 518 "parser.m"
                    }
#line 518 "parser.m"
                    {
#line 518 "parser.m"
                      mercury__parser__OpTerm_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 518 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_32, 0) = ((MR_Box) (mercury__parser__V_49_49));
#line 518 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_32, 1) = ((MR_Box) (mercury__parser__V_51_51));
#line 518 "parser.m"
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_32, 2) = ((MR_Box) (mercury__parser__TermContext_30));
#line 518 "parser.m"
                    }
#line 517 "parser.m"
                  }
#line 521 "parser.m"
                /* direct tailcall eliminated */
#line 521 "parser.m"
                {
#line 521 "parser.m"
                  MR_Integer mercury__parser__LeftPriority__tmp_copy_10 = mercury__parser__OpPriority_21;
#line 521 "parser.m"
                  MR_Word mercury__parser__LeftTerm__tmp_copy_11 = mercury__parser__OpTerm_32;
#line 521 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_36 = mercury__parser__STATE_VARIABLE_PS_43_43;

#line 521 "parser.m"
                  mercury__parser__STATE_VARIABLE_PS_0_36 = mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_36;
#line 521 "parser.m"
                  mercury__parser__LeftTerm_11 = mercury__parser__LeftTerm__tmp_copy_11;
#line 521 "parser.m"
                  mercury__parser__LeftPriority_10 = mercury__parser__LeftPriority__tmp_copy_10;
#line 521 "parser.m"
                }
#line 521 "parser.m"
                continue;
#line 508 "parser.m"
              }
#line 505 "parser.m"
          }
#line 527 "parser.m"
        else
#line 538 "parser.m"
          {
#line 538 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_PS_56_56;
#line 538 "parser.m"
            MR_Integer mercury__parser__Context_66;
#line 538 "parser.m"
            MR_Integer mercury__parser__OpPriority_68;
#line 538 "parser.m"
            MR_String mercury__parser__Op_70;
#line 529 "parser.m"
            MR_Word mercury__parser__V_55_55;
#line 529 "parser.m"
            MR_Box mercury__parser__OpTable_62;
#line 529 "parser.m"
            MR_Word mercury__parser__LeftAssoc_63;

#line 529 "parser.m"
            {
#line 529 "parser.m"
              mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_p_1(&mercury__parser__V_55_55, &mercury__parser__Context_66, mercury__parser__STATE_VARIABLE_PS_0_36, &mercury__parser__STATE_VARIABLE_PS_56_56);
            }
#line 529 "parser.m"
            if (mercury__parser__succeeded)
#line 529 "parser.m"
              {
#line 529 "parser.m"
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 529 "parser.m"
                if (mercury__parser__succeeded)
#line 529 "parser.m"
                  {
#line 529 "parser.m"
                    mercury__parser__Op_70 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__V_55_55, (MR_Integer) 0)));
#line 530 "parser.m"
                    {
#line 530 "parser.m"
                      mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_p_0(mercury__parser__TypeClassInfo_for_op_table_73, mercury__parser__STATE_VARIABLE_PS_56_56, &mercury__parser__OpTable_62);
                    }
#line 531 "parser.m"
                    {
#line 531 "parser.m"
                      mercury__parser__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__parser__TypeClassInfo_for_op_table_73, mercury__parser__OpTable_62, mercury__parser__Op_70, &mercury__parser__OpPriority_68, &mercury__parser__LeftAssoc_63);
                    }
#line 529 "parser.m"
                    if (mercury__parser__succeeded)
#line 529 "parser.m"
                      {
#line 532 "parser.m"
                        mercury__parser__succeeded = (mercury__parser__OpPriority_68 <= mercury__parser__MaxPriority_8);
#line 529 "parser.m"
                        if (mercury__parser__succeeded)
#line 533 "parser.m"
                          {
#line 533 "parser.m"
                            mercury__parser__succeeded = mercury__parser__check_priority_3_p_0(mercury__parser__LeftAssoc_63, mercury__parser__OpPriority_68, mercury__parser__LeftPriority_10);
                          }
#line 529 "parser.m"
                      }
#line 529 "parser.m"
                  }
#line 529 "parser.m"
              }
#line 538 "parser.m"
            if (mercury__parser__succeeded)
#line 535 "parser.m"
              {
#line 535 "parser.m"
                MR_Word mercury__parser__V_57_57;
#line 535 "parser.m"
                MR_Word mercury__parser__V_58_58;
#line 535 "parser.m"
                MR_Word mercury__parser__V_59_59;
#line 535 "parser.m"
                MR_Word mercury__parser__TermContext_64;
#line 535 "parser.m"
                MR_Word mercury__parser__OpTerm_65;

#line 535 "parser.m"
                {
#line 535 "parser.m"
                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_56_56, mercury__parser__Context_66, &mercury__parser__TermContext_64);
                }
#line 536 "parser.m"
                {
#line 536 "parser.m"
                  mercury__parser__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 536 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_57_57, 0) = ((MR_Box) (mercury__parser__Op_70));
#line 536 "parser.m"
                }
#line 536 "parser.m"
                mercury__parser__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 536 "parser.m"
                {
#line 536 "parser.m"
                  mercury__parser__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_58_58, 0) = ((MR_Box) (mercury__parser__LeftTerm_11));
#line 536 "parser.m"
                  MR_hl_field(MR_mktag(1), mercury__parser__V_58_58, 1) = ((MR_Box) (mercury__parser__V_59_59));
#line 536 "parser.m"
                }
#line 536 "parser.m"
                {
#line 536 "parser.m"
                  mercury__parser__OpTerm_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 536 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_65, 0) = ((MR_Box) (mercury__parser__V_57_57));
#line 536 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_65, 1) = ((MR_Box) (mercury__parser__V_58_58));
#line 536 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_65, 2) = ((MR_Box) (mercury__parser__TermContext_64));
#line 536 "parser.m"
                }
#line 537 "parser.m"
                /* direct tailcall eliminated */
#line 537 "parser.m"
                {
#line 537 "parser.m"
                  MR_Integer mercury__parser__LeftPriority__tmp_copy_10 = mercury__parser__OpPriority_68;
#line 537 "parser.m"
                  MR_Word mercury__parser__LeftTerm__tmp_copy_11 = mercury__parser__OpTerm_65;
#line 537 "parser.m"
                  MR_Word mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_36 = mercury__parser__STATE_VARIABLE_PS_56_56;

#line 537 "parser.m"
                  mercury__parser__STATE_VARIABLE_PS_0_36 = mercury__parser__STATE_VARIABLE_PS_0__tmp_copy_36;
#line 537 "parser.m"
                  mercury__parser__LeftTerm_11 = mercury__parser__LeftTerm__tmp_copy_11;
#line 537 "parser.m"
                  mercury__parser__LeftPriority_10 = mercury__parser__LeftPriority__tmp_copy_10;
#line 537 "parser.m"
                }
#line 537 "parser.m"
                continue;
#line 535 "parser.m"
              }
#line 538 "parser.m"
            else
#line 539 "parser.m"
              {
#line 539 "parser.m"
                {
#line 539 "parser.m"
                  MR_Word base;
#line 539 "parser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 539 "parser.m"
                  *mercury__parser__Term_12 = base;
#line 539 "parser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__LeftTerm_11));
#line 539 "parser.m"
                }
#line 539 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_37 = mercury__parser__STATE_VARIABLE_PS_0_36;
#line 539 "parser.m"
              }
#line 538 "parser.m"
          }
#line 527 "parser.m"
      }
#line 527 "parser.m"
      break;
#line 527 "parser.m"
    }
#line 462 "parser.m"
}

#line 363 "parser.m"
static void MR_CALL 
mercury__parser__parse_left_term_6_p_0(
#line 363 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_108,
#line 363 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_107,
#line 363 "parser.m"
  MR_Integer mercury__parser__MaxPriority_7,
#line 363 "parser.m"
  MR_Word mercury__parser__TermKind_8,
#line 363 "parser.m"
  MR_Integer * mercury__parser__OpPriority_9,
#line 363 "parser.m"
  MR_Word * mercury__parser__Term_10,
#line 363 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_44,
#line 363 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_45)
#line 363 "parser.m"
{
#line 457 "parser.m"
  {
#line 457 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 457 "parser.m"
    MR_Word mercury__parser__Token_12;
#line 457 "parser.m"
    MR_Integer mercury__parser__Context_13;
#line 457 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_46_46;

#line 367 "parser.m"
    {
#line 367 "parser.m"
      mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_p_1(&mercury__parser__Token_12, &mercury__parser__Context_13, mercury__parser__STATE_VARIABLE_PS_0_44, &mercury__parser__STATE_VARIABLE_PS_46_46);
    }
#line 457 "parser.m"
    if (mercury__parser__succeeded)
#line 384 "parser.m"
      {
#line 384 "parser.m"
        MR_Integer mercury__parser__NegX_17;
#line 384 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_PS_48_48;
#line 370 "parser.m"
        MR_Word mercury__parser__IntToken_14;
#line 370 "parser.m"
        MR_String mercury__parser__V_47_47;
#line 371 "parser.m"
        MR_Integer mercury__parser___IntContext_15;

#line 370 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_12)) == (MR_mktag((MR_Integer) 1)));
#line 370 "parser.m"
        if (mercury__parser__succeeded)
#line 370 "parser.m"
          {
#line 370 "parser.m"
            mercury__parser__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_12, (MR_Integer) 0)));
#line 370 "parser.m"
            mercury__parser__succeeded = (strcmp(mercury__parser__V_47_47, (MR_String) "-") == 0);
#line 370 "parser.m"
            if (mercury__parser__succeeded)
#line 370 "parser.m"
              {
#line 371 "parser.m"
                {
#line 371 "parser.m"
                  mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_p_1(&mercury__parser__IntToken_14, &mercury__parser___IntContext_15, mercury__parser__STATE_VARIABLE_PS_46_46, &mercury__parser__STATE_VARIABLE_PS_48_48);
                }
#line 370 "parser.m"
                if (mercury__parser__succeeded)
#line 375 "parser.m"
                  {
#line 375 "parser.m"
                    if (((((MR_tag((MR_Word) mercury__parser__IntToken_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__IntToken_14, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 376 "parser.m"
                      {
#line 376 "parser.m"
                        MR_String mercury__parser__BigString_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__IntToken_14, (MR_Integer) 1)));
#line 376 "parser.m"
                        MR_Integer mercury__parser__V_49_49;

#line 377 "parser.m"
                        {
#line 377 "parser.m"
                          mercury__parser__V_49_49 = mercury__int__bits_per_int_0_f_0();
                        }
#line 377 "parser.m"
                        {
#line 377 "parser.m"
                          mercury__parser__succeeded = mercury__parser__max_int_plus_1_2_p_0(mercury__parser__V_49_49, mercury__parser__BigString_18);
                        }
#line 376 "parser.m"
                        if (mercury__parser__succeeded)
#line 376 "parser.m"
                          {
#line 378 "parser.m"
                            {
#line 378 "parser.m"
                              mercury__parser__NegX_17 = mercury__int__min_int_0_f_0();
                            }
#line 378 "parser.m"
                            mercury__parser__succeeded = MR_TRUE;
#line 376 "parser.m"
                          }
#line 376 "parser.m"
                      }
#line 375 "parser.m"
                    else
#line 375 "parser.m"
                      if (((((MR_tag((MR_Word) mercury__parser__IntToken_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__IntToken_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 373 "parser.m"
                        {
#line 373 "parser.m"
                          MR_Integer mercury__parser__X_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__parser__IntToken_14, (MR_Integer) 1)));

#line 374 "parser.m"
                          mercury__parser__NegX_17 = ((MR_Integer) 0 - mercury__parser__X_16);
#line 373 "parser.m"
                          mercury__parser__succeeded = MR_TRUE;
#line 373 "parser.m"
                        }
#line 375 "parser.m"
                      else
#line 375 "parser.m"
                        mercury__parser__succeeded = MR_FALSE;
#line 375 "parser.m"
                  }
#line 370 "parser.m"
              }
#line 370 "parser.m"
          }
#line 384 "parser.m"
        if (mercury__parser__succeeded)
#line 381 "parser.m"
          {
#line 381 "parser.m"
            MR_Word mercury__parser__TermContext_19;
#line 381 "parser.m"
            MR_Word mercury__parser__V_51_51;
#line 381 "parser.m"
            MR_Word mercury__parser__V_52_52;
#line 381 "parser.m"
            MR_Word mercury__parser__V_53_53;

#line 381 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_45 = mercury__parser__STATE_VARIABLE_PS_48_48;
#line 381 "parser.m"
            {
#line 381 "parser.m"
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_48_48, mercury__parser__Context_13, &mercury__parser__TermContext_19);
            }
#line 382 "parser.m"
            {
#line 382 "parser.m"
              mercury__parser__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 382 "parser.m"
              MR_hl_field(MR_mktag(1), mercury__parser__V_52_52, 0) = ((MR_Box) (mercury__parser__NegX_17));
#line 382 "parser.m"
            }
#line 382 "parser.m"
            mercury__parser__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "parser.m"
            {
#line 382 "parser.m"
              mercury__parser__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 382 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_51_51, 0) = ((MR_Box) (mercury__parser__V_52_52));
#line 382 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_51_51, 1) = ((MR_Box) (mercury__parser__V_53_53));
#line 382 "parser.m"
              MR_hl_field(MR_mktag(0), mercury__parser__V_51_51, 2) = ((MR_Box) (mercury__parser__TermContext_19));
#line 382 "parser.m"
            }
#line 382 "parser.m"
            {
#line 382 "parser.m"
              MR_Word base;
#line 382 "parser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 382 "parser.m"
              *mercury__parser__Term_10 = base;
#line 382 "parser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_51_51));
#line 382 "parser.m"
            }
#line 383 "parser.m"
            *mercury__parser__OpPriority_9 = (MR_Integer) 0;
#line 381 "parser.m"
          }
#line 384 "parser.m"
        else
#line 393 "parser.m"
          {
#line 393 "parser.m"
            MR_Float mercury__parser__F_20;
#line 393 "parser.m"
            MR_Word mercury__parser__STATE_VARIABLE_PS_56_56;
#line 386 "parser.m"
            MR_String mercury__parser__V_54_54;
#line 386 "parser.m"
            MR_Word mercury__parser__V_55_55;
#line 387 "parser.m"
            MR_Integer mercury__parser___FloatContext_21;

#line 386 "parser.m"
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_12)) == (MR_mktag((MR_Integer) 1)));
#line 386 "parser.m"
            if (mercury__parser__succeeded)
#line 386 "parser.m"
              {
#line 386 "parser.m"
                mercury__parser__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_12, (MR_Integer) 0)));
#line 386 "parser.m"
                mercury__parser__succeeded = (strcmp(mercury__parser__V_54_54, (MR_String) "-") == 0);
#line 386 "parser.m"
                if (mercury__parser__succeeded)
#line 386 "parser.m"
                  {
#line 387 "parser.m"
                    {
#line 387 "parser.m"
                      mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_111_107_101_110_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_49_4_p_1(&mercury__parser__V_55_55, &mercury__parser___FloatContext_21, mercury__parser__STATE_VARIABLE_PS_46_46, &mercury__parser__STATE_VARIABLE_PS_56_56);
                    }
#line 386 "parser.m"
                    if (mercury__parser__succeeded)
#line 386 "parser.m"
                      {
#line 387 "parser.m"
                        mercury__parser__succeeded = ((((MR_tag((MR_Word) mercury__parser__V_55_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__V_55_55, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 387 "parser.m"
                        if (mercury__parser__succeeded)
#line 387 "parser.m"
                          mercury__parser__F_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__parser__V_55_55, (MR_Integer) 1)));
#line 386 "parser.m"
                      }
#line 386 "parser.m"
                  }
#line 386 "parser.m"
              }
#line 393 "parser.m"
            if (mercury__parser__succeeded)
#line 389 "parser.m"
              {
#line 389 "parser.m"
                MR_Float mercury__parser__NegF_22;
#line 389 "parser.m"
                MR_Word mercury__parser__V_58_58;
#line 389 "parser.m"
                MR_Word mercury__parser__V_59_59;
#line 389 "parser.m"
                MR_Word mercury__parser__V_60_60;
#line 389 "parser.m"
                MR_Word mercury__parser__TermContext_81;

#line 389 "parser.m"
                *mercury__parser__STATE_VARIABLE_PS_45 = mercury__parser__STATE_VARIABLE_PS_56_56;
#line 389 "parser.m"
                {
#line 389 "parser.m"
                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_56_56, mercury__parser__Context_13, &mercury__parser__TermContext_81);
                }
#line 390 "parser.m"
                mercury__parser__NegF_22 = (((MR_Float) 0.0000000000000000) - mercury__parser__F_20);
#line 391 "parser.m"
                {
#line 391 "parser.m"
                  mercury__parser__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "parser.m"
                  MR_hl_field(MR_mktag(3), mercury__parser__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 391 "parser.m"
                  MR_hl_field(MR_mktag(3), mercury__parser__V_59_59, 1) = MR_box_float(mercury__parser__NegF_22);
#line 391 "parser.m"
                }
#line 391 "parser.m"
                mercury__parser__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 391 "parser.m"
                {
#line 391 "parser.m"
                  mercury__parser__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 391 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_58_58, 0) = ((MR_Box) (mercury__parser__V_59_59));
#line 391 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_58_58, 1) = ((MR_Box) (mercury__parser__V_60_60));
#line 391 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__V_58_58, 2) = ((MR_Box) (mercury__parser__TermContext_81));
#line 391 "parser.m"
                }
#line 391 "parser.m"
                {
#line 391 "parser.m"
                  MR_Word base;
#line 391 "parser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 391 "parser.m"
                  *mercury__parser__Term_10 = base;
#line 391 "parser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_58_58));
#line 391 "parser.m"
                }
#line 392 "parser.m"
                *mercury__parser__OpPriority_9 = (MR_Integer) 0;
#line 389 "parser.m"
              }
#line 393 "parser.m"
            else
#line 429 "parser.m"
              {
#line 429 "parser.m"
                MR_String mercury__parser__Op_23;
#line 429 "parser.m"
                MR_Integer mercury__parser__BinOpPriority_26;
#line 429 "parser.m"
                MR_Word mercury__parser__RightAssoc_27;
#line 429 "parser.m"
                MR_Word mercury__parser__RightRightAssoc_28;
#line 429 "parser.m"
                MR_Word mercury__parser__STATE_VARIABLE_PS_62_62;
#line 395 "parser.m"
                MR_Box mercury__parser__OpTable_25;
#line 395 "parser.m"
                MR_Word mercury__parser__NextToken_29;
#line 395 "parser.m"
                MR_Word mercury__parser__V_63_63;
#line 395 "parser.m"
                MR_Word mercury__parser__V_136_136;
#line 396 "parser.m"
                MR_Word mercury__parser__V_61_61;
#line 396 "parser.m"
                MR_Word mercury__parser__V_135_135;
#line 396 "parser.m"
                MR_Word mercury__parser__V_24_24;

#line 395 "parser.m"
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_12)) == (MR_mktag((MR_Integer) 1)));
#line 395 "parser.m"
                if (mercury__parser__succeeded)
#line 395 "parser.m"
                  {
#line 395 "parser.m"
                    mercury__parser__Op_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_12, (MR_Integer) 0)));
#line 396 "parser.m"
                    mercury__parser__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 396 "parser.m"
                    {
#line 396 "parser.m"
                      mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(&mercury__parser__V_135_135, mercury__parser__STATE_VARIABLE_PS_46_46, &mercury__parser__V_24_24);
                    }
#line 396 "parser.m"
                    if (mercury__parser__succeeded)
#line 396 "parser.m"
                      {
#line 396 "parser.m"
                        mercury__parser__succeeded = mercury__lexer____Unify____token_0_0(mercury__parser__V_61_61, mercury__parser__V_135_135);
                      }
#line 396 "parser.m"
                    mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 395 "parser.m"
                    if (mercury__parser__succeeded)
#line 395 "parser.m"
                      {
#line 397 "parser.m"
                        {
#line 397 "parser.m"
                          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_p_0(mercury__parser__TypeClassInfo_for_op_table_107, mercury__parser__STATE_VARIABLE_PS_46_46, &mercury__parser__OpTable_25);
                        }
#line 398 "parser.m"
                        {
#line 398 "parser.m"
                          mercury__parser__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__parser__TypeClassInfo_for_op_table_107, mercury__parser__OpTable_25, mercury__parser__Op_23, &mercury__parser__BinOpPriority_26, &mercury__parser__RightAssoc_27, &mercury__parser__RightRightAssoc_28);
                        }
#line 395 "parser.m"
                        if (mercury__parser__succeeded)
#line 395 "parser.m"
                          {
#line 400 "parser.m"
                            mercury__parser__succeeded = (mercury__parser__BinOpPriority_26 <= mercury__parser__MaxPriority_7);
#line 395 "parser.m"
                            if (mercury__parser__succeeded)
#line 395 "parser.m"
                              {
#line 401 "parser.m"
                                {
#line 401 "parser.m"
                                  mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(&mercury__parser__NextToken_29, mercury__parser__STATE_VARIABLE_PS_46_46, &mercury__parser__STATE_VARIABLE_PS_62_62);
                                }
#line 395 "parser.m"
                                if (mercury__parser__succeeded)
#line 395 "parser.m"
                                  {
#line 402 "parser.m"
                                    mercury__parser__V_63_63 = (MR_Integer) 1;
#line 402 "parser.m"
                                    {
#line 402 "parser.m"
                                      mercury__parser__could_start_term_2_p_0(mercury__parser__NextToken_29, &mercury__parser__V_136_136);
                                    }
#line 402 "parser.m"
                                    mercury__parser__succeeded = (mercury__parser__V_63_63 == mercury__parser__V_136_136);
#line 395 "parser.m"
                                  }
#line 395 "parser.m"
                              }
#line 395 "parser.m"
                          }
#line 395 "parser.m"
                      }
#line 395 "parser.m"
                  }
#line 429 "parser.m"
                if (mercury__parser__succeeded)
#line 405 "parser.m"
                  {
#line 405 "parser.m"
                    MR_Integer mercury__parser__RightPriority_30;
#line 405 "parser.m"
                    MR_Integer mercury__parser__RightRightPriority_31;
#line 405 "parser.m"
                    MR_Word mercury__parser__RightResult_32;
#line 405 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_PS_64_64;

#line 34 "ops.opt"
                    if ((mercury__parser__RightAssoc_27 == (MR_Integer) 0))
#line 35 "ops.opt"
                      {
#line 36 "ops.opt"
                        mercury__parser__RightPriority_30 = (mercury__parser__BinOpPriority_26 - (MR_Integer) 1);
#line 35 "ops.opt"
                      }
#line 34 "ops.opt"
                    else
#line 34 "ops.opt"
                      mercury__parser__RightPriority_30 = mercury__parser__BinOpPriority_26;
#line 34 "ops.opt"
                    if ((mercury__parser__RightRightAssoc_28 == (MR_Integer) 0))
#line 35 "ops.opt"
                      {
#line 36 "ops.opt"
                        mercury__parser__RightRightPriority_31 = (mercury__parser__BinOpPriority_26 - (MR_Integer) 1);
#line 35 "ops.opt"
                      }
#line 34 "ops.opt"
                    else
#line 34 "ops.opt"
                      mercury__parser__RightRightPriority_31 = mercury__parser__BinOpPriority_26;
#line 408 "parser.m"
                    *mercury__parser__OpPriority_9 = mercury__parser__BinOpPriority_26;
#line 409 "parser.m"
                    {
#line 409 "parser.m"
                      mercury__parser__parse_term_2_5_p_0(mercury__parser__TypeInfo_for_T_108, mercury__parser__TypeClassInfo_for_op_table_107, mercury__parser__RightPriority_30, mercury__parser__TermKind_8, &mercury__parser__RightResult_32, mercury__parser__STATE_VARIABLE_PS_62_62, &mercury__parser__STATE_VARIABLE_PS_64_64);
                    }
#line 424 "parser.m"
                    if (((MR_tag((MR_Word) mercury__parser__RightResult_32)) == (MR_mktag((MR_Integer) 1))))
#line 425 "parser.m"
                      {
#line 427 "parser.m"
                        *mercury__parser__Term_10 = mercury__parser__RightResult_32;
#line 425 "parser.m"
                        *mercury__parser__STATE_VARIABLE_PS_45 = mercury__parser__STATE_VARIABLE_PS_64_64;
#line 425 "parser.m"
                      }
#line 424 "parser.m"
                    else
#line 411 "parser.m"
                      {
#line 411 "parser.m"
                        MR_Word mercury__parser__RightTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightResult_32, (MR_Integer) 0)));
#line 411 "parser.m"
                        MR_Word mercury__parser__RightRightResult_34;

#line 412 "parser.m"
                        {
#line 412 "parser.m"
                          mercury__parser__parse_term_2_5_p_0(mercury__parser__TypeInfo_for_T_108, mercury__parser__TypeClassInfo_for_op_table_107, mercury__parser__RightRightPriority_31, mercury__parser__TermKind_8, &mercury__parser__RightRightResult_34, mercury__parser__STATE_VARIABLE_PS_64_64, mercury__parser__STATE_VARIABLE_PS_45);
                        }
#line 419 "parser.m"
                        if (((MR_tag((MR_Word) mercury__parser__RightRightResult_34)) == (MR_mktag((MR_Integer) 1))))
#line 422 "parser.m"
                          *mercury__parser__Term_10 = mercury__parser__RightRightResult_34;
#line 419 "parser.m"
                        else
#line 415 "parser.m"
                          {
#line 415 "parser.m"
                            MR_Word mercury__parser__RightRightTerm_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightRightResult_34, (MR_Integer) 0)));
#line 415 "parser.m"
                            MR_Word mercury__parser__V_66_66;
#line 415 "parser.m"
                            MR_Word mercury__parser__V_67_67;
#line 415 "parser.m"
                            MR_Word mercury__parser__V_68_68;
#line 415 "parser.m"
                            MR_Word mercury__parser__V_69_69;
#line 415 "parser.m"
                            MR_Word mercury__parser__V_70_70;
#line 415 "parser.m"
                            MR_Word mercury__parser__TermContext_82;

#line 416 "parser.m"
                            {
#line 416 "parser.m"
                              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*mercury__parser__STATE_VARIABLE_PS_45, mercury__parser__Context_13, &mercury__parser__TermContext_82);
                            }
#line 417 "parser.m"
                            {
#line 417 "parser.m"
                              mercury__parser__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 417 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_67_67, 0) = ((MR_Box) (mercury__parser__Op_23));
#line 417 "parser.m"
                            }
#line 418 "parser.m"
                            mercury__parser__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 418 "parser.m"
                            {
#line 418 "parser.m"
                              mercury__parser__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_69_69, 0) = ((MR_Box) (mercury__parser__RightRightTerm_35));
#line 418 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_69_69, 1) = ((MR_Box) (mercury__parser__V_70_70));
#line 418 "parser.m"
                            }
#line 418 "parser.m"
                            {
#line 418 "parser.m"
                              mercury__parser__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_68_68, 0) = ((MR_Box) (mercury__parser__RightTerm_33));
#line 418 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_68_68, 1) = ((MR_Box) (mercury__parser__V_69_69));
#line 418 "parser.m"
                            }
#line 417 "parser.m"
                            {
#line 417 "parser.m"
                              mercury__parser__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 417 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_66_66, 0) = ((MR_Box) (mercury__parser__V_67_67));
#line 417 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_66_66, 1) = ((MR_Box) (mercury__parser__V_68_68));
#line 417 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_66_66, 2) = ((MR_Box) (mercury__parser__TermContext_82));
#line 417 "parser.m"
                            }
#line 417 "parser.m"
                            {
#line 417 "parser.m"
                              MR_Word base;
#line 417 "parser.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 417 "parser.m"
                              *mercury__parser__Term_10 = base;
#line 417 "parser.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_66_66));
#line 417 "parser.m"
                            }
#line 415 "parser.m"
                          }
#line 411 "parser.m"
                      }
#line 405 "parser.m"
                  }
#line 429 "parser.m"
                else
#line 453 "parser.m"
                  {
#line 453 "parser.m"
                    MR_Integer mercury__parser__UnOpPriority_41;
#line 453 "parser.m"
                    MR_Word mercury__parser__STATE_VARIABLE_PS_72_72;
#line 453 "parser.m"
                    MR_String mercury__parser__Op_98;
#line 453 "parser.m"
                    MR_Word mercury__parser__RightAssoc_100;
#line 431 "parser.m"
                    MR_Word mercury__parser__V_73_73;
#line 431 "parser.m"
                    MR_Box mercury__parser__OpTable_87;
#line 431 "parser.m"
                    MR_Word mercury__parser__NextToken_88;
#line 431 "parser.m"
                    MR_Word mercury__parser__V_138_138;
#line 432 "parser.m"
                    MR_Word mercury__parser__V_71_71;
#line 432 "parser.m"
                    MR_Word mercury__parser__V_137_137;
#line 432 "parser.m"
                    MR_Word mercury__parser__V_40_40;

#line 431 "parser.m"
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_12)) == (MR_mktag((MR_Integer) 1)));
#line 431 "parser.m"
                    if (mercury__parser__succeeded)
#line 431 "parser.m"
                      {
#line 431 "parser.m"
                        mercury__parser__Op_98 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_12, (MR_Integer) 0)));
#line 432 "parser.m"
                        mercury__parser__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 432 "parser.m"
                        {
#line 432 "parser.m"
                          mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(&mercury__parser__V_137_137, mercury__parser__STATE_VARIABLE_PS_46_46, &mercury__parser__V_40_40);
                        }
#line 432 "parser.m"
                        if (mercury__parser__succeeded)
#line 432 "parser.m"
                          {
#line 432 "parser.m"
                            mercury__parser__succeeded = mercury__lexer____Unify____token_0_0(mercury__parser__V_71_71, mercury__parser__V_137_137);
                          }
#line 432 "parser.m"
                        mercury__parser__succeeded = !(mercury__parser__succeeded);
#line 431 "parser.m"
                        if (mercury__parser__succeeded)
#line 431 "parser.m"
                          {
#line 433 "parser.m"
                            {
#line 433 "parser.m"
                              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_111_112_115_95_116_97_98_108_101_95_95_91_49_93_95_48_2_p_0(mercury__parser__TypeClassInfo_for_op_table_107, mercury__parser__STATE_VARIABLE_PS_46_46, &mercury__parser__OpTable_87);
                            }
#line 434 "parser.m"
                            {
#line 434 "parser.m"
                              mercury__parser__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__parser__TypeClassInfo_for_op_table_107, mercury__parser__OpTable_87, mercury__parser__Op_98, &mercury__parser__UnOpPriority_41, &mercury__parser__RightAssoc_100);
                            }
#line 431 "parser.m"
                            if (mercury__parser__succeeded)
#line 431 "parser.m"
                              {
#line 435 "parser.m"
                                mercury__parser__succeeded = (mercury__parser__UnOpPriority_41 <= mercury__parser__MaxPriority_7);
#line 431 "parser.m"
                                if (mercury__parser__succeeded)
#line 431 "parser.m"
                                  {
#line 436 "parser.m"
                                    {
#line 436 "parser.m"
                                      mercury__parser__succeeded = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_112_101_101_107_95_116_111_107_101_110_95_95_91_49_44_32_50_93_95_48_3_p_0(&mercury__parser__NextToken_88, mercury__parser__STATE_VARIABLE_PS_46_46, &mercury__parser__STATE_VARIABLE_PS_72_72);
                                    }
#line 431 "parser.m"
                                    if (mercury__parser__succeeded)
#line 431 "parser.m"
                                      {
#line 437 "parser.m"
                                        mercury__parser__V_73_73 = (MR_Integer) 1;
#line 437 "parser.m"
                                        {
#line 437 "parser.m"
                                          mercury__parser__could_start_term_2_p_0(mercury__parser__NextToken_88, &mercury__parser__V_138_138);
                                        }
#line 437 "parser.m"
                                        mercury__parser__succeeded = (mercury__parser__V_73_73 == mercury__parser__V_138_138);
#line 431 "parser.m"
                                      }
#line 431 "parser.m"
                                  }
#line 431 "parser.m"
                              }
#line 431 "parser.m"
                          }
#line 431 "parser.m"
                      }
#line 453 "parser.m"
                    if (mercury__parser__succeeded)
#line 440 "parser.m"
                      {
#line 440 "parser.m"
                        MR_Integer mercury__parser__RightPriority_94;
#line 440 "parser.m"
                        MR_Word mercury__parser__RightResult_95;

#line 34 "ops.opt"
                        if ((mercury__parser__RightAssoc_100 == (MR_Integer) 0))
#line 35 "ops.opt"
                          {
#line 36 "ops.opt"
                            mercury__parser__RightPriority_94 = (mercury__parser__UnOpPriority_41 - (MR_Integer) 1);
#line 35 "ops.opt"
                          }
#line 34 "ops.opt"
                        else
#line 34 "ops.opt"
                          mercury__parser__RightPriority_94 = mercury__parser__UnOpPriority_41;
#line 441 "parser.m"
                        {
#line 441 "parser.m"
                          mercury__parser__parse_term_2_5_p_0(mercury__parser__TypeInfo_for_T_108, mercury__parser__TypeClassInfo_for_op_table_107, mercury__parser__RightPriority_94, mercury__parser__TermKind_8, &mercury__parser__RightResult_95, mercury__parser__STATE_VARIABLE_PS_72_72, mercury__parser__STATE_VARIABLE_PS_45);
                        }
#line 442 "parser.m"
                        *mercury__parser__OpPriority_9 = mercury__parser__UnOpPriority_41;
#line 448 "parser.m"
                        if (((MR_tag((MR_Word) mercury__parser__RightResult_95)) == (MR_mktag((MR_Integer) 1))))
#line 451 "parser.m"
                          *mercury__parser__Term_10 = mercury__parser__RightResult_95;
#line 448 "parser.m"
                        else
#line 444 "parser.m"
                          {
#line 444 "parser.m"
                            MR_Word mercury__parser__V_75_75;
#line 444 "parser.m"
                            MR_Word mercury__parser__V_76_76;
#line 444 "parser.m"
                            MR_Word mercury__parser__V_77_77;
#line 444 "parser.m"
                            MR_Word mercury__parser__V_78_78;
#line 444 "parser.m"
                            MR_Word mercury__parser__TermContext_89;
#line 444 "parser.m"
                            MR_Word mercury__parser__RightTerm_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightResult_95, (MR_Integer) 0)));

#line 445 "parser.m"
                            {
#line 445 "parser.m"
                              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*mercury__parser__STATE_VARIABLE_PS_45, mercury__parser__Context_13, &mercury__parser__TermContext_89);
                            }
#line 446 "parser.m"
                            {
#line 446 "parser.m"
                              mercury__parser__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 446 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_76_76, 0) = ((MR_Box) (mercury__parser__Op_98));
#line 446 "parser.m"
                            }
#line 446 "parser.m"
                            mercury__parser__V_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 446 "parser.m"
                            {
#line 446 "parser.m"
                              mercury__parser__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_77_77, 0) = ((MR_Box) (mercury__parser__RightTerm_90));
#line 446 "parser.m"
                              MR_hl_field(MR_mktag(1), mercury__parser__V_77_77, 1) = ((MR_Box) (mercury__parser__V_78_78));
#line 446 "parser.m"
                            }
#line 446 "parser.m"
                            {
#line 446 "parser.m"
                              mercury__parser__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 446 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_75_75, 0) = ((MR_Box) (mercury__parser__V_76_76));
#line 446 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_75_75, 1) = ((MR_Box) (mercury__parser__V_77_77));
#line 446 "parser.m"
                              MR_hl_field(MR_mktag(0), mercury__parser__V_75_75, 2) = ((MR_Box) (mercury__parser__TermContext_89));
#line 446 "parser.m"
                            }
#line 446 "parser.m"
                            {
#line 446 "parser.m"
                              MR_Word base;
#line 446 "parser.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 446 "parser.m"
                              *mercury__parser__Term_10 = base;
#line 446 "parser.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__V_75_75));
#line 446 "parser.m"
                            }
#line 444 "parser.m"
                          }
#line 440 "parser.m"
                      }
#line 453 "parser.m"
                    else
#line 454 "parser.m"
                      {
#line 454 "parser.m"
                        {
#line 454 "parser.m"
                          mercury__parser__parse_simple_term_6_p_0(mercury__parser__TypeInfo_for_T_108, mercury__parser__TypeClassInfo_for_op_table_107, mercury__parser__Token_12, mercury__parser__Context_13, mercury__parser__MaxPriority_7, mercury__parser__Term_10, mercury__parser__STATE_VARIABLE_PS_46_46, mercury__parser__STATE_VARIABLE_PS_45);
                        }
#line 455 "parser.m"
                        *mercury__parser__OpPriority_9 = (MR_Integer) 0;
#line 454 "parser.m"
                      }
#line 453 "parser.m"
                  }
#line 429 "parser.m"
              }
#line 393 "parser.m"
          }
#line 384 "parser.m"
      }
#line 457 "parser.m"
    else
#line 458 "parser.m"
      {
#line 458 "parser.m"
        {
#line 458 "parser.m"
          *mercury__parser__Term_10 = mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_101_114_114_111_114_95_95_91_49_44_32_50_44_32_51_93_95_48_2_f_0(mercury__parser__STATE_VARIABLE_PS_0_44, (MR_String) "unexpected end-of-file at start of sub-term");
        }
#line 459 "parser.m"
        *mercury__parser__OpPriority_9 = (MR_Integer) 0;
#line 458 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_45 = mercury__parser__STATE_VARIABLE_PS_0_44;
#line 458 "parser.m"
      }
#line 457 "parser.m"
  }
#line 363 "parser.m"
}

#line 349 "parser.m"
static void MR_CALL 
mercury__parser__parse_term_2_5_p_0(
#line 349 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_20,
#line 349 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_19,
#line 349 "parser.m"
  MR_Integer mercury__parser__MaxPriority_6,
#line 349 "parser.m"
  MR_Word mercury__parser__TermKind_7,
#line 349 "parser.m"
  MR_Word * mercury__parser__Term_8,
#line 349 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_15,
#line 349 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_16)
#line 349 "parser.m"
{
#line 352 "parser.m"
  {
#line 352 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 352 "parser.m"
    MR_Integer mercury__parser__LeftPriority_10;
#line 352 "parser.m"
    MR_Word mercury__parser__LeftTerm0_11;
#line 352 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_17_17;

#line 353 "parser.m"
    {
#line 353 "parser.m"
      mercury__parser__parse_left_term_6_p_0(mercury__parser__TypeInfo_for_T_20, mercury__parser__TypeClassInfo_for_op_table_19, mercury__parser__MaxPriority_6, mercury__parser__TermKind_7, &mercury__parser__LeftPriority_10, &mercury__parser__LeftTerm0_11, mercury__parser__STATE_VARIABLE_PS_0_15, &mercury__parser__STATE_VARIABLE_PS_17_17);
    }
#line 357 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__LeftTerm0_11)) == (MR_mktag((MR_Integer) 1))))
#line 358 "parser.m"
      {
#line 360 "parser.m"
        *mercury__parser__Term_8 = mercury__parser__LeftTerm0_11;
#line 358 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_16 = mercury__parser__STATE_VARIABLE_PS_17_17;
#line 358 "parser.m"
      }
#line 357 "parser.m"
    else
#line 355 "parser.m"
      {
#line 355 "parser.m"
        MR_Word mercury__parser__LeftTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__LeftTerm0_11, (MR_Integer) 0)));

#line 356 "parser.m"
        {
#line 356 "parser.m"
          mercury__parser__parse_rest_7_p_0(mercury__parser__TypeInfo_for_T_20, mercury__parser__TypeClassInfo_for_op_table_19, mercury__parser__MaxPriority_6, mercury__parser__TermKind_7, mercury__parser__LeftPriority_10, mercury__parser__LeftTerm_12, mercury__parser__Term_8, mercury__parser__STATE_VARIABLE_PS_17_17, mercury__parser__STATE_VARIABLE_PS_16);
#line 356 "parser.m"
          return;
        }
#line 355 "parser.m"
      }
#line 352 "parser.m"
  }
#line 349 "parser.m"
}

#line 324 "parser.m"
static void MR_CALL 
mercury__parser__parse_arg_3_p_0(
#line 324 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_15,
#line 324 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_14,
#line 324 "parser.m"
  MR_Word * mercury__parser__Term_4,
#line 324 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_8,
#line 324 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_9)
#line 324 "parser.m"
{
#line 327 "parser.m"
  {
#line 327 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 327 "parser.m"
    MR_Box mercury__parser__OpTable_6;
#line 327 "parser.m"
    MR_Integer mercury__parser__ArgPriority_7;
#line 327 "parser.m"
    MR_Integer mercury__parser__V_10_10;
#line 133 "private_builtin.opt"
    MR_Word mercury__parser__TypeInfo_8_19;
#line 931 "parser.m"
    MR_String mercury__parser__V_21_21;
#line 931 "parser.m"
    MR_Word mercury__parser__V_22_22;
#line 931 "parser.m"
    MR_Word mercury__parser__V_23_23;
#line 931 "parser.m"
    MR_Word mercury__parser__V_24_24;
#line 8286 "parser.c"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
#line 8288 "parser.c"
    MR_Box mercury__parser__conv1_V_10_10;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__parse_arg_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_14 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8306 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_8_19  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 931 "parser.m"
    mercury__parser__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_8, (MR_Integer) 0)));
#line 931 "parser.m"
    mercury__parser__OpTable_6 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_8, (MR_Integer) 1));
#line 931 "parser.m"
    mercury__parser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_8, (MR_Integer) 2)));
#line 931 "parser.m"
    mercury__parser__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_8, (MR_Integer) 3)));
#line 931 "parser.m"
    mercury__parser__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_8, (MR_Integer) 4)));
#line 8323 "parser.c"
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 8325 "parser.c"
    {
#line 8327 "parser.c"
      mercury__parser__conv1_V_10_10 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_14), mercury__parser__OpTable_6);
    }
#line 8330 "parser.c"
    mercury__parser__V_10_10 = ((MR_Integer) mercury__parser__conv1_V_10_10);
#line 334 "parser.m"
    mercury__parser__ArgPriority_7 = (mercury__parser__V_10_10 + (MR_Integer) 1);
#line 335 "parser.m"
    {
#line 335 "parser.m"
      mercury__parser__parse_term_2_5_p_0(mercury__parser__TypeInfo_for_T_15, mercury__parser__TypeClassInfo_for_op_table_14, mercury__parser__ArgPriority_7, (MR_Integer) 1, mercury__parser__Term_4, mercury__parser__STATE_VARIABLE_PS_0_8, mercury__parser__STATE_VARIABLE_PS_9);
#line 335 "parser.m"
      return;
    }
#line 327 "parser.m"
  }
#line 324 "parser.m"
}

#line 317 "parser.m"
static void MR_CALL 
mercury__parser__parse_term_3_p_0(
#line 317 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_15,
#line 317 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_14,
#line 317 "parser.m"
  MR_Word * mercury__parser__Term_4,
#line 317 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_7,
#line 317 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_8)
#line 317 "parser.m"
{
#line 320 "parser.m"
  {
#line 320 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 320 "parser.m"
    MR_Box mercury__parser__OpTable_6;
#line 320 "parser.m"
    MR_Integer mercury__parser__V_9_9;
#line 320 "parser.m"
    MR_Integer mercury__parser__V_12_12;
#line 133 "private_builtin.opt"
    MR_Word mercury__parser__TypeInfo_8_19;
#line 931 "parser.m"
    MR_String mercury__parser__V_21_21;
#line 931 "parser.m"
    MR_Word mercury__parser__V_22_22;
#line 931 "parser.m"
    MR_Word mercury__parser__V_23_23;
#line 931 "parser.m"
    MR_Word mercury__parser__V_24_24;
#line 8381 "parser.c"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
#line 8383 "parser.c"
    MR_Box mercury__parser__conv1_V_12_12;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parser__parse_term_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_14 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8401 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_8_19  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 931 "parser.m"
    mercury__parser__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 0)));
#line 931 "parser.m"
    mercury__parser__OpTable_6 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 1));
#line 931 "parser.m"
    mercury__parser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 2)));
#line 931 "parser.m"
    mercury__parser__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 3)));
#line 931 "parser.m"
    mercury__parser__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_7, (MR_Integer) 4)));
#line 8418 "parser.c"
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 8420 "parser.c"
    {
#line 8422 "parser.c"
      mercury__parser__conv1_V_12_12 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_14), mercury__parser__OpTable_6);
    }
#line 8425 "parser.c"
    mercury__parser__V_12_12 = ((MR_Integer) mercury__parser__conv1_V_12_12);
#line 322 "parser.m"
    mercury__parser__V_9_9 = (mercury__parser__V_12_12 + (MR_Integer) 1);
#line 322 "parser.m"
    {
#line 322 "parser.m"
      mercury__parser__parse_term_2_5_p_0(mercury__parser__TypeInfo_for_T_15, mercury__parser__TypeClassInfo_for_op_table_14, mercury__parser__V_9_9, (MR_Integer) 0, mercury__parser__Term_4, mercury__parser__STATE_VARIABLE_PS_0_7, mercury__parser__STATE_VARIABLE_PS_8);
#line 322 "parser.m"
      return;
    }
#line 320 "parser.m"
  }
#line 317 "parser.m"
}

#line 299 "parser.m"
void MR_CALL 
mercury__parser__parse_whole_term_3_p_0(
#line 299 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_18,
#line 299 "parser.m"
  MR_Word mercury__parser__TypeClassInfo_for_op_table_17,
#line 299 "parser.m"
  MR_Word * mercury__parser__Term_4,
#line 299 "parser.m"
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_10,
#line 299 "parser.m"
  MR_Word * mercury__parser__STATE_VARIABLE_PS_11)
#line 299 "parser.m"
{
#line 302 "parser.m"
  {
#line 302 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 302 "parser.m"
    MR_Word mercury__parser__Term0_6;
#line 302 "parser.m"
    MR_Word mercury__parser__STATE_VARIABLE_PS_12_12;
#line 302 "parser.m"
    MR_Box mercury__parser__OpTable_27 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 1));
#line 302 "parser.m"
    MR_Integer mercury__parser__V_28_28;
#line 302 "parser.m"
    MR_Integer mercury__parser__V_31_31;
#line 931 "parser.m"
    MR_String mercury__parser__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 0)));
#line 931 "parser.m"
    MR_Word mercury__parser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 2)));
#line 931 "parser.m"
    MR_Word mercury__parser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 3)));
#line 931 "parser.m"
    MR_Word mercury__parser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_10, (MR_Integer) 4)));
#line 8478 "parser.c"
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
#line 8480 "parser.c"
    MR_Box mercury__parser__conv1_V_31_31;

#line 8483 "parser.c"
    {
#line 8485 "parser.c"
      mercury__parser__conv1_V_31_31 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_17), mercury__parser__OpTable_27);
    }
#line 8488 "parser.c"
    mercury__parser__V_31_31 = ((MR_Integer) mercury__parser__conv1_V_31_31);
#line 322 "parser.m"
    mercury__parser__V_28_28 = (mercury__parser__V_31_31 + (MR_Integer) 1);
#line 322 "parser.m"
    {
#line 322 "parser.m"
      mercury__parser__parse_term_2_5_p_0(mercury__parser__TypeInfo_for_T_18, mercury__parser__TypeClassInfo_for_op_table_17, mercury__parser__V_28_28, (MR_Integer) 0, &mercury__parser__Term0_6, mercury__parser__STATE_VARIABLE_PS_0_10, &mercury__parser__STATE_VARIABLE_PS_12_12);
    }
#line 311 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__Term0_6)) == (MR_mktag((MR_Integer) 1))))
#line 313 "parser.m"
      {
#line 314 "parser.m"
        *mercury__parser__Term_4 = mercury__parser__Term0_6;
#line 313 "parser.m"
        *mercury__parser__STATE_VARIABLE_PS_11 = mercury__parser__STATE_VARIABLE_PS_12_12;
#line 313 "parser.m"
      }
#line 311 "parser.m"
    else
#line 308 "parser.m"
      {
#line 308 "parser.m"
        MR_Word mercury__parser__STATE_VARIABLE_PS_14_14;
#line 306 "parser.m"
        MR_Word mercury__parser__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 306 "parser.m"
        MR_Word mercury__parser__Tokens0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, (MR_Integer) 3)));
#line 306 "parser.m"
        MR_Word mercury__parser__Tokens_53;
#line 306 "parser.m"
        MR_Word mercury__parser__V_54_54;
#line 933 "parser.m"
        MR_String mercury__parser__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, (MR_Integer) 0)));
#line 933 "parser.m"
        MR_Box mercury__parser__V_58_58 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, (MR_Integer) 1));
#line 933 "parser.m"
        MR_Word mercury__parser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, (MR_Integer) 2)));
#line 933 "parser.m"
        MR_Word mercury__parser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, (MR_Integer) 4)));
#line 1061 "parser.m"
        MR_Integer mercury__parser___Context_46;
#line 938 "parser.m"
        MR_String mercury__parser__V_63_63;
#line 938 "parser.m"
        MR_Box mercury__parser__V_64_64;
#line 938 "parser.m"
        MR_Word mercury__parser__V_65_65;
#line 938 "parser.m"
        MR_Word mercury__parser__V_67_67;
#line 938 "parser.m"
        MR_Word mercury__parser__V_66_66;

#line 1061 "parser.m"
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Tokens0_52)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "parser.m"
        if (mercury__parser__succeeded)
#line 1061 "parser.m"
          {
#line 1061 "parser.m"
            mercury__parser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_52, (MR_Integer) 0)));
#line 1061 "parser.m"
            mercury__parser___Context_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_52, (MR_Integer) 1)));
#line 1061 "parser.m"
            mercury__parser__Tokens_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens0_52, (MR_Integer) 2)));
#line 1061 "parser.m"
            {
#line 1061 "parser.m"
              mercury__parser__succeeded = mercury__lexer____Unify____token_0_0(mercury__parser__V_13_13, mercury__parser__V_54_54);
            }
#line 306 "parser.m"
            if (mercury__parser__succeeded)
#line 306 "parser.m"
              {
#line 938 "parser.m"
                mercury__parser__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, (MR_Integer) 0)));
#line 938 "parser.m"
                mercury__parser__V_64_64 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, (MR_Integer) 1));
#line 938 "parser.m"
                mercury__parser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, (MR_Integer) 2)));
#line 938 "parser.m"
                mercury__parser__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, (MR_Integer) 3)));
#line 938 "parser.m"
                mercury__parser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_12_12, (MR_Integer) 4)));
#line 938 "parser.m"
                {
#line 938 "parser.m"
                  mercury__parser__STATE_VARIABLE_PS_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 938 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_14_14, 0) = ((MR_Box) (mercury__parser__V_63_63));
#line 938 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_14_14, 1) = mercury__parser__V_64_64;
#line 938 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_14_14, 2) = ((MR_Box) (mercury__parser__V_65_65));
#line 938 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_14_14, 3) = ((MR_Box) (mercury__parser__Tokens_53));
#line 938 "parser.m"
                  MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_14_14, 4) = ((MR_Box) (mercury__parser__V_67_67));
#line 938 "parser.m"
                }
#line 938 "parser.m"
                mercury__parser__succeeded = MR_TRUE;
#line 306 "parser.m"
              }
#line 1061 "parser.m"
          }
#line 308 "parser.m"
        if (mercury__parser__succeeded)
#line 307 "parser.m"
          {
#line 307 "parser.m"
            *mercury__parser__STATE_VARIABLE_PS_11 = mercury__parser__STATE_VARIABLE_PS_14_14;
#line 307 "parser.m"
            *mercury__parser__Term_4 = mercury__parser__Term0_6;
#line 307 "parser.m"
          }
#line 308 "parser.m"
        else
#line 309 "parser.m"
          {
#line 309 "parser.m"
            MR_Word mercury__parser__conv2_Term_4;

#line 309 "parser.m"
            {
#line 309 "parser.m"
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__parser__TypeClassInfo_for_op_table_17, (MR_String) "operator or \140.\' expected", &mercury__parser__conv2_Term_4, mercury__parser__STATE_VARIABLE_PS_12_12, mercury__parser__STATE_VARIABLE_PS_11);
            }
#line 309 "parser.m"
            *mercury__parser__Term_4 = (MR_Word) mercury__parser__conv2_Term_4;
#line 309 "parser.m"
          }
#line 308 "parser.m"
      }
#line 302 "parser.m"
  }
#line 299 "parser.m"
}

#line 252 "parser.m"
static MR_bool MR_CALL 
mercury__parser__check_for_bad_token_3_p_0(
#line 252 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 252 "parser.m"
  MR_String * mercury__parser__Message_2,
#line 252 "parser.m"
  MR_Integer * mercury__parser__LineNum_3)
#line 252 "parser.m"
{
#line 8639 "parser.c"
  while (MR_TRUE)
#line 8641 "parser.c"
    {
#line 8643 "parser.c"
      /* tailcall optimized into a loop */
#line 8645 "parser.c"
      {
#line 8647 "parser.c"
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 8649 "parser.c"
        MR_Word mercury__parser__Token_4;
#line 8651 "parser.c"
        MR_Integer mercury__parser__LineNum0_5;
#line 8653 "parser.c"
        MR_Word mercury__parser__Tokens_6;

#line 8656 "parser.c"
        if (mercury__parser__succeeded)
#line 8658 "parser.c"
          {
#line 8660 "parser.c"
            mercury__parser__Token_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 8662 "parser.c"
            mercury__parser__LineNum0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
#line 8664 "parser.c"
            mercury__parser__Tokens_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 2)));
#line 261 "parser.m"
            if (((((MR_tag((MR_Word) mercury__parser__Token_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 270 "parser.m"
              {
#line 270 "parser.m"
                MR_String mercury__parser__ErrorMessage_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));

#line 271 "parser.m"
                {
#line 271 "parser.m"
                  mercury__string__append_3_p_2((MR_String) "Syntax error: ", mercury__parser__ErrorMessage_15, mercury__parser__Message_2);
                }
#line 272 "parser.m"
                *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
#line 270 "parser.m"
                mercury__parser__succeeded = MR_TRUE;
#line 270 "parser.m"
              }
#line 261 "parser.m"
            else
#line 261 "parser.m"
              if (((((MR_tag((MR_Word) mercury__parser__Token_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 257 "parser.m"
                {
#line 257 "parser.m"
                  MR_Word mercury__parser__IO_Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));
#line 257 "parser.m"
                  MR_String mercury__parser__IO_ErrorMessage_10 = (MR_String) mercury__parser__IO_Error_9;

#line 259 "parser.m"
                  {
#line 259 "parser.m"
                    mercury__string__append_3_p_2((MR_String) "I/O error: ", mercury__parser__IO_ErrorMessage_10, mercury__parser__Message_2);
                  }
#line 260 "parser.m"
                  *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
#line 257 "parser.m"
                  mercury__parser__succeeded = MR_TRUE;
#line 257 "parser.m"
                }
#line 261 "parser.m"
              else
#line 261 "parser.m"
                if (((((MR_tag((MR_Word) mercury__parser__Token_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 262 "parser.m"
                  {
#line 262 "parser.m"
                    MR_Char mercury__parser__Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));
#line 262 "parser.m"
                    MR_Integer mercury__parser__Code_12;
#line 262 "parser.m"
                    MR_String mercury__parser__Decimal_13;
#line 262 "parser.m"
                    MR_String mercury__parser__Hex_14;
#line 262 "parser.m"
                    MR_Word mercury__parser__V_27_27;
#line 262 "parser.m"
                    MR_Word mercury__parser__V_29_29;
#line 262 "parser.m"
                    MR_Word mercury__parser__V_30_30;
#line 262 "parser.m"
                    MR_Word mercury__parser__V_32_32;
#line 262 "parser.m"
                    MR_Word mercury__parser__V_33_33;
#line 262 "parser.m"
                    MR_Word mercury__parser__V_35_35;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__parser__check_for_bad_token_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__parser__Char_11 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8746 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Code_12  = Int;
#line 66 "char.opt"
}
#line 264 "parser.m"
                    {
#line 264 "parser.m"
                      mercury__string__int_to_base_string_3_p_0(mercury__parser__Code_12, (MR_Integer) 10, &mercury__parser__Decimal_13);
                    }
#line 265 "parser.m"
                    {
#line 265 "parser.m"
                      mercury__string__int_to_base_string_3_p_0(mercury__parser__Code_12, (MR_Integer) 16, &mercury__parser__Hex_14);
                    }
#line 267 "parser.m"
                    mercury__parser__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "parser.m"
                    mercury__parser__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__parser_scalar_common_1[1]);
#line 267 "parser.m"
                    {
#line 267 "parser.m"
                      mercury__parser__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_32_32, 0) = ((MR_Box) (mercury__parser__Decimal_13));
#line 267 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_32_32, 1) = ((MR_Box) (mercury__parser__V_33_33));
#line 267 "parser.m"
                    }
#line 267 "parser.m"
                    {
#line 267 "parser.m"
                      mercury__parser__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_30_30, 0) = ((MR_Box) ((MR_String) " ("));
#line 267 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_30_30, 1) = ((MR_Box) (mercury__parser__V_32_32));
#line 267 "parser.m"
                    }
#line 266 "parser.m"
                    {
#line 266 "parser.m"
                      mercury__parser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_29_29, 0) = ((MR_Box) (mercury__parser__Hex_14));
#line 266 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_29_29, 1) = ((MR_Box) (mercury__parser__V_30_30));
#line 266 "parser.m"
                    }
#line 266 "parser.m"
                    {
#line 266 "parser.m"
                      mercury__parser__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_27_27, 0) = ((MR_Box) ((MR_String) "Syntax error: Illegal character 0x"));
#line 266 "parser.m"
                      MR_hl_field(MR_mktag(1), mercury__parser__V_27_27, 1) = ((MR_Box) (mercury__parser__V_29_29));
#line 266 "parser.m"
                    }
#line 410 "string.opt"
                    {
#line 410 "string.opt"
                      *mercury__parser__Message_2 = mercury__string__append_list_1_f_0(mercury__parser__V_27_27);
                    }
#line 268 "parser.m"
                    *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
#line 262 "parser.m"
                    mercury__parser__succeeded = MR_TRUE;
#line 262 "parser.m"
                  }
#line 261 "parser.m"
                else
#line 294 "parser.m"
                  {
#line 294 "parser.m"
                    /* direct tailcall eliminated */
#line 294 "parser.m"
                    {
#line 294 "parser.m"
                      MR_Word mercury__parser__HeadVar__1__tmp_copy_1 = mercury__parser__Tokens_6;

#line 294 "parser.m"
                      mercury__parser__HeadVar__1_1 = mercury__parser__HeadVar__1__tmp_copy_1;
#line 294 "parser.m"
                    }
#line 294 "parser.m"
                    continue;
#line 294 "parser.m"
                  }
#line 8837 "parser.c"
          }
#line 8839 "parser.c"
        return mercury__parser__succeeded;
#line 8841 "parser.c"
      }
#line 8843 "parser.c"
      break;
#line 8845 "parser.c"
    }
#line 252 "parser.m"
}

#line 208 "parser.m"
void MR_CALL 
mercury__parser__check_for_errors_5_p_0(
#line 208 "parser.m"
  MR_Word mercury__parser__TypeInfo_for_T_43,
#line 208 "parser.m"
  MR_Word mercury__parser__HeadVar__1_1,
#line 208 "parser.m"
  MR_Word mercury__parser__HeadVar__2_2,
#line 208 "parser.m"
  MR_Word mercury__parser__Tokens_3,
#line 208 "parser.m"
  MR_Word mercury__parser__HeadVar__4_4,
#line 208 "parser.m"
  MR_Word * mercury__parser__Result_5)
#line 208 "parser.m"
{
#line 212 "parser.m"
  {
#line 212 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 212 "parser.m"
    if (((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 212 "parser.m"
      {
#line 212 "parser.m"
        MR_String mercury__parser__ErrorMessage_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 212 "parser.m"
        MR_Word mercury__parser__ErrorTokens_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
#line 212 "parser.m"
        MR_String mercury__parser__Message_14;
#line 212 "parser.m"
        MR_Integer mercury__parser__LineNum_15;
#line 217 "parser.m"
        MR_String mercury__parser__BadTokenMessage_12;
#line 217 "parser.m"
        MR_Integer mercury__parser__BadTokenLineNum_13;

#line 214 "parser.m"
        {
#line 214 "parser.m"
          mercury__parser__succeeded = mercury__parser__check_for_bad_token_3_p_0(mercury__parser__Tokens_3, &mercury__parser__BadTokenMessage_12, &mercury__parser__BadTokenLineNum_13);
        }
#line 217 "parser.m"
        if (mercury__parser__succeeded)
#line 215 "parser.m"
          {
#line 215 "parser.m"
            mercury__parser__Message_14 = mercury__parser__BadTokenMessage_12;
#line 216 "parser.m"
            mercury__parser__LineNum_15 = mercury__parser__BadTokenLineNum_13;
#line 215 "parser.m"
          }
#line 217 "parser.m"
        else
#line 224 "parser.m"
          if ((mercury__parser__ErrorTokens_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "parser.m"
            {
#line 228 "parser.m"
              if ((mercury__parser__Tokens_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "parser.m"
                {
#line 230 "parser.m"
                  {
#line 230 "parser.m"
                    mercury__require__error_1_p_0((MR_String) "check_for_errors");
#line 230 "parser.m"
                    return;
                  }
#line 229 "parser.m"
                }
#line 228 "parser.m"
              else
#line 227 "parser.m"
                {
#line 227 "parser.m"
                  MR_Word mercury__parser__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_3, (MR_Integer) 0)));
#line 227 "parser.m"
                  MR_Word mercury__parser__V_21_21;

#line 227 "parser.m"
                  mercury__parser__LineNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_3, (MR_Integer) 1)));
#line 227 "parser.m"
                  mercury__parser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_3, (MR_Integer) 2)));
#line 227 "parser.m"
                }
#line 406 "string.opt"
              {
#line 406 "string.opt"
                mercury__string__append_3_p_2((MR_String) "Syntax error: ", mercury__parser__ErrorMessage_6, &mercury__parser__Message_14);
              }
#line 225 "parser.m"
            }
#line 224 "parser.m"
          else
#line 220 "parser.m"
            {
#line 220 "parser.m"
              MR_Word mercury__parser__ErrorTok_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_7, (MR_Integer) 0)));
#line 220 "parser.m"
              MR_String mercury__parser__TokString_19;
#line 220 "parser.m"
              MR_String mercury__parser__V_25_25;
#line 220 "parser.m"
              MR_String mercury__parser__V_26_26;
#line 220 "parser.m"
              MR_Word mercury__parser__V_18_18;

#line 220 "parser.m"
              mercury__parser__LineNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_7, (MR_Integer) 1)));
#line 220 "parser.m"
              mercury__parser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_7, (MR_Integer) 2)));
#line 221 "parser.m"
              {
#line 221 "parser.m"
                mercury__lexer__token_to_string_2_p_0(mercury__parser__ErrorTok_16, &mercury__parser__TokString_19);
              }
#line 406 "string.opt"
              {
#line 406 "string.opt"
                mercury__string__append_3_p_2((MR_String) ": ", mercury__parser__ErrorMessage_6, &mercury__parser__V_26_26);
              }
#line 406 "string.opt"
              {
#line 406 "string.opt"
                mercury__string__append_3_p_2(mercury__parser__TokString_19, mercury__parser__V_26_26, &mercury__parser__V_25_25);
              }
#line 406 "string.opt"
              {
#line 406 "string.opt"
                mercury__string__append_3_p_2((MR_String) "Syntax error at ", mercury__parser__V_25_25, &mercury__parser__Message_14);
              }
#line 220 "parser.m"
            }
#line 235 "parser.m"
        {
#line 235 "parser.m"
          MR_Word base;
#line 235 "parser.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "parser.m"
          *mercury__parser__Result_5 = base;
#line 235 "parser.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_14));
#line 235 "parser.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_15));
#line 235 "parser.m"
        }
#line 212 "parser.m"
      }
#line 212 "parser.m"
    else
#line 237 "parser.m"
      {
#line 237 "parser.m"
        MR_Word mercury__parser__Term_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
#line 240 "parser.m"
        MR_String mercury__parser__Message_33;
#line 240 "parser.m"
        MR_Integer mercury__parser__LineNum_34;

#line 238 "parser.m"
        {
#line 238 "parser.m"
          mercury__parser__succeeded = mercury__parser__check_for_bad_token_3_p_0(mercury__parser__Tokens_3, &mercury__parser__Message_33, &mercury__parser__LineNum_34);
        }
#line 240 "parser.m"
        if (mercury__parser__succeeded)
#line 239 "parser.m"
          {
#line 239 "parser.m"
            MR_Word base;
#line 239 "parser.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "parser.m"
            *mercury__parser__Result_5 = base;
#line 239 "parser.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_33));
#line 239 "parser.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_34));
#line 239 "parser.m"
          }
#line 240 "parser.m"
        else
#line 246 "parser.m"
          if ((mercury__parser__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "parser.m"
            {
#line 248 "parser.m"
              MR_Word base;
#line 248 "parser.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "parser.m"
              *mercury__parser__Result_5 = base;
#line 248 "parser.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__parser__HeadVar__2_2));
#line 248 "parser.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__parser__Term_28));
#line 248 "parser.m"
            }
#line 246 "parser.m"
          else
#line 242 "parser.m"
            {
#line 242 "parser.m"
              MR_Word mercury__parser__Token_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__4_4, (MR_Integer) 0)));
#line 242 "parser.m"
              MR_String mercury__parser__TokString_37;
#line 242 "parser.m"
              MR_String mercury__parser__Message_39;
#line 242 "parser.m"
              MR_Integer mercury__parser__LineNum_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__4_4, (MR_Integer) 1)));
#line 242 "parser.m"
              MR_Word mercury__parser__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__4_4, (MR_Integer) 2)));

#line 243 "parser.m"
              {
#line 243 "parser.m"
                mercury__lexer__token_to_string_2_p_0(mercury__parser__Token_35, &mercury__parser__TokString_37);
              }
#line 406 "string.opt"
              {
#line 406 "string.opt"
                mercury__string__append_3_p_2((MR_String) "Syntax error: unexpected ", mercury__parser__TokString_37, &mercury__parser__Message_39);
              }
#line 245 "parser.m"
              {
#line 245 "parser.m"
                MR_Word base;
#line 245 "parser.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "parser.m"
                *mercury__parser__Result_5 = base;
#line 245 "parser.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_39));
#line 245 "parser.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_40));
#line 245 "parser.m"
              }
#line 242 "parser.m"
            }
#line 237 "parser.m"
      }
#line 212 "parser.m"
  }
#line 208 "parser.m"
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
#line 200 "parser.m"
  {
#line 200 "parser.m"
    MR_bool mercury__parser__succeeded;

#line 200 "parser.m"
    if ((mercury__parser__Tokens_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "parser.m"
      *mercury__parser__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 200 "parser.m"
    else
#line 201 "parser.m"
      {
#line 201 "parser.m"
        MR_Word mercury__parser__ParserState0_12;
#line 201 "parser.m"
        MR_Word mercury__parser__Term_13;
#line 201 "parser.m"
        MR_Word mercury__parser__ParserState_14;
#line 201 "parser.m"
        MR_Word mercury__parser__VarSet_15;
#line 201 "parser.m"
        MR_Word mercury__parser__LeftOverTokens_16;
#line 201 "parser.m"
        MR_Word mercury__parser__VarSet_25 = (MR_Word) &mercury__parser_scalar_common_2[2];
#line 201 "parser.m"
        MR_Word mercury__parser__Names_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 201 "parser.m"
        MR_Word mercury__parser__VarSupply_2_30 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 201 "parser.m"
        MR_Word mercury__parser__Names_3_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 201 "parser.m"
        MR_Word mercury__parser__Values_4_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 932 "parser.m"
        MR_String mercury__parser__V_46_46;
#line 932 "parser.m"
        MR_Box mercury__parser__V_47_47;
#line 932 "parser.m"
        MR_Word mercury__parser__V_49_49;

#line 1031 "parser.m"
        {
#line 1031 "parser.m"
          mercury__parser__ParserState0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1031 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 0) = ((MR_Box) (mercury__parser__FileName_6));
#line 1031 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 1) = mercury__parser__Ops_5;
#line 1031 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 2) = ((MR_Box) (mercury__parser__VarSet_25));
#line 1031 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 3) = ((MR_Box) (mercury__parser__Tokens_7));
#line 1031 "parser.m"
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 4) = ((MR_Box) (mercury__parser__Names_26));
#line 1031 "parser.m"
        }
#line 203 "parser.m"
        {
#line 203 "parser.m"
          mercury__parser__parse_whole_term_3_p_0(mercury__parser__TypeInfo_for_T_18, mercury__parser__TypeClassInfo_for_op_table_17, &mercury__parser__Term_13, mercury__parser__ParserState0_12, &mercury__parser__ParserState_14);
        }
#line 932 "parser.m"
        mercury__parser__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_14, (MR_Integer) 0)));
#line 932 "parser.m"
        mercury__parser__V_47_47 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_14, (MR_Integer) 1));
#line 932 "parser.m"
        mercury__parser__VarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_14, (MR_Integer) 2)));
#line 932 "parser.m"
        mercury__parser__LeftOverTokens_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_14, (MR_Integer) 3)));
#line 932 "parser.m"
        mercury__parser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_14, (MR_Integer) 4)));
#line 205 "parser.m"
        {
#line 205 "parser.m"
          mercury__parser__check_for_errors_5_p_0(mercury__parser__TypeInfo_for_T_18, mercury__parser__Term_13, mercury__parser__VarSet_15, mercury__parser__Tokens_7, mercury__parser__LeftOverTokens_16, mercury__parser__Result_8);
#line 205 "parser.m"
          return;
        }
#line 201 "parser.m"
      }
#line 200 "parser.m"
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
#line 192 "parser.m"
  {
#line 192 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 192 "parser.m"
    MR_Word mercury__parser__TypeClassInfo_for_op_table_9;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9224 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_9 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 193 "parser.m"
    {
#line 193 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_8, mercury__parser__TypeClassInfo_for_op_table_9, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_4, mercury__parser__Tokens_5, mercury__parser__Result_6);
#line 193 "parser.m"
      return;
    }
#line 192 "parser.m"
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
#line 186 "parser.m"
  {
#line 186 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 186 "parser.m"
    MR_Word mercury__parser__Tokens_15;

#line 187 "parser.m"
    {
#line 187 "parser.m"
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_10, mercury__parser__Len_11, &mercury__parser__Tokens_15, mercury__parser__StartPos_12, mercury__parser__EndPos_13);
    }
#line 188 "parser.m"
    {
#line 188 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_17, mercury__parser__TypeClassInfo_for_op_table_16, mercury__parser__Ops_8, mercury__parser__FileName_9, mercury__parser__Tokens_15, mercury__parser__Result_14);
#line 188 "parser.m"
      return;
    }
#line 186 "parser.m"
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
#line 181 "parser.m"
  {
#line 181 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 181 "parser.m"
    MR_Word mercury__parser__TypeClassInfo_for_op_table_15;
#line 181 "parser.m"
    MR_Word mercury__parser__Tokens_23;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9315 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_15 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 187 "parser.m"
    {
#line 187 "parser.m"
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_8, mercury__parser__Len_9, &mercury__parser__Tokens_23, mercury__parser__StartPos_10, mercury__parser__EndPos_11);
    }
#line 188 "parser.m"
    {
#line 188 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__TypeClassInfo_for_op_table_15, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_7, mercury__parser__Tokens_23, mercury__parser__Result_12);
#line 188 "parser.m"
      return;
    }
#line 181 "parser.m"
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
#line 175 "parser.m"
  {
#line 175 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 175 "parser.m"
    MR_Integer mercury__parser__Len_11;
#line 175 "parser.m"
    MR_Word mercury__parser__StartPos_12;
#line 175 "parser.m"
    MR_Word mercury__parser__Tokens_25;

#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_from_string_with_op_table_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parser__String_8 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 9377 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Len_11  = Length;
#line 242 "string.opt"
}
#line 177 "parser.m"
    mercury__parser__StartPos_12 = (MR_Word) &mercury__parser_scalar_common_2[1];
#line 187 "parser.m"
    {
#line 187 "parser.m"
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_8, mercury__parser__Len_11, &mercury__parser__Tokens_25, mercury__parser__StartPos_12, mercury__parser__EndPos_9);
    }
#line 188 "parser.m"
    {
#line 188 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_17, mercury__parser__TypeClassInfo_for_op_table_16, mercury__parser__Ops_6, mercury__parser__FileName_7, mercury__parser__Tokens_25, mercury__parser__Result_10);
#line 188 "parser.m"
      return;
    }
#line 175 "parser.m"
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
#line 171 "parser.m"
  {
#line 171 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 171 "parser.m"
    MR_Word mercury__parser__TypeClassInfo_for_op_table_11;
#line 171 "parser.m"
    MR_Integer mercury__parser__Len_17;
#line 171 "parser.m"
    MR_Word mercury__parser__StartPos_18;
#line 171 "parser.m"
    MR_Word mercury__parser__Tokens_29;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9433 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_11 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_from_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parser__String_6 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 9448 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Len_17  = Length;
#line 242 "string.opt"
}
#line 177 "parser.m"
    mercury__parser__StartPos_18 = (MR_Word) &mercury__parser_scalar_common_2[1];
#line 187 "parser.m"
    {
#line 187 "parser.m"
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_6, mercury__parser__Len_17, &mercury__parser__Tokens_29, mercury__parser__StartPos_18, mercury__parser__EndPos_7);
    }
#line 188 "parser.m"
    {
#line 188 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_10, mercury__parser__TypeClassInfo_for_op_table_11, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_5, mercury__parser__Tokens_29, mercury__parser__Result_8);
#line 188 "parser.m"
      return;
    }
#line 171 "parser.m"
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
#line 167 "parser.m"
  {
#line 167 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 167 "parser.m"
    MR_Word mercury__parser__Tokens_10;
#line 167 "parser.m"
    MR_Word mercury__parser__Stream_6_19;
#line 167 "parser.m"
    MR_Word mercury__parser__Token_7_21;
#line 167 "parser.m"
    MR_Integer mercury__parser__Context_8_22;
#line 167 "parser.m"
    MR_Box mercury__parser__Stream_4_26;

#line 1349 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{
#line 1349 "io.opt"

    Stream = mercury_current_text_input();

#line 9515 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Stream_4_26  = (MR_Box) Stream;
#line 1349 "io.opt"
}
#line 634 "io.opt"
    mercury__parser__Stream_6_19 = (MR_Word) mercury__parser__Stream_4_26;
#line 28 "lexer.opt"
    {
#line 28 "lexer.opt"
      mercury__lexer__get_token_5_p_0(mercury__parser__Stream_6_19, &mercury__parser__Token_7_21, &mercury__parser__Context_8_22);
    }
#line 29 "lexer.opt"
    {
#line 29 "lexer.opt"
      mercury__lexer__get_token_list_2_6_p_0(mercury__parser__Stream_6_19, mercury__parser__Token_7_21, mercury__parser__Context_8_22, &mercury__parser__Tokens_10);
    }
#line 169 "parser.m"
    {
#line 169 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_15, mercury__parser__TypeClassInfo_for_op_table_14, mercury__parser__Ops_6, mercury__parser__FileName_7, mercury__parser__Tokens_10, mercury__parser__Result_8);
#line 169 "parser.m"
      return;
    }
#line 167 "parser.m"
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
#line 163 "parser.m"
  {
#line 163 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 163 "parser.m"
    MR_Word mercury__parser__TypeClassInfo_for_op_table_13;
#line 163 "parser.m"
    MR_Word mercury__parser__Tokens_20;
#line 163 "parser.m"
    MR_Word mercury__parser__Stream_6_25;
#line 163 "parser.m"
    MR_Word mercury__parser__Token_7_27;
#line 163 "parser.m"
    MR_Integer mercury__parser__Context_8_28;
#line 163 "parser.m"
    MR_Box mercury__parser__Stream_4_32;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9576 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_13 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 1349 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_filename_4_p_0

	MercuryFilePtr Stream;

		{
#line 1349 "io.opt"

    Stream = mercury_current_text_input();

#line 9589 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Stream_4_32  = (MR_Box) Stream;
#line 1349 "io.opt"
}
#line 634 "io.opt"
    mercury__parser__Stream_6_25 = (MR_Word) mercury__parser__Stream_4_32;
#line 28 "lexer.opt"
    {
#line 28 "lexer.opt"
      mercury__lexer__get_token_5_p_0(mercury__parser__Stream_6_25, &mercury__parser__Token_7_27, &mercury__parser__Context_8_28);
    }
#line 29 "lexer.opt"
    {
#line 29 "lexer.opt"
      mercury__lexer__get_token_list_2_6_p_0(mercury__parser__Stream_6_25, mercury__parser__Token_7_27, mercury__parser__Context_8_28, &mercury__parser__Tokens_20);
    }
#line 169 "parser.m"
    {
#line 169 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_12, mercury__parser__TypeClassInfo_for_op_table_13, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_5, mercury__parser__Tokens_20, mercury__parser__Result_6);
#line 169 "parser.m"
      return;
    }
#line 163 "parser.m"
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
#line 159 "parser.m"
  {
#line 159 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 159 "parser.m"
    MR_String mercury__parser__FileName_8;
#line 159 "parser.m"
    MR_Box mercury__parser__Stream_6_19;
#line 159 "parser.m"
    MR_Word mercury__parser__Tokens_30;
#line 159 "parser.m"
    MR_Word mercury__parser__Stream_6_35;
#line 159 "parser.m"
    MR_Word mercury__parser__Token_7_37;
#line 159 "parser.m"
    MR_Integer mercury__parser__Context_8_38;
#line 159 "parser.m"
    MR_Box mercury__parser__Stream_4_42;

#line 1349 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{
#line 1349 "io.opt"

    Stream = mercury_current_text_input();

#line 9663 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Stream_6_19  = (MR_Box) Stream;
#line 1349 "io.opt"
}
#line 645 "io.opt"
    {
#line 645 "io.opt"
      mercury__io__stream_name_4_p_0(mercury__parser__Stream_6_19, &mercury__parser__FileName_8);
    }
#line 1349 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{
#line 1349 "io.opt"

    Stream = mercury_current_text_input();

#line 9686 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Stream_4_42  = (MR_Box) Stream;
#line 1349 "io.opt"
}
#line 634 "io.opt"
    mercury__parser__Stream_6_35 = (MR_Word) mercury__parser__Stream_4_42;
#line 28 "lexer.opt"
    {
#line 28 "lexer.opt"
      mercury__lexer__get_token_5_p_0(mercury__parser__Stream_6_35, &mercury__parser__Token_7_37, &mercury__parser__Context_8_38);
    }
#line 29 "lexer.opt"
    {
#line 29 "lexer.opt"
      mercury__lexer__get_token_list_2_6_p_0(mercury__parser__Stream_6_35, mercury__parser__Token_7_37, mercury__parser__Context_8_38, &mercury__parser__Tokens_30);
    }
#line 169 "parser.m"
    {
#line 169 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__TypeClassInfo_for_op_table_13, mercury__parser__Ops_5, mercury__parser__FileName_8, mercury__parser__Tokens_30, mercury__parser__Result_6);
#line 169 "parser.m"
      return;
    }
#line 159 "parser.m"
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
#line 154 "parser.m"
  {
#line 154 "parser.m"
    MR_bool mercury__parser__succeeded;
#line 154 "parser.m"
    MR_Word mercury__parser__TypeClassInfo_for_op_table_13;
#line 154 "parser.m"
    MR_String mercury__parser__FileName_6;
#line 154 "parser.m"
    MR_Box mercury__parser__Stream_6_18;
#line 154 "parser.m"
    MR_Word mercury__parser__Tokens_29;
#line 154 "parser.m"
    MR_Word mercury__parser__Stream_6_34;
#line 154 "parser.m"
    MR_Word mercury__parser__Token_7_36;
#line 154 "parser.m"
    MR_Integer mercury__parser__Context_8_37;
#line 154 "parser.m"
    MR_Box mercury__parser__Stream_4_41;

#line 1349 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_3_p_0

	MercuryFilePtr Stream;

		{
#line 1349 "io.opt"

    Stream = mercury_current_text_input();

#line 9758 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Stream_6_18  = (MR_Box) Stream;
#line 1349 "io.opt"
}
#line 645 "io.opt"
    {
#line 645 "io.opt"
      mercury__io__stream_name_4_p_0(mercury__parser__Stream_6_18, &mercury__parser__FileName_6);
    }
#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9772 "parser.c"
    mercury__parser__TypeClassInfo_for_op_table_13 = (MR_Word) &mercury__parser_scalar_common_1[0];
#line 1349 "io.opt"
{
#define MR_PROC_LABEL mercury__parser__read_term_3_p_0

	MercuryFilePtr Stream;

		{
#line 1349 "io.opt"

    Stream = mercury_current_text_input();

#line 9785 "parser.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parser__Stream_4_41  = (MR_Box) Stream;
#line 1349 "io.opt"
}
#line 634 "io.opt"
    mercury__parser__Stream_6_34 = (MR_Word) mercury__parser__Stream_4_41;
#line 28 "lexer.opt"
    {
#line 28 "lexer.opt"
      mercury__lexer__get_token_5_p_0(mercury__parser__Stream_6_34, &mercury__parser__Token_7_36, &mercury__parser__Context_8_37);
    }
#line 29 "lexer.opt"
    {
#line 29 "lexer.opt"
      mercury__lexer__get_token_list_2_6_p_0(mercury__parser__Stream_6_34, mercury__parser__Token_7_36, mercury__parser__Context_8_37, &mercury__parser__Tokens_29);
    }
#line 169 "parser.m"
    {
#line 169 "parser.m"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_12, mercury__parser__TypeClassInfo_for_op_table_13, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_6, mercury__parser__Tokens_29, mercury__parser__Result_4);
#line 169 "parser.m"
      return;
    }
#line 154 "parser.m"
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
	MR_register_type_ctor_info(&mercury__parser__parser__type_ctor_info_state_2);
	MR_register_type_ctor_info(&mercury__parser__parser__type_ctor_info_term_kind_0);
}

void mercury__parser__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parser. */
