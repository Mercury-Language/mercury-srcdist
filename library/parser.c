/*
** Automatically generated from `parser.m'
** by the Mercury compiler,
** version rotd-2017-06-13
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
#include "uint.mih"
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

static MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0_10001(
  MR_Box mercury__parser__wrapper_arg_1,
  MR_Box mercury__parser__wrapper_arg_2,
  MR_Box mercury__parser__wrapper_arg_3);

static void MR_CALL 
mercury__parser____Compare____parse_1_0_10001(
  MR_Box mercury__parser__wrapper_arg_1,
  MR_Box * mercury__parser__wrapper_arg_2,
  MR_Box mercury__parser__wrapper_arg_3,
  MR_Box mercury__parser__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__parser____Unify____parser_state_2_0_10001(
  MR_Box mercury__parser__wrapper_arg_1,
  MR_Box mercury__parser__wrapper_arg_2,
  MR_Box mercury__parser__wrapper_arg_3,
  MR_Box mercury__parser__wrapper_arg_4);

static void MR_CALL 
mercury__parser____Compare____parser_state_2_0_10001(
  MR_Box mercury__parser__wrapper_arg_1,
  MR_Box mercury__parser__wrapper_arg_2,
  MR_Box * mercury__parser__wrapper_arg_3,
  MR_Box mercury__parser__wrapper_arg_4,
  MR_Box mercury__parser__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0_10001(
  MR_Box mercury__parser__wrapper_arg_1,
  MR_Box mercury__parser__wrapper_arg_2);

static void MR_CALL 
mercury__parser____Compare____term_kind_0_0_10001(
  MR_Box * mercury__parser__wrapper_arg_1,
  MR_Box mercury__parser__wrapper_arg_2,
  MR_Box mercury__parser__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_24,
  MR_String mercury__parser__VarName_5,
  MR_Word * mercury__parser__Var_6,
  MR_Word mercury__parser__STATE_VARIABLE_ParserState_0_13,
  MR_Word * mercury__parser__STATE_VARIABLE_ParserState_14);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word mercury__parser__ParserState_4,
  MR_Integer mercury__parser__TokenContext_5,
  MR_Word * mercury__parser__TermContext_6);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word mercury__parser__TypeClassInfo_for_op_table_25,
  MR_Word mercury__parser__Token_8,
  MR_Integer mercury__parser__Context_9,
  MR_String mercury__parser__UsualMessage_10,
  MR_Word * mercury__parser__Error_11,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
  MR_Word mercury__parser__PS_13);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word mercury__parser__TypeClassInfo_for_op_table_16,
  MR_String mercury__parser__UsualMessage_6,
  MR_Word * mercury__parser__Error_7,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_12,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_13,
  MR_Word mercury__parser__PS_9);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word mercury__parser__Term_3,
  MR_Word * mercury__parser__ArgTerms_4);

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(
  MR_Word mercury__parser__TypeClassInfo_for_op_table_44,
  MR_Word mercury__parser__MaybeQualifier0_10,
  MR_Word * mercury__parser__MaybeQualifier_11,
  MR_Word mercury__parser__OpCtxt0_12,
  MR_String mercury__parser__OpName0_13,
  MR_String * mercury__parser__OpName_14,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_27,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_28,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_29,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_30);

static MR_Word MR_CALL 
mercury__parser__lexer_size_to_term_size_1_f_0(
  MR_Word mercury__parser__HeadVar__1_1);

static MR_Word MR_CALL 
mercury__parser__lexer_signedness_to_term_signedness_1_f_0(
  MR_Word mercury__parser__HeadVar__1_1);

static MR_Word MR_CALL 
mercury__parser__lexer_base_to_term_base_1_f_0(
  MR_Word mercury__parser__HeadVar__1_1);

static void MR_CALL 
mercury__parser__could_start_term_2_p_0(
  MR_Word mercury__parser__HeadVar__1_1,
  MR_Word * mercury__parser__HeadVar__2_2);

static MR_bool MR_CALL 
mercury__parser__check_priority_3_p_0(
  MR_Word mercury__parser__HeadVar__1_1,
  MR_Integer mercury__parser__MaxPriority_2,
  MR_Integer mercury__parser__Priority_3);

static MR_bool MR_CALL 
mercury__parser__find_first_binary_prefix_op_5_p_0(
  MR_Word mercury__parser__OpInfo_6,
  MR_Word mercury__parser__OtherOpInfos_7,
  MR_Integer * mercury__parser__OpPriority_8,
  MR_Word * mercury__parser__RightAssoc_9,
  MR_Word * mercury__parser__RightRightAssoc_10);

static MR_bool MR_CALL 
mercury__parser__find_first_prefix_op_4_p_0(
  MR_Word mercury__parser__OpInfo_5,
  MR_Word mercury__parser__OtherOpInfos_6,
  MR_Integer * mercury__parser__OpPriority_7,
  MR_Word * mercury__parser__RightAssoc_8);

static void MR_CALL 
mercury__parser__parse_args_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_35,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_34,
  MR_Word * mercury__parser__List_6,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22);

static void MR_CALL 
mercury__parser__parse_list_tail_6_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_68,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_67,
  MR_Word mercury__parser__Arg_7,
  MR_Word * mercury__parser__List_8,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_23,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_24);

static void MR_CALL 
mercury__parser__parse_list_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_22,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_21,
  MR_Word * mercury__parser__List_6,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_13,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_14,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_15,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_16);

static void MR_CALL 
mercury__parser__parse_special_atom_7_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_32,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_31,
  MR_String mercury__parser__Atom_8,
  MR_Word mercury__parser__TermContext_9,
  MR_Word * mercury__parser__Term_10,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21);

static void MR_CALL 
mercury__parser__parse_higher_order_term_rest_7_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_34,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_33,
  MR_Word mercury__parser__BaseTerm_8,
  MR_Integer mercury__parser__Context_9,
  MR_Word * mercury__parser__TermParse_10,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_20,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_21,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_22,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_23);

static void MR_CALL 
mercury__parser__parse_simple_term_8_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_152,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_151,
  MR_Word mercury__parser__Token_9,
  MR_Integer mercury__parser__Context_10,
  MR_Integer mercury__parser__Prec_11,
  MR_Word * mercury__parser__TermParse_12,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_51,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_52,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_53,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_54);

static MR_bool MR_CALL 
mercury__parser__parse_backquoted_operator_7_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_31,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_30,
  MR_Word * mercury__parser__MaybeQualifier_8,
  MR_String * mercury__parser__OpName_9,
  MR_Word * mercury__parser__VariableTerms_10,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22);

static void MR_CALL 
mercury__parser__parse_rest_9_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_84,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_83,
  MR_Integer mercury__parser__MaxPriority_10,
  MR_Word mercury__parser__TermKind_11,
  MR_Integer mercury__parser__LeftPriority_12,
  MR_Word mercury__parser__LeftTerm_13,
  MR_Word * mercury__parser__Term_14,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_41,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_42,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_43,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_44);

static void MR_CALL 
mercury__parser__parse_left_term_8_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_113,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_112,
  MR_Integer mercury__parser__MaxPriority_9,
  MR_Word mercury__parser__TermKind_10,
  MR_Integer * mercury__parser__OpPriority_11,
  MR_Word * mercury__parser__Term_12,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_53,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_54,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_55,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_56);

static void MR_CALL 
mercury__parser__do_parse_term_7_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_27,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_26,
  MR_Integer mercury__parser__MaxPriority_8,
  MR_Word mercury__parser__TermKind_9,
  MR_Word * mercury__parser__Term_10,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21);

static void MR_CALL 
mercury__parser__parse_arg_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_21,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
  MR_Word * mercury__parser__Term_6,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_11,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_12,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_13,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_14);

static void MR_CALL 
mercury__parser__parse_term_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_21,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
  MR_Word * mercury__parser__Term_6,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_10,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_11,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_12,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_13);

static MR_bool MR_CALL 
mercury__parser__check_for_bad_token_3_p_0(
  MR_Word mercury__parser__HeadVar__1_1,
  MR_String * mercury__parser__Message_2,
  MR_Integer * mercury__parser__LineNum_3);


static /* final */ const MR_Box mercury__parser_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__parser_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__parser_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__parser_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__parser_scalar_common_6[1][4];

static /* final */ const MR_Box mercury__parser_scalar_common_7[5][1];


/* sealed */ struct mercury__parser__vector_common_type_5_0_s {
  const MR_Word mercury__parser__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct mercury__parser__vector_common_type_5_0_s mercury__parser_vector_common_5[118];

/* sealed */ struct mercury__parser__vector_common_type_8_0_s {
  const MR_Word mercury__parser__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct mercury__parser__vector_common_type_8_0_s mercury__parser_vector_common_8[4];

/* sealed */ struct mercury__parser__vector_common_type_9_0_s {
  const MR_Word mercury__parser__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct mercury__parser__vector_common_type_9_0_s mercury__parser_vector_common_9[5];



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

static /* final */ const struct mercury__parser__vector_common_type_9_0_s mercury__parser_vector_common_9[5] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
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
#include "uint.mh"
#include "version_array.mh"



static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__parser__parser__field_types_parse_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__lexer__lexer__type_ctor_info_token_list_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__parser__parser__du_stag_ordered_parse_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parser__parser__field_types_parser_state_2_0,
  mercury__parser__parser__field_names_parser_state_2_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__parser__parser__du_stag_ordered_parser_state_2_0[1] = {
  &mercury__parser__parser__du_functor_desc_parser_state_2_0
};

static const MR_DuPtagLayout mercury__parser__parser__du_ptag_ordered_parser_state_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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

static MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0_10001(
  MR_Box mercury__parser__wrapper_arg_1,
  MR_Box mercury__parser__wrapper_arg_2,
  MR_Box mercury__parser__wrapper_arg_3)
{
  {
    MR_bool mercury__parser__succeeded;

    {
      mercury__parser__succeeded = mercury__parser____Unify____parse_1_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3));
    }
    return mercury__parser__succeeded;
  }
}

static void MR_CALL 
mercury__parser____Compare____parse_1_0_10001(
  MR_Box mercury__parser__wrapper_arg_1,
  MR_Box * mercury__parser__wrapper_arg_2,
  MR_Box mercury__parser__wrapper_arg_3,
  MR_Box mercury__parser__wrapper_arg_4)
{
  {
    MR_Word mercury__parser__conv0_HeadVar__1_1;

    {
      mercury__parser____Compare____parse_1_0(((MR_Word) mercury__parser__wrapper_arg_1), &mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_3), ((MR_Word) mercury__parser__wrapper_arg_4));
    }
    *mercury__parser__wrapper_arg_2 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__parser____Unify____parser_state_2_0_10001(
  MR_Box mercury__parser__wrapper_arg_1,
  MR_Box mercury__parser__wrapper_arg_2,
  MR_Box mercury__parser__wrapper_arg_3,
  MR_Box mercury__parser__wrapper_arg_4)
{
  {
    MR_bool mercury__parser__succeeded;

    {
      mercury__parser__succeeded = mercury__parser____Unify____parser_state_2_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3), ((MR_Word) mercury__parser__wrapper_arg_4));
    }
    return mercury__parser__succeeded;
  }
}

static void MR_CALL 
mercury__parser____Compare____parser_state_2_0_10001(
  MR_Box mercury__parser__wrapper_arg_1,
  MR_Box mercury__parser__wrapper_arg_2,
  MR_Box * mercury__parser__wrapper_arg_3,
  MR_Box mercury__parser__wrapper_arg_4,
  MR_Box mercury__parser__wrapper_arg_5)
{
  {
    MR_Word mercury__parser__conv0_HeadVar__1_1;

    {
      mercury__parser____Compare____parser_state_2_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2), &mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_4), ((MR_Word) mercury__parser__wrapper_arg_5));
    }
    *mercury__parser__wrapper_arg_3 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0_10001(
  MR_Box mercury__parser__wrapper_arg_1,
  MR_Box mercury__parser__wrapper_arg_2)
{
  {
    MR_bool mercury__parser__succeeded;

    {
      mercury__parser__succeeded = mercury__parser____Unify____term_kind_0_0(((MR_Word) mercury__parser__wrapper_arg_1), ((MR_Word) mercury__parser__wrapper_arg_2));
    }
    return mercury__parser__succeeded;
  }
}

static void MR_CALL 
mercury__parser____Compare____term_kind_0_0_10001(
  MR_Box * mercury__parser__wrapper_arg_1,
  MR_Box mercury__parser__wrapper_arg_2,
  MR_Box mercury__parser__wrapper_arg_3)
{
  {
    MR_Word mercury__parser__conv0_HeadVar__1_1;

    {
      mercury__parser____Compare____term_kind_0_0(&mercury__parser__conv0_HeadVar__1_1, ((MR_Word) mercury__parser__wrapper_arg_2), ((MR_Word) mercury__parser__wrapper_arg_3));
    }
    *mercury__parser__wrapper_arg_1 = ((MR_Box) (mercury__parser__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__parser__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_24,
  MR_String mercury__parser__VarName_5,
  MR_Word * mercury__parser__Var_6,
  MR_Word mercury__parser__STATE_VARIABLE_ParserState_0_13,
  MR_Word * mercury__parser__STATE_VARIABLE_ParserState_14)
{
  {
    MR_bool mercury__parser__succeeded = (strcmp(mercury__parser__VarName_5, (MR_String) "_") == 0);

    if (mercury__parser__succeeded)
      {
        MR_Word mercury__parser__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
        MR_Word mercury__parser__VarSet_9;
        MR_String mercury__parser__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
        MR_Box mercury__parser__Var_35 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
        MR_Word mercury__parser__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
        MR_String mercury__parser__Var_42;
        MR_Box mercury__parser__Var_43;
        MR_Word mercury__parser__Var_45;
        MR_Word mercury__parser__Var_44;

        {
          mercury__varset__new_var_3_p_0(mercury__parser__TypeInfo_for_T_24, mercury__parser__Var_6, mercury__parser__VarSet0_8, &mercury__parser__VarSet_9);
        }
        mercury__parser__Var_42 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
        mercury__parser__Var_43 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
        mercury__parser__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
        mercury__parser__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *mercury__parser__STATE_VARIABLE_ParserState_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_42));
          MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__Var_43;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_9));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Var_45));
        }
      }
    else
      {
        MR_Word mercury__parser__Names0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
        MR_String mercury__parser__Var_48 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
        MR_Box mercury__parser__Var_49 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
        MR_Word mercury__parser__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
        MR_Word mercury__parser__Var0_11;
        MR_Word mercury__parser__TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__parser__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mercury__parser__TypeInfo_28_28;
        MR_Box mercury__parser__conv0_Var0_11;

        {
          mercury__parser__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_28_28, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_27_27));
          MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_28_28, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_24));
        }
        {
          mercury__parser__succeeded = mercury__tree234__search_3_p_0(mercury__parser__TypeCtorInfo_26_26, mercury__parser__TypeInfo_28_28, mercury__parser__Names0_10, ((MR_Box) (mercury__parser__VarName_5)), &mercury__parser__conv0_Var0_11);
        }
        if (mercury__parser__succeeded)
          {
            mercury__parser__Var0_11 = ((MR_Word) mercury__parser__conv0_Var0_11);
            mercury__parser__succeeded = MR_TRUE;
          }
        if (mercury__parser__succeeded)
          {
            *mercury__parser__Var_6 = mercury__parser__Var0_11;
            *mercury__parser__STATE_VARIABLE_ParserState_14 = mercury__parser__STATE_VARIABLE_ParserState_0_13;
          }
        else
          {
            MR_Word mercury__parser__TypeCtorInfo_29_29;
            MR_Word mercury__parser__TypeInfo_31_31;
            MR_Word mercury__parser__TypeCtorInfo_16_69;
            MR_Word mercury__parser__TypeCtorInfo_18_71;
            MR_Word mercury__parser__Names_12;
            MR_Word mercury__parser__VarSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
            MR_Word mercury__parser__VarSet_19;
            MR_Word mercury__parser__V_8_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_18, (MR_Integer) 0)));
            MR_Word mercury__parser__V_9_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_18, (MR_Integer) 1)));
            MR_Word mercury__parser__V_10_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__VarSet0_18, (MR_Integer) 2)));
            MR_Word mercury__parser__V_11_67;
            MR_Word mercury__parser__V_12_68;
            MR_Integer mercury__parser__V_4_72;
            MR_Integer mercury__parser__V_5_73 = (MR_Integer) mercury__parser__V_8_63;
            MR_String mercury__parser__Var_85;
            MR_Box mercury__parser__Var_86;
            MR_String mercury__parser__Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
            MR_Box mercury__parser__Var_57 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
            MR_Word mercury__parser__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
            MR_Word mercury__parser__Var_87;
            MR_Word mercury__parser__Var_88;

            mercury__parser__V_4_72 = (mercury__parser__V_5_73 + (MR_Integer) 1);
            *mercury__parser__Var_6 = (MR_Word) mercury__parser__V_4_72;
            mercury__parser__V_11_67 = (MR_Word) mercury__parser__V_4_72;
            mercury__parser__TypeCtorInfo_16_69 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mercury__parser__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_31_31, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_16_69));
              MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_31_31, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_24));
            }
            mercury__parser__TypeCtorInfo_18_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__parser__TypeInfo_for_T_24, mercury__parser__TypeInfo_31_31, mercury__parser__TypeCtorInfo_18_71, *mercury__parser__Var_6, ((MR_Box) (mercury__parser__VarName_5)), mercury__parser__V_9_64, &mercury__parser__V_12_68);
            }
            {
              mercury__parser__VarSet_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__parser__VarSet_19, 0) = ((MR_Box) (mercury__parser__V_11_67));
              MR_hl_field(MR_mktag(0), mercury__parser__VarSet_19, 1) = ((MR_Box) (mercury__parser__V_12_68));
              MR_hl_field(MR_mktag(0), mercury__parser__VarSet_19, 2) = ((MR_Box) (mercury__parser__V_10_65));
            }
            mercury__parser__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mercury__map__det_insert_4_p_0(mercury__parser__TypeCtorInfo_29_29, mercury__parser__TypeInfo_31_31, ((MR_Box) (mercury__parser__VarName_5)), ((MR_Box) (*mercury__parser__Var_6)), mercury__parser__Names0_10, &mercury__parser__Names_12);
            }
            mercury__parser__Var_85 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0)));
            mercury__parser__Var_86 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
            mercury__parser__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2)));
            mercury__parser__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *mercury__parser__STATE_VARIABLE_ParserState_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_85));
              MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__Var_86;
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_19));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Names_12));
            }
          }
      }
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word mercury__parser__ParserState_4,
  MR_Integer mercury__parser__TokenContext_5,
  MR_Word * mercury__parser__TermContext_6)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_String mercury__parser__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 0)));
    MR_Box mercury__parser__Var_12 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 1));
    MR_Word mercury__parser__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 2)));
    MR_Word mercury__parser__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_4, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__parser__TermContext_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__FileName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__parser__TokenContext_5));
    }
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word mercury__parser__TypeClassInfo_for_op_table_25,
  MR_Word mercury__parser__Token_8,
  MR_Integer mercury__parser__Context_9,
  MR_String mercury__parser__UsualMessage_10,
  MR_Word * mercury__parser__Error_11,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
  MR_Word mercury__parser__PS_13)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_String mercury__parser__Op_14;
    MR_Box mercury__parser__OpTable_15;
    MR_String mercury__parser__Var_32;
    MR_Word mercury__parser__Var_33;
    MR_Word mercury__parser__Var_34;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *mercury__parser__STATE_VARIABLE_TokensLeft_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Token_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Context_9));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_21));
    }
    if ((mercury__parser__Token_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
      {
        mercury__parser__Op_14 = (MR_String) ",";
        mercury__parser__succeeded = MR_TRUE;
      }
    else
    if (((MR_tag((MR_Word) mercury__parser__Token_8)) == (MR_mktag((MR_Integer) 1))))
      {
        mercury__parser__Op_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_8, (MR_Integer) 0)));
        mercury__parser__succeeded = MR_TRUE;
      }
    else
      mercury__parser__succeeded = MR_FALSE;
    if (mercury__parser__succeeded)
      {
        mercury__parser__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 0)));
        mercury__parser__OpTable_15 = (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 1));
        mercury__parser__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 2)));
        mercury__parser__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_13, (MR_Integer) 3)));
        {
          MR_Integer mercury__parser__Var_16;
          MR_Word mercury__parser__Var_17;
          MR_Word mercury__parser__Var_18;
          MR_bool MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box mercury__parser__conv3_Var_16;
          MR_Box mercury__parser__conv2_Var_17;
          MR_Box mercury__parser__conv1_Var_18;

          {
            mercury__parser__succeeded = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_25), mercury__parser__OpTable_15, ((MR_Box) (mercury__parser__Op_14)), &mercury__parser__conv3_Var_16, &mercury__parser__conv2_Var_17, &mercury__parser__conv1_Var_18);
          }
          if (mercury__parser__succeeded)
            {
              mercury__parser__Var_16 = ((MR_Integer) mercury__parser__conv3_Var_16);
              mercury__parser__Var_17 = ((MR_Word) mercury__parser__conv2_Var_17);
              mercury__parser__Var_18 = ((MR_Word) mercury__parser__conv1_Var_18);
              mercury__parser__succeeded = MR_TRUE;
            }
        }
        if (!(mercury__parser__succeeded))
          {
            MR_Integer mercury__parser__Var_19;
            MR_Word mercury__parser__Var_20;
            MR_bool MR_CALL (* mercury__parser__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 8)));
            MR_Box mercury__parser__conv6_Var_19;
            MR_Box mercury__parser__conv5_Var_20;

            {
              mercury__parser__succeeded = mercury__parser__func_4(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_25), mercury__parser__OpTable_15, ((MR_Box) (mercury__parser__Op_14)), &mercury__parser__conv6_Var_19, &mercury__parser__conv5_Var_20);
            }
            if (mercury__parser__succeeded)
              {
                mercury__parser__Var_19 = ((MR_Integer) mercury__parser__conv6_Var_19);
                mercury__parser__Var_20 = ((MR_Word) mercury__parser__conv5_Var_20);
                mercury__parser__succeeded = MR_TRUE;
              }
          }
      }
    if (mercury__parser__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parser__Error_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_22));
        }
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__parser__Error_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__UsualMessage_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_22));
      }
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word mercury__parser__TypeClassInfo_for_op_table_16,
  MR_String mercury__parser__UsualMessage_6,
  MR_Word * mercury__parser__Error_7,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_12,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_13,
  MR_Word mercury__parser__PS_9)
{
  {
    MR_bool mercury__parser__succeeded;

    if ((mercury__parser__STATE_VARIABLE_TokensLeft_0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parser__Error_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__UsualMessage_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_12));
        }
        *mercury__parser__STATE_VARIABLE_TokensLeft_13 = mercury__parser__STATE_VARIABLE_TokensLeft_0_12;
      }
    else
      {
        MR_Word mercury__parser__Token_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 0)));
        MR_Integer mercury__parser__Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 1)));
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 2)));
        MR_String mercury__parser__Op_27;
        MR_Box mercury__parser__OpTable_28;
        MR_String mercury__parser__Var_40;
        MR_Word mercury__parser__Var_41;
        MR_Word mercury__parser__Var_42;

        *mercury__parser__STATE_VARIABLE_TokensLeft_13 = mercury__parser__STATE_VARIABLE_TokensLeft_0_12;
        if ((mercury__parser__Token_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
          {
            mercury__parser__Op_27 = (MR_String) ",";
            mercury__parser__succeeded = MR_TRUE;
          }
        else
        if (((MR_tag((MR_Word) mercury__parser__Token_10)) == (MR_mktag((MR_Integer) 1))))
          {
            mercury__parser__Op_27 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_10, (MR_Integer) 0)));
            mercury__parser__succeeded = MR_TRUE;
          }
        else
          mercury__parser__succeeded = MR_FALSE;
        if (mercury__parser__succeeded)
          {
            mercury__parser__Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 0)));
            mercury__parser__OpTable_28 = (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 1));
            mercury__parser__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 2)));
            mercury__parser__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__PS_9, (MR_Integer) 3)));
            {
              MR_Integer mercury__parser__Var_29;
              MR_Word mercury__parser__Var_30;
              MR_Word mercury__parser__Var_31;
              MR_bool MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box mercury__parser__conv3_Var_29;
              MR_Box mercury__parser__conv2_Var_30;
              MR_Box mercury__parser__conv1_Var_31;

              {
                mercury__parser__succeeded = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_16), mercury__parser__OpTable_28, ((MR_Box) (mercury__parser__Op_27)), &mercury__parser__conv3_Var_29, &mercury__parser__conv2_Var_30, &mercury__parser__conv1_Var_31);
              }
              if (mercury__parser__succeeded)
                {
                  mercury__parser__Var_29 = ((MR_Integer) mercury__parser__conv3_Var_29);
                  mercury__parser__Var_30 = ((MR_Word) mercury__parser__conv2_Var_30);
                  mercury__parser__Var_31 = ((MR_Word) mercury__parser__conv1_Var_31);
                  mercury__parser__succeeded = MR_TRUE;
                }
            }
            if (!(mercury__parser__succeeded))
              {
                MR_Integer mercury__parser__Var_32;
                MR_Word mercury__parser__Var_33;
                MR_bool MR_CALL (* mercury__parser__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 8)));
                MR_Box mercury__parser__conv6_Var_32;
                MR_Box mercury__parser__conv5_Var_33;

                {
                  mercury__parser__succeeded = mercury__parser__func_4(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_16), mercury__parser__OpTable_28, ((MR_Box) (mercury__parser__Op_27)), &mercury__parser__conv6_Var_32, &mercury__parser__conv5_Var_33);
                }
                if (mercury__parser__succeeded)
                  {
                    mercury__parser__Var_32 = ((MR_Integer) mercury__parser__conv6_Var_32);
                    mercury__parser__Var_33 = ((MR_Word) mercury__parser__conv5_Var_33);
                    mercury__parser__succeeded = MR_TRUE;
                  }
              }
          }
        if (mercury__parser__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__parser__Error_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_13));
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__parser__Error_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__UsualMessage_6));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*mercury__parser__STATE_VARIABLE_TokensLeft_13));
          }
      }
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word mercury__parser__Term_3,
  MR_Word * mercury__parser__ArgTerms_4)
{
  {
    MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word mercury__parser__LeftTerm_5;
    MR_Word mercury__parser__RightTerm_6;
    MR_Word mercury__parser__Var_9;
    MR_String mercury__parser__Var_10;
    MR_Word mercury__parser__Var_11;
    MR_Word mercury__parser__Var_12;
    MR_Word mercury__parser__Var_13;
    MR_Word mercury__parser__Var_7;

    if (mercury__parser__succeeded)
      {
        mercury__parser__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 0)));
        mercury__parser__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 1)));
        mercury__parser__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Term_3, (MR_Integer) 2)));
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Var_9)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__parser__succeeded)
          {
            mercury__parser__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__Var_9, (MR_Integer) 0)));
            mercury__parser__succeeded = (strcmp(mercury__parser__Var_10, (MR_String) ",") == 0);
            if (mercury__parser__succeeded)
              {
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Var_11)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__parser__succeeded)
                  {
                    mercury__parser__LeftTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Var_11, (MR_Integer) 0)));
                    mercury__parser__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Var_11, (MR_Integer) 1)));
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Var_12)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__parser__succeeded)
                      {
                        mercury__parser__RightTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Var_12, (MR_Integer) 0)));
                        mercury__parser__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Var_12, (MR_Integer) 1)));
                        mercury__parser__succeeded = (mercury__parser__Var_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (mercury__parser__succeeded)
      {
        MR_Word mercury__parser__ArgTerms0_8;

        {
          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(mercury__parser__RightTerm_6, &mercury__parser__ArgTerms0_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parser__ArgTerms_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__LeftTerm_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__ArgTerms0_8));
        }
      }
    else
      {
        MR_Word mercury__parser__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parser__ArgTerms_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Term_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Var_14));
        }
      }
  }
}

