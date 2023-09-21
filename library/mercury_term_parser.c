/*
** Automatically generated from `mercury_term_parser.m'
** by the Mercury compiler,
** version rotd-2023-09-21
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




static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_parse_result_1_0[1];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parse_result_1_0;

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_parse_result_1_1[2];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parse_result_1_1;

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parse_result_1_0[1];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parse_result_1_1[1];

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_parse_result_1[2];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_parse_result_1[2];

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_parse_result_1[2];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mercury_term_parser__varset__pti_varset_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mercury_term_parser__term__pti_var_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__mercury_term_parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_parser_state_2_0[4];

static const MR_ConstString mercury__mercury_term_parser__mercury_term_parser__field_names_parser_state_2_0[4];

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parser_state_2_0;

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_stag_ordered_parser_state_2_0[1];

static const MR_DuPtagLayout mercury__mercury_term_parser__mercury_term_parser__du_ptag_ordered_parser_state_2[1];

static const MR_DuFunctorDescPtr mercury__mercury_term_parser__mercury_term_parser__du_name_ordered_parser_state_2[1];

static const MR_Integer mercury__mercury_term_parser__mercury_term_parser__functor_number_map_parser_state_2[1];

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
mercury__mercury_term_parser__parse_simple_term_8_p_0(
  MR_Word TypeInfo_for_T_149,
  MR_Word TypeClassInfo_for_op_table_148,
  MR_Word Token_9,
  MR_Integer Context_10,
  MR_Word Prec_11,
  MR_Word * TermParse_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_51,
  MR_Word * STATE_VARIABLE_TokensLeft_52,
  MR_Word STATE_VARIABLE_PS_0_53,
  MR_Word * STATE_VARIABLE_PS_54);

static void MR_CALL 
mercury__mercury_term_parser__do_parse_term_7_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_24,
  MR_Word MinPriority_8,
  MR_Word TermKind_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * STATE_VARIABLE_TokensLeft_19,
  MR_Word STATE_VARIABLE_PS_0_20,
  MR_Word * STATE_VARIABLE_PS_21);

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
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_op_table_31,
  MR_Word BaseTerm_8,
  MR_Integer Context_9,
  MR_Word * TermParse_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_20,
  MR_Word * STATE_VARIABLE_TokensLeft_21,
  MR_Word STATE_VARIABLE_PS_0_22,
  MR_Word * STATE_VARIABLE_PS_23);

static void MR_CALL 
mercury__mercury_term_parser__parse_rest_9_p_0(
  MR_Word TypeInfo_for_T_82,
  MR_Word TypeClassInfo_for_op_table_81,
  MR_Word MinPriority_10,
  MR_Word TermKind_11,
  MR_Word LeftPriority_12,
  MR_Word LeftTerm_13,
  MR_Word * Term_14,
  MR_Word STATE_VARIABLE_TokensLeft_0_41,
  MR_Word * STATE_VARIABLE_TokensLeft_42,
  MR_Word STATE_VARIABLE_PS_0_43,
  MR_Word * STATE_VARIABLE_PS_44);

static void MR_CALL 
mercury__mercury_term_parser__parse_args_5_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeClassInfo_for_op_table_34,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * STATE_VARIABLE_TokensLeft_20,
  MR_Word STATE_VARIABLE_PS_0_21,
  MR_Word * STATE_VARIABLE_PS_22);

static void MR_CALL 
mercury__mercury_term_parser__parse_list_5_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeClassInfo_for_op_table_19,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_13,
  MR_Word * STATE_VARIABLE_TokensLeft_14,
  MR_Word STATE_VARIABLE_PS_0_15,
  MR_Word * STATE_VARIABLE_PS_16);

static void MR_CALL 
mercury__mercury_term_parser__parse_special_atom_7_p_0(
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
mercury__mercury_term_parser__parse_left_term_8_p_0(
  MR_Word TypeInfo_for_T_118,
  MR_Word TypeClassInfo_for_op_table_117,
  MR_Word MinPriority_9,
  MR_Word TermKind_10,
  MR_Word * OpPriority_11,
  MR_Word * Term_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_52,
  MR_Word * STATE_VARIABLE_TokensLeft_53,
  MR_Word STATE_VARIABLE_PS_0_54,
  MR_Word * STATE_VARIABLE_PS_55);

static void MR_CALL 
mercury__mercury_term_parser__could_start_term_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

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
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_op_table_25,
  MR_Word Token_8,
  MR_Integer Context_9,
  MR_String UsualMessage_10,
  MR_Word * Error_11,
  MR_Word STATE_VARIABLE_TokensLeft_0_21,
  MR_Word * STATE_VARIABLE_TokensLeft_22,
  MR_Word PS_13);

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_op_table_15,
  MR_String UsualMessage_6,
  MR_Word * Error_7,
  MR_Word STATE_VARIABLE_TokensLeft_0_12,
  MR_Word * STATE_VARIABLE_TokensLeft_13,
  MR_Word PS_9);

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

static MR_bool MR_CALL 
mercury__mercury_term_parser__check_for_bad_token_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Message_2,
  MR_Integer * LineNum_3);

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


static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_4[1][5];

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_5[5][1];

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



static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row   1 */
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

static /* final */ const MR_Box mercury__mercury_term_parser_scalar_common_5[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) ".")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "[|]")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "[]")) },
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

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_parse_result_1_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__mercury_term_lexer__mercury_term_lexer__type_ctor_info_token_list_0)
};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parse_result_1_1 = {
  (MR_String) "pr_error",
  INT16_C(2),
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

static const MR_PseudoTypeInfo mercury__mercury_term_parser__mercury_term_parser__field_types_parser_state_2_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__varset__pti_varset_1__pseudo_2),
  (MR_PseudoTypeInfo) (&mercury__mercury_term_parser__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_term__pti_var_1__pseudo_2)
};

static const MR_ConstString mercury__mercury_term_parser__mercury_term_parser__field_names_parser_state_2_0[4] = {
  (MR_String) "ps_stream_name",
  (MR_String) "ps_ops_table",
  (MR_String) "ps_varset",
  (MR_String) "ps_var_names"
};

static const MR_DuFunctorDesc mercury__mercury_term_parser__mercury_term_parser__du_functor_desc_parser_state_2_0 = {
  (MR_String) "parser_state",
  INT16_C(4),
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

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__mercury_term_parser_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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
  MR_Word TypeInfo_for_T_32,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
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
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_40 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_12;
                MR_Integer Var_43;

{
#define MR_PROC_LABEL mercury__mercury_term_parser____Compare____read_term_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_40 ;
	S2 = ArgY1_11 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_43  = Res;
}
                succeeded = (Var_43 < (MR_Integer) 0);
                if (succeeded)
                  SubResult1_12 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_43 == (MR_Integer) 0);
                  if (succeeded)
                    SubResult1_12 = (MR_Integer) 0;
                  else
                    SubResult1_12 = (MR_Integer) 2;
                }
                succeeded = (SubResult1_12 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_12;
                else
                {
                  succeeded = (Var_39 < ArgY2_14);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_39 == ArgY2_14);
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
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_42 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_27;

                mercury__varset____Compare____varset_1_0(TypeInfo_for_T_32, &SubResult1_27, Var_42, ArgY1_26);
                succeeded = (SubResult1_27 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_27;
                else
                  mercury__term____Compare____term_1_0(TypeInfo_for_T_32, HeadVar__1_1, Var_41, ArgY2_29);
              }
              break;
          }
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
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_6;
          MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            if (succeeded)
              succeeded = (ArgX2_7 == ArgY2_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mercury__varset____Unify____varset_1_0(TypeInfo_for_T_15, ArgX1_9, ArgY1_10);
            if (succeeded)
              succeeded = mercury__term____Unify____term_1_0(TypeInfo_for_T_15, ArgX2_11, ArgY2_12);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__mercury_term_parser____Compare____parser_state_2_0(
  MR_Word TypeInfo_for_Ops_17,
  MR_Word TypeInfo_for_T_18,
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;
    MR_Integer Var_27;

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
	Var_27  = Res;
}
    succeeded = (Var_27 < (MR_Integer) 0);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_27 == (MR_Integer) 0);
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

      mercury__builtin__compare_3_p_0(TypeInfo_for_Ops_17, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__varset____Compare____varset_1_0(TypeInfo_for_T_18, &SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word TypeInfo_24_24;

          {
            TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_18));
          }
          mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_24_24, HeadVar__1_1, (MR_Word) (ArgX4_13), (MR_Word) (ArgY4_14));
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____parser_state_2_0(
  MR_Word TypeInfo_for_Ops_13,
  MR_Word TypeInfo_for_T_14,
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
    MR_Word TypeCtorInfo_17_17;
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Ops_13, ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__varset____Unify____varset_1_0(TypeInfo_for_T_14, ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeCtorInfo_17_17 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
          TypeCtorInfo_18_18 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
          {
            TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (TypeCtorInfo_18_18));
            MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_14));
          }
          succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_17_17, TypeInfo_19_19, (MR_Word) (ArgX4_9), (MR_Word) (ArgY4_10));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__mercury_term_parser____Compare____parse_result_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_23 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgY1_13 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;
      MR_Integer Var_25;

{
#define MR_PROC_LABEL mercury__mercury_term_parser____Compare____parse_result_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_23 ;
	S2 = ArgY1_13 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_25  = Res;
}
      succeeded = (Var_25 < (MR_Integer) 0);
      if (succeeded)
        SubResult1_14 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_25 == (MR_Integer) 0);
        if (succeeded)
          SubResult1_14 = (MR_Integer) 0;
        else
          SubResult1_14 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
        mercury__mercury_term_lexer____Compare____token_list_0_0(HeadVar__1_1, Var_22, ArgY2_16);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Box Var_24 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_19, HeadVar__1_1, Var_24, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mercury__mercury_term_parser____Unify____parse_result_1_0(
  MR_Word TypeInfo_for_T_11,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      if (succeeded)
        succeeded = mercury__mercury_term_lexer____Unify____token_list_0_0(ArgX2_7, ArgY2_8);
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__mercury_term_parser__parser_state_get_varset_1_f_0(
  MR_Word TypeInfo_for_Ops_8,
  MR_Word TypeInfo_for_T_9,
  MR_Word ParserState_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, ParserState_3, (MR_Integer) 2))));

  return X_4;
}

void MR_CALL 
mercury__mercury_term_parser__final_parser_state_2_p_0(
  MR_Word TypeInfo_for_Ops_5,
  MR_Word TypeInfo_for_T_6,
  MR_Word ParserState_3,
  MR_Word * VarSet_4)
{
  *VarSet_4 = ((MR_Word) ((MR_hl_field(0, ParserState_3, (MR_Integer) 2))));
}

void MR_CALL 
mercury__mercury_term_parser__init_parser_state_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeClassInfo_for_op_table_9,
  MR_Box Ops_4,
  MR_String FileName_5,
  MR_Word * ParserState_6)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *ParserState_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FileName_5));
    MR_hl_field(0, base, 1) = Ops_4;
    MR_hl_field(0, base, 2) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_2[2]));
    MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
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
  MR_Word Var_17;
  MR_Integer Var_18;
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
              mercury__mercury_term_lexer__execute_get_token_action_8_p_0(Stream_7, Var_22, Var_25, (MR_Integer) 1, &Var_17, &Var_18);
            else
            {
              MR_Box Var_34 = (MR_Box) (Stream_7);

{
#define MR_PROC_LABEL mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Var_34 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_18  = LineNum;
}
              {
                Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Var_17, 1) = ((MR_Box) (MR_Word) (Var_22));
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

	Stream = (MercuryFilePtr)Var_32 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_18  = LineNum;
}
            Var_17 = (MR_Word) ((MR_Unsigned) 40U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
        MR_Box Var_33 = (MR_Box) (Stream_7);

{
#define MR_PROC_LABEL mercury__mercury_term_parser__read_term_filename_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr)Var_33 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	Var_18  = LineNum;
}
        {
          Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_17, 1) = ((MR_Box) (Var_24));
        }
      }
      break;
  }
  mercury__mercury_term_lexer__get_token_list_2_6_p_0(Stream_7, Var_17, Var_18, &Tokens_12);
  mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0(TypeInfo_for_T_16, TypeClassInfo_for_op_table_15, Ops_8, FileName_9, Tokens_12, Result_10);
}

void MR_CALL 
mercury__mercury_term_parser__parse_tokens_with_op_table_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_op_table_17,
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
    MR_Word Term_13;
    MR_Word LeftOverTokens_14;
    MR_Word ParserState_15;
    MR_Word VarSet_16;

    {
      ParserState0_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ParserState0_12, 0) = ((MR_Box) (FileName_6));
      MR_hl_field(0, ParserState0_12, 1) = Ops_5;
      MR_hl_field(0, ParserState0_12, 2) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_2[2]));
      MR_hl_field(0, ParserState0_12, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__mercury_term_parser__parse_whole_term_5_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_17, &Term_13, Tokens_7, &LeftOverTokens_14, ParserState0_12, &ParserState_15);
    VarSet_16 = ((MR_Word) ((MR_hl_field(0, ParserState_15, (MR_Integer) 2))));
    mercury__mercury_term_parser__check_for_errors_5_p_0(TypeInfo_for_T_18, Term_13, VarSet_16, Tokens_7, LeftOverTokens_14, Result_8);
  }
}

