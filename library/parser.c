/*
** Automatically generated from `parser.m'
** by the Mercury compiler,
** version 2017-08-22
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
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
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
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_0[1];

static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parse_1_0;

static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_1[2];

static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parse_1_1;

static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_0[1];

static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_1[1];

static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_parse_1[2];

static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_parse_1[2];

static const MR_Integer mercury__parser__parser__functor_number_map_parse_1[2];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__varset__pti_varset_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__term__pti_var_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parser_state_2_0[4];

static const MR_ConstString mercury__parser__parser__field_names_parser_state_2_0[4];

static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parser_state_2_0;

static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parser_state_2_0[1];

static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_parser_state_2[1];

static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_parser_state_2[1];

static const MR_Integer mercury__parser__parser__functor_number_map_parser_state_2[1];

static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_0;

static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_1;

static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_2;

static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_value_ordered_term_kind_0[3];

static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_name_ordered_term_kind_0[3];

static const MR_Integer mercury__parser__parser__functor_number_map_term_kind_0[3];

static MR_Integer MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__parser__parse_list_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeClassInfo_for_op_table_21,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_13,
  MR_Word * STATE_VARIABLE_TokensLeft_14,
  MR_Word STATE_VARIABLE_PS_0_15,
  MR_Word * STATE_VARIABLE_PS_16);

static void MR_CALL 
mercury__parser__parse_simple_term_8_p_0(
  MR_Word TypeInfo_for_T_152,
  MR_Word TypeClassInfo_for_op_table_151,
  MR_Word Token_9,
  MR_Integer Context_10,
  MR_Integer Prec_11,
  MR_Word * TermParse_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_51,
  MR_Word * STATE_VARIABLE_TokensLeft_52,
  MR_Word STATE_VARIABLE_PS_0_53,
  MR_Word * STATE_VARIABLE_PS_54);

static void MR_CALL 
mercury__parser__do_parse_term_7_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_op_table_26,
  MR_Integer MaxPriority_8,
  MR_Word TermKind_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * STATE_VARIABLE_TokensLeft_19,
  MR_Word STATE_VARIABLE_PS_0_20,
  MR_Word * STATE_VARIABLE_PS_21);

static void MR_CALL 
mercury__parser__parse_arg_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeClassInfo_for_op_table_20,
  MR_Word * Term_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_11,
  MR_Word * STATE_VARIABLE_TokensLeft_12,
  MR_Word STATE_VARIABLE_PS_0_13,
  MR_Word * STATE_VARIABLE_PS_14);

static void MR_CALL 
mercury__parser__parse_term_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeClassInfo_for_op_table_20,
  MR_Word * Term_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_10,
  MR_Word * STATE_VARIABLE_TokensLeft_11,
  MR_Word STATE_VARIABLE_PS_0_12,
  MR_Word * STATE_VARIABLE_PS_13);

static void MR_CALL 
mercury__parser__parse_higher_order_term_rest_7_p_0(
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
mercury__parser__parse_rest_9_p_0(
  MR_Word TypeInfo_for_T_84,
  MR_Word TypeClassInfo_for_op_table_83,
  MR_Integer MaxPriority_10,
  MR_Word TermKind_11,
  MR_Integer LeftPriority_12,
  MR_Word LeftTerm_13,
  MR_Word * Term_14,
  MR_Word STATE_VARIABLE_TokensLeft_0_41,
  MR_Word * STATE_VARIABLE_TokensLeft_42,
  MR_Word STATE_VARIABLE_PS_0_43,
  MR_Word * STATE_VARIABLE_PS_44);

static void MR_CALL 
mercury__parser__parse_args_5_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeClassInfo_for_op_table_34,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * STATE_VARIABLE_TokensLeft_20,
  MR_Word STATE_VARIABLE_PS_0_21,
  MR_Word * STATE_VARIABLE_PS_22);

static void MR_CALL 
mercury__parser__parse_list_tail_6_p_0(
  MR_Word TypeInfo_for_T_68,
  MR_Word TypeClassInfo_for_op_table_67,
  MR_Word Arg_7,
  MR_Word * List_8,
  MR_Word STATE_VARIABLE_TokensLeft_0_21,
  MR_Word * STATE_VARIABLE_TokensLeft_22,
  MR_Word STATE_VARIABLE_PS_0_23,
  MR_Word * STATE_VARIABLE_PS_24);

static void MR_CALL 
mercury__parser__parse_special_atom_7_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_op_table_31,
  MR_String Atom_8,
  MR_Word TermContext_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * STATE_VARIABLE_TokensLeft_19,
  MR_Word STATE_VARIABLE_PS_0_20,
  MR_Word * STATE_VARIABLE_PS_21);

static void MR_CALL 
mercury__parser__parse_left_term_8_p_0(
  MR_Word TypeInfo_for_T_113,
  MR_Word TypeClassInfo_for_op_table_112,
  MR_Integer MaxPriority_9,
  MR_Word TermKind_10,
  MR_Integer * OpPriority_11,
  MR_Word * Term_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_53,
  MR_Word * STATE_VARIABLE_TokensLeft_54,
  MR_Word STATE_VARIABLE_PS_0_55,
  MR_Word * STATE_VARIABLE_PS_56);

static void MR_CALL 
mercury__parser__could_start_term_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mercury__parser__find_first_binary_prefix_op_5_p_0(
  MR_Word OpInfo_6,
  MR_Word OtherOpInfos_7,
  MR_Integer * OpPriority_8,
  MR_Word * RightAssoc_9,
  MR_Word * RightRightAssoc_10);

static MR_bool MR_CALL 
mercury__parser__find_first_prefix_op_4_p_0(
  MR_Word OpInfo_5,
  MR_Word OtherOpInfos_6,
  MR_Integer * OpPriority_7,
  MR_Word * RightAssoc_8);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word Term_3,
  MR_Word * ArgTerms_4);

static MR_Word MR_CALL 
mercury__parser__lexer_size_to_term_size_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
mercury__parser__lexer_signedness_to_term_signedness_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
mercury__parser__lexer_base_to_term_base_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_op_table_16,
  MR_String UsualMessage_6,
  MR_Word * Error_7,
  MR_Word STATE_VARIABLE_TokensLeft_0_12,
  MR_Word * STATE_VARIABLE_TokensLeft_13,
  MR_Word PS_9);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_op_table_25,
  MR_Word Token_8,
  MR_Integer Context_9,
  MR_String UsualMessage_10,
  MR_Word * Error_11,
  MR_Word STATE_VARIABLE_TokensLeft_0_21,
  MR_Word * STATE_VARIABLE_TokensLeft_22,
  MR_Word PS_13);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word ParserState_4,
  MR_Integer TokenContext_5,
  MR_Word * TermContext_6);

static MR_bool MR_CALL 
mercury__parser__check_priority_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer MaxPriority_2,
  MR_Integer Priority_3);

static MR_bool MR_CALL 
mercury__parser__parse_backquoted_operator_7_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeClassInfo_for_op_table_30,
  MR_Word * MaybeQualifier_8,
  MR_String * OpName_9,
  MR_Word * VariableTerms_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * STATE_VARIABLE_TokensLeft_20,
  MR_Word STATE_VARIABLE_PS_0_21,
  MR_Word * STATE_VARIABLE_PS_22);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_String VarName_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_ParserState_0_13,
  MR_Word * STATE_VARIABLE_ParserState_14);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(
  MR_Word TypeClassInfo_for_op_table_44,
  MR_Word MaybeQualifier0_10,
  MR_Word * MaybeQualifier_11,
  MR_Word OpCtxt0_12,
  MR_String OpName0_13,
  MR_String * OpName_14,
  MR_Word STATE_VARIABLE_TokensLeft_0_27,
  MR_Word * STATE_VARIABLE_TokensLeft_28,
  MR_Word STATE_VARIABLE_PS_0_29,
  MR_Word * STATE_VARIABLE_PS_30);

static MR_bool MR_CALL 
mercury__parser__check_for_bad_token_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Message_2,
  MR_Integer * LineNum_3);

static MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__parser____Compare____parse_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__parser____Unify____parser_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__parser____Compare____parser_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__parser____Compare____term_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__parser_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__parser_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__parser_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__parser_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__parser_scalar_common_5[5][1];

static /* final */ const MR_Integer mercury__parser_scalar_common_9[1][4];


/* sealed */ struct mercury__parser__vector_common_type_6_0_s {
  const MR_Word mercury__parser__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mercury__parser__vector_common_type_6_0_s mercury__parser_vector_common_6[4];

/* sealed */ struct mercury__parser__vector_common_type_7_0_s {
  const MR_Word mercury__parser__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__parser__vector_common_type_7_0_s mercury__parser_vector_common_7[5];

/* sealed */ struct mercury__parser__vector_common_type_8_0_s {
  const MR_Word mercury__parser__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct mercury__parser__vector_common_type_8_0_s mercury__parser_vector_common_8[118];



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
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "[]"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Integer mercury__parser_scalar_common_9[1][4] = {
  /* row 0 */
  {
    (MR_Integer) 4286578719,
    (MR_Integer) 4294967295,
    (MR_Integer) 4294967295,
    (MR_Integer) 4194303
  },
};


static /* final */ const struct mercury__parser__vector_common_type_6_0_s mercury__parser_vector_common_6[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};

static /* final */ const struct mercury__parser__vector_common_type_7_0_s mercury__parser_vector_common_7[5] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
};

static /* final */ const struct mercury__parser__vector_common_type_8_0_s mercury__parser_vector_common_8[118] = {
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
#include "int8.mh"
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
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint8.mh"
#include "version_array.mh"



static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parse_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parser__parser__field_types_parse_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__lexer__lexer__type_ctor_info_token_list_0
};

static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parse_1_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__parser__parser__field_types_parse_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_0[1] = {
  &mercury__parser__parser__du_functor_desc_parse_1_0
};

static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parse_1_1[1] = {
  &mercury__parser__parser__du_functor_desc_parse_1_1
};

static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_parse_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__parser__parser__du_stag_ordered_parse_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__parser__parser__du_stag_ordered_parse_1_1
  }
};

static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_parse_1[2] = {
  &mercury__parser__parser__du_functor_desc_parse_1_1,
  &mercury__parser__parser__du_functor_desc_parse_1_0
};

static const MR_Integer mercury__parser__parser__functor_number_map_parse_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__parser__parser__type_ctor_info_parse_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__varset__pti_varset_1__pseudo_2 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__parser__term__pti_var_1__pseudo_2 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__parser__term__pti_var_1__pseudo_2
  }
};

static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parser_state_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__parser__varset__pti_varset_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2
};

static const MR_ConstString mercury__parser__parser__field_names_parser_state_2_0[4] = {
  (MR_String) "ps_stream_name",
  (MR_String) "ps_ops_table",
  (MR_String) "ps_varset",
  (MR_String) "ps_var_names"
};

static const MR_DuFunctorDesc mercury__parser__parser__du_functor_desc_parser_state_2_0 = {
  (MR_String) "parser_state",
  (MR_Integer) 4,
  (MR_Integer) 14,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parser__parser__field_types_parser_state_2_0,
  mercury__parser__parser__field_names_parser_state_2_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parser_state_2_0[1] = {
  &mercury__parser__parser__du_functor_desc_parser_state_2_0
};

static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_parser_state_2[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__parser__parser__du_stag_ordered_parser_state_2_0
  }
};

static const MR_DuFunctorDescPtr mercury__parser__parser__du_name_ordered_parser_state_2[1] = {
  &mercury__parser__parser__du_functor_desc_parser_state_2_0
};

static const MR_Integer mercury__parser__parser__functor_number_map_parser_state_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__parser__parser__type_ctor_info_parser_state_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_0 = {
  (MR_String) "ordinary_term",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_1 = {
  (MR_String) "argument",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__parser__parser__enum_functor_desc_term_kind_0_2 = {
  (MR_String) "list_elem",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_value_ordered_term_kind_0[3] = {
  &mercury__parser__parser__enum_functor_desc_term_kind_0_0,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_1,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_2
};

static const MR_EnumFunctorDescPtr mercury__parser__parser__enum_name_ordered_term_kind_0[3] = {
  &mercury__parser__parser__enum_functor_desc_term_kind_0_1,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_2,
  &mercury__parser__parser__enum_functor_desc_term_kind_0_0
};

static const MR_Integer mercury__parser__parser__functor_number_map_term_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__parser__parser__type_ctor_info_term_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static MR_Integer MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__parser____Compare____term_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__parser____Compare____parser_state_2_0(
  MR_Word TypeInfo_for_Ops_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Box ArgX2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_7 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;
      MR_Integer V_7_30;

{
#define MR_PROC_LABEL mercury__parser____Compare____parser_state_2_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  ArgX1_4 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_30  = Res;
}
      succeeded = (V_7_30 < (MR_Integer) 0);
      if (succeeded)
        Var_12 = (MR_Integer) 1;
      else
      {
        succeeded = (V_7_30 == (MR_Integer) 0);
        if (succeeded)
          Var_12 = (MR_Integer) 0;
        else
          Var_12 = (MR_Integer) 2;
      }
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0(TypeInfo_for_Ops_17, &Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__varset____Compare____varset_1_0(TypeInfo_for_T_18, &Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            MR_Word TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word TypeInfo_24_24;

            {
              TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (TypeCtorInfo_23_23));
              MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_18));
            }
            mercury__tree234____Compare____tree234_2_0(TypeCtorInfo_22_22, TypeInfo_24_24, HeadVar__1_1, (MR_Word) ArgX4_10, (MR_Word) ArgY4_11);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__parser____Unify____parser_state_2_0(
  MR_Word TypeInfo_for_Ops_13,
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_17_17;
      MR_Word TypeCtorInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Ops_13, ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__varset____Unify____varset_1_0(TypeInfo_for_T_14, ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_19_19, 0) = ((MR_Box) (TypeCtorInfo_18_18));
              MR_hl_field(MR_mktag(0), TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_14));
            }
            succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_17_17, TypeInfo_19_19, (MR_Word) ArgX4_9, (MR_Word) ArgY4_10);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__parser____Compare____parse_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_23 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String ArgY1_13 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_16;
        MR_Integer V_7_28;

{
#define MR_PROC_LABEL mercury__parser____Compare____parse_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_23 ;
	S2 =  ArgY1_13 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_28  = Res;
}
        succeeded = (V_7_28 < (MR_Integer) 0);
        if (succeeded)
          Var_16 = (MR_Integer) 1;
        else
        {
          succeeded = (V_7_28 == (MR_Integer) 0);
          if (succeeded)
            Var_16 = (MR_Integer) 0;
          else
            Var_16 = (MR_Integer) 2;
        }
        succeeded = (Var_16 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_16;
        else
          mercury__lexer____Compare____token_list_0_0(HeadVar__1_1, Var_22, ArgY2_15);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_24 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_19, HeadVar__1_1, Var_24, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
        if (succeeded)
          succeeded = mercury__lexer____Unify____token_list_0_0(ArgX2_7, ArgY2_8);
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__parser__parser_state_get_varset_1_f_0(
  MR_Word TypeInfo_for_Ops_8,
  MR_Word TypeInfo_for_T_9,
  MR_Word ParserState_3)
{
  {
    MR_Word X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParserState_3, (MR_Integer) 2)));
    MR_String Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ParserState_3, (MR_Integer) 0)));
    MR_Box Var_6 = (MR_hl_field(MR_mktag(0), ParserState_3, (MR_Integer) 1));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParserState_3, (MR_Integer) 3)));

    return X_4;
  }
}