static void MR_CALL 
mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(
  MR_Word mercury__parser__TypeClassInfo_for_op_table_44,
  MR_Word mercury__parser__MaybeQualifier0_10,
  MR_Word * mercury__parser__MaybeQualifier_11,
  MR_Word mercury__parser__OpCtxt0_12,
  MR_String mercury__parser__OpName0_13,
  MR_String * mercury__parser__OpName_14,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_27,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_28,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_29,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_30)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_27)) == (MR_mktag((MR_Integer) 1)));
        MR_Integer mercury__parser__SepContext_18;
        MR_String mercury__parser__OpName1_19;
        MR_Integer mercury__parser__NameContext_20;
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_33_33;
        MR_String mercury__parser__ModuleSeparator_17;
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_31_31;
        MR_Word mercury__parser__Var_32;
        MR_Word mercury__parser__Var_34;

        if (mercury__parser__succeeded)
          {
            mercury__parser__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_27, (MR_Integer) 0)));
            mercury__parser__SepContext_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_27, (MR_Integer) 1)));
            mercury__parser__STATE_VARIABLE_TokensLeft_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_27, (MR_Integer) 2)));
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Var_32)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__parser__succeeded)
              {
                mercury__parser__ModuleSeparator_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Var_32, (MR_Integer) 0)));
                if ((strcmp(mercury__parser__ModuleSeparator_17, (MR_String) ".") == 0))
                  mercury__parser__succeeded = MR_TRUE;
                else
                if ((strcmp(mercury__parser__ModuleSeparator_17, (MR_String) ":") == 0))
                  mercury__parser__succeeded = MR_TRUE;
                else
                  mercury__parser__succeeded = MR_FALSE;
                if (mercury__parser__succeeded)
                  {
                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_31_31)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__parser__succeeded)
                      {
                        mercury__parser__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_31_31, (MR_Integer) 0)));
                        mercury__parser__NameContext_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_31_31, (MR_Integer) 1)));
                        mercury__parser__STATE_VARIABLE_TokensLeft_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_31_31, (MR_Integer) 2)));
                        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Var_34)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__parser__succeeded)
                          {
                            mercury__parser__OpName1_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Var_34, (MR_Integer) 0)));
                            mercury__parser__succeeded = (strcmp(mercury__parser__OpName1_19, (MR_String) "\140") == 0);
                            mercury__parser__succeeded = !(mercury__parser__succeeded);
                          }
                      }
                  }
              }
          }
        if (mercury__parser__succeeded)
          {
            MR_Word mercury__parser__QTerm1_21;
            MR_Word mercury__parser__MaybeQualifier01_22;
            MR_Word mercury__parser__OpCtxt1_26;
            MR_Word mercury__parser__Var_35;
            MR_Word mercury__parser__Var_36;
            MR_String mercury__parser__FileName_64;
            MR_Box mercury__parser__Var_67;
            MR_Word mercury__parser__Var_68;
            MR_Word mercury__parser__Var_69;

            {
              mercury__parser__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__parser__Var_35, 0) = ((MR_Box) (mercury__parser__OpName0_13));
            }
            mercury__parser__Var_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__parser__QTerm1_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_21, 0) = ((MR_Box) (mercury__parser__Var_35));
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_21, 1) = ((MR_Box) (mercury__parser__Var_36));
              MR_hl_field(MR_mktag(0), mercury__parser__QTerm1_21, 2) = ((MR_Box) (mercury__parser__OpCtxt0_12));
            }
            if ((mercury__parser__MaybeQualifier0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mercury__parser__MaybeQualifier01_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__parser__MaybeQualifier01_22, 0) = ((MR_Box) (mercury__parser__QTerm1_21));
              }
            else
              {
                MR_Word mercury__parser__QTerm0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__MaybeQualifier0_10, (MR_Integer) 0)));
                MR_Word mercury__parser__SepCtxt_24;
                MR_Word mercury__parser__QTerm01_25;
                MR_Word mercury__parser__Var_37;
                MR_Word mercury__parser__Var_39;
                MR_Word mercury__parser__Var_40;
                MR_Word mercury__parser__Var_41;
                MR_String mercury__parser__FileName_53 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 0)));
                MR_Box mercury__parser__Var_56 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 1));
                MR_Word mercury__parser__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 2)));
                MR_Word mercury__parser__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 3)));

                {
                  mercury__parser__SepCtxt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__parser__SepCtxt_24, 0) = ((MR_Box) (mercury__parser__FileName_53));
                  MR_hl_field(MR_mktag(0), mercury__parser__SepCtxt_24, 1) = ((MR_Box) (mercury__parser__SepContext_18));
                }
                mercury__parser__Var_37 = (MR_Word) &mercury__parser_scalar_common_7[0];
                mercury__parser__Var_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__parser__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_40, 0) = ((MR_Box) (mercury__parser__QTerm1_21));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_40, 1) = ((MR_Box) (mercury__parser__Var_41));
                }
                {
                  mercury__parser__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_39, 0) = ((MR_Box) (mercury__parser__QTerm0_23));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_39, 1) = ((MR_Box) (mercury__parser__Var_40));
                }
                {
                  mercury__parser__QTerm01_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__parser__QTerm01_25, 0) = ((MR_Box) (mercury__parser__Var_37));
                  MR_hl_field(MR_mktag(0), mercury__parser__QTerm01_25, 1) = ((MR_Box) (mercury__parser__Var_39));
                  MR_hl_field(MR_mktag(0), mercury__parser__QTerm01_25, 2) = ((MR_Box) (mercury__parser__SepCtxt_24));
                }
                {
                  mercury__parser__MaybeQualifier01_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__parser__MaybeQualifier01_22, 0) = ((MR_Box) (mercury__parser__QTerm01_25));
                }
              }
            mercury__parser__FileName_64 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 0)));
            mercury__parser__Var_67 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 1));
            mercury__parser__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 2)));
            mercury__parser__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_29, (MR_Integer) 3)));
            {
              mercury__parser__OpCtxt1_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__parser__OpCtxt1_26, 0) = ((MR_Box) (mercury__parser__FileName_64));
              MR_hl_field(MR_mktag(0), mercury__parser__OpCtxt1_26, 1) = ((MR_Box) (mercury__parser__NameContext_20));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__parser__next_value_of_MaybeQualifier0_10 = mercury__parser__MaybeQualifier01_22;
              MR_Word mercury__parser__next_value_of_OpCtxt0_12 = mercury__parser__OpCtxt1_26;
              MR_String mercury__parser__next_value_of_OpName0_13 = mercury__parser__OpName1_19;
              MR_Word mercury__parser__next_value_of_STATE_VARIABLE_TokensLeft_0_27 = mercury__parser__STATE_VARIABLE_TokensLeft_33_33;

              mercury__parser__STATE_VARIABLE_TokensLeft_0_27 = mercury__parser__next_value_of_STATE_VARIABLE_TokensLeft_0_27;
              mercury__parser__OpName0_13 = mercury__parser__next_value_of_OpName0_13;
              mercury__parser__OpCtxt0_12 = mercury__parser__next_value_of_OpCtxt0_12;
              mercury__parser__MaybeQualifier0_10 = mercury__parser__next_value_of_MaybeQualifier0_10;
            }
            continue;
          }
        else
          {
            *mercury__parser__MaybeQualifier_11 = mercury__parser__MaybeQualifier0_10;
            *mercury__parser__OpName_14 = mercury__parser__OpName0_13;
            *mercury__parser__STATE_VARIABLE_PS_30 = mercury__parser__STATE_VARIABLE_PS_0_29;
            *mercury__parser__STATE_VARIABLE_TokensLeft_28 = mercury__parser__STATE_VARIABLE_TokensLeft_0_27;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__parser____Compare____term_kind_0_0(
  MR_Word * mercury__parser__HeadVar__1_1,
  MR_Word mercury__parser__HeadVar__2_2,
  MR_Word mercury__parser__HeadVar__3_3)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Integer mercury__parser__Cast_HeadVar1_4 = (MR_Integer) mercury__parser__HeadVar__2_2;
    MR_Integer mercury__parser__Cast_HeadVar2_5 = (MR_Integer) mercury__parser__HeadVar__3_3;

    mercury__parser__succeeded = (mercury__parser__Cast_HeadVar1_4 < mercury__parser__Cast_HeadVar2_5);
    if (mercury__parser__succeeded)
      *mercury__parser__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__parser__succeeded = (mercury__parser__Cast_HeadVar1_4 == mercury__parser__Cast_HeadVar2_5);
        if (mercury__parser__succeeded)
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__parser____Unify____term_kind_0_0(
  MR_Word mercury__parser__HeadVar__2_1,
  MR_Word mercury__parser__HeadVar__2_2)
{
  {
    MR_bool mercury__parser__succeeded = (mercury__parser__HeadVar__2_1 == mercury__parser__HeadVar__2_2);

    return mercury__parser__succeeded;
  }
}

void MR_CALL 
mercury__parser____Compare____parser_state_2_0(
  MR_Word mercury__parser__TypeInfo_for_Ops_17,
  MR_Word mercury__parser__TypeInfo_for_T_18,
  MR_Word * mercury__parser__HeadVar__1_1,
  MR_Word mercury__parser__HeadVar__2_2,
  MR_Word mercury__parser__HeadVar__3_3)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Integer mercury__parser__CastX_15 = (MR_Integer) mercury__parser__HeadVar__2_2;
    MR_Integer mercury__parser__CastY_16 = (MR_Integer) mercury__parser__HeadVar__3_3;

    mercury__parser__succeeded = (mercury__parser__CastX_15 == mercury__parser__CastY_16);
    if (mercury__parser__succeeded)
      *mercury__parser__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mercury__parser__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box mercury__parser__Var_5 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 1));
        MR_Word mercury__parser__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__parser__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 3)));
        MR_String mercury__parser__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box mercury__parser__Var_9 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__parser__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__parser__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__parser__Var_12;
        MR_Integer mercury__parser__V_7_30;

{
#define MR_PROC_LABEL mercury__parser____Compare____parser_state_2_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__parser__Var_4 ;
	S2 =  mercury__parser__Var_8 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_7_30  = Res;
}
        mercury__parser__succeeded = (mercury__parser__V_7_30 < (MR_Integer) 0);
        if (mercury__parser__succeeded)
          mercury__parser__Var_12 = (MR_Integer) 1;
        else
          {
            mercury__parser__succeeded = (mercury__parser__V_7_30 == (MR_Integer) 0);
            if (mercury__parser__succeeded)
              mercury__parser__Var_12 = (MR_Integer) 0;
            else
              mercury__parser__Var_12 = (MR_Integer) 2;
          }
        mercury__parser__succeeded = (mercury__parser__Var_12 == (MR_Integer) 0);
        mercury__parser__succeeded = !(mercury__parser__succeeded);
        if (mercury__parser__succeeded)
          *mercury__parser__HeadVar__1_1 = mercury__parser__Var_12;
        else
          {
            MR_Word mercury__parser__Var_13;

            {
              mercury__builtin__compare_3_p_0(mercury__parser__TypeInfo_for_Ops_17, &mercury__parser__Var_13, mercury__parser__Var_5, mercury__parser__Var_9);
            }
            mercury__parser__succeeded = (mercury__parser__Var_13 == (MR_Integer) 0);
            mercury__parser__succeeded = !(mercury__parser__succeeded);
            if (mercury__parser__succeeded)
              *mercury__parser__HeadVar__1_1 = mercury__parser__Var_13;
            else
              {
                MR_Word mercury__parser__Var_14;

                {
                  mercury__varset____Compare____varset_1_0(mercury__parser__TypeInfo_for_T_18, &mercury__parser__Var_14, mercury__parser__Var_6, mercury__parser__Var_10);
                }
                mercury__parser__succeeded = (mercury__parser__Var_14 == (MR_Integer) 0);
                mercury__parser__succeeded = !(mercury__parser__succeeded);
                if (mercury__parser__succeeded)
                  *mercury__parser__HeadVar__1_1 = mercury__parser__Var_14;
                else
                  {
                    MR_Word mercury__parser__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                    MR_Word mercury__parser__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    MR_Word mercury__parser__TypeInfo_24_24;

                    {
                      mercury__parser__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_24_24, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_23_23));
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_24_24, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_18));
                    }
                    {
                      mercury__tree234____Compare____tree234_2_0(mercury__parser__TypeCtorInfo_22_22, mercury__parser__TypeInfo_24_24, mercury__parser__HeadVar__1_1, (MR_Word) mercury__parser__Var_7, (MR_Word) mercury__parser__Var_11);
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__parser____Unify____parser_state_2_0(
  MR_Word mercury__parser__TypeInfo_for_Ops_13,
  MR_Word mercury__parser__TypeInfo_for_T_14,
  MR_Word mercury__parser__HeadVar__1_1,
  MR_Word mercury__parser__HeadVar__2_2)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Integer mercury__parser__CastX_11 = (MR_Integer) mercury__parser__HeadVar__1_1;
    MR_Integer mercury__parser__CastY_12 = (MR_Integer) mercury__parser__HeadVar__2_2;

    mercury__parser__succeeded = (mercury__parser__CastX_11 == mercury__parser__CastY_12);
    if (mercury__parser__succeeded)
      mercury__parser__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__parser__TypeCtorInfo_17_17;
        MR_Word mercury__parser__TypeCtorInfo_18_18;
        MR_Word mercury__parser__TypeInfo_19_19;
        MR_String mercury__parser__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
        MR_Box mercury__parser__Var_4 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 1));
        MR_Word mercury__parser__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__parser__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 3)));
        MR_String mercury__parser__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box mercury__parser__Var_8 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 1));
        MR_Word mercury__parser__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__parser__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 3)));

        mercury__parser__succeeded = (strcmp(mercury__parser__Var_3, mercury__parser__Var_7) == 0);
        if (mercury__parser__succeeded)
          {
            {
              mercury__parser__succeeded = mercury__builtin__unify_2_p_0(mercury__parser__TypeInfo_for_Ops_13, mercury__parser__Var_4, mercury__parser__Var_8);
            }
            if (mercury__parser__succeeded)
              {
                {
                  mercury__parser__succeeded = mercury__varset____Unify____varset_1_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__Var_5, mercury__parser__Var_9);
                }
                if (mercury__parser__succeeded)
                  {
                    mercury__parser__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                    mercury__parser__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    {
                      mercury__parser__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_19_19, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_18_18));
                      MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_19_19, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_14));
                    }
                    {
                      mercury__parser__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__parser__TypeCtorInfo_17_17, mercury__parser__TypeInfo_19_19, (MR_Word) mercury__parser__Var_6, (MR_Word) mercury__parser__Var_10);
                    }
                  }
              }
          }
      }
    return mercury__parser__succeeded;
  }
}

void MR_CALL 
mercury__parser____Compare____parse_1_0(
  MR_Word mercury__parser__TypeInfo_for_T_19,
  MR_Word * mercury__parser__HeadVar__1_1,
  MR_Word mercury__parser__HeadVar__2_2,
  MR_Word mercury__parser__HeadVar__3_3)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Integer mercury__parser__CastX_17 = (MR_Integer) mercury__parser__HeadVar__2_2;
    MR_Integer mercury__parser__CastY_18 = (MR_Integer) mercury__parser__HeadVar__3_3;

    mercury__parser__succeeded = (mercury__parser__CastX_17 == mercury__parser__CastY_18);
    if (mercury__parser__succeeded)
      *mercury__parser__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__parser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__parser__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mercury__parser__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__parser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String mercury__parser__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__parser__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__parser__Var_16;
            MR_Integer mercury__parser__V_7_28;

{
#define MR_PROC_LABEL mercury__parser____Compare____parse_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__parser__Var_23 ;
	S2 =  mercury__parser__Var_14 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_7_28  = Res;
}
            mercury__parser__succeeded = (mercury__parser__V_7_28 < (MR_Integer) 0);
            if (mercury__parser__succeeded)
              mercury__parser__Var_16 = (MR_Integer) 1;
            else
              {
                mercury__parser__succeeded = (mercury__parser__V_7_28 == (MR_Integer) 0);
                if (mercury__parser__succeeded)
                  mercury__parser__Var_16 = (MR_Integer) 0;
                else
                  mercury__parser__Var_16 = (MR_Integer) 2;
              }
            mercury__parser__succeeded = (mercury__parser__Var_16 == (MR_Integer) 0);
            mercury__parser__succeeded = !(mercury__parser__succeeded);
            if (mercury__parser__succeeded)
              *mercury__parser__HeadVar__1_1 = mercury__parser__Var_16;
            else
              {
                mercury__lexer____Compare____token_list_0_0(mercury__parser__HeadVar__1_1, mercury__parser__Var_22, mercury__parser__Var_15);
              }
          }
        else
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Box mercury__parser__Var_24 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__parser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mercury__parser__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Box mercury__parser__Var_5 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(mercury__parser__TypeInfo_for_T_19, mercury__parser__HeadVar__1_1, mercury__parser__Var_24, mercury__parser__Var_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__parser____Unify____parse_1_0(
  MR_Word mercury__parser__TypeInfo_for_T_11,
  MR_Word mercury__parser__HeadVar__1_1,
  MR_Word mercury__parser__HeadVar__2_2)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Integer mercury__parser__CastX_9 = (MR_Integer) mercury__parser__HeadVar__1_1;
    MR_Integer mercury__parser__CastY_10 = (MR_Integer) mercury__parser__HeadVar__2_2;

    mercury__parser__succeeded = (mercury__parser__CastX_9 == mercury__parser__CastY_10);
    if (mercury__parser__succeeded)
      mercury__parser__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mercury__parser__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__parser__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mercury__parser__Var_7;
        MR_Word mercury__parser__Var_8;

        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__parser__succeeded)
          {
            mercury__parser__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 0)));
            mercury__parser__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__2_2, (MR_Integer) 1)));
            mercury__parser__succeeded = (strcmp(mercury__parser__Var_5, mercury__parser__Var_7) == 0);
            if (mercury__parser__succeeded)
              {
                mercury__parser__succeeded = mercury__lexer____Unify____token_list_0_0(mercury__parser__Var_6, mercury__parser__Var_8);
              }
          }
      }
    else
      {
        MR_Box mercury__parser__Var_3 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__parser__Var_4;

        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__parser__succeeded)
          {
            mercury__parser__Var_4 = (MR_hl_field(MR_mktag(0), mercury__parser__HeadVar__2_2, (MR_Integer) 0));
            {
              mercury__parser__succeeded = mercury__builtin__unify_2_p_0(mercury__parser__TypeInfo_for_T_11, mercury__parser__Var_3, mercury__parser__Var_4);
            }
          }
      }
    return mercury__parser__succeeded;
  }
}