void MR_CALL 
mercury__mercury_term_parser__parse_whole_term_5_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word * Term_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_14,
  MR_Word * STATE_VARIABLE_TokensLeft_15,
  MR_Word STATE_VARIABLE_PS_0_16,
  MR_Word * STATE_VARIABLE_PS_17)
{
  MR_bool succeeded;
  MR_Word Term0_9;
  MR_Word STATE_VARIABLE_TokensLeft_18_18;
  MR_Box OpTable_27 = (MR_hl_field(0, STATE_VARIABLE_PS_0_16, (MR_Integer) 1));
  MR_Word ArgPriority_28;
  MR_Word LeftPriority_35;
  MR_Word LeftTerm0_36;
  MR_Word STATE_VARIABLE_TokensLeft_22_40;
  MR_Word STATE_VARIABLE_PS_23_41;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_ArgPriority_28;

  conv1_ArgPriority_28 = func_0(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_27);
  ArgPriority_28 = ((MR_Word) (conv1_ArgPriority_28));
  mercury__mercury_term_parser__parse_left_term_8_p_0(TypeInfo_for_T_24, TypeClassInfo_for_op_table_23, ArgPriority_28, (MR_Integer) 0, &LeftPriority_35, &LeftTerm0_36, STATE_VARIABLE_TokensLeft_0_14, &STATE_VARIABLE_TokensLeft_22_40, STATE_VARIABLE_PS_0_16, &STATE_VARIABLE_PS_23_41);
  if (((MR_tag((MR_Word) LeftTerm0_36)) == (MR_Integer) 1))
  {
    Term0_9 = LeftTerm0_36;
    STATE_VARIABLE_TokensLeft_18_18 = STATE_VARIABLE_TokensLeft_22_40;
    *STATE_VARIABLE_PS_17 = STATE_VARIABLE_PS_23_41;
  }
  else
  {
    MR_Word LeftTerm_37 = ((MR_Word) ((MR_hl_field(0, LeftTerm0_36, (MR_Integer) 0))));

    mercury__mercury_term_parser__parse_rest_9_p_0(TypeInfo_for_T_24, TypeClassInfo_for_op_table_23, ArgPriority_28, (MR_Integer) 0, LeftPriority_35, LeftTerm_37, &Term0_9, STATE_VARIABLE_TokensLeft_22_40, &STATE_VARIABLE_TokensLeft_18_18, STATE_VARIABLE_PS_23_41, STATE_VARIABLE_PS_17);
  }
  if (((MR_tag((MR_Word) Term0_9)) == (MR_Integer) 1))
  {
    *Term_6 = Term0_9;
    *STATE_VARIABLE_TokensLeft_15 = STATE_VARIABLE_TokensLeft_18_18;
  }
  else
  {
    MR_Word STATE_VARIABLE_TokensLeft_20_20;
    MR_Word Var_21;

    succeeded = (STATE_VARIABLE_TokensLeft_18_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 0))));
      STATE_VARIABLE_TokensLeft_20_20 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 2))));
      succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 36U));
    }
    if (succeeded)
    {
      *STATE_VARIABLE_TokensLeft_15 = STATE_VARIABLE_TokensLeft_20_20;
      *Term_6 = Term0_9;
    }
    else
    if ((STATE_VARIABLE_TokensLeft_18_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Term_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "operator or \140.\' expected"));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TokensLeft_18_18));
      }
      *STATE_VARIABLE_TokensLeft_15 = STATE_VARIABLE_TokensLeft_18_18;
    }
    else
    {
      MR_Word Token_42 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_18_18, (MR_Integer) 0))));
      MR_String Op_45;
      MR_Box OpTable_46;

      *STATE_VARIABLE_TokensLeft_15 = STATE_VARIABLE_TokensLeft_18_18;
      if ((Token_42 == (MR_Word) ((MR_Unsigned) 32U)))
      {
        Op_45 = (MR_String) ",";
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) Token_42)) == (MR_Integer) 1))
      {
        Op_45 = ((MR_String) ((MR_hl_field(1, Token_42, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        OpTable_46 = (MR_hl_field(0, *STATE_VARIABLE_PS_17, (MR_Integer) 1));
        {
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv5_Var_47;
          MR_Box conv4_Var_48;
          MR_Box conv3_Var_49;

          succeeded = func_2(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_46, ((MR_Box) (Op_45)), &conv5_Var_47, &conv4_Var_48, &conv3_Var_49);
          if (succeeded)
            succeeded = MR_TRUE;
        }
        if (!(succeeded))
        {
          MR_bool MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 8))));
          MR_Box conv8_Var_50;
          MR_Box conv7_Var_51;

          succeeded = func_6(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_46, ((MR_Box) (Op_45)), &conv8_Var_50, &conv7_Var_51);
          if (succeeded)
            succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Term_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
          MR_hl_field(1, base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_15));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Term_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "operator or \140.\' expected"));
          MR_hl_field(1, base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_15));
        }
    }
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_simple_term_8_p_0(
  MR_Word TypeInfo_for_T_149,
  MR_Word TypeClassInfo_for_op_table_148,
  MR_Word Token_9,
  MR_Integer Context_10,
  MR_Word Prec_11,
  MR_Word * TermParse_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_51,
  MR_Word * STATE_VARIABLE_TokensLeft_52,
  MR_Word STATE_VARIABLE_PS_0_53,
  MR_Word * STATE_VARIABLE_PS_54)
{
  MR_bool succeeded;
  MR_Word BaseTermParse_21;
  MR_Word STATE_VARIABLE_TokensLeft_57_57;
  MR_Word STATE_VARIABLE_PS_58_58;
  MR_Word BaseTermOpen_49;
  MR_Word STATE_VARIABLE_TokensLeft_102_102;
  MR_Word Var_103;

  switch (MR_tag((MR_Word) Token_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Token_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word SubTermParse_37;
            MR_Word STATE_VARIABLE_TokensLeft_74_74;

            mercury__mercury_term_parser__parse_term_5_p_0(TypeInfo_for_T_149, TypeClassInfo_for_op_table_148, &SubTermParse_37, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_74_74, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_58_58);
            if (((MR_tag((MR_Word) SubTermParse_37)) == (MR_Integer) 1))
            {
              BaseTermParse_21 = SubTermParse_37;
              STATE_VARIABLE_TokensLeft_57_57 = STATE_VARIABLE_TokensLeft_74_74;
            }
            else
            {
              MR_Word STATE_VARIABLE_TokensLeft_76_76;
              MR_Word Var_77;

              succeeded = (STATE_VARIABLE_TokensLeft_74_74 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_77 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_74_74, (MR_Integer) 0))));
                STATE_VARIABLE_TokensLeft_76_76 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_74_74, (MR_Integer) 2))));
                succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 8U));
              }
              if (succeeded)
              {
                STATE_VARIABLE_TokensLeft_57_57 = STATE_VARIABLE_TokensLeft_76_76;
                BaseTermParse_21 = SubTermParse_37;
              }
              else
              {
                MR_Word conv2_BaseTermParse_21;

                mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(TypeClassInfo_for_op_table_148, (MR_String) "expecting \140)\' or operator", &conv2_BaseTermParse_21, STATE_VARIABLE_TokensLeft_74_74, &STATE_VARIABLE_TokensLeft_57_57, STATE_VARIABLE_PS_58_58);
                BaseTermParse_21 = (MR_Word) (conv2_BaseTermParse_21);
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

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_148, Token_9, Context_10, (MR_String) "unexpected token at start of (sub)term", &conv0_BaseTermParse_21, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_57_57, STATE_VARIABLE_PS_0_53);
            BaseTermParse_21 = (MR_Word) (conv0_BaseTermParse_21);
            STATE_VARIABLE_PS_58_58 = STATE_VARIABLE_PS_0_53;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TermContext_128;
            MR_Word STATE_VARIABLE_TokensLeft_80_80;
            MR_Word Var_81;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_128);
            succeeded = (STATE_VARIABLE_TokensLeft_0_51 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_81 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 0))));
              STATE_VARIABLE_TokensLeft_80_80 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 2))));
              succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 16U));
            }
            if (succeeded)
              mercury__mercury_term_parser__parse_special_atom_7_p_0(TypeInfo_for_T_149, TypeClassInfo_for_op_table_148, (MR_String) "[]", TermContext_128, &BaseTermParse_21, STATE_VARIABLE_TokensLeft_80_80, &STATE_VARIABLE_TokensLeft_57_57, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_58_58);
            else
              mercury__mercury_term_parser__parse_list_5_p_0(TypeInfo_for_T_149, TypeClassInfo_for_op_table_148, &BaseTermParse_21, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_57_57, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_58_58);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TermContext_147;
            MR_Word STATE_VARIABLE_TokensLeft_87_87;
            MR_Word Var_88;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_147);
            succeeded = (STATE_VARIABLE_TokensLeft_0_51 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_88 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 0))));
              STATE_VARIABLE_TokensLeft_87_87 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 2))));
              succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 24U));
            }
            if (succeeded)
              mercury__mercury_term_parser__parse_special_atom_7_p_0(TypeInfo_for_T_149, TypeClassInfo_for_op_table_148, (MR_String) "{}", TermContext_147, &BaseTermParse_21, STATE_VARIABLE_TokensLeft_87_87, &STATE_VARIABLE_TokensLeft_57_57, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_58_58);
            else
            {
              MR_Word STATE_VARIABLE_TokensLeft_92_92;
              MR_Word SubTermParse_143;

              mercury__mercury_term_parser__parse_term_5_p_0(TypeInfo_for_T_149, TypeClassInfo_for_op_table_148, &SubTermParse_143, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_92_92, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_58_58);
              if (((MR_tag((MR_Word) SubTermParse_143)) == (MR_Integer) 1))
              {
                BaseTermParse_21 = SubTermParse_143;
                STATE_VARIABLE_TokensLeft_57_57 = STATE_VARIABLE_TokensLeft_92_92;
              }
              else
              {
                MR_Word SubTerm_41 = ((MR_Word) ((MR_hl_field(0, SubTermParse_143, (MR_Integer) 0))));
                MR_Word ArgTerms_42;
                MR_Word STATE_VARIABLE_TokensLeft_94_94;
                MR_Word Var_95;

                mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_117_110_99_116_105_111_110_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(SubTerm_41, &ArgTerms_42);
                succeeded = (STATE_VARIABLE_TokensLeft_92_92 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_95 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_92_92, (MR_Integer) 0))));
                  STATE_VARIABLE_TokensLeft_94_94 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_92_92, (MR_Integer) 2))));
                  succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 24U));
                }
                if (succeeded)
                {
                  MR_Word BaseTerm_134;

                  STATE_VARIABLE_TokensLeft_57_57 = STATE_VARIABLE_TokensLeft_94_94;
                  {
                    BaseTerm_134 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BaseTerm_134, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[1]));
                    MR_hl_field(0, BaseTerm_134, 1) = ((MR_Box) (ArgTerms_42));
                    MR_hl_field(0, BaseTerm_134, 2) = ((MR_Box) (TermContext_147));
                  }
                  {
                    BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_134));
                  }
                }
                else
                {
                  MR_Word conv3_BaseTermParse_21;

                  mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(TypeClassInfo_for_op_table_148, (MR_String) "expecting \140}\' or operator", &conv3_BaseTermParse_21, STATE_VARIABLE_TokensLeft_92_92, &STATE_VARIABLE_TokensLeft_57_57, STATE_VARIABLE_PS_58_58);
                  BaseTermParse_21 = (MR_Word) (conv3_BaseTermParse_21);
                }
              }
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Atom_15 = ((MR_String) ((MR_hl_field(1, Token_9, (MR_Integer) 0))));
        MR_Word TermContext_16;
        MR_Word STATE_VARIABLE_TokensLeft_55_55;
        MR_Word Var_56;

        mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_16);
        succeeded = (STATE_VARIABLE_TokensLeft_0_51 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_56 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 0))));
          STATE_VARIABLE_TokensLeft_55_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_51, (MR_Integer) 2))));
          succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 4U));
        }
        if (succeeded)
        {
          MR_Word ArgsParse_18;

          mercury__mercury_term_parser__parse_args_5_p_0(TypeInfo_for_T_149, TypeClassInfo_for_op_table_148, &ArgsParse_18, STATE_VARIABLE_TokensLeft_55_55, &STATE_VARIABLE_TokensLeft_57_57, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_58_58);
          if (((MR_tag((MR_Word) ArgsParse_18)) == (MR_Integer) 1))
            BaseTermParse_21 = (MR_Word) (ArgsParse_18);
          else
          {
            MR_Word Args_19 = ((MR_Word) ((MR_hl_field(0, ArgsParse_18, (MR_Integer) 0))));
            MR_Word BaseTerm_20;
            MR_Word Var_59;

            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_59, 0) = ((MR_Box) (Atom_15));
            }
            {
              BaseTerm_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_20, 0) = ((MR_Box) (Var_59));
              MR_hl_field(0, BaseTerm_20, 1) = ((MR_Box) (Args_19));
              MR_hl_field(0, BaseTerm_20, 2) = ((MR_Box) (TermContext_16));
            }
            {
              BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_20));
            }
          }
        }
        else
        {
          MR_Box OpTable_24 = (MR_hl_field(0, STATE_VARIABLE_PS_0_53, (MR_Integer) 1));
          MR_Word Var_60;

          succeeded = mercury__ops__is_op_2_p_0(TypeClassInfo_for_op_table_148, OpTable_24, Atom_15);
          if (succeeded)
          {
            Var_60 = mercury__ops__loosest_op_priority_1_f_0(TypeClassInfo_for_op_table_148, OpTable_24);
            succeeded = mercury__ops__priority_ge_2_p_0(Prec_11, Var_60);
          }
          if (succeeded)
          {
            MR_Word conv1_BaseTermParse_21;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_148, Token_9, Context_10, (MR_String) "unexpected token at start of (sub)term", &conv1_BaseTermParse_21, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_57_57, STATE_VARIABLE_PS_0_53);
            BaseTermParse_21 = (MR_Word) (conv1_BaseTermParse_21);
          }
          else
          {
            MR_Word Var_63;
            MR_Word BaseTerm_106;

            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_63, 0) = ((MR_Box) (Atom_15));
            }
            {
              BaseTerm_106 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_106, 0) = ((MR_Box) (Var_63));
              MR_hl_field(0, BaseTerm_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, BaseTerm_106, 2) = ((MR_Box) (TermContext_16));
            }
            {
              BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_106));
            }
            STATE_VARIABLE_TokensLeft_57_57 = STATE_VARIABLE_TokensLeft_0_51;
          }
          STATE_VARIABLE_PS_58_58 = STATE_VARIABLE_PS_0_53;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String VarName_25 = ((MR_String) ((MR_hl_field(2, Token_9, (MR_Integer) 0))));
        MR_Word Var_26;
        MR_Word TermContext_109;
        MR_Word BaseTerm_110;

        mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_118_97_114_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_T_149, VarName_25, &Var_26, STATE_VARIABLE_PS_0_53, &STATE_VARIABLE_PS_58_58);
        mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_58_58, Context_10, &TermContext_109);
        {
          BaseTerm_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, BaseTerm_110, 0) = ((MR_Box) (Var_26));
          MR_hl_field(1, BaseTerm_110, 1) = ((MR_Box) (TermContext_109));
        }
        {
          BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_110));
        }
        STATE_VARIABLE_TokensLeft_57_57 = STATE_VARIABLE_TokensLeft_0_51;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Token_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LexerBase_27 = ((MR_Unsigned) ((MR_hl_field(3, Token_9, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word Integer_28 = ((MR_Word) ((MR_hl_field(3, Token_9, (MR_Integer) 2))));
            MR_Word LexerSignedness_29 = ((((MR_Unsigned) ((MR_hl_field(3, Token_9, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
            MR_Word LexerSize_30 = ((MR_Unsigned) ((MR_hl_field(3, Token_9, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word Base_31;
            MR_Word Signedness_32;
            MR_Word Size_33;
            MR_Word Var_66;
            MR_Word TermContext_111;
            MR_Word BaseTerm_112;

            Base_31 = mercury__mercury_term_parser__lexer_base_to_term_base_1_f_0(LexerBase_27);
            Signedness_32 = mercury__mercury_term_parser__lexer_signedness_to_term_signedness_1_f_0(LexerSignedness_29);
            Size_33 = mercury__mercury_term_parser__lexer_size_to_term_size_1_f_0(LexerSize_30);
            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_111);
            {
              Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_66, 0) = (MR_Box) ((MR_Unsigned) (Base_31));
              MR_hl_field(1, Var_66, 1) = ((MR_Box) (Integer_28));
              MR_hl_field(1, Var_66, 2) = (MR_Box) (((((MR_Unsigned) (Signedness_32) << 3)) | (MR_Unsigned) (Size_33)));
            }
            {
              BaseTerm_112 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_112, 0) = ((MR_Box) (Var_66));
              MR_hl_field(0, BaseTerm_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, BaseTerm_112, 2) = ((MR_Box) (TermContext_111));
            }
            {
              BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_112));
            }
            STATE_VARIABLE_TokensLeft_57_57 = STATE_VARIABLE_TokensLeft_0_51;
            STATE_VARIABLE_PS_58_58 = STATE_VARIABLE_PS_0_53;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float Float_34 = MR_unbox_float((MR_hl_field(3, Token_9, (MR_Integer) 1)));
            MR_Word Var_68;
            MR_Word TermContext_113;
            MR_Word BaseTerm_114;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_113);
            {
              Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_68, 1) = MR_box_float(Float_34);
            }
            {
              BaseTerm_114 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_114, 0) = ((MR_Box) (Var_68));
              MR_hl_field(0, BaseTerm_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, BaseTerm_114, 2) = ((MR_Box) (TermContext_113));
            }
            {
              BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_114));
            }
            STATE_VARIABLE_TokensLeft_57_57 = STATE_VARIABLE_TokensLeft_0_51;
            STATE_VARIABLE_PS_58_58 = STATE_VARIABLE_PS_0_53;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String String_35 = ((MR_String) ((MR_hl_field(3, Token_9, (MR_Integer) 1))));
            MR_Word Var_70;
            MR_Word TermContext_115;
            MR_Word BaseTerm_116;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_115);
            {
              Var_70 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_70, 0) = ((MR_Box) (String_35));
            }
            {
              BaseTerm_116 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_116, 0) = ((MR_Box) (Var_70));
              MR_hl_field(0, BaseTerm_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, BaseTerm_116, 2) = ((MR_Box) (TermContext_115));
            }
            {
              BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_116));
            }
            STATE_VARIABLE_TokensLeft_57_57 = STATE_VARIABLE_TokensLeft_0_51;
            STATE_VARIABLE_PS_58_58 = STATE_VARIABLE_PS_0_53;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Name_36 = ((MR_String) ((MR_hl_field(3, Token_9, (MR_Integer) 1))));
            MR_Word Var_72;
            MR_Word TermContext_117;
            MR_Word BaseTerm_118;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_53, Context_10, &TermContext_117);
            {
              Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_72, 1) = ((MR_Box) (Name_36));
            }
            {
              BaseTerm_118 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTerm_118, 0) = ((MR_Box) (Var_72));
              MR_hl_field(0, BaseTerm_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, BaseTerm_118, 2) = ((MR_Box) (TermContext_117));
            }
            {
              BaseTermParse_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BaseTermParse_21, 0) = ((MR_Box) (BaseTerm_118));
            }
            STATE_VARIABLE_TokensLeft_57_57 = STATE_VARIABLE_TokensLeft_0_51;
            STATE_VARIABLE_PS_58_58 = STATE_VARIABLE_PS_0_53;
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          {
            MR_Word conv0_BaseTermParse_21;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_148, Token_9, Context_10, (MR_String) "unexpected token at start of (sub)term", &conv0_BaseTermParse_21, STATE_VARIABLE_TokensLeft_0_51, &STATE_VARIABLE_TokensLeft_57_57, STATE_VARIABLE_PS_0_53);
            BaseTermParse_21 = (MR_Word) (conv0_BaseTermParse_21);
            STATE_VARIABLE_PS_58_58 = STATE_VARIABLE_PS_0_53;
          }
          break;
      }
      break;
  }
  succeeded = ((MR_tag((MR_Word) BaseTermParse_21)) == (MR_Integer) 0);
  if (succeeded)
  {
    BaseTermOpen_49 = ((MR_Word) ((MR_hl_field(0, BaseTermParse_21, (MR_Integer) 0))));
    succeeded = (STATE_VARIABLE_TokensLeft_57_57 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_103 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_57_57, (MR_Integer) 0))));
      STATE_VARIABLE_TokensLeft_102_102 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_57_57, (MR_Integer) 2))));
      succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 4U));
    }
  }
  if (succeeded)
    mercury__mercury_term_parser__parse_higher_order_term_rest_7_p_0(TypeInfo_for_T_149, TypeClassInfo_for_op_table_148, BaseTermOpen_49, Context_10, TermParse_12, STATE_VARIABLE_TokensLeft_102_102, STATE_VARIABLE_TokensLeft_52, STATE_VARIABLE_PS_58_58, STATE_VARIABLE_PS_54);
  else
  {
    *TermParse_12 = BaseTermParse_21;
    *STATE_VARIABLE_PS_54 = STATE_VARIABLE_PS_58_58;
    *STATE_VARIABLE_TokensLeft_52 = STATE_VARIABLE_TokensLeft_57_57;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__do_parse_term_7_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_24,
  MR_Word MinPriority_8,
  MR_Word TermKind_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_TokensLeft_0_18,
  MR_Word * STATE_VARIABLE_TokensLeft_19,
  MR_Word STATE_VARIABLE_PS_0_20,
  MR_Word * STATE_VARIABLE_PS_21)
{
  MR_Word LeftPriority_13;
  MR_Word LeftTerm0_14;
  MR_Word STATE_VARIABLE_TokensLeft_22_22;
  MR_Word STATE_VARIABLE_PS_23_23;

  mercury__mercury_term_parser__parse_left_term_8_p_0(TypeInfo_for_T_25, TypeClassInfo_for_op_table_24, MinPriority_8, TermKind_9, &LeftPriority_13, &LeftTerm0_14, STATE_VARIABLE_TokensLeft_0_18, &STATE_VARIABLE_TokensLeft_22_22, STATE_VARIABLE_PS_0_20, &STATE_VARIABLE_PS_23_23);
  if (((MR_tag((MR_Word) LeftTerm0_14)) == (MR_Integer) 1))
  {
    *Term_10 = LeftTerm0_14;
    *STATE_VARIABLE_TokensLeft_19 = STATE_VARIABLE_TokensLeft_22_22;
    *STATE_VARIABLE_PS_21 = STATE_VARIABLE_PS_23_23;
  }
  else
  {
    MR_Word LeftTerm_15 = ((MR_Word) ((MR_hl_field(0, LeftTerm0_14, (MR_Integer) 0))));

    mercury__mercury_term_parser__parse_rest_9_p_0(TypeInfo_for_T_25, TypeClassInfo_for_op_table_24, MinPriority_8, TermKind_9, LeftPriority_13, LeftTerm_15, Term_10, STATE_VARIABLE_TokensLeft_22_22, STATE_VARIABLE_TokensLeft_19, STATE_VARIABLE_PS_23_23, STATE_VARIABLE_PS_21);
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
  MR_Box OpTable_9 = (MR_hl_field(0, STATE_VARIABLE_PS_0_13, (MR_Integer) 1));
  MR_Word ArgPriority_10;
  MR_Word LeftPriority_23;
  MR_Word LeftTerm0_24;
  MR_Word STATE_VARIABLE_TokensLeft_22_28;
  MR_Word STATE_VARIABLE_PS_23_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_ArgPriority_10;

  conv1_ArgPriority_10 = func_0(((MR_Box) (TypeClassInfo_for_op_table_16)), OpTable_9);
  ArgPriority_10 = ((MR_Word) (conv1_ArgPriority_10));
  mercury__mercury_term_parser__parse_left_term_8_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, ArgPriority_10, (MR_Integer) 1, &LeftPriority_23, &LeftTerm0_24, STATE_VARIABLE_TokensLeft_0_11, &STATE_VARIABLE_TokensLeft_22_28, STATE_VARIABLE_PS_0_13, &STATE_VARIABLE_PS_23_29);
  if (((MR_tag((MR_Word) LeftTerm0_24)) == (MR_Integer) 1))
  {
    *Term_6 = LeftTerm0_24;
    *STATE_VARIABLE_TokensLeft_12 = STATE_VARIABLE_TokensLeft_22_28;
    *STATE_VARIABLE_PS_14 = STATE_VARIABLE_PS_23_29;
  }
  else
  {
    MR_Word LeftTerm_25 = ((MR_Word) ((MR_hl_field(0, LeftTerm0_24, (MR_Integer) 0))));

    mercury__mercury_term_parser__parse_rest_9_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, ArgPriority_10, (MR_Integer) 1, LeftPriority_23, LeftTerm_25, Term_6, STATE_VARIABLE_TokensLeft_22_28, STATE_VARIABLE_TokensLeft_12, STATE_VARIABLE_PS_23_29, STATE_VARIABLE_PS_14);
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
  MR_Box OpTable_9 = (MR_hl_field(0, STATE_VARIABLE_PS_0_13, (MR_Integer) 1));
  MR_Word ArgPriority_10;
  MR_Word LeftPriority_23;
  MR_Word LeftTerm0_24;
  MR_Word STATE_VARIABLE_TokensLeft_22_28;
  MR_Word STATE_VARIABLE_PS_23_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_ArgPriority_10;

  conv1_ArgPriority_10 = func_0(((MR_Box) (TypeClassInfo_for_op_table_16)), OpTable_9);
  ArgPriority_10 = ((MR_Word) (conv1_ArgPriority_10));
  mercury__mercury_term_parser__parse_left_term_8_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, ArgPriority_10, (MR_Integer) 0, &LeftPriority_23, &LeftTerm0_24, STATE_VARIABLE_TokensLeft_0_11, &STATE_VARIABLE_TokensLeft_22_28, STATE_VARIABLE_PS_0_13, &STATE_VARIABLE_PS_23_29);
  if (((MR_tag((MR_Word) LeftTerm0_24)) == (MR_Integer) 1))
  {
    *Term_6 = LeftTerm0_24;
    *STATE_VARIABLE_TokensLeft_12 = STATE_VARIABLE_TokensLeft_22_28;
    *STATE_VARIABLE_PS_14 = STATE_VARIABLE_PS_23_29;
  }
  else
  {
    MR_Word LeftTerm_25 = ((MR_Word) ((MR_hl_field(0, LeftTerm0_24, (MR_Integer) 0))));

    mercury__mercury_term_parser__parse_rest_9_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, ArgPriority_10, (MR_Integer) 0, LeftPriority_23, LeftTerm_25, Term_6, STATE_VARIABLE_TokensLeft_22_28, STATE_VARIABLE_TokensLeft_12, STATE_VARIABLE_PS_23_29, STATE_VARIABLE_PS_14);
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_higher_order_term_rest_7_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_op_table_31,
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
    MR_String FileName_35 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_22, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      TermContext_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TermContext_13, 0) = ((MR_Box) (FileName_35));
      MR_hl_field(0, TermContext_13, 1) = ((MR_Box) (Context_9));
    }
    mercury__mercury_term_parser__parse_args_5_p_0(TypeInfo_for_T_32, TypeClassInfo_for_op_table_31, &ArgsParse_14, STATE_VARIABLE_TokensLeft_0_20, &STATE_VARIABLE_TokensLeft_24_24, STATE_VARIABLE_PS_0_22, &STATE_VARIABLE_PS_25_25);
    if (((MR_tag((MR_Word) ArgsParse_14)) == (MR_Integer) 1))
    {
      *TermParse_10 = (MR_Word) (ArgsParse_14);
      *STATE_VARIABLE_TokensLeft_21 = STATE_VARIABLE_TokensLeft_24_24;
      *STATE_VARIABLE_PS_23 = STATE_VARIABLE_PS_25_25;
    }
    else
    {
      MR_Word Args_15 = ((MR_Word) ((MR_hl_field(0, ArgsParse_14, (MR_Integer) 0))));
      MR_Word ApplyTerm_16;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_TokensLeft_29_29;
      MR_Word Var_30;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (BaseTerm_8));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Args_15));
      }
      {
        ApplyTerm_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ApplyTerm_16, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[2]));
        MR_hl_field(0, ApplyTerm_16, 1) = ((MR_Box) (Var_28));
        MR_hl_field(0, ApplyTerm_16, 2) = ((MR_Box) (TermContext_13));
      }
      succeeded = (STATE_VARIABLE_TokensLeft_24_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_30 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_24_24, (MR_Integer) 0))));
        STATE_VARIABLE_TokensLeft_29_29 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_24_24, (MR_Integer) 2))));
        succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 4U));
      }
      if (succeeded)
      {
        MR_Word next_value_of_BaseTerm_8 = ApplyTerm_16;
        MR_Word next_value_of_STATE_VARIABLE_TokensLeft_0_20 = STATE_VARIABLE_TokensLeft_29_29;
        MR_Word next_value_of_STATE_VARIABLE_PS_0_22 = STATE_VARIABLE_PS_25_25;

        // direct tailcall eliminated
        ;
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
        *STATE_VARIABLE_PS_23 = STATE_VARIABLE_PS_25_25;
        *STATE_VARIABLE_TokensLeft_21 = STATE_VARIABLE_TokensLeft_24_24;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_rest_9_p_0(
  MR_Word TypeInfo_for_T_82,
  MR_Word TypeClassInfo_for_op_table_81,
  MR_Word MinPriority_10,
  MR_Word TermKind_11,
  MR_Word LeftPriority_12,
  MR_Word LeftTerm_13,
  MR_Word * Term_14,
  MR_Word STATE_VARIABLE_TokensLeft_0_41,
  MR_Word * STATE_VARIABLE_TokensLeft_42,
  MR_Word STATE_VARIABLE_PS_0_43,
  MR_Word * STATE_VARIABLE_PS_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_TokensLeft_0_41 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer Context_18;
    MR_Word OpPriority_24;
    MR_Word RightGtOrGe_26;
    MR_Word MaybeQualifier_27;
    MR_String Op_28;
    MR_Word VariableTerms_29;
    MR_Word STATE_VARIABLE_PS_47_47;
    MR_Word STATE_VARIABLE_TokensLeft_48_48;
    MR_Word Token_17;
    MR_String Op0_19;
    MR_Word LeftGtOrGe_25;
    MR_Word STATE_VARIABLE_TokensLeft_45_45;
    MR_Unsigned Var_101;
    MR_Unsigned Var_102;
    MR_Unsigned Var_107;
    MR_Unsigned Var_108;
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
      Token_17 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 0))));
      Context_18 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 1))));
      STATE_VARIABLE_TokensLeft_45_45 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 2))));
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
            Op0_19 = ((MR_String) ((MR_hl_field(1, Token_17, (MR_Integer) 0))));
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        succeeded = (strcmp(Op0_19, (MR_String) "\140") == 0);
        if (succeeded)
        {
          OpTable_20 = (MR_hl_field(0, STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
          func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_81, (MR_Integer) 0)), (MR_Integer) 11))));
          succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_81)), OpTable_20, &conv3_OpPriority0_21, &conv2_LeftGtOrGe0_22, &conv1_RightGtOrGe0_23);
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
          MR_Word STATE_VARIABLE_TokensLeft_46_46;
          MR_Word Var_49;
          MR_String Var_50;

          OpPriority_24 = OpPriority0_21;
          LeftGtOrGe_25 = LeftGtOrGe0_22;
          RightGtOrGe_26 = RightGtOrGe0_23;
          succeeded = mercury__mercury_term_parser__parse_backquoted_operator_7_p_0(TypeInfo_for_T_82, TypeClassInfo_for_op_table_81, &MaybeQualifier_27, &Op_28, &VariableTerms_29, STATE_VARIABLE_TokensLeft_45_45, &STATE_VARIABLE_TokensLeft_46_46, STATE_VARIABLE_PS_0_43, &STATE_VARIABLE_PS_47_47);
          if (succeeded)
          {
            succeeded = (STATE_VARIABLE_TokensLeft_46_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_46_46, (MR_Integer) 0))));
              STATE_VARIABLE_TokensLeft_48_48 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_46_46, (MR_Integer) 2))));
              succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_50 = ((MR_String) ((MR_hl_field(1, Var_49, (MR_Integer) 0))));
                succeeded = (strcmp(Var_50, (MR_String) "\140") == 0);
              }
            }
          }
        }
        else
        {
          MR_Box OpTable_71;
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
          MR_Box conv7_OpPriority_24;
          MR_Box conv6_LeftGtOrGe_25;
          MR_Box conv5_RightGtOrGe_26;

          Op_28 = Op0_19;
          VariableTerms_29 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeQualifier_27 = (MR_Word) ((MR_Unsigned) 0U);
          OpTable_71 = (MR_hl_field(0, STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
          func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_81, (MR_Integer) 0)), (MR_Integer) 5))));
          succeeded = func_4(((MR_Box) (TypeClassInfo_for_op_table_81)), OpTable_71, ((MR_Box) (Op_28)), &conv7_OpPriority_24, &conv6_LeftGtOrGe_25, &conv5_RightGtOrGe_26);
          if (succeeded)
          {
            OpPriority_24 = ((MR_Word) (conv7_OpPriority_24));
            LeftGtOrGe_25 = ((MR_Word) (conv6_LeftGtOrGe_25));
            RightGtOrGe_26 = ((MR_Word) (conv5_RightGtOrGe_26));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            STATE_VARIABLE_PS_47_47 = STATE_VARIABLE_PS_0_43;
            STATE_VARIABLE_TokensLeft_48_48 = STATE_VARIABLE_TokensLeft_45_45;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          Var_101 = (MR_Unsigned) (OpPriority_24);
          Var_102 = (MR_Unsigned) (MinPriority_10);
          succeeded = (Var_101 > Var_102);
          if (!(succeeded))
            succeeded = (Var_101 == Var_102);
          if (succeeded)
          {
            Var_107 = (MR_Unsigned) (OpPriority_24);
            Var_108 = (MR_Unsigned) (LeftPriority_12);
            switch (LeftGtOrGe_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                succeeded = (Var_108 >= Var_107);
                break;
              case (MR_Integer) 0:
                succeeded = (Var_108 > Var_107);
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
      MR_Word STATE_VARIABLE_TokensLeft_51_51;
      MR_Word STATE_VARIABLE_PS_52_52;

      switch (RightGtOrGe_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          RightPriority_31 = OpPriority_24;
          break;
        case (MR_Integer) 0:
          RightPriority_31 = mercury__ops__increment_priority_1_f_0(OpPriority_24);
          break;
      }
      mercury__mercury_term_parser__do_parse_term_7_p_0(TypeInfo_for_T_82, TypeClassInfo_for_op_table_81, RightPriority_31, TermKind_11, &RightTerm0_32, STATE_VARIABLE_TokensLeft_48_48, &STATE_VARIABLE_TokensLeft_51_51, STATE_VARIABLE_PS_47_47, &STATE_VARIABLE_PS_52_52);
      if (((MR_tag((MR_Word) RightTerm0_32)) == (MR_Integer) 1))
      {
        *Term_14 = RightTerm0_32;
        *STATE_VARIABLE_TokensLeft_42 = STATE_VARIABLE_TokensLeft_51_51;
        *STATE_VARIABLE_PS_44 = STATE_VARIABLE_PS_52_52;
      }
      else
      {
        MR_Word TypeInfo_90_90;
        MR_Word RightTerm_33 = ((MR_Word) ((MR_hl_field(0, RightTerm0_32, (MR_Integer) 0))));
        MR_Word TermContext_34;
        MR_Word OpTermArgs0_35;
        MR_Word OpTerm0_36;
        MR_Word OpTerm_37;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word conv8_OpTermArgs0_35;
        MR_Word next_value_of_LeftPriority_12;
        MR_Word next_value_of_LeftTerm_13;
        MR_Word next_value_of_STATE_VARIABLE_TokensLeft_0_41;
        MR_Word next_value_of_STATE_VARIABLE_PS_0_43;

        mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_52_52, Context_18, &TermContext_34);
        {
          TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_90_90, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(0, TypeInfo_90_90, 1) = ((MR_Box) (TypeInfo_for_T_82));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (RightTerm_33));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (LeftTerm_13));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
        }
        mercury__list__append_3_p_1(TypeInfo_90_90, (MR_Word) (VariableTerms_29), (MR_Word) (Var_53), &conv8_OpTermArgs0_35);
        OpTermArgs0_35 = (MR_Word) (conv8_OpTermArgs0_35);
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (Op_28));
        }
        {
          OpTerm0_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OpTerm0_36, 0) = ((MR_Box) (Var_56));
          MR_hl_field(0, OpTerm0_36, 1) = ((MR_Box) (OpTermArgs0_35));
          MR_hl_field(0, OpTerm0_36, 2) = ((MR_Box) (TermContext_34));
        }
        if ((MaybeQualifier_27 == (MR_Word) ((MR_Unsigned) 0U)))
          OpTerm_37 = OpTerm0_36;
        else
        {
          MR_Word QTerm_38 = ((MR_Word) ((MR_hl_field(1, MaybeQualifier_27, (MR_Integer) 0))));
          MR_Word Var_59;
          MR_Word Var_60;

          {
            Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_60, 0) = ((MR_Box) (OpTerm0_36));
            MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (QTerm_38));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
          }
          {
            OpTerm_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, OpTerm_37, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[0]));
            MR_hl_field(0, OpTerm_37, 1) = ((MR_Box) (Var_59));
            MR_hl_field(0, OpTerm_37, 2) = ((MR_Box) (TermContext_34));
          }
        }
        // direct tailcall eliminated
        ;
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
      MR_Word OpPriority_78;
      MR_String Op_80;
      MR_Word Var_65;
      MR_Box OpTable_72;
      MR_Word LeftGtOrGe_73;

      succeeded = (STATE_VARIABLE_TokensLeft_0_41 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_65 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 0))));
        Context_76 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 1))));
        STATE_VARIABLE_TokensLeft_64_64 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_41, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 1);
        if (succeeded)
        {
          Op_80 = ((MR_String) ((MR_hl_field(1, Var_65, (MR_Integer) 0))));
          OpTable_72 = (MR_hl_field(0, STATE_VARIABLE_PS_0_43, (MR_Integer) 1));
          succeeded = mercury__ops__lookup_postfix_op_4_p_0(TypeClassInfo_for_op_table_81, OpTable_72, Op_80, &OpPriority_78, &LeftGtOrGe_73);
          if (succeeded)
          {
            succeeded = mercury__ops__priority_ge_2_p_0(OpPriority_78, MinPriority_10);
            if (succeeded)
              succeeded = mercury__mercury_term_parser__check_priority_3_p_0(LeftGtOrGe_73, OpPriority_78, LeftPriority_12);
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word TermContext_74;
        MR_Word OpTerm_75;
        MR_Word next_value_of_LeftPriority_12;
        MR_Word next_value_of_LeftTerm_13;
        MR_Word next_value_of_STATE_VARIABLE_TokensLeft_0_41;

        mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_43, Context_76, &TermContext_74);
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_66, 0) = ((MR_Box) (Op_80));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (LeftTerm_13));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          OpTerm_75 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OpTerm_75, 0) = ((MR_Box) (Var_66));
          MR_hl_field(0, OpTerm_75, 1) = ((MR_Box) (Var_67));
          MR_hl_field(0, OpTerm_75, 2) = ((MR_Box) (TermContext_74));
        }
        // direct tailcall eliminated
        ;
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
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Term_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (LeftTerm_13));
        }
        *STATE_VARIABLE_PS_44 = STATE_VARIABLE_PS_0_43;
        *STATE_VARIABLE_TokensLeft_42 = STATE_VARIABLE_TokensLeft_0_41;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_args_5_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeClassInfo_for_op_table_34,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_19,
  MR_Word * STATE_VARIABLE_TokensLeft_20,
  MR_Word STATE_VARIABLE_PS_0_21,
  MR_Word * STATE_VARIABLE_PS_22)
{
  MR_bool succeeded;
  MR_Word Arg0_9;
  MR_Word STATE_VARIABLE_TokensLeft_23_23;
  MR_Word STATE_VARIABLE_PS_24_24;
  MR_Box OpTable_40 = (MR_hl_field(0, STATE_VARIABLE_PS_0_21, (MR_Integer) 1));
  MR_Word ArgPriority_41;
  MR_Word LeftPriority_48;
  MR_Word LeftTerm0_49;
  MR_Word STATE_VARIABLE_TokensLeft_22_53;
  MR_Word STATE_VARIABLE_PS_23_54;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_ArgPriority_41;

  conv1_ArgPriority_41 = func_0(((MR_Box) (TypeClassInfo_for_op_table_34)), OpTable_40);
  ArgPriority_41 = ((MR_Word) (conv1_ArgPriority_41));
  mercury__mercury_term_parser__parse_left_term_8_p_0(TypeInfo_for_T_35, TypeClassInfo_for_op_table_34, ArgPriority_41, (MR_Integer) 1, &LeftPriority_48, &LeftTerm0_49, STATE_VARIABLE_TokensLeft_0_19, &STATE_VARIABLE_TokensLeft_22_53, STATE_VARIABLE_PS_0_21, &STATE_VARIABLE_PS_23_54);
  if (((MR_tag((MR_Word) LeftTerm0_49)) == (MR_Integer) 1))
  {
    Arg0_9 = LeftTerm0_49;
    STATE_VARIABLE_TokensLeft_23_23 = STATE_VARIABLE_TokensLeft_22_53;
    STATE_VARIABLE_PS_24_24 = STATE_VARIABLE_PS_23_54;
  }
  else
  {
    MR_Word LeftTerm_50 = ((MR_Word) ((MR_hl_field(0, LeftTerm0_49, (MR_Integer) 0))));

    mercury__mercury_term_parser__parse_rest_9_p_0(TypeInfo_for_T_35, TypeClassInfo_for_op_table_34, ArgPriority_41, (MR_Integer) 1, LeftPriority_48, LeftTerm_50, &Arg0_9, STATE_VARIABLE_TokensLeft_22_53, &STATE_VARIABLE_TokensLeft_23_23, STATE_VARIABLE_PS_23_54, &STATE_VARIABLE_PS_24_24);
  }
  if (((MR_tag((MR_Word) Arg0_9)) == (MR_Integer) 1))
  {
    *List_6 = (MR_Word) (Arg0_9);
    *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_23_23;
    *STATE_VARIABLE_PS_22 = STATE_VARIABLE_PS_24_24;
  }
  else
  {
    MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(0, Arg0_9, (MR_Integer) 0))));

    if ((STATE_VARIABLE_TokensLeft_23_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *List_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file in argument list"));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TokensLeft_23_23));
      }
      *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_23_23;
      *STATE_VARIABLE_PS_22 = STATE_VARIABLE_PS_24_24;
    }
    else
    {
      MR_Word Token_11 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_TokensLeft_25_25 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_23_23, (MR_Integer) 2))));

      succeeded = (Token_11 == (MR_Word) ((MR_Unsigned) 32U));
      if (succeeded)
      {
        MR_Word Tail0_13;

        mercury__mercury_term_parser__parse_args_5_p_0(TypeInfo_for_T_35, TypeClassInfo_for_op_table_34, &Tail0_13, STATE_VARIABLE_TokensLeft_25_25, STATE_VARIABLE_TokensLeft_20, STATE_VARIABLE_PS_24_24, STATE_VARIABLE_PS_22);
        if (((MR_tag((MR_Word) Tail0_13)) == (MR_Integer) 1))
          *List_6 = Tail0_13;
        else
        {
          MR_Word Tail_14 = ((MR_Word) ((MR_hl_field(0, Tail0_13, (MR_Integer) 0))));
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
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_29, 0) = ((MR_Box) (Arg_10));
            MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *List_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
          }
          *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_25_25;
        }
        else
        {
          MR_String Op_55;
          MR_Box OpTable_56;

          *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_23_23;
          if ((Token_11 == (MR_Word) ((MR_Unsigned) 32U)))
          {
            Op_55 = (MR_String) ",";
            succeeded = MR_TRUE;
          }
          else
          if (((MR_tag((MR_Word) Token_11)) == (MR_Integer) 1))
          {
            Op_55 = ((MR_String) ((MR_hl_field(1, Token_11, (MR_Integer) 0))));
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            OpTable_56 = (MR_hl_field(0, STATE_VARIABLE_PS_24_24, (MR_Integer) 1));
            {
              MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 5))));
              MR_Box conv5_Var_57;
              MR_Box conv4_Var_58;
              MR_Box conv3_Var_59;

              succeeded = func_2(((MR_Box) (TypeClassInfo_for_op_table_34)), OpTable_56, ((MR_Box) (Op_55)), &conv5_Var_57, &conv4_Var_58, &conv3_Var_59);
              if (succeeded)
                succeeded = MR_TRUE;
            }
            if (!(succeeded))
            {
              MR_bool MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 8))));
              MR_Box conv8_Var_60;
              MR_Box conv7_Var_61;

              succeeded = func_6(((MR_Box) (TypeClassInfo_for_op_table_34)), OpTable_56, ((MR_Box) (Op_55)), &conv8_Var_60, &conv7_Var_61);
              if (succeeded)
                succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *List_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
              MR_hl_field(1, base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_20));
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *List_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "expected \140,\', \140)\', or operator"));
              MR_hl_field(1, base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_20));
            }
        }
        *STATE_VARIABLE_PS_22 = STATE_VARIABLE_PS_24_24;
      }
    }
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_list_5_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeClassInfo_for_op_table_19,
  MR_Word * List_6,
  MR_Word STATE_VARIABLE_TokensLeft_0_13,
  MR_Word * STATE_VARIABLE_TokensLeft_14,
  MR_Word STATE_VARIABLE_PS_0_15,
  MR_Word * STATE_VARIABLE_PS_16)
{
  MR_bool succeeded;
  MR_Word Arg0_9;
  MR_Word STATE_VARIABLE_TokensLeft_17_17;
  MR_Word STATE_VARIABLE_PS_18_18;
  MR_Box OpTable_21 = (MR_hl_field(0, STATE_VARIABLE_PS_0_15, (MR_Integer) 1));
  MR_Word ArgPriority_22;
  MR_Word LeftPriority_29;
  MR_Word LeftTerm0_30;
  MR_Word STATE_VARIABLE_TokensLeft_22_34;
  MR_Word STATE_VARIABLE_PS_23_35;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_19, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_ArgPriority_22;

  conv1_ArgPriority_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_19)), OpTable_21);
  ArgPriority_22 = ((MR_Word) (conv1_ArgPriority_22));
  mercury__mercury_term_parser__parse_left_term_8_p_0(TypeInfo_for_T_20, TypeClassInfo_for_op_table_19, ArgPriority_22, (MR_Integer) 2, &LeftPriority_29, &LeftTerm0_30, STATE_VARIABLE_TokensLeft_0_13, &STATE_VARIABLE_TokensLeft_22_34, STATE_VARIABLE_PS_0_15, &STATE_VARIABLE_PS_23_35);
  if (((MR_tag((MR_Word) LeftTerm0_30)) == (MR_Integer) 1))
  {
    Arg0_9 = LeftTerm0_30;
    STATE_VARIABLE_TokensLeft_17_17 = STATE_VARIABLE_TokensLeft_22_34;
    STATE_VARIABLE_PS_18_18 = STATE_VARIABLE_PS_23_35;
  }
  else
  {
    MR_Word LeftTerm_31 = ((MR_Word) ((MR_hl_field(0, LeftTerm0_30, (MR_Integer) 0))));

    mercury__mercury_term_parser__parse_rest_9_p_0(TypeInfo_for_T_20, TypeClassInfo_for_op_table_19, ArgPriority_22, (MR_Integer) 2, LeftPriority_29, LeftTerm_31, &Arg0_9, STATE_VARIABLE_TokensLeft_22_34, &STATE_VARIABLE_TokensLeft_17_17, STATE_VARIABLE_PS_23_35, &STATE_VARIABLE_PS_18_18);
  }
  if (((MR_tag((MR_Word) Arg0_9)) == (MR_Integer) 1))
  {
    *List_6 = Arg0_9;
    *STATE_VARIABLE_TokensLeft_14 = STATE_VARIABLE_TokensLeft_17_17;
    *STATE_VARIABLE_PS_16 = STATE_VARIABLE_PS_18_18;
  }
  else
  {
    MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(0, Arg0_9, (MR_Integer) 0))));

    if ((STATE_VARIABLE_TokensLeft_17_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *List_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file in list"));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TokensLeft_17_17));
      }
      *STATE_VARIABLE_TokensLeft_14 = STATE_VARIABLE_TokensLeft_17_17;
      *STATE_VARIABLE_PS_16 = STATE_VARIABLE_PS_18_18;
    }
    else
    {
      MR_Word Token_36 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_17_17, (MR_Integer) 0))));
      MR_Integer Context_37 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_17_17, (MR_Integer) 1))));
      MR_Word TermContext_38;
      MR_Word STATE_VARIABLE_TokensLeft_25_46 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_17_17, (MR_Integer) 2))));

      mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_18_18, Context_37, &TermContext_38);
      succeeded = (Token_36 == (MR_Word) ((MR_Unsigned) 32U));
      if (succeeded)
      {
        MR_Word Tail0_39;

        mercury__mercury_term_parser__parse_list_5_p_0(TypeInfo_for_T_20, TypeClassInfo_for_op_table_19, &Tail0_39, STATE_VARIABLE_TokensLeft_25_46, STATE_VARIABLE_TokensLeft_14, STATE_VARIABLE_PS_18_18, STATE_VARIABLE_PS_16);
        if (((MR_tag((MR_Word) Tail0_39)) == (MR_Integer) 1))
          *List_6 = Tail0_39;
        else
        {
          MR_Word Tail_40 = ((MR_Word) ((MR_hl_field(0, Tail0_39, (MR_Integer) 0))));
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word Var_51;

          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (Tail_40));
            MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (Arg_10));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_47, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[3]));
            MR_hl_field(0, Var_47, 1) = ((MR_Box) (Var_50));
            MR_hl_field(0, Var_47, 2) = ((MR_Box) (TermContext_38));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *List_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
          }
        }
      }
      else
      {
        succeeded = (Token_36 == (MR_Word) ((MR_Unsigned) 28U));
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_TokensLeft_34_53;
          MR_Word Tail0_75;

          mercury__mercury_term_parser__parse_arg_5_p_0(TypeInfo_for_T_20, TypeClassInfo_for_op_table_19, &Tail0_75, STATE_VARIABLE_TokensLeft_25_46, &STATE_VARIABLE_TokensLeft_34_53, STATE_VARIABLE_PS_18_18, STATE_VARIABLE_PS_16);
          if (((MR_tag((MR_Word) Tail0_75)) == (MR_Integer) 1))
          {
            *List_6 = Tail0_75;
            *STATE_VARIABLE_TokensLeft_14 = STATE_VARIABLE_TokensLeft_34_53;
          }
          else
          {
            MR_Word Tail_74 = ((MR_Word) ((MR_hl_field(0, Tail0_75, (MR_Integer) 0))));
            MR_Word STATE_VARIABLE_TokensLeft_36_54;
            MR_Word Var_55;

            succeeded = (STATE_VARIABLE_TokensLeft_34_53 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_34_53, (MR_Integer) 0))));
              STATE_VARIABLE_TokensLeft_36_54 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_34_53, (MR_Integer) 2))));
              succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 16U));
            }
            if (succeeded)
            {
              MR_Word Var_56;
              MR_Word Var_59;
              MR_Word Var_60;

              *STATE_VARIABLE_TokensLeft_14 = STATE_VARIABLE_TokensLeft_36_54;
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (Tail_74));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_59, 0) = ((MR_Box) (Arg_10));
                MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
              }
              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_56, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[3]));
                MR_hl_field(0, Var_56, 1) = ((MR_Box) (Var_59));
                MR_hl_field(0, Var_56, 2) = ((MR_Box) (TermContext_38));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *List_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
              }
            }
            else
            {
              MR_Word conv2_List_6;

              mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(TypeClassInfo_for_op_table_19, (MR_String) "expecting \']\' or operator", &conv2_List_6, STATE_VARIABLE_TokensLeft_34_53, STATE_VARIABLE_TokensLeft_14, *STATE_VARIABLE_PS_16);
              *List_6 = (MR_Word) (conv2_List_6);
            }
          }
        }
        else
        {
          succeeded = (Token_36 == (MR_Word) ((MR_Unsigned) 16U));
          if (succeeded)
          {
            MR_Word Var_66;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Tail_76;

            {
              Tail_76 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Tail_76, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[4]));
              MR_hl_field(0, Tail_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Tail_76, 2) = ((MR_Box) (TermContext_38));
            }
            {
              Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_70, 0) = ((MR_Box) (Tail_76));
              MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_69, 0) = ((MR_Box) (Arg_10));
              MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
            }
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_66, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[3]));
              MR_hl_field(0, Var_66, 1) = ((MR_Box) (Var_69));
              MR_hl_field(0, Var_66, 2) = ((MR_Box) (TermContext_38));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *List_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_66));
            }
            *STATE_VARIABLE_TokensLeft_14 = STATE_VARIABLE_TokensLeft_25_46;
          }
          else
          {
            MR_Word conv3_List_6;

            mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(TypeClassInfo_for_op_table_19, Token_36, Context_37, (MR_String) "expected comma, \140|\', \140]\', or operator", &conv3_List_6, STATE_VARIABLE_TokensLeft_25_46, STATE_VARIABLE_TokensLeft_14, STATE_VARIABLE_PS_18_18);
            *List_6 = (MR_Word) (conv3_List_6);
          }
          *STATE_VARIABLE_PS_16 = STATE_VARIABLE_PS_18_18;
        }
      }
    }
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_special_atom_7_p_0(
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
  MR_bool succeeded = (STATE_VARIABLE_TokensLeft_0_18 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word STATE_VARIABLE_TokensLeft_22_22;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_23 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 0))));
    STATE_VARIABLE_TokensLeft_22_22 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_18, (MR_Integer) 2))));
    succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 4U));
  }
  if (succeeded)
  {
    MR_Word Args0_14;

    mercury__mercury_term_parser__parse_args_5_p_0(TypeInfo_for_T_32, TypeClassInfo_for_op_table_31, &Args0_14, STATE_VARIABLE_TokensLeft_22_22, STATE_VARIABLE_TokensLeft_19, STATE_VARIABLE_PS_0_20, STATE_VARIABLE_PS_21);
    if (((MR_tag((MR_Word) Args0_14)) == (MR_Integer) 1))
      *Term_10 = (MR_Word) (Args0_14);
    else
    {
      MR_Word Args_15 = ((MR_Word) ((MR_hl_field(0, Args0_14, (MR_Integer) 0))));
      MR_Word Var_26;
      MR_Word Var_27;

      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_27, 0) = ((MR_Box) (Atom_8));
      }
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (Args_15));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) (TermContext_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Term_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
      }
    }
  }
  else
  {
    MR_Word Var_28;
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (Atom_8));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) (TermContext_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Term_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
    }
    *STATE_VARIABLE_PS_21 = STATE_VARIABLE_PS_0_20;
    *STATE_VARIABLE_TokensLeft_19 = STATE_VARIABLE_TokensLeft_0_18;
  }
}