void MR_CALL 
mercury__parser__final_parser_state_2_p_0(
  MR_Word TypeInfo_for_Ops_5,
  MR_Word TypeInfo_for_T_6,
  MR_Word ParserState_3,
  MR_Word * VarSet_4)
{
  {
    MR_String Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ParserState_3, (MR_Integer) 0)));
    MR_Box Var_10 = (MR_hl_field(MR_mktag(0), ParserState_3, (MR_Integer) 1));
    MR_Word Var_11;

    *VarSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParserState_3, (MR_Integer) 2)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParserState_3, (MR_Integer) 3)));
  }
}

void MR_CALL 
mercury__parser__init_parser_state_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeClassInfo_for_op_table_9,
  MR_Box Ops_4,
  MR_String FileName_5,
  MR_Word * ParserState_6)
{
  {
    MR_Word VarSet_7 = (MR_Word) &mercury__parser_scalar_common_2[1];
    MR_Word Names_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_3_15 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
    MR_Word V_4_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ParserState_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileName_5));
      MR_hl_field(MR_mktag(0), base, 1) = Ops_4;
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarSet_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Names_8));
    }
  }
}

void MR_CALL 
mercury__parser__parse_tokens_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_String FileName_4,
  MR_Word Tokens_5,
  MR_Word * Result_6)
{
  {
    MR_Word TypeClassInfo_for_op_table_9;

    TypeClassInfo_for_op_table_9 = (MR_Word) &mercury__parser_scalar_common_1[0];
    mercury__parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_8, TypeClassInfo_for_op_table_9, ((MR_Box) ((MR_Integer) 0)), FileName_4, Tokens_5, Result_6);
  }
}

void MR_CALL 
mercury__parser__read_term_from_substring_with_op_table_7_p_0(
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
  {
    MR_Word Tokens_15;

    mercury__lexer__string_get_token_list_max_5_p_0(String_10, Len_11, &Tokens_15, StartPos_12, EndPos_13);
    mercury__parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, Ops_8, FileName_9, Tokens_15, Result_14);
  }
}

void MR_CALL 
mercury__parser__read_term_from_substring_6_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_String FileName_7,
  MR_String String_8,
  MR_Integer Len_9,
  MR_Word StartPos_10,
  MR_Word * EndPos_11,
  MR_Word * Result_12)
{
  {
    MR_Word TypeClassInfo_for_op_table_15;
    MR_Word Tokens_23;

    TypeClassInfo_for_op_table_15 = (MR_Word) &mercury__parser_scalar_common_1[0];
    mercury__lexer__string_get_token_list_max_5_p_0(String_8, Len_9, &Tokens_23, StartPos_10, EndPos_11);
    mercury__parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_14, TypeClassInfo_for_op_table_15, ((MR_Box) ((MR_Integer) 0)), FileName_7, Tokens_23, Result_12);
  }
}

void MR_CALL 
mercury__parser__read_term_from_string_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Box Ops_6,
  MR_String FileName_7,
  MR_String String_8,
  MR_Word * EndPos_9,
  MR_Word * Result_10)
{
  {
    MR_Integer Len_11;
    MR_Word StartPos_12;
    MR_Word Tokens_25;

{
#define MR_PROC_LABEL mercury__parser__read_term_from_string_with_op_table_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_11  = Length;
}
    StartPos_12 = (MR_Word) &mercury__parser_scalar_common_2[2];
    mercury__lexer__string_get_token_list_max_5_p_0(String_8, Len_11, &Tokens_25, StartPos_12, EndPos_9);
    mercury__parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, Ops_6, FileName_7, Tokens_25, Result_10);
  }
}

void MR_CALL 
mercury__parser__read_term_from_string_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_String FileName_5,
  MR_String String_6,
  MR_Word * EndPos_7,
  MR_Word * Result_8)
{
  {
    MR_Word TypeClassInfo_for_op_table_11;
    MR_Integer Len_17;
    MR_Word StartPos_18;
    MR_Word Tokens_29;

    TypeClassInfo_for_op_table_11 = (MR_Word) &mercury__parser_scalar_common_1[0];
{
#define MR_PROC_LABEL mercury__parser__read_term_from_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_17  = Length;
}
    StartPos_18 = (MR_Word) &mercury__parser_scalar_common_2[2];
    mercury__lexer__string_get_token_list_max_5_p_0(String_6, Len_17, &Tokens_29, StartPos_18, EndPos_7);
    mercury__parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_10, TypeClassInfo_for_op_table_11, ((MR_Box) ((MR_Integer) 0)), FileName_5, Tokens_29, Result_8);
  }
}

void MR_CALL 
mercury__parser__read_term_filename_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_op_table_15,
  MR_Box Ops_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  {
    MR_Word Stream_10;
    MR_Box V_4_19;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 V_4_19  = (MR_Box) Stream;
}
    Stream_10 = (MR_Word) V_4_19;
    mercury__parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_16, TypeClassInfo_for_op_table_15, Stream_10, Ops_6, FileName_7, Result_8);
  }
}

void MR_CALL 
mercury__parser__read_term_filename_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Stream_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  {
    MR_Word TypeClassInfo_for_op_table_15;

    TypeClassInfo_for_op_table_15 = (MR_Word) &mercury__parser_scalar_common_1[0];
    mercury__parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_14, TypeClassInfo_for_op_table_15, Stream_6, ((MR_Box) ((MR_Integer) 0)), FileName_7, Result_8);
  }
}

void MR_CALL 
mercury__parser__read_term_filename_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_String FileName_5,
  MR_Word * Result_6)
{
  {
    MR_Word TypeClassInfo_for_op_table_25;
    MR_Word Stream_8;
    MR_Box V_4_16;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 V_4_16  = (MR_Box) Stream;
}
    Stream_8 = (MR_Word) V_4_16;
    TypeClassInfo_for_op_table_25 = (MR_Word) &mercury__parser_scalar_common_1[0];
    mercury__parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_13, TypeClassInfo_for_op_table_25, Stream_8, ((MR_Box) ((MR_Integer) 0)), FileName_5, Result_6);
  }
}

void MR_CALL 
mercury__parser__read_term_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_op_table_15,
  MR_Word Stream_6,
  MR_Box Ops_7,
  MR_Word * Result_8)
{
  {
    MR_String FileName_10;
    MR_Box V_5_20 = (MR_Box) Stream_6;

    mercury__io__stream_name_4_p_0(V_5_20, &FileName_10);
    mercury__parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_16, TypeClassInfo_for_op_table_15, Stream_6, Ops_7, FileName_10, Result_8);
  }
}

void MR_CALL 
mercury__parser__read_term_with_op_table_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_op_table_13,
  MR_Box Ops_5,
  MR_Word * Result_6)
{
  {
    MR_Word Stream_8;
    MR_String FileName_24;
    MR_Box V_5_30;

{
#define MR_PROC_LABEL mercury__parser__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 V_5_30  = (MR_Box) Stream;
}
    Stream_8 = (MR_Word) V_5_30;
    mercury__io__stream_name_4_p_0(V_5_30, &FileName_24);
    mercury__parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_14, TypeClassInfo_for_op_table_13, Stream_8, Ops_5, FileName_24, Result_6);
  }
}

void MR_CALL 
mercury__parser__read_term_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Stream_5,
  MR_Word * Result_6)
{
  {
    MR_Word TypeClassInfo_for_op_table_15;
    MR_String FileName_8;
    MR_Box V_5_19 = (MR_Box) Stream_5;

    mercury__io__stream_name_4_p_0(V_5_19, &FileName_8);
    TypeClassInfo_for_op_table_15 = (MR_Word) &mercury__parser_scalar_common_1[0];
    mercury__parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_14, TypeClassInfo_for_op_table_15, Stream_5, ((MR_Box) ((MR_Integer) 0)), FileName_8, Result_6);
  }
}

void MR_CALL 
mercury__parser__read_term_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * Result_4)
{
  {
    MR_Word TypeClassInfo_for_op_table_24;
    MR_Word Stream_6;
    MR_String FileName_20;
    MR_Box V_5_28;

{
#define MR_PROC_LABEL mercury__parser__read_term_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 V_5_28  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) V_5_28;
    mercury__io__stream_name_4_p_0(V_5_28, &FileName_20);
    TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__parser_scalar_common_1[0];
    mercury__parser__read_term_filename_with_op_table_6_p_0(TypeInfo_for_T_11, TypeClassInfo_for_op_table_24, Stream_6, ((MR_Box) ((MR_Integer) 0)), FileName_20, Result_4);
  }
}

void MR_CALL 
mercury__parser__read_term_filename_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Word Stream_7,
  MR_Box Ops_8,
  MR_String FileName_9,
  MR_Word * Result_10)
{
  {
    MR_bool succeeded;
    MR_Word Tokens_12;
    MR_Word V_8_22;
    MR_Integer V_9_23;
    MR_Word V_12_37;
    MR_Char V_13_38;
    MR_Word V_10_47;
    MR_Box V_11_48;
    MR_Box V_7_57 = (MR_Box) Stream_7;

    mercury__io__read_char_code_2_6_p_0(V_7_57, &V_10_47, &V_13_38, &V_11_48);
    switch (V_10_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        V_12_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        break;
      case (MR_Integer) 2:
        {
          MR_String V_12_50;
          MR_Word V_17_51;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_11_48 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_12_50  = Msg;
}
          V_17_51 = (MR_Word) V_12_50;
          {
            V_12_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), V_12_37, 0) = ((MR_Box) (V_17_51));
          }
        }
        break;
      case (MR_Integer) 0:
        V_12_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    switch (MR_tag((MR_Word) V_12_37)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(V_12_37)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word V_15_41;

              if ((((MR_Unsigned) (V_13_38 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                if ((((mercury__parser_scalar_common_9[0])[(((V_13_38 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((V_13_38 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                {
                  V_15_41 = ((&mercury__parser_vector_common_8[0 + (V_13_38 - (MR_Integer) 9)]))->mercury__parser__vector_common_type_8_0__vct_8_f_0;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              else
                succeeded = MR_FALSE;
              if (succeeded)
                mercury__lexer__execute_get_token_action_8_p_0(Stream_7, V_13_38, V_15_41, (MR_Integer) 1, &V_8_22, &V_9_23);
              else
              {
                MR_Box V_5_83 = (MR_Box) Stream_7;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) V_5_83 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 V_9_23  = LineNum;
}
                {
                  V_8_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), V_8_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), V_8_22, 1) = ((MR_Box) (MR_Word) (V_13_38));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box V_5_65 = (MR_Box) Stream_7;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) V_5_65 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 V_9_23  = LineNum;
}
              V_8_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word V_14_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_12_37, (MR_Integer) 0)));
          MR_Box V_5_73 = (MR_Box) Stream_7;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) V_5_73 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 V_9_23  = LineNum;
}
          {
            V_8_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), V_8_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), V_8_22, 1) = ((MR_Box) (V_14_40));
          }
        }
        break;
    }
    mercury__lexer__get_token_list_2_6_p_0(Stream_7, V_8_22, V_9_23, &Tokens_12);
    mercury__parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, Ops_8, FileName_9, Tokens_12, Result_10);
  }
}

void MR_CALL 
mercury__parser__parse_tokens_with_op_table_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Box Ops_5,
  MR_String FileName_6,
  MR_Word Tokens_7,
  MR_Word * Result_8)
{
  if ((Tokens_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word ParserState0_12;
    MR_Word Term_13;
    MR_Word LeftOverTokens_14;
    MR_Word ParserState_15;
    MR_Word VarSet_16;
    MR_Word VarSet_24 = (MR_Word) &mercury__parser_scalar_common_2[1];
    MR_Word Names_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_3_30 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
    MR_Word V_4_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_String Var_47;
    MR_Box Var_48;
    MR_Word Var_49;

    {
      ParserState0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParserState0_12, 0) = ((MR_Box) (FileName_6));
      MR_hl_field(MR_mktag(0), ParserState0_12, 1) = Ops_5;
      MR_hl_field(MR_mktag(0), ParserState0_12, 2) = ((MR_Box) (VarSet_24));
      MR_hl_field(MR_mktag(0), ParserState0_12, 3) = ((MR_Box) (Names_25));
    }
    mercury__parser__parse_whole_term_5_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_17, &Term_13, Tokens_7, &LeftOverTokens_14, ParserState0_12, &ParserState_15);
    Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ParserState_15, (MR_Integer) 0)));
    Var_48 = (MR_hl_field(MR_mktag(0), ParserState_15, (MR_Integer) 1));
    VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParserState_15, (MR_Integer) 2)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParserState_15, (MR_Integer) 3)));
    mercury__parser__check_for_errors_5_p_0(TypeInfo_for_T_18, Term_13, VarSet_16, Tokens_7, LeftOverTokens_14, Result_8);
  }
}

void MR_CALL 
mercury__parser__parse_whole_term_5_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_24,
  MR_Word * Term_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_14,
  MR_Word * STATE_VARIABLE_TokensLeft_15,
  MR_Word STATE_VARIABLE_PS_0_16,
  MR_Word * STATE_VARIABLE_PS_17)
{
  {
    MR_bool succeeded;
    MR_Word Term0_9;
    MR_Word STATE_VARIABLE_TokensLeft_18_18;
    MR_Box OpTable_35 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_16, (MR_Integer) 1));
    MR_Integer Var_36;
    MR_Integer Var_40;
    MR_Integer LeftPriority_58;
    MR_Word LeftTerm0_59;
    MR_Word STATE_VARIABLE_TokensLeft_22_63;
    MR_Word STATE_VARIABLE_PS_23_64;
    MR_String Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_16, (MR_Integer) 0)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_16, (MR_Integer) 2)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_16, (MR_Integer) 3)));
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box conv1_Var_40;

    conv1_Var_40 = func_0(((MR_Box) TypeClassInfo_for_op_table_24), OpTable_35);
    Var_40 = ((MR_Integer) conv1_Var_40);
    Var_36 = (Var_40 + (MR_Integer) 1);
    mercury__parser__parse_left_term_8_p_0(TypeInfo_for_T_25, TypeClassInfo_for_op_table_24, Var_36, (MR_Integer) 0, &LeftPriority_58, &LeftTerm0_59, STATE_VARIABLE_TokensLeft_0_14, &STATE_VARIABLE_TokensLeft_22_63, STATE_VARIABLE_PS_0_16, &STATE_VARIABLE_PS_23_64);
    if (((MR_tag((MR_Word) LeftTerm0_59)) == (MR_mktag((MR_Integer) 1))))
    {
      Term0_9 = LeftTerm0_59;
      STATE_VARIABLE_TokensLeft_18_18 = STATE_VARIABLE_TokensLeft_22_63;
      *STATE_VARIABLE_PS_17 = STATE_VARIABLE_PS_23_64;
    }
    else
    {
      MR_Word LeftTerm_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), LeftTerm0_59, (MR_Integer) 0)));

      mercury__parser__parse_rest_9_p_0(TypeInfo_for_T_25, TypeClassInfo_for_op_table_24, Var_36, (MR_Integer) 0, LeftPriority_58, LeftTerm_60, &Term0_9, STATE_VARIABLE_TokensLeft_22_63, &STATE_VARIABLE_TokensLeft_18_18, STATE_VARIABLE_PS_23_64, STATE_VARIABLE_PS_17);
    }
    if (((MR_tag((MR_Word) Term0_9)) == (MR_mktag((MR_Integer) 1))))
    {
      *Term_6 = Term0_9;
      *STATE_VARIABLE_TokensLeft_15 = STATE_VARIABLE_TokensLeft_18_18;
    }
    else
    {
      MR_Word STATE_VARIABLE_TokensLeft_20_20;
      MR_Word Var_21;
      MR_Integer _Context_11;

      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_18_18)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 0)));
        _Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 1)));
        STATE_VARIABLE_TokensLeft_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 2)));
        succeeded = (Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      }
      if (succeeded)
      {
        *STATE_VARIABLE_TokensLeft_15 = STATE_VARIABLE_TokensLeft_20_20;
        *Term_6 = Term0_9;
      }
      else
      {
        MR_Word conv2_Term_6;

        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(TypeClassInfo_for_op_table_24, (MR_String) "operator or \140.\' expected", &conv2_Term_6, STATE_VARIABLE_TokensLeft_18_18, STATE_VARIABLE_TokensLeft_15, *STATE_VARIABLE_PS_17);
        *Term_6 = (MR_Word) conv2_Term_6;
      }
    }
  }
}