MR_Word MR_CALL 
mercury__parser__parser_state_get_varset_1_f_0(
  MR_Word mercury__parser__TypeInfo_for_Ops_8,
  MR_Word mercury__parser__TypeInfo_for_T_9,
  MR_Word mercury__parser__ParserState_3)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 2)));
    MR_String mercury__parser__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 0)));
    MR_Box mercury__parser__Var_6 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 1));
    MR_Word mercury__parser__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 3)));

    return mercury__parser__X_4;
  }
}

void MR_CALL 
mercury__parser__final_parser_state_2_p_0(
  MR_Word mercury__parser__TypeInfo_for_Ops_5,
  MR_Word mercury__parser__TypeInfo_for_T_6,
  MR_Word mercury__parser__ParserState_3,
  MR_Word * mercury__parser__VarSet_4)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_String mercury__parser__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 0)));
    MR_Box mercury__parser__Var_10 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 1));
    MR_Word mercury__parser__Var_11;

    *mercury__parser__VarSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 2)));
    mercury__parser__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_3, (MR_Integer) 3)));
  }
}

void MR_CALL 
mercury__parser__init_parser_state_3_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_10,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_9,
  MR_Box mercury__parser__Ops_4,
  MR_String mercury__parser__FileName_5,
  MR_Word * mercury__parser__ParserState_6)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__VarSet_7 = (MR_Word) &mercury__parser_scalar_common_2[2];
    MR_Word mercury__parser__Names_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__parser__V_3_15 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
    MR_Word mercury__parser__V_4_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__parser__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mercury__parser__ParserState_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__FileName_5));
      MR_hl_field(MR_mktag(0), base, 1) = mercury__parser__Ops_4;
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parser__VarSet_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parser__Names_8));
    }
  }
}

static MR_Word MR_CALL 
mercury__parser__lexer_size_to_term_size_1_f_0(
  MR_Word mercury__parser__HeadVar__1_1)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__HeadVar__2_2 = ((&mercury__parser_vector_common_9[0 + mercury__parser__HeadVar__1_1]))->mercury__parser__vector_common_type_9_0__vct_9_f_0;

    return mercury__parser__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mercury__parser__lexer_signedness_to_term_signedness_1_f_0(
  MR_Word mercury__parser__HeadVar__1_1)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__HeadVar__2_2;

    switch (mercury__parser__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return mercury__parser__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mercury__parser__lexer_base_to_term_base_1_f_0(
  MR_Word mercury__parser__HeadVar__1_1)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__HeadVar__2_2 = ((&mercury__parser_vector_common_8[0 + mercury__parser__HeadVar__1_1]))->mercury__parser__vector_common_type_8_0__vct_8_f_0;

    return mercury__parser__HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__parser__could_start_term_2_p_0(
  MR_Word mercury__parser__HeadVar__1_1,
  MR_Word * mercury__parser__HeadVar__2_2)
{
  {
    MR_bool mercury__parser__succeeded;

    switch (MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__parser__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 5:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 8:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 9:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 10:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 5:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 6:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            *mercury__parser__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mercury__parser__check_priority_3_p_0(
  MR_Word mercury__parser__HeadVar__1_1,
  MR_Integer mercury__parser__MaxPriority_2,
  MR_Integer mercury__parser__Priority_3)
{
  {
    MR_bool mercury__parser__succeeded;

    switch (mercury__parser__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__parser__succeeded = (mercury__parser__Priority_3 < mercury__parser__MaxPriority_2);
        break;
      case (MR_Integer) 1:
        mercury__parser__succeeded = (mercury__parser__Priority_3 <= mercury__parser__MaxPriority_2);
        break;
    }
    return mercury__parser__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__parser__find_first_binary_prefix_op_5_p_0(
  MR_Word mercury__parser__OpInfo_6,
  MR_Word mercury__parser__OtherOpInfos_7,
  MR_Integer * mercury__parser__OpPriority_8,
  MR_Word * mercury__parser__RightAssoc_9,
  MR_Word * mercury__parser__RightRightAssoc_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__parser__succeeded;
        MR_Word mercury__parser__Class_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__OpInfo_6, (MR_Integer) 0)));
        MR_Integer mercury__parser__Priority_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parser__OpInfo_6, (MR_Integer) 1)));
        MR_Word mercury__parser__RightAssocPrime_13;
        MR_Word mercury__parser__RightRightAssocPrime_14;

        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Class_11)) == (MR_mktag((MR_Integer) 2)));
        if (mercury__parser__succeeded)
          {
            mercury__parser__RightAssocPrime_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__parser__Class_11, (MR_Integer) 0)));
            mercury__parser__RightRightAssocPrime_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__parser__Class_11, (MR_Integer) 1)));
            *mercury__parser__OpPriority_8 = mercury__parser__Priority_12;
            *mercury__parser__RightAssoc_9 = mercury__parser__RightAssocPrime_13;
            *mercury__parser__RightRightAssoc_10 = mercury__parser__RightRightAssocPrime_14;
            mercury__parser__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__parser__HeadOpInfo_15;
            MR_Word mercury__parser__TailOpInfos_16;

            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__OtherOpInfos_7)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__parser__succeeded)
              {
                mercury__parser__HeadOpInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__OtherOpInfos_7, (MR_Integer) 0)));
                mercury__parser__TailOpInfos_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__OtherOpInfos_7, (MR_Integer) 1)));
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__parser__next_value_of_OpInfo_6 = mercury__parser__HeadOpInfo_15;
                  MR_Word mercury__parser__next_value_of_OtherOpInfos_7 = mercury__parser__TailOpInfos_16;

                  mercury__parser__OtherOpInfos_7 = mercury__parser__next_value_of_OtherOpInfos_7;
                  mercury__parser__OpInfo_6 = mercury__parser__next_value_of_OpInfo_6;
                }
                continue;
              }
          }
        return mercury__parser__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__parser__find_first_prefix_op_4_p_0(
  MR_Word mercury__parser__OpInfo_5,
  MR_Word mercury__parser__OtherOpInfos_6,
  MR_Integer * mercury__parser__OpPriority_7,
  MR_Word * mercury__parser__RightAssoc_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__parser__succeeded;
        MR_Word mercury__parser__Class_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__OpInfo_5, (MR_Integer) 0)));
        MR_Integer mercury__parser__Priority_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parser__OpInfo_5, (MR_Integer) 1)));
        MR_Word mercury__parser__RightAssocPrime_11;

        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Class_9)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__parser__succeeded)
          {
            mercury__parser__RightAssocPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Class_9, (MR_Integer) 0)));
            *mercury__parser__OpPriority_7 = mercury__parser__Priority_10;
            *mercury__parser__RightAssoc_8 = mercury__parser__RightAssocPrime_11;
            mercury__parser__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__parser__HeadOpInfo_12;
            MR_Word mercury__parser__TailOpInfos_13;

            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__OtherOpInfos_6)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__parser__succeeded)
              {
                mercury__parser__HeadOpInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__OtherOpInfos_6, (MR_Integer) 0)));
                mercury__parser__TailOpInfos_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__OtherOpInfos_6, (MR_Integer) 1)));
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__parser__next_value_of_OpInfo_5 = mercury__parser__HeadOpInfo_12;
                  MR_Word mercury__parser__next_value_of_OtherOpInfos_6 = mercury__parser__TailOpInfos_13;

                  mercury__parser__OtherOpInfos_6 = mercury__parser__next_value_of_OtherOpInfos_6;
                  mercury__parser__OpInfo_5 = mercury__parser__next_value_of_OpInfo_5;
                }
                continue;
              }
          }
        return mercury__parser__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mercury__parser__parse_args_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_35,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_34,
  MR_Word * mercury__parser__List_6,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__Arg0_9;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
    MR_Word mercury__parser__STATE_VARIABLE_PS_24_24;
    MR_Box mercury__parser__OpTable_47 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 1));
    MR_Integer mercury__parser__ArgPriority_48;
    MR_Integer mercury__parser__Var_49;
    MR_Integer mercury__parser__LeftPriority_70;
    MR_Word mercury__parser__LeftTerm0_71;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_22_75;
    MR_Word mercury__parser__STATE_VARIABLE_PS_23_76;
    MR_String mercury__parser__Var_58 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 0)));
    MR_Word mercury__parser__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 2)));
    MR_Word mercury__parser__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 3)));
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__parser__conv1_Var_49;

    {
      mercury__parser__conv1_Var_49 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_34), mercury__parser__OpTable_47);
    }
    mercury__parser__Var_49 = ((MR_Integer) mercury__parser__conv1_Var_49);
    mercury__parser__ArgPriority_48 = (mercury__parser__Var_49 + (MR_Integer) 1);
    {
      mercury__parser__parse_left_term_8_p_0(mercury__parser__TypeInfo_for_T_35, mercury__parser__TypeClassInfo_for_op_table_34, mercury__parser__ArgPriority_48, (MR_Integer) 1, &mercury__parser__LeftPriority_70, &mercury__parser__LeftTerm0_71, mercury__parser__STATE_VARIABLE_TokensLeft_0_19, &mercury__parser__STATE_VARIABLE_TokensLeft_22_75, mercury__parser__STATE_VARIABLE_PS_0_21, &mercury__parser__STATE_VARIABLE_PS_23_76);
    }
    if (((MR_tag((MR_Word) mercury__parser__LeftTerm0_71)) == (MR_mktag((MR_Integer) 1))))
      {
        mercury__parser__Arg0_9 = mercury__parser__LeftTerm0_71;
        mercury__parser__STATE_VARIABLE_TokensLeft_23_23 = mercury__parser__STATE_VARIABLE_TokensLeft_22_75;
        mercury__parser__STATE_VARIABLE_PS_24_24 = mercury__parser__STATE_VARIABLE_PS_23_76;
      }
    else
      {
        MR_Word mercury__parser__LeftTerm_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__LeftTerm0_71, (MR_Integer) 0)));

        {
          mercury__parser__parse_rest_9_p_0(mercury__parser__TypeInfo_for_T_35, mercury__parser__TypeClassInfo_for_op_table_34, mercury__parser__ArgPriority_48, (MR_Integer) 1, mercury__parser__LeftPriority_70, mercury__parser__LeftTerm_72, &mercury__parser__Arg0_9, mercury__parser__STATE_VARIABLE_TokensLeft_22_75, &mercury__parser__STATE_VARIABLE_TokensLeft_23_23, mercury__parser__STATE_VARIABLE_PS_23_76, &mercury__parser__STATE_VARIABLE_PS_24_24);
        }
      }
    if (((MR_tag((MR_Word) mercury__parser__Arg0_9)) == (MR_mktag((MR_Integer) 1))))
      {
        *mercury__parser__List_6 = (MR_Word) mercury__parser__Arg0_9;
        *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
        *mercury__parser__STATE_VARIABLE_PS_22 = mercury__parser__STATE_VARIABLE_PS_24_24;
      }
    else
      {
        MR_Word mercury__parser__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Arg0_9, (MR_Integer) 0)));

        if ((mercury__parser__STATE_VARIABLE_TokensLeft_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__parser__List_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file in argument list"));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_23_23));
            }
            *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
            *mercury__parser__STATE_VARIABLE_PS_22 = mercury__parser__STATE_VARIABLE_PS_24_24;
          }
        else
          {
            MR_Word mercury__parser__Token_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 0)));
            MR_Integer mercury__parser__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 1)));
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 2)));

            mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
            if (mercury__parser__succeeded)
              {
                MR_Word mercury__parser__Tail0_13;

                {
                  mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_35, mercury__parser__TypeClassInfo_for_op_table_34, &mercury__parser__Tail0_13, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, mercury__parser__STATE_VARIABLE_TokensLeft_20, mercury__parser__STATE_VARIABLE_PS_24_24, mercury__parser__STATE_VARIABLE_PS_22);
                }
                if (((MR_tag((MR_Word) mercury__parser__Tail0_13)) == (MR_mktag((MR_Integer) 1))))
                  *mercury__parser__List_6 = mercury__parser__Tail0_13;
                else
                  {
                    MR_Word mercury__parser__Tail_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_13, (MR_Integer) 0)));
                    MR_Word mercury__parser__Var_29;

                    {
                      mercury__parser__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_29, 0) = ((MR_Box) (mercury__parser__Arg_10));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_29, 1) = ((MR_Box) (mercury__parser__Tail_14));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *mercury__parser__List_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_29));
                    }
                  }
              }
            else
              {
                mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                if (mercury__parser__succeeded)
                  {
                    MR_Word mercury__parser__Var_30;
                    MR_Word mercury__parser__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                    {
                      mercury__parser__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_30, 0) = ((MR_Box) (mercury__parser__Arg_10));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_30, 1) = ((MR_Box) (mercury__parser__Var_31));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *mercury__parser__List_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_30));
                    }
                    *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_26_26;
                  }
                else
                  {
                    MR_Word mercury__parser__conv2_List_6;

                    {
                      mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(mercury__parser__TypeClassInfo_for_op_table_34, mercury__parser__Token_11, mercury__parser__Context_12, (MR_String) "expected \140,\', \140)\', or operator", &mercury__parser__conv2_List_6, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, mercury__parser__STATE_VARIABLE_TokensLeft_20, mercury__parser__STATE_VARIABLE_PS_24_24);
                    }
                    *mercury__parser__List_6 = (MR_Word) mercury__parser__conv2_List_6;
                  }
                *mercury__parser__STATE_VARIABLE_PS_22 = mercury__parser__STATE_VARIABLE_PS_24_24;
              }
          }
      }
  }
}

static void MR_CALL 
mercury__parser__parse_list_tail_6_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_68,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_67,
  MR_Word mercury__parser__Arg_7,
  MR_Word * mercury__parser__List_8,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_21,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_22,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_23,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_24)
{
  {
    MR_bool mercury__parser__succeeded;

    if ((mercury__parser__STATE_VARIABLE_TokensLeft_0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parser__List_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file in list"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_21));
        }
        *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_0_21;
        *mercury__parser__STATE_VARIABLE_PS_24 = mercury__parser__STATE_VARIABLE_PS_0_23;
      }
    else
      {
        MR_Word mercury__parser__Token_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 0)));
        MR_Integer mercury__parser__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 1)));
        MR_Word mercury__parser__TermContext_13;
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_21, (MR_Integer) 2)));
        MR_String mercury__parser__FileName_78 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 0)));
        MR_Box mercury__parser__Var_81 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 1));
        MR_Word mercury__parser__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 2)));
        MR_Word mercury__parser__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_23, (MR_Integer) 3)));

        {
          mercury__parser__TermContext_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_13, 0) = ((MR_Box) (mercury__parser__FileName_78));
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_13, 1) = ((MR_Box) (mercury__parser__Context_12));
        }
        mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
        if (mercury__parser__succeeded)
          {
            MR_Word mercury__parser__Tail0_14;

            {
              mercury__parser__parse_list_5_p_0(mercury__parser__TypeInfo_for_T_68, mercury__parser__TypeClassInfo_for_op_table_67, &mercury__parser__Tail0_14, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, mercury__parser__STATE_VARIABLE_TokensLeft_22, mercury__parser__STATE_VARIABLE_PS_0_23, mercury__parser__STATE_VARIABLE_PS_24);
            }
            if (((MR_tag((MR_Word) mercury__parser__Tail0_14)) == (MR_mktag((MR_Integer) 1))))
              *mercury__parser__List_8 = mercury__parser__Tail0_14;
            else
              {
                MR_Word mercury__parser__Tail_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_14, (MR_Integer) 0)));
                MR_Word mercury__parser__Var_29;
                MR_Word mercury__parser__Var_30 = (MR_Word) &mercury__parser_scalar_common_7[3];
                MR_Word mercury__parser__Var_32;
                MR_Word mercury__parser__Var_33;
                MR_Word mercury__parser__Var_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__parser__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_33, 0) = ((MR_Box) (mercury__parser__Tail_15));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_33, 1) = ((MR_Box) (mercury__parser__Var_34));
                }
                {
                  mercury__parser__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_32, 0) = ((MR_Box) (mercury__parser__Arg_7));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_32, 1) = ((MR_Box) (mercury__parser__Var_33));
                }
                {
                  mercury__parser__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__parser__Var_29, 0) = ((MR_Box) (mercury__parser__Var_30));
                  MR_hl_field(MR_mktag(0), mercury__parser__Var_29, 1) = ((MR_Box) (mercury__parser__Var_32));
                  MR_hl_field(MR_mktag(0), mercury__parser__Var_29, 2) = ((MR_Box) (mercury__parser__TermContext_13));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__parser__List_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_29));
                }
              }
          }
        else
          {
            mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
            if (mercury__parser__succeeded)
              {
                MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_35_35;
                MR_Word mercury__parser__Tail0_60;

                {
                  mercury__parser__parse_arg_5_p_0(mercury__parser__TypeInfo_for_T_68, mercury__parser__TypeClassInfo_for_op_table_67, &mercury__parser__Tail0_60, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, &mercury__parser__STATE_VARIABLE_TokensLeft_35_35, mercury__parser__STATE_VARIABLE_PS_0_23, mercury__parser__STATE_VARIABLE_PS_24);
                }
                if (((MR_tag((MR_Word) mercury__parser__Tail0_60)) == (MR_mktag((MR_Integer) 1))))
                  {
                    *mercury__parser__List_8 = mercury__parser__Tail0_60;
                    *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_35_35;
                  }
                else
                  {
                    MR_Word mercury__parser__Tail_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Tail0_60, (MR_Integer) 0)));
                    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_37_37;
                    MR_Word mercury__parser__Var_38;
                    MR_Integer mercury__parser___Context_18;

                    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_35_35)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__parser__succeeded)
                      {
                        mercury__parser__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 0)));
                        mercury__parser___Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 1)));
                        mercury__parser__STATE_VARIABLE_TokensLeft_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_35_35, (MR_Integer) 2)));
                        mercury__parser__succeeded = (mercury__parser__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                      }
                    if (mercury__parser__succeeded)
                      {
                        MR_Word mercury__parser__Var_39;
                        MR_Word mercury__parser__Var_40;
                        MR_Word mercury__parser__Var_42;
                        MR_Word mercury__parser__Var_43;
                        MR_Word mercury__parser__Var_44;

                        *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_37_37;
                        mercury__parser__Var_40 = (MR_Word) &mercury__parser_scalar_common_7[3];
                        mercury__parser__Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          mercury__parser__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__parser__Var_43, 0) = ((MR_Box) (mercury__parser__Tail_58));
                          MR_hl_field(MR_mktag(1), mercury__parser__Var_43, 1) = ((MR_Box) (mercury__parser__Var_44));
                        }
                        {
                          mercury__parser__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__parser__Var_42, 0) = ((MR_Box) (mercury__parser__Arg_7));
                          MR_hl_field(MR_mktag(1), mercury__parser__Var_42, 1) = ((MR_Box) (mercury__parser__Var_43));
                        }
                        {
                          mercury__parser__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__parser__Var_39, 0) = ((MR_Box) (mercury__parser__Var_40));
                          MR_hl_field(MR_mktag(0), mercury__parser__Var_39, 1) = ((MR_Box) (mercury__parser__Var_42));
                          MR_hl_field(MR_mktag(0), mercury__parser__Var_39, 2) = ((MR_Box) (mercury__parser__TermContext_13));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *mercury__parser__List_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_39));
                        }
                      }
                    else
                      {
                        MR_Word mercury__parser__conv0_List_8;

                        {
                          mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__parser__TypeClassInfo_for_op_table_67, (MR_String) "expecting \']\' or operator", &mercury__parser__conv0_List_8, mercury__parser__STATE_VARIABLE_TokensLeft_35_35, mercury__parser__STATE_VARIABLE_TokensLeft_22, *mercury__parser__STATE_VARIABLE_PS_24);
                        }
                        *mercury__parser__List_8 = (MR_Word) mercury__parser__conv0_List_8;
                      }
                  }
              }
            else
              {
                mercury__parser__succeeded = (mercury__parser__Token_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                if (mercury__parser__succeeded)
                  {
                    MR_Word mercury__parser__Var_47 = (MR_Word) &mercury__parser_scalar_common_7[4];
                    MR_Word mercury__parser__Var_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    MR_Word mercury__parser__Var_50;
                    MR_Word mercury__parser__Var_51;
                    MR_Word mercury__parser__Var_53;
                    MR_Word mercury__parser__Var_54;
                    MR_Word mercury__parser__Var_55;
                    MR_Word mercury__parser__Tail_62;

                    {
                      mercury__parser__Tail_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_62, 0) = ((MR_Box) (mercury__parser__Var_47));
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_62, 1) = ((MR_Box) (mercury__parser__Var_49));
                      MR_hl_field(MR_mktag(0), mercury__parser__Tail_62, 2) = ((MR_Box) (mercury__parser__TermContext_13));
                    }
                    mercury__parser__Var_51 = (MR_Word) &mercury__parser_scalar_common_7[3];
                    mercury__parser__Var_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__parser__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_54, 0) = ((MR_Box) (mercury__parser__Tail_62));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_54, 1) = ((MR_Box) (mercury__parser__Var_55));
                    }
                    {
                      mercury__parser__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_53, 0) = ((MR_Box) (mercury__parser__Arg_7));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_53, 1) = ((MR_Box) (mercury__parser__Var_54));
                    }
                    {
                      mercury__parser__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__parser__Var_50, 0) = ((MR_Box) (mercury__parser__Var_51));
                      MR_hl_field(MR_mktag(0), mercury__parser__Var_50, 1) = ((MR_Box) (mercury__parser__Var_53));
                      MR_hl_field(MR_mktag(0), mercury__parser__Var_50, 2) = ((MR_Box) (mercury__parser__TermContext_13));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *mercury__parser__List_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_50));
                    }
                    *mercury__parser__STATE_VARIABLE_TokensLeft_22 = mercury__parser__STATE_VARIABLE_TokensLeft_26_26;
                  }
                else
                  {
                    MR_Word mercury__parser__conv1_List_8;

                    {
                      mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(mercury__parser__TypeClassInfo_for_op_table_67, mercury__parser__Token_11, mercury__parser__Context_12, (MR_String) "expected comma, \140|\', \140]\', or operator", &mercury__parser__conv1_List_8, mercury__parser__STATE_VARIABLE_TokensLeft_26_26, mercury__parser__STATE_VARIABLE_TokensLeft_22, mercury__parser__STATE_VARIABLE_PS_0_23);
                    }
                    *mercury__parser__List_8 = (MR_Word) mercury__parser__conv1_List_8;
                  }
                *mercury__parser__STATE_VARIABLE_PS_24 = mercury__parser__STATE_VARIABLE_PS_0_23;
              }
          }
      }
  }
}