static void MR_CALL 
mercury__mercury_term_parser__parse_left_term_8_p_0(
  MR_Word TypeInfo_for_T_118,
  MR_Word TypeClassInfo_for_op_table_117,
  MR_Word MinPriority_9,
  MR_Word TermKind_10,
  MR_Word * OpPriority_11,
  MR_Word * Term_12,
  MR_Word STATE_VARIABLE_TokensLeft_0_52,
  MR_Word * STATE_VARIABLE_TokensLeft_53,
  MR_Word STATE_VARIABLE_PS_0_54,
  MR_Word * STATE_VARIABLE_PS_55)
{
  MR_bool succeeded;
  MR_Box OpTable_15 = (MR_hl_field(0, STATE_VARIABLE_PS_0_54, (MR_Integer) 1));

  if ((STATE_VARIABLE_TokensLeft_0_52 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Term_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "unexpected end-of-file at start of sub-term"));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TokensLeft_0_52));
    }
    *OpPriority_11 = mercury__ops__tightest_op_priority_1_f_0(TypeClassInfo_for_op_table_117, OpTable_15);
    *STATE_VARIABLE_TokensLeft_53 = STATE_VARIABLE_TokensLeft_0_52;
    *STATE_VARIABLE_PS_55 = STATE_VARIABLE_PS_0_54;
  }
  else
  {
    MR_Word Token_16 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_52, (MR_Integer) 0))));
    MR_Integer Context_17 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_52, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_TokensLeft_56_56 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_52, (MR_Integer) 2))));
    MR_Word NewFunctor_27;
    MR_Word STATE_VARIABLE_TokensLeft_57_57;
    MR_String TokenName_18;
    MR_Word NextToken_19;

    succeeded = ((MR_tag((MR_Word) Token_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      TokenName_18 = ((MR_String) ((MR_hl_field(1, Token_16, (MR_Integer) 0))));
      succeeded = (strcmp(TokenName_18, (MR_String) "-") == 0);
      if (succeeded)
      {
        succeeded = (STATE_VARIABLE_TokensLeft_56_56 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NextToken_19 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_56_56, (MR_Integer) 0))));
          STATE_VARIABLE_TokensLeft_57_57 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_56_56, (MR_Integer) 2))));
          if (((((MR_tag((MR_Word) NextToken_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, NextToken_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
          {
            MR_Float F_28 = MR_unbox_float((MR_hl_field(3, NextToken_19, (MR_Integer) 1)));
            MR_Float NegF_29 = (((MR_Float) 0.0000000000000000) - F_28);

            {
              NewFunctor_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, NewFunctor_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, NewFunctor_27, 1) = MR_box_float(NegF_29);
            }
            succeeded = MR_TRUE;
          }
          else
          if (((((MR_tag((MR_Word) NextToken_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, NextToken_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
          {
            MR_Word LexerBase_21 = ((MR_Unsigned) ((MR_hl_field(3, NextToken_19, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word X_22 = ((MR_Word) ((MR_hl_field(3, NextToken_19, (MR_Integer) 2))));
            MR_Word LexerSize_23 = ((MR_Unsigned) ((MR_hl_field(3, NextToken_19, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word NegX_24;
            MR_Word Base_25;
            MR_Word Size_26;
            MR_Word Var_58 = ((((MR_Unsigned) ((MR_hl_field(3, NextToken_19, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
            MR_Word Var_59;

            succeeded = (Var_58 == (MR_Integer) 0);
            if (succeeded)
            {
              NegX_24 = mercury__integer__f_minus_1_f_0(X_22);
              Base_25 = ((&mercury__mercury_term_parser_vector_common_6[4 + LexerBase_21]))->mercury__mercury_term_parser__vector_common_type_6_0__vct_6_f_0;
              Size_26 = ((&mercury__mercury_term_parser_vector_common_7[5 + LexerSize_23]))->mercury__mercury_term_parser__vector_common_type_7_0__vct_7_f_0;
              Var_59 = (MR_Integer) 0;
              {
                NewFunctor_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NewFunctor_27, 0) = (MR_Box) ((MR_Unsigned) (Base_25));
                MR_hl_field(1, NewFunctor_27, 1) = ((MR_Box) (NegX_24));
                MR_hl_field(1, NewFunctor_27, 2) = (MR_Box) (((((MR_Unsigned) (Var_59) << 3)) | (MR_Unsigned) (Size_26)));
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
      MR_Word Var_61;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_OpPriority_11;

      *STATE_VARIABLE_TokensLeft_53 = STATE_VARIABLE_TokensLeft_57_57;
      mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(STATE_VARIABLE_PS_0_54, Context_17, &TermContext_30);
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_61, 0) = ((MR_Box) (NewFunctor_27));
        MR_hl_field(0, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Var_61, 2) = ((MR_Box) (TermContext_30));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Term_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
      }
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_117, (MR_Integer) 0)), (MR_Integer) 14))));
      conv1_OpPriority_11 = func_0(((MR_Box) (TypeClassInfo_for_op_table_117)), OpTable_15);
      *OpPriority_11 = ((MR_Word) (conv1_OpPriority_11));
      *STATE_VARIABLE_PS_55 = STATE_VARIABLE_PS_0_54;
    }
    else
    {
      MR_Word OpInfos_31;
      MR_String TokenName_110;
      MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_OpInfos_31;

      succeeded = ((MR_tag((MR_Word) Token_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        TokenName_110 = ((MR_String) ((MR_hl_field(1, Token_16, (MR_Integer) 0))));
        func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_117, (MR_Integer) 0)), (MR_Integer) 10))));
        succeeded = func_2(((MR_Box) (TypeClassInfo_for_op_table_117)), OpTable_15, ((MR_Box) (TokenName_110)), &conv3_OpInfos_31);
        if (succeeded)
        {
          OpInfos_31 = ((MR_Word) (conv3_OpInfos_31));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word BinOpPriority_32;
        MR_Word GeOrGtA_33;
        MR_Word GeOrGtB_34;
        MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, OpInfos_31, (MR_Integer) 1))));
        MR_Word Var_64;
        MR_Word NextToken_87;
        MR_Word Var_124;
        MR_Unsigned Var_129;
        MR_Unsigned Var_130;

        succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BinOpPriority_32 = ((MR_Word) ((MR_hl_field(1, Var_63, (MR_Integer) 0))));
          GeOrGtA_33 = ((((MR_Unsigned) ((MR_hl_field(1, Var_63, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          GeOrGtB_34 = ((MR_Unsigned) ((MR_hl_field(1, Var_63, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_129 = (MR_Unsigned) (BinOpPriority_32);
          Var_130 = (MR_Unsigned) (MinPriority_9);
          succeeded = (Var_129 > Var_130);
          if (!(succeeded))
            succeeded = (Var_129 == Var_130);
          if (succeeded)
          {
            succeeded = (STATE_VARIABLE_TokensLeft_56_56 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NextToken_87 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_56_56, (MR_Integer) 0))));
              Var_64 = (MR_Integer) 1;
              mercury__mercury_term_parser__could_start_term_2_p_0(NextToken_87, &Var_124);
              succeeded = (Var_64 == Var_124);
              if (succeeded)
                succeeded = (NextToken_87 != (MR_Word) ((MR_Unsigned) 4U));
            }
          }
        }
        if (succeeded)
        {
          MR_Word PrioA_37;
          MR_Word PrioB_38;
          MR_Word ResultA_39;
          MR_Word STATE_VARIABLE_TokensLeft_65_65;
          MR_Word STATE_VARIABLE_PS_66_66;

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
          mercury__mercury_term_parser__do_parse_term_7_p_0(TypeInfo_for_T_118, TypeClassInfo_for_op_table_117, PrioA_37, TermKind_10, &ResultA_39, STATE_VARIABLE_TokensLeft_56_56, &STATE_VARIABLE_TokensLeft_65_65, STATE_VARIABLE_PS_0_54, &STATE_VARIABLE_PS_66_66);
          if (((MR_tag((MR_Word) ResultA_39)) == (MR_Integer) 1))
          {
            *Term_12 = ResultA_39;
            *STATE_VARIABLE_TokensLeft_53 = STATE_VARIABLE_TokensLeft_65_65;
            *STATE_VARIABLE_PS_55 = STATE_VARIABLE_PS_66_66;
          }
          else
          {
            MR_Word TermA_40 = ((MR_Word) ((MR_hl_field(0, ResultA_39, (MR_Integer) 0))));
            MR_Word ResultB_41;

            mercury__mercury_term_parser__do_parse_term_7_p_0(TypeInfo_for_T_118, TypeClassInfo_for_op_table_117, PrioB_38, TermKind_10, &ResultB_41, STATE_VARIABLE_TokensLeft_65_65, STATE_VARIABLE_TokensLeft_53, STATE_VARIABLE_PS_66_66, STATE_VARIABLE_PS_55);
            if (((MR_tag((MR_Word) ResultB_41)) == (MR_Integer) 1))
              *Term_12 = ResultB_41;
            else
            {
              MR_Word TermB_42 = ((MR_Word) ((MR_hl_field(0, ResultB_41, (MR_Integer) 0))));
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word TermContext_88;

              mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*STATE_VARIABLE_PS_55, Context_17, &TermContext_88);
              {
                Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_70, 0) = ((MR_Box) (TokenName_110));
              }
              {
                Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_72, 0) = ((MR_Box) (TermB_42));
                MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_71, 0) = ((MR_Box) (TermA_40));
                MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
              }
              {
                Var_69 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_69, 0) = ((MR_Box) (Var_70));
                MR_hl_field(0, Var_69, 1) = ((MR_Box) (Var_71));
                MR_hl_field(0, Var_69, 2) = ((MR_Box) (TermContext_88));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Term_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
              }
            }
          }
        }
        else
        {
          MR_Word UnOpPriority_47;
          MR_Word GeOrGtA_104;
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, OpInfos_31, (MR_Integer) 2))));
          MR_Word Var_75;
          MR_Word NextToken_93;
          MR_Word Var_125;

          succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            UnOpPriority_47 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 0))));
            GeOrGtA_104 = ((MR_Unsigned) ((MR_hl_field(1, Var_74, (MR_Integer) 1))) & (MR_Integer) 1);
            succeeded = mercury__ops__priority_ge_2_p_0(UnOpPriority_47, MinPriority_9);
            if (succeeded)
            {
              succeeded = (STATE_VARIABLE_TokensLeft_56_56 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                NextToken_93 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_56_56, (MR_Integer) 0))));
                Var_75 = (MR_Integer) 1;
                mercury__mercury_term_parser__could_start_term_2_p_0(NextToken_93, &Var_125);
                succeeded = (Var_75 == Var_125);
                if (succeeded)
                  succeeded = (NextToken_93 != (MR_Word) ((MR_Unsigned) 4U));
              }
            }
          }
          if (succeeded)
          {
            MR_Word PrioA_99;
            MR_Word ResultA_100;

            *OpPriority_11 = UnOpPriority_47;
            switch (GeOrGtA_104) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                PrioA_99 = *OpPriority_11;
                break;
              case (MR_Integer) 0:
                PrioA_99 = mercury__ops__increment_priority_1_f_0(*OpPriority_11);
                break;
            }
            mercury__mercury_term_parser__do_parse_term_7_p_0(TypeInfo_for_T_118, TypeClassInfo_for_op_table_117, PrioA_99, TermKind_10, &ResultA_100, STATE_VARIABLE_TokensLeft_56_56, STATE_VARIABLE_TokensLeft_53, STATE_VARIABLE_PS_0_54, STATE_VARIABLE_PS_55);
            if (((MR_tag((MR_Word) ResultA_100)) == (MR_Integer) 1))
              *Term_12 = ResultA_100;
            else
            {
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word TermContext_94;
              MR_Word TermA_95 = ((MR_Word) ((MR_hl_field(0, ResultA_100, (MR_Integer) 0))));

              mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(*STATE_VARIABLE_PS_55, Context_17, &TermContext_94);
              {
                Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_79, 0) = ((MR_Box) (TokenName_110));
              }
              {
                Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_80, 0) = ((MR_Box) (TermA_95));
                MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_78, 0) = ((MR_Box) (Var_79));
                MR_hl_field(0, Var_78, 1) = ((MR_Box) (Var_80));
                MR_hl_field(0, Var_78, 2) = ((MR_Box) (TermContext_94));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Term_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
              }
            }
          }
          else
          {
            mercury__mercury_term_parser__parse_simple_term_8_p_0(TypeInfo_for_T_118, TypeClassInfo_for_op_table_117, Token_16, Context_17, MinPriority_9, Term_12, STATE_VARIABLE_TokensLeft_56_56, STATE_VARIABLE_TokensLeft_53, STATE_VARIABLE_PS_0_54, STATE_VARIABLE_PS_55);
            *OpPriority_11 = mercury__ops__tightest_op_priority_1_f_0(TypeClassInfo_for_op_table_117, OpTable_15);
          }
        }
      }
      else
      {
        mercury__mercury_term_parser__parse_simple_term_8_p_0(TypeInfo_for_T_118, TypeClassInfo_for_op_table_117, Token_16, Context_17, MinPriority_9, Term_12, STATE_VARIABLE_TokensLeft_56_56, STATE_VARIABLE_TokensLeft_53, STATE_VARIABLE_PS_0_54, STATE_VARIABLE_PS_55);
        *OpPriority_11 = mercury__ops__tightest_op_priority_1_f_0(TypeClassInfo_for_op_table_117, OpTable_15);
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
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
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
    MR_Word VarSet0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2))));
    MR_Word VarSet_9;
    MR_String Var_31;
    MR_Box Var_32;
    MR_Word Var_34;

    mercury__varset__new_var_3_p_0(TypeInfo_for_T_20, Var_6, VarSet0_8, &VarSet_9);
    Var_31 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0))));
    Var_32 = (MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
    Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ParserState_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 1) = Var_32;
      MR_hl_field(0, base, 2) = ((MR_Box) (VarSet_9));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
    }
  }
  else
  {
    MR_Word Names0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, (MR_Integer) 3))));
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
      MR_Word VarSet0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, (MR_Integer) 2))));
      MR_Word VarSet_19;
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, VarSet0_18, (MR_Integer) 0))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, VarSet0_18, (MR_Integer) 1))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, VarSet0_18, (MR_Integer) 2))));
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Integer Var_49;
      MR_Integer Var_50 = (MR_Integer) (Var_41);
      MR_String Var_53;
      MR_Box Var_54;

      Var_49 = (MR_Integer) ((MR_Unsigned) Var_50 + (MR_Unsigned) 1);
      *Var_6 = (MR_Word) (Var_49);
      Var_44 = (MR_Word) (Var_49);
      {
        TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_20, TypeInfo_27_27, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *Var_6, ((MR_Box) (VarName_5)), Var_42, &Var_45);
      {
        VarSet_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarSet_19, 0) = ((MR_Box) (Var_44));
        MR_hl_field(0, VarSet_19, 1) = ((MR_Box) (Var_45));
        MR_hl_field(0, VarSet_19, 2) = ((MR_Box) (Var_43));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_27_27, ((MR_Box) (VarName_5)), ((MR_Box) (*Var_6)), Names0_10, &Names_12);
      Var_53 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, (MR_Integer) 0))));
      Var_54 = (MR_hl_field(0, STATE_VARIABLE_ParserState_0_13, (MR_Integer) 1));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ParserState_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_53));
        MR_hl_field(0, base, 1) = Var_54;
        MR_hl_field(0, base, 2) = ((MR_Box) (VarSet_19));
        MR_hl_field(0, base, 3) = ((MR_Box) (Names_12));
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
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_11 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_10 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      succeeded = (strcmp(Var_10, (MR_String) ",") == 0);
      if (succeeded)
      {
        succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LeftTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 1))));
          succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RightTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 0))));
            Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 1))));
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
    AddrArgTerms0_16 = (MR_Word *) (&(MR_hl_field(1, *ArgTerms_4, (MR_Integer) 1)));
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
      Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
      Var_11 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_10 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
        succeeded = (strcmp(Var_10, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LeftTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 0))));
            Var_12 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 1))));
            succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RightTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 0))));
              Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 1))));
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
      AddrArgTerms0_16 = (MR_Word *) (&(MR_hl_field(1, ArgTerms_4, (MR_Integer) 1)));
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
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_116_111_107_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_op_table_25,
  MR_Word Token_8,
  MR_Integer Context_9,
  MR_String UsualMessage_10,
  MR_Word * Error_11,
  MR_Word STATE_VARIABLE_TokensLeft_0_21,
  MR_Word * STATE_VARIABLE_TokensLeft_22,
  MR_Word PS_13)
{
  MR_bool succeeded;
  MR_String Op_14;
  MR_Box OpTable_15;

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_TokensLeft_22 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Token_8));
    MR_hl_field(1, base, 1) = ((MR_Box) (Context_9));
    MR_hl_field(1, base, 2) = ((MR_Box) (STATE_VARIABLE_TokensLeft_0_21));
  }
  if ((Token_8 == (MR_Word) ((MR_Unsigned) 32U)))
  {
    Op_14 = (MR_String) ",";
    succeeded = MR_TRUE;
  }
  else
  if (((MR_tag((MR_Word) Token_8)) == (MR_Integer) 1))
  {
    Op_14 = ((MR_String) ((MR_hl_field(1, Token_8, (MR_Integer) 0))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    OpTable_15 = (MR_hl_field(0, PS_13, (MR_Integer) 1));
    {
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv3_Var_16;
      MR_Box conv2_Var_17;
      MR_Box conv1_Var_18;

      succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_25)), OpTable_15, ((MR_Box) (Op_14)), &conv3_Var_16, &conv2_Var_17, &conv1_Var_18);
      if (succeeded)
        succeeded = MR_TRUE;
    }
    if (!(succeeded))
    {
      MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 8))));
      MR_Box conv6_Var_19;
      MR_Box conv5_Var_20;

      succeeded = func_4(((MR_Box) (TypeClassInfo_for_op_table_25)), OpTable_15, ((MR_Box) (Op_14)), &conv6_Var_19, &conv5_Var_20);
      if (succeeded)
        succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Error_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
      MR_hl_field(1, base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_22));
    }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Error_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (UsualMessage_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_22));
    }
}

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_117_110_101_120_112_101_99_116_101_100_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_op_table_15,
  MR_String UsualMessage_6,
  MR_Word * Error_7,
  MR_Word STATE_VARIABLE_TokensLeft_0_12,
  MR_Word * STATE_VARIABLE_TokensLeft_13,
  MR_Word PS_9)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_TokensLeft_0_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Error_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (UsualMessage_6));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TokensLeft_0_12));
    }
    *STATE_VARIABLE_TokensLeft_13 = STATE_VARIABLE_TokensLeft_0_12;
  }
  else
  {
    MR_Word Token_10 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_12, (MR_Integer) 0))));
    MR_String Op_18;
    MR_Box OpTable_19;

    *STATE_VARIABLE_TokensLeft_13 = STATE_VARIABLE_TokensLeft_0_12;
    if ((Token_10 == (MR_Word) ((MR_Unsigned) 32U)))
    {
      Op_18 = (MR_String) ",";
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Token_10)) == (MR_Integer) 1))
    {
      Op_18 = ((MR_String) ((MR_hl_field(1, Token_10, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      OpTable_19 = (MR_hl_field(0, PS_9, (MR_Integer) 1));
      {
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_15, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv3_Var_20;
        MR_Box conv2_Var_21;
        MR_Box conv1_Var_22;

        succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_15)), OpTable_19, ((MR_Box) (Op_18)), &conv3_Var_20, &conv2_Var_21, &conv1_Var_22);
        if (succeeded)
          succeeded = MR_TRUE;
      }
      if (!(succeeded))
      {
        MR_bool MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_15, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Box conv6_Var_23;
        MR_Box conv5_Var_24;

        succeeded = func_4(((MR_Box) (TypeClassInfo_for_op_table_15)), OpTable_19, ((MR_Box) (Op_18)), &conv6_Var_23, &conv5_Var_24);
        if (succeeded)
          succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Error_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "operator precedence error"));
        MR_hl_field(1, base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_13));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Error_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (UsualMessage_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (*STATE_VARIABLE_TokensLeft_13));
      }
  }
}