static void MR_CALL 
mercury__parser__parse_list_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeClassInfo_for_op_table_21,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_13,
  MR_Word * STATE_VARIABLE_TokensLeft_14,
  MR_Word STATE_VARIABLE_PS_0_15,
  MR_Word * STATE_VARIABLE_PS_16)
{
  {
    MR_Word Arg0_9;
    MR_Word STATE_VARIABLE_TokensLeft_17_17;
    MR_Word STATE_VARIABLE_PS_18_18;
    MR_Box OpTable_30;
    MR_Integer ArgPriority_31;
    MR_Integer Var_32;
    MR_Integer LeftPriority_53;
    MR_Word LeftTerm0_54;
    MR_Word STATE_VARIABLE_TokensLeft_22_58;
    MR_Word STATE_VARIABLE_PS_23_59;
    MR_Word TypeInfo_23_38;
    MR_String Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_32;

{
#define MR_PROC_LABEL mercury__parser__parse_list_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_op_table_21 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_23_38  = TypeInfo;
}
    Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_15, (MR_Integer) 0)));
    OpTable_30 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_15, (MR_Integer) 1));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_15, (MR_Integer) 2)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_15, (MR_Integer) 3)));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_21, (MR_Integer) 0)), (MR_Integer) 12)));
    conv1_Var_32 = func_0(((MR_Box) TypeClassInfo_for_op_table_21), OpTable_30);
    Var_32 = ((MR_Integer) conv1_Var_32);
    ArgPriority_31 = (Var_32 + (MR_Integer) 1);
    mercury__parser__parse_left_term_8_p_0(TypeInfo_for_T_22, TypeClassInfo_for_op_table_21, ArgPriority_31, (MR_Integer) 2, &LeftPriority_53, &LeftTerm0_54, STATE_VARIABLE_TokensLeft_0_13, &STATE_VARIABLE_TokensLeft_22_58, STATE_VARIABLE_PS_0_15, &STATE_VARIABLE_PS_23_59);
    if (((MR_tag((MR_Word) LeftTerm0_54)) == (MR_mktag((MR_Integer) 1))))
    {
      Arg0_9 = LeftTerm0_54;
      STATE_VARIABLE_TokensLeft_17_17 = STATE_VARIABLE_TokensLeft_22_58;
      STATE_VARIABLE_PS_18_18 = STATE_VARIABLE_PS_23_59;
    }
    else
    {
      MR_Word LeftTerm_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), LeftTerm0_54, (MR_Integer) 0)));

      mercury__parser__parse_rest_9_p_0(TypeInfo_for_T_22, TypeClassInfo_for_op_table_21, ArgPriority_31, (MR_Integer) 2, LeftPriority_53, LeftTerm_55, &Arg0_9, STATE_VARIABLE_TokensLeft_22_58, &STATE_VARIABLE_TokensLeft_17_17, STATE_VARIABLE_PS_23_59, &STATE_VARIABLE_PS_18_18);
    }
    if (((MR_tag((MR_Word) Arg0_9)) == (MR_mktag((MR_Integer) 1))))
    {
      *List_6 = Arg0_9;
      *STATE_VARIABLE_TokensLeft_14 = STATE_VARIABLE_TokensLeft_17_17;
      *STATE_VARIABLE_PS_16 = STATE_VARIABLE_PS_18_18;
    }
    else
    {
      MR_Word Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_9, (MR_Integer) 0)));

      mercury__parser__parse_list_tail_6_p_0(TypeInfo_for_T_22, TypeClassInfo_for_op_table_21, Arg_10, List_6, STATE_VARIABLE_TokensLeft_17_17, STATE_VARIABLE_TokensLeft_14, STATE_VARIABLE_PS_18_18, STATE_VARIABLE_PS_16);
    }
  }
}

static void MR_CALL 
mercury__parser__parse_simple_term_8_p_0(
  MR_Word TypeInfo_for_T_152,
  MR_Word TypeClassInfo_for_op_table_151,
  MR_Word Token_9,
  MR_Integer Context_10,
  MR_Integer Prec_11,
  MR_Word * TermParse_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_51,
  MR_Word * STATE_VARIABLE_TokensLeft_52,
  MR_Word STATE_VARIABLE_PS_0_53,
  MR_Word * STATE_VARIABLE_PS_54)
{
  {
    MR_bool succeeded;
    MR_Word BaseTermParse_21;
    MR_Word STATE_VARIABLE_TokensLeft_94_94;
    MR_Word STATE_VARIABLE_PS_95_95;
    MR_Word BaseTermOpen_49;
    MR_Word STATE_VARIABLE_TokensLeft_102_102;
    MR_Word Var_103;
    MR_Integer _OpenContext_50;

    switch (MR_tag((MR_Word) Token_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Token_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word SubTermParse_37;
              MR_Word STATE_VARIABLE_TokensLeft_77_77;

              mercury__parser__parse_term_5_p_0(TypeInfo_for_T_152, TypeClassInfo_for_op_table_151, &SubTermParse_37, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_77_77, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_95_95);
              if (((MR_tag((MR_Word) SubTermParse_37)) == (MR_mktag((MR_Integer) 1))))
              {
                BaseTermParse_21 = SubTermParse_37;
                STATE_VARIABLE_TokensLeft_94_94 = STATE_VARIABLE_TokensLeft_77_77;
              }
              else
              {
                MR_Word STATE_VARIABLE_TokensLeft_79_79;
                MR_Word Var_80;
                MR_Integer _Context_119;

                succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_77_77)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_77_77, (MR_Integer) 0)));
                  _Context_119 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_77_77, (MR_Integer) 1)));
                  STATE_VARIABLE_TokensLeft_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_77_77, (MR_Integer) 2)));
                  succeeded = (Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                }
                if (succeeded)
                {
                  STATE_VARIABLE_TokensLeft_94_94 = STATE_VARIABLE_TokensLeft_79_79;
                  BaseTermParse_21 = SubTermParse_37;
                }
                else
                {
                  MR_Word conv2_BaseTermParse_21;

                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(TypeClassInfo_for_op_table_151, (MR_String) "expecting \140)\' or operator", &conv2_BaseTermParse_21, STATE_VARIABLE_TokensLeft_77_77, &STATE_VARIABLE_TokensLeft_94_94, STATE_VARIABLE_PS_95_95);
                  BaseTermParse_21 = (MR_Word) conv2_BaseTermParse_21;
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
          case (MR_Integer) 10:
            {
              MR_Word conv0_BaseTermParse_21;

              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_151, Token_9, Context_10, (MR_String) "unexpected token at start of (sub)term", &conv0_BaseTermParse_21, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_94_94, STATE_VARIABLE_PS_0_53);
              BaseTermParse_21 = (MR_Word) conv0_BaseTermParse_21;
              STATE_VARIABLE_PS_95_95 = STATE_VARIABLE_PS_0_53;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TermContext_128;
              MR_Word STATE_VARIABLE_TokensLeft_70_70;
              MR_Word Var_71;
              MR_Integer _Context_125;

              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_128);
              succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_0_51)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 0)));
                _Context_125 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 1)));
                STATE_VARIABLE_TokensLeft_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 2)));
                succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              }
              if (succeeded)
              {
                mercury__parser__parse_special_atom_7_p_0(TypeInfo_for_T_152, TypeClassInfo_for_op_table_151, (MR_String) "[]", TermContext_128, &BaseTermParse_21, STATE_VARIABLE_TokensLeft_70_70, &STATE_VARIABLE_TokensLeft_94_94, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_95_95);
              }
              else
                mercury__parser__parse_list_5_p_0(TypeInfo_for_T_152, TypeClassInfo_for_op_table_151, &BaseTermParse_21, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_94_94, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_95_95);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TermContext_147;
              MR_Word STATE_VARIABLE_TokensLeft_57_57;
              MR_Word Var_58;
              MR_Integer _Context_130;

              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_147);
              succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_0_51)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 0)));
                _Context_130 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 1)));
                STATE_VARIABLE_TokensLeft_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 2)));
                succeeded = (Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
              }
              if (succeeded)
              {
                mercury__parser__parse_special_atom_7_p_0(TypeInfo_for_T_152, TypeClassInfo_for_op_table_151, (MR_String) "{}", TermContext_147, &BaseTermParse_21, STATE_VARIABLE_TokensLeft_57_57, &STATE_VARIABLE_TokensLeft_94_94, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_95_95);
              }
              else
              {
                MR_Word STATE_VARIABLE_TokensLeft_62_62;
                MR_Word SubTermParse_143;

                mercury__parser__parse_term_5_p_0(TypeInfo_for_T_152, TypeClassInfo_for_op_table_151, &SubTermParse_143, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_62_62, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_95_95);
                if (((MR_tag((MR_Word) SubTermParse_143)) == (MR_mktag((MR_Integer) 1))))
                {
                  BaseTermParse_21 = SubTermParse_143;
                  STATE_VARIABLE_TokensLeft_94_94 = STATE_VARIABLE_TokensLeft_62_62;
                }
                else
                {
                  MR_Word SubTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTermParse_143, (MR_Integer) 0)));
                  MR_Word ArgTerms_42;
                  MR_Word STATE_VARIABLE_TokensLeft_64_64;
                  MR_Word Var_65;
                  MR_Integer _Context_132;

                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(SubTerm_41, &ArgTerms_42);
                  succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_62_62)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_62_62, (MR_Integer) 0)));
                    _Context_132 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_62_62, (MR_Integer) 1)));
                    STATE_VARIABLE_TokensLeft_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_62_62, (MR_Integer) 2)));
                    succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                  }
                  if (succeeded)
                  {
                    MR_Word Var_66;
                    MR_Word BaseTerm_134;

                    STATE_VARIABLE_TokensLeft_94_94 = STATE_VARIABLE_TokensLeft_64_64;
                    Var_66 = (MR_Word) &mercury__parser_scalar_common_5[4];
                    {
                      BaseTerm_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), BaseTerm_134, 0) = ((MR_Box) (Var_66));
                      MR_hl_field(MR_mktag(0), BaseTerm_134, 1) = ((MR_Box) (ArgTerms_42));
                      MR_hl_field(MR_mktag(0), BaseTerm_134, 2) = ((MR_Box) (TermContext_147));
                    }
                    {
                      BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_134));
                    }
                  }
                  else
                  {
                    MR_Word conv3_BaseTermParse_21;

                    mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(TypeClassInfo_for_op_table_151, (MR_String) "expecting \140}\' or operator", &conv3_BaseTermParse_21, STATE_VARIABLE_TokensLeft_62_62, &STATE_VARIABLE_TokensLeft_94_94, STATE_VARIABLE_PS_95_95);
                    BaseTermParse_21 = (MR_Word) conv3_BaseTermParse_21;
                  }
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Atom_15 = ((MR_String) (MR_hl_field(MR_mktag(1), Token_9, (MR_Integer) 0)));
          MR_Word TermContext_16;
          MR_Word STATE_VARIABLE_TokensLeft_92_92;
          MR_Word Var_93;
          MR_Integer _Context_17;

          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_16);
          succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_0_51)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 0)));
            _Context_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 1)));
            STATE_VARIABLE_TokensLeft_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 2)));
            succeeded = (Var_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          }
          if (succeeded)
          {
            MR_Word ArgsParse_18;

            mercury__parser__parse_args_5_p_0(TypeInfo_for_T_152, TypeClassInfo_for_op_table_151, &ArgsParse_18, STATE_VARIABLE_TokensLeft_92_92, &STATE_VARIABLE_TokensLeft_94_94, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_95_95);
            if (((MR_tag((MR_Word) ArgsParse_18)) == (MR_mktag((MR_Integer) 1))))
              BaseTermParse_21 = (MR_Word) ArgsParse_18;
            else
            {
              MR_Word Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgsParse_18, (MR_Integer) 0)));
              MR_Word BaseTerm_20;
              MR_Word Var_96;

              {
                Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Atom_15));
              }
              {
                BaseTerm_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTerm_20, 0) = ((MR_Box) (Var_96));
                MR_hl_field(MR_mktag(0), BaseTerm_20, 1) = ((MR_Box) (Args_19));
                MR_hl_field(MR_mktag(0), BaseTerm_20, 2) = ((MR_Box) (TermContext_16));
              }
              {
                BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_20));
              }
            }
          }
          else
          {
            MR_Box OpTable_24 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_53, (MR_Integer) 1));
            MR_String Var_181 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_53, (MR_Integer) 0)));
            MR_Word Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_53, (MR_Integer) 2)));
            MR_Word Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_53, (MR_Integer) 3)));
            MR_Integer Var_97;

            succeeded = mercury__ops__lookup_op_2_p_0(TypeClassInfo_for_op_table_151, OpTable_24, Atom_15);
            if (succeeded)
            {
              Var_97 = mercury__ops__max_priority_1_f_0(TypeClassInfo_for_op_table_151, OpTable_24);
              succeeded = (Prec_11 <= Var_97);
            }
            if (succeeded)
            {
              MR_Word conv1_BaseTermParse_21;

              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_151, Token_9, Context_10, (MR_String) "unexpected token at start of (sub)term", &conv1_BaseTermParse_21, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_94_94, STATE_VARIABLE_PS_0_53);
              BaseTermParse_21 = (MR_Word) conv1_BaseTermParse_21;
            }
            else
            {
              MR_Word Var_100;
              MR_Word Var_101;
              MR_Word BaseTerm_106;

              {
                Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Atom_15));
              }
              Var_101 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                BaseTerm_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTerm_106, 0) = ((MR_Box) (Var_100));
                MR_hl_field(MR_mktag(0), BaseTerm_106, 1) = ((MR_Box) (Var_101));
                MR_hl_field(MR_mktag(0), BaseTerm_106, 2) = ((MR_Box) (TermContext_16));
              }
              {
                BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_106));
              }
              STATE_VARIABLE_TokensLeft_94_94 = STATE_VARIABLE_TokensLeft_0_51;
            }
            STATE_VARIABLE_PS_95_95 = STATE_VARIABLE_PS_0_53;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String VarName_25 = ((MR_String) (MR_hl_field(MR_mktag(2), Token_9, (MR_Integer) 0)));
          MR_Word Var_26;
          MR_Word TermContext_109;
          MR_Word BaseTerm_110;

          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_T_152, VarName_25, &Var_26, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_95_95);
          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_95_95, Context_10, &TermContext_109);
          {
            BaseTerm_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), BaseTerm_110, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(1), BaseTerm_110, 1) = ((MR_Box) (TermContext_109));
          }
          {
            BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_110));
          }
          STATE_VARIABLE_TokensLeft_94_94 = STATE_VARIABLE_TokensLeft_0_51;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Token_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LexerBase_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Token_9, (MR_Integer) 1)));
              MR_Word Integer_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Token_9, (MR_Integer) 2)));
              MR_Word LexerSignedness_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Token_9, (MR_Integer) 3)));
              MR_Word LexerSize_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Token_9, (MR_Integer) 4)));
              MR_Word Base_31;
              MR_Word Signedness_32;
              MR_Word Size_33;
              MR_Word Var_89;
              MR_Word Var_90;
              MR_Word TermContext_111;
              MR_Word BaseTerm_112;

              Base_31 = mercury__parser__lexer_base_to_term_base_1_f_0(LexerBase_27);
              Signedness_32 = mercury__parser__lexer_signedness_to_term_signedness_1_f_0(LexerSignedness_29);
              Size_33 = mercury__parser__lexer_size_to_term_size_1_f_0(LexerSize_30);
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_111);
              {
                Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Base_31));
                MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Integer_28));
                MR_hl_field(MR_mktag(1), Var_89, 2) = ((MR_Box) (Signedness_32));
                MR_hl_field(MR_mktag(1), Var_89, 3) = ((MR_Box) (Size_33));
              }
              Var_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                BaseTerm_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTerm_112, 0) = ((MR_Box) (Var_89));
                MR_hl_field(MR_mktag(0), BaseTerm_112, 1) = ((MR_Box) (Var_90));
                MR_hl_field(MR_mktag(0), BaseTerm_112, 2) = ((MR_Box) (TermContext_111));
              }
              {
                BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_112));
              }
              STATE_VARIABLE_TokensLeft_94_94 = STATE_VARIABLE_TokensLeft_0_51;
              STATE_VARIABLE_PS_95_95 = STATE_VARIABLE_PS_0_53;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float Float_34 = MR_unbox_float((MR_hl_field(MR_mktag(3), Token_9, (MR_Integer) 1)));
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word TermContext_113;
              MR_Word BaseTerm_114;

              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_113);
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_87, 1) = MR_box_float(Float_34);
              }
              Var_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                BaseTerm_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTerm_114, 0) = ((MR_Box) (Var_87));
                MR_hl_field(MR_mktag(0), BaseTerm_114, 1) = ((MR_Box) (Var_88));
                MR_hl_field(MR_mktag(0), BaseTerm_114, 2) = ((MR_Box) (TermContext_113));
              }
              {
                BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_114));
              }
              STATE_VARIABLE_TokensLeft_94_94 = STATE_VARIABLE_TokensLeft_0_51;
              STATE_VARIABLE_PS_95_95 = STATE_VARIABLE_PS_0_53;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String String_35 = ((MR_String) (MR_hl_field(MR_mktag(3), Token_9, (MR_Integer) 1)));
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word TermContext_115;
              MR_Word BaseTerm_116;

              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_115);
              {
                Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_85, 0) = ((MR_Box) (String_35));
              }
              Var_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                BaseTerm_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTerm_116, 0) = ((MR_Box) (Var_85));
                MR_hl_field(MR_mktag(0), BaseTerm_116, 1) = ((MR_Box) (Var_86));
                MR_hl_field(MR_mktag(0), BaseTerm_116, 2) = ((MR_Box) (TermContext_115));
              }
              {
                BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_116));
              }
              STATE_VARIABLE_TokensLeft_94_94 = STATE_VARIABLE_TokensLeft_0_51;
              STATE_VARIABLE_PS_95_95 = STATE_VARIABLE_PS_0_53;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Name_36 = ((MR_String) (MR_hl_field(MR_mktag(3), Token_9, (MR_Integer) 1)));
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word TermContext_117;
              MR_Word BaseTerm_118;

              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_117);
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Name_36));
              }
              Var_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                BaseTerm_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTerm_118, 0) = ((MR_Box) (Var_83));
                MR_hl_field(MR_mktag(0), BaseTerm_118, 1) = ((MR_Box) (Var_84));
                MR_hl_field(MR_mktag(0), BaseTerm_118, 2) = ((MR_Box) (TermContext_117));
              }
              {
                BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_118));
              }
              STATE_VARIABLE_TokensLeft_94_94 = STATE_VARIABLE_TokensLeft_0_51;
              STATE_VARIABLE_PS_95_95 = STATE_VARIABLE_PS_0_53;
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              MR_Word conv0_BaseTermParse_21;

              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_151, Token_9, Context_10, (MR_String) "unexpected token at start of (sub)term", &conv0_BaseTermParse_21, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_94_94, STATE_VARIABLE_PS_0_53);
              BaseTermParse_21 = (MR_Word) conv0_BaseTermParse_21;
              STATE_VARIABLE_PS_95_95 = STATE_VARIABLE_PS_0_53;
            }
            break;
        }
        break;
    }
    succeeded = ((MR_tag((MR_Word) BaseTermParse_21)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      BaseTermOpen_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseTermParse_21, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_94_94)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_94_94, (MR_Integer) 0)));
        _OpenContext_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_94_94, (MR_Integer) 1)));
        STATE_VARIABLE_TokensLeft_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_94_94, (MR_Integer) 2)));
        succeeded = (Var_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      }
    }
    if (succeeded)
      mercury__parser__parse_higher_order_term_rest_7_p_0(TypeInfo_for_T_152, TypeClassInfo_for_op_table_151, BaseTermOpen_49, Context_10, TermParse_12, STATE_VARIABLE_TokensLeft_102_102, STATE_VARIABLE_TokensLeft_52, STATE_VARIABLE_PS_95_95, STATE_VARIABLE_PS_54);
    else
    {
      *TermParse_12 = BaseTermParse_21;
      *STATE_VARIABLE_PS_54 = STATE_VARIABLE_PS_95_95;
      *STATE_VARIABLE_TokensLeft_52 = STATE_VARIABLE_TokensLeft_94_94;
    }
  }
}