static void MR_CALL 
mercury__parser__parse_list_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_22,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_21,
  MR_Word * mercury__parser__List_6,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_13,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_14,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_15,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_16)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__Arg0_9;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_17_17;
    MR_Word mercury__parser__STATE_VARIABLE_PS_18_18;
    MR_Box mercury__parser__OpTable_30;
    MR_Integer mercury__parser__ArgPriority_31;
    MR_Integer mercury__parser__Var_32;
    MR_Integer mercury__parser__LeftPriority_53;
    MR_Word mercury__parser__LeftTerm0_54;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_22_58;
    MR_Word mercury__parser__STATE_VARIABLE_PS_23_59;
    MR_Word mercury__parser__TypeInfo_23_38;
    MR_String mercury__parser__Var_41;
    MR_Word mercury__parser__Var_42;
    MR_Word mercury__parser__Var_43;
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
    MR_Box mercury__parser__conv1_Var_32;

{
#define MR_PROC_LABEL mercury__parser__parse_list_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_21 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_23_38  = TypeInfo;
}
    mercury__parser__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 0)));
    mercury__parser__OpTable_30 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 1));
    mercury__parser__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 2)));
    mercury__parser__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_15, (MR_Integer) 3)));
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_21, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__parser__conv1_Var_32 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_21), mercury__parser__OpTable_30);
    }
    mercury__parser__Var_32 = ((MR_Integer) mercury__parser__conv1_Var_32);
    mercury__parser__ArgPriority_31 = (mercury__parser__Var_32 + (MR_Integer) 1);
    {
      mercury__parser__parse_left_term_8_p_0(mercury__parser__TypeInfo_for_T_22, mercury__parser__TypeClassInfo_for_op_table_21, mercury__parser__ArgPriority_31, (MR_Integer) 2, &mercury__parser__LeftPriority_53, &mercury__parser__LeftTerm0_54, mercury__parser__STATE_VARIABLE_TokensLeft_0_13, &mercury__parser__STATE_VARIABLE_TokensLeft_22_58, mercury__parser__STATE_VARIABLE_PS_0_15, &mercury__parser__STATE_VARIABLE_PS_23_59);
    }
    if (((MR_tag((MR_Word) mercury__parser__LeftTerm0_54)) == (MR_mktag((MR_Integer) 1))))
      {
        mercury__parser__Arg0_9 = mercury__parser__LeftTerm0_54;
        mercury__parser__STATE_VARIABLE_TokensLeft_17_17 = mercury__parser__STATE_VARIABLE_TokensLeft_22_58;
        mercury__parser__STATE_VARIABLE_PS_18_18 = mercury__parser__STATE_VARIABLE_PS_23_59;
      }
    else
      {
        MR_Word mercury__parser__LeftTerm_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__LeftTerm0_54, (MR_Integer) 0)));

        {
          mercury__parser__parse_rest_9_p_0(mercury__parser__TypeInfo_for_T_22, mercury__parser__TypeClassInfo_for_op_table_21, mercury__parser__ArgPriority_31, (MR_Integer) 2, mercury__parser__LeftPriority_53, mercury__parser__LeftTerm_55, &mercury__parser__Arg0_9, mercury__parser__STATE_VARIABLE_TokensLeft_22_58, &mercury__parser__STATE_VARIABLE_TokensLeft_17_17, mercury__parser__STATE_VARIABLE_PS_23_59, &mercury__parser__STATE_VARIABLE_PS_18_18);
        }
      }
    if (((MR_tag((MR_Word) mercury__parser__Arg0_9)) == (MR_mktag((MR_Integer) 1))))
      {
        *mercury__parser__List_6 = mercury__parser__Arg0_9;
        *mercury__parser__STATE_VARIABLE_TokensLeft_14 = mercury__parser__STATE_VARIABLE_TokensLeft_17_17;
        *mercury__parser__STATE_VARIABLE_PS_16 = mercury__parser__STATE_VARIABLE_PS_18_18;
      }
    else
      {
        MR_Word mercury__parser__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Arg0_9, (MR_Integer) 0)));

        {
          mercury__parser__parse_list_tail_6_p_0(mercury__parser__TypeInfo_for_T_22, mercury__parser__TypeClassInfo_for_op_table_21, mercury__parser__Arg_10, mercury__parser__List_6, mercury__parser__STATE_VARIABLE_TokensLeft_17_17, mercury__parser__STATE_VARIABLE_TokensLeft_14, mercury__parser__STATE_VARIABLE_PS_18_18, mercury__parser__STATE_VARIABLE_PS_16);
        }
      }
  }
}

static void MR_CALL 
mercury__parser__parse_special_atom_7_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_32,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_31,
  MR_String mercury__parser__Atom_8,
  MR_Word mercury__parser__TermContext_9,
  MR_Word * mercury__parser__Term_10,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21)
{
  {
    MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_18)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_22_22;
    MR_Word mercury__parser__Var_23;
    MR_Integer mercury__parser___Context_13;

    if (mercury__parser__succeeded)
      {
        mercury__parser__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 0)));
        mercury__parser___Context_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 1)));
        mercury__parser__STATE_VARIABLE_TokensLeft_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 2)));
        mercury__parser__succeeded = (mercury__parser__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      }
    if (mercury__parser__succeeded)
      {
        MR_Word mercury__parser__Args0_14;

        {
          mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_32, mercury__parser__TypeClassInfo_for_op_table_31, &mercury__parser__Args0_14, mercury__parser__STATE_VARIABLE_TokensLeft_22_22, mercury__parser__STATE_VARIABLE_TokensLeft_19, mercury__parser__STATE_VARIABLE_PS_0_20, mercury__parser__STATE_VARIABLE_PS_21);
        }
        if (((MR_tag((MR_Word) mercury__parser__Args0_14)) == (MR_mktag((MR_Integer) 1))))
          *mercury__parser__Term_10 = (MR_Word) mercury__parser__Args0_14;
        else
          {
            MR_Word mercury__parser__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Args0_14, (MR_Integer) 0)));
            MR_Word mercury__parser__Var_26;
            MR_Word mercury__parser__Var_27;

            {
              mercury__parser__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__parser__Var_27, 0) = ((MR_Box) (mercury__parser__Atom_8));
            }
            {
              mercury__parser__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__parser__Var_26, 0) = ((MR_Box) (mercury__parser__Var_27));
              MR_hl_field(MR_mktag(0), mercury__parser__Var_26, 1) = ((MR_Box) (mercury__parser__Args_15));
              MR_hl_field(MR_mktag(0), mercury__parser__Var_26, 2) = ((MR_Box) (mercury__parser__TermContext_9));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__parser__Term_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_26));
            }
          }
      }
    else
      {
        MR_Word mercury__parser__Var_28;
        MR_Word mercury__parser__Var_29;
        MR_Word mercury__parser__Var_30;

        {
          mercury__parser__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__parser__Var_29, 0) = ((MR_Box) (mercury__parser__Atom_8));
        }
        mercury__parser__Var_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__parser__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__parser__Var_28, 0) = ((MR_Box) (mercury__parser__Var_29));
          MR_hl_field(MR_mktag(0), mercury__parser__Var_28, 1) = ((MR_Box) (mercury__parser__Var_30));
          MR_hl_field(MR_mktag(0), mercury__parser__Var_28, 2) = ((MR_Box) (mercury__parser__TermContext_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__parser__Term_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_28));
        }
        *mercury__parser__STATE_VARIABLE_PS_21 = mercury__parser__STATE_VARIABLE_PS_0_20;
        *mercury__parser__STATE_VARIABLE_TokensLeft_19 = mercury__parser__STATE_VARIABLE_TokensLeft_0_18;
      }
  }
}

static void MR_CALL 
mercury__parser__parse_higher_order_term_rest_7_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_34,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_33,
  MR_Word mercury__parser__BaseTerm_8,
  MR_Integer mercury__parser__Context_9,
  MR_Word * mercury__parser__TermParse_10,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_20,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_21,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_22,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_23)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__parser__succeeded;
        MR_Word mercury__parser__TermContext_13;
        MR_Word mercury__parser__ArgsParse_14;
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_24_24;
        MR_Word mercury__parser__STATE_VARIABLE_PS_25_25;
        MR_String mercury__parser__FileName_40;
        MR_Word mercury__parser__TypeInfo_36_36;
        MR_Box mercury__parser__Var_43;
        MR_Word mercury__parser__Var_44;
        MR_Word mercury__parser__Var_45;