static void MR_CALL 
mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_114_95_103_101_116_95_116_101_114_109_95_99_111_110_116_101_120_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word ParserState_4,
  MR_Integer TokenContext_5,
  MR_Word * TermContext_6)
{
  MR_String FileName_7 = ((MR_String) ((MR_hl_field(0, ParserState_4, (MR_Integer) 0))));

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
  MR_Word STATE_VARIABLE_TokensLeft_23_23;
  MR_String FileName_33;

  if (succeeded)
  {
    Token_13 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 0))));
    Context_14 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 1))));
    STATE_VARIABLE_TokensLeft_23_23 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_19, (MR_Integer) 2))));
    FileName_33 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, (MR_Integer) 0))));
    {
      TermContext_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TermContext_15, 0) = ((MR_Box) (FileName_33));
      MR_hl_field(0, TermContext_15, 1) = ((MR_Box) (Context_14));
    }
    if (((MR_tag((MR_Word) Token_13)) == (MR_Integer) 1))
    {
      MR_String OpName0_18 = ((MR_String) ((MR_hl_field(1, Token_13, (MR_Integer) 0))));

      *VariableTerms_10 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__mercury_term_parser__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_98_97_99_107_113_117_111_116_101_100_95_111_112_101_114_97_116_111_114_95_113_117_97_108_105_102_105_101_114_95_95_91_49_93_95_48_9_p_0(TypeClassInfo_for_op_table_28, (MR_Word) ((MR_Unsigned) 0U), MaybeQualifier_8, TermContext_15, OpName0_18, OpName_9, STATE_VARIABLE_TokensLeft_23_23, STATE_VARIABLE_TokensLeft_20, STATE_VARIABLE_PS_0_21, STATE_VARIABLE_PS_22);
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Token_13)) == (MR_Integer) 2))
    {
      MR_String VariableOp_16 = ((MR_String) ((MR_hl_field(2, Token_13, (MR_Integer) 0))));
      MR_Word Var_17;
      MR_Word Var_25;

      *MaybeQualifier_8 = (MR_Word) ((MR_Unsigned) 0U);
      *OpName_9 = (MR_String) "";
      succeeded = (strcmp(VariableOp_16, (MR_String) "_") == 0);
      if (succeeded)
      {
        MR_Word VarSet0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, (MR_Integer) 2))));
        MR_Word VarSet_38;
        MR_String Var_54;
        MR_Box Var_55;
        MR_Word Var_57;

        mercury__varset__new_var_3_p_0(TypeInfo_for_T_29, &Var_17, VarSet0_37, &VarSet_38);
        Var_54 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, (MR_Integer) 0))));
        Var_55 = (MR_hl_field(0, STATE_VARIABLE_PS_0_21, (MR_Integer) 1));
        Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_PS_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
          MR_hl_field(0, base, 1) = Var_55;
          MR_hl_field(0, base, 2) = ((MR_Box) (VarSet_38));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_57));
        }
      }
      else
      {
        MR_Word Names0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, (MR_Integer) 3))));
        MR_Word Var0_40;
        MR_Word TypeInfo_24_47;
        MR_Box conv0_Var0_40;

        {
          TypeInfo_24_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_24_47, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_24_47, 1) = ((MR_Box) (TypeInfo_for_T_29));
        }
        succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_24_47, Names0_39, ((MR_Box) (VariableOp_16)), &conv0_Var0_40);
        if (succeeded)
        {
          Var0_40 = ((MR_Word) (conv0_Var0_40));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_17 = Var0_40;
          *STATE_VARIABLE_PS_22 = STATE_VARIABLE_PS_0_21;
        }
        else
        {
          MR_Word TypeInfo_27_50;
          MR_Word Names_41;
          MR_Word VarSet0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, (MR_Integer) 2))));
          MR_Word VarSet_44;
          MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, VarSet0_43, (MR_Integer) 0))));
          MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, VarSet0_43, (MR_Integer) 1))));
          MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, VarSet0_43, (MR_Integer) 2))));
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Integer Var_72;
          MR_Integer Var_73 = (MR_Integer) (Var_64);
          MR_String Var_76;
          MR_Box Var_77;

          Var_72 = (MR_Integer) ((MR_Unsigned) Var_73 + (MR_Unsigned) 1);
          Var_17 = (MR_Word) (Var_72);
          Var_67 = (MR_Word) (Var_72);
          {
            TypeInfo_27_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_27_50, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_27_50, 1) = ((MR_Box) (TypeInfo_for_T_29));
          }
          mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_29, TypeInfo_27_50, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, ((MR_Box) (VariableOp_16)), Var_65, &Var_68);
          {
            VarSet_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, VarSet_44, 0) = ((MR_Box) (Var_67));
            MR_hl_field(0, VarSet_44, 1) = ((MR_Box) (Var_68));
            MR_hl_field(0, VarSet_44, 2) = ((MR_Box) (Var_66));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_27_50, ((MR_Box) (VariableOp_16)), ((MR_Box) (Var_17)), Names0_39, &Names_41);
          Var_76 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_21, (MR_Integer) 0))));
          Var_77 = (MR_hl_field(0, STATE_VARIABLE_PS_0_21, (MR_Integer) 1));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_PS_22 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_76));
            MR_hl_field(0, base, 1) = Var_77;
            MR_hl_field(0, base, 2) = ((MR_Box) (VarSet_44));
            MR_hl_field(0, base, 3) = ((MR_Box) (Names_41));
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
      *STATE_VARIABLE_TokensLeft_20 = STATE_VARIABLE_TokensLeft_23_23;
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
    MR_Word STATE_VARIABLE_TokensLeft_33_33;
    MR_Word STATE_VARIABLE_TokensLeft_30_30;
    MR_Word Var_31;
    MR_String Var_32;
    MR_Word Var_34;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_31 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_26, (MR_Integer) 0))));
      SepContext_17 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_26, (MR_Integer) 1))));
      STATE_VARIABLE_TokensLeft_30_30 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_0_26, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_32 = ((MR_String) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
        succeeded = (strcmp(Var_32, (MR_String) ".") == 0);
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_TokensLeft_30_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_34 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_30_30, (MR_Integer) 0))));
            NameContext_19 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_30_30, (MR_Integer) 1))));
            STATE_VARIABLE_TokensLeft_33_33 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TokensLeft_30_30, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 1);
            if (succeeded)
            {
              OpName1_18 = ((MR_String) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
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
      MR_String FileName_52;
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
        MR_Word QTerm0_22 = ((MR_Word) ((MR_hl_field(1, MaybeQualifier0_10, (MR_Integer) 0))));
        MR_Word SepCtxt_23;
        MR_Word QTerm01_24;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_String FileName_48 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_28, (MR_Integer) 0))));

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
          MR_hl_field(0, QTerm01_24, 0) = ((MR_Box) (&mercury__mercury_term_parser_scalar_common_5[0]));
          MR_hl_field(0, QTerm01_24, 1) = ((MR_Box) (Var_39));
          MR_hl_field(0, QTerm01_24, 2) = ((MR_Box) (SepCtxt_23));
        }
        {
          MaybeQualifier01_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeQualifier01_21, 0) = ((MR_Box) (QTerm01_24));
        }
      }
      FileName_52 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PS_0_28, (MR_Integer) 0))));
      {
        OpCtxt1_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OpCtxt1_25, 0) = ((MR_Box) (FileName_52));
        MR_hl_field(0, OpCtxt1_25, 1) = ((MR_Box) (NameContext_19));
      }
      // direct tailcall eliminated
      ;
      next_value_of_MaybeQualifier0_10 = MaybeQualifier01_21;
      next_value_of_OpCtxt0_12 = OpCtxt1_25;
      next_value_of_OpName0_13 = OpName1_18;
      next_value_of_STATE_VARIABLE_TokensLeft_0_26 = STATE_VARIABLE_TokensLeft_33_33;
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
mercury__mercury_term_parser__check_for_errors_5_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word Parse_6,
  MR_Word VarSet_7,
  MR_Word Tokens_8,
  MR_Word LeftOverTokens_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Parse_6)) == (MR_Integer) 1))
  {
    MR_String ErrorMessage_11 = ((MR_String) ((MR_hl_field(1, Parse_6, (MR_Integer) 0))));
    MR_Word ErrorTokens_12 = ((MR_Word) ((MR_hl_field(1, Parse_6, (MR_Integer) 1))));
    MR_String Message_15;
    MR_Integer LineNum_16;
    MR_String BadTokenMessage_13;
    MR_Integer BadTokenLineNum_14;

    succeeded = mercury__mercury_term_parser__check_for_bad_token_3_p_0(Tokens_8, &BadTokenMessage_13, &BadTokenLineNum_14);
    if (succeeded)
    {
      Message_15 = BadTokenMessage_13;
      LineNum_16 = BadTokenLineNum_14;
    }
    else
    if ((ErrorTokens_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((Tokens_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__error_1_p_0((MR_String) "token_nil in check_for_errors");
          return;
        }
      else
        LineNum_16 = ((MR_Integer) ((MR_hl_field(1, Tokens_8, (MR_Integer) 1))));
      mercury__string__append_3_p_2((MR_String) "Syntax error: ", ErrorMessage_11, &Message_15);
    }
    else
    {
      MR_Word ErrorTok_17 = ((MR_Word) ((MR_hl_field(1, ErrorTokens_12, (MR_Integer) 0))));
      MR_String TokString_20;
      MR_String Var_53;
      MR_String Var_54;

      LineNum_16 = ((MR_Integer) ((MR_hl_field(1, ErrorTokens_12, (MR_Integer) 1))));
      mercury__mercury_term_lexer__token_to_string_2_p_0(ErrorTok_17, &TokString_20);
      mercury__string__append_3_p_2((MR_String) ": ", ErrorMessage_11, &Var_53);
      mercury__string__append_3_p_2(TokString_20, Var_53, &Var_54);
      mercury__string__append_3_p_2((MR_String) "Syntax error at ", Var_54, &Message_15);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Message_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (LineNum_16));
    }
  }
  else
  {
    MR_Word Term_23 = ((MR_Word) ((MR_hl_field(0, Parse_6, (MR_Integer) 0))));
    MR_String Message_47;
    MR_Integer LineNum_48;

    succeeded = mercury__mercury_term_parser__check_for_bad_token_3_p_0(Tokens_8, &Message_47, &LineNum_48);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Message_47));
        MR_hl_field(1, base, 1) = ((MR_Box) (LineNum_48));
      }
    else
    if ((LeftOverTokens_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (VarSet_7));
        MR_hl_field(2, base, 1) = ((MR_Box) (Term_23));
      }
    else
    {
      MR_Word Token_24 = ((MR_Word) ((MR_hl_field(1, LeftOverTokens_9, (MR_Integer) 0))));
      MR_String Message_41;
      MR_Integer LineNum_42 = ((MR_Integer) ((MR_hl_field(1, LeftOverTokens_9, (MR_Integer) 1))));
      MR_String TokString_43;

      mercury__mercury_term_lexer__token_to_string_2_p_0(Token_24, &TokString_43);
      mercury__string__append_3_p_2((MR_String) "Syntax error: unexpected ", TokString_43, &Message_41);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Message_41));
        MR_hl_field(1, base, 1) = ((MR_Box) (LineNum_42));
      }
    }
  }
}