static void MR_CALL 
mercury__parser__do_parse_term_7_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_op_table_26,
  MR_Integer MaxPriority_8,
  MR_Word TermKind_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * STATE_VARIABLE_TokensLeft_19,
  MR_Word STATE_VARIABLE_PS_0_20,
  MR_Word * STATE_VARIABLE_PS_21)
{
  {
    MR_Integer LeftPriority_13;
    MR_Word LeftTerm0_14;
    MR_Word STATE_VARIABLE_TokensLeft_22_22;
    MR_Word STATE_VARIABLE_PS_23_23;

    mercury__parser__parse_left_term_8_p_0(TypeInfo_for_T_27, TypeClassInfo_for_op_table_26, MaxPriority_8, TermKind_9, &LeftPriority_13, &LeftTerm0_14, STATE_VARIABLE_TokensLeft_0_18, &STATE_VARIABLE_TokensLeft_22_22, STATE_VARIABLE_PS_0_20, &STATE_VARIABLE_PS_23_23);
    if (((MR_tag((MR_Word) LeftTerm0_14)) == (MR_mktag((MR_Integer) 1))))
    {
      *Term_10 = LeftTerm0_14;
      *STATE_VARIABLE_TokensLeft_19 = STATE_VARIABLE_TokensLeft_22_22;
      *STATE_VARIABLE_PS_21 = STATE_VARIABLE_PS_23_23;
    }
    else
    {
      MR_Word LeftTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), LeftTerm0_14, (MR_Integer) 0)));

      mercury__parser__parse_rest_9_p_0(TypeInfo_for_T_27, TypeClassInfo_for_op_table_26, MaxPriority_8, TermKind_9, LeftPriority_13, LeftTerm_15, Term_10, STATE_VARIABLE_TokensLeft_22_22, STATE_VARIABLE_TokensLeft_19, STATE_VARIABLE_PS_23_23, STATE_VARIABLE_PS_21);
    }
  }
}

static void MR_CALL 
mercury__parser__parse_arg_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeClassInfo_for_op_table_20,
  MR_Word * Term_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_11,
  MR_Word * STATE_VARIABLE_TokensLeft_12,
  MR_Word STATE_VARIABLE_PS_0_13,
  MR_Word * STATE_VARIABLE_PS_14)
{
  {
    MR_Box OpTable_9;
    MR_Integer ArgPriority_10;
    MR_Integer Var_15;
    MR_Integer LeftPriority_38;
    MR_Word LeftTerm0_39;
    MR_Word STATE_VARIABLE_TokensLeft_22_43;
    MR_Word STATE_VARIABLE_PS_23_44;
    MR_Word TypeInfo_23_23;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_15;

{
#define MR_PROC_LABEL mercury__parser__parse_arg_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_op_table_20 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_23_23  = TypeInfo;
}
    Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_13, (MR_Integer) 0)));
    OpTable_9 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_13, (MR_Integer) 1));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_13, (MR_Integer) 2)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_13, (MR_Integer) 3)));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_20, (MR_Integer) 0)), (MR_Integer) 12)));
    conv1_Var_15 = func_0(((MR_Box) TypeClassInfo_for_op_table_20), OpTable_9);
    Var_15 = ((MR_Integer) conv1_Var_15);
    ArgPriority_10 = (Var_15 + (MR_Integer) 1);
    mercury__parser__parse_left_term_8_p_0(TypeInfo_for_T_21, TypeClassInfo_for_op_table_20, ArgPriority_10, (MR_Integer) 1, &LeftPriority_38, &LeftTerm0_39, STATE_VARIABLE_TokensLeft_0_11, &STATE_VARIABLE_TokensLeft_22_43, STATE_VARIABLE_PS_0_13, &STATE_VARIABLE_PS_23_44);
    if (((MR_tag((MR_Word) LeftTerm0_39)) == (MR_mktag((MR_Integer) 1))))
    {
      *Term_6 = LeftTerm0_39;
      *STATE_VARIABLE_TokensLeft_12 = STATE_VARIABLE_TokensLeft_22_43;
      *STATE_VARIABLE_PS_14 = STATE_VARIABLE_PS_23_44;
    }
    else
    {
      MR_Word LeftTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), LeftTerm0_39, (MR_Integer) 0)));

      mercury__parser__parse_rest_9_p_0(TypeInfo_for_T_21, TypeClassInfo_for_op_table_20, ArgPriority_10, (MR_Integer) 1, LeftPriority_38, LeftTerm_40, Term_6, STATE_VARIABLE_TokensLeft_22_43, STATE_VARIABLE_TokensLeft_12, STATE_VARIABLE_PS_23_44, STATE_VARIABLE_PS_14);
    }
  }
}

static void MR_CALL 
mercury__parser__parse_term_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeClassInfo_for_op_table_20,
  MR_Word * Term_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_10,
  MR_Word * STATE_VARIABLE_TokensLeft_11,
  MR_Word STATE_VARIABLE_PS_0_12,
  MR_Word * STATE_VARIABLE_PS_13)
{
  {
    MR_Box OpTable_9;
    MR_Integer Var_14;
    MR_Integer Var_18;
    MR_Integer LeftPriority_38;
    MR_Word LeftTerm0_39;
    MR_Word STATE_VARIABLE_TokensLeft_22_43;
    MR_Word STATE_VARIABLE_PS_23_44;
    MR_Word TypeInfo_23_23;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_18;

{
#define MR_PROC_LABEL mercury__parser__parse_term_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_op_table_20 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_23_23  = TypeInfo;
}
    Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_12, (MR_Integer) 0)));
    OpTable_9 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_12, (MR_Integer) 1));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_12, (MR_Integer) 2)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_12, (MR_Integer) 3)));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_20, (MR_Integer) 0)), (MR_Integer) 12)));
    conv1_Var_18 = func_0(((MR_Box) TypeClassInfo_for_op_table_20), OpTable_9);
    Var_18 = ((MR_Integer) conv1_Var_18);
    Var_14 = (Var_18 + (MR_Integer) 1);
    mercury__parser__parse_left_term_8_p_0(TypeInfo_for_T_21, TypeClassInfo_for_op_table_20, Var_14, (MR_Integer) 0, &LeftPriority_38, &LeftTerm0_39, STATE_VARIABLE_TokensLeft_0_10, &STATE_VARIABLE_TokensLeft_22_43, STATE_VARIABLE_PS_0_12, &STATE_VARIABLE_PS_23_44);
    if (((MR_tag((MR_Word) LeftTerm0_39)) == (MR_mktag((MR_Integer) 1))))
    {
      *Term_6 = LeftTerm0_39;
      *STATE_VARIABLE_TokensLeft_11 = STATE_VARIABLE_TokensLeft_22_43;
      *STATE_VARIABLE_PS_13 = STATE_VARIABLE_PS_23_44;
    }
    else
    {
      MR_Word LeftTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), LeftTerm0_39, (MR_Integer) 0)));

      mercury__parser__parse_rest_9_p_0(TypeInfo_for_T_21, TypeClassInfo_for_op_table_20, Var_14, (MR_Integer) 0, LeftPriority_38, LeftTerm_40, Term_6, STATE_VARIABLE_TokensLeft_22_43, STATE_VARIABLE_TokensLeft_11, STATE_VARIABLE_PS_23_44, STATE_VARIABLE_PS_13);
    }
  }
}