{
#define MR_PROC_LABEL mercury__parser__parse_higher_order_term_rest_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_33 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_36_36  = TypeInfo;
}
        mercury__parser__FileName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_22, (MR_Integer) 0)));
        mercury__parser__Var_43 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_22, (MR_Integer) 1));
        mercury__parser__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_22, (MR_Integer) 2)));
        mercury__parser__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_22, (MR_Integer) 3)));
        {
          mercury__parser__TermContext_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_13, 0) = ((MR_Box) (mercury__parser__FileName_40));
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_13, 1) = ((MR_Box) (mercury__parser__Context_9));
        }
        {
          mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_34, mercury__parser__TypeClassInfo_for_op_table_33, &mercury__parser__ArgsParse_14, mercury__parser__STATE_VARIABLE_TokensLeft_0_20, &mercury__parser__STATE_VARIABLE_TokensLeft_24_24, mercury__parser__STATE_VARIABLE_PS_0_22, &mercury__parser__STATE_VARIABLE_PS_25_25);
        }
        if (((MR_tag((MR_Word) mercury__parser__ArgsParse_14)) == (MR_mktag((MR_Integer) 1))))
          {
            *mercury__parser__TermParse_10 = (MR_Word) mercury__parser__ArgsParse_14;
            *mercury__parser__STATE_VARIABLE_TokensLeft_21 = mercury__parser__STATE_VARIABLE_TokensLeft_24_24;
            *mercury__parser__STATE_VARIABLE_PS_23 = mercury__parser__STATE_VARIABLE_PS_25_25;
          }
        else
          {
            MR_Word mercury__parser__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ArgsParse_14, (MR_Integer) 0)));
            MR_Word mercury__parser__ApplyTerm_16;
            MR_Word mercury__parser__Var_26 = (MR_Word) &mercury__parser_scalar_common_7[2];
            MR_Word mercury__parser__Var_28;
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_29_29;
            MR_Word mercury__parser__Var_30;
            MR_Integer mercury__parser___OpenContext_17;

            {
              mercury__parser__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__parser__Var_28, 0) = ((MR_Box) (mercury__parser__BaseTerm_8));
              MR_hl_field(MR_mktag(1), mercury__parser__Var_28, 1) = ((MR_Box) (mercury__parser__Args_15));
            }
            {
              mercury__parser__ApplyTerm_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__parser__ApplyTerm_16, 0) = ((MR_Box) (mercury__parser__Var_26));
              MR_hl_field(MR_mktag(0), mercury__parser__ApplyTerm_16, 1) = ((MR_Box) (mercury__parser__Var_28));
              MR_hl_field(MR_mktag(0), mercury__parser__ApplyTerm_16, 2) = ((MR_Box) (mercury__parser__TermContext_13));
            }
            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_24_24)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__parser__succeeded)
              {
                mercury__parser__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_24_24, (MR_Integer) 0)));
                mercury__parser___OpenContext_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_24_24, (MR_Integer) 1)));
                mercury__parser__STATE_VARIABLE_TokensLeft_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_24_24, (MR_Integer) 2)));
                mercury__parser__succeeded = (mercury__parser__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
            if (mercury__parser__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__parser__next_value_of_BaseTerm_8 = mercury__parser__ApplyTerm_16;
                  MR_Word mercury__parser__next_value_of_STATE_VARIABLE_TokensLeft_0_20 = mercury__parser__STATE_VARIABLE_TokensLeft_29_29;
                  MR_Word mercury__parser__next_value_of_STATE_VARIABLE_PS_0_22 = mercury__parser__STATE_VARIABLE_PS_25_25;

                  mercury__parser__STATE_VARIABLE_PS_0_22 = mercury__parser__next_value_of_STATE_VARIABLE_PS_0_22;
                  mercury__parser__STATE_VARIABLE_TokensLeft_0_20 = mercury__parser__next_value_of_STATE_VARIABLE_TokensLeft_0_20;
                  mercury__parser__BaseTerm_8 = mercury__parser__next_value_of_BaseTerm_8;
                }
                continue;
              }
            else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__parser__TermParse_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__ApplyTerm_16));
                }
                *mercury__parser__STATE_VARIABLE_PS_23 = mercury__parser__STATE_VARIABLE_PS_25_25;
                *mercury__parser__STATE_VARIABLE_TokensLeft_21 = mercury__parser__STATE_VARIABLE_TokensLeft_24_24;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__parser__parse_simple_term_8_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_152,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_151,
  MR_Word mercury__parser__Token_9,
  MR_Integer mercury__parser__Context_10,
  MR_Integer mercury__parser__Prec_11,
  MR_Word * mercury__parser__TermParse_12,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_51,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_52,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_53,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_54)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__BaseTermParse_21;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_94_94;
    MR_Word mercury__parser__STATE_VARIABLE_PS_95_95;
    MR_Word mercury__parser__BaseTermOpen_49;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_102_102;
    MR_Word mercury__parser__Var_103;
    MR_Integer mercury__parser___OpenContext_50;

    switch (MR_tag((MR_Word) mercury__parser__Token_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__parser__Token_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word mercury__parser__SubTermParse_37;
              MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_77_77;

              {
                mercury__parser__parse_term_5_p_0(mercury__parser__TypeInfo_for_T_152, mercury__parser__TypeClassInfo_for_op_table_151, &mercury__parser__SubTermParse_37, mercury__parser__STATE_VARIABLE_TokensLeft_0_51, &mercury__parser__STATE_VARIABLE_TokensLeft_77_77, mercury__parser__STATE_VARIABLE_PS_0_53, &mercury__parser__STATE_VARIABLE_PS_95_95);
              }
              if (((MR_tag((MR_Word) mercury__parser__SubTermParse_37)) == (MR_mktag((MR_Integer) 1))))
                {
                  mercury__parser__BaseTermParse_21 = mercury__parser__SubTermParse_37;
                  mercury__parser__STATE_VARIABLE_TokensLeft_94_94 = mercury__parser__STATE_VARIABLE_TokensLeft_77_77;
                }
              else
                {
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_79_79;
                  MR_Word mercury__parser__Var_80;
                  MR_Integer mercury__parser___Context_119;

                  mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_77_77)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__parser__succeeded)
                    {
                      mercury__parser__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_77_77, (MR_Integer) 0)));
                      mercury__parser___Context_119 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_77_77, (MR_Integer) 1)));
                      mercury__parser__STATE_VARIABLE_TokensLeft_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_77_77, (MR_Integer) 2)));
                      mercury__parser__succeeded = (mercury__parser__Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                    }
                  if (mercury__parser__succeeded)
                    {
                      mercury__parser__STATE_VARIABLE_TokensLeft_94_94 = mercury__parser__STATE_VARIABLE_TokensLeft_79_79;
                      mercury__parser__BaseTermParse_21 = mercury__parser__SubTermParse_37;
                    }
                  else
                    {
                      MR_Word mercury__parser__conv2_BaseTermParse_21;

                      {
                        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__parser__TypeClassInfo_for_op_table_151, (MR_String) "expecting \140)\' or operator", &mercury__parser__conv2_BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_77_77, &mercury__parser__STATE_VARIABLE_TokensLeft_94_94, mercury__parser__STATE_VARIABLE_PS_95_95);
                      }
                      mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__conv2_BaseTermParse_21;
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
              MR_Word mercury__parser__conv0_BaseTermParse_21;

              {
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(mercury__parser__TypeClassInfo_for_op_table_151, mercury__parser__Token_9, mercury__parser__Context_10, (MR_String) "unexpected token at start of (sub)term", &mercury__parser__conv0_BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_0_51, &mercury__parser__STATE_VARIABLE_TokensLeft_94_94, mercury__parser__STATE_VARIABLE_PS_0_53);
              }
              mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__conv0_BaseTermParse_21;
              mercury__parser__STATE_VARIABLE_PS_95_95 = mercury__parser__STATE_VARIABLE_PS_0_53;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mercury__parser__TermContext_128;
              MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_70_70;
              MR_Word mercury__parser__Var_71;
              MR_Integer mercury__parser___Context_125;

              {
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_53, mercury__parser__Context_10, &mercury__parser__TermContext_128);
              }
              mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_51)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__parser__succeeded)
                {
                  mercury__parser__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 0)));
                  mercury__parser___Context_125 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 1)));
                  mercury__parser__STATE_VARIABLE_TokensLeft_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 2)));
                  mercury__parser__succeeded = (mercury__parser__Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                }
              if (mercury__parser__succeeded)
                {
                  {
                    mercury__parser__parse_special_atom_7_p_0(mercury__parser__TypeInfo_for_T_152, mercury__parser__TypeClassInfo_for_op_table_151, (MR_String) "[]", mercury__parser__TermContext_128, &mercury__parser__BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_70_70, &mercury__parser__STATE_VARIABLE_TokensLeft_94_94, mercury__parser__STATE_VARIABLE_PS_0_53, &mercury__parser__STATE_VARIABLE_PS_95_95);
                  }
                }
              else
                {
                  mercury__parser__parse_list_5_p_0(mercury__parser__TypeInfo_for_T_152, mercury__parser__TypeClassInfo_for_op_table_151, &mercury__parser__BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_0_51, &mercury__parser__STATE_VARIABLE_TokensLeft_94_94, mercury__parser__STATE_VARIABLE_PS_0_53, &mercury__parser__STATE_VARIABLE_PS_95_95);
                }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word mercury__parser__TermContext_147;
              MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_57_57;
              MR_Word mercury__parser__Var_58;
              MR_Integer mercury__parser___Context_130;

              {
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_53, mercury__parser__Context_10, &mercury__parser__TermContext_147);
              }
              mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_51)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__parser__succeeded)
                {
                  mercury__parser__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 0)));
                  mercury__parser___Context_130 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 1)));
                  mercury__parser__STATE_VARIABLE_TokensLeft_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 2)));
                  mercury__parser__succeeded = (mercury__parser__Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                }
              if (mercury__parser__succeeded)
                {
                  {
                    mercury__parser__parse_special_atom_7_p_0(mercury__parser__TypeInfo_for_T_152, mercury__parser__TypeClassInfo_for_op_table_151, (MR_String) "{}", mercury__parser__TermContext_147, &mercury__parser__BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_57_57, &mercury__parser__STATE_VARIABLE_TokensLeft_94_94, mercury__parser__STATE_VARIABLE_PS_0_53, &mercury__parser__STATE_VARIABLE_PS_95_95);
                  }
                }
              else
                {
                  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_62_62;
                  MR_Word mercury__parser__SubTermParse_143;

                  {
                    mercury__parser__parse_term_5_p_0(mercury__parser__TypeInfo_for_T_152, mercury__parser__TypeClassInfo_for_op_table_151, &mercury__parser__SubTermParse_143, mercury__parser__STATE_VARIABLE_TokensLeft_0_51, &mercury__parser__STATE_VARIABLE_TokensLeft_62_62, mercury__parser__STATE_VARIABLE_PS_0_53, &mercury__parser__STATE_VARIABLE_PS_95_95);
                  }
                  if (((MR_tag((MR_Word) mercury__parser__SubTermParse_143)) == (MR_mktag((MR_Integer) 1))))
                    {
                      mercury__parser__BaseTermParse_21 = mercury__parser__SubTermParse_143;
                      mercury__parser__STATE_VARIABLE_TokensLeft_94_94 = mercury__parser__STATE_VARIABLE_TokensLeft_62_62;
                    }
                  else
                    {
                      MR_Word mercury__parser__SubTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__SubTermParse_143, (MR_Integer) 0)));
                      MR_Word mercury__parser__ArgTerms_42;
                      MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_64_64;
                      MR_Word mercury__parser__Var_65;
                      MR_Integer mercury__parser___Context_132;

                      {
                        mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(mercury__parser__SubTerm_41, &mercury__parser__ArgTerms_42);
                      }
                      mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_62_62)) == (MR_mktag((MR_Integer) 1)));
                      if (mercury__parser__succeeded)
                        {
                          mercury__parser__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_62_62, (MR_Integer) 0)));
                          mercury__parser___Context_132 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_62_62, (MR_Integer) 1)));
                          mercury__parser__STATE_VARIABLE_TokensLeft_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_62_62, (MR_Integer) 2)));
                          mercury__parser__succeeded = (mercury__parser__Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                        }
                      if (mercury__parser__succeeded)
                        {
                          MR_Word mercury__parser__Var_66;
                          MR_Word mercury__parser__BaseTerm_134;

                          mercury__parser__STATE_VARIABLE_TokensLeft_94_94 = mercury__parser__STATE_VARIABLE_TokensLeft_64_64;
                          mercury__parser__Var_66 = (MR_Word) &mercury__parser_scalar_common_7[1];
                          {
                            mercury__parser__BaseTerm_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_134, 0) = ((MR_Box) (mercury__parser__Var_66));
                            MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_134, 1) = ((MR_Box) (mercury__parser__ArgTerms_42));
                            MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_134, 2) = ((MR_Box) (mercury__parser__TermContext_147));
                          }
                          {
                            mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_134));
                          }
                        }
                      else
                        {
                          MR_Word mercury__parser__conv3_BaseTermParse_21;

                          {
                            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__parser__TypeClassInfo_for_op_table_151, (MR_String) "expecting \140}\' or operator", &mercury__parser__conv3_BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_62_62, &mercury__parser__STATE_VARIABLE_TokensLeft_94_94, mercury__parser__STATE_VARIABLE_PS_95_95);
                          }
                          mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__conv3_BaseTermParse_21;
                        }
                    }
                }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String mercury__parser__Atom_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_9, (MR_Integer) 0)));
          MR_Word mercury__parser__TermContext_16;
          MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_92_92;
          MR_Word mercury__parser__Var_93;
          MR_Integer mercury__parser___Context_17;

          {
            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_53, mercury__parser__Context_10, &mercury__parser__TermContext_16);
          }
          mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_51)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__parser__succeeded)
            {
              mercury__parser__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 0)));
              mercury__parser___Context_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 1)));
              mercury__parser__STATE_VARIABLE_TokensLeft_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 2)));
              mercury__parser__succeeded = (mercury__parser__Var_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            }
          if (mercury__parser__succeeded)
            {
              MR_Word mercury__parser__ArgsParse_18;

              {
                mercury__parser__parse_args_5_p_0(mercury__parser__TypeInfo_for_T_152, mercury__parser__TypeClassInfo_for_op_table_151, &mercury__parser__ArgsParse_18, mercury__parser__STATE_VARIABLE_TokensLeft_92_92, &mercury__parser__STATE_VARIABLE_TokensLeft_94_94, mercury__parser__STATE_VARIABLE_PS_0_53, &mercury__parser__STATE_VARIABLE_PS_95_95);
              }
              if (((MR_tag((MR_Word) mercury__parser__ArgsParse_18)) == (MR_mktag((MR_Integer) 1))))
                mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__ArgsParse_18;
              else
                {
                  MR_Word mercury__parser__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ArgsParse_18, (MR_Integer) 0)));
                  MR_Word mercury__parser__BaseTerm_20;
                  MR_Word mercury__parser__Var_96;

                  {
                    mercury__parser__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__parser__Var_96, 0) = ((MR_Box) (mercury__parser__Atom_15));
                  }
                  {
                    mercury__parser__BaseTerm_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_20, 0) = ((MR_Box) (mercury__parser__Var_96));
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_20, 1) = ((MR_Box) (mercury__parser__Args_19));
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_20, 2) = ((MR_Box) (mercury__parser__TermContext_16));
                  }
                  {
                    mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_20));
                  }
                }
            }
          else
            {
              MR_Box mercury__parser__OpTable_24 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_53, (MR_Integer) 1));
              MR_String mercury__parser__Var_181 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_53, (MR_Integer) 0)));
              MR_Word mercury__parser__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_53, (MR_Integer) 2)));
              MR_Word mercury__parser__Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_53, (MR_Integer) 3)));
              MR_Integer mercury__parser__Var_97;

              {
                mercury__parser__succeeded = mercury__ops__lookup_op_2_p_0(mercury__parser__TypeClassInfo_for_op_table_151, mercury__parser__OpTable_24, mercury__parser__Atom_15);
              }
              if (mercury__parser__succeeded)
                {
                  {
                    mercury__parser__Var_97 = mercury__ops__max_priority_1_f_0(mercury__parser__TypeClassInfo_for_op_table_151, mercury__parser__OpTable_24);
                  }
                  mercury__parser__succeeded = (mercury__parser__Prec_11 <= mercury__parser__Var_97);
                }
              if (mercury__parser__succeeded)
                {
                  MR_Word mercury__parser__conv1_BaseTermParse_21;

                  {
                    mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(mercury__parser__TypeClassInfo_for_op_table_151, mercury__parser__Token_9, mercury__parser__Context_10, (MR_String) "unexpected token at start of (sub)term", &mercury__parser__conv1_BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_0_51, &mercury__parser__STATE_VARIABLE_TokensLeft_94_94, mercury__parser__STATE_VARIABLE_PS_0_53);
                  }
                  mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__conv1_BaseTermParse_21;
                }
              else
                {
                  MR_Word mercury__parser__Var_100;
                  MR_Word mercury__parser__Var_101;
                  MR_Word mercury__parser__BaseTerm_106;

                  {
                    mercury__parser__Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__parser__Var_100, 0) = ((MR_Box) (mercury__parser__Atom_15));
                  }
                  mercury__parser__Var_101 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__parser__BaseTerm_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_106, 0) = ((MR_Box) (mercury__parser__Var_100));
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_106, 1) = ((MR_Box) (mercury__parser__Var_101));
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_106, 2) = ((MR_Box) (mercury__parser__TermContext_16));
                  }
                  {
                    mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_106));
                  }
                  mercury__parser__STATE_VARIABLE_TokensLeft_94_94 = mercury__parser__STATE_VARIABLE_TokensLeft_0_51;
                }
              mercury__parser__STATE_VARIABLE_PS_95_95 = mercury__parser__STATE_VARIABLE_PS_0_53;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mercury__parser__VarName_25 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__parser__Token_9, (MR_Integer) 0)));
          MR_Word mercury__parser__Var_26;
          MR_Word mercury__parser__TermContext_109;
          MR_Word mercury__parser__BaseTerm_110;

          {
            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(mercury__parser__TypeInfo_for_T_152, mercury__parser__VarName_25, &mercury__parser__Var_26, mercury__parser__STATE_VARIABLE_PS_0_53, &mercury__parser__STATE_VARIABLE_PS_95_95);
          }
          {
            mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_95_95, mercury__parser__Context_10, &mercury__parser__TermContext_109);
          }
          {
            mercury__parser__BaseTerm_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__parser__BaseTerm_110, 0) = ((MR_Box) (mercury__parser__Var_26));
            MR_hl_field(MR_mktag(1), mercury__parser__BaseTerm_110, 1) = ((MR_Box) (mercury__parser__TermContext_109));
          }
          {
            mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_110));
          }
          mercury__parser__STATE_VARIABLE_TokensLeft_94_94 = mercury__parser__STATE_VARIABLE_TokensLeft_0_51;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__parser__LexerBase_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
              MR_Word mercury__parser__Integer_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 2)));
              MR_Word mercury__parser__LexerSignedness_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 3)));
              MR_Word mercury__parser__LexerSize_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 4)));
              MR_Word mercury__parser__Base_31;
              MR_Word mercury__parser__Signedness_32;
              MR_Word mercury__parser__Size_33;
              MR_Word mercury__parser__Var_89;
              MR_Word mercury__parser__Var_90;
              MR_Word mercury__parser__TermContext_111;
              MR_Word mercury__parser__BaseTerm_112;

              {
                mercury__parser__Base_31 = mercury__parser__lexer_base_to_term_base_1_f_0(mercury__parser__LexerBase_27);
              }
              {
                mercury__parser__Signedness_32 = mercury__parser__lexer_signedness_to_term_signedness_1_f_0(mercury__parser__LexerSignedness_29);
              }
              {
                mercury__parser__Size_33 = mercury__parser__lexer_size_to_term_size_1_f_0(mercury__parser__LexerSize_30);
              }
              {
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_53, mercury__parser__Context_10, &mercury__parser__TermContext_111);
              }
              {
                mercury__parser__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__parser__Var_89, 0) = ((MR_Box) (mercury__parser__Base_31));
                MR_hl_field(MR_mktag(1), mercury__parser__Var_89, 1) = ((MR_Box) (mercury__parser__Integer_28));
                MR_hl_field(MR_mktag(1), mercury__parser__Var_89, 2) = ((MR_Box) (mercury__parser__Signedness_32));
                MR_hl_field(MR_mktag(1), mercury__parser__Var_89, 3) = ((MR_Box) (mercury__parser__Size_33));
              }
              mercury__parser__Var_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__parser__BaseTerm_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_112, 0) = ((MR_Box) (mercury__parser__Var_89));
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_112, 1) = ((MR_Box) (mercury__parser__Var_90));
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_112, 2) = ((MR_Box) (mercury__parser__TermContext_111));
              }
              {
                mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_112));
              }
              mercury__parser__STATE_VARIABLE_TokensLeft_94_94 = mercury__parser__STATE_VARIABLE_TokensLeft_0_51;
              mercury__parser__STATE_VARIABLE_PS_95_95 = mercury__parser__STATE_VARIABLE_PS_0_53;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float mercury__parser__Float_34 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
              MR_Word mercury__parser__Var_87;
              MR_Word mercury__parser__Var_88;
              MR_Word mercury__parser__TermContext_113;
              MR_Word mercury__parser__BaseTerm_114;

              {
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_53, mercury__parser__Context_10, &mercury__parser__TermContext_113);
              }
              {
                mercury__parser__Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), mercury__parser__Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), mercury__parser__Var_87, 1) = MR_box_float(mercury__parser__Float_34);
              }
              mercury__parser__Var_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__parser__BaseTerm_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_114, 0) = ((MR_Box) (mercury__parser__Var_87));
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_114, 1) = ((MR_Box) (mercury__parser__Var_88));
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_114, 2) = ((MR_Box) (mercury__parser__TermContext_113));
              }
              {
                mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_114));
              }
              mercury__parser__STATE_VARIABLE_TokensLeft_94_94 = mercury__parser__STATE_VARIABLE_TokensLeft_0_51;
              mercury__parser__STATE_VARIABLE_PS_95_95 = mercury__parser__STATE_VARIABLE_PS_0_53;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String mercury__parser__String_35 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
              MR_Word mercury__parser__Var_85;
              MR_Word mercury__parser__Var_86;
              MR_Word mercury__parser__TermContext_115;
              MR_Word mercury__parser__BaseTerm_116;

              {
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_53, mercury__parser__Context_10, &mercury__parser__TermContext_115);
              }
              {
                mercury__parser__Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mercury__parser__Var_85, 0) = ((MR_Box) (mercury__parser__String_35));
              }
              mercury__parser__Var_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__parser__BaseTerm_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_116, 0) = ((MR_Box) (mercury__parser__Var_85));
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_116, 1) = ((MR_Box) (mercury__parser__Var_86));
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_116, 2) = ((MR_Box) (mercury__parser__TermContext_115));
              }
              {
                mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_116));
              }
              mercury__parser__STATE_VARIABLE_TokensLeft_94_94 = mercury__parser__STATE_VARIABLE_TokensLeft_0_51;
              mercury__parser__STATE_VARIABLE_PS_95_95 = mercury__parser__STATE_VARIABLE_PS_0_53;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String mercury__parser__Name_36 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__Token_9, (MR_Integer) 1)));
              MR_Word mercury__parser__Var_83;
              MR_Word mercury__parser__Var_84;
              MR_Word mercury__parser__TermContext_117;
              MR_Word mercury__parser__BaseTerm_118;

              {
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_53, mercury__parser__Context_10, &mercury__parser__TermContext_117);
              }
              {
                mercury__parser__Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), mercury__parser__Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), mercury__parser__Var_83, 1) = ((MR_Box) (mercury__parser__Name_36));
              }
              mercury__parser__Var_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__parser__BaseTerm_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_118, 0) = ((MR_Box) (mercury__parser__Var_83));
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_118, 1) = ((MR_Box) (mercury__parser__Var_84));
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTerm_118, 2) = ((MR_Box) (mercury__parser__TermContext_117));
              }
              {
                mercury__parser__BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, 0) = ((MR_Box) (mercury__parser__BaseTerm_118));
              }
              mercury__parser__STATE_VARIABLE_TokensLeft_94_94 = mercury__parser__STATE_VARIABLE_TokensLeft_0_51;
              mercury__parser__STATE_VARIABLE_PS_95_95 = mercury__parser__STATE_VARIABLE_PS_0_53;
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              MR_Word mercury__parser__conv0_BaseTermParse_21;

              {
                mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(mercury__parser__TypeClassInfo_for_op_table_151, mercury__parser__Token_9, mercury__parser__Context_10, (MR_String) "unexpected token at start of (sub)term", &mercury__parser__conv0_BaseTermParse_21, mercury__parser__STATE_VARIABLE_TokensLeft_0_51, &mercury__parser__STATE_VARIABLE_TokensLeft_94_94, mercury__parser__STATE_VARIABLE_PS_0_53);
              }
              mercury__parser__BaseTermParse_21 = (MR_Word) mercury__parser__conv0_BaseTermParse_21;
              mercury__parser__STATE_VARIABLE_PS_95_95 = mercury__parser__STATE_VARIABLE_PS_0_53;
            }
            break;
        }
        break;
    }
    mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__BaseTermParse_21)) == (MR_mktag((MR_Integer) 0)));
    if (mercury__parser__succeeded)
      {
        mercury__parser__BaseTermOpen_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__BaseTermParse_21, (MR_Integer) 0)));
        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_94_94)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__parser__succeeded)
          {
            mercury__parser__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_94_94, (MR_Integer) 0)));
            mercury__parser___OpenContext_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_94_94, (MR_Integer) 1)));
            mercury__parser__STATE_VARIABLE_TokensLeft_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_94_94, (MR_Integer) 2)));
            mercury__parser__succeeded = (mercury__parser__Var_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          }
      }
    if (mercury__parser__succeeded)
      {
        mercury__parser__parse_higher_order_term_rest_7_p_0(mercury__parser__TypeInfo_for_T_152, mercury__parser__TypeClassInfo_for_op_table_151, mercury__parser__BaseTermOpen_49, mercury__parser__Context_10, mercury__parser__TermParse_12, mercury__parser__STATE_VARIABLE_TokensLeft_102_102, mercury__parser__STATE_VARIABLE_TokensLeft_52, mercury__parser__STATE_VARIABLE_PS_95_95, mercury__parser__STATE_VARIABLE_PS_54);
      }
    else
      {
        *mercury__parser__TermParse_12 = mercury__parser__BaseTermParse_21;
        *mercury__parser__STATE_VARIABLE_PS_54 = mercury__parser__STATE_VARIABLE_PS_95_95;
        *mercury__parser__STATE_VARIABLE_TokensLeft_52 = mercury__parser__STATE_VARIABLE_TokensLeft_94_94;
      }
  }
}

static MR_bool MR_CALL 
mercury__parser__parse_backquoted_operator_7_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_31,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_30,
  MR_Word * mercury__parser__MaybeQualifier_8,
  MR_String * mercury__parser__OpName_9,
  MR_Word * mercury__parser__VariableTerms_10,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_20,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_21,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_22)
{
  {
    MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_19)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__parser__Token_13;
    MR_Integer mercury__parser__Context_14;
    MR_Word mercury__parser__TermContext_15;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
    MR_String mercury__parser__FileName_38;
    MR_Box mercury__parser__Var_41;
    MR_Word mercury__parser__Var_42;
    MR_Word mercury__parser__Var_43;

    if (mercury__parser__succeeded)
      {
        mercury__parser__Token_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 0)));
        mercury__parser__Context_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 1)));
        mercury__parser__STATE_VARIABLE_TokensLeft_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 2)));
        mercury__parser__FileName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 0)));
        mercury__parser__Var_41 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 1));
        mercury__parser__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 2)));
        mercury__parser__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_21, (MR_Integer) 3)));
        {
          mercury__parser__TermContext_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_15, 0) = ((MR_Box) (mercury__parser__FileName_38));
          MR_hl_field(MR_mktag(0), mercury__parser__TermContext_15, 1) = ((MR_Box) (mercury__parser__Context_14));
        }
        if (((MR_tag((MR_Word) mercury__parser__Token_13)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String mercury__parser__OpName0_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_13, (MR_Integer) 0)));
            MR_Word mercury__parser__Var_24;

            *mercury__parser__VariableTerms_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__parser__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(mercury__parser__TypeClassInfo_for_op_table_30, mercury__parser__Var_24, mercury__parser__MaybeQualifier_8, mercury__parser__TermContext_15, mercury__parser__OpName0_18, mercury__parser__OpName_9, mercury__parser__STATE_VARIABLE_TokensLeft_23_23, mercury__parser__STATE_VARIABLE_TokensLeft_20, mercury__parser__STATE_VARIABLE_PS_0_21, mercury__parser__STATE_VARIABLE_PS_22);
            }
            mercury__parser__succeeded = MR_TRUE;
          }
        else
        if (((MR_tag((MR_Word) mercury__parser__Token_13)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_String mercury__parser__VariableOp_16 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__parser__Token_13, (MR_Integer) 0)));
            MR_Word mercury__parser__Var_17;
            MR_Word mercury__parser__Var_28;
            MR_Word mercury__parser__Var_29;

            *mercury__parser__MaybeQualifier_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__parser__OpName_9 = (MR_String) "";
            {
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(mercury__parser__TypeInfo_for_T_31, mercury__parser__VariableOp_16, &mercury__parser__Var_17, mercury__parser__STATE_VARIABLE_PS_0_21, mercury__parser__STATE_VARIABLE_PS_22);
            }
            {
              mercury__parser__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__parser__Var_28, 0) = ((MR_Box) (mercury__parser__Var_17));
              MR_hl_field(MR_mktag(1), mercury__parser__Var_28, 1) = ((MR_Box) (mercury__parser__TermContext_15));
            }
            mercury__parser__Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__parser__VariableTerms_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Var_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__Var_29));
            }
            *mercury__parser__STATE_VARIABLE_TokensLeft_20 = mercury__parser__STATE_VARIABLE_TokensLeft_23_23;
            mercury__parser__succeeded = MR_TRUE;
          }
        else
          mercury__parser__succeeded = MR_FALSE;
      }
    return mercury__parser__succeeded;
  }
}