static MR_bool MR_CALL 
mercury__mercury_term_parser__check_for_bad_token_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Message_2,
  MR_Integer * LineNum_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Token_4;
    MR_Integer LineNum0_5;
    MR_Word Tokens_6;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Token_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      LineNum0_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Tokens_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
      switch (MR_tag((MR_Word) Token_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Tokens_6;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__1_1 = Tokens_6;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Token_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 7:
              {
                MR_Word next_value_of_HeadVar__1_1 = Tokens_6;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Char Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(3, Token_4, (MR_Integer) 1)));
                MR_Integer Code_12;
                MR_String Decimal_13;
                MR_String Hex_14;
                MR_String Var_45;
                MR_String Var_47;
                MR_String Var_48;

{
#define MR_PROC_LABEL mercury__mercury_term_parser__check_for_bad_token_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_11 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Code_12  = Int;
}
                mercury__string__int_to_base_string_3_p_0(Code_12, (MR_Integer) 10, &Decimal_13);
                mercury__string__int_to_base_string_3_p_0(Code_12, (MR_Integer) 16, &Hex_14);
                mercury__string__append_3_p_2(Decimal_13, (MR_String) ") in input", &Var_45);
                mercury__string__append_3_p_2((MR_String) " (", Var_45, &Var_47);
                mercury__string__append_3_p_2(Hex_14, Var_47, &Var_48);
                mercury__string__append_3_p_2((MR_String) "Syntax error: Illegal character 0x", Var_48, Message_2);
                *LineNum_3 = LineNum0_5;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String ErrorMessage_15 = ((MR_String) ((MR_hl_field(3, Token_4, (MR_Integer) 1))));

                mercury__string__append_3_p_2((MR_String) "Syntax error: ", ErrorMessage_15, Message_2);
                *LineNum_3 = LineNum0_5;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word IO_Error_9 = ((MR_Word) ((MR_hl_field(3, Token_4, (MR_Integer) 1))));
                MR_String IO_ErrorMessage_10;

                mercury__io__error_message_2_p_0(IO_Error_9, &IO_ErrorMessage_10);
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

	MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_parse_result_1);
	MR_register_type_ctor_info(&mercury__mercury_term_parser__mercury_term_parser__type_ctor_info_parser_state_2);
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