static void MR_CALL 
mercury__parser__parse_higher_order_term_rest_7_p_0(
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
    MR_Word STATE_VARIABLE_TokensLeft_24_24;
    MR_Word STATE_VARIABLE_PS_25_25;
    MR_String FileName_40;
    MR_Word TypeInfo_36_36;
    MR_Box Var_43;
    MR_Word Var_44;
    MR_Word Var_45;

    /* setup for tailcalls optimized into a loop */
{
#define MR_PROC_LABEL mercury__parser__parse_higher_order_term_rest_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_op_table_33 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_36_36  = TypeInfo;
}
    FileName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_22, (MR_Integer) 0)));
    Var_43 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_22, (MR_Integer) 1));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_22, (MR_Integer) 2)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_22, (MR_Integer) 3)));
    {
      TermContext_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TermContext_13, 0) = ((MR_Box) (FileName_40));
      MR_hl_field(MR_mktag(0), TermContext_13, 1) = ((MR_Box) (Context_9));
    }
    mercury__parser__parse_args_5_p_0(TypeInfo_for_T_34, TypeClassInfo_for_op_table_33, &ArgsParse_14, STATE_VARIABLE_TokensLeft_0_20, &STATE_VARIABLE_TokensLeft_24_24, STATE_VARIABLE_PS_0_22, &STATE_VARIABLE_PS_25_25);
    if (((MR_tag((MR_Word) ArgsParse_14)) == (MR_mktag((MR_Integer) 1))))
    {
      *TermParse_10 = (MR_Word) ArgsParse_14;
      *STATE_VARIABLE_TokensLeft_21 = STATE_VARIABLE_TokensLeft_24_24;
      *STATE_VARIABLE_PS_23 = STATE_VARIABLE_PS_25_25;
    }
    else
    {
      MR_Word Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgsParse_14, (MR_Integer) 0)));
      MR_Word ApplyTerm_16;
      MR_Word Var_26 = (MR_Word) &mercury__parser_scalar_common_5[3];
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_TokensLeft_29_29;
      MR_Word Var_30;
      MR_Integer _OpenContext_17;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (BaseTerm_8));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Args_15));
      }
      {
        ApplyTerm_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ApplyTerm_16, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), ApplyTerm_16, 1) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), ApplyTerm_16, 2) = ((MR_Box) (TermContext_13));
      }
      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_24_24)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_24_24, (MR_Integer) 0)));
        _OpenContext_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_24_24, (MR_Integer) 1)));
        STATE_VARIABLE_TokensLeft_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_24_24, (MR_Integer) 2)));
        succeeded = (Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      }
      if (succeeded)
      {
        MR_Word next_value_of_BaseTerm_8 = ApplyTerm_16;
        MR_Word next_value_of_STATE_VARIABLE_TokensLeft_0_20 = STATE_VARIABLE_TokensLeft_29_29;
        MR_Word next_value_of_STATE_VARIABLE_PS_0_22 = STATE_VARIABLE_PS_25_25;

        /* direct tailcall eliminated */
        BaseTerm_8 = next_value_of_BaseTerm_8;
        STATE_VARIABLE_TokensLeft_0_20 = next_value_of_STATE_VARIABLE_TokensLeft_0_20;
        STATE_VARIABLE_PS_0_22 = next_value_of_STATE_VARIABLE_PS_0_22;
        continue;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *TermParse_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ApplyTerm_16));
        }
        *STATE_VARIABLE_PS_23 = STATE_VARIABLE_PS_25_25;
        *STATE_VARIABLE_TokensLeft_21 = STATE_VARIABLE_TokensLeft_24_24;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__parser__parse_rest_9_p_0(
  MR_Word TypeInfo_for_T_84,
  MR_Word TypeClassInfo_for_op_table_83,
  MR_Integer MaxPriority_10,
  MR_Word TermKind_11,
  MR_Integer LeftPriority_12,
  MR_Word LeftTerm_13,
  MR_Word * Term_14,
  MR_Word STATE_VARIABLE_TokensLeft_0_41,
  MR_Word * STATE_VARIABLE_TokensLeft_42,
  MR_Word STATE_VARIABLE_PS_0_43,
  MR_Word * STATE_VARIABLE_PS_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_0_41)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer Context_18;
    MR_Integer OpPriority_24;
    MR_Word RightAssoc_26;
    MR_Word MaybeQualifier_27;
    MR_String Op_28;
    MR_Word VariableTerms_29;
    MR_Word STATE_VARIABLE_PS_47_47;
    MR_Word STATE_VARIABLE_TokensLeft_48_48;
    MR_Word Token_17;
    MR_String Op0_19;
    MR_Word LeftAssoc_25;
    MR_Word STATE_VARIABLE_TokensLeft_45_45;
    MR_Integer OpPriority0_21;
    MR_Word LeftAssoc0_22;
    MR_Word RightAssoc0_23;
    MR_Box OpTable_20;
    MR_String Var_99;
    MR_Word Var_100;
    MR_Word Var_101;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      Token_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 0)));
      Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 1)));
      STATE_VARIABLE_TokensLeft_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 2)));
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
                succeeded = (TermKind_11 == (MR_Integer) 2);
                succeeded = !(succeeded);
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
            Op0_19 = ((MR_String) (MR_hl_field(MR_mktag(1), Token_17, (MR_Integer) 0)));
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        succeeded = (strcmp(Op0_19, (MR_String) "\140") == 0);
        if (succeeded)
        {
          Var_99 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 0)));
          OpTable_20 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
          Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 2)));
          Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 3)));
          succeeded = mercury__ops__lookup_operator_term_4_p_0(TypeClassInfo_for_op_table_83, OpTable_20, &OpPriority0_21, &LeftAssoc0_22, &RightAssoc0_23);
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_TokensLeft_46_46;
          MR_Word Var_49;
          MR_String Var_50;
          MR_Integer _Context_30;

          OpPriority_24 = OpPriority0_21;
          LeftAssoc_25 = LeftAssoc0_22;
          RightAssoc_26 = RightAssoc0_23;
          succeeded = mercury__parser__parse_backquoted_operator_7_p_0(TypeInfo_for_T_84, TypeClassInfo_for_op_table_83, &MaybeQualifier_27, &Op_28, &VariableTerms_29, STATE_VARIABLE_TokensLeft_45_45, &STATE_VARIABLE_TokensLeft_46_46, STATE_VARIABLE_PS_0_43, &STATE_VARIABLE_PS_47_47);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_46_46)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_46_46, (MR_Integer) 0)));
              _Context_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_46_46, (MR_Integer) 1)));
              STATE_VARIABLE_TokensLeft_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_46_46, (MR_Integer) 2)));
              succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_50 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0)));
                succeeded = (strcmp(Var_50, (MR_String) "\140") == 0);
              }
            }
          }
        }
        else
        {
          MR_Box OpTable_71;
          MR_String Var_104;
          MR_Word Var_105;
          MR_Word Var_106;

          Op_28 = Op0_19;
          VariableTerms_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MaybeQualifier_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Var_104 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 0)));
          OpTable_71 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
          Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 2)));
          Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 3)));
          succeeded = mercury__ops__lookup_infix_op_5_p_0(TypeClassInfo_for_op_table_83, OpTable_71, Op_28, &OpPriority_24, &LeftAssoc_25, &RightAssoc_26);
          if (succeeded)
          {
            STATE_VARIABLE_PS_47_47 = STATE_VARIABLE_PS_0_43;
            STATE_VARIABLE_TokensLeft_48_48 = STATE_VARIABLE_TokensLeft_45_45;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          succeeded = (OpPriority_24 <= MaxPriority_10);
          if (succeeded)
            succeeded = mercury__parser__check_priority_3_p_0(LeftAssoc_25, OpPriority_24, LeftPriority_12);
        }
      }
    }
    if (succeeded)
    {
      MR_Integer RightPriority_31;
      MR_Word RightTerm0_32;
      MR_Word STATE_VARIABLE_TokensLeft_51_51;
      MR_Word STATE_VARIABLE_PS_52_52;

      switch (RightAssoc_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            RightPriority_31 = (OpPriority_24 - (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
          RightPriority_31 = OpPriority_24;
          break;
      }
      mercury__parser__do_parse_term_7_p_0(TypeInfo_for_T_84, TypeClassInfo_for_op_table_83, RightPriority_31, TermKind_11, &RightTerm0_32, STATE_VARIABLE_TokensLeft_48_48, &STATE_VARIABLE_TokensLeft_51_51, STATE_VARIABLE_PS_47_47, &STATE_VARIABLE_PS_52_52);
      if (((MR_tag((MR_Word) RightTerm0_32)) == (MR_mktag((MR_Integer) 1))))
      {
        *Term_14 = RightTerm0_32;
        *STATE_VARIABLE_TokensLeft_42 = STATE_VARIABLE_TokensLeft_51_51;
        *STATE_VARIABLE_PS_44 = STATE_VARIABLE_PS_52_52;
      }
      else
      {
        MR_Word TypeCtorInfo_91_91;
        MR_Word TypeInfo_92_92;
        MR_Word RightTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), RightTerm0_32, (MR_Integer) 0)));
        MR_Word TermContext_34;
        MR_Word OpTermArgs0_35;
        MR_Word OpTerm0_36;
        MR_Word OpTerm_37;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word conv0_OpTermArgs0_35;
        MR_Integer next_value_of_LeftPriority_12;
        MR_Word next_value_of_LeftTerm_13;
        MR_Word next_value_of_STATE_VARIABLE_TokensLeft_0_41;
        MR_Word next_value_of_STATE_VARIABLE_PS_0_43;

        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_52_52, Context_18, &TermContext_34);
        TypeCtorInfo_91_91 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
        {
          TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_92_92, 0) = ((MR_Box) (TypeCtorInfo_91_91));
          MR_hl_field(MR_mktag(0), TypeInfo_92_92, 1) = ((MR_Box) (TypeInfo_for_T_84));
        }
        Var_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (RightTerm_33));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (LeftTerm_13));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
        }
        conv0_OpTermArgs0_35 = mercury__list__f_43_43_2_f_0(TypeInfo_92_92, (MR_Word) VariableTerms_29, (MR_Word) Var_53);
        OpTermArgs0_35 = (MR_Word) conv0_OpTermArgs0_35;
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Op_28));
        }
        {
          OpTerm0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OpTerm0_36, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), OpTerm0_36, 1) = ((MR_Box) (OpTermArgs0_35));
          MR_hl_field(MR_mktag(0), OpTerm0_36, 2) = ((MR_Box) (TermContext_34));
        }
        if ((MaybeQualifier_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          OpTerm_37 = OpTerm0_36;
        else
        {
          MR_Word QTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeQualifier_27, (MR_Integer) 0)));
          MR_Word Var_57 = (MR_Word) &mercury__parser_scalar_common_5[0];
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (OpTerm0_36));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (QTerm_38));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
          }
          {
            OpTerm_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), OpTerm_37, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), OpTerm_37, 1) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(0), OpTerm_37, 2) = ((MR_Box) (TermContext_34));
          }
        }
        /* direct tailcall eliminated */
        next_value_of_LeftPriority_12 = OpPriority_24;
        next_value_of_LeftTerm_13 = OpTerm_37;
        next_value_of_STATE_VARIABLE_TokensLeft_0_41 = STATE_VARIABLE_TokensLeft_51_51;
        next_value_of_STATE_VARIABLE_PS_0_43 = STATE_VARIABLE_PS_52_52;
        LeftPriority_12 = next_value_of_LeftPriority_12;
        LeftTerm_13 = next_value_of_LeftTerm_13;
        STATE_VARIABLE_TokensLeft_0_41 = next_value_of_STATE_VARIABLE_TokensLeft_0_41;
        STATE_VARIABLE_PS_0_43 = next_value_of_STATE_VARIABLE_PS_0_43;
        continue;
      }
    }
    else
    {
      MR_Word STATE_VARIABLE_TokensLeft_64_64;
      MR_Integer Context_76;
      MR_Integer OpPriority_78;
      MR_String Op_80;
      MR_Word Var_65;
      MR_Box OpTable_72;
      MR_Word LeftAssoc_73;
      MR_String Var_113;
      MR_Word Var_114;
      MR_Word Var_115;

      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_0_41)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 0)));
        Context_76 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 1)));
        STATE_VARIABLE_TokensLeft_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Op_80 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_65, (MR_Integer) 0)));
          Var_113 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 0)));
          OpTable_72 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
          Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 2)));
          Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_43, (MR_Integer) 3)));
          succeeded = mercury__ops__lookup_postfix_op_4_p_0(TypeClassInfo_for_op_table_83, OpTable_72, Op_80, &OpPriority_78, &LeftAssoc_73);
          if (succeeded)
          {
            succeeded = (OpPriority_78 <= MaxPriority_10);
            if (succeeded)
              succeeded = mercury__parser__check_priority_3_p_0(LeftAssoc_73, OpPriority_78, LeftPriority_12);
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word TermContext_74;
        MR_Word OpTerm_75;
        MR_Integer next_value_of_LeftPriority_12;
        MR_Word next_value_of_LeftTerm_13;
        MR_Word next_value_of_STATE_VARIABLE_TokensLeft_0_41;

        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_43, Context_76, &TermContext_74);
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Op_80));
        }
        Var_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (LeftTerm_13));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
        }
        {
          OpTerm_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OpTerm_75, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), OpTerm_75, 1) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), OpTerm_75, 2) = ((MR_Box) (TermContext_74));
        }
        /* direct tailcall eliminated */
        next_value_of_LeftPriority_12 = OpPriority_78;
        next_value_of_LeftTerm_13 = OpTerm_75;
        next_value_of_STATE_VARIABLE_TokensLeft_0_41 = STATE_VARIABLE_TokensLeft_64_64;
        LeftPriority_12 = next_value_of_LeftPriority_12;
        LeftTerm_13 = next_value_of_LeftTerm_13;
        STATE_VARIABLE_TokensLeft_0_41 = next_value_of_STATE_VARIABLE_TokensLeft_0_41;
        continue;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Term_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LeftTerm_13));
        }
        *STATE_VARIABLE_PS_44 = STATE_VARIABLE_PS_0_43;
        *STATE_VARIABLE_TokensLeft_42 = STATE_VARIABLE_TokensLeft_0_41;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__parser__parse_args_5_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeClassInfo_for_op_table_34,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * STATE_VARIABLE_TokensLeft_20,
  MR_Word STATE_VARIABLE_PS_0_21,
  MR_Word * STATE_VARIABLE_PS_22)
{
  {
    MR_bool succeeded;
    MR_Word Arg0_9;
    MR_Word STATE_VARIABLE_TokensLeft_23_23;
    MR_Word STATE_VARIABLE_PS_24_24;
    MR_Box OpTable_47 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_21, (MR_Integer) 1));
    MR_Integer ArgPriority_48;
    MR_Integer Var_49;
    MR_Integer LeftPriority_70;
    MR_Word LeftTerm0_71;
    MR_Word STATE_VARIABLE_TokensLeft_22_75;
    MR_Word STATE_VARIABLE_PS_23_76;
    MR_String Var_58 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_21, (MR_Integer) 0)));
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_21, (MR_Integer) 2)));
    MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_21, (MR_Integer) 3)));
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box conv1_Var_49;

    conv1_Var_49 = func_0(((MR_Box) TypeClassInfo_for_op_table_34), OpTable_47);
    Var_49 = ((MR_Integer) conv1_Var_49);
    ArgPriority_48 = (Var_49 + (MR_Integer) 1);
    mercury__parser__parse_left_term_8_p_0(TypeInfo_for_T_35, TypeClassInfo_for_op_table_34, ArgPriority_48, (MR_Integer) 1, &LeftPriority_70, &LeftTerm0_71, STATE_VARIABLE_TokensLeft_0_19, &STATE_VARIABLE_TokensLeft_22_75, STATE_VARIABLE_PS_0_21, &STATE_VARIABLE_PS_23_76);
    if (((MR_tag((MR_Word) LeftTerm0_71)) == (MR_mktag((MR_Integer) 1))))
    {
      Arg0_9 = LeftTerm0_71;
      STATE_VARIABLE_TokensLeft_23_23 = STATE_VARIABLE_TokensLeft_22_75;
      STATE_VARIABLE_PS_24_24 = STATE_VARIABLE_PS_23_76;
    }
    else
    {
      MR_Word LeftTerm_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), LeftTerm0_71, (MR_Integer) 0)));

      mercury__parser__parse_rest_9_p_0(TypeInfo_for_T_35, TypeClassInfo_for_op_table_34, ArgPriority_48, (MR_Integer) 1, LeftPriority_70, LeftTerm_72, &Arg0_9, STATE_VARIABLE_TokensLeft_22_75, &STATE_VARIABLE_TokensLeft_23_23, STATE_VARIABLE_PS_23_76, &STATE_VARIABLE_PS_24_24);
    }
    if (((MR_tag((MR_Word) Arg0_9)) == (MR_mktag((MR_Integer) 1))))
    {
      *List_6 = (MR_Word) Arg0_9;
      *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_23_23;
      *STATE_VARIABLE_PS_22 = STATE_VARIABLE_PS_24_24;
    }
    else
    {
      MR_Word Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_9, (MR_Integer) 0)));

      if ((STATE_VARIABLE_TokensLeft_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *List_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file in argument list"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TokensLeft_23_23));
        }
        *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_23_23;
        *STATE_VARIABLE_PS_22 = STATE_VARIABLE_PS_24_24;
      }
      else
      {
        MR_Word Token_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 0)));
        MR_Integer Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 1)));
        MR_Word STATE_VARIABLE_TokensLeft_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 2)));

        succeeded = (Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
        if (succeeded)
        {
          MR_Word Tail0_13;

          mercury__parser__parse_args_5_p_0(TypeInfo_for_T_35, TypeClassInfo_for_op_table_34, &Tail0_13, STATE_VARIABLE_TokensLeft_26_26, STATE_VARIABLE_TokensLeft_20, STATE_VARIABLE_PS_24_24, STATE_VARIABLE_PS_22);
          if (((MR_tag((MR_Word) Tail0_13)) == (MR_mktag((MR_Integer) 1))))
            *List_6 = Tail0_13;
          else
          {
            MR_Word Tail_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tail0_13, (MR_Integer) 0)));
            MR_Word Var_29;

            {
              Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Arg_10));
              MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Tail_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *List_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
            }
          }
        }
        else
        {
          succeeded = (Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          if (succeeded)
          {
            MR_Word Var_30;
            MR_Word Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Arg_10));
              MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_31));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *List_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
            }
            *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_26_26;
          }
          else
          {
            MR_Word conv2_List_6;

            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_34, Token_11, Context_12, (MR_String) "expected \140,\', \140)\', or operator", &conv2_List_6, STATE_VARIABLE_TokensLeft_26_26, STATE_VARIABLE_TokensLeft_20, STATE_VARIABLE_PS_24_24);
            *List_6 = (MR_Word) conv2_List_6;
          }
          *STATE_VARIABLE_PS_22 = STATE_VARIABLE_PS_24_24;
        }
      }
    }
  }
}