static void MR_CALL 
mercury__parser__parse_rest_9_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_84,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_83,
  MR_Integer mercury__parser__MaxPriority_10,
  MR_Word mercury__parser__TermKind_11,
  MR_Integer mercury__parser__LeftPriority_12,
  MR_Word mercury__parser__LeftTerm_13,
  MR_Word * mercury__parser__Term_14,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_41,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_42,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_43,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_44)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_41)) == (MR_mktag((MR_Integer) 1)));
        MR_Integer mercury__parser__Context_18;
        MR_Integer mercury__parser__OpPriority_24;
        MR_Word mercury__parser__RightAssoc_26;
        MR_Word mercury__parser__MaybeQualifier_27;
        MR_String mercury__parser__Op_28;
        MR_Word mercury__parser__VariableTerms_29;
        MR_Word mercury__parser__STATE_VARIABLE_PS_47_47;
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_48_48;
        MR_Word mercury__parser__Token_17;
        MR_String mercury__parser__Op0_19;
        MR_Word mercury__parser__LeftAssoc_25;
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_45_45;
        MR_Integer mercury__parser__OpPriority0_21;
        MR_Word mercury__parser__LeftAssoc0_22;
        MR_Word mercury__parser__RightAssoc0_23;
        MR_Box mercury__parser__OpTable_20;
        MR_String mercury__parser__Var_99;
        MR_Word mercury__parser__Var_100;
        MR_Word mercury__parser__Var_101;

        if (mercury__parser__succeeded)
          {
            mercury__parser__Token_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 0)));
            mercury__parser__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 1)));
            mercury__parser__STATE_VARIABLE_TokensLeft_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 2)));
            switch (MR_tag((MR_Word) mercury__parser__Token_17)) {
              default:
                mercury__parser__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__parser__Token_17)) {
                  default:
                    mercury__parser__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 7:
                    {
                      mercury__parser__succeeded = (mercury__parser__TermKind_11 == (MR_Integer) 2);
                      mercury__parser__succeeded = !(mercury__parser__succeeded);
                      if (mercury__parser__succeeded)
                        {
                          mercury__parser__Op0_19 = (MR_String) "|";
                          mercury__parser__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      mercury__parser__succeeded = (mercury__parser__TermKind_11 == (MR_Integer) 0);
                      if (mercury__parser__succeeded)
                        {
                          mercury__parser__Op0_19 = (MR_String) ",";
                          mercury__parser__succeeded = MR_TRUE;
                        }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__parser__Op0_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_17, (MR_Integer) 0)));
                  mercury__parser__succeeded = MR_TRUE;
                }
                break;
            }
            if (mercury__parser__succeeded)
              {
                mercury__parser__succeeded = (strcmp(mercury__parser__Op0_19, (MR_String) "\140") == 0);
                if (mercury__parser__succeeded)
                  {
                    mercury__parser__Var_99 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 0)));
                    mercury__parser__OpTable_20 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
                    mercury__parser__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 2)));
                    mercury__parser__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 3)));
                    {
                      mercury__parser__succeeded = mercury__ops__lookup_operator_term_4_p_0(mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__OpTable_20, &mercury__parser__OpPriority0_21, &mercury__parser__LeftAssoc0_22, &mercury__parser__RightAssoc0_23);
                    }
                  }
                if (mercury__parser__succeeded)
                  {
                    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_46_46;
                    MR_Word mercury__parser__Var_49;
                    MR_String mercury__parser__Var_50;
                    MR_Integer mercury__parser___Context_30;

                    mercury__parser__OpPriority_24 = mercury__parser__OpPriority0_21;
                    mercury__parser__LeftAssoc_25 = mercury__parser__LeftAssoc0_22;
                    mercury__parser__RightAssoc_26 = mercury__parser__RightAssoc0_23;
                    {
                      mercury__parser__succeeded = mercury__parser__parse_backquoted_operator_7_p_0(mercury__parser__TypeInfo_for_T_84, mercury__parser__TypeClassInfo_for_op_table_83, &mercury__parser__MaybeQualifier_27, &mercury__parser__Op_28, &mercury__parser__VariableTerms_29, mercury__parser__STATE_VARIABLE_TokensLeft_45_45, &mercury__parser__STATE_VARIABLE_TokensLeft_46_46, mercury__parser__STATE_VARIABLE_PS_0_43, &mercury__parser__STATE_VARIABLE_PS_47_47);
                    }
                    if (mercury__parser__succeeded)
                      {
                        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_46_46)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__parser__succeeded)
                          {
                            mercury__parser__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_46_46, (MR_Integer) 0)));
                            mercury__parser___Context_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_46_46, (MR_Integer) 1)));
                            mercury__parser__STATE_VARIABLE_TokensLeft_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_46_46, (MR_Integer) 2)));
                            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Var_49)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__parser__succeeded)
                              {
                                mercury__parser__Var_50 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Var_49, (MR_Integer) 0)));
                                mercury__parser__succeeded = (strcmp(mercury__parser__Var_50, (MR_String) "\140") == 0);
                              }
                          }
                      }
                  }
                else
                  {
                    MR_Box mercury__parser__OpTable_71;
                    MR_String mercury__parser__Var_104;
                    MR_Word mercury__parser__Var_105;
                    MR_Word mercury__parser__Var_106;

                    mercury__parser__Op_28 = mercury__parser__Op0_19;
                    mercury__parser__VariableTerms_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__parser__MaybeQualifier_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__parser__Var_104 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 0)));
                    mercury__parser__OpTable_71 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
                    mercury__parser__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 2)));
                    mercury__parser__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 3)));
                    {
                      mercury__parser__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__OpTable_71, mercury__parser__Op_28, &mercury__parser__OpPriority_24, &mercury__parser__LeftAssoc_25, &mercury__parser__RightAssoc_26);
                    }
                    if (mercury__parser__succeeded)
                      {
                        mercury__parser__STATE_VARIABLE_PS_47_47 = mercury__parser__STATE_VARIABLE_PS_0_43;
                        mercury__parser__STATE_VARIABLE_TokensLeft_48_48 = mercury__parser__STATE_VARIABLE_TokensLeft_45_45;
                        mercury__parser__succeeded = MR_TRUE;
                      }
                  }
                if (mercury__parser__succeeded)
                  {
                    mercury__parser__succeeded = (mercury__parser__OpPriority_24 <= mercury__parser__MaxPriority_10);
                    if (mercury__parser__succeeded)
                      {
                        mercury__parser__succeeded = mercury__parser__check_priority_3_p_0(mercury__parser__LeftAssoc_25, mercury__parser__OpPriority_24, mercury__parser__LeftPriority_12);
                      }
                  }
              }
          }
        if (mercury__parser__succeeded)
          {
            MR_Integer mercury__parser__RightPriority_31;
            MR_Word mercury__parser__RightTerm0_32;
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_51_51;
            MR_Word mercury__parser__STATE_VARIABLE_PS_52_52;

            switch (mercury__parser__RightAssoc_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__parser__RightPriority_31 = (mercury__parser__OpPriority_24 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                mercury__parser__RightPriority_31 = mercury__parser__OpPriority_24;
                break;
            }
            {
              mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_84, mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__RightPriority_31, mercury__parser__TermKind_11, &mercury__parser__RightTerm0_32, mercury__parser__STATE_VARIABLE_TokensLeft_48_48, &mercury__parser__STATE_VARIABLE_TokensLeft_51_51, mercury__parser__STATE_VARIABLE_PS_47_47, &mercury__parser__STATE_VARIABLE_PS_52_52);
            }
            if (((MR_tag((MR_Word) mercury__parser__RightTerm0_32)) == (MR_mktag((MR_Integer) 1))))
              {
                *mercury__parser__Term_14 = mercury__parser__RightTerm0_32;
                *mercury__parser__STATE_VARIABLE_TokensLeft_42 = mercury__parser__STATE_VARIABLE_TokensLeft_51_51;
                *mercury__parser__STATE_VARIABLE_PS_44 = mercury__parser__STATE_VARIABLE_PS_52_52;
              }
            else
              {
                MR_Word mercury__parser__TypeCtorInfo_91_91;
                MR_Word mercury__parser__TypeInfo_92_92;
                MR_Word mercury__parser__RightTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightTerm0_32, (MR_Integer) 0)));
                MR_Word mercury__parser__TermContext_34;
                MR_Word mercury__parser__OpTermArgs0_35;
                MR_Word mercury__parser__OpTerm0_36;
                MR_Word mercury__parser__OpTerm_37;
                MR_Word mercury__parser__Var_53;
                MR_Word mercury__parser__Var_54;
                MR_Word mercury__parser__Var_55;
                MR_Word mercury__parser__Var_56;
                MR_Word mercury__parser__conv0_OpTermArgs0_35;

                {
                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_52_52, mercury__parser__Context_18, &mercury__parser__TermContext_34);
                }
                mercury__parser__TypeCtorInfo_91_91 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                {
                  mercury__parser__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_92_92, 0) = ((MR_Box) (mercury__parser__TypeCtorInfo_91_91));
                  MR_hl_field(MR_mktag(0), mercury__parser__TypeInfo_92_92, 1) = ((MR_Box) (mercury__parser__TypeInfo_for_T_84));
                }
                mercury__parser__Var_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__parser__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_54, 0) = ((MR_Box) (mercury__parser__RightTerm_33));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_54, 1) = ((MR_Box) (mercury__parser__Var_55));
                }
                {
                  mercury__parser__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_53, 0) = ((MR_Box) (mercury__parser__LeftTerm_13));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_53, 1) = ((MR_Box) (mercury__parser__Var_54));
                }
                {
                  mercury__parser__conv0_OpTermArgs0_35 = mercury__list__f_43_43_2_f_0(mercury__parser__TypeInfo_92_92, (MR_Word) mercury__parser__VariableTerms_29, (MR_Word) mercury__parser__Var_53);
                }
                mercury__parser__OpTermArgs0_35 = (MR_Word) mercury__parser__conv0_OpTermArgs0_35;
                {
                  mercury__parser__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__parser__Var_56, 0) = ((MR_Box) (mercury__parser__Op_28));
                }
                {
                  mercury__parser__OpTerm0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_36, 0) = ((MR_Box) (mercury__parser__Var_56));
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_36, 1) = ((MR_Box) (mercury__parser__OpTermArgs0_35));
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm0_36, 2) = ((MR_Box) (mercury__parser__TermContext_34));
                }
                if ((mercury__parser__MaybeQualifier_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__parser__OpTerm_37 = mercury__parser__OpTerm0_36;
                else
                  {
                    MR_Word mercury__parser__QTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__MaybeQualifier_27, (MR_Integer) 0)));
                    MR_Word mercury__parser__Var_57 = (MR_Word) &mercury__parser_scalar_common_7[0];
                    MR_Word mercury__parser__Var_59;
                    MR_Word mercury__parser__Var_60;
                    MR_Word mercury__parser__Var_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                    {
                      mercury__parser__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_60, 0) = ((MR_Box) (mercury__parser__OpTerm0_36));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_60, 1) = ((MR_Box) (mercury__parser__Var_61));
                    }
                    {
                      mercury__parser__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_59, 0) = ((MR_Box) (mercury__parser__QTerm_38));
                      MR_hl_field(MR_mktag(1), mercury__parser__Var_59, 1) = ((MR_Box) (mercury__parser__Var_60));
                    }
                    {
                      mercury__parser__OpTerm_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_37, 0) = ((MR_Box) (mercury__parser__Var_57));
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_37, 1) = ((MR_Box) (mercury__parser__Var_59));
                      MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_37, 2) = ((MR_Box) (mercury__parser__TermContext_34));
                    }
                  }
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__parser__next_value_of_LeftPriority_12 = mercury__parser__OpPriority_24;
                  MR_Word mercury__parser__next_value_of_LeftTerm_13 = mercury__parser__OpTerm_37;
                  MR_Word mercury__parser__next_value_of_STATE_VARIABLE_TokensLeft_0_41 = mercury__parser__STATE_VARIABLE_TokensLeft_51_51;
                  MR_Word mercury__parser__next_value_of_STATE_VARIABLE_PS_0_43 = mercury__parser__STATE_VARIABLE_PS_52_52;

                  mercury__parser__STATE_VARIABLE_PS_0_43 = mercury__parser__next_value_of_STATE_VARIABLE_PS_0_43;
                  mercury__parser__STATE_VARIABLE_TokensLeft_0_41 = mercury__parser__next_value_of_STATE_VARIABLE_TokensLeft_0_41;
                  mercury__parser__LeftTerm_13 = mercury__parser__next_value_of_LeftTerm_13;
                  mercury__parser__LeftPriority_12 = mercury__parser__next_value_of_LeftPriority_12;
                }
                continue;
              }
          }
        else
          {
            MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_64_64;
            MR_Integer mercury__parser__Context_76;
            MR_Integer mercury__parser__OpPriority_78;
            MR_String mercury__parser__Op_80;
            MR_Word mercury__parser__Var_65;
            MR_Box mercury__parser__OpTable_72;
            MR_Word mercury__parser__LeftAssoc_73;
            MR_String mercury__parser__Var_113;
            MR_Word mercury__parser__Var_114;
            MR_Word mercury__parser__Var_115;

            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_0_41)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__parser__succeeded)
              {
                mercury__parser__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 0)));
                mercury__parser__Context_76 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 1)));
                mercury__parser__STATE_VARIABLE_TokensLeft_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 2)));
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Var_65)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__parser__succeeded)
                  {
                    mercury__parser__Op_80 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Var_65, (MR_Integer) 0)));
                    mercury__parser__Var_113 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 0)));
                    mercury__parser__OpTable_72 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
                    mercury__parser__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 2)));
                    mercury__parser__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_43, (MR_Integer) 3)));
                    {
                      mercury__parser__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__parser__TypeClassInfo_for_op_table_83, mercury__parser__OpTable_72, mercury__parser__Op_80, &mercury__parser__OpPriority_78, &mercury__parser__LeftAssoc_73);
                    }
                    if (mercury__parser__succeeded)
                      {
                        mercury__parser__succeeded = (mercury__parser__OpPriority_78 <= mercury__parser__MaxPriority_10);
                        if (mercury__parser__succeeded)
                          {
                            mercury__parser__succeeded = mercury__parser__check_priority_3_p_0(mercury__parser__LeftAssoc_73, mercury__parser__OpPriority_78, mercury__parser__LeftPriority_12);
                          }
                      }
                  }
              }
            if (mercury__parser__succeeded)
              {
                MR_Word mercury__parser__Var_66;
                MR_Word mercury__parser__Var_67;
                MR_Word mercury__parser__Var_68;
                MR_Word mercury__parser__TermContext_74;
                MR_Word mercury__parser__OpTerm_75;

                {
                  mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_43, mercury__parser__Context_76, &mercury__parser__TermContext_74);
                }
                {
                  mercury__parser__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__parser__Var_66, 0) = ((MR_Box) (mercury__parser__Op_80));
                }
                mercury__parser__Var_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__parser__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_67, 0) = ((MR_Box) (mercury__parser__LeftTerm_13));
                  MR_hl_field(MR_mktag(1), mercury__parser__Var_67, 1) = ((MR_Box) (mercury__parser__Var_68));
                }
                {
                  mercury__parser__OpTerm_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_75, 0) = ((MR_Box) (mercury__parser__Var_66));
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_75, 1) = ((MR_Box) (mercury__parser__Var_67));
                  MR_hl_field(MR_mktag(0), mercury__parser__OpTerm_75, 2) = ((MR_Box) (mercury__parser__TermContext_74));
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__parser__next_value_of_LeftPriority_12 = mercury__parser__OpPriority_78;
                  MR_Word mercury__parser__next_value_of_LeftTerm_13 = mercury__parser__OpTerm_75;
                  MR_Word mercury__parser__next_value_of_STATE_VARIABLE_TokensLeft_0_41 = mercury__parser__STATE_VARIABLE_TokensLeft_64_64;

                  mercury__parser__STATE_VARIABLE_TokensLeft_0_41 = mercury__parser__next_value_of_STATE_VARIABLE_TokensLeft_0_41;
                  mercury__parser__LeftTerm_13 = mercury__parser__next_value_of_LeftTerm_13;
                  mercury__parser__LeftPriority_12 = mercury__parser__next_value_of_LeftPriority_12;
                }
                continue;
              }
            else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__parser__Term_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__LeftTerm_13));
                }
                *mercury__parser__STATE_VARIABLE_PS_44 = mercury__parser__STATE_VARIABLE_PS_0_43;
                *mercury__parser__STATE_VARIABLE_TokensLeft_42 = mercury__parser__STATE_VARIABLE_TokensLeft_0_41;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__parser__parse_left_term_8_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_113,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_112,
  MR_Integer mercury__parser__MaxPriority_9,
  MR_Word mercury__parser__TermKind_10,
  MR_Integer * mercury__parser__OpPriority_11,
  MR_Word * mercury__parser__Term_12,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_53,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_54,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_55,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_56)
{
  {
    MR_bool mercury__parser__succeeded;

    if ((mercury__parser__STATE_VARIABLE_TokensLeft_0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parser__Term_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file at start of sub-term"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__STATE_VARIABLE_TokensLeft_0_53));
        }
        *mercury__parser__OpPriority_11 = (MR_Integer) 0;
        *mercury__parser__STATE_VARIABLE_TokensLeft_54 = mercury__parser__STATE_VARIABLE_TokensLeft_0_53;
        *mercury__parser__STATE_VARIABLE_PS_56 = mercury__parser__STATE_VARIABLE_PS_0_55;
      }
    else
      {
        MR_Word mercury__parser__Token_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_53, (MR_Integer) 0)));
        MR_Integer mercury__parser__Context_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_53, (MR_Integer) 1)));
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_0_53, (MR_Integer) 2)));
        MR_Word mercury__parser__NewFunctor_26;
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_59_59;
        MR_String mercury__parser__TokenName_17;
        MR_Word mercury__parser__NextToken_18;
        MR_Integer mercury__parser___NextContext_19;

        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_15)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__parser__succeeded)
          {
            mercury__parser__TokenName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_15, (MR_Integer) 0)));
            mercury__parser__succeeded = (strcmp(mercury__parser__TokenName_17, (MR_String) "-") == 0);
            if (mercury__parser__succeeded)
              {
                mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__parser__succeeded)
                  {
                    mercury__parser__NextToken_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
                    mercury__parser___NextContext_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
                    mercury__parser__STATE_VARIABLE_TokensLeft_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
                    if (((((MR_tag((MR_Word) mercury__parser__NextToken_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
                      {
                        MR_Float mercury__parser__F_27 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 1)));
                        MR_Float mercury__parser__NegF_28 = (((MR_Float) 0.0000000000000000) - mercury__parser__F_27);

                        {
                          mercury__parser__NewFunctor_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), mercury__parser__NewFunctor_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), mercury__parser__NewFunctor_26, 1) = MR_box_float(mercury__parser__NegF_28);
                        }
                        mercury__parser__succeeded = MR_TRUE;
                      }
                    else
                    if (((((MR_tag((MR_Word) mercury__parser__NextToken_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
                      {
                        MR_Word mercury__parser__LexerBase_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 1)));
                        MR_Word mercury__parser__X_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 2)));
                        MR_Word mercury__parser__LexerSize_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 4)));
                        MR_Word mercury__parser__NegX_23;
                        MR_Word mercury__parser__Base_24;
                        MR_Word mercury__parser__Size_25;
                        MR_Word mercury__parser__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__NextToken_18, (MR_Integer) 3)));
                        MR_Word mercury__parser__Var_62;

                        mercury__parser__succeeded = (mercury__parser__Var_61 == (MR_Integer) 0);
                        if (mercury__parser__succeeded)
                          {
                            {
                              mercury__parser__NegX_23 = mercury__integer__f_minus_1_f_0(mercury__parser__X_21);
                            }
                            {
                              mercury__parser__Base_24 = mercury__parser__lexer_base_to_term_base_1_f_0(mercury__parser__LexerBase_20);
                            }
                            {
                              mercury__parser__Size_25 = mercury__parser__lexer_size_to_term_size_1_f_0(mercury__parser__LexerSize_22);
                            }
                            mercury__parser__Var_62 = (MR_Integer) 0;
                            {
                              mercury__parser__NewFunctor_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__parser__NewFunctor_26, 0) = ((MR_Box) (mercury__parser__Base_24));
                              MR_hl_field(MR_mktag(1), mercury__parser__NewFunctor_26, 1) = ((MR_Box) (mercury__parser__NegX_23));
                              MR_hl_field(MR_mktag(1), mercury__parser__NewFunctor_26, 2) = ((MR_Box) (mercury__parser__Var_62));
                              MR_hl_field(MR_mktag(1), mercury__parser__NewFunctor_26, 3) = ((MR_Box) (mercury__parser__Size_25));
                            }
                            mercury__parser__succeeded = MR_TRUE;
                          }
                      }
                    else
                      mercury__parser__succeeded = MR_FALSE;
                  }
              }
          }
        if (mercury__parser__succeeded)
          {
            MR_Word mercury__parser__TermContext_29;
            MR_Word mercury__parser__Var_63;
            MR_Word mercury__parser__Var_64;

            *mercury__parser__STATE_VARIABLE_TokensLeft_54 = mercury__parser__STATE_VARIABLE_TokensLeft_59_59;
            {
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__parser__STATE_VARIABLE_PS_0_55, mercury__parser__Context_16, &mercury__parser__TermContext_29);
            }
            mercury__parser__Var_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__parser__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__parser__Var_63, 0) = ((MR_Box) (mercury__parser__NewFunctor_26));
              MR_hl_field(MR_mktag(0), mercury__parser__Var_63, 1) = ((MR_Box) (mercury__parser__Var_64));
              MR_hl_field(MR_mktag(0), mercury__parser__Var_63, 2) = ((MR_Box) (mercury__parser__TermContext_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__parser__Term_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_63));
            }
            *mercury__parser__OpPriority_11 = (MR_Integer) 0;
            *mercury__parser__STATE_VARIABLE_PS_56 = mercury__parser__STATE_VARIABLE_PS_0_55;
          }
        else
          {
            MR_Word mercury__parser__OpInfo_31;
            MR_Word mercury__parser__OtherOpInfos_32;
            MR_String mercury__parser__TokenName_109;
            MR_Box mercury__parser__OpTable_30;
            MR_String mercury__parser__Var_126;
            MR_Word mercury__parser__Var_127;
            MR_Word mercury__parser__Var_128;

            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__Token_15)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__parser__succeeded)
              {
                mercury__parser__TokenName_109 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Token_15, (MR_Integer) 0)));
                mercury__parser__Var_126 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 0)));
                mercury__parser__OpTable_30 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 1));
                mercury__parser__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 2)));
                mercury__parser__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_55, (MR_Integer) 3)));
                {
                  mercury__parser__succeeded = mercury__ops__lookup_op_infos_4_p_0(mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__OpTable_30, mercury__parser__TokenName_109, &mercury__parser__OpInfo_31, &mercury__parser__OtherOpInfos_32);
                }
              }
            if (mercury__parser__succeeded)
              {
                MR_Integer mercury__parser__BinOpPriority_33;
                MR_Word mercury__parser__RightAssoc_34;
                MR_Word mercury__parser__RightRightAssoc_35;
                MR_Word mercury__parser__Var_65;
                MR_Word mercury__parser__NextToken_86;
                MR_Word mercury__parser__Var_122;
                MR_Integer mercury__parser__Var_36;
                MR_Word mercury__parser__Var_37;

                {
                  mercury__parser__succeeded = mercury__parser__find_first_binary_prefix_op_5_p_0(mercury__parser__OpInfo_31, mercury__parser__OtherOpInfos_32, &mercury__parser__BinOpPriority_33, &mercury__parser__RightAssoc_34, &mercury__parser__RightRightAssoc_35);
                }
                if (mercury__parser__succeeded)
                  {
                    mercury__parser__succeeded = (mercury__parser__BinOpPriority_33 <= mercury__parser__MaxPriority_9);
                    if (mercury__parser__succeeded)
                      {
                        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__parser__succeeded)
                          {
                            mercury__parser__NextToken_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
                            mercury__parser__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
                            mercury__parser__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
                            mercury__parser__Var_65 = (MR_Integer) 1;
                            {
                              mercury__parser__could_start_term_2_p_0(mercury__parser__NextToken_86, &mercury__parser__Var_122);
                            }
                            mercury__parser__succeeded = (mercury__parser__Var_65 == mercury__parser__Var_122);
                            if (mercury__parser__succeeded)
                              {
                                mercury__parser__succeeded = (mercury__parser__NextToken_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                mercury__parser__succeeded = !(mercury__parser__succeeded);
                              }
                          }
                      }
                  }
                if (mercury__parser__succeeded)
                  {
                    MR_Integer mercury__parser__RightPriority_38;
                    MR_Integer mercury__parser__RightRightPriority_39;
                    MR_Word mercury__parser__RightResult_40;
                    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_66_66;
                    MR_Word mercury__parser__STATE_VARIABLE_PS_67_67;

                    *mercury__parser__OpPriority_11 = mercury__parser__BinOpPriority_33;
                    switch (mercury__parser__RightAssoc_34) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mercury__parser__RightPriority_38 = (*mercury__parser__OpPriority_11 - (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 1:
                        mercury__parser__RightPriority_38 = *mercury__parser__OpPriority_11;
                        break;
                    }
                    switch (mercury__parser__RightRightAssoc_35) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mercury__parser__RightRightPriority_39 = (*mercury__parser__OpPriority_11 - (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 1:
                        mercury__parser__RightRightPriority_39 = *mercury__parser__OpPriority_11;
                        break;
                    }
                    {
                      mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_113, mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__RightPriority_38, mercury__parser__TermKind_10, &mercury__parser__RightResult_40, mercury__parser__STATE_VARIABLE_TokensLeft_58_58, &mercury__parser__STATE_VARIABLE_TokensLeft_66_66, mercury__parser__STATE_VARIABLE_PS_0_55, &mercury__parser__STATE_VARIABLE_PS_67_67);
                    }
                    if (((MR_tag((MR_Word) mercury__parser__RightResult_40)) == (MR_mktag((MR_Integer) 1))))
                      {
                        *mercury__parser__Term_12 = mercury__parser__RightResult_40;
                        *mercury__parser__STATE_VARIABLE_TokensLeft_54 = mercury__parser__STATE_VARIABLE_TokensLeft_66_66;
                        *mercury__parser__STATE_VARIABLE_PS_56 = mercury__parser__STATE_VARIABLE_PS_67_67;
                      }
                    else
                      {
                        MR_Word mercury__parser__RightTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightResult_40, (MR_Integer) 0)));
                        MR_Word mercury__parser__RightRightResult_42;

                        {
                          mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_113, mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__RightRightPriority_39, mercury__parser__TermKind_10, &mercury__parser__RightRightResult_42, mercury__parser__STATE_VARIABLE_TokensLeft_66_66, mercury__parser__STATE_VARIABLE_TokensLeft_54, mercury__parser__STATE_VARIABLE_PS_67_67, mercury__parser__STATE_VARIABLE_PS_56);
                        }
                        if (((MR_tag((MR_Word) mercury__parser__RightRightResult_42)) == (MR_mktag((MR_Integer) 1))))
                          *mercury__parser__Term_12 = mercury__parser__RightRightResult_42;
                        else
                          {
                            MR_Word mercury__parser__RightRightTerm_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightRightResult_42, (MR_Integer) 0)));
                            MR_Word mercury__parser__Var_70;
                            MR_Word mercury__parser__Var_71;
                            MR_Word mercury__parser__Var_72;
                            MR_Word mercury__parser__Var_73;
                            MR_Word mercury__parser__Var_74;
                            MR_Word mercury__parser__TermContext_87;

                            {
                              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*mercury__parser__STATE_VARIABLE_PS_56, mercury__parser__Context_16, &mercury__parser__TermContext_87);
                            }
                            {
                              mercury__parser__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__parser__Var_71, 0) = ((MR_Box) (mercury__parser__TokenName_109));
                            }
                            mercury__parser__Var_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            {
                              mercury__parser__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__parser__Var_73, 0) = ((MR_Box) (mercury__parser__RightRightTerm_43));
                              MR_hl_field(MR_mktag(1), mercury__parser__Var_73, 1) = ((MR_Box) (mercury__parser__Var_74));
                            }
                            {
                              mercury__parser__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__parser__Var_72, 0) = ((MR_Box) (mercury__parser__RightTerm_41));
                              MR_hl_field(MR_mktag(1), mercury__parser__Var_72, 1) = ((MR_Box) (mercury__parser__Var_73));
                            }
                            {
                              mercury__parser__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__parser__Var_70, 0) = ((MR_Box) (mercury__parser__Var_71));
                              MR_hl_field(MR_mktag(0), mercury__parser__Var_70, 1) = ((MR_Box) (mercury__parser__Var_72));
                              MR_hl_field(MR_mktag(0), mercury__parser__Var_70, 2) = ((MR_Box) (mercury__parser__TermContext_87));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              *mercury__parser__Term_12 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_70));
                            }
                          }
                      }
                  }
                else
                  {
                    MR_Integer mercury__parser__UnOpPriority_48;
                    MR_Word mercury__parser__RightAssoc_103;
                    MR_Word mercury__parser__Var_75;
                    MR_Word mercury__parser__NextToken_92;
                    MR_Word mercury__parser__Var_123;
                    MR_Integer mercury__parser__Var_49;
                    MR_Word mercury__parser__Var_50;

                    {
                      mercury__parser__succeeded = mercury__parser__find_first_prefix_op_4_p_0(mercury__parser__OpInfo_31, mercury__parser__OtherOpInfos_32, &mercury__parser__UnOpPriority_48, &mercury__parser__RightAssoc_103);
                    }
                    if (mercury__parser__succeeded)
                      {
                        mercury__parser__succeeded = (mercury__parser__UnOpPriority_48 <= mercury__parser__MaxPriority_9);
                        if (mercury__parser__succeeded)
                          {
                            mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_58_58)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__parser__succeeded)
                              {
                                mercury__parser__NextToken_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 0)));
                                mercury__parser__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 1)));
                                mercury__parser__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_58_58, (MR_Integer) 2)));
                                mercury__parser__Var_75 = (MR_Integer) 1;
                                {
                                  mercury__parser__could_start_term_2_p_0(mercury__parser__NextToken_92, &mercury__parser__Var_123);
                                }
                                mercury__parser__succeeded = (mercury__parser__Var_75 == mercury__parser__Var_123);
                                if (mercury__parser__succeeded)
                                  {
                                    mercury__parser__succeeded = (mercury__parser__NextToken_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                    mercury__parser__succeeded = !(mercury__parser__succeeded);
                                  }
                              }
                          }
                      }
                    if (mercury__parser__succeeded)
                      {
                        MR_Integer mercury__parser__RightPriority_98;
                        MR_Word mercury__parser__RightResult_99;

                        *mercury__parser__OpPriority_11 = mercury__parser__UnOpPriority_48;
                        switch (mercury__parser__RightAssoc_103) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              mercury__parser__RightPriority_98 = (*mercury__parser__OpPriority_11 - (MR_Integer) 1);
                            }
                            break;
                          case (MR_Integer) 1:
                            mercury__parser__RightPriority_98 = *mercury__parser__OpPriority_11;
                            break;
                        }
                        {
                          mercury__parser__do_parse_term_7_p_0(mercury__parser__TypeInfo_for_T_113, mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__RightPriority_98, mercury__parser__TermKind_10, &mercury__parser__RightResult_99, mercury__parser__STATE_VARIABLE_TokensLeft_58_58, mercury__parser__STATE_VARIABLE_TokensLeft_54, mercury__parser__STATE_VARIABLE_PS_0_55, mercury__parser__STATE_VARIABLE_PS_56);
                        }
                        if (((MR_tag((MR_Word) mercury__parser__RightResult_99)) == (MR_mktag((MR_Integer) 1))))
                          *mercury__parser__Term_12 = mercury__parser__RightResult_99;
                        else
                          {
                            MR_Word mercury__parser__Var_78;
                            MR_Word mercury__parser__Var_79;
                            MR_Word mercury__parser__Var_80;
                            MR_Word mercury__parser__Var_81;
                            MR_Word mercury__parser__TermContext_93;
                            MR_Word mercury__parser__RightTerm_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__RightResult_99, (MR_Integer) 0)));

                            {
                              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*mercury__parser__STATE_VARIABLE_PS_56, mercury__parser__Context_16, &mercury__parser__TermContext_93);
                            }
                            {
                              mercury__parser__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__parser__Var_79, 0) = ((MR_Box) (mercury__parser__TokenName_109));
                            }
                            mercury__parser__Var_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            {
                              mercury__parser__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__parser__Var_80, 0) = ((MR_Box) (mercury__parser__RightTerm_94));
                              MR_hl_field(MR_mktag(1), mercury__parser__Var_80, 1) = ((MR_Box) (mercury__parser__Var_81));
                            }
                            {
                              mercury__parser__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__parser__Var_78, 0) = ((MR_Box) (mercury__parser__Var_79));
                              MR_hl_field(MR_mktag(0), mercury__parser__Var_78, 1) = ((MR_Box) (mercury__parser__Var_80));
                              MR_hl_field(MR_mktag(0), mercury__parser__Var_78, 2) = ((MR_Box) (mercury__parser__TermContext_93));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              *mercury__parser__Term_12 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parser__Var_78));
                            }
                          }
                      }
                    else
                      {
                        {
                          mercury__parser__parse_simple_term_8_p_0(mercury__parser__TypeInfo_for_T_113, mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__Token_15, mercury__parser__Context_16, mercury__parser__MaxPriority_9, mercury__parser__Term_12, mercury__parser__STATE_VARIABLE_TokensLeft_58_58, mercury__parser__STATE_VARIABLE_TokensLeft_54, mercury__parser__STATE_VARIABLE_PS_0_55, mercury__parser__STATE_VARIABLE_PS_56);
                        }
                        *mercury__parser__OpPriority_11 = (MR_Integer) 0;
                      }
                  }
              }
            else
              {
                {
                  mercury__parser__parse_simple_term_8_p_0(mercury__parser__TypeInfo_for_T_113, mercury__parser__TypeClassInfo_for_op_table_112, mercury__parser__Token_15, mercury__parser__Context_16, mercury__parser__MaxPriority_9, mercury__parser__Term_12, mercury__parser__STATE_VARIABLE_TokensLeft_58_58, mercury__parser__STATE_VARIABLE_TokensLeft_54, mercury__parser__STATE_VARIABLE_PS_0_55, mercury__parser__STATE_VARIABLE_PS_56);
                }
                *mercury__parser__OpPriority_11 = (MR_Integer) 0;
              }
          }
      }
  }
}