static void MR_CALL 
mercury__parser__parse_list_tail_6_p_0(
  MR_Word TypeInfo_for_T_68,
  MR_Word TypeClassInfo_for_op_table_67,
  MR_Word Arg_7,
  MR_Word * List_8,
  MR_Word STATE_VARIABLE_TokensLeft_0_21,
  MR_Word * STATE_VARIABLE_TokensLeft_22,
  MR_Word STATE_VARIABLE_PS_0_23,
  MR_Word * STATE_VARIABLE_PS_24)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_TokensLeft_0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *List_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file in list"));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TokensLeft_0_21));
      }
      *STATE_VARIABLE_TokensLeft_22 = STATE_VARIABLE_TokensLeft_0_21;
      *STATE_VARIABLE_PS_24 = STATE_VARIABLE_PS_0_23;
    }
    else
    {
      MR_Word Token_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 0)));
      MR_Integer Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 1)));
      MR_Word TermContext_13;
      MR_Word STATE_VARIABLE_TokensLeft_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 2)));
      MR_String FileName_78 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_23, (MR_Integer) 0)));
      MR_Box Var_81 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_23, (MR_Integer) 1));
      MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_23, (MR_Integer) 2)));
      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_23, (MR_Integer) 3)));

      {
        TermContext_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TermContext_13, 0) = ((MR_Box) (FileName_78));
        MR_hl_field(MR_mktag(0), TermContext_13, 1) = ((MR_Box) (Context_12));
      }
      succeeded = (Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
      if (succeeded)
      {
        MR_Word Tail0_14;

        mercury__parser__parse_list_5_p_0(TypeInfo_for_T_68, TypeClassInfo_for_op_table_67, &Tail0_14, STATE_VARIABLE_TokensLeft_26_26, STATE_VARIABLE_TokensLeft_22, STATE_VARIABLE_PS_0_23, STATE_VARIABLE_PS_24);
        if (((MR_tag((MR_Word) Tail0_14)) == (MR_mktag((MR_Integer) 1))))
          *List_8 = Tail0_14;
        else
        {
          MR_Word Tail_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tail0_14, (MR_Integer) 0)));
          MR_Word Var_29;
          MR_Word Var_30 = (MR_Word) &mercury__parser_scalar_common_5[1];
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Tail_15));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_34));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Arg_7));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (TermContext_13));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *List_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
          }
        }
      }
      else
      {
        succeeded = (Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_TokensLeft_35_35;
          MR_Word Tail0_60;

          mercury__parser__parse_arg_5_p_0(TypeInfo_for_T_68, TypeClassInfo_for_op_table_67, &Tail0_60, STATE_VARIABLE_TokensLeft_26_26, &STATE_VARIABLE_TokensLeft_35_35, STATE_VARIABLE_PS_0_23, STATE_VARIABLE_PS_24);
          if (((MR_tag((MR_Word) Tail0_60)) == (MR_mktag((MR_Integer) 1))))
          {
            *List_8 = Tail0_60;
            *STATE_VARIABLE_TokensLeft_22 = STATE_VARIABLE_TokensLeft_35_35;
          }
          else
          {
            MR_Word Tail_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tail0_60, (MR_Integer) 0)));
            MR_Word STATE_VARIABLE_TokensLeft_37_37;
            MR_Word Var_38;
            MR_Integer _Context_18;

            succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_35_35)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 0)));
              _Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 1)));
              STATE_VARIABLE_TokensLeft_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 2)));
              succeeded = (Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            }
            if (succeeded)
            {
              MR_Word Var_39;
              MR_Word Var_40;
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word Var_44;

              *STATE_VARIABLE_TokensLeft_22 = STATE_VARIABLE_TokensLeft_37_37;
              Var_40 = (MR_Word) &mercury__parser_scalar_common_5[1];
              Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Tail_58));
                MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
              }
              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Arg_7));
                MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
              }
              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Var_40));
                MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (Var_42));
                MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (TermContext_13));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *List_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
              }
            }
            else
            {
              MR_Word conv0_List_8;

              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(TypeClassInfo_for_op_table_67, (MR_String) "expecting \']\' or operator", &conv0_List_8, STATE_VARIABLE_TokensLeft_35_35, STATE_VARIABLE_TokensLeft_22, *STATE_VARIABLE_PS_24);
              *List_8 = (MR_Word) conv0_List_8;
            }
          }
        }
        else
        {
          succeeded = (Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          if (succeeded)
          {
            MR_Word Var_47 = (MR_Word) &mercury__parser_scalar_common_5[2];
            MR_Word Var_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Tail_62;

            {
              Tail_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Tail_62, 0) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(0), Tail_62, 1) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(0), Tail_62, 2) = ((MR_Box) (TermContext_13));
            }
            Var_51 = (MR_Word) &mercury__parser_scalar_common_5[1];
            Var_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Tail_62));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Arg_7));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
            }
            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Var_51));
              MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (TermContext_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *List_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
            }
            *STATE_VARIABLE_TokensLeft_22 = STATE_VARIABLE_TokensLeft_26_26;
          }
          else
          {
            MR_Word conv1_List_8;

            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_67, Token_11, Context_12, (MR_String) "expected comma, \140|\', \140]\', or operator", &conv1_List_8, STATE_VARIABLE_TokensLeft_26_26, STATE_VARIABLE_TokensLeft_22, STATE_VARIABLE_PS_0_23);
            *List_8 = (MR_Word) conv1_List_8;
          }
          *STATE_VARIABLE_PS_24 = STATE_VARIABLE_PS_0_23;
        }
      }
    }
  }
}

static void MR_CALL 
mercury__parser__parse_special_atom_7_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_op_table_31,
  MR_String Atom_8,
  MR_Word TermContext_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * STATE_VARIABLE_TokensLeft_19,
  MR_Word STATE_VARIABLE_PS_0_20,
  MR_Word * STATE_VARIABLE_PS_21)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_0_18)) == (MR_mktag((MR_Integer) 1)));
    MR_Word STATE_VARIABLE_TokensLeft_22_22;
    MR_Word Var_23;
    MR_Integer _Context_13;

    if (succeeded)
    {
      Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 0)));
      _Context_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 1)));
      STATE_VARIABLE_TokensLeft_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 2)));
      succeeded = (Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
    if (succeeded)
    {
      MR_Word Args0_14;

      mercury__parser__parse_args_5_p_0(TypeInfo_for_T_32, TypeClassInfo_for_op_table_31, &Args0_14, STATE_VARIABLE_TokensLeft_22_22, STATE_VARIABLE_TokensLeft_19, STATE_VARIABLE_PS_0_20, STATE_VARIABLE_PS_21);
      if (((MR_tag((MR_Word) Args0_14)) == (MR_mktag((MR_Integer) 1))))
        *Term_10 = (MR_Word) Args0_14;
      else
      {
        MR_Word Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Args0_14, (MR_Integer) 0)));
        MR_Word Var_26;
        MR_Word Var_27;

        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Atom_8));
        }
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Args_15));
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (TermContext_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Term_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
        }
      }
    }
    else
    {
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Atom_8));
      }
      Var_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (TermContext_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Term_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      }
      *STATE_VARIABLE_PS_21 = STATE_VARIABLE_PS_0_20;
      *STATE_VARIABLE_TokensLeft_19 = STATE_VARIABLE_TokensLeft_0_18;
    }
  }
}

static void MR_CALL 
mercury__parser__parse_left_term_8_p_0(
  MR_Word TypeInfo_for_T_113,
  MR_Word TypeClassInfo_for_op_table_112,
  MR_Integer MaxPriority_9,
  MR_Word TermKind_10,
  MR_Integer * OpPriority_11,
  MR_Word * Term_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_53,
  MR_Word * STATE_VARIABLE_TokensLeft_54,
  MR_Word STATE_VARIABLE_PS_0_55,
  MR_Word * STATE_VARIABLE_PS_56)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_TokensLeft_0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Term_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file at start of sub-term"));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TokensLeft_0_53));
      }
      *OpPriority_11 = (MR_Integer) 0;
      *STATE_VARIABLE_TokensLeft_54 = STATE_VARIABLE_TokensLeft_0_53;
      *STATE_VARIABLE_PS_56 = STATE_VARIABLE_PS_0_55;
    }
    else
    {
      MR_Word Token_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_53, (MR_Integer) 0)));
      MR_Integer Context_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_53, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_TokensLeft_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_53, (MR_Integer) 2)));
      MR_Word NewFunctor_26;
      MR_Word STATE_VARIABLE_TokensLeft_59_59;
      MR_String TokenName_17;
      MR_Word NextToken_18;
      MR_Integer _NextContext_19;

      succeeded = ((MR_tag((MR_Word) Token_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        TokenName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), Token_15, (MR_Integer) 0)));
        succeeded = (strcmp(TokenName_17, (MR_String) "-") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            NextToken_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
            _NextContext_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
            STATE_VARIABLE_TokensLeft_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
            if (((((MR_tag((MR_Word) NextToken_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextToken_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
            {
              MR_Float F_27 = MR_unbox_float((MR_hl_field(MR_mktag(3), NextToken_18, (MR_Integer) 1)));
              MR_Float NegF_28 = (((MR_Float) 0.0000000000000000) - F_27);

              {
                NewFunctor_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), NewFunctor_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), NewFunctor_26, 1) = MR_box_float(NegF_28);
              }
              succeeded = MR_TRUE;
            }
            else
            if (((((MR_tag((MR_Word) NextToken_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextToken_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
            {
              MR_Word LexerBase_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), NextToken_18, (MR_Integer) 1)));
              MR_Word X_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), NextToken_18, (MR_Integer) 2)));
              MR_Word LexerSize_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), NextToken_18, (MR_Integer) 4)));
              MR_Word NegX_23;
              MR_Word Base_24;
              MR_Word Size_25;
              MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), NextToken_18, (MR_Integer) 3)));
              MR_Word Var_62;

              succeeded = (Var_61 == (MR_Integer) 0);
              if (succeeded)
              {
                NegX_23 = mercury__integer__f_minus_1_f_0(X_21);
                Base_24 = mercury__parser__lexer_base_to_term_base_1_f_0(LexerBase_20);
                Size_25 = mercury__parser__lexer_size_to_term_size_1_f_0(LexerSize_22);
                Var_62 = (MR_Integer) 0;
                {
                  NewFunctor_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NewFunctor_26, 0) = ((MR_Box) (Base_24));
                  MR_hl_field(MR_mktag(1), NewFunctor_26, 1) = ((MR_Box) (NegX_23));
                  MR_hl_field(MR_mktag(1), NewFunctor_26, 2) = ((MR_Box) (Var_62));
                  MR_hl_field(MR_mktag(1), NewFunctor_26, 3) = ((MR_Box) (Size_25));
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
        MR_Word TermContext_29;
        MR_Word Var_63;
        MR_Word Var_64;

        *STATE_VARIABLE_TokensLeft_54 = STATE_VARIABLE_TokensLeft_59_59;
        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_55, Context_16, &TermContext_29);
        Var_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (NewFunctor_26));
          MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (TermContext_29));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Term_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
        }
        *OpPriority_11 = (MR_Integer) 0;
        *STATE_VARIABLE_PS_56 = STATE_VARIABLE_PS_0_55;
      }
      else
      {
        MR_Word OpInfo_31;
        MR_Word OtherOpInfos_32;
        MR_String TokenName_109;
        MR_Box OpTable_30;
        MR_String Var_126;
        MR_Word Var_127;
        MR_Word Var_128;

        succeeded = ((MR_tag((MR_Word) Token_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          TokenName_109 = ((MR_String) (MR_hl_field(MR_mktag(1), Token_15, (MR_Integer) 0)));
          Var_126 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_55, (MR_Integer) 0)));
          OpTable_30 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_55, (MR_Integer) 1));
          Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_55, (MR_Integer) 2)));
          Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_55, (MR_Integer) 3)));
          succeeded = mercury__ops__lookup_op_infos_4_p_0(TypeClassInfo_for_op_table_112, OpTable_30, TokenName_109, &OpInfo_31, &OtherOpInfos_32);
        }
        if (succeeded)
        {
          MR_Integer BinOpPriority_33;
          MR_Word RightAssoc_34;
          MR_Word RightRightAssoc_35;
          MR_Word Var_65;
          MR_Word NextToken_86;
          MR_Word Var_122;
          MR_Integer Var_36;
          MR_Word Var_37;

          succeeded = mercury__parser__find_first_binary_prefix_op_5_p_0(OpInfo_31, OtherOpInfos_32, &BinOpPriority_33, &RightAssoc_34, &RightRightAssoc_35);
          if (succeeded)
          {
            succeeded = (BinOpPriority_33 <= MaxPriority_9);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                NextToken_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
                Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
                Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
                Var_65 = (MR_Integer) 1;
                mercury__parser__could_start_term_2_p_0(NextToken_86, &Var_122);
                succeeded = (Var_65 == Var_122);
                if (succeeded)
                {
                  succeeded = (NextToken_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  succeeded = !(succeeded);
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Integer RightPriority_38;
            MR_Integer RightRightPriority_39;
            MR_Word RightResult_40;
            MR_Word STATE_VARIABLE_TokensLeft_66_66;
            MR_Word STATE_VARIABLE_PS_67_67;

            *OpPriority_11 = BinOpPriority_33;
            switch (RightAssoc_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RightPriority_38 = (*OpPriority_11 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                RightPriority_38 = *OpPriority_11;
                break;
            }
            switch (RightRightAssoc_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RightRightPriority_39 = (*OpPriority_11 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                RightRightPriority_39 = *OpPriority_11;
                break;
            }
            mercury__parser__do_parse_term_7_p_0(TypeInfo_for_T_113, TypeClassInfo_for_op_table_112, RightPriority_38, TermKind_10, &RightResult_40, STATE_VARIABLE_TokensLeft_58_58, &STATE_VARIABLE_TokensLeft_66_66, STATE_VARIABLE_PS_0_55, &STATE_VARIABLE_PS_67_67);
            if (((MR_tag((MR_Word) RightResult_40)) == (MR_mktag((MR_Integer) 1))))
            {
              *Term_12 = RightResult_40;
              *STATE_VARIABLE_TokensLeft_54 = STATE_VARIABLE_TokensLeft_66_66;
              *STATE_VARIABLE_PS_56 = STATE_VARIABLE_PS_67_67;
            }
            else
            {
              MR_Word RightTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), RightResult_40, (MR_Integer) 0)));
              MR_Word RightRightResult_42;

              mercury__parser__do_parse_term_7_p_0(TypeInfo_for_T_113, TypeClassInfo_for_op_table_112, RightRightPriority_39, TermKind_10, &RightRightResult_42, STATE_VARIABLE_TokensLeft_66_66, STATE_VARIABLE_TokensLeft_54, STATE_VARIABLE_PS_67_67, STATE_VARIABLE_PS_56);
              if (((MR_tag((MR_Word) RightRightResult_42)) == (MR_mktag((MR_Integer) 1))))
                *Term_12 = RightRightResult_42;
              else
              {
                MR_Word RightRightTerm_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), RightRightResult_42, (MR_Integer) 0)));
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word TermContext_87;

                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*STATE_VARIABLE_PS_56, Context_16, &TermContext_87);
                {
                  Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (TokenName_109));
                }
                Var_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (RightRightTerm_43));
                  MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
                }
                {
                  Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (RightTerm_41));
                  MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
                }
                {
                  Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_71));
                  MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Var_72));
                  MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) (TermContext_87));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Term_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
                }
              }
            }
          }
          else
          {
            MR_Integer UnOpPriority_48;
            MR_Word RightAssoc_103;
            MR_Word Var_75;
            MR_Word NextToken_92;
            MR_Word Var_123;
            MR_Integer Var_49;
            MR_Word Var_50;

            succeeded = mercury__parser__find_first_prefix_op_4_p_0(OpInfo_31, OtherOpInfos_32, &UnOpPriority_48, &RightAssoc_103);
            if (succeeded)
            {
              succeeded = (UnOpPriority_48 <= MaxPriority_9);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  NextToken_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
                  Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
                  Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
                  Var_75 = (MR_Integer) 1;
                  mercury__parser__could_start_term_2_p_0(NextToken_92, &Var_123);
                  succeeded = (Var_75 == Var_123);
                  if (succeeded)
                  {
                    succeeded = (NextToken_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    succeeded = !(succeeded);
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Integer RightPriority_98;
              MR_Word RightResult_99;

              *OpPriority_11 = UnOpPriority_48;
              switch (RightAssoc_103) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    RightPriority_98 = (*OpPriority_11 - (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  RightPriority_98 = *OpPriority_11;
                  break;
              }
              mercury__parser__do_parse_term_7_p_0(TypeInfo_for_T_113, TypeClassInfo_for_op_table_112, RightPriority_98, TermKind_10, &RightResult_99, STATE_VARIABLE_TokensLeft_58_58, STATE_VARIABLE_TokensLeft_54, STATE_VARIABLE_PS_0_55, STATE_VARIABLE_PS_56);
              if (((MR_tag((MR_Word) RightResult_99)) == (MR_mktag((MR_Integer) 1))))
                *Term_12 = RightResult_99;
              else
              {
                MR_Word Var_78;
                MR_Word Var_79;
                MR_Word Var_80;
                MR_Word Var_81;
                MR_Word TermContext_93;
                MR_Word RightTerm_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), RightResult_99, (MR_Integer) 0)));

                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*STATE_VARIABLE_PS_56, Context_16, &TermContext_93);
                {
                  Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (TokenName_109));
                }
                Var_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (RightTerm_94));
                  MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
                }
                {
                  Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Var_79));
                  MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Var_80));
                  MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (TermContext_93));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Term_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_78));
                }
              }
            }
            else
            {
              mercury__parser__parse_simple_term_8_p_0(TypeInfo_for_T_113, TypeClassInfo_for_op_table_112, Token_15, Context_16, MaxPriority_9, Term_12, STATE_VARIABLE_TokensLeft_58_58, STATE_VARIABLE_TokensLeft_54, STATE_VARIABLE_PS_0_55, STATE_VARIABLE_PS_56);
              *OpPriority_11 = (MR_Integer) 0;
            }
          }
        }
        else
        {
          mercury__parser__parse_simple_term_8_p_0(TypeInfo_for_T_113, TypeClassInfo_for_op_table_112, Token_15, Context_16, MaxPriority_9, Term_12, STATE_VARIABLE_TokensLeft_58_58, STATE_VARIABLE_TokensLeft_54, STATE_VARIABLE_PS_0_55, STATE_VARIABLE_PS_56);
          *OpPriority_11 = (MR_Integer) 0;
        }
      }
    }
  }
}

static void MR_CALL 
mercury__parser__could_start_term_2_p_0(
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
        case (MR_Integer) 10:
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
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
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
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
mercury__parser__find_first_binary_prefix_op_5_p_0(
  MR_Word OpInfo_6,
  MR_Word OtherOpInfos_7,
  MR_Integer * OpPriority_8,
  MR_Word * RightAssoc_9,
  MR_Word * RightRightAssoc_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Class_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_6, (MR_Integer) 0)));
    MR_Integer Priority_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_6, (MR_Integer) 1)));
    MR_Word RightAssocPrime_13;
    MR_Word RightRightAssocPrime_14;

    /* setup for tailcalls optimized into a loop */
    succeeded = ((MR_tag((MR_Word) Class_11)) == (MR_mktag((MR_Integer) 2)));
    if (succeeded)
    {
      RightAssocPrime_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Class_11, (MR_Integer) 0)));
      RightRightAssocPrime_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), Class_11, (MR_Integer) 1)));
      *OpPriority_8 = Priority_12;
      *RightAssoc_9 = RightAssocPrime_13;
      *RightRightAssoc_10 = RightRightAssocPrime_14;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word HeadOpInfo_15;
      MR_Word TailOpInfos_16;
      MR_Word next_value_of_OpInfo_6;
      MR_Word next_value_of_OtherOpInfos_7;

      succeeded = ((MR_tag((MR_Word) OtherOpInfos_7)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadOpInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), OtherOpInfos_7, (MR_Integer) 0)));
        TailOpInfos_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), OtherOpInfos_7, (MR_Integer) 1)));
        /* direct tailcall eliminated */
        next_value_of_OpInfo_6 = HeadOpInfo_15;
        next_value_of_OtherOpInfos_7 = TailOpInfos_16;
        OpInfo_6 = next_value_of_OpInfo_6;
        OtherOpInfos_7 = next_value_of_OtherOpInfos_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__parser__find_first_prefix_op_4_p_0(
  MR_Word OpInfo_5,
  MR_Word OtherOpInfos_6,
  MR_Integer * OpPriority_7,
  MR_Word * RightAssoc_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Class_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_5, (MR_Integer) 0)));
    MR_Integer Priority_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_5, (MR_Integer) 1)));
    MR_Word RightAssocPrime_11;

    /* setup for tailcalls optimized into a loop */
    succeeded = ((MR_tag((MR_Word) Class_9)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      RightAssocPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Class_9, (MR_Integer) 0)));
      *OpPriority_7 = Priority_10;
      *RightAssoc_8 = RightAssocPrime_11;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word HeadOpInfo_12;
      MR_Word TailOpInfos_13;
      MR_Word next_value_of_OpInfo_5;
      MR_Word next_value_of_OtherOpInfos_6;

      succeeded = ((MR_tag((MR_Word) OtherOpInfos_6)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadOpInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), OtherOpInfos_6, (MR_Integer) 0)));
        TailOpInfos_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), OtherOpInfos_6, (MR_Integer) 1)));
        /* direct tailcall eliminated */
        next_value_of_OpInfo_5 = HeadOpInfo_12;
        next_value_of_OtherOpInfos_6 = TailOpInfos_13;
        OpInfo_5 = next_value_of_OpInfo_5;
        OtherOpInfos_6 = next_value_of_OtherOpInfos_6;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word Term_3,
  MR_Word * ArgTerms_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word LeftTerm_5;
    MR_Word RightTerm_6;
    MR_Word Var_9;
    MR_String Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_7;

    if (succeeded)
    {
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1)));
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
        succeeded = (strcmp(Var_10, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            LeftTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0)));
            Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              RightTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 0)));
              Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 1)));
              succeeded = (Var_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ArgTerms0_8;

      mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(RightTerm_6, &ArgTerms0_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ArgTerms_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LeftTerm_5));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgTerms0_8));
      }
    }
    else
    {
      MR_Word Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ArgTerms_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_3));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_14));
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__parser__lexer_size_to_term_size_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&mercury__parser_vector_common_7[0 + HeadVar__1_1]))->mercury__parser__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mercury__parser__lexer_signedness_to_term_signedness_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static MR_Word MR_CALL 
mercury__parser__lexer_base_to_term_base_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&mercury__parser_vector_common_6[0 + HeadVar__1_1]))->mercury__parser__vector_common_type_6_0__vct_6_f_0;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_op_table_16,
  MR_String UsualMessage_6,
  MR_Word * Error_7,
  MR_Word STATE_VARIABLE_TokensLeft_0_12,
  MR_Word * STATE_VARIABLE_TokensLeft_13,
  MR_Word PS_9)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_TokensLeft_0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Error_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UsualMessage_6));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TokensLeft_0_12));
      }
      *STATE_VARIABLE_TokensLeft_13 = STATE_VARIABLE_TokensLeft_0_12;
    }
    else
    {
      MR_Word Token_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 0)));
      MR_Integer Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_TokensLeft_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 2)));
      MR_String Op_27;
      MR_Box OpTable_28;
      MR_String Var_40;
      MR_Word Var_41;
      MR_Word Var_42;

      *STATE_VARIABLE_TokensLeft_13 = STATE_VARIABLE_TokensLeft_0_12;
      if ((Token_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
      {
        Op_27 = (MR_String) ",";
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) Token_10)) == (MR_mktag((MR_Integer) 1))))
      {
        Op_27 = ((MR_String) (MR_hl_field(MR_mktag(1), Token_10, (MR_Integer) 0)));
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), PS_9, (MR_Integer) 0)));
        OpTable_28 = (MR_hl_field(MR_mktag(0), PS_9, (MR_Integer) 1));
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), PS_9, (MR_Integer) 2)));
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), PS_9, (MR_Integer) 3)));
        {
          MR_Integer Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box conv3_Var_29;
          MR_Box conv2_Var_30;
          MR_Box conv1_Var_31;

          succeeded = func_0(((MR_Box) TypeClassInfo_for_op_table_16), OpTable_28, ((MR_Box) (Op_27)), &conv3_Var_29, &conv2_Var_30, &conv1_Var_31);
          if (succeeded)
          {
            Var_29 = ((MR_Integer) conv3_Var_29);
            Var_30 = ((MR_Word) conv2_Var_30);
            Var_31 = ((MR_Word) conv1_Var_31);
            succeeded = MR_TRUE;
          }
        }
        if (!(succeeded))
        {
          MR_Integer Var_32;
          MR_Word Var_33;
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 8)));
          MR_Box conv6_Var_32;
          MR_Box conv5_Var_33;

          succeeded = func_4(((MR_Box) TypeClassInfo_for_op_table_16), OpTable_28, ((MR_Box) (Op_27)), &conv6_Var_32, &conv5_Var_33);
          if (succeeded)
          {
            Var_32 = ((MR_Integer) conv6_Var_32);
            Var_33 = ((MR_Word) conv5_Var_33);
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Error_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_13));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Error_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UsualMessage_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_13));
        }
    }
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_op_table_25,
  MR_Word Token_8,
  MR_Integer Context_9,
  MR_String UsualMessage_10,
  MR_Word * Error_11,
  MR_Word STATE_VARIABLE_TokensLeft_0_21,
  MR_Word * STATE_VARIABLE_TokensLeft_22,
  MR_Word PS_13)
{
  {
    MR_bool succeeded;
    MR_String Op_14;
    MR_Box OpTable_15;
    MR_String Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TokensLeft_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Token_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (STATE_VARIABLE_TokensLeft_0_21));
    }
    if ((Token_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
    {
      Op_14 = (MR_String) ",";
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Token_8)) == (MR_mktag((MR_Integer) 1))))
    {
      Op_14 = ((MR_String) (MR_hl_field(MR_mktag(1), Token_8, (MR_Integer) 0)));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), PS_13, (MR_Integer) 0)));
      OpTable_15 = (MR_hl_field(MR_mktag(0), PS_13, (MR_Integer) 1));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), PS_13, (MR_Integer) 2)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), PS_13, (MR_Integer) 3)));
      {
        MR_Integer Var_16;
        MR_Word Var_17;
        MR_Word Var_18;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv3_Var_16;
        MR_Box conv2_Var_17;
        MR_Box conv1_Var_18;

        succeeded = func_0(((MR_Box) TypeClassInfo_for_op_table_25), OpTable_15, ((MR_Box) (Op_14)), &conv3_Var_16, &conv2_Var_17, &conv1_Var_18);
        if (succeeded)
        {
          Var_16 = ((MR_Integer) conv3_Var_16);
          Var_17 = ((MR_Word) conv2_Var_17);
          Var_18 = ((MR_Word) conv1_Var_18);
          succeeded = MR_TRUE;
        }
      }
      if (!(succeeded))
      {
        MR_Integer Var_19;
        MR_Word Var_20;
        MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 8)));
        MR_Box conv6_Var_19;
        MR_Box conv5_Var_20;

        succeeded = func_4(((MR_Box) TypeClassInfo_for_op_table_25), OpTable_15, ((MR_Box) (Op_14)), &conv6_Var_19, &conv5_Var_20);
        if (succeeded)
        {
          Var_19 = ((MR_Integer) conv6_Var_19);
          Var_20 = ((MR_Word) conv5_Var_20);
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Error_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_22));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Error_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UsualMessage_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_22));
      }
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word ParserState_4,
  MR_Integer TokenContext_5,
  MR_Word * TermContext_6)
{
  {
    MR_String FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ParserState_4, (MR_Integer) 0)));
    MR_Box Var_12 = (MR_hl_field(MR_mktag(0), ParserState_4, (MR_Integer) 1));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParserState_4, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParserState_4, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *TermContext_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TokenContext_5));
    }
  }
}