static void MR_CALL 
mercury__parser__do_parse_term_7_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_27,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_26,
  MR_Integer mercury__parser__MaxPriority_8,
  MR_Word mercury__parser__TermKind_9,
  MR_Word * mercury__parser__Term_10,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_19,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_20,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_21)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Integer mercury__parser__LeftPriority_13;
    MR_Word mercury__parser__LeftTerm0_14;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_22_22;
    MR_Word mercury__parser__STATE_VARIABLE_PS_23_23;

    {
      mercury__parser__parse_left_term_8_p_0(mercury__parser__TypeInfo_for_T_27, mercury__parser__TypeClassInfo_for_op_table_26, mercury__parser__MaxPriority_8, mercury__parser__TermKind_9, &mercury__parser__LeftPriority_13, &mercury__parser__LeftTerm0_14, mercury__parser__STATE_VARIABLE_TokensLeft_0_18, &mercury__parser__STATE_VARIABLE_TokensLeft_22_22, mercury__parser__STATE_VARIABLE_PS_0_20, &mercury__parser__STATE_VARIABLE_PS_23_23);
    }
    if (((MR_tag((MR_Word) mercury__parser__LeftTerm0_14)) == (MR_mktag((MR_Integer) 1))))
      {
        *mercury__parser__Term_10 = mercury__parser__LeftTerm0_14;
        *mercury__parser__STATE_VARIABLE_TokensLeft_19 = mercury__parser__STATE_VARIABLE_TokensLeft_22_22;
        *mercury__parser__STATE_VARIABLE_PS_21 = mercury__parser__STATE_VARIABLE_PS_23_23;
      }
    else
      {
        MR_Word mercury__parser__LeftTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__LeftTerm0_14, (MR_Integer) 0)));

        {
          mercury__parser__parse_rest_9_p_0(mercury__parser__TypeInfo_for_T_27, mercury__parser__TypeClassInfo_for_op_table_26, mercury__parser__MaxPriority_8, mercury__parser__TermKind_9, mercury__parser__LeftPriority_13, mercury__parser__LeftTerm_15, mercury__parser__Term_10, mercury__parser__STATE_VARIABLE_TokensLeft_22_22, mercury__parser__STATE_VARIABLE_TokensLeft_19, mercury__parser__STATE_VARIABLE_PS_23_23, mercury__parser__STATE_VARIABLE_PS_21);
        }
      }
  }
}

static void MR_CALL 
mercury__parser__parse_arg_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_21,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
  MR_Word * mercury__parser__Term_6,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_11,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_12,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_13,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_14)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Box mercury__parser__OpTable_9;
    MR_Integer mercury__parser__ArgPriority_10;
    MR_Integer mercury__parser__Var_15;
    MR_Integer mercury__parser__LeftPriority_38;
    MR_Word mercury__parser__LeftTerm0_39;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_22_43;
    MR_Word mercury__parser__STATE_VARIABLE_PS_23_44;
    MR_Word mercury__parser__TypeInfo_23_23;
    MR_String mercury__parser__Var_26;
    MR_Word mercury__parser__Var_27;
    MR_Word mercury__parser__Var_28;
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
    MR_Box mercury__parser__conv1_Var_15;

{
#define MR_PROC_LABEL mercury__parser__parse_arg_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_20 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_23_23  = TypeInfo;
}
    mercury__parser__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 0)));
    mercury__parser__OpTable_9 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 1));
    mercury__parser__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 2)));
    mercury__parser__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_13, (MR_Integer) 3)));
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_20, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__parser__conv1_Var_15 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_20), mercury__parser__OpTable_9);
    }
    mercury__parser__Var_15 = ((MR_Integer) mercury__parser__conv1_Var_15);
    mercury__parser__ArgPriority_10 = (mercury__parser__Var_15 + (MR_Integer) 1);
    {
      mercury__parser__parse_left_term_8_p_0(mercury__parser__TypeInfo_for_T_21, mercury__parser__TypeClassInfo_for_op_table_20, mercury__parser__ArgPriority_10, (MR_Integer) 1, &mercury__parser__LeftPriority_38, &mercury__parser__LeftTerm0_39, mercury__parser__STATE_VARIABLE_TokensLeft_0_11, &mercury__parser__STATE_VARIABLE_TokensLeft_22_43, mercury__parser__STATE_VARIABLE_PS_0_13, &mercury__parser__STATE_VARIABLE_PS_23_44);
    }
    if (((MR_tag((MR_Word) mercury__parser__LeftTerm0_39)) == (MR_mktag((MR_Integer) 1))))
      {
        *mercury__parser__Term_6 = mercury__parser__LeftTerm0_39;
        *mercury__parser__STATE_VARIABLE_TokensLeft_12 = mercury__parser__STATE_VARIABLE_TokensLeft_22_43;
        *mercury__parser__STATE_VARIABLE_PS_14 = mercury__parser__STATE_VARIABLE_PS_23_44;
      }
    else
      {
        MR_Word mercury__parser__LeftTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__LeftTerm0_39, (MR_Integer) 0)));

        {
          mercury__parser__parse_rest_9_p_0(mercury__parser__TypeInfo_for_T_21, mercury__parser__TypeClassInfo_for_op_table_20, mercury__parser__ArgPriority_10, (MR_Integer) 1, mercury__parser__LeftPriority_38, mercury__parser__LeftTerm_40, mercury__parser__Term_6, mercury__parser__STATE_VARIABLE_TokensLeft_22_43, mercury__parser__STATE_VARIABLE_TokensLeft_12, mercury__parser__STATE_VARIABLE_PS_23_44, mercury__parser__STATE_VARIABLE_PS_14);
        }
      }
  }
}

static void MR_CALL 
mercury__parser__parse_term_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_21,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_20,
  MR_Word * mercury__parser__Term_6,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_10,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_11,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_12,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_13)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Box mercury__parser__OpTable_9;
    MR_Integer mercury__parser__Var_14;
    MR_Integer mercury__parser__Var_18;
    MR_Integer mercury__parser__LeftPriority_38;
    MR_Word mercury__parser__LeftTerm0_39;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_22_43;
    MR_Word mercury__parser__STATE_VARIABLE_PS_23_44;
    MR_Word mercury__parser__TypeInfo_23_23;
    MR_String mercury__parser__Var_26;
    MR_Word mercury__parser__Var_27;
    MR_Word mercury__parser__Var_28;
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box);
    MR_Box mercury__parser__conv1_Var_18;

{
#define MR_PROC_LABEL mercury__parser__parse_term_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__parser__TypeClassInfo_for_op_table_20 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__TypeInfo_23_23  = TypeInfo;
}
    mercury__parser__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 0)));
    mercury__parser__OpTable_9 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 1));
    mercury__parser__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 2)));
    mercury__parser__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_12, (MR_Integer) 3)));
    mercury__parser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_20, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__parser__conv1_Var_18 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_20), mercury__parser__OpTable_9);
    }
    mercury__parser__Var_18 = ((MR_Integer) mercury__parser__conv1_Var_18);
    mercury__parser__Var_14 = (mercury__parser__Var_18 + (MR_Integer) 1);
    {
      mercury__parser__parse_left_term_8_p_0(mercury__parser__TypeInfo_for_T_21, mercury__parser__TypeClassInfo_for_op_table_20, mercury__parser__Var_14, (MR_Integer) 0, &mercury__parser__LeftPriority_38, &mercury__parser__LeftTerm0_39, mercury__parser__STATE_VARIABLE_TokensLeft_0_10, &mercury__parser__STATE_VARIABLE_TokensLeft_22_43, mercury__parser__STATE_VARIABLE_PS_0_12, &mercury__parser__STATE_VARIABLE_PS_23_44);
    }
    if (((MR_tag((MR_Word) mercury__parser__LeftTerm0_39)) == (MR_mktag((MR_Integer) 1))))
      {
        *mercury__parser__Term_6 = mercury__parser__LeftTerm0_39;
        *mercury__parser__STATE_VARIABLE_TokensLeft_11 = mercury__parser__STATE_VARIABLE_TokensLeft_22_43;
        *mercury__parser__STATE_VARIABLE_PS_13 = mercury__parser__STATE_VARIABLE_PS_23_44;
      }
    else
      {
        MR_Word mercury__parser__LeftTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__LeftTerm0_39, (MR_Integer) 0)));

        {
          mercury__parser__parse_rest_9_p_0(mercury__parser__TypeInfo_for_T_21, mercury__parser__TypeClassInfo_for_op_table_20, mercury__parser__Var_14, (MR_Integer) 0, mercury__parser__LeftPriority_38, mercury__parser__LeftTerm_40, mercury__parser__Term_6, mercury__parser__STATE_VARIABLE_TokensLeft_22_43, mercury__parser__STATE_VARIABLE_TokensLeft_11, mercury__parser__STATE_VARIABLE_PS_23_44, mercury__parser__STATE_VARIABLE_PS_13);
        }
      }
  }
}

void MR_CALL 
mercury__parser__parse_whole_term_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_25,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_24,
  MR_Word * mercury__parser__Term_6,
  MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_0_14,
  MR_Word * mercury__parser__STATE_VARIABLE_TokensLeft_15,
  MR_Word mercury__parser__STATE_VARIABLE_PS_0_16,
  MR_Word * mercury__parser__STATE_VARIABLE_PS_17)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__Term0_9;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_18_18;
    MR_Box mercury__parser__OpTable_35 = (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 1));
    MR_Integer mercury__parser__Var_36;
    MR_Integer mercury__parser__Var_40;
    MR_Integer mercury__parser__LeftPriority_58;
    MR_Word mercury__parser__LeftTerm0_59;
    MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_22_63;
    MR_Word mercury__parser__STATE_VARIABLE_PS_23_64;
    MR_String mercury__parser__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 0)));
    MR_Word mercury__parser__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 2)));
    MR_Word mercury__parser__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__STATE_VARIABLE_PS_0_16, (MR_Integer) 3)));
    MR_Box MR_CALL (* mercury__parser__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__parser__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__parser__conv1_Var_40;

    {
      mercury__parser__conv1_Var_40 = mercury__parser__func_0(((MR_Box) mercury__parser__TypeClassInfo_for_op_table_24), mercury__parser__OpTable_35);
    }
    mercury__parser__Var_40 = ((MR_Integer) mercury__parser__conv1_Var_40);
    mercury__parser__Var_36 = (mercury__parser__Var_40 + (MR_Integer) 1);
    {
      mercury__parser__parse_left_term_8_p_0(mercury__parser__TypeInfo_for_T_25, mercury__parser__TypeClassInfo_for_op_table_24, mercury__parser__Var_36, (MR_Integer) 0, &mercury__parser__LeftPriority_58, &mercury__parser__LeftTerm0_59, mercury__parser__STATE_VARIABLE_TokensLeft_0_14, &mercury__parser__STATE_VARIABLE_TokensLeft_22_63, mercury__parser__STATE_VARIABLE_PS_0_16, &mercury__parser__STATE_VARIABLE_PS_23_64);
    }
    if (((MR_tag((MR_Word) mercury__parser__LeftTerm0_59)) == (MR_mktag((MR_Integer) 1))))
      {
        mercury__parser__Term0_9 = mercury__parser__LeftTerm0_59;
        mercury__parser__STATE_VARIABLE_TokensLeft_18_18 = mercury__parser__STATE_VARIABLE_TokensLeft_22_63;
        *mercury__parser__STATE_VARIABLE_PS_17 = mercury__parser__STATE_VARIABLE_PS_23_64;
      }
    else
      {
        MR_Word mercury__parser__LeftTerm_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__LeftTerm0_59, (MR_Integer) 0)));

        {
          mercury__parser__parse_rest_9_p_0(mercury__parser__TypeInfo_for_T_25, mercury__parser__TypeClassInfo_for_op_table_24, mercury__parser__Var_36, (MR_Integer) 0, mercury__parser__LeftPriority_58, mercury__parser__LeftTerm_60, &mercury__parser__Term0_9, mercury__parser__STATE_VARIABLE_TokensLeft_22_63, &mercury__parser__STATE_VARIABLE_TokensLeft_18_18, mercury__parser__STATE_VARIABLE_PS_23_64, mercury__parser__STATE_VARIABLE_PS_17);
        }
      }
    if (((MR_tag((MR_Word) mercury__parser__Term0_9)) == (MR_mktag((MR_Integer) 1))))
      {
        *mercury__parser__Term_6 = mercury__parser__Term0_9;
        *mercury__parser__STATE_VARIABLE_TokensLeft_15 = mercury__parser__STATE_VARIABLE_TokensLeft_18_18;
      }
    else
      {
        MR_Word mercury__parser__STATE_VARIABLE_TokensLeft_20_20;
        MR_Word mercury__parser__Var_21;
        MR_Integer mercury__parser___Context_11;

        mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__STATE_VARIABLE_TokensLeft_18_18)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__parser__succeeded)
          {
            mercury__parser__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 0)));
            mercury__parser___Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 1)));
            mercury__parser__STATE_VARIABLE_TokensLeft_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 2)));
            mercury__parser__succeeded = (mercury__parser__Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
          }
        if (mercury__parser__succeeded)
          {
            *mercury__parser__STATE_VARIABLE_TokensLeft_15 = mercury__parser__STATE_VARIABLE_TokensLeft_20_20;
            *mercury__parser__Term_6 = mercury__parser__Term0_9;
          }
        else
          {
            MR_Word mercury__parser__conv2_Term_6;

            {
              mercury__parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__parser__TypeClassInfo_for_op_table_24, (MR_String) "operator or \140.\' expected", &mercury__parser__conv2_Term_6, mercury__parser__STATE_VARIABLE_TokensLeft_18_18, mercury__parser__STATE_VARIABLE_TokensLeft_15, *mercury__parser__STATE_VARIABLE_PS_17);
            }
            *mercury__parser__Term_6 = (MR_Word) mercury__parser__conv2_Term_6;
          }
      }
  }
}

static MR_bool MR_CALL 
mercury__parser__check_for_bad_token_3_p_0(
  MR_Word mercury__parser__HeadVar__1_1,
  MR_String * mercury__parser__Message_2,
  MR_Integer * mercury__parser__LineNum_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__parser__succeeded = ((MR_tag((MR_Word) mercury__parser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word mercury__parser__Token_4;
        MR_Integer mercury__parser__LineNum0_5;
        MR_Word mercury__parser__Tokens_6;

        if (mercury__parser__succeeded)
          {
            mercury__parser__Token_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 0)));
            mercury__parser__LineNum0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 1)));
            mercury__parser__Tokens_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__HeadVar__1_1, (MR_Integer) 2)));
            switch (MR_tag((MR_Word) mercury__parser__Token_4)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__parser__next_value_of_HeadVar__1_1 = mercury__parser__Tokens_6;

                    mercury__parser__HeadVar__1_1 = mercury__parser__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__parser__next_value_of_HeadVar__1_1 = mercury__parser__Tokens_6;

                    mercury__parser__HeadVar__1_1 = mercury__parser__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 7:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__parser__next_value_of_HeadVar__1_1 = mercury__parser__Tokens_6;

                        mercury__parser__HeadVar__1_1 = mercury__parser__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Char mercury__parser__Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));
                      MR_Integer mercury__parser__Code_12;
                      MR_String mercury__parser__Decimal_13;
                      MR_String mercury__parser__Hex_14;
                      MR_Word mercury__parser__Var_29;
                      MR_Word mercury__parser__Var_31;
                      MR_Word mercury__parser__Var_32;
                      MR_Word mercury__parser__Var_34;
                      MR_Word mercury__parser__Var_35;
                      MR_Word mercury__parser__Var_37;