static MR_bool MR_CALL 
mercury__parser__check_priority_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer MaxPriority_2,
  MR_Integer Priority_3)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = (Priority_3 < MaxPriority_2);
        break;
      case (MR_Integer) 1:
        succeeded = (Priority_3 <= MaxPriority_2);
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__parser__parse_backquoted_operator_7_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeClassInfo_for_op_table_30,
  MR_Word * MaybeQualifier_8,
  MR_String * OpName_9,
  MR_Word * VariableTerms_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * STATE_VARIABLE_TokensLeft_20,
  MR_Word STATE_VARIABLE_PS_0_21,
  MR_Word * STATE_VARIABLE_PS_22)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_0_19)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Token_13;
    MR_Integer Context_14;
    MR_Word TermContext_15;
    MR_Word STATE_VARIABLE_TokensLeft_23_23;
    MR_String FileName_38;
    MR_Box Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    if (succeeded)
    {
      Token_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 0)));
      Context_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 1)));
      STATE_VARIABLE_TokensLeft_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 2)));
      FileName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_21, (MR_Integer) 0)));
      Var_41 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_21, (MR_Integer) 1));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_21, (MR_Integer) 2)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_21, (MR_Integer) 3)));
      {
        TermContext_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TermContext_15, 0) = ((MR_Box) (FileName_38));
        MR_hl_field(MR_mktag(0), TermContext_15, 1) = ((MR_Box) (Context_14));
      }
      if (((MR_tag((MR_Word) Token_13)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String OpName0_18 = ((MR_String) (MR_hl_field(MR_mktag(1), Token_13, (MR_Integer) 0)));
        MR_Word Var_24;

        *VariableTerms_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(TypeClassInfo_for_op_table_30, Var_24, MaybeQualifier_8, TermContext_15, OpName0_18, OpName_9, STATE_VARIABLE_TokensLeft_23_23, STATE_VARIABLE_TokensLeft_20, STATE_VARIABLE_PS_0_21, STATE_VARIABLE_PS_22);
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) Token_13)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_String VariableOp_16 = ((MR_String) (MR_hl_field(MR_mktag(2), Token_13, (MR_Integer) 0)));
        MR_Word Var_17;
        MR_Word Var_28;
        MR_Word Var_29;

        *MaybeQualifier_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *OpName_9 = (MR_String) "";
        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_T_31, VariableOp_16, &Var_17, STATE_VARIABLE_PS_0_21, STATE_VARIABLE_PS_22);
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_17));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (TermContext_15));
        }
        Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *VariableTerms_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_29));
        }
        *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_23_23;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_String VarName_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_ParserState_0_13,
  MR_Word * STATE_VARIABLE_ParserState_14)
{
  {
    MR_bool succeeded = (strcmp(VarName_5, (MR_String) "_") == 0);

    if (succeeded)
    {
      MR_Word VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
      MR_Word VarSet_9;
      MR_String Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
      MR_Box Var_35 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
      MR_String Var_42;
      MR_Box Var_43;
      MR_Word Var_45;
      MR_Word Var_44;

      mercury__varset__new_var_3_p_0(TypeInfo_for_T_24, Var_6, VarSet0_8, &VarSet_9);
      Var_42 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
      Var_43 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ParserState_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), base, 1) = Var_43;
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarSet_9));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_45));
      }
    }
    else
    {
      MR_Word Names0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
      MR_String Var_48 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
      MR_Box Var_49 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
      MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
      MR_Word Var0_11;
      MR_Word TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Word TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      MR_Word TypeInfo_28_28;
      MR_Box conv0_Var0_11;

      {
        TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (TypeCtorInfo_27_27));
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_24));
      }
      succeeded = mercury__tree234__search_3_p_0(TypeCtorInfo_26_26, TypeInfo_28_28, Names0_10, ((MR_Box) (VarName_5)), &conv0_Var0_11);
      if (succeeded)
      {
        Var0_11 = ((MR_Word) conv0_Var0_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        *Var_6 = Var0_11;
        *STATE_VARIABLE_ParserState_14 = STATE_VARIABLE_ParserState_0_13;
      }
      else
      {
        MR_Word TypeCtorInfo_29_29;
        MR_Word TypeInfo_31_31;
        MR_Word TypeCtorInfo_16_69;
        MR_Word TypeCtorInfo_18_71;
        MR_Word Names_12;
        MR_Word VarSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
        MR_Word VarSet_19;
        MR_Word V_8_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), VarSet0_18, (MR_Integer) 0)));
        MR_Word V_9_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), VarSet0_18, (MR_Integer) 1)));
        MR_Word V_10_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), VarSet0_18, (MR_Integer) 2)));
        MR_Word V_11_67;
        MR_Word V_12_68;
        MR_Integer V_4_72;
        MR_Integer V_5_73 = (MR_Integer) V_8_63;
        MR_String Var_85;
        MR_Box Var_86;
        MR_String Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
        MR_Box Var_57 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
        MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
        MR_Word Var_87;
        MR_Word Var_88;

        V_4_72 = (V_5_73 + (MR_Integer) 1);
        *Var_6 = (MR_Word) V_4_72;
        V_11_67 = (MR_Word) V_4_72;
        TypeCtorInfo_16_69 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        {
          TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (TypeCtorInfo_16_69));
          MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_24));
        }
        TypeCtorInfo_18_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_24, TypeInfo_31_31, TypeCtorInfo_18_71, *Var_6, ((MR_Box) (VarName_5)), V_9_64, &V_12_68);
        {
          VarSet_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), VarSet_19, 0) = ((MR_Box) (V_11_67));
          MR_hl_field(MR_mktag(0), VarSet_19, 1) = ((MR_Box) (V_12_68));
          MR_hl_field(MR_mktag(0), VarSet_19, 2) = ((MR_Box) (V_10_65));
        }
        TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__map__det_insert_4_p_0(TypeCtorInfo_29_29, TypeInfo_31_31, ((MR_Box) (VarName_5)), ((MR_Box) (*Var_6)), Names0_10, &Names_12);
        Var_85 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
        Var_86 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
        Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
        Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ParserState_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(0), base, 1) = Var_86;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarSet_19));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Names_12));
        }
      }
    }
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(
  MR_Word TypeClassInfo_for_op_table_44,
  MR_Word MaybeQualifier0_10,
  MR_Word * MaybeQualifier_11,
  MR_Word OpCtxt0_12,
  MR_String OpName0_13,
  MR_String * OpName_14,
  MR_Word STATE_VARIABLE_TokensLeft_0_27,
  MR_Word * STATE_VARIABLE_TokensLeft_28,
  MR_Word STATE_VARIABLE_PS_0_29,
  MR_Word * STATE_VARIABLE_PS_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_0_27)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer SepContext_18;
    MR_String OpName1_19;
    MR_Integer NameContext_20;
    MR_Word STATE_VARIABLE_TokensLeft_33_33;
    MR_String ModuleSeparator_17;
    MR_Word STATE_VARIABLE_TokensLeft_31_31;
    MR_Word Var_32;
    MR_Word Var_34;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_27, (MR_Integer) 0)));
      SepContext_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_27, (MR_Integer) 1)));
      STATE_VARIABLE_TokensLeft_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_0_27, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ModuleSeparator_17 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0)));
        if ((strcmp(ModuleSeparator_17, (MR_String) ".") == 0))
          succeeded = MR_TRUE;
        else
        if ((strcmp(ModuleSeparator_17, (MR_String) ":") == 0))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TokensLeft_31_31)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_31_31, (MR_Integer) 0)));
            NameContext_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_31_31, (MR_Integer) 1)));
            STATE_VARIABLE_TokensLeft_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TokensLeft_31_31, (MR_Integer) 2)));
            succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              OpName1_19 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0)));
              succeeded = (strcmp(OpName1_19, (MR_String) "\140") == 0);
              succeeded = !(succeeded);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word QTerm1_21;
      MR_Word MaybeQualifier01_22;
      MR_Word OpCtxt1_26;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_String FileName_64;
      MR_Box Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word next_value_of_MaybeQualifier0_10;
      MR_Word next_value_of_OpCtxt0_12;
      MR_String next_value_of_OpName0_13;
      MR_Word next_value_of_STATE_VARIABLE_TokensLeft_0_27;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (OpName0_13));
      }
      Var_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        QTerm1_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), QTerm1_21, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), QTerm1_21, 1) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), QTerm1_21, 2) = ((MR_Box) (OpCtxt0_12));
      }
      if ((MaybeQualifier0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MaybeQualifier01_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeQualifier01_22, 0) = ((MR_Box) (QTerm1_21));
        }
      else
      {
        MR_Word QTerm0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeQualifier0_10, (MR_Integer) 0)));
        MR_Word SepCtxt_24;
        MR_Word QTerm01_25;
        MR_Word Var_37;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_String FileName_53 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_29, (MR_Integer) 0)));
        MR_Box Var_56 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_29, (MR_Integer) 1));
        MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_29, (MR_Integer) 2)));
        MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_29, (MR_Integer) 3)));

        {
          SepCtxt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SepCtxt_24, 0) = ((MR_Box) (FileName_53));
          MR_hl_field(MR_mktag(0), SepCtxt_24, 1) = ((MR_Box) (SepContext_18));
        }
        Var_37 = (MR_Word) &mercury__parser_scalar_common_5[0];
        Var_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (QTerm1_21));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (QTerm0_23));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
        }
        {
          QTerm01_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), QTerm01_25, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(0), QTerm01_25, 1) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(0), QTerm01_25, 2) = ((MR_Box) (SepCtxt_24));
        }
        {
          MaybeQualifier01_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeQualifier01_22, 0) = ((MR_Box) (QTerm01_25));
        }
      }
      FileName_64 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_29, (MR_Integer) 0)));
      Var_67 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_29, (MR_Integer) 1));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_29, (MR_Integer) 2)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_PS_0_29, (MR_Integer) 3)));
      {
        OpCtxt1_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OpCtxt1_26, 0) = ((MR_Box) (FileName_64));
        MR_hl_field(MR_mktag(0), OpCtxt1_26, 1) = ((MR_Box) (NameContext_20));
      }
      /* direct tailcall eliminated */
      next_value_of_MaybeQualifier0_10 = MaybeQualifier01_22;
      next_value_of_OpCtxt0_12 = OpCtxt1_26;
      next_value_of_OpName0_13 = OpName1_19;
      next_value_of_STATE_VARIABLE_TokensLeft_0_27 = STATE_VARIABLE_TokensLeft_33_33;
      MaybeQualifier0_10 = next_value_of_MaybeQualifier0_10;
      OpCtxt0_12 = next_value_of_OpCtxt0_12;
      OpName0_13 = next_value_of_OpName0_13;
      STATE_VARIABLE_TokensLeft_0_27 = next_value_of_STATE_VARIABLE_TokensLeft_0_27;
      continue;
    }
    else
    {
      *MaybeQualifier_11 = MaybeQualifier0_10;
      *OpName_14 = OpName0_13;
      *STATE_VARIABLE_PS_30 = STATE_VARIABLE_PS_0_29;
      *STATE_VARIABLE_TokensLeft_28 = STATE_VARIABLE_TokensLeft_0_27;
    }
    break;
  }
}

void MR_CALL 
mercury__parser__check_for_errors_5_p_0(
  MR_Word TypeInfo_for_T_45,
  MR_Word Parse_6,
  MR_Word VarSet_7,
  MR_Word Tokens_8,
  MR_Word LeftOverTokens_9,
  MR_Word * Result_10)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Parse_6)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String ErrorMessage_11 = ((MR_String) (MR_hl_field(MR_mktag(1), Parse_6, (MR_Integer) 0)));
      MR_Word ErrorTokens_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Parse_6, (MR_Integer) 1)));
      MR_String Message_15;
      MR_Integer LineNum_16;
      MR_String BadTokenMessage_13;
      MR_Integer BadTokenLineNum_14;

      succeeded = mercury__parser__check_for_bad_token_3_p_0(Tokens_8, &BadTokenMessage_13, &BadTokenLineNum_14);
      if (succeeded)
      {
        Message_15 = BadTokenMessage_13;
        LineNum_16 = BadTokenLineNum_14;
      }
      else
      if ((ErrorTokens_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if ((Tokens_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__error_1_p_0((MR_String) "check_for_errors");
            return;
          }
        }
        else
        {
          MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tokens_8, (MR_Integer) 0)));
          MR_Word Var_22;

          LineNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Tokens_8, (MR_Integer) 1)));
          Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tokens_8, (MR_Integer) 2)));
        }
        mercury__string__append_3_p_2((MR_String) "Syntax error: ", ErrorMessage_11, &Message_15);
      }
      else
      {
        MR_Word ErrorTok_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ErrorTokens_12, (MR_Integer) 0)));
        MR_String TokString_20;
        MR_String Var_30;
        MR_String Var_31;
        MR_Word Var_19;

        LineNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ErrorTokens_12, (MR_Integer) 1)));
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ErrorTokens_12, (MR_Integer) 2)));
        mercury__lexer__token_to_string_2_p_0(ErrorTok_17, &TokString_20);
        mercury__string__append_3_p_2((MR_String) ": ", ErrorMessage_11, &Var_31);
        mercury__string__append_3_p_2(TokString_20, Var_31, &Var_30);
        mercury__string__append_3_p_2((MR_String) "Syntax error at ", Var_30, &Message_15);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Message_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LineNum_16));
      }
    }
    else
    {
      MR_Word Term_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Parse_6, (MR_Integer) 0)));
      MR_String Message_39;
      MR_Integer LineNum_40;

      succeeded = mercury__parser__check_for_bad_token_3_p_0(Tokens_8, &Message_39, &LineNum_40);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Message_39));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LineNum_40));
        }
      else
      if ((LeftOverTokens_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VarSet_7));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Term_23));
        }
      else
      {
        MR_Word Token_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), LeftOverTokens_9, (MR_Integer) 0)));
        MR_String Message_33;
        MR_Integer LineNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LeftOverTokens_9, (MR_Integer) 1)));
        MR_String TokString_35;
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), LeftOverTokens_9, (MR_Integer) 2)));

        mercury__lexer__token_to_string_2_p_0(Token_24, &TokString_35);
        mercury__string__append_3_p_2((MR_String) "Syntax error: unexpected ", TokString_35, &Message_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Message_33));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LineNum_34));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mercury__parser__check_for_bad_token_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Message_2,
  MR_Integer * LineNum_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Token_4;
    MR_Integer LineNum0_5;
    MR_Word Tokens_6;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      Token_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      LineNum0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      Tokens_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      switch (MR_tag((MR_Word) Token_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Tokens_6;

            /* direct tailcall eliminated */
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__1_1 = Tokens_6;

            /* direct tailcall eliminated */
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Token_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 7:
              {
                MR_Word next_value_of_HeadVar__1_1 = Tokens_6;

                /* direct tailcall eliminated */
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Char Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), Token_4, (MR_Integer) 1)));
                MR_Integer Code_12;
                MR_String Decimal_13;
                MR_String Hex_14;
                MR_Word Var_29;
                MR_Word Var_31;
                MR_Word Var_32;
                MR_Word Var_34;
                MR_Word Var_35;
                MR_Word Var_37;

{
#define MR_PROC_LABEL mercury__parser__check_for_bad_token_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  Char_11 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Code_12  = Int;
}
                mercury__string__int_to_base_string_3_p_0(Code_12, (MR_Integer) 10, &Decimal_13);
                mercury__string__int_to_base_string_3_p_0(Code_12, (MR_Integer) 16, &Hex_14);
                Var_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                Var_35 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__parser_scalar_common_1[1]);
                {
                  Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Decimal_13));
                  MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
                }
                {
                  Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) " ("));
                  MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
                }
                {
                  Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Hex_14));
                  MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
                }
                {
                  Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) "Syntax error: Illegal character 0x"));
                  MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
                }
                *Message_2 = mercury__string__append_list_1_f_0(Var_29);
                *LineNum_3 = LineNum0_5;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String ErrorMessage_15 = ((MR_String) (MR_hl_field(MR_mktag(3), Token_4, (MR_Integer) 1)));

                mercury__string__append_3_p_2((MR_String) "Syntax error: ", ErrorMessage_15, Message_2);
                *LineNum_3 = LineNum0_5;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word IO_Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Token_4, (MR_Integer) 1)));
                MR_String IO_ErrorMessage_10 = (MR_String) IO_Error_9;

                mercury__string__append_3_p_2((MR_String) "I/O error: ", IO_ErrorMessage_10, Message_2);
                *LineNum_3 = LineNum0_5;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__parser____Unify____parse_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__parser____Compare____parse_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__parser____Compare____parse_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__parser____Unify____parser_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__parser____Unify____parser_state_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    return succeeded;
  }
}

static void MR_CALL 
mercury__parser____Compare____parser_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__parser____Compare____parser_state_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_4), ((MR_Word) wrapper_arg_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__parser____Unify____term_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__parser____Compare____term_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__parser____Compare____term_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__parser__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parser. */