{
#define MR_PROC_LABEL mercury__parser__check_for_bad_token_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__parser__Char_11 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__parser__Code_12  = Int;
}
                      {
                        mercury__string__int_to_base_string_3_p_0(mercury__parser__Code_12, (MR_Integer) 10, &mercury__parser__Decimal_13);
                      }
                      {
                        mercury__string__int_to_base_string_3_p_0(mercury__parser__Code_12, (MR_Integer) 16, &mercury__parser__Hex_14);
                      }
                      mercury__parser__Var_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      mercury__parser__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__parser_scalar_common_1[1]);
                      {
                        mercury__parser__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__parser__Var_34, 0) = ((MR_Box) (mercury__parser__Decimal_13));
                        MR_hl_field(MR_mktag(1), mercury__parser__Var_34, 1) = ((MR_Box) (mercury__parser__Var_35));
                      }
                      {
                        mercury__parser__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__parser__Var_32, 0) = ((MR_Box) ((MR_String) " ("));
                        MR_hl_field(MR_mktag(1), mercury__parser__Var_32, 1) = ((MR_Box) (mercury__parser__Var_34));
                      }
                      {
                        mercury__parser__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__parser__Var_31, 0) = ((MR_Box) (mercury__parser__Hex_14));
                        MR_hl_field(MR_mktag(1), mercury__parser__Var_31, 1) = ((MR_Box) (mercury__parser__Var_32));
                      }
                      {
                        mercury__parser__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__parser__Var_29, 0) = ((MR_Box) ((MR_String) "Syntax error: Illegal character 0x"));
                        MR_hl_field(MR_mktag(1), mercury__parser__Var_29, 1) = ((MR_Box) (mercury__parser__Var_31));
                      }
                      {
                        *mercury__parser__Message_2 = mercury__string__append_list_1_f_0(mercury__parser__Var_29);
                      }
                      *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
                      mercury__parser__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_String mercury__parser__ErrorMessage_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));

                      {
                        mercury__string__append_3_p_2((MR_String) "Syntax error: ", mercury__parser__ErrorMessage_15, mercury__parser__Message_2);
                      }
                      *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
                      mercury__parser__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word mercury__parser__IO_Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__parser__Token_4, (MR_Integer) 1)));
                      MR_String mercury__parser__IO_ErrorMessage_10 = (MR_String) mercury__parser__IO_Error_9;

                      {
                        mercury__string__append_3_p_2((MR_String) "I/O error: ", mercury__parser__IO_ErrorMessage_10, mercury__parser__Message_2);
                      }
                      *mercury__parser__LineNum_3 = mercury__parser__LineNum0_5;
                      mercury__parser__succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
          }
        return mercury__parser__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__parser__check_for_errors_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_45,
  MR_Word mercury__parser__Parse_6,
  MR_Word mercury__parser__VarSet_7,
  MR_Word mercury__parser__Tokens_8,
  MR_Word mercury__parser__LeftOverTokens_9,
  MR_Word * mercury__parser__Result_10)
{
  {
    MR_bool mercury__parser__succeeded;

    if (((MR_tag((MR_Word) mercury__parser__Parse_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mercury__parser__ErrorMessage_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__parser__Parse_6, (MR_Integer) 0)));
        MR_Word mercury__parser__ErrorTokens_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Parse_6, (MR_Integer) 1)));
        MR_String mercury__parser__Message_15;
        MR_Integer mercury__parser__LineNum_16;
        MR_String mercury__parser__BadTokenMessage_13;
        MR_Integer mercury__parser__BadTokenLineNum_14;

        {
          mercury__parser__succeeded = mercury__parser__check_for_bad_token_3_p_0(mercury__parser__Tokens_8, &mercury__parser__BadTokenMessage_13, &mercury__parser__BadTokenLineNum_14);
        }
        if (mercury__parser__succeeded)
          {
            mercury__parser__Message_15 = mercury__parser__BadTokenMessage_13;
            mercury__parser__LineNum_16 = mercury__parser__BadTokenLineNum_14;
          }
        else
        if ((mercury__parser__ErrorTokens_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            if ((mercury__parser__Tokens_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "check_for_errors");
                  return;
                }
              }
            else
              {
                MR_Word mercury__parser__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_8, (MR_Integer) 0)));
                MR_Word mercury__parser__Var_22;

                mercury__parser__LineNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_8, (MR_Integer) 1)));
                mercury__parser__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__Tokens_8, (MR_Integer) 2)));
              }
            {
              mercury__string__append_3_p_2((MR_String) "Syntax error: ", mercury__parser__ErrorMessage_11, &mercury__parser__Message_15);
            }
          }
        else
          {
            MR_Word mercury__parser__ErrorTok_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_12, (MR_Integer) 0)));
            MR_String mercury__parser__TokString_20;
            MR_String mercury__parser__Var_30;
            MR_String mercury__parser__Var_31;
            MR_Word mercury__parser__Var_19;

            mercury__parser__LineNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_12, (MR_Integer) 1)));
            mercury__parser__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__ErrorTokens_12, (MR_Integer) 2)));
            {
              mercury__lexer__token_to_string_2_p_0(mercury__parser__ErrorTok_17, &mercury__parser__TokString_20);
            }
            {
              mercury__string__append_3_p_2((MR_String) ": ", mercury__parser__ErrorMessage_11, &mercury__parser__Var_31);
            }
            {
              mercury__string__append_3_p_2(mercury__parser__TokString_20, mercury__parser__Var_31, &mercury__parser__Var_30);
            }
            {
              mercury__string__append_3_p_2((MR_String) "Syntax error at ", mercury__parser__Var_30, &mercury__parser__Message_15);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parser__Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_16));
        }
      }
    else
      {
        MR_Word mercury__parser__Term_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__Parse_6, (MR_Integer) 0)));
        MR_String mercury__parser__Message_39;
        MR_Integer mercury__parser__LineNum_40;

        {
          mercury__parser__succeeded = mercury__parser__check_for_bad_token_3_p_0(mercury__parser__Tokens_8, &mercury__parser__Message_39, &mercury__parser__LineNum_40);
        }
        if (mercury__parser__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__parser__Result_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_39));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_40));
          }
        else
        if ((mercury__parser__LeftOverTokens_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__parser__Result_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__parser__VarSet_7));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__parser__Term_23));
          }
        else
          {
            MR_Word mercury__parser__Token_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__LeftOverTokens_9, (MR_Integer) 0)));
            MR_String mercury__parser__Message_33;
            MR_Integer mercury__parser__LineNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parser__LeftOverTokens_9, (MR_Integer) 1)));
            MR_String mercury__parser__TokString_35;
            MR_Word mercury__parser__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__LeftOverTokens_9, (MR_Integer) 2)));

            {
              mercury__lexer__token_to_string_2_p_0(mercury__parser__Token_24, &mercury__parser__TokString_35);
            }
            {
              mercury__string__append_3_p_2((MR_String) "Syntax error: unexpected ", mercury__parser__TokString_35, &mercury__parser__Message_33);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__parser__Result_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parser__Message_33));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parser__LineNum_34));
            }
          }
      }
  }
}

void MR_CALL 
mercury__parser__parse_tokens_with_op_table_4_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_18,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_17,
  MR_Box mercury__parser__Ops_5,
  MR_String mercury__parser__FileName_6,
  MR_Word mercury__parser__Tokens_7,
  MR_Word * mercury__parser__Result_8)
{
  {
    MR_bool mercury__parser__succeeded;

    if ((mercury__parser__Tokens_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__parser__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__parser__ParserState0_12;
        MR_Word mercury__parser__Term_13;
        MR_Word mercury__parser__LeftOverTokens_14;
        MR_Word mercury__parser__ParserState_15;
        MR_Word mercury__parser__VarSet_16;
        MR_Word mercury__parser__VarSet_24 = (MR_Word) &mercury__parser_scalar_common_2[2];
        MR_Word mercury__parser__Names_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__parser__V_3_30 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
        MR_Word mercury__parser__V_4_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__parser__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_String mercury__parser__Var_47;
        MR_Box mercury__parser__Var_48;
        MR_Word mercury__parser__Var_49;

        {
          mercury__parser__ParserState0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 0) = ((MR_Box) (mercury__parser__FileName_6));
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 1) = mercury__parser__Ops_5;
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 2) = ((MR_Box) (mercury__parser__VarSet_24));
          MR_hl_field(MR_mktag(0), mercury__parser__ParserState0_12, 3) = ((MR_Box) (mercury__parser__Names_25));
        }
        {
          mercury__parser__parse_whole_term_5_p_0(mercury__parser__TypeInfo_for_T_18, mercury__parser__TypeClassInfo_for_op_table_17, &mercury__parser__Term_13, mercury__parser__Tokens_7, &mercury__parser__LeftOverTokens_14, mercury__parser__ParserState0_12, &mercury__parser__ParserState_15);
        }
        mercury__parser__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 0)));
        mercury__parser__Var_48 = (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 1));
        mercury__parser__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 2)));
        mercury__parser__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parser__ParserState_15, (MR_Integer) 3)));
        {
          mercury__parser__check_for_errors_5_p_0(mercury__parser__TypeInfo_for_T_18, mercury__parser__Term_13, mercury__parser__VarSet_16, mercury__parser__Tokens_7, mercury__parser__LeftOverTokens_14, mercury__parser__Result_8);
        }
      }
  }
}

void MR_CALL 
mercury__parser__parse_tokens_3_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_8,
  MR_String mercury__parser__FileName_4,
  MR_Word mercury__parser__Tokens_5,
  MR_Word * mercury__parser__Result_6)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__TypeClassInfo_for_op_table_9;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__parser__TypeClassInfo_for_op_table_9 = (MR_Word) &mercury__parser_scalar_common_1[0];
    {
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_8, mercury__parser__TypeClassInfo_for_op_table_9, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_4, mercury__parser__Tokens_5, mercury__parser__Result_6);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_from_substring_with_op_table_7_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_17,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_16,
  MR_Box mercury__parser__Ops_8,
  MR_String mercury__parser__FileName_9,
  MR_String mercury__parser__String_10,
  MR_Integer mercury__parser__Len_11,
  MR_Word mercury__parser__StartPos_12,
  MR_Word * mercury__parser__EndPos_13,
  MR_Word * mercury__parser__Result_14)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__Tokens_15;

    {
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_10, mercury__parser__Len_11, &mercury__parser__Tokens_15, mercury__parser__StartPos_12, mercury__parser__EndPos_13);
    }
    {
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_17, mercury__parser__TypeClassInfo_for_op_table_16, mercury__parser__Ops_8, mercury__parser__FileName_9, mercury__parser__Tokens_15, mercury__parser__Result_14);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_from_substring_6_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_14,
  MR_String mercury__parser__FileName_7,
  MR_String mercury__parser__String_8,
  MR_Integer mercury__parser__Len_9,
  MR_Word mercury__parser__StartPos_10,
  MR_Word * mercury__parser__EndPos_11,
  MR_Word * mercury__parser__Result_12)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__TypeClassInfo_for_op_table_15;
    MR_Word mercury__parser__Tokens_23;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__parser__TypeClassInfo_for_op_table_15 = (MR_Word) &mercury__parser_scalar_common_1[0];
    {
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_8, mercury__parser__Len_9, &mercury__parser__Tokens_23, mercury__parser__StartPos_10, mercury__parser__EndPos_11);
    }
    {
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__TypeClassInfo_for_op_table_15, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_7, mercury__parser__Tokens_23, mercury__parser__Result_12);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_from_string_with_op_table_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_17,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_16,
  MR_Box mercury__parser__Ops_6,
  MR_String mercury__parser__FileName_7,
  MR_String mercury__parser__String_8,
  MR_Word * mercury__parser__EndPos_9,
  MR_Word * mercury__parser__Result_10)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Integer mercury__parser__Len_11;
    MR_Word mercury__parser__StartPos_12;
    MR_Word mercury__parser__Tokens_25;

{
#define MR_PROC_LABEL mercury__parser__read_term_from_string_with_op_table_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parser__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__Len_11  = Length;
}
    mercury__parser__StartPos_12 = (MR_Word) &mercury__parser_scalar_common_2[1];
    {
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_8, mercury__parser__Len_11, &mercury__parser__Tokens_25, mercury__parser__StartPos_12, mercury__parser__EndPos_9);
    }
    {
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_17, mercury__parser__TypeClassInfo_for_op_table_16, mercury__parser__Ops_6, mercury__parser__FileName_7, mercury__parser__Tokens_25, mercury__parser__Result_10);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_from_string_4_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_10,
  MR_String mercury__parser__FileName_5,
  MR_String mercury__parser__String_6,
  MR_Word * mercury__parser__EndPos_7,
  MR_Word * mercury__parser__Result_8)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__TypeClassInfo_for_op_table_11;
    MR_Integer mercury__parser__Len_17;
    MR_Word mercury__parser__StartPos_18;
    MR_Word mercury__parser__Tokens_29;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__parser__TypeClassInfo_for_op_table_11 = (MR_Word) &mercury__parser_scalar_common_1[0];
{
#define MR_PROC_LABEL mercury__parser__read_term_from_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parser__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__Len_17  = Length;
}
    mercury__parser__StartPos_18 = (MR_Word) &mercury__parser_scalar_common_2[1];
    {
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__parser__String_6, mercury__parser__Len_17, &mercury__parser__Tokens_29, mercury__parser__StartPos_18, mercury__parser__EndPos_7);
    }
    {
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_10, mercury__parser__TypeClassInfo_for_op_table_11, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_5, mercury__parser__Tokens_29, mercury__parser__Result_8);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_filename_with_op_table_6_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_17,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_16,
  MR_Word mercury__parser__Stream_7,
  MR_Box mercury__parser__Ops_8,
  MR_String mercury__parser__FileName_9,
  MR_Word * mercury__parser__Result_10)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__Tokens_12;
    MR_Word mercury__parser__V_8_22;
    MR_Integer mercury__parser__V_9_23;
    MR_Word mercury__parser__V_12_37;
    MR_Char mercury__parser__V_13_38;
    MR_Word mercury__parser__V_10_47;
    MR_Box mercury__parser__V_11_48;
    MR_Box mercury__parser__V_7_57 = (MR_Box) mercury__parser__Stream_7;

    {
      mercury__io__read_char_code_2_6_p_0(mercury__parser__V_7_57, &mercury__parser__V_10_47, &mercury__parser__V_13_38, &mercury__parser__V_11_48);
    }
    switch (mercury__parser__V_10_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__parser__V_12_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        break;
      case (MR_Integer) 2:
        {
          MR_String mercury__parser__V_12_50;
          MR_Word mercury__parser__V_17_51;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__parser__V_11_48 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_12_50  = Msg;
}
          mercury__parser__V_17_51 = (MR_Word) mercury__parser__V_12_50;
          {
            mercury__parser__V_12_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__parser__V_12_37, 0) = ((MR_Box) (mercury__parser__V_17_51));
          }
        }
        break;
      case (MR_Integer) 0:
        mercury__parser__V_12_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    switch (MR_tag((MR_Word) mercury__parser__V_12_37)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__parser__V_12_37)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__parser__V_15_41;

              if ((((MR_Unsigned) (mercury__parser__V_13_38 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                if ((((mercury__parser_scalar_common_6[0])[(((mercury__parser__V_13_38 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__parser__V_13_38 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                  {
                    mercury__parser__V_15_41 = ((&mercury__parser_vector_common_5[0 + (mercury__parser__V_13_38 - (MR_Integer) 9)]))->mercury__parser__vector_common_type_5_0__vct_5_f_0;
                    mercury__parser__succeeded = MR_TRUE;
                  }
                else
                  mercury__parser__succeeded = MR_FALSE;
              else
                mercury__parser__succeeded = MR_FALSE;
              if (mercury__parser__succeeded)
                {
                  mercury__lexer__execute_get_token_action_8_p_0(mercury__parser__Stream_7, mercury__parser__V_13_38, mercury__parser__V_15_41, (MR_Integer) 1, &mercury__parser__V_8_22, &mercury__parser__V_9_23);
                }
              else
                {
                  MR_Box mercury__parser__V_5_83 = (MR_Box) mercury__parser__Stream_7;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__parser__V_5_83 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_9_23  = LineNum;
}
                  {
                    mercury__parser__V_8_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__parser__V_8_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), mercury__parser__V_8_22, 1) = ((MR_Box) (MR_Word) (mercury__parser__V_13_38));
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__parser__V_5_65 = (MR_Box) mercury__parser__Stream_7;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__parser__V_5_65 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_9_23  = LineNum;
}
              mercury__parser__V_8_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__parser__V_14_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parser__V_12_37, (MR_Integer) 0)));
          MR_Box mercury__parser__V_5_73 = (MR_Box) mercury__parser__Stream_7;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__parser__V_5_73 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_9_23  = LineNum;
}
          {
            mercury__parser__V_8_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), mercury__parser__V_8_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), mercury__parser__V_8_22, 1) = ((MR_Box) (mercury__parser__V_14_40));
          }
        }
        break;
    }
    {
      mercury__lexer__get_token_list_2_6_p_0(mercury__parser__Stream_7, mercury__parser__V_8_22, mercury__parser__V_9_23, &mercury__parser__Tokens_12);
    }
    {
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__parser__TypeInfo_for_T_17, mercury__parser__TypeClassInfo_for_op_table_16, mercury__parser__Ops_8, mercury__parser__FileName_9, mercury__parser__Tokens_12, mercury__parser__Result_10);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_filename_with_op_table_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_16,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_15,
  MR_Box mercury__parser__Ops_6,
  MR_String mercury__parser__FileName_7,
  MR_Word * mercury__parser__Result_8)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__Stream_10;
    MR_Box mercury__parser__V_4_19;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_4_19  = (MR_Box) Stream;
}
    mercury__parser__Stream_10 = (MR_Word) mercury__parser__V_4_19;
    {
      mercury__parser__read_term_filename_with_op_table_6_p_0(mercury__parser__TypeInfo_for_T_16, mercury__parser__TypeClassInfo_for_op_table_15, mercury__parser__Stream_10, mercury__parser__Ops_6, mercury__parser__FileName_7, mercury__parser__Result_8);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_filename_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_14,
  MR_Word mercury__parser__Stream_6,
  MR_String mercury__parser__FileName_7,
  MR_Word * mercury__parser__Result_8)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__TypeClassInfo_for_op_table_15;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__parser__TypeClassInfo_for_op_table_15 = (MR_Word) &mercury__parser_scalar_common_1[0];
    {
      mercury__parser__read_term_filename_with_op_table_6_p_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__TypeClassInfo_for_op_table_15, mercury__parser__Stream_6, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_7, mercury__parser__Result_8);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_filename_4_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_13,
  MR_String mercury__parser__FileName_5,
  MR_Word * mercury__parser__Result_6)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__TypeClassInfo_for_op_table_25;
    MR_Word mercury__parser__Stream_8;
    MR_Box mercury__parser__V_4_16;

{
#define MR_PROC_LABEL mercury__parser__read_term_filename_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_4_16  = (MR_Box) Stream;
}
    mercury__parser__Stream_8 = (MR_Word) mercury__parser__V_4_16;
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__parser__TypeClassInfo_for_op_table_25 = (MR_Word) &mercury__parser_scalar_common_1[0];
    {
      mercury__parser__read_term_filename_with_op_table_6_p_0(mercury__parser__TypeInfo_for_T_13, mercury__parser__TypeClassInfo_for_op_table_25, mercury__parser__Stream_8, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_5, mercury__parser__Result_6);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_with_op_table_5_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_16,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_15,
  MR_Word mercury__parser__Stream_6,
  MR_Box mercury__parser__Ops_7,
  MR_Word * mercury__parser__Result_8)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_String mercury__parser__FileName_10;
    MR_Box mercury__parser__V_5_20 = (MR_Box) mercury__parser__Stream_6;

    {
      mercury__io__stream_name_4_p_0(mercury__parser__V_5_20, &mercury__parser__FileName_10);
    }
    {
      mercury__parser__read_term_filename_with_op_table_6_p_0(mercury__parser__TypeInfo_for_T_16, mercury__parser__TypeClassInfo_for_op_table_15, mercury__parser__Stream_6, mercury__parser__Ops_7, mercury__parser__FileName_10, mercury__parser__Result_8);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_with_op_table_4_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_14,
  MR_Word mercury__parser__TypeClassInfo_for_op_table_13,
  MR_Box mercury__parser__Ops_5,
  MR_Word * mercury__parser__Result_6)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__Stream_8;
    MR_String mercury__parser__FileName_24;
    MR_Box mercury__parser__V_5_30;

{
#define MR_PROC_LABEL mercury__parser__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_5_30  = (MR_Box) Stream;
}
    mercury__parser__Stream_8 = (MR_Word) mercury__parser__V_5_30;
    {
      mercury__io__stream_name_4_p_0(mercury__parser__V_5_30, &mercury__parser__FileName_24);
    }
    {
      mercury__parser__read_term_filename_with_op_table_6_p_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__TypeClassInfo_for_op_table_13, mercury__parser__Stream_8, mercury__parser__Ops_5, mercury__parser__FileName_24, mercury__parser__Result_6);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_4_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_14,
  MR_Word mercury__parser__Stream_5,
  MR_Word * mercury__parser__Result_6)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__TypeClassInfo_for_op_table_15;
    MR_String mercury__parser__FileName_8;
    MR_Box mercury__parser__V_5_19 = (MR_Box) mercury__parser__Stream_5;

    {
      mercury__io__stream_name_4_p_0(mercury__parser__V_5_19, &mercury__parser__FileName_8);
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__parser__TypeClassInfo_for_op_table_15 = (MR_Word) &mercury__parser_scalar_common_1[0];
    {
      mercury__parser__read_term_filename_with_op_table_6_p_0(mercury__parser__TypeInfo_for_T_14, mercury__parser__TypeClassInfo_for_op_table_15, mercury__parser__Stream_5, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_8, mercury__parser__Result_6);
    }
  }
}

void MR_CALL 
mercury__parser__read_term_3_p_0(
  MR_Word mercury__parser__TypeInfo_for_T_11,
  MR_Word * mercury__parser__Result_4)
{
  {
    MR_bool mercury__parser__succeeded;
    MR_Word mercury__parser__TypeClassInfo_for_op_table_24;
    MR_Word mercury__parser__Stream_6;
    MR_String mercury__parser__FileName_20;
    MR_Box mercury__parser__V_5_28;

{
#define MR_PROC_LABEL mercury__parser__read_term_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__parser__V_5_28  = (MR_Box) Stream;
}
    mercury__parser__Stream_6 = (MR_Word) mercury__parser__V_5_28;
    {
      mercury__io__stream_name_4_p_0(mercury__parser__V_5_28, &mercury__parser__FileName_20);
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__parser__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__parser_scalar_common_1[0];
    {
      mercury__parser__read_term_filename_with_op_table_6_p_0(mercury__parser__TypeInfo_for_T_11, mercury__parser__TypeClassInfo_for_op_table_24, mercury__parser__Stream_6, ((MR_Box) ((MR_Integer) 0)), mercury__parser__FileName_20, mercury__parser__Result_4);
    }
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
