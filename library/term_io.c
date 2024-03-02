/*
** Automatically generated from `term_io.m'
** by the Mercury compiler,
** version rotd-2024-03-02
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


// :- module term_io.
// :- implementation.

/*
INIT mercury__term_io__init
ENDINIT
*/

#include "term_io.mih"


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
#include "mercury_term_parser.mih"
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




static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0;

static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1;

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_ordinal_ordered_adjacent_to_graphic_token_0[2];

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0[2];

static const MR_Integer mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0[2];

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_anon_var_info_0_0;

static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_anon_var_info_0_1[1];

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_anon_var_info_0_1;

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_anon_var_info_0_0[1];

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_anon_var_info_0_1[1];

static const MR_DuPtagLayout mercury__term_io__term_io__du_ptag_ordered_anon_var_info_0[2];

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_name_ordered_anon_var_info_0[2];

static const MR_Integer mercury__term_io__term_io__functor_number_map_anon_var_info_0[2];

static void MR_CALL 
mercury__term_io__format_later_list_elements_9_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word TypeClassInfo_for_op_table_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_Anon_0_25,
  MR_Word * STATE_VARIABLE_Anon_26,
  MR_Box STATE_VARIABLE_State_0_27,
  MR_Box * STATE_VARIABLE_State_28);

static void MR_CALL 
mercury__term_io__format_term_arg_9_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word TypeClassInfo_for_writer_24,
  MR_Box Stream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19,
  MR_Box STATE_VARIABLE_State_0_20,
  MR_Box * STATE_VARIABLE_State_21);

static void MR_CALL 
mercury__term_io__format_atom_term_prio_anon_vars_11_p_0(
  MR_Word TypeInfo_for_T_186,
  MR_Word TypeClassInfo_for_op_table_184,
  MR_Word TypeClassInfo_for_writer_185,
  MR_Box Stream_12,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_Anon_0_51,
  MR_Word * STATE_VARIABLE_Anon_52,
  MR_Box STATE_VARIABLE_State_0_53,
  MR_Box * STATE_VARIABLE_State_54);

static void MR_CALL 
mercury__term_io__format_term_later_args_9_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word TypeClassInfo_for_op_table_39,
  MR_Word TypeClassInfo_for_writer_40,
  MR_Box Stream_1,
  MR_Box OpTable_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_Anon_0_6,
  MR_Word * STATE_VARIABLE_Anon_7,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9);

static void MR_CALL 
mercury__term_io__format_atom_term_prio_anon_vars_std_11_p_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word TypeClassInfo_for_op_table_44,
  MR_Word TypeClassInfo_for_writer_45,
  MR_Box Stream_12,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_Anon_0_24,
  MR_Word * STATE_VARIABLE_Anon_25,
  MR_Box STATE_VARIABLE_State_0_26,
  MR_Box * STATE_VARIABLE_State_27);

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_53_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Box Var_18,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_108_97_116_101_114_95_108_105_115_116_95_101_108_101_109_101_110_116_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word TypeClassInfo_for_op_table_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Word Stream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_Anon_0_25,
  MR_Word * STATE_VARIABLE_Anon_26);

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_114_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word TypeClassInfo_for_writer_24,
  MR_Word Stream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19);

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeInfo_for_T_186,
  MR_Word TypeClassInfo_for_op_table_184,
  MR_Word TypeClassInfo_for_writer_185,
  MR_Word Stream_12,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_Anon_0_51,
  MR_Word * STATE_VARIABLE_Anon_52);

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_108_97_116_101_114_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word TypeClassInfo_for_op_table_39,
  MR_Word TypeClassInfo_for_writer_40,
  MR_Word Stream_1,
  MR_Box OpTable_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_Anon_0_6,
  MR_Word * STATE_VARIABLE_Anon_7);

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word TypeClassInfo_for_op_table_44,
  MR_Word TypeClassInfo_for_writer_45,
  MR_Word Stream_12,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_Anon_0_24,
  MR_Word * STATE_VARIABLE_Anon_25);

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10);

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_108_97_116_101_114_95_108_105_115_116_95_101_108_101_109_101_110_116_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word TypeClassInfo_for_op_table_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_Anon_0_25,
  MR_Word * STATE_VARIABLE_Anon_26,
  MR_Word STATE_VARIABLE_State_0_27,
  MR_Word * STATE_VARIABLE_State_28);

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_114_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word TypeClassInfo_for_writer_24,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19,
  MR_Word STATE_VARIABLE_State_0_20,
  MR_Word * STATE_VARIABLE_State_21);

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeInfo_for_T_186,
  MR_Word TypeClassInfo_for_op_table_184,
  MR_Word TypeClassInfo_for_writer_185,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_Anon_0_51,
  MR_Word * STATE_VARIABLE_Anon_52,
  MR_Word STATE_VARIABLE_State_0_53,
  MR_Word * STATE_VARIABLE_State_54);

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_108_97_116_101_114_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word TypeClassInfo_for_op_table_39,
  MR_Word TypeClassInfo_for_writer_40,
  MR_Box OpTable_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_Anon_0_6,
  MR_Word * STATE_VARIABLE_Anon_7,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9);

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word TypeClassInfo_for_op_table_44,
  MR_Word TypeClassInfo_for_writer_45,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_Anon_0_24,
  MR_Word * STATE_VARIABLE_Anon_25,
  MR_Word STATE_VARIABLE_State_0_26,
  MR_Word * STATE_VARIABLE_State_27);

static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho97_3_p_in__string_0(
  MR_String HeadVar__2_5,
  MR_Integer HeadVar__3_6);

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_51_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_io____Unify____anon_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_io____Compare____anon_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__term_io_scalar_common_1[2][3];

static /* final */ const MR_Box mercury__term_io_scalar_common_2[2][4];

static /* final */ const MR_Box mercury__term_io_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__term_io_scalar_common_4[1][2];

static /* final */ const MR_Box mercury__term_io_scalar_common_5[1][1];

static /* final */ const MR_Integer mercury__term_io_scalar_common_6[1][3];


struct mercury__term_io__vector_common_type_7_0_s {
  const MR_String mercury__term_io__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__term_io__vector_common_type_7_0_s mercury__term_io_vector_common_7[46];

struct mercury__term_io__vector_common_type_8_0_s {
  const MR_String mercury__term_io__vector_common_type_8_0__vct_8_f_0;
  const MR_Integer mercury__term_io__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct mercury__term_io__vector_common_type_8_0_s mercury__term_io_vector_common_8[12];

struct mercury__term_io__vector_common_type_9_0_s {
  const MR_Integer mercury__term_io__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct mercury__term_io__vector_common_type_9_0_s mercury__term_io_vector_common_9[4];



static /* final */ const MR_Box mercury__term_io_scalar_common_1[2][3] = {
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
};

static /* final */ const MR_Box mercury__term_io_scalar_common_2[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_1[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_1[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Integer mercury__term_io_scalar_common_6[1][3] = {
  /* row   0 */
  {
    (MR_Unsigned) 4227923967U,
    (MR_Unsigned) 4160749569U,
    (MR_Unsigned) 2013265921U
  },
};


static /* final */ const struct mercury__term_io__vector_common_type_7_0_s mercury__term_io_vector_common_7[46] = {
  /* row   0 */   { (MR_String) "!" },
  /* row   1 */   { (MR_String) ";" },
  /* row   2 */   { (MR_String) "[]" },
  /* row   3 */   { (MR_String) "{}" },
  /* row   4 */   { (MR_String) "" },
  /* row   5 */   { (MR_String) "i8" },
  /* row   6 */   { (MR_String) "i16" },
  /* row   7 */   { (MR_String) "i32" },
  /* row   8 */   { (MR_String) "i64" },
  /* row   9 */   { (MR_String) "u" },
  /* row  10 */   { (MR_String) "u8" },
  /* row  11 */   { (MR_String) "u16" },
  /* row  12 */   { (MR_String) "u32" },
  /* row  13 */   { (MR_String) "u64" },
  /* row  14 */   { (MR_String) "!" },
  /* row  15 */   { (MR_String) ";" },
  /* row  16 */   { (MR_String) "[]" },
  /* row  17 */   { (MR_String) "{}" },
  /* row  18 */   { (MR_String) "" },
  /* row  19 */   { (MR_String) "i8" },
  /* row  20 */   { (MR_String) "i16" },
  /* row  21 */   { (MR_String) "i32" },
  /* row  22 */   { (MR_String) "i64" },
  /* row  23 */   { (MR_String) "u" },
  /* row  24 */   { (MR_String) "u8" },
  /* row  25 */   { (MR_String) "u16" },
  /* row  26 */   { (MR_String) "u32" },
  /* row  27 */   { (MR_String) "u64" },
  /* row  28 */   { (MR_String) "!" },
  /* row  29 */   { (MR_String) ";" },
  /* row  30 */   { (MR_String) "[]" },
  /* row  31 */   { (MR_String) "{}" },
  /* row  32 */   { (MR_String) "" },
  /* row  33 */   { (MR_String) "i8" },
  /* row  34 */   { (MR_String) "i16" },
  /* row  35 */   { (MR_String) "i32" },
  /* row  36 */   { (MR_String) "i64" },
  /* row  37 */   { (MR_String) "u" },
  /* row  38 */   { (MR_String) "u8" },
  /* row  39 */   { (MR_String) "u16" },
  /* row  40 */   { (MR_String) "u32" },
  /* row  41 */   { (MR_String) "u64" },
  /* row  42 */   { (MR_String) "0b" },
  /* row  43 */   { (MR_String) "0o" },
  /* row  44 */   { (MR_String) "" },
  /* row  45 */   { (MR_String) "0x" },
};

static /* final */ const struct mercury__term_io__vector_common_type_8_0_s mercury__term_io_vector_common_8[12] = {
  /* row   0 */
  {
    (MR_String) "0b",
    (MR_Integer) 2
  },
  /* row   1 */
  {
    (MR_String) "0o",
    (MR_Integer) 8
  },
  /* row   2 */
  {
    (MR_String) "",
    (MR_Integer) 10
  },
  /* row   3 */
  {
    (MR_String) "0x",
    (MR_Integer) 16
  },
  /* row   4 */
  {
    (MR_String) "0b",
    (MR_Integer) 2
  },
  /* row   5 */
  {
    (MR_String) "0o",
    (MR_Integer) 8
  },
  /* row   6 */
  {
    (MR_String) "",
    (MR_Integer) 10
  },
  /* row   7 */
  {
    (MR_String) "0x",
    (MR_Integer) 16
  },
  /* row   8 */
  {
    (MR_String) "0b",
    (MR_Integer) 2
  },
  /* row   9 */
  {
    (MR_String) "0o",
    (MR_Integer) 8
  },
  /* row  10 */
  {
    (MR_String) "",
    (MR_Integer) 10
  },
  /* row  11 */
  {
    (MR_String) "0x",
    (MR_Integer) 16
  },
};

static /* final */ const struct mercury__term_io__vector_common_type_9_0_s mercury__term_io_vector_common_9[4] = {
  /* row   0 */   { (MR_Integer) 2 },
  /* row   1 */   { (MR_Integer) 8 },
  /* row   2 */   { (MR_Integer) 10 },
  /* row   3 */   { (MR_Integer) 16 },
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


static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0 = {
  (MR_String) "maybe_adjacent_to_graphic_token",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1 = {
  (MR_String) "not_adjacent_to_graphic_token",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_ordinal_ordered_adjacent_to_graphic_token_0[2] = {
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0[2] = {
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

static const MR_Integer mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_adjacent_to_graphic_token_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001)),
  ((MR_Box) (mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001)),
  (MR_String) "term_io",
  (MR_String) "adjacent_to_graphic_token",
  { mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0 },
  { mercury__term_io__term_io__enum_ordinal_ordered_adjacent_to_graphic_token_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0,

};

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_anon_var_info_0_0 = {
  (MR_String) "anon_var_to_int",
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

static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_anon_var_info_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0) };

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_anon_var_info_0_1 = {
  (MR_String) "anon_occur_order",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__term_io__term_io__field_types_anon_var_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_anon_var_info_0_0[1] = { &mercury__term_io__term_io__du_functor_desc_anon_var_info_0_0 };

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_anon_var_info_0_1[1] = { &mercury__term_io__term_io__du_functor_desc_anon_var_info_0_1 };

static const MR_DuPtagLayout mercury__term_io__term_io__du_ptag_ordered_anon_var_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_io__term_io__du_stag_ordered_anon_var_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_io__term_io__du_stag_ordered_anon_var_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_name_ordered_anon_var_info_0[2] = {
  &mercury__term_io__term_io__du_functor_desc_anon_var_info_0_1,
  &mercury__term_io__term_io__du_functor_desc_anon_var_info_0_0
};

static const MR_Integer mercury__term_io__term_io__functor_number_map_anon_var_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_anon_var_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_io____Unify____anon_var_info_0_0_10001)),
  ((MR_Box) (mercury__term_io____Compare____anon_var_info_0_0_10001)),
  (MR_String) "term_io",
  (MR_String) "anon_var_info",
  { mercury__term_io__term_io__du_name_ordered_anon_var_info_0 },
  { mercury__term_io__term_io__du_ptag_ordered_anon_var_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__term_io__term_io__functor_number_map_anon_var_info_0,

};

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word Stream_5,
  MR_Word Const_6)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_11, Stream_5, Const_6, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word Const_6,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_11, Const_6, (MR_Integer) 1, STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word Stream_5,
  MR_String Str_6)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_11, Stream_5, Str_6, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_String Str_6,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_11, Str_6, (MR_Integer) 1, STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word Stream_5,
  MR_Char C_6)
{
  MR_String Var_10;
  MR_String Var_15;
  MR_String Var_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_State_9;

  mercury__term_io__string_is_escaped_char_2_p_0(C_6, &Var_15);
  mercury__string__append_3_p_2(Var_15, (MR_String) "\'", &Var_18);
  mercury__string__append_3_p_2((MR_String) "\'", Var_18, &Var_10);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_11, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_writer_11)), ((MR_Box) (Stream_5)), ((MR_Box) (Var_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Char C_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  MR_String Var_10;
  MR_String Var_15;
  MR_String Var_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_State_9;

  mercury__term_io__string_is_escaped_char_2_p_0(C_6, &Var_15);
  mercury__string__append_3_p_2(Var_15, (MR_String) "\'", &Var_18);
  mercury__string__append_3_p_2((MR_String) "\'", Var_18, &Var_10);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_11, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_writer_11)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Var_10)), ((MR_Box) (STATE_VARIABLE_State_0_8)), &conv1_STATE_VARIABLE_State_9);
  *STATE_VARIABLE_State_9 = ((MR_Word) (conv1_STATE_VARIABLE_State_9));
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word Stream_5,
  MR_String Str_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_STATE_VARIABLE_State_11_11;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_State_9;

  func_0(((MR_Box) (TypeClassInfo_for_writer_14)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_11_11);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_14, Stream_5, Str_6);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_14)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_14,
  MR_String Str_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  MR_Word STATE_VARIABLE_State_11_11;
  MR_Word STATE_VARIABLE_State_12_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_STATE_VARIABLE_State_11_11;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_State_9;

  func_0(((MR_Box) (TypeClassInfo_for_writer_14)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (STATE_VARIABLE_State_0_8)), &conv1_STATE_VARIABLE_State_11_11);
  STATE_VARIABLE_State_11_11 = ((MR_Word) (conv1_STATE_VARIABLE_State_11_11));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_14, Str_6, STATE_VARIABLE_State_11_11, &STATE_VARIABLE_State_12_12);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_14)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (STATE_VARIABLE_State_12_12)), &conv3_STATE_VARIABLE_State_9);
  *STATE_VARIABLE_State_9 = ((MR_Word) (conv3_STATE_VARIABLE_State_9));
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Word Stream_5,
  MR_String Str_6)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_10, Stream_5, Str_6, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_String Str_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_10, Str_6, (MR_Integer) 1, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Word Stream_5,
  MR_Char C_6)
{
  MR_String Var_11;
  MR_String Var_15;
  MR_String Var_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_State_9;

  mercury__term_io__string_is_escaped_char_2_p_0(C_6, &Var_15);
  mercury__string__append_3_p_2(Var_15, (MR_String) "\'", &Var_18);
  mercury__string__append_3_p_2((MR_String) "\'", Var_18, &Var_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_writer_10)), ((MR_Box) (Stream_5)), ((MR_Box) (Var_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Char C_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  MR_String Var_11;
  MR_String Var_15;
  MR_String Var_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_State_9;

  mercury__term_io__string_is_escaped_char_2_p_0(C_6, &Var_15);
  mercury__string__append_3_p_2(Var_15, (MR_String) "\'", &Var_18);
  mercury__string__append_3_p_2((MR_String) "\'", Var_18, &Var_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_writer_10)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Var_11)), ((MR_Box) (STATE_VARIABLE_State_0_8)), &conv1_STATE_VARIABLE_State_9);
  *STATE_VARIABLE_State_9 = ((MR_Word) (conv1_STATE_VARIABLE_State_9));
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Word Stream_5,
  MR_String Str_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_STATE_VARIABLE_State_11_12;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_State_9;

  func_0(((MR_Box) (TypeClassInfo_for_writer_10)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_11_12);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_10, Stream_5, Str_6);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_10)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_String Str_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  MR_Word STATE_VARIABLE_State_11_12;
  MR_Word STATE_VARIABLE_State_12_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_STATE_VARIABLE_State_11_12;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_State_9;

  func_0(((MR_Box) (TypeClassInfo_for_writer_10)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (STATE_VARIABLE_State_0_8)), &conv1_STATE_VARIABLE_State_11_12);
  STATE_VARIABLE_State_11_12 = ((MR_Word) (conv1_STATE_VARIABLE_State_11_12));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_10, Str_6, STATE_VARIABLE_State_11_12, &STATE_VARIABLE_State_12_13);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_10)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (STATE_VARIABLE_State_12_13)), &conv3_STATE_VARIABLE_State_9);
  *STATE_VARIABLE_State_9 = ((MR_Word) (conv3_STATE_VARIABLE_State_9));
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Word Stream_5,
  MR_Char Char_6)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_10, Stream_5, Char_6);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Char Char_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_10, Char_6, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Word Stream_5,
  MR_String Str_6)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_10, Stream_5, Str_6);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_String Str_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_10, Str_6, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word Stream_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  MR_Word Var_19;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_19;
  MR_Word Var_16;
  MR_Word Var_17;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_19 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_19 = ((MR_Word) (conv1_Var_19));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__term_io_scalar_common_4[0]), TypeClassInfo_for_writer_13, Stream_6, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_19, VarSet_7, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  MR_Word Var_19;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_19;
  MR_Word Var_16;
  MR_Word Var_17;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_19 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_19 = ((MR_Word) (conv1_Var_19));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__term_io_scalar_common_4[0]), TypeClassInfo_for_writer_13, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_19, VarSet_7, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_110_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word Stream_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  MR_Word Var_19;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_19;
  MR_Word Var_16;
  MR_Word Var_17;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_19 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_19 = ((MR_Word) (conv1_Var_19));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__term_io_scalar_common_4[0]), TypeClassInfo_for_writer_13, Stream_6, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_19, VarSet_7, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_110_108_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  MR_Word Var_19;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_19;
  MR_Word Var_16;
  MR_Word Var_17;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_19 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_19 = ((MR_Word) (conv1_Var_19));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__term_io_scalar_common_4[0]), TypeClassInfo_for_writer_13, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_19, VarSet_7, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word Stream_6,
  MR_Word VarSet_7,
  MR_Word Var_8)
{
  MR_Word Var_16;
  MR_Word Var_17;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__term_io_scalar_common_4[0]), TypeClassInfo_for_writer_13, Stream_6, ((MR_Box) ((MR_Integer) 0)), Var_8, VarSet_7, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word VarSet_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  MR_Word Var_16;
  MR_Word Var_17;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__term_io_scalar_common_4[0]), TypeClassInfo_for_writer_13, ((MR_Box) ((MR_Integer) 0)), Var_8, VarSet_7, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word Stream_6,
  MR_String Str_7,
  MR_Word AGT_8)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_12, Stream_6, Str_7, AGT_8);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_String Str_7,
  MR_Word AGT_8,
  MR_Word STATE_VARIABLE_State_0_10,
  MR_Word * STATE_VARIABLE_State_11)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_12, Str_7, AGT_8, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_110_108_95_119_105_116_104_95_111_112_95_116_97_98_108_101_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word Stream_7,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Term_10)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_22;
  MR_Word Var_19;
  MR_Word Var_20;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_State_13;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_16)), OpTable_8);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_16, TypeClassInfo_for_writer_17, Stream_7, OpTable_8, Term_10, Var_22, VarSet_9, &Var_19, (MR_Word) ((MR_Unsigned) 0U), &Var_20);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_17)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_13);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_110_108_95_119_105_116_104_95_111_112_95_116_97_98_108_101_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13)
{
  MR_Word STATE_VARIABLE_State_14_14;
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_22;
  MR_Word Var_19;
  MR_Word Var_20;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_State_13;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_16)), OpTable_8);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_16, TypeClassInfo_for_writer_17, OpTable_8, Term_10, Var_22, VarSet_9, &Var_19, (MR_Word) ((MR_Unsigned) 0U), &Var_20, STATE_VARIABLE_State_0_12, &STATE_VARIABLE_State_14_14);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_17)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) (STATE_VARIABLE_State_14_14)), &conv3_STATE_VARIABLE_State_13);
  *STATE_VARIABLE_State_13 = ((MR_Word) (conv3_STATE_VARIABLE_State_13));
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_119_105_116_104_95_111_112_95_116_97_98_108_101_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Word Stream_7,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Term_10)
{
  MR_Word Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_20;
  MR_Word Var_12;
  MR_Word Var_13;

  conv1_Var_20 = func_0(((MR_Box) (TypeClassInfo_for_op_table_17)), OpTable_8);
  Var_20 = ((MR_Word) (conv1_Var_20));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_19, TypeClassInfo_for_op_table_17, TypeClassInfo_for_writer_18, Stream_7, OpTable_8, Term_10, Var_20, VarSet_9, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_13);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_119_105_116_104_95_111_112_95_116_97_98_108_101_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  MR_Word Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_20;
  MR_Word Var_12;
  MR_Word Var_13;

  conv1_Var_20 = func_0(((MR_Box) (TypeClassInfo_for_op_table_17)), OpTable_8);
  Var_20 = ((MR_Word) (conv1_Var_20));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_19, TypeClassInfo_for_op_table_17, TypeClassInfo_for_writer_18, OpTable_8, Term_10, Var_20, VarSet_9, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_13, STATE_VARIABLE_State_0_14, STATE_VARIABLE_State_15);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_119_105_116_104_95_111_112_95_116_97_98_108_101_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Word Stream_7,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Var_10)
{
  MR_Word Var_12;
  MR_Word Var_13;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_19, TypeClassInfo_for_op_table_17, TypeClassInfo_for_writer_18, Stream_7, OpTable_8, Var_10, VarSet_9, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_13);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_119_105_116_104_95_111_112_95_116_97_98_108_101_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  MR_Word Var_12;
  MR_Word Var_13;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_19, TypeClassInfo_for_op_table_17, TypeClassInfo_for_writer_18, OpTable_8, Var_10, VarSet_9, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_13, STATE_VARIABLE_State_0_14, STATE_VARIABLE_State_15);
}

void MR_CALL 
mercury__term_io____Compare____anon_var_info_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer Var_12 = (MR_Integer) (Var_11);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 == Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__term_io____Unify____anon_var_info_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Integer Var_10;
    MR_Integer Var_11;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      Var_10 = (MR_Integer) (ArgX1_5);
      Var_11 = (MR_Integer) (ArgY1_6);
      succeeded = (Var_10 == Var_11);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0(
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
mercury__term_io____Unify____adjacent_to_graphic_token_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_1(
  MR_Char * Char_1,
  MR_String Str_2)
{
  MR_bool succeeded;
  MR_Word Chars_14;
  MR_Word Var_20;
  MR_Char Var_21;
  MR_Integer Var_22;

{
#define MR_PROC_LABEL mercury__term_io__encode_escaped_char_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str = Str_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_22  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(Str_2, Var_22, (MR_Word) ((MR_Unsigned) 0U), &Chars_14);
  succeeded = (Chars_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_21 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars_14, (MR_Integer) 0)));
    Var_20 = ((MR_Word) ((MR_hl_field(1, Chars_14, (MR_Integer) 1))));
    if ((Var_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Char_1 = Var_21;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Char EscapedChar_15;
      MR_Word Var_19;

      succeeded = (Var_21 == (MR_Char) 92);
      if (succeeded)
      {
        EscapedChar_15 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_20, (MR_Integer) 0)));
        Var_19 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
        succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          switch (EscapedChar_15) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Char) 34:
              {
                *Char_1 = (MR_Char) 34;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 39:
              {
                *Char_1 = (MR_Char) 39;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 92:
              {
                *Char_1 = (MR_Char) 92;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 97:
              {
                *Char_1 = (MR_Char) 7;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 98:
              {
                *Char_1 = (MR_Char) 8;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 102:
              {
                *Char_1 = (MR_Char) 12;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 110:
              {
                *Char_1 = (MR_Char) 10;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 114:
              {
                *Char_1 = (MR_Char) 13;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 116:
              {
                *Char_1 = (MR_Char) 9;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 118:
              {
                *Char_1 = (MR_Char) 11;
                succeeded = MR_TRUE;
              }
              break;
          }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_0(
  MR_Char Char_1,
  MR_String * Str_2)
{
  MR_bool succeeded;
  MR_Char EscapeChar_5;

  switch (Char_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 7:
      {
        EscapeChar_5 = (MR_Char) 97;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 8:
      {
        EscapeChar_5 = (MR_Char) 98;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 9:
      {
        EscapeChar_5 = (MR_Char) 116;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 10:
      {
        EscapeChar_5 = (MR_Char) 110;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 11:
      {
        EscapeChar_5 = (MR_Char) 118;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 12:
      {
        EscapeChar_5 = (MR_Char) 102;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 13:
      {
        EscapeChar_5 = (MR_Char) 114;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 34:
      {
        EscapeChar_5 = (MR_Char) 34;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 39:
      {
        EscapeChar_5 = (MR_Char) 39;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 92:
      {
        EscapeChar_5 = (MR_Char) 92;
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    MR_Word Var_6;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_8, 0) = ((MR_Box) (MR_Word) (EscapeChar_5));
      MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
      MR_hl_field(1, Var_6, 1) = ((MR_Box) (Var_8));
    }
    mercury__string__from_char_list_2_p_0(Var_6, Str_2);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_10;
    MR_Word Var_11;

    succeeded = mercury__char__is_alnum_1_p_0(Char_1);
    if (!(succeeded))
    {
      if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
        if ((((mercury__term_io_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
      if (!(succeeded))
      {
        MR_Integer Var_20;

{
#define MR_PROC_LABEL mercury__term_io__encode_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_20  = Int;
}
        succeeded = (Var_20 >= (MR_Integer) 160);
      }
    }
    if (succeeded)
    {
      Var_11 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_10, 0) = ((MR_Box) (MR_Word) (Char_1));
        MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_11));
      }
      mercury__string__from_char_list_2_p_0(Var_10, Str_2);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_io__is_mercury_punctuation_char_1_p_0(
  MR_Char HeadVar__1_1)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
    if ((((mercury__term_io_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_String MR_CALL 
mercury__term_io__integer_base_prefix_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&mercury__term_io_vector_common_7[42 + HeadVar__1_1]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__term_io__integer_base_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2 = ((&mercury__term_io_vector_common_9[0 + HeadVar__1_1]))->mercury__term_io__vector_common_type_9_0__vct_9_f_0;

  return HeadVar__2_2;
}

void MR_CALL 
mercury__term_io__format_quoted_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Box Stream_5,
  MR_Char C_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  MR_String Var_10;
  MR_String Var_15;
  MR_String Var_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  mercury__term_io__string_is_escaped_char_2_p_0(C_6, &Var_15);
  mercury__string__append_3_p_2(Var_15, (MR_String) "\'", &Var_18);
  mercury__string__append_3_p_2((MR_String) "\'", Var_18, &Var_10);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_11, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_writer_11)), Stream_5, ((MR_Box) (Var_10)), STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__quote_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Box Stream_5,
  MR_Char C_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  MR_String Var_11;
  MR_String Var_15;
  MR_String Var_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  mercury__term_io__string_is_escaped_char_2_p_0(C_6, &Var_15);
  mercury__string__append_3_p_2(Var_15, (MR_String) "\'", &Var_18);
  mercury__string__append_3_p_2((MR_String) "\'", Var_18, &Var_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_writer_10)), Stream_5, ((MR_Box) (Var_11)), STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__write_quoted_char_4_p_0(
  MR_Word OutStream_5,
  MR_Char C_6)
{
  MR_String Var_11;
  MR_String Var_15;
  MR_String Var_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_IO_9;

  mercury__term_io__string_is_escaped_char_2_p_0(C_6, &Var_15);
  mercury__string__append_3_p_2(Var_15, (MR_String) "\'", &Var_18);
  mercury__string__append_3_p_2((MR_String) "\'", Var_18, &Var_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[1]))), ((MR_Box) (OutStream_5)), ((MR_Box) (Var_11)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_9);
}

void MR_CALL 
mercury__term_io__quote_char_3_p_0(
  MR_Char C_4)
{
  mercury__term_io__write_quoted_char_3_p_0(C_4);
}

void MR_CALL 
mercury__term_io__write_quoted_char_3_p_0(
  MR_Char C_4)
{
  MR_Word OutStream_6;
  MR_Box Var_11;
  MR_String Var_12;
  MR_String Var_16;
  MR_String Var_19;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__term_io__write_quoted_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_11  = (MR_Box) Stream;
}
  OutStream_6 = (MR_Word) (Var_11);
  mercury__term_io__string_is_escaped_char_2_p_0(C_4, &Var_16);
  mercury__string__append_3_p_2(Var_16, (MR_String) "\'", &Var_19);
  mercury__string__append_3_p_2((MR_String) "\'", Var_19, &Var_12);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[1]))), ((MR_Box) (OutStream_6)), ((MR_Box) (Var_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_8);
}

MR_String MR_CALL 
mercury__term_io__quoted_char_to_string_1_f_0(
  MR_Char C_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_7;
  MR_String Var_10;

  mercury__term_io__string_is_escaped_char_2_p_0(C_3, &Var_7);
  mercury__string__append_3_p_2(Var_7, (MR_String) "\'", &Var_10);
  mercury__string__append_3_p_2((MR_String) "\'", Var_10, &HeadVar__2_2);
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__term_io__quoted_char_1_f_0(
  MR_Char C_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_7;
  MR_String Var_10;

  mercury__term_io__string_is_escaped_char_2_p_0(C_3, &Var_7);
  mercury__string__append_3_p_2(Var_7, (MR_String) "\'", &Var_10);
  mercury__string__append_3_p_2((MR_String) "\'", Var_10, &HeadVar__2_2);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__term_io__string_is_escaped_char_2_p_1(
  MR_Char * Char_1,
  MR_String String_2)
{
  MR_bool succeeded;
  MR_Word Chars_10;
  MR_Word Var_32;
  MR_Char Var_33;
  MR_Integer Var_36;

{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str = String_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_36  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(String_2, Var_36, (MR_Word) ((MR_Unsigned) 0U), &Chars_10);
  succeeded = (Chars_10 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_33 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars_10, (MR_Integer) 0)));
    Var_32 = ((MR_Word) ((MR_hl_field(1, Chars_10, (MR_Integer) 1))));
    if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Char_1 = Var_33;
      succeeded = mercury__char__is_alnum_1_p_0(*Char_1);
      if (!(succeeded))
      {
        if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) *Char_1 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
          if ((((mercury__term_io_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) *Char_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) *Char_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        else
          succeeded = MR_FALSE;
        if (!(succeeded))
        {
          MR_Integer Var_38;

{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_Char Character;
	MR_Integer Int;

	Character = *Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_38  = Int;
}
          succeeded = (Var_38 >= (MR_Integer) 160);
        }
      }
      if (!(succeeded))
        switch (*Char_1) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Char) 7:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 8:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 9:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 10:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 11:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 12:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 13:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 34:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 39:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 92:
            succeeded = MR_TRUE;
            break;
        }
    }
    else
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
      MR_Char Var_35 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_32, (MR_Integer) 0)));

      succeeded = (Var_33 == (MR_Char) 92);
      if (succeeded)
      {
        if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
          switch (Var_35) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Char) 34:
              {
                *Char_1 = (MR_Char) 34;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 39:
              {
                *Char_1 = (MR_Char) 39;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 92:
              {
                *Char_1 = (MR_Char) 92;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 97:
              {
                *Char_1 = (MR_Char) 7;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 98:
              {
                *Char_1 = (MR_Char) 8;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 102:
              {
                *Char_1 = (MR_Char) 12;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 110:
              {
                *Char_1 = (MR_Char) 10;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 114:
              {
                *Char_1 = (MR_Char) 13;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 116:
              {
                *Char_1 = (MR_Char) 9;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Char) 118:
              {
                *Char_1 = (MR_Char) 11;
                succeeded = MR_TRUE;
              }
              break;
          }
        else
        {
          MR_String NumString_17;
          MR_Integer Int_18;
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));
          MR_Word Var_27;
          MR_Integer Var_31;

          succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              mercury__string__from_char_list_2_p_0(Var_32, &NumString_17);
              Var_31 = (MR_Integer) 8;
              succeeded = mercury__string__base_string_to_int_3_p_0(Var_31, NumString_17, &Int_18);
              if (succeeded)
              {
{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int = Int_18 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Char_1  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
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

void MR_CALL 
mercury__term_io__write_escaped_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Box Stream_5,
  MR_Char Char_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  mercury__term_io__format_escaped_char_4_p_0(TypeClassInfo_for_writer_10, Stream_5, Char_6, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__write_escaped_char_3_p_0(
  MR_Char Char_4)
{
  MR_Word Stream_6;
  MR_Box Var_11;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_11  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Var_11);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), Stream_6, Char_4);
}

MR_String MR_CALL 
mercury__term_io__escaped_char_to_string_1_f_0(
  MR_Char Char_3)
{
  MR_String String_4;

  mercury__term_io__string_is_escaped_char_2_p_0(Char_3, &String_4);
  return String_4;
}

MR_String MR_CALL 
mercury__term_io__escaped_char_1_f_0(
  MR_Char Char_3)
{
  MR_String HeadVar__2_2;

  mercury__term_io__string_is_escaped_char_2_p_0(Char_3, &HeadVar__2_2);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__term_io__string_is_escaped_char_2_p_0(
  MR_Char Char_1,
  MR_String * String_2)
{
  MR_bool succeeded;
  MR_Char QuoteChar_5;

  switch (Char_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 7:
      {
        QuoteChar_5 = (MR_Char) 97;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 8:
      {
        QuoteChar_5 = (MR_Char) 98;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 9:
      {
        QuoteChar_5 = (MR_Char) 116;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 10:
      {
        QuoteChar_5 = (MR_Char) 110;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 11:
      {
        QuoteChar_5 = (MR_Char) 118;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 12:
      {
        QuoteChar_5 = (MR_Char) 102;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 13:
      {
        QuoteChar_5 = (MR_Char) 114;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 34:
      {
        QuoteChar_5 = (MR_Char) 34;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 39:
      {
        QuoteChar_5 = (MR_Char) 39;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 92:
      {
        QuoteChar_5 = (MR_Char) 92;
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    MR_String Var_7;

    mercury__string__char_to_string_2_p_0(QuoteChar_5, &Var_7);
    mercury__string__append_3_p_2((MR_String) "\\", Var_7, String_2);
  }
  else
  {
    succeeded = mercury__char__is_alnum_1_p_0(Char_1);
    if (!(succeeded))
    {
      if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
        if ((((mercury__term_io_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
      if (!(succeeded))
      {
        MR_Integer Var_32;

{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_32  = Int;
}
        succeeded = (Var_32 >= (MR_Integer) 160);
      }
    }
    if (succeeded)
      mercury__string__char_to_string_2_p_0(Char_1, String_2);
    else
      *String_2 = mercury__term_io__mercury_escape_char_1_f_0(Char_1);
  }
}

void MR_CALL 
mercury__term_io__format_quoted_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_5,
  MR_String Str_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  MR_Box STATE_VARIABLE_State_11_11;
  MR_Box STATE_VARIABLE_State_12_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_writer_14)), Stream_5, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_11_11);
  mercury__term_io__format_escaped_string_4_p_0(TypeClassInfo_for_writer_14, Stream_5, Str_6, STATE_VARIABLE_State_11_11, &STATE_VARIABLE_State_12_12);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_writer_14)), Stream_5, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__quote_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Box Stream_5,
  MR_String Str_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  MR_Box STATE_VARIABLE_State_11_12;
  MR_Box STATE_VARIABLE_State_12_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_writer_10)), Stream_5, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_11_12);
  mercury__term_io__format_escaped_string_4_p_0(TypeClassInfo_for_writer_10, Stream_5, Str_6, STATE_VARIABLE_State_11_12, &STATE_VARIABLE_State_12_13);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_writer_10)), Stream_5, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_12_13, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__write_quoted_string_4_p_0(
  MR_Word OutStream_5,
  MR_String Str_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_STATE_VARIABLE_State_11_12;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_State_9;

  func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[1]))), ((MR_Box) (OutStream_5)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_11_12);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_5, Str_6);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[1]))), ((MR_Box) (OutStream_5)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__write_quoted_string_3_p_0(
  MR_String Str_4)
{
  MR_Word OutStream_6;
  MR_Box Var_11;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_State_11_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__term_io__write_quoted_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_11  = (MR_Box) Stream;
}
  OutStream_6 = (MR_Word) (Var_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[1]))), ((MR_Box) (OutStream_6)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_11_13);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_6, Str_4);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[1]))), ((MR_Box) (OutStream_6)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_8);
}

void MR_CALL 
mercury__term_io__quote_string_3_p_0(
  MR_String Str_4)
{
  MR_Word OutStream_6;
  MR_Box Var_11;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_State_11_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__term_io__quote_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_11  = (MR_Box) Stream;
}
  OutStream_6 = (MR_Word) (Var_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[1]))), ((MR_Box) (OutStream_6)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_11_13);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_6, Str_4);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[1]))), ((MR_Box) (OutStream_6)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_8);
}

MR_String MR_CALL 
mercury__term_io__quoted_string_1_f_0(
  MR_String Str0_3)
{
  MR_String Str_4;
  MR_Word State_6;
  MR_Word STATE_VARIABLE_State_11_11;
  MR_Word STATE_VARIABLE_State_12_12;
  MR_Word Var_14;
  MR_Word Var_15;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_State_11_11;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_State_6;

  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U)))), &conv1_STATE_VARIABLE_State_11_11);
  STATE_VARIABLE_State_11_11 = ((MR_Word) (conv1_STATE_VARIABLE_State_11_11));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_3[0]), Str0_3, STATE_VARIABLE_State_11_11, &STATE_VARIABLE_State_12_12);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (STATE_VARIABLE_State_12_12)), &conv3_State_6);
  State_6 = ((MR_Word) (conv3_State_6));
  Var_14 = (MR_Word) (State_6);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, &Var_15);
  Str_4 = mercury__string__append_list_1_f_0(Var_15);
  return Str_4;
}

void MR_CALL 
mercury__term_io__write_escaped_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Box Stream_5,
  MR_String Str_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  mercury__term_io__format_escaped_string_4_p_0(TypeClassInfo_for_writer_10, Stream_5, Str_6, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__write_escaped_string_3_p_0(
  MR_String Str_4)
{
  MR_Word Stream_6;
  MR_Box Var_11;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_11  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Var_11);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), Stream_6, Str_4);
}

MR_String MR_CALL 
mercury__term_io__escaped_string_1_f_0(
  MR_String Str0_3)
{
  MR_String Str_4;
  MR_Word State_6;
  MR_Word Var_10;
  MR_Word Var_11;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_3[0]), Str0_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &State_6);
  Var_10 = (MR_Word) (State_6);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_10, &Var_11);
  Str_4 = mercury__string__append_list_1_f_0(Var_11);
  return Str_4;
}

void MR_CALL 
mercury__term_io__quote_atom_agt_5_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Box Stream_6,
  MR_String Str_7,
  MR_Word AGT_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  mercury__term_io__format_quoted_atom_agt_5_p_0(TypeClassInfo_for_writer_12, Stream_6, Str_7, AGT_8, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
}

void MR_CALL 
mercury__term_io__write_quoted_atom_agt_5_p_0(
  MR_Word OutStream_6,
  MR_String Str_7,
  MR_Word AGT_8)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_6, Str_7, AGT_8);
}

void MR_CALL 
mercury__term_io__write_quoted_atom_agt_4_p_0(
  MR_String Str_5,
  MR_Word AGT_6)
{
  MR_Word OutStream_8;
  MR_Box Var_12;

{
#define MR_PROC_LABEL mercury__term_io__write_quoted_atom_agt_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_12  = (MR_Box) Stream;
}
  OutStream_8 = (MR_Word) (Var_12);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_8, Str_5, AGT_6);
}

void MR_CALL 
mercury__term_io__quote_atom_agt_4_p_0(
  MR_String Str_5,
  MR_Word AGT_6)
{
  MR_Word Stream_8;
  MR_Box Var_12;

{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_12  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Var_12);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), Stream_8, Str_5, AGT_6);
}

MR_String MR_CALL 
mercury__term_io__quoted_atom_agt_2_f_0(
  MR_String Str0_4,
  MR_Word AGT_5)
{
  MR_String Str_6;
  MR_Word State_8;
  MR_Word Var_12;
  MR_Word Var_13;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_3[0]), Str0_4, AGT_5, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &State_8);
  Var_12 = (MR_Word) (State_8);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_12, &Var_13);
  Str_6 = mercury__string__append_list_1_f_0(Var_13);
  return Str_6;
}

void MR_CALL 
mercury__term_io__format_quoted_atom_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Box Stream_5,
  MR_String Str_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  mercury__term_io__format_quoted_atom_agt_5_p_0(TypeClassInfo_for_writer_11, Stream_5, Str_6, (MR_Integer) 1, STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
}

void MR_CALL 
mercury__term_io__quote_atom_4_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Box Stream_5,
  MR_String Str_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  mercury__term_io__format_quoted_atom_agt_5_p_0(TypeClassInfo_for_writer_10, Stream_5, Str_6, (MR_Integer) 1, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__write_quoted_atom_4_p_0(
  MR_Word OutStream_5,
  MR_String Str_6)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_5, Str_6, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__write_quoted_atom_3_p_0(
  MR_String Str_4)
{
  MR_Word OutStream_9;
  MR_Box Var_11;

{
#define MR_PROC_LABEL mercury__term_io__write_quoted_atom_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_11  = (MR_Box) Stream;
}
  OutStream_9 = (MR_Word) (Var_11);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_9, Str_4, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__quote_atom_3_p_0(
  MR_String Str_4)
{
  MR_Word OutStream_9;
  MR_Box Var_11;

{
#define MR_PROC_LABEL mercury__term_io__quote_atom_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_11  = (MR_Box) Stream;
}
  OutStream_9 = (MR_Word) (Var_11);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_9, Str_4, (MR_Integer) 1);
}

MR_String MR_CALL 
mercury__term_io__quoted_atom_1_f_0(
  MR_String Str0_3)
{
  MR_String Str_4;
  MR_Word State_6;
  MR_Word Var_11;
  MR_Word Var_12;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_3[0]), Str0_3, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &State_6);
  Var_11 = (MR_Word) (State_6);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, &Var_12);
  Str_4 = mercury__string__append_list_1_f_0(Var_12);
  return Str_4;
}

void MR_CALL 
mercury__term_io__format_constant_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Box Stream_5,
  MR_Word Const_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  mercury__term_io__format_constant_agt_5_p_0(TypeClassInfo_for_writer_11, Stream_5, Const_6, (MR_Integer) 1, STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
}

void MR_CALL 
mercury__term_io__write_constant_4_p_0(
  MR_Word OutStream_5,
  MR_Word Const_6)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_5, Const_6, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__write_constant_3_p_0(
  MR_Word Const_4)
{
  MR_Word OutStream_6;
  MR_Box Var_10;

{
#define MR_PROC_LABEL mercury__term_io__write_constant_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_10  = (MR_Box) Stream;
}
  OutStream_6 = (MR_Word) (Var_10);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_6, Const_4, (MR_Integer) 1);
}

MR_String MR_CALL 
mercury__term_io__format_constant_1_f_0(
  MR_Word Const_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = mercury__term_io__constant_to_string_1_f_0(Const_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__term_io__constant_to_string_1_f_0(
  MR_Word Const_3)
{
  MR_String Str_4;
  MR_Word State_7;
  MR_Word Var_11;
  MR_Word Var_12;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_3[0]), Const_3, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &State_7);
  Var_11 = (MR_Word) (State_7);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, &Var_12);
  Str_4 = mercury__string__append_list_1_f_0(Var_12);
  return Str_4;
}

void MR_CALL 
mercury__term_io__format_variable_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_7,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Var_10,
  MR_Box STATE_VARIABLE_State_0_14,
  MR_Box * STATE_VARIABLE_State_15)
{
  MR_Word Var_12;
  MR_Word Var_13;

  mercury__term_io__format_variable_anon_vars_9_p_0(TypeInfo_for_T_19, TypeClassInfo_for_op_table_17, TypeClassInfo_for_writer_18, Stream_7, OpTable_8, Var_10, VarSet_9, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_13, STATE_VARIABLE_State_0_14, STATE_VARIABLE_State_15);
}

void MR_CALL 
mercury__term_io__write_variable_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Word OutStream_7,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Var_10)
{
  MR_Word Var_12;
  MR_Word Var_13;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_17, (MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_7, OpTable_8, Var_10, VarSet_9, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_13);
}

void MR_CALL 
mercury__term_io__write_variable_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_op_table_14,
  MR_Box OpTable_6,
  MR_Word VarSet_7,
  MR_Word Var_8)
{
  MR_Word OutStream_10;
  MR_Box Var_16;
  MR_Word Var_17;
  MR_Word Var_18;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) Stream;
}
  OutStream_10 = (MR_Word) (Var_16);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, (MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_10, OpTable_6, Var_8, VarSet_7, &Var_17, (MR_Word) ((MR_Unsigned) 0U), &Var_18);
}

MR_String MR_CALL 
mercury__term_io__variable_with_op_table_to_string_3_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeClassInfo_for_op_table_12,
  MR_Box OpTable_5,
  MR_Word VarSet_6,
  MR_Word Var_7)
{
  MR_String Str_8;
  MR_Word State_10;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_16;
  MR_Word Var_17;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_13, TypeClassInfo_for_op_table_12, (MR_Word) (&mercury__term_io_scalar_common_3[0]), OpTable_5, Var_7, VarSet_6, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &State_10);
  Var_19 = (MR_Word) (State_10);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, &Var_20);
  Str_8 = mercury__string__append_list_1_f_0(Var_20);
  return Str_8;
}

void MR_CALL 
mercury__term_io__format_variable_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_6,
  MR_Word VarSet_7,
  MR_Word Var_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  MR_Word Var_16;
  MR_Word Var_17;

  mercury__term_io__format_variable_anon_vars_9_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__term_io_scalar_common_4[0]), TypeClassInfo_for_writer_13, Stream_6, ((MR_Box) ((MR_Integer) 0)), Var_8, VarSet_7, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
}

void MR_CALL 
mercury__term_io__write_variable_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word OutStream_6,
  MR_Word VarSet_7,
  MR_Word Var_8)
{
  MR_Word Var_15;
  MR_Word Var_16;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), Var_8, VarSet_7, &Var_15, (MR_Word) ((MR_Unsigned) 0U), &Var_16);
}

void MR_CALL 
mercury__term_io__write_variable_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSet_5,
  MR_Word Var_6)
{
  MR_Word OutStream_8;
  MR_Box Var_13;
  MR_Word Var_16;
  MR_Word Var_17;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Stream;
}
  OutStream_8 = (MR_Word) (Var_13);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_8, ((MR_Box) ((MR_Integer) 0)), Var_6, VarSet_5, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17);
}

MR_String MR_CALL 
mercury__term_io__variable_to_string_2_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word VarSet_4,
  MR_Word Var_5)
{
  MR_String Str_6;
  MR_Word State_8;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_15;
  MR_Word Var_16;

  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_10, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_3[0]), ((MR_Box) ((MR_Integer) 0)), Var_5, VarSet_4, &Var_15, (MR_Word) ((MR_Unsigned) 0U), &Var_16, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &State_8);
  Var_18 = (MR_Word) (State_8);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, &Var_19);
  Str_6 = mercury__string__append_list_1_f_0(Var_19);
  return Str_6;
}

void MR_CALL 
mercury__term_io__format_term_nl_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Box Stream_7,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Term_10,
  MR_Box STATE_VARIABLE_State_0_12,
  MR_Box * STATE_VARIABLE_State_13)
{
  MR_Box STATE_VARIABLE_State_14_14;
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_22;
  MR_Word Var_19;
  MR_Word Var_20;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_16)), OpTable_8);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_16, TypeClassInfo_for_writer_17, Stream_7, OpTable_8, Term_10, Var_22, VarSet_9, &Var_19, (MR_Word) ((MR_Unsigned) 0U), &Var_20, STATE_VARIABLE_State_0_12, &STATE_VARIABLE_State_14_14);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_17)), Stream_7, ((MR_Box) ((MR_String) ".\n")), STATE_VARIABLE_State_14_14, STATE_VARIABLE_State_13);
}

void MR_CALL 
mercury__term_io__write_term_nl_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_op_table_14,
  MR_Word OutStream_7,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Term_10)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_22;
  MR_Word Var_19;
  MR_Word Var_20;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_IO_13;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_14)), OpTable_8);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, (MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_7, OpTable_8, Term_10, Var_22, VarSet_9, &Var_19, (MR_Word) ((MR_Unsigned) 0U), &Var_20);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[1]))), ((MR_Box) (OutStream_7)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_13);
}

void MR_CALL 
mercury__term_io__write_term_nl_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_op_table_14,
  MR_Box OpTable_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  MR_Word OutStream_10;
  MR_Box Var_16;
  MR_Word Var_23;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_23;
  MR_Word Var_20;
  MR_Word Var_21;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_IO_12;

{
#define MR_PROC_LABEL mercury__term_io__write_term_nl_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) Stream;
}
  OutStream_10 = (MR_Word) (Var_16);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_23 = func_0(((MR_Box) (TypeClassInfo_for_op_table_14)), OpTable_6);
  Var_23 = ((MR_Word) (conv1_Var_23));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, (MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_10, OpTable_6, Term_8, Var_23, VarSet_7, &Var_20, (MR_Word) ((MR_Unsigned) 0U), &Var_21);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[1]))), ((MR_Box) (OutStream_10)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_12);
}

MR_String MR_CALL 
mercury__term_io__term_nl_with_op_table_to_string_3_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeClassInfo_for_op_table_12,
  MR_Box OpTable_5,
  MR_Word VarSet_6,
  MR_Word Term_7)
{
  MR_String Str_8;
  MR_Word State_10;
  MR_Word STATE_VARIABLE_State_14_16;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_21;
  MR_Word Var_18;
  MR_Word Var_19;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_State_10;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_12, (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_21 = func_0(((MR_Box) (TypeClassInfo_for_op_table_12)), OpTable_5);
  Var_21 = ((MR_Word) (conv1_Var_21));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_13, TypeClassInfo_for_op_table_12, (MR_Word) (&mercury__term_io_scalar_common_3[0]), OpTable_5, Term_7, Var_21, VarSet_6, &Var_18, (MR_Word) ((MR_Unsigned) 0U), &Var_19, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &STATE_VARIABLE_State_14_16);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) (STATE_VARIABLE_State_14_16)), &conv3_State_10);
  State_10 = ((MR_Word) (conv3_State_10));
  Var_22 = (MR_Word) (State_10);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_22, &Var_23);
  Str_8 = mercury__string__append_list_1_f_0(Var_23);
  return Str_8;
}

void MR_CALL 
mercury__term_io__format_term_nl_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_6,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  MR_Word Var_19;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_19;
  MR_Word Var_16;
  MR_Word Var_17;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_19 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_19 = ((MR_Word) (conv1_Var_19));
  mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__term_io_scalar_common_4[0]), TypeClassInfo_for_writer_13, Stream_6, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_19, VarSet_7, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
}

void MR_CALL 
mercury__term_io__write_term_nl_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSet_5,
  MR_Word Term_6)
{
  MR_Word OutStream_8;
  MR_Box Var_13;

{
#define MR_PROC_LABEL mercury__term_io__write_term_nl_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Stream;
}
  OutStream_8 = (MR_Word) (Var_13);
  mercury__term_io__write_term_nl_5_p_0(TypeInfo_for_T_12, OutStream_8, VarSet_5, Term_6);
}

void MR_CALL 
mercury__term_io__write_term_nl_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word OutStream_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  MR_Word Var_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_21;
  MR_Word Var_18;
  MR_Word Var_19;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_IO_12;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_21 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_21 = ((MR_Word) (conv1_Var_21));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_21, VarSet_7, &Var_18, (MR_Word) ((MR_Unsigned) 0U), &Var_19);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_3[1]))), ((MR_Box) (OutStream_6)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_12);
}

MR_String MR_CALL 
mercury__term_io__term_nl_to_string_2_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word VarSet_4,
  MR_Word Term_5)
{
  MR_String Str_6;
  MR_Word State_8;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_18;
  MR_Word Var_15;
  MR_Word Var_16;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_18 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_18 = ((MR_Word) (conv1_Var_18));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_10, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_3[0]), ((MR_Box) ((MR_Integer) 0)), Term_5, Var_18, VarSet_4, &Var_15, (MR_Word) ((MR_Unsigned) 0U), &Var_16, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &State_8);
  Var_19 = (MR_Word) (State_8);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, &Var_20);
  Str_6 = mercury__string__append_list_1_f_0(Var_20);
  return Str_6;
}

void MR_CALL 
mercury__term_io__format_term_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_7,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Term_10,
  MR_Box STATE_VARIABLE_State_0_14,
  MR_Box * STATE_VARIABLE_State_15)
{
  MR_Word Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_20;
  MR_Word Var_12;
  MR_Word Var_13;

  conv1_Var_20 = func_0(((MR_Box) (TypeClassInfo_for_op_table_17)), OpTable_8);
  Var_20 = ((MR_Word) (conv1_Var_20));
  mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_19, TypeClassInfo_for_op_table_17, TypeClassInfo_for_writer_18, Stream_7, OpTable_8, Term_10, Var_20, VarSet_9, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_13, STATE_VARIABLE_State_0_14, STATE_VARIABLE_State_15);
}

void MR_CALL 
mercury__term_io__write_term_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Word OutStream_7,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Term_10)
{
  MR_Word Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_20;
  MR_Word Var_12;
  MR_Word Var_13;

  conv1_Var_20 = func_0(((MR_Box) (TypeClassInfo_for_op_table_17)), OpTable_8);
  Var_20 = ((MR_Word) (conv1_Var_20));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_17, (MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_7, OpTable_8, Term_10, Var_20, VarSet_9, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_13);
}

void MR_CALL 
mercury__term_io__write_term_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_op_table_14,
  MR_Box OpTable_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  MR_Word OutStream_10;
  MR_Box Var_17;
  MR_Word Var_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_21;
  MR_Word Var_18;
  MR_Word Var_19;

{
#define MR_PROC_LABEL mercury__term_io__write_term_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_17  = (MR_Box) Stream;
}
  OutStream_10 = (MR_Word) (Var_17);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_21 = func_0(((MR_Box) (TypeClassInfo_for_op_table_14)), OpTable_6);
  Var_21 = ((MR_Word) (conv1_Var_21));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, (MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_10, OpTable_6, Term_8, Var_21, VarSet_7, &Var_18, (MR_Word) ((MR_Unsigned) 0U), &Var_19);
}

MR_String MR_CALL 
mercury__term_io__term_with_op_table_to_string_3_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeClassInfo_for_op_table_12,
  MR_Box OpTable_5,
  MR_Word VarSet_6,
  MR_Word Term_7)
{
  MR_String Str_8;
  MR_Word State_10;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_19;
  MR_Word Var_16;
  MR_Word Var_17;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_12, (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_19 = func_0(((MR_Box) (TypeClassInfo_for_op_table_12)), OpTable_5);
  Var_19 = ((MR_Word) (conv1_Var_19));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_13, TypeClassInfo_for_op_table_12, (MR_Word) (&mercury__term_io_scalar_common_3[0]), OpTable_5, Term_7, Var_19, VarSet_6, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &State_10);
  Var_20 = (MR_Word) (State_10);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_20, &Var_21);
  Str_8 = mercury__string__append_list_1_f_0(Var_21);
  return Str_8;
}

void MR_CALL 
mercury__term_io__format_term_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_6,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  MR_Word Var_19;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_19;
  MR_Word Var_16;
  MR_Word Var_17;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_19 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_19 = ((MR_Word) (conv1_Var_19));
  mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_14, (MR_Word) (&mercury__term_io_scalar_common_4[0]), TypeClassInfo_for_writer_13, Stream_6, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_19, VarSet_7, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
}

void MR_CALL 
mercury__term_io__format_term_prio_anon_vars_10_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_48,
  MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_46,
  MR_Word tscc_proc_1_input_3_TypeClassInfo_for_writer_47,
  MR_Box tscc_proc_1_input_4_Stream_11,
  MR_Box tscc_proc_1_input_5_OpTable_12,
  MR_Word tscc_proc_1_input_6_Term_13,
  MR_Word tscc_proc_1_input_7_Priority_14,
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_34,
  MR_Word tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Anon_36,
  MR_Box tscc_proc_1_input_10_STATE_VARIABLE_State_0_37,
  MR_Box * tscc_output_ptr_3_STATE_VARIABLE_State_38)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_39;
  MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
  MR_Word tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
  MR_Box tscc_proc_2_input_4_Stream_10;
  MR_Box tscc_proc_2_input_5_OpTable_11;
  MR_Word tscc_proc_2_input_6_Var_12;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22;
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24;
  MR_Box tscc_proc_2_input_9_STATE_VARIABLE_State_0_26;
  MR_Word tscc_output_1_STATE_VARIABLE_VarSet_34;
  MR_Word tscc_output_2_STATE_VARIABLE_Anon_36;
  MR_Box tscc_output_3_STATE_VARIABLE_State_38;

  // The code for TSCC PROC 1: pred term_io.format_term_prio_anon_vars/10-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred term_io.format_term_prio_anon_vars/10-0
  ;
  // proc 2 in TSCC: pred term_io.format_variable_anon_vars/9-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_T_48 = tscc_proc_1_input_1_TypeInfo_for_T_48;
    MR_Word TypeClassInfo_for_op_table_46 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
    MR_Word TypeClassInfo_for_writer_47 = tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
    MR_Box Stream_11 = tscc_proc_1_input_4_Stream_11;
    MR_Box OpTable_12 = tscc_proc_1_input_5_OpTable_12;
    MR_Word Term_13 = tscc_proc_1_input_6_Term_13;
    MR_Word Priority_14 = tscc_proc_1_input_7_Priority_14;
    MR_Word STATE_VARIABLE_VarSet_0_33 = tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
    MR_Word STATE_VARIABLE_VarSet_34;
    MR_Word STATE_VARIABLE_Anon_0_35 = tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
    MR_Word STATE_VARIABLE_Anon_36;
    MR_Box STATE_VARIABLE_State_0_37 = tscc_proc_1_input_10_STATE_VARIABLE_State_0_37;
    MR_Box STATE_VARIABLE_State_38;

    if (((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0))
    {
      MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 0))));
      MR_Word ArgTerms_21 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Functor_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Atom_32 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));

            mercury__term_io__format_atom_term_prio_anon_vars_11_p_0(TypeInfo_for_T_48, TypeClassInfo_for_op_table_46, TypeClassInfo_for_writer_47, Stream_11, OpTable_12, Atom_32, ArgTerms_21, Priority_14, STATE_VARIABLE_VarSet_0_33, &STATE_VARIABLE_VarSet_34, STATE_VARIABLE_Anon_0_35, &STATE_VARIABLE_Anon_36, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__format_constant_agt_5_p_0(TypeClassInfo_for_writer_47, Stream_11, Functor_20, (MR_Integer) 0, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
        case (MR_Integer) 3:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__format_constant_agt_5_p_0(TypeClassInfo_for_writer_47, Stream_11, Functor_20, (MR_Integer) 0, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
      }
    }
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, Term_13, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39 = TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = TypeClassInfo_for_writer_47;
      MR_Box next_value_of_tscc_proc_2_input_4_Stream_10 = Stream_11;
      MR_Box next_value_of_tscc_proc_2_input_5_OpTable_11 = OpTable_12;
      MR_Word next_value_of_tscc_proc_2_input_6_Var_12 = Var_18;
      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22 = STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24 = STATE_VARIABLE_Anon_0_35;
      MR_Box next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_State_0_26 = STATE_VARIABLE_State_0_37;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_39 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39;
      tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
      tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
      tscc_proc_2_input_4_Stream_10 = next_value_of_tscc_proc_2_input_4_Stream_10;
      tscc_proc_2_input_5_OpTable_11 = next_value_of_tscc_proc_2_input_5_OpTable_11;
      tscc_proc_2_input_6_Var_12 = next_value_of_tscc_proc_2_input_6_Var_12;
      tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22;
      tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24;
      tscc_proc_2_input_9_STATE_VARIABLE_State_0_26 = next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_State_0_26;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_34;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_36;
    tscc_output_3_STATE_VARIABLE_State_38 = STATE_VARIABLE_State_38;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_39 = tscc_proc_2_input_1_TypeInfo_for_T_39;
    MR_Word TypeClassInfo_for_op_table_37 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
    MR_Word TypeClassInfo_for_writer_38 = tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
    MR_Box Stream_10 = tscc_proc_2_input_4_Stream_10;
    MR_Box OpTable_11 = tscc_proc_2_input_5_OpTable_11;
    MR_Word Var_12 = tscc_proc_2_input_6_Var_12;
    MR_Word STATE_VARIABLE_VarSet_0_22 = tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22;
    MR_Word STATE_VARIABLE_VarSet_23;
    MR_Word STATE_VARIABLE_Anon_0_24 = tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24;
    MR_Word STATE_VARIABLE_Anon_25;
    MR_Box STATE_VARIABLE_State_0_26 = tscc_proc_2_input_9_STATE_VARIABLE_State_0_26;
    MR_Box STATE_VARIABLE_State_27;
    MR_bool succeeded;
    MR_Word Value_16;
    MR_Word TypeInfo_12_52;
    MR_Word TypeInfo_14_54;
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 2))));
    MR_Box conv0_Value_16;

    {
      TypeInfo_12_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_12_52, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_12_52, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    {
      TypeInfo_14_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_54, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_14_54, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_52, TypeInfo_14_54, Var_50, Var_12, &conv0_Value_16);
    if (succeeded)
    {
      Value_16 = ((MR_Word) (conv0_Value_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_56;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_37, (MR_Integer) 0)), (MR_Integer) 12))));
      MR_Box conv2_Var_56;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      MR_Box next_value_of_tscc_proc_1_input_4_Stream_11;
      MR_Box next_value_of_tscc_proc_1_input_5_OpTable_12;
      MR_Word next_value_of_tscc_proc_1_input_6_Term_13;
      MR_Word next_value_of_tscc_proc_1_input_7_Priority_14;
      MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
      MR_Box next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_State_0_37;

      conv2_Var_56 = func_1(((MR_Box) (TypeClassInfo_for_op_table_37)), OpTable_11);
      Var_56 = ((MR_Word) (conv2_Var_56));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48 = TypeInfo_for_T_39;
      next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = TypeClassInfo_for_op_table_37;
      next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = TypeClassInfo_for_writer_38;
      next_value_of_tscc_proc_1_input_4_Stream_11 = Stream_10;
      next_value_of_tscc_proc_1_input_5_OpTable_12 = OpTable_11;
      next_value_of_tscc_proc_1_input_6_Term_13 = Value_16;
      next_value_of_tscc_proc_1_input_7_Priority_14 = Var_56;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33 = STATE_VARIABLE_VarSet_0_22;
      next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35 = STATE_VARIABLE_Anon_0_24;
      next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_State_0_37 = STATE_VARIABLE_State_0_26;
      tscc_proc_1_input_1_TypeInfo_for_T_48 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      tscc_proc_1_input_4_Stream_11 = next_value_of_tscc_proc_1_input_4_Stream_11;
      tscc_proc_1_input_5_OpTable_12 = next_value_of_tscc_proc_1_input_5_OpTable_12;
      tscc_proc_1_input_6_Term_13 = next_value_of_tscc_proc_1_input_6_Term_13;
      tscc_proc_1_input_7_Priority_14 = next_value_of_tscc_proc_1_input_7_Priority_14;
      tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
      tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35 = next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
      tscc_proc_1_input_10_STATE_VARIABLE_State_0_37 = next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_State_0_37;
      goto top_of_proc_1;
    }
    else
    {
      MR_String Name_17;
      MR_Word TypeInfo_12_61;
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 1))));
      MR_Box conv3_Name_17;

      {
        TypeInfo_12_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_61, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_12_61, 1) = ((MR_Box) (TypeInfo_for_T_39));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_61, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, Var_12, &conv3_Name_17);
      if (succeeded)
      {
        Name_17 = ((MR_String) (conv3_Name_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));

        func_4(((MR_Box) (TypeClassInfo_for_writer_38)), Stream_10, ((MR_Box) (Name_17)), STATE_VARIABLE_State_0_26, &STATE_VARIABLE_State_27);
        STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
      }
      else
      {
        MR_Integer VarNum_18;
        MR_String VarName_21;
        MR_String Var_40;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        if ((STATE_VARIABLE_Anon_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          VarNum_18 = (MR_Integer) (Var_12);
          STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        }
        else
        {
          MR_Word Counter0_19 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Anon_0_24, (MR_Integer) 0))));
          MR_Word Counter_20;
          MR_Integer Var_64;

          VarNum_18 = (MR_Integer) (Counter0_19);
          Var_64 = (MR_Integer) ((MR_Unsigned) VarNum_18 + (MR_Unsigned) 1);
          Counter_20 = (MR_Word) (Var_64);
          {
            STATE_VARIABLE_Anon_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Anon_25, 0) = ((MR_Box) (Counter_20));
          }
        }
        mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__term_io_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), VarNum_18, &Var_40);
        mercury__string__append_3_p_2((MR_String) "_", Var_40, &VarName_21);
        mercury__varset__name_var_4_p_0(TypeInfo_for_T_39, Var_12, VarName_21, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_23);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));
        func_5(((MR_Box) (TypeClassInfo_for_writer_38)), Stream_10, ((MR_Box) (VarName_21)), STATE_VARIABLE_State_0_26, &STATE_VARIABLE_State_27);
      }
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_23;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_25;
    tscc_output_3_STATE_VARIABLE_State_38 = STATE_VARIABLE_State_27;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_VarSet_34 = tscc_output_1_STATE_VARIABLE_VarSet_34;
  *tscc_output_ptr_2_STATE_VARIABLE_Anon_36 = tscc_output_2_STATE_VARIABLE_Anon_36;
  *tscc_output_ptr_3_STATE_VARIABLE_State_38 = tscc_output_3_STATE_VARIABLE_State_38;
  return;
}

void MR_CALL 
mercury__term_io__format_variable_anon_vars_9_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_39,
  MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_37,
  MR_Word tscc_proc_2_input_3_TypeClassInfo_for_writer_38,
  MR_Box tscc_proc_2_input_4_Stream_10,
  MR_Box tscc_proc_2_input_5_OpTable_11,
  MR_Word tscc_proc_2_input_6_Var_12,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_34,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Anon_36,
  MR_Box tscc_proc_2_input_9_STATE_VARIABLE_State_0_26,
  MR_Box * tscc_output_ptr_3_STATE_VARIABLE_State_38)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_48;
  MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
  MR_Word tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
  MR_Box tscc_proc_1_input_4_Stream_11;
  MR_Box tscc_proc_1_input_5_OpTable_12;
  MR_Word tscc_proc_1_input_6_Term_13;
  MR_Word tscc_proc_1_input_7_Priority_14;
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
  MR_Word tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
  MR_Box tscc_proc_1_input_10_STATE_VARIABLE_State_0_37;
  MR_Word tscc_output_1_STATE_VARIABLE_VarSet_34;
  MR_Word tscc_output_2_STATE_VARIABLE_Anon_36;
  MR_Box tscc_output_3_STATE_VARIABLE_State_38;

  // The code for TSCC PROC 2: pred term_io.format_variable_anon_vars/9-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred term_io.format_term_prio_anon_vars/10-0
  ;
  // proc 2 in TSCC: pred term_io.format_variable_anon_vars/9-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_T_48 = tscc_proc_1_input_1_TypeInfo_for_T_48;
    MR_Word TypeClassInfo_for_op_table_46 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
    MR_Word TypeClassInfo_for_writer_47 = tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
    MR_Box Stream_11 = tscc_proc_1_input_4_Stream_11;
    MR_Box OpTable_12 = tscc_proc_1_input_5_OpTable_12;
    MR_Word Term_13 = tscc_proc_1_input_6_Term_13;
    MR_Word Priority_14 = tscc_proc_1_input_7_Priority_14;
    MR_Word STATE_VARIABLE_VarSet_0_33 = tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
    MR_Word STATE_VARIABLE_VarSet_34;
    MR_Word STATE_VARIABLE_Anon_0_35 = tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
    MR_Word STATE_VARIABLE_Anon_36;
    MR_Box STATE_VARIABLE_State_0_37 = tscc_proc_1_input_10_STATE_VARIABLE_State_0_37;
    MR_Box STATE_VARIABLE_State_38;

    if (((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0))
    {
      MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 0))));
      MR_Word ArgTerms_21 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Functor_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Atom_32 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));

            mercury__term_io__format_atom_term_prio_anon_vars_11_p_0(TypeInfo_for_T_48, TypeClassInfo_for_op_table_46, TypeClassInfo_for_writer_47, Stream_11, OpTable_12, Atom_32, ArgTerms_21, Priority_14, STATE_VARIABLE_VarSet_0_33, &STATE_VARIABLE_VarSet_34, STATE_VARIABLE_Anon_0_35, &STATE_VARIABLE_Anon_36, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__format_constant_agt_5_p_0(TypeClassInfo_for_writer_47, Stream_11, Functor_20, (MR_Integer) 0, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
        case (MR_Integer) 3:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__format_constant_agt_5_p_0(TypeClassInfo_for_writer_47, Stream_11, Functor_20, (MR_Integer) 0, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
      }
    }
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, Term_13, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39 = TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = TypeClassInfo_for_writer_47;
      MR_Box next_value_of_tscc_proc_2_input_4_Stream_10 = Stream_11;
      MR_Box next_value_of_tscc_proc_2_input_5_OpTable_11 = OpTable_12;
      MR_Word next_value_of_tscc_proc_2_input_6_Var_12 = Var_18;
      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22 = STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24 = STATE_VARIABLE_Anon_0_35;
      MR_Box next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_State_0_26 = STATE_VARIABLE_State_0_37;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_39 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39;
      tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
      tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
      tscc_proc_2_input_4_Stream_10 = next_value_of_tscc_proc_2_input_4_Stream_10;
      tscc_proc_2_input_5_OpTable_11 = next_value_of_tscc_proc_2_input_5_OpTable_11;
      tscc_proc_2_input_6_Var_12 = next_value_of_tscc_proc_2_input_6_Var_12;
      tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22;
      tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24;
      tscc_proc_2_input_9_STATE_VARIABLE_State_0_26 = next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_State_0_26;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_34;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_36;
    tscc_output_3_STATE_VARIABLE_State_38 = STATE_VARIABLE_State_38;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_39 = tscc_proc_2_input_1_TypeInfo_for_T_39;
    MR_Word TypeClassInfo_for_op_table_37 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
    MR_Word TypeClassInfo_for_writer_38 = tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
    MR_Box Stream_10 = tscc_proc_2_input_4_Stream_10;
    MR_Box OpTable_11 = tscc_proc_2_input_5_OpTable_11;
    MR_Word Var_12 = tscc_proc_2_input_6_Var_12;
    MR_Word STATE_VARIABLE_VarSet_0_22 = tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22;
    MR_Word STATE_VARIABLE_VarSet_23;
    MR_Word STATE_VARIABLE_Anon_0_24 = tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24;
    MR_Word STATE_VARIABLE_Anon_25;
    MR_Box STATE_VARIABLE_State_0_26 = tscc_proc_2_input_9_STATE_VARIABLE_State_0_26;
    MR_Box STATE_VARIABLE_State_27;
    MR_bool succeeded;
    MR_Word Value_16;
    MR_Word TypeInfo_12_52;
    MR_Word TypeInfo_14_54;
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 2))));
    MR_Box conv0_Value_16;

    {
      TypeInfo_12_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_12_52, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_12_52, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    {
      TypeInfo_14_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_54, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_14_54, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_52, TypeInfo_14_54, Var_50, Var_12, &conv0_Value_16);
    if (succeeded)
    {
      Value_16 = ((MR_Word) (conv0_Value_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_56;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_37, (MR_Integer) 0)), (MR_Integer) 12))));
      MR_Box conv2_Var_56;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      MR_Box next_value_of_tscc_proc_1_input_4_Stream_11;
      MR_Box next_value_of_tscc_proc_1_input_5_OpTable_12;
      MR_Word next_value_of_tscc_proc_1_input_6_Term_13;
      MR_Word next_value_of_tscc_proc_1_input_7_Priority_14;
      MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
      MR_Box next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_State_0_37;

      conv2_Var_56 = func_1(((MR_Box) (TypeClassInfo_for_op_table_37)), OpTable_11);
      Var_56 = ((MR_Word) (conv2_Var_56));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48 = TypeInfo_for_T_39;
      next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = TypeClassInfo_for_op_table_37;
      next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = TypeClassInfo_for_writer_38;
      next_value_of_tscc_proc_1_input_4_Stream_11 = Stream_10;
      next_value_of_tscc_proc_1_input_5_OpTable_12 = OpTable_11;
      next_value_of_tscc_proc_1_input_6_Term_13 = Value_16;
      next_value_of_tscc_proc_1_input_7_Priority_14 = Var_56;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33 = STATE_VARIABLE_VarSet_0_22;
      next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35 = STATE_VARIABLE_Anon_0_24;
      next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_State_0_37 = STATE_VARIABLE_State_0_26;
      tscc_proc_1_input_1_TypeInfo_for_T_48 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      tscc_proc_1_input_4_Stream_11 = next_value_of_tscc_proc_1_input_4_Stream_11;
      tscc_proc_1_input_5_OpTable_12 = next_value_of_tscc_proc_1_input_5_OpTable_12;
      tscc_proc_1_input_6_Term_13 = next_value_of_tscc_proc_1_input_6_Term_13;
      tscc_proc_1_input_7_Priority_14 = next_value_of_tscc_proc_1_input_7_Priority_14;
      tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
      tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35 = next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
      tscc_proc_1_input_10_STATE_VARIABLE_State_0_37 = next_value_of_tscc_proc_1_input_10_STATE_VARIABLE_State_0_37;
      goto top_of_proc_1;
    }
    else
    {
      MR_String Name_17;
      MR_Word TypeInfo_12_61;
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 1))));
      MR_Box conv3_Name_17;

      {
        TypeInfo_12_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_61, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_12_61, 1) = ((MR_Box) (TypeInfo_for_T_39));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_61, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, Var_12, &conv3_Name_17);
      if (succeeded)
      {
        Name_17 = ((MR_String) (conv3_Name_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));

        func_4(((MR_Box) (TypeClassInfo_for_writer_38)), Stream_10, ((MR_Box) (Name_17)), STATE_VARIABLE_State_0_26, &STATE_VARIABLE_State_27);
        STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
      }
      else
      {
        MR_Integer VarNum_18;
        MR_String VarName_21;
        MR_String Var_40;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        if ((STATE_VARIABLE_Anon_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          VarNum_18 = (MR_Integer) (Var_12);
          STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        }
        else
        {
          MR_Word Counter0_19 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Anon_0_24, (MR_Integer) 0))));
          MR_Word Counter_20;
          MR_Integer Var_64;

          VarNum_18 = (MR_Integer) (Counter0_19);
          Var_64 = (MR_Integer) ((MR_Unsigned) VarNum_18 + (MR_Unsigned) 1);
          Counter_20 = (MR_Word) (Var_64);
          {
            STATE_VARIABLE_Anon_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Anon_25, 0) = ((MR_Box) (Counter_20));
          }
        }
        mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__term_io_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), VarNum_18, &Var_40);
        mercury__string__append_3_p_2((MR_String) "_", Var_40, &VarName_21);
        mercury__varset__name_var_4_p_0(TypeInfo_for_T_39, Var_12, VarName_21, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_23);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));
        func_5(((MR_Box) (TypeClassInfo_for_writer_38)), Stream_10, ((MR_Box) (VarName_21)), STATE_VARIABLE_State_0_26, &STATE_VARIABLE_State_27);
      }
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_23;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_25;
    tscc_output_3_STATE_VARIABLE_State_38 = STATE_VARIABLE_State_27;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_VarSet_34 = tscc_output_1_STATE_VARIABLE_VarSet_34;
  *tscc_output_ptr_2_STATE_VARIABLE_Anon_36 = tscc_output_2_STATE_VARIABLE_Anon_36;
  *tscc_output_ptr_3_STATE_VARIABLE_State_38 = tscc_output_3_STATE_VARIABLE_State_38;
  return;
}

static void MR_CALL 
mercury__term_io__format_later_list_elements_9_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word TypeClassInfo_for_op_table_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_Anon_0_25,
  MR_Word * STATE_VARIABLE_Anon_26,
  MR_Box STATE_VARIABLE_State_0_27,
  MR_Box * STATE_VARIABLE_State_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 1);
    MR_Word Value_18;
    MR_Word TypeCtorInfo_11_56;
    MR_Word TypeInfo_12_57;
    MR_Word TypeCtorInfo_13_58;
    MR_Word TypeInfo_14_59;
    MR_Word Var_16;
    MR_Word Var_55;
    MR_Box conv0_Value_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(1, Term_12, (MR_Integer) 0))));
      Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_23, (MR_Integer) 2))));
      TypeCtorInfo_11_56 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
      TypeCtorInfo_13_58 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
      {
        TypeInfo_12_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_57, 0) = ((MR_Box) (TypeCtorInfo_11_56));
        MR_hl_field(0, TypeInfo_12_57, 1) = ((MR_Box) (TypeInfo_for_T_52));
      }
      {
        TypeInfo_14_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_14_59, 0) = ((MR_Box) (TypeCtorInfo_13_58));
        MR_hl_field(0, TypeInfo_14_59, 1) = ((MR_Box) (TypeInfo_for_T_52));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_52, TypeInfo_12_57, TypeInfo_14_59, Var_55, Var_16, &conv0_Value_18);
      if (succeeded)
      {
        Value_18 = ((MR_Word) (conv0_Value_18));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_Term_12 = Value_18;

      // direct tailcall eliminated
      ;
      Term_12 = next_value_of_Term_12;
      continue;
    }
    else
    {
      MR_Word ListHead_19;
      MR_Word ListTail_20;
      MR_Word Var_32;
      MR_String Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;

      succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_32 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 0))));
        Var_34 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_33 = ((MR_String) ((MR_hl_field(0, Var_32, (MR_Integer) 0))));
          succeeded = (strcmp(Var_33, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ListHead_19 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
              Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));
              succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ListTail_20 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
                Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
                succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_State_38_38;
        MR_Word STATE_VARIABLE_VarSet_39_39;
        MR_Word STATE_VARIABLE_Anon_40_40;
        MR_Box STATE_VARIABLE_State_41_41;
        MR_Word Var_61;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
        MR_Box conv3_Var_61;
        MR_Word next_value_of_Term_12;
        MR_Word next_value_of_STATE_VARIABLE_VarSet_0_23;
        MR_Word next_value_of_STATE_VARIABLE_Anon_0_25;
        MR_Box next_value_of_STATE_VARIABLE_State_0_27;

        func_1(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_27, &STATE_VARIABLE_State_38_38);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_50, (MR_Integer) 0)), (MR_Integer) 16))));
        conv3_Var_61 = func_2(((MR_Box) (TypeClassInfo_for_op_table_50)), OpTable_11);
        Var_61 = ((MR_Word) (conv3_Var_61));
        mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_52, TypeClassInfo_for_op_table_50, TypeClassInfo_for_writer_51, Stream_10, OpTable_11, ListHead_19, Var_61, STATE_VARIABLE_VarSet_0_23, &STATE_VARIABLE_VarSet_39_39, STATE_VARIABLE_Anon_0_25, &STATE_VARIABLE_Anon_40_40, STATE_VARIABLE_State_38_38, &STATE_VARIABLE_State_41_41);
        // direct tailcall eliminated
        ;
        next_value_of_Term_12 = ListTail_20;
        next_value_of_STATE_VARIABLE_VarSet_0_23 = STATE_VARIABLE_VarSet_39_39;
        next_value_of_STATE_VARIABLE_Anon_0_25 = STATE_VARIABLE_Anon_40_40;
        next_value_of_STATE_VARIABLE_State_0_27 = STATE_VARIABLE_State_41_41;
        Term_12 = next_value_of_Term_12;
        STATE_VARIABLE_VarSet_0_23 = next_value_of_STATE_VARIABLE_VarSet_0_23;
        STATE_VARIABLE_Anon_0_25 = next_value_of_STATE_VARIABLE_Anon_0_25;
        STATE_VARIABLE_State_0_27 = next_value_of_STATE_VARIABLE_State_0_27;
        continue;
      }
      else
      {
        MR_Word Var_45;
        MR_String Var_46;
        MR_Word Var_47;

        succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 0))));
          Var_47 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_46 = ((MR_String) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
            succeeded = (strcmp(Var_46, (MR_String) "[]") == 0);
            if (succeeded)
              succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          *STATE_VARIABLE_State_28 = STATE_VARIABLE_State_0_27;
          *STATE_VARIABLE_Anon_26 = STATE_VARIABLE_Anon_0_25;
          *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
        }
        else
        {
          MR_Box STATE_VARIABLE_State_49_49;
          MR_Word Var_62;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box MR_CALL (* func_5)(MR_Box, MR_Box);
          MR_Box conv6_Var_62;

          func_4(((MR_Box) (TypeClassInfo_for_writer_51)), Stream_10, ((MR_Box) ((MR_String) " | ")), STATE_VARIABLE_State_0_27, &STATE_VARIABLE_State_49_49);
          func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_50, (MR_Integer) 0)), (MR_Integer) 12))));
          conv6_Var_62 = func_5(((MR_Box) (TypeClassInfo_for_op_table_50)), OpTable_11);
          Var_62 = ((MR_Word) (conv6_Var_62));
          mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_52, TypeClassInfo_for_op_table_50, TypeClassInfo_for_writer_51, Stream_10, OpTable_11, Term_12, Var_62, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_Anon_0_25, STATE_VARIABLE_Anon_26, STATE_VARIABLE_State_49_49, STATE_VARIABLE_State_28);
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__term_io__format_term_arg_9_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word TypeClassInfo_for_writer_24,
  MR_Box Stream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19,
  MR_Box STATE_VARIABLE_State_0_20,
  MR_Box * STATE_VARIABLE_State_21)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 16))));
  MR_Box conv1_Var_22;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_11);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_25, TypeClassInfo_for_op_table_23, TypeClassInfo_for_writer_24, Stream_10, OpTable_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_Anon_0_18, STATE_VARIABLE_Anon_19, STATE_VARIABLE_State_0_20, STATE_VARIABLE_State_21);
}

void MR_CALL 
mercury__term_io__format_term_anon_vars_9_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word TypeClassInfo_for_writer_24,
  MR_Box Stream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19,
  MR_Box STATE_VARIABLE_State_0_20,
  MR_Box * STATE_VARIABLE_State_21)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_22;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_11);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_25, TypeClassInfo_for_op_table_23, TypeClassInfo_for_writer_24, Stream_10, OpTable_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_Anon_0_18, STATE_VARIABLE_Anon_19, STATE_VARIABLE_State_0_20, STATE_VARIABLE_State_21);
}

static void MR_CALL 
mercury__term_io__format_atom_term_prio_anon_vars_11_p_0(
  MR_Word TypeInfo_for_T_186,
  MR_Word TypeClassInfo_for_op_table_184,
  MR_Word TypeClassInfo_for_writer_185,
  MR_Box Stream_12,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_Anon_0_51,
  MR_Word * STATE_VARIABLE_Anon_52,
  MR_Box STATE_VARIABLE_State_0_53,
  MR_Box * STATE_VARIABLE_State_54)
{
  MR_bool succeeded = (strcmp(Atom_14, (MR_String) "[|]") == 0);
  MR_Word ListHead_20;
  MR_Word ListTail_21;
  MR_Word Var_55;
  MR_Word Var_56;

  if (succeeded)
  {
    succeeded = (ArgTerms_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ListHead_20 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
      Var_55 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
      succeeded = (Var_55 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListTail_21 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 0))));
        Var_56 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 1))));
        succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_State_58_58;
    MR_Word STATE_VARIABLE_VarSet_59_59;
    MR_Word STATE_VARIABLE_Anon_60_60;
    MR_Box STATE_VARIABLE_State_61_61;
    MR_Box STATE_VARIABLE_State_64_64;

    mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) "[")), STATE_VARIABLE_State_0_53, &STATE_VARIABLE_State_58_58);
    mercury__term_io__format_term_arg_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, ListHead_20, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_60_60, STATE_VARIABLE_State_58_58, &STATE_VARIABLE_State_61_61);
    mercury__term_io__format_later_list_elements_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, ListTail_21, STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_60_60, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_61_61, &STATE_VARIABLE_State_64_64);
    mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) "]")), STATE_VARIABLE_State_64_64, STATE_VARIABLE_State_54);
  }
  else
  {
    succeeded = (strcmp(Atom_14, (MR_String) "[]") == 0);
    if (succeeded)
      succeeded = (ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) "[]")), STATE_VARIABLE_State_0_53, STATE_VARIABLE_State_54);
      *STATE_VARIABLE_Anon_52 = STATE_VARIABLE_Anon_0_51;
      *STATE_VARIABLE_VarSet_50 = STATE_VARIABLE_VarSet_0_49;
    }
    else
    {
      MR_Word BracedHeadTerm_22;
      MR_Word BracedTailTerms_23;

      succeeded = (strcmp(Atom_14, (MR_String) "{}") == 0);
      if (succeeded)
      {
        succeeded = (ArgTerms_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BracedHeadTerm_22 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
          BracedTailTerms_23 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
        }
      }
      if (succeeded)
        if ((BracedTailTerms_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Box STATE_VARIABLE_State_70_70;
          MR_Box STATE_VARIABLE_State_73_73;

          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) "{ ")), STATE_VARIABLE_State_0_53, &STATE_VARIABLE_State_70_70);
          mercury__term_io__format_term_anon_vars_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, BracedHeadTerm_22, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_70_70, &STATE_VARIABLE_State_73_73);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) " }")), STATE_VARIABLE_State_73_73, STATE_VARIABLE_State_54);
        }
        else
        {
          MR_Box STATE_VARIABLE_State_77_77;
          MR_Word STATE_VARIABLE_VarSet_78_78;
          MR_Word STATE_VARIABLE_Anon_79_79;
          MR_Box STATE_VARIABLE_State_80_80;
          MR_Box STATE_VARIABLE_State_83_83;

          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) "{")), STATE_VARIABLE_State_0_53, &STATE_VARIABLE_State_77_77);
          mercury__term_io__format_term_arg_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, BracedHeadTerm_22, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_79_79, STATE_VARIABLE_State_77_77, &STATE_VARIABLE_State_80_80);
          mercury__term_io__format_term_later_args_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, BracedTailTerms_23, STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_79_79, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_80_80, &STATE_VARIABLE_State_83_83);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) "}")), STATE_VARIABLE_State_83_83, STATE_VARIABLE_State_54);
        }
      else
      {
        MR_Word Var_26;
        MR_Word FirstArg_28;
        MR_Word OtherArgTerms_29;
        MR_Word Var_86;
        MR_Word Var_87;

        succeeded = (strcmp(Atom_14, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (ArgTerms_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_86 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
            Var_87 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_26 = ((MR_Word) ((MR_hl_field(1, Var_86, (MR_Integer) 0))));
              succeeded = (Var_87 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FirstArg_28 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 0))));
                OtherArgTerms_29 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 1))));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_VarSet_88_88;
          MR_Word STATE_VARIABLE_Anon_89_89;
          MR_Box STATE_VARIABLE_State_90_90;
          MR_Box STATE_VARIABLE_State_92_92;
          MR_Word STATE_VARIABLE_VarSet_93_93;
          MR_Word STATE_VARIABLE_Anon_94_94;
          MR_Box STATE_VARIABLE_State_95_95;
          MR_Box STATE_VARIABLE_State_98_98;

          mercury__term_io__format_variable_anon_vars_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_26, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_89_89, STATE_VARIABLE_State_0_53, &STATE_VARIABLE_State_90_90);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_State_90_90, &STATE_VARIABLE_State_92_92);
          mercury__term_io__format_term_arg_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, FirstArg_28, STATE_VARIABLE_VarSet_88_88, &STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_Anon_89_89, &STATE_VARIABLE_Anon_94_94, STATE_VARIABLE_State_92_92, &STATE_VARIABLE_State_95_95);
          mercury__term_io__format_term_later_args_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, OtherArgTerms_29, STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_94_94, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_95_95, &STATE_VARIABLE_State_98_98);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_State_98_98, STATE_VARIABLE_State_54);
        }
        else
        {
          MR_Word OpInfos_30;

          succeeded = mercury__ops__lookup_op_infos_3_p_0(TypeClassInfo_for_op_table_184, OpTable_13, Atom_14, &OpInfos_30);
          if (succeeded)
          {
            MR_Word MaybeInfix_31 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 0))));
            MR_Word MaybeBinPrefix_32 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 1))));
            MR_Word MaybePrefix_33 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 2))));
            MR_Word MaybePostfix_34 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 3))));

            if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__format_atom_term_prio_anon_vars_std_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_0_53, STATE_VARIABLE_State_54);
            else
            {
              MR_Word Var_187 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
              MR_Word Var_188 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));

              if ((Var_187 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word OpPriority_40;
                MR_Word OpGtOrGe_41;

                succeeded = (MaybePrefix_33 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  OpPriority_40 = ((MR_Word) ((MR_hl_field(1, MaybePrefix_33, (MR_Integer) 0))));
                  OpGtOrGe_41 = ((MR_Unsigned) ((MR_hl_field(1, MaybePrefix_33, (MR_Integer) 1))) & (MR_Integer) 1);
                  {
                    MR_Word NewPriority_42;
                    MR_Box STATE_VARIABLE_State_108_108;
                    MR_Box STATE_VARIABLE_State_109_109;
                    MR_Box STATE_VARIABLE_State_111_111;
                    MR_Box STATE_VARIABLE_State_114_114;
                    MR_Unsigned Var_191 = (MR_Unsigned) (OpPriority_40);
                    MR_Unsigned Var_192 = (MR_Unsigned) (Priority_16);
                    MR_Unsigned Var_197;
                    MR_Unsigned Var_198;

                    succeeded = (Var_191 < Var_192);
                    if (succeeded)
                    {
                      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));

                      func_0(((MR_Box) (TypeClassInfo_for_writer_185)), Stream_12, ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_State_0_53, &STATE_VARIABLE_State_108_108);
                    }
                    else
                      STATE_VARIABLE_State_108_108 = STATE_VARIABLE_State_0_53;
                    mercury__term_io__format_quoted_atom_agt_5_p_0(TypeClassInfo_for_writer_185, Stream_12, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_108_108, &STATE_VARIABLE_State_109_109);
                    mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_109_109, &STATE_VARIABLE_State_111_111);
                    switch (OpGtOrGe_41) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        NewPriority_42 = OpPriority_40;
                        break;
                      case (MR_Integer) 0:
                        NewPriority_42 = mercury__ops__increment_priority_1_f_0(OpPriority_40);
                        break;
                    }
                    mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_188, NewPriority_42, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_111_111, &STATE_VARIABLE_State_114_114);
                    Var_197 = (MR_Unsigned) (OpPriority_40);
                    Var_198 = (MR_Unsigned) (Priority_16);
                    succeeded = (Var_197 < Var_198);
                    if (succeeded)
                    {
                      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));

                      func_1(((MR_Box) (TypeClassInfo_for_writer_185)), Stream_12, ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_State_114_114, STATE_VARIABLE_State_54);
                    }
                    else
                      *STATE_VARIABLE_State_54 = STATE_VARIABLE_State_114_114;
                  }
                }
                else
                {
                  MR_Word OpPriority_172;
                  MR_Word OpGtOrGe_173;

                  succeeded = (MaybePostfix_34 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    OpPriority_172 = ((MR_Word) ((MR_hl_field(1, MaybePostfix_34, (MR_Integer) 0))));
                    OpGtOrGe_173 = ((MR_Unsigned) ((MR_hl_field(1, MaybePostfix_34, (MR_Integer) 1))) & (MR_Integer) 1);
                    {
                      MR_Box STATE_VARIABLE_State_118_118;
                      MR_Box STATE_VARIABLE_State_121_121;
                      MR_Box STATE_VARIABLE_State_123_123;
                      MR_Box STATE_VARIABLE_State_124_124;
                      MR_Word NewPriority_171;
                      MR_Unsigned Var_199 = (MR_Unsigned) (OpPriority_172);
                      MR_Unsigned Var_200 = (MR_Unsigned) (Priority_16);
                      MR_Unsigned Var_205;
                      MR_Unsigned Var_206;

                      succeeded = (Var_199 < Var_200);
                      if (succeeded)
                      {
                        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));

                        func_2(((MR_Box) (TypeClassInfo_for_writer_185)), Stream_12, ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_State_0_53, &STATE_VARIABLE_State_118_118);
                      }
                      else
                        STATE_VARIABLE_State_118_118 = STATE_VARIABLE_State_0_53;
                      switch (OpGtOrGe_173) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          NewPriority_171 = OpPriority_172;
                          break;
                        case (MR_Integer) 0:
                          NewPriority_171 = mercury__ops__increment_priority_1_f_0(OpPriority_172);
                          break;
                      }
                      mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_188, NewPriority_171, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_118_118, &STATE_VARIABLE_State_121_121);
                      mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_121_121, &STATE_VARIABLE_State_123_123);
                      mercury__term_io__format_quoted_atom_agt_5_p_0(TypeClassInfo_for_writer_185, Stream_12, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_123_123, &STATE_VARIABLE_State_124_124);
                      Var_205 = (MR_Unsigned) (OpPriority_172);
                      Var_206 = (MR_Unsigned) (Priority_16);
                      succeeded = (Var_205 < Var_206);
                      if (succeeded)
                      {
                        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));

                        func_3(((MR_Box) (TypeClassInfo_for_writer_185)), Stream_12, ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_State_124_124, STATE_VARIABLE_State_54);
                      }
                      else
                        *STATE_VARIABLE_State_54 = STATE_VARIABLE_State_124_124;
                    }
                  }
                  else
                    mercury__term_io__format_atom_term_prio_anon_vars_std_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_0_53, STATE_VARIABLE_State_54);
                }
              }
              else
              {
                MR_Word Var_189 = ((MR_Word) ((MR_hl_field(1, Var_187, (MR_Integer) 1))));
                MR_Word Var_190 = ((MR_Word) ((MR_hl_field(1, Var_187, (MR_Integer) 0))));

                if ((Var_189 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word LeftGtOrGe_44;
                  MR_Word RightGtOrGe_45;
                  MR_Word OpPriority_182;

                  succeeded = (MaybeInfix_31 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    OpPriority_182 = ((MR_Word) ((MR_hl_field(1, MaybeInfix_31, (MR_Integer) 0))));
                    LeftGtOrGe_44 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_31, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                    RightGtOrGe_45 = ((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_31, (MR_Integer) 1))) & (MR_Integer) 1);
                    {
                      MR_Word LeftPriority_46;
                      MR_Word RightPriority_48;
                      MR_Box STATE_VARIABLE_State_133_133;
                      MR_Word STATE_VARIABLE_VarSet_134_134;
                      MR_Word STATE_VARIABLE_Anon_135_135;
                      MR_Box STATE_VARIABLE_State_136_136;
                      MR_Box STATE_VARIABLE_State_138_138;
                      MR_Box STATE_VARIABLE_State_147_147;
                      MR_Unsigned Var_207 = (MR_Unsigned) (OpPriority_182);
                      MR_Unsigned Var_208 = (MR_Unsigned) (Priority_16);
                      MR_Unsigned Var_216;
                      MR_Unsigned Var_217;

                      succeeded = (Var_207 < Var_208);
                      if (succeeded)
                      {
                        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));

                        func_4(((MR_Box) (TypeClassInfo_for_writer_185)), Stream_12, ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_State_0_53, &STATE_VARIABLE_State_133_133);
                      }
                      else
                        STATE_VARIABLE_State_133_133 = STATE_VARIABLE_State_0_53;
                      switch (LeftGtOrGe_44) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          LeftPriority_46 = OpPriority_182;
                          break;
                        case (MR_Integer) 0:
                          LeftPriority_46 = mercury__ops__increment_priority_1_f_0(OpPriority_182);
                          break;
                      }
                      mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_188, LeftPriority_46, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_134_134, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_135_135, STATE_VARIABLE_State_133_133, &STATE_VARIABLE_State_136_136);
                      succeeded = (strcmp(Atom_14, (MR_String) ",") == 0);
                      if (succeeded)
                        mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_136_136, &STATE_VARIABLE_State_138_138);
                      else
                      {
                        succeeded = (strcmp(Atom_14, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_String Dot_47;

                          succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(Var_190);
                          if (succeeded)
                            Dot_47 = (MR_String) "\'.\'";
                          else
                            Dot_47 = (MR_String) ".";
                          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) (Dot_47)), STATE_VARIABLE_State_136_136, &STATE_VARIABLE_State_138_138);
                        }
                        else
                        {
                          MR_Box STATE_VARIABLE_State_141_141;
                          MR_Box STATE_VARIABLE_State_142_142;

                          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_136_136, &STATE_VARIABLE_State_141_141);
                          mercury__term_io__format_quoted_atom_agt_5_p_0(TypeClassInfo_for_writer_185, Stream_12, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_141_141, &STATE_VARIABLE_State_142_142);
                          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_142_142, &STATE_VARIABLE_State_138_138);
                        }
                      }
                      switch (RightGtOrGe_45) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          RightPriority_48 = OpPriority_182;
                          break;
                        case (MR_Integer) 0:
                          RightPriority_48 = mercury__ops__increment_priority_1_f_0(OpPriority_182);
                          break;
                      }
                      mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_190, RightPriority_48, STATE_VARIABLE_VarSet_134_134, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_135_135, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_138_138, &STATE_VARIABLE_State_147_147);
                      Var_216 = (MR_Unsigned) (OpPriority_182);
                      Var_217 = (MR_Unsigned) (Priority_16);
                      succeeded = (Var_216 < Var_217);
                      if (succeeded)
                      {
                        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));

                        func_5(((MR_Box) (TypeClassInfo_for_writer_185)), Stream_12, ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_State_147_147, STATE_VARIABLE_State_54);
                      }
                      else
                        *STATE_VARIABLE_State_54 = STATE_VARIABLE_State_147_147;
                    }
                  }
                  else
                  {
                    MR_Word OpPriority_177;
                    MR_Word LeftGtOrGe_178;
                    MR_Word RightGtOrGe_179;

                    succeeded = (MaybeBinPrefix_32 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      OpPriority_177 = ((MR_Word) ((MR_hl_field(1, MaybeBinPrefix_32, (MR_Integer) 0))));
                      LeftGtOrGe_178 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_32, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                      RightGtOrGe_179 = ((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_32, (MR_Integer) 1))) & (MR_Integer) 1);
                      {
                        MR_Box STATE_VARIABLE_State_151_151;
                        MR_Box STATE_VARIABLE_State_152_152;
                        MR_Box STATE_VARIABLE_State_154_154;
                        MR_Word STATE_VARIABLE_VarSet_155_155;
                        MR_Word STATE_VARIABLE_Anon_156_156;
                        MR_Box STATE_VARIABLE_State_157_157;
                        MR_Box STATE_VARIABLE_State_159_159;
                        MR_Box STATE_VARIABLE_State_162_162;
                        MR_Word LeftPriority_175;
                        MR_Word RightPriority_176;
                        MR_Unsigned Var_218 = (MR_Unsigned) (OpPriority_177);
                        MR_Unsigned Var_219 = (MR_Unsigned) (Priority_16);
                        MR_Unsigned Var_227;
                        MR_Unsigned Var_228;

                        succeeded = (Var_218 < Var_219);
                        if (succeeded)
                        {
                          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));

                          func_6(((MR_Box) (TypeClassInfo_for_writer_185)), Stream_12, ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_State_0_53, &STATE_VARIABLE_State_151_151);
                        }
                        else
                          STATE_VARIABLE_State_151_151 = STATE_VARIABLE_State_0_53;
                        mercury__term_io__format_quoted_atom_agt_5_p_0(TypeClassInfo_for_writer_185, Stream_12, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_151_151, &STATE_VARIABLE_State_152_152);
                        mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_152_152, &STATE_VARIABLE_State_154_154);
                        switch (LeftGtOrGe_178) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            LeftPriority_175 = OpPriority_177;
                            break;
                          case (MR_Integer) 0:
                            LeftPriority_175 = mercury__ops__increment_priority_1_f_0(OpPriority_177);
                            break;
                        }
                        mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_188, LeftPriority_175, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_155_155, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_156_156, STATE_VARIABLE_State_154_154, &STATE_VARIABLE_State_157_157);
                        mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, Stream_12, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_157_157, &STATE_VARIABLE_State_159_159);
                        switch (RightGtOrGe_179) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            RightPriority_176 = OpPriority_177;
                            break;
                          case (MR_Integer) 0:
                            RightPriority_176 = mercury__ops__increment_priority_1_f_0(OpPriority_177);
                            break;
                        }
                        mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_190, RightPriority_176, STATE_VARIABLE_VarSet_155_155, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_156_156, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_159_159, &STATE_VARIABLE_State_162_162);
                        Var_227 = (MR_Unsigned) (OpPriority_177);
                        Var_228 = (MR_Unsigned) (Priority_16);
                        succeeded = (Var_227 < Var_228);
                        if (succeeded)
                        {
                          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));

                          func_7(((MR_Box) (TypeClassInfo_for_writer_185)), Stream_12, ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_State_162_162, STATE_VARIABLE_State_54);
                        }
                        else
                          *STATE_VARIABLE_State_54 = STATE_VARIABLE_State_162_162;
                      }
                    }
                    else
                      mercury__term_io__format_atom_term_prio_anon_vars_std_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_0_53, STATE_VARIABLE_State_54);
                  }
                }
                else
                  mercury__term_io__format_atom_term_prio_anon_vars_std_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_0_53, STATE_VARIABLE_State_54);
              }
            }
          }
          else
            mercury__term_io__format_atom_term_prio_anon_vars_std_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_0_53, STATE_VARIABLE_State_54);
        }
      }
    }
  }
}

static void MR_CALL 
mercury__term_io__format_term_later_args_9_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word TypeClassInfo_for_op_table_39,
  MR_Word TypeClassInfo_for_writer_40,
  MR_Box Stream_1,
  MR_Box OpTable_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_Anon_0_6,
  MR_Word * STATE_VARIABLE_Anon_7,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_State_9 = STATE_VARIABLE_State_0_8;
      *STATE_VARIABLE_Anon_7 = STATE_VARIABLE_Anon_0_6;
      *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
    }
    else
    {
      MR_Word X_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_State_35_35;
      MR_Word STATE_VARIABLE_VarSet_36_36;
      MR_Word STATE_VARIABLE_Anon_37_37;
      MR_Box STATE_VARIABLE_State_38_38;
      MR_Word Var_42;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_40, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
      MR_Box conv2_Var_42;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Anon_0_6;
      MR_Box next_value_of_STATE_VARIABLE_State_0_8;

      func_0(((MR_Box) (TypeClassInfo_for_writer_40)), Stream_1, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_35_35);
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_39, (MR_Integer) 0)), (MR_Integer) 16))));
      conv2_Var_42 = func_1(((MR_Box) (TypeClassInfo_for_op_table_39)), OpTable_2);
      Var_42 = ((MR_Word) (conv2_Var_42));
      mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_41, TypeClassInfo_for_op_table_39, TypeClassInfo_for_writer_40, Stream_1, OpTable_2, X_23, Var_42, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_Anon_0_6, &STATE_VARIABLE_Anon_37_37, STATE_VARIABLE_State_35_35, &STATE_VARIABLE_State_38_38);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_24;
      next_value_of_STATE_VARIABLE_VarSet_0_4 = STATE_VARIABLE_VarSet_36_36;
      next_value_of_STATE_VARIABLE_Anon_0_6 = STATE_VARIABLE_Anon_37_37;
      next_value_of_STATE_VARIABLE_State_0_8 = STATE_VARIABLE_State_38_38;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_VarSet_0_4 = next_value_of_STATE_VARIABLE_VarSet_0_4;
      STATE_VARIABLE_Anon_0_6 = next_value_of_STATE_VARIABLE_Anon_0_6;
      STATE_VARIABLE_State_0_8 = next_value_of_STATE_VARIABLE_State_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__term_io__format_atom_term_prio_anon_vars_std_11_p_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word TypeClassInfo_for_op_table_44,
  MR_Word TypeClassInfo_for_writer_45,
  MR_Box Stream_12,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_Anon_0_24,
  MR_Word * STATE_VARIABLE_Anon_25,
  MR_Box STATE_VARIABLE_State_0_26,
  MR_Box * STATE_VARIABLE_State_27)
{
  MR_bool succeeded = (ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Box STATE_VARIABLE_State_33_33;
  MR_Word Var_28;
  MR_Unsigned Var_47;
  MR_Unsigned Var_48;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_28;

  if (succeeded)
  {
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_44, (MR_Integer) 0)), (MR_Integer) 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_44)), OpTable_13, ((MR_Box) (Atom_14)));
    if (succeeded)
    {
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_44, (MR_Integer) 0)), (MR_Integer) 13))));
      conv2_Var_28 = func_1(((MR_Box) (TypeClassInfo_for_op_table_44)), OpTable_13);
      Var_28 = ((MR_Word) (conv2_Var_28));
      Var_47 = (MR_Unsigned) (Priority_16);
      Var_48 = (MR_Unsigned) (Var_28);
      succeeded = (Var_47 > Var_48);
      if (!(succeeded))
        succeeded = (Var_47 == Var_48);
    }
  }
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_State_30_30;
    MR_Box STATE_VARIABLE_State_31_31;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_3(((MR_Box) (TypeClassInfo_for_writer_45)), Stream_12, ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_State_0_26, &STATE_VARIABLE_State_30_30);
    mercury__term_io__format_quoted_atom_agt_5_p_0(TypeClassInfo_for_writer_45, Stream_12, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_writer_45)), Stream_12, ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_State_31_31, &STATE_VARIABLE_State_33_33);
  }
  else
    mercury__term_io__format_quoted_atom_agt_5_p_0(TypeClassInfo_for_writer_45, Stream_12, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_0_26, &STATE_VARIABLE_State_33_33);
  if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
    *STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
    *STATE_VARIABLE_State_27 = STATE_VARIABLE_State_33_33;
  }
  else
  {
    MR_Word HeadArgTerm_20 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
    MR_Word TailArgTerms_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_State_36_36;
    MR_Word STATE_VARIABLE_VarSet_37_37;
    MR_Word STATE_VARIABLE_Anon_38_38;
    MR_Box STATE_VARIABLE_State_39_39;
    MR_Box STATE_VARIABLE_State_42_42;
    MR_Word Var_51;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_5(((MR_Box) (TypeClassInfo_for_writer_45)), Stream_12, ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_State_33_33, &STATE_VARIABLE_State_36_36);
    Var_51 = mercury__ops__arg_priority_1_f_0(TypeClassInfo_for_op_table_44, OpTable_13);
    mercury__term_io__format_term_prio_anon_vars_10_p_0(TypeInfo_for_T_46, TypeClassInfo_for_op_table_44, TypeClassInfo_for_writer_45, Stream_12, OpTable_13, HeadArgTerm_20, Var_51, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_Anon_0_24, &STATE_VARIABLE_Anon_38_38, STATE_VARIABLE_State_36_36, &STATE_VARIABLE_State_39_39);
    mercury__term_io__format_term_later_args_9_p_0(TypeInfo_for_T_46, TypeClassInfo_for_op_table_44, TypeClassInfo_for_writer_45, Stream_12, OpTable_13, TailArgTerms_21, STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_Anon_38_38, STATE_VARIABLE_Anon_25, STATE_VARIABLE_State_39_39, &STATE_VARIABLE_State_42_42);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    func_6(((MR_Box) (TypeClassInfo_for_writer_45)), Stream_12, ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_State_42_42, STATE_VARIABLE_State_27);
  }
}

void MR_CALL 
mercury__term_io__format_constant_agt_5_p_0(
  MR_Word TypeClassInfo_for_writer_32,
  MR_Box Stream_6,
  MR_Word Const_7,
  MR_Word AGT_8,
  MR_Box STATE_VARIABLE_State_0_21,
  MR_Box * STATE_VARIABLE_State_22)
{
  switch (MR_tag((MR_Word) Const_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Atom_18 = ((MR_String) ((MR_hl_field(0, Const_7, (MR_Integer) 0))));

        mercury__term_io__format_quoted_atom_agt_5_p_0(TypeClassInfo_for_writer_32, Stream_6, Atom_18, AGT_8, STATE_VARIABLE_State_0_21, STATE_VARIABLE_State_22);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Base_10 = ((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word Int_11 = ((MR_Word) ((MR_hl_field(1, Const_7, (MR_Integer) 1))));
        MR_Word Signedness_12 = ((((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        MR_Word Size_13 = ((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 2))) & (MR_Integer) 7);
        MR_String Prefix_14 = ((&mercury__term_io_vector_common_8[8 + Base_10]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0;
        MR_String IntStr_15;
        MR_String Suffix_16;
        MR_Integer Var_23 = ((&mercury__term_io_vector_common_8[8 + Base_10]))->mercury__term_io__vector_common_type_8_0__vct_8_f_1;
        MR_Box STATE_VARIABLE_State_24_24;
        MR_Box STATE_VARIABLE_State_25_25;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        IntStr_15 = mercury__integer__to_base_string_2_f_0(Int_11, Var_23);
        switch (Signedness_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Suffix_16 = ((&mercury__term_io_vector_common_7[32 + Size_13]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
            break;
          case (MR_Integer) 1:
            Suffix_16 = ((&mercury__term_io_vector_common_7[37 + Size_13]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
            break;
        }
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_6, ((MR_Box) (Prefix_14)), STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_24_24);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_6, ((MR_Box) (IntStr_15)), STATE_VARIABLE_State_24_24, &STATE_VARIABLE_State_25_25);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_6, ((MR_Box) (Suffix_16)), STATE_VARIABLE_State_25_25, STATE_VARIABLE_State_22);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Str_19 = ((MR_String) ((MR_hl_field(2, Const_7, (MR_Integer) 0))));
        MR_Box STATE_VARIABLE_State_11_34;
        MR_Box STATE_VARIABLE_State_12_35;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_5(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_6, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_11_34);
        mercury__term_io__format_escaped_string_4_p_0(TypeClassInfo_for_writer_32, Stream_6, Str_19, STATE_VARIABLE_State_11_34, &STATE_VARIABLE_State_12_35);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_6(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_6, ((MR_Box) ((MR_String) "\"")), STATE_VARIABLE_State_12_35, STATE_VARIABLE_State_22);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float Float_17 = MR_unbox_float((MR_hl_field(3, Const_7, (MR_Integer) 1)));

            mercury__stream__string_writer__put_float_4_p_0(TypeClassInfo_for_writer_32, Stream_6, Float_17, STATE_VARIABLE_State_0_21, STATE_VARIABLE_State_22);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ImplDef_20 = ((MR_String) ((MR_hl_field(3, Const_7, (MR_Integer) 1))));
            MR_Box STATE_VARIABLE_State_31_31;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_0(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_6, ((MR_Box) ((MR_String) "\044")), STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_31_31);
            func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
            func_1(((MR_Box) (TypeClassInfo_for_writer_32)), Stream_6, ((MR_Box) (ImplDef_20)), STATE_VARIABLE_State_31_31, STATE_VARIABLE_State_22);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
mercury__term_io__format_quoted_atom_agt_5_p_0(
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_6,
  MR_String Str_7,
  MR_Word AGT_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  MR_bool succeeded;
  MR_Word ShouldQuote_10;

  {
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 3;
    MR_Integer mid_2;
    MR_Integer result_3;

    // binary string simple lookup switch
    ;
    do
    {
      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(Str_7, ((&mercury__term_io_vector_common_7[28 + mid_2]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
  }
  if (!(succeeded))
  {
    {
      MR_Integer Var_22;
      MR_Char Var_23;
      MR_Char Var_24;
      MR_Integer Var_27;

      succeeded = mercury__term_io__all_match_loop__ho97_3_p_in__string_0(Str_7, (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (strcmp(Str_7, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_22 = (MR_Integer) 0;
          Var_23 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__format_quoted_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_27  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__format_quoted_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_22 ;
	Length = Var_27 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_io__format_quoted_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_7 ;
	Index = Var_22 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	Var_24  = Ch;
}
            succeeded = (Var_23 == Var_24);
          }
          succeeded = !(succeeded);
          if (succeeded)
            succeeded = (AGT_8 == (MR_Integer) 1);
        }
      }
    }
    if (!(succeeded))
    {
      MR_Char FirstChar_19;
      MR_Integer Var_28;
      MR_Char Var_29;

{
#define MR_PROC_LABEL mercury__term_io__format_quoted_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_28  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__format_quoted_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Var_28 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__term_io__format_quoted_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_7 ;
	Index = (MR_Integer) 0 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	FirstChar_19  = Ch;
}
        succeeded = mercury__char__lower_upper_2_p_0(FirstChar_19, &Var_29);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__term_io__format_quoted_atom_agt_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = Str_7 ;
		{

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        }
      }
    }
  }
  if (succeeded)
    ShouldQuote_10 = (MR_Integer) 0;
  else
    ShouldQuote_10 = (MR_Integer) 1;
  switch (ShouldQuote_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_6, ((MR_Box) (Str_7)), STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box STATE_VARIABLE_State_15_15;
        MR_Box STATE_VARIABLE_State_16_16;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_1(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_6, ((MR_Box) ((MR_String) "\'")), STATE_VARIABLE_State_0_11, &STATE_VARIABLE_State_15_15);
        mercury__term_io__format_escaped_string_4_p_0(TypeClassInfo_for_writer_18, Stream_6, Str_7, STATE_VARIABLE_State_15_15, &STATE_VARIABLE_State_16_16);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_6, ((MR_Box) ((MR_String) "\'")), STATE_VARIABLE_State_16_16, STATE_VARIABLE_State_12);
      }
      break;
  }
}

void MR_CALL 
mercury__term_io__format_escaped_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Box Stream_5,
  MR_String Str_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  MR_bool succeeded;
  MR_Integer Var_17;
  MR_Integer Var_21;
  MR_Integer Var_22;

{
#define MR_PROC_LABEL mercury__term_io__format_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_17  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__format_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_22  = Length;
}
  succeeded = (Var_17 < Var_22);
  if (succeeded)
    Var_21 = Var_17;
  else
    Var_21 = Var_22;
  mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_53_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(TypeClassInfo_for_writer_11, Stream_5, Str_6, (MR_Integer) 0, Var_21, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_53_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Box Var_18,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);
    MR_Integer Var_13;
    MR_Char Var_14;
    MR_Integer Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_53_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_8 ;
	Index = HeadVar__3_9 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_13  = NextIndex;
	Var_14  = Ch;
	Var_19  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Var_13 <= HeadVar__4_10);
    }
    if (succeeded)
    {
      MR_Box Var_15;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

      mercury__term_io__format_escaped_char_4_p_0(Var_17, Var_18, Var_14, HeadVar__5_11, &Var_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      next_value_of_HeadVar__5_11 = Var_15;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    else
      *HeadVar__6_12 = HeadVar__5_11;
    break;
  }
}

void MR_CALL 
mercury__term_io__format_escaped_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_5,
  MR_Char Char_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  MR_bool succeeded;
  MR_Char QuoteChar_8;

  switch (Char_6) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 7:
      {
        QuoteChar_8 = (MR_Char) 97;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 8:
      {
        QuoteChar_8 = (MR_Char) 98;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 9:
      {
        QuoteChar_8 = (MR_Char) 116;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 10:
      {
        QuoteChar_8 = (MR_Char) 110;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 11:
      {
        QuoteChar_8 = (MR_Char) 118;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 12:
      {
        QuoteChar_8 = (MR_Char) 102;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 13:
      {
        QuoteChar_8 = (MR_Char) 114;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 34:
      {
        QuoteChar_8 = (MR_Char) 34;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 39:
      {
        QuoteChar_8 = (MR_Char) 39;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 92:
      {
        QuoteChar_8 = (MR_Char) 92;
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_State_12_12;
    MR_String Var_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_5, ((MR_Box) ((MR_String) "\\")), STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_12_12);
    mercury__string__char_to_string_2_p_0(QuoteChar_8, &Var_13);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_5, ((MR_Box) (Var_13)), STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_10);
  }
  else
  {
    succeeded = mercury__char__is_alnum_1_p_0(Char_6);
    if (!(succeeded))
    {
      if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
        if ((((mercury__term_io_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
      if (!(succeeded))
      {
        MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__term_io__format_escaped_char_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_19  = Int;
}
        succeeded = (Var_19 >= (MR_Integer) 160);
      }
    }
    if (succeeded)
    {
      MR_String Var_15;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__string__char_to_string_2_p_0(Char_6, &Var_15);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_5, ((MR_Box) (Var_15)), STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
    }
    else
    {
      MR_String Var_17;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      Var_17 = mercury__term_io__mercury_escape_char_1_f_0(Char_6);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_5, ((MR_Box) (Var_17)), STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
    }
  }
}

void MR_CALL 
mercury__term_io__write_term_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word OutStream_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  MR_Word Var_19;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_19;
  MR_Word Var_16;
  MR_Word Var_17;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_19 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_19 = ((MR_Word) (conv1_Var_19));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_19, VarSet_7, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17);
}

void MR_CALL 
mercury__term_io__write_term_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSet_5,
  MR_Word Term_6)
{
  MR_Word OutStream_8;
  MR_Box Var_14;
  MR_Word Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_20;
  MR_Word Var_17;
  MR_Word Var_18;

{
#define MR_PROC_LABEL mercury__term_io__write_term_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Stream;
}
  OutStream_8 = (MR_Word) (Var_14);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_20 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_20 = ((MR_Word) (conv1_Var_20));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_3[1]), OutStream_8, ((MR_Box) ((MR_Integer) 0)), Term_6, Var_20, VarSet_5, &Var_17, (MR_Word) ((MR_Unsigned) 0U), &Var_18);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_48,
  MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_46,
  MR_Word tscc_proc_1_input_3_TypeClassInfo_for_writer_47,
  MR_Word tscc_proc_1_input_4_Stream_11,
  MR_Box tscc_proc_1_input_5_OpTable_12,
  MR_Word tscc_proc_1_input_6_Term_13,
  MR_Word tscc_proc_1_input_7_Priority_14,
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_34,
  MR_Word tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Anon_36)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_39;
  MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
  MR_Word tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
  MR_Word tscc_proc_2_input_4_Stream_10;
  MR_Box tscc_proc_2_input_5_OpTable_11;
  MR_Word tscc_proc_2_input_6_Var_12;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22;
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24;
  MR_Word tscc_output_1_STATE_VARIABLE_VarSet_34;
  MR_Word tscc_output_2_STATE_VARIABLE_Anon_36;

  // The code for TSCC PROC 1: pred term_io.TypeSpecOf__pred__format_term_prio_anon_vars__[Stream = io.text_output_stream, State = io.state]_0_1/10-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred term_io.TypeSpecOf__pred__format_term_prio_anon_vars__[Stream = io.text_output_stream, State = io.state]_0_1/10-0
  ;
  // proc 2 in TSCC: pred term_io.TypeSpecOf__pred__format_variable_anon_vars__[Stream = io.text_output_stream, State = io.state]_0_1/9-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_T_48 = tscc_proc_1_input_1_TypeInfo_for_T_48;
    MR_Word TypeClassInfo_for_op_table_46 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
    MR_Word TypeClassInfo_for_writer_47 = tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
    MR_Word Stream_11 = tscc_proc_1_input_4_Stream_11;
    MR_Box OpTable_12 = tscc_proc_1_input_5_OpTable_12;
    MR_Word Term_13 = tscc_proc_1_input_6_Term_13;
    MR_Word Priority_14 = tscc_proc_1_input_7_Priority_14;
    MR_Word STATE_VARIABLE_VarSet_0_33 = tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
    MR_Word STATE_VARIABLE_VarSet_34;
    MR_Word STATE_VARIABLE_Anon_0_35 = tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
    MR_Word STATE_VARIABLE_Anon_36;

    if (((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0))
    {
      MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 0))));
      MR_Word ArgTerms_21 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Functor_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Atom_32 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));

            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_48, TypeClassInfo_for_op_table_46, TypeClassInfo_for_writer_47, Stream_11, OpTable_12, Atom_32, ArgTerms_21, Priority_14, STATE_VARIABLE_VarSet_0_33, &STATE_VARIABLE_VarSet_34, STATE_VARIABLE_Anon_0_35, &STATE_VARIABLE_Anon_36);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_47, Stream_11, Functor_20, (MR_Integer) 0);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
        case (MR_Integer) 3:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_47, Stream_11, Functor_20, (MR_Integer) 0);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
      }
    }
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, Term_13, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39 = TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = TypeClassInfo_for_writer_47;
      MR_Word next_value_of_tscc_proc_2_input_4_Stream_10 = Stream_11;
      MR_Box next_value_of_tscc_proc_2_input_5_OpTable_11 = OpTable_12;
      MR_Word next_value_of_tscc_proc_2_input_6_Var_12 = Var_18;
      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22 = STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24 = STATE_VARIABLE_Anon_0_35;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_39 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39;
      tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
      tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
      tscc_proc_2_input_4_Stream_10 = next_value_of_tscc_proc_2_input_4_Stream_10;
      tscc_proc_2_input_5_OpTable_11 = next_value_of_tscc_proc_2_input_5_OpTable_11;
      tscc_proc_2_input_6_Var_12 = next_value_of_tscc_proc_2_input_6_Var_12;
      tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22;
      tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_34;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_36;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_39 = tscc_proc_2_input_1_TypeInfo_for_T_39;
    MR_Word TypeClassInfo_for_op_table_37 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
    MR_Word TypeClassInfo_for_writer_38 = tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
    MR_Word Stream_10 = tscc_proc_2_input_4_Stream_10;
    MR_Box OpTable_11 = tscc_proc_2_input_5_OpTable_11;
    MR_Word Var_12 = tscc_proc_2_input_6_Var_12;
    MR_Word STATE_VARIABLE_VarSet_0_22 = tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22;
    MR_Word STATE_VARIABLE_VarSet_23;
    MR_Word STATE_VARIABLE_Anon_0_24 = tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24;
    MR_Word STATE_VARIABLE_Anon_25;
    MR_bool succeeded;
    MR_Word Value_16;
    MR_Word TypeInfo_12_52;
    MR_Word TypeInfo_14_54;
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 2))));
    MR_Box conv0_Value_16;

    {
      TypeInfo_12_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_12_52, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_12_52, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    {
      TypeInfo_14_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_54, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_14_54, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_52, TypeInfo_14_54, Var_50, Var_12, &conv0_Value_16);
    if (succeeded)
    {
      Value_16 = ((MR_Word) (conv0_Value_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_56;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      MR_Word next_value_of_tscc_proc_1_input_4_Stream_11;
      MR_Box next_value_of_tscc_proc_1_input_5_OpTable_12;
      MR_Word next_value_of_tscc_proc_1_input_6_Term_13;
      MR_Word next_value_of_tscc_proc_1_input_7_Priority_14;
      MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;

      Var_56 = mercury__ops__universal_priority_1_f_0(TypeClassInfo_for_op_table_37, OpTable_11);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48 = TypeInfo_for_T_39;
      next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = TypeClassInfo_for_op_table_37;
      next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = TypeClassInfo_for_writer_38;
      next_value_of_tscc_proc_1_input_4_Stream_11 = Stream_10;
      next_value_of_tscc_proc_1_input_5_OpTable_12 = OpTable_11;
      next_value_of_tscc_proc_1_input_6_Term_13 = Value_16;
      next_value_of_tscc_proc_1_input_7_Priority_14 = Var_56;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33 = STATE_VARIABLE_VarSet_0_22;
      next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35 = STATE_VARIABLE_Anon_0_24;
      tscc_proc_1_input_1_TypeInfo_for_T_48 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      tscc_proc_1_input_4_Stream_11 = next_value_of_tscc_proc_1_input_4_Stream_11;
      tscc_proc_1_input_5_OpTable_12 = next_value_of_tscc_proc_1_input_5_OpTable_12;
      tscc_proc_1_input_6_Term_13 = next_value_of_tscc_proc_1_input_6_Term_13;
      tscc_proc_1_input_7_Priority_14 = next_value_of_tscc_proc_1_input_7_Priority_14;
      tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
      tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35 = next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
      goto top_of_proc_1;
    }
    else
    {
      MR_String Name_17;
      MR_Word TypeInfo_12_61;
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 1))));
      MR_Box conv1_Name_17;

      {
        TypeInfo_12_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_61, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_12_61, 1) = ((MR_Box) (TypeInfo_for_T_39));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_61, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, Var_12, &conv1_Name_17);
      if (succeeded)
      {
        Name_17 = ((MR_String) (conv1_Name_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv3_STATE_VARIABLE_State_27;

        func_2(((MR_Box) (TypeClassInfo_for_writer_38)), ((MR_Box) (Stream_10)), ((MR_Box) (Name_17)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_27);
        STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
      }
      else
      {
        MR_Integer VarNum_18;
        MR_String VarName_21;
        MR_String Var_40;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_State_27;

        if ((STATE_VARIABLE_Anon_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          VarNum_18 = (MR_Integer) (Var_12);
          STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        }
        else
        {
          MR_Word Counter0_19 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Anon_0_24, (MR_Integer) 0))));
          MR_Word Counter_20;
          MR_Integer Var_64;

          VarNum_18 = (MR_Integer) (Counter0_19);
          Var_64 = (MR_Integer) ((MR_Unsigned) VarNum_18 + (MR_Unsigned) 1);
          Counter_20 = (MR_Word) (Var_64);
          {
            STATE_VARIABLE_Anon_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Anon_25, 0) = ((MR_Box) (Counter_20));
          }
        }
        mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__term_io_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), VarNum_18, &Var_40);
        mercury__string__append_3_p_2((MR_String) "_", Var_40, &VarName_21);
        mercury__varset__name_var_4_p_0(TypeInfo_for_T_39, Var_12, VarName_21, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_23);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_writer_38)), ((MR_Box) (Stream_10)), ((MR_Box) (VarName_21)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_27);
      }
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_23;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_25;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_VarSet_34 = tscc_output_1_STATE_VARIABLE_VarSet_34;
  *tscc_output_ptr_2_STATE_VARIABLE_Anon_36 = tscc_output_2_STATE_VARIABLE_Anon_36;
  return;
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_39,
  MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_37,
  MR_Word tscc_proc_2_input_3_TypeClassInfo_for_writer_38,
  MR_Word tscc_proc_2_input_4_Stream_10,
  MR_Box tscc_proc_2_input_5_OpTable_11,
  MR_Word tscc_proc_2_input_6_Var_12,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_34,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Anon_36)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_48;
  MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
  MR_Word tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
  MR_Word tscc_proc_1_input_4_Stream_11;
  MR_Box tscc_proc_1_input_5_OpTable_12;
  MR_Word tscc_proc_1_input_6_Term_13;
  MR_Word tscc_proc_1_input_7_Priority_14;
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
  MR_Word tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
  MR_Word tscc_output_1_STATE_VARIABLE_VarSet_34;
  MR_Word tscc_output_2_STATE_VARIABLE_Anon_36;

  // The code for TSCC PROC 2: pred term_io.TypeSpecOf__pred__format_variable_anon_vars__[Stream = io.text_output_stream, State = io.state]_0_1/9-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred term_io.TypeSpecOf__pred__format_term_prio_anon_vars__[Stream = io.text_output_stream, State = io.state]_0_1/10-0
  ;
  // proc 2 in TSCC: pred term_io.TypeSpecOf__pred__format_variable_anon_vars__[Stream = io.text_output_stream, State = io.state]_0_1/9-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_T_48 = tscc_proc_1_input_1_TypeInfo_for_T_48;
    MR_Word TypeClassInfo_for_op_table_46 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
    MR_Word TypeClassInfo_for_writer_47 = tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
    MR_Word Stream_11 = tscc_proc_1_input_4_Stream_11;
    MR_Box OpTable_12 = tscc_proc_1_input_5_OpTable_12;
    MR_Word Term_13 = tscc_proc_1_input_6_Term_13;
    MR_Word Priority_14 = tscc_proc_1_input_7_Priority_14;
    MR_Word STATE_VARIABLE_VarSet_0_33 = tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
    MR_Word STATE_VARIABLE_VarSet_34;
    MR_Word STATE_VARIABLE_Anon_0_35 = tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
    MR_Word STATE_VARIABLE_Anon_36;

    if (((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0))
    {
      MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 0))));
      MR_Word ArgTerms_21 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Functor_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Atom_32 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));

            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_48, TypeClassInfo_for_op_table_46, TypeClassInfo_for_writer_47, Stream_11, OpTable_12, Atom_32, ArgTerms_21, Priority_14, STATE_VARIABLE_VarSet_0_33, &STATE_VARIABLE_VarSet_34, STATE_VARIABLE_Anon_0_35, &STATE_VARIABLE_Anon_36);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_47, Stream_11, Functor_20, (MR_Integer) 0);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
        case (MR_Integer) 3:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_47, Stream_11, Functor_20, (MR_Integer) 0);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
      }
    }
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, Term_13, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39 = TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = TypeClassInfo_for_writer_47;
      MR_Word next_value_of_tscc_proc_2_input_4_Stream_10 = Stream_11;
      MR_Box next_value_of_tscc_proc_2_input_5_OpTable_11 = OpTable_12;
      MR_Word next_value_of_tscc_proc_2_input_6_Var_12 = Var_18;
      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22 = STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24 = STATE_VARIABLE_Anon_0_35;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_39 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39;
      tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
      tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
      tscc_proc_2_input_4_Stream_10 = next_value_of_tscc_proc_2_input_4_Stream_10;
      tscc_proc_2_input_5_OpTable_11 = next_value_of_tscc_proc_2_input_5_OpTable_11;
      tscc_proc_2_input_6_Var_12 = next_value_of_tscc_proc_2_input_6_Var_12;
      tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22;
      tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_34;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_36;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_39 = tscc_proc_2_input_1_TypeInfo_for_T_39;
    MR_Word TypeClassInfo_for_op_table_37 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
    MR_Word TypeClassInfo_for_writer_38 = tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
    MR_Word Stream_10 = tscc_proc_2_input_4_Stream_10;
    MR_Box OpTable_11 = tscc_proc_2_input_5_OpTable_11;
    MR_Word Var_12 = tscc_proc_2_input_6_Var_12;
    MR_Word STATE_VARIABLE_VarSet_0_22 = tscc_proc_2_input_7_STATE_VARIABLE_VarSet_0_22;
    MR_Word STATE_VARIABLE_VarSet_23;
    MR_Word STATE_VARIABLE_Anon_0_24 = tscc_proc_2_input_8_STATE_VARIABLE_Anon_0_24;
    MR_Word STATE_VARIABLE_Anon_25;
    MR_bool succeeded;
    MR_Word Value_16;
    MR_Word TypeInfo_12_52;
    MR_Word TypeInfo_14_54;
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 2))));
    MR_Box conv0_Value_16;

    {
      TypeInfo_12_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_12_52, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_12_52, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    {
      TypeInfo_14_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_54, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_14_54, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_52, TypeInfo_14_54, Var_50, Var_12, &conv0_Value_16);
    if (succeeded)
    {
      Value_16 = ((MR_Word) (conv0_Value_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_56;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      MR_Word next_value_of_tscc_proc_1_input_4_Stream_11;
      MR_Box next_value_of_tscc_proc_1_input_5_OpTable_12;
      MR_Word next_value_of_tscc_proc_1_input_6_Term_13;
      MR_Word next_value_of_tscc_proc_1_input_7_Priority_14;
      MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;

      Var_56 = mercury__ops__universal_priority_1_f_0(TypeClassInfo_for_op_table_37, OpTable_11);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48 = TypeInfo_for_T_39;
      next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = TypeClassInfo_for_op_table_37;
      next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = TypeClassInfo_for_writer_38;
      next_value_of_tscc_proc_1_input_4_Stream_11 = Stream_10;
      next_value_of_tscc_proc_1_input_5_OpTable_12 = OpTable_11;
      next_value_of_tscc_proc_1_input_6_Term_13 = Value_16;
      next_value_of_tscc_proc_1_input_7_Priority_14 = Var_56;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33 = STATE_VARIABLE_VarSet_0_22;
      next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35 = STATE_VARIABLE_Anon_0_24;
      tscc_proc_1_input_1_TypeInfo_for_T_48 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      tscc_proc_1_input_4_Stream_11 = next_value_of_tscc_proc_1_input_4_Stream_11;
      tscc_proc_1_input_5_OpTable_12 = next_value_of_tscc_proc_1_input_5_OpTable_12;
      tscc_proc_1_input_6_Term_13 = next_value_of_tscc_proc_1_input_6_Term_13;
      tscc_proc_1_input_7_Priority_14 = next_value_of_tscc_proc_1_input_7_Priority_14;
      tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_VarSet_0_33;
      tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35 = next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_Anon_0_35;
      goto top_of_proc_1;
    }
    else
    {
      MR_String Name_17;
      MR_Word TypeInfo_12_61;
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 1))));
      MR_Box conv1_Name_17;

      {
        TypeInfo_12_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_61, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_12_61, 1) = ((MR_Box) (TypeInfo_for_T_39));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_61, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, Var_12, &conv1_Name_17);
      if (succeeded)
      {
        Name_17 = ((MR_String) (conv1_Name_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv3_STATE_VARIABLE_State_27;

        func_2(((MR_Box) (TypeClassInfo_for_writer_38)), ((MR_Box) (Stream_10)), ((MR_Box) (Name_17)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_27);
        STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
      }
      else
      {
        MR_Integer VarNum_18;
        MR_String VarName_21;
        MR_String Var_40;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_State_27;

        if ((STATE_VARIABLE_Anon_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          VarNum_18 = (MR_Integer) (Var_12);
          STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        }
        else
        {
          MR_Word Counter0_19 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Anon_0_24, (MR_Integer) 0))));
          MR_Word Counter_20;
          MR_Integer Var_64;

          VarNum_18 = (MR_Integer) (Counter0_19);
          Var_64 = (MR_Integer) ((MR_Unsigned) VarNum_18 + (MR_Unsigned) 1);
          Counter_20 = (MR_Word) (Var_64);
          {
            STATE_VARIABLE_Anon_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Anon_25, 0) = ((MR_Box) (Counter_20));
          }
        }
        mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__term_io_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), VarNum_18, &Var_40);
        mercury__string__append_3_p_2((MR_String) "_", Var_40, &VarName_21);
        mercury__varset__name_var_4_p_0(TypeInfo_for_T_39, Var_12, VarName_21, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_23);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_writer_38)), ((MR_Box) (Stream_10)), ((MR_Box) (VarName_21)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_27);
      }
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_23;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_25;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_VarSet_34 = tscc_output_1_STATE_VARIABLE_VarSet_34;
  *tscc_output_ptr_2_STATE_VARIABLE_Anon_36 = tscc_output_2_STATE_VARIABLE_Anon_36;
  return;
}

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_108_97_116_101_114_95_108_105_115_116_95_101_108_101_109_101_110_116_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word TypeClassInfo_for_op_table_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Word Stream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_Anon_0_25,
  MR_Word * STATE_VARIABLE_Anon_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 1);
    MR_Word Value_18;
    MR_Word TypeCtorInfo_11_56;
    MR_Word TypeInfo_12_57;
    MR_Word TypeCtorInfo_13_58;
    MR_Word TypeInfo_14_59;
    MR_Word Var_16;
    MR_Word Var_55;
    MR_Box conv0_Value_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(1, Term_12, (MR_Integer) 0))));
      Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_23, (MR_Integer) 2))));
      TypeCtorInfo_11_56 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
      TypeCtorInfo_13_58 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
      {
        TypeInfo_12_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_57, 0) = ((MR_Box) (TypeCtorInfo_11_56));
        MR_hl_field(0, TypeInfo_12_57, 1) = ((MR_Box) (TypeInfo_for_T_52));
      }
      {
        TypeInfo_14_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_14_59, 0) = ((MR_Box) (TypeCtorInfo_13_58));
        MR_hl_field(0, TypeInfo_14_59, 1) = ((MR_Box) (TypeInfo_for_T_52));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_52, TypeInfo_12_57, TypeInfo_14_59, Var_55, Var_16, &conv0_Value_18);
      if (succeeded)
      {
        Value_18 = ((MR_Word) (conv0_Value_18));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_Term_12 = Value_18;

      // direct tailcall eliminated
      ;
      Term_12 = next_value_of_Term_12;
      continue;
    }
    else
    {
      MR_Word ListHead_19;
      MR_Word ListTail_20;
      MR_Word Var_32;
      MR_String Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;

      succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_32 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 0))));
        Var_34 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_33 = ((MR_String) ((MR_hl_field(0, Var_32, (MR_Integer) 0))));
          succeeded = (strcmp(Var_33, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ListHead_19 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
              Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));
              succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ListTail_20 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
                Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
                succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_VarSet_39_39;
        MR_Word STATE_VARIABLE_Anon_40_40;
        MR_Word Var_61;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv2_STATE_VARIABLE_State_38_38;
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box);
        MR_Box conv4_Var_61;
        MR_Word next_value_of_Term_12;
        MR_Word next_value_of_STATE_VARIABLE_VarSet_0_23;
        MR_Word next_value_of_STATE_VARIABLE_Anon_0_25;

        func_1(((MR_Box) (TypeClassInfo_for_writer_51)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_State_38_38);
        func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_50, (MR_Integer) 0)), (MR_Integer) 16))));
        conv4_Var_61 = func_3(((MR_Box) (TypeClassInfo_for_op_table_50)), OpTable_11);
        Var_61 = ((MR_Word) (conv4_Var_61));
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_52, TypeClassInfo_for_op_table_50, TypeClassInfo_for_writer_51, Stream_10, OpTable_11, ListHead_19, Var_61, STATE_VARIABLE_VarSet_0_23, &STATE_VARIABLE_VarSet_39_39, STATE_VARIABLE_Anon_0_25, &STATE_VARIABLE_Anon_40_40);
        // direct tailcall eliminated
        ;
        next_value_of_Term_12 = ListTail_20;
        next_value_of_STATE_VARIABLE_VarSet_0_23 = STATE_VARIABLE_VarSet_39_39;
        next_value_of_STATE_VARIABLE_Anon_0_25 = STATE_VARIABLE_Anon_40_40;
        Term_12 = next_value_of_Term_12;
        STATE_VARIABLE_VarSet_0_23 = next_value_of_STATE_VARIABLE_VarSet_0_23;
        STATE_VARIABLE_Anon_0_25 = next_value_of_STATE_VARIABLE_Anon_0_25;
        continue;
      }
      else
      {
        MR_Word Var_45;
        MR_String Var_46;
        MR_Word Var_47;

        succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 0))));
          Var_47 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_46 = ((MR_String) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
            succeeded = (strcmp(Var_46, (MR_String) "[]") == 0);
            if (succeeded)
              succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          *STATE_VARIABLE_Anon_26 = STATE_VARIABLE_Anon_0_25;
          *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
        }
        else
        {
          MR_Word Var_62;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv6_STATE_VARIABLE_State_49_49;
          MR_Box MR_CALL (* func_7)(MR_Box, MR_Box);
          MR_Box conv8_Var_62;

          func_5(((MR_Box) (TypeClassInfo_for_writer_51)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " | ")), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_State_49_49);
          func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_50, (MR_Integer) 0)), (MR_Integer) 12))));
          conv8_Var_62 = func_7(((MR_Box) (TypeClassInfo_for_op_table_50)), OpTable_11);
          Var_62 = ((MR_Word) (conv8_Var_62));
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_52, TypeClassInfo_for_op_table_50, TypeClassInfo_for_writer_51, Stream_10, OpTable_11, Term_12, Var_62, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_Anon_0_25, STATE_VARIABLE_Anon_26);
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word TypeClassInfo_for_writer_24,
  MR_Word Stream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_22;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_11);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_25, TypeClassInfo_for_op_table_23, TypeClassInfo_for_writer_24, Stream_10, OpTable_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_Anon_0_18, STATE_VARIABLE_Anon_19);
}

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_114_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word TypeClassInfo_for_writer_24,
  MR_Word Stream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 16))));
  MR_Box conv1_Var_22;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_11);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_25, TypeClassInfo_for_op_table_23, TypeClassInfo_for_writer_24, Stream_10, OpTable_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_Anon_0_18, STATE_VARIABLE_Anon_19);
}

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeInfo_for_T_186,
  MR_Word TypeClassInfo_for_op_table_184,
  MR_Word TypeClassInfo_for_writer_185,
  MR_Word Stream_12,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_Anon_0_51,
  MR_Word * STATE_VARIABLE_Anon_52)
{
  MR_bool succeeded = (strcmp(Atom_14, (MR_String) "[|]") == 0);
  MR_Word ListHead_20;
  MR_Word ListTail_21;
  MR_Word Var_55;
  MR_Word Var_56;

  if (succeeded)
  {
    succeeded = (ArgTerms_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ListHead_20 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
      Var_55 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
      succeeded = (Var_55 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListTail_21 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 0))));
        Var_56 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 1))));
        succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_VarSet_59_59;
    MR_Word STATE_VARIABLE_Anon_60_60;
    MR_Box conv0_STATE_VARIABLE_State_58_58;
    MR_Box conv1_STATE_VARIABLE_State_54;

    mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_State_58_58);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_114_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, ListHead_20, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_60_60);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_108_97_116_101_114_95_108_105_115_116_95_101_108_101_109_101_110_116_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, ListTail_21, STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_60_60, STATE_VARIABLE_Anon_52);
    mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "]")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_54);
  }
  else
  {
    succeeded = (strcmp(Atom_14, (MR_String) "[]") == 0);
    if (succeeded)
      succeeded = (ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Box conv2_STATE_VARIABLE_State_54;

      mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "[]")), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_State_54);
      *STATE_VARIABLE_Anon_52 = STATE_VARIABLE_Anon_0_51;
      *STATE_VARIABLE_VarSet_50 = STATE_VARIABLE_VarSet_0_49;
    }
    else
    {
      MR_Word BracedHeadTerm_22;
      MR_Word BracedTailTerms_23;

      succeeded = (strcmp(Atom_14, (MR_String) "{}") == 0);
      if (succeeded)
      {
        succeeded = (ArgTerms_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BracedHeadTerm_22 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
          BracedTailTerms_23 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
        }
      }
      if (succeeded)
        if ((BracedTailTerms_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Box conv3_STATE_VARIABLE_State_70_70;
          MR_Box conv4_STATE_VARIABLE_State_54;

          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "{ ")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_70_70);
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, BracedHeadTerm_22, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) " }")), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_State_54);
        }
        else
        {
          MR_Word STATE_VARIABLE_VarSet_78_78;
          MR_Word STATE_VARIABLE_Anon_79_79;
          MR_Box conv5_STATE_VARIABLE_State_77_77;
          MR_Box conv6_STATE_VARIABLE_State_54;

          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "{")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_77_77);
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_114_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, BracedHeadTerm_22, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_79_79);
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_108_97_116_101_114_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, BracedTailTerms_23, STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_79_79, STATE_VARIABLE_Anon_52);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "}")), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_State_54);
        }
      else
      {
        MR_Word Var_26;
        MR_Word FirstArg_28;
        MR_Word OtherArgTerms_29;
        MR_Word Var_86;
        MR_Word Var_87;

        succeeded = (strcmp(Atom_14, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (ArgTerms_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_86 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
            Var_87 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_26 = ((MR_Word) ((MR_hl_field(1, Var_86, (MR_Integer) 0))));
              succeeded = (Var_87 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FirstArg_28 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 0))));
                OtherArgTerms_29 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 1))));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_VarSet_88_88;
          MR_Word STATE_VARIABLE_Anon_89_89;
          MR_Word STATE_VARIABLE_VarSet_93_93;
          MR_Word STATE_VARIABLE_Anon_94_94;
          MR_Box conv7_STATE_VARIABLE_State_92_92;
          MR_Box conv8_STATE_VARIABLE_State_54;

          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_26, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_89_89);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_92_92);
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_114_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, FirstArg_28, STATE_VARIABLE_VarSet_88_88, &STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_Anon_89_89, &STATE_VARIABLE_Anon_94_94);
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_108_97_116_101_114_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, OtherArgTerms_29, STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_94_94, STATE_VARIABLE_Anon_52);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_State_54);
        }
        else
        {
          MR_Word OpInfos_30;

          succeeded = mercury__ops__lookup_op_infos_3_p_0(TypeClassInfo_for_op_table_184, OpTable_13, Atom_14, &OpInfos_30);
          if (succeeded)
          {
            MR_Word MaybeInfix_31 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 0))));
            MR_Word MaybeBinPrefix_32 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 1))));
            MR_Word MaybePrefix_33 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 2))));
            MR_Word MaybePostfix_34 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 3))));

            if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
            else
            {
              MR_Word Var_187 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
              MR_Word Var_188 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));

              if ((Var_187 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word OpPriority_40;
                MR_Word OpGtOrGe_41;

                succeeded = (MaybePrefix_33 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  OpPriority_40 = ((MR_Word) ((MR_hl_field(1, MaybePrefix_33, (MR_Integer) 0))));
                  OpGtOrGe_41 = ((MR_Unsigned) ((MR_hl_field(1, MaybePrefix_33, (MR_Integer) 1))) & (MR_Integer) 1);
                  {
                    MR_Word NewPriority_42;
                    MR_Unsigned Var_191 = (MR_Unsigned) (OpPriority_40);
                    MR_Unsigned Var_192 = (MR_Unsigned) (Priority_16);
                    MR_Box conv11_STATE_VARIABLE_State_111_111;
                    MR_Unsigned Var_197;
                    MR_Unsigned Var_198;

                    succeeded = (Var_191 < Var_192);
                    if (succeeded)
                    {
                      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv10_STATE_VARIABLE_State_108_108;

                      func_9(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_State_108_108);
                    }
                    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_185, Stream_12, Atom_14, (MR_Integer) 1);
                    mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_State_111_111);
                    switch (OpGtOrGe_41) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        NewPriority_42 = OpPriority_40;
                        break;
                      case (MR_Integer) 0:
                        NewPriority_42 = mercury__ops__increment_priority_1_f_0(OpPriority_40);
                        break;
                    }
                    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_188, NewPriority_42, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
                    Var_197 = (MR_Unsigned) (OpPriority_40);
                    Var_198 = (MR_Unsigned) (Priority_16);
                    succeeded = (Var_197 < Var_198);
                    if (succeeded)
                    {
                      void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv13_STATE_VARIABLE_State_54;

                      func_12(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_State_54);
                    }
                  }
                }
                else
                {
                  MR_Word OpPriority_172;
                  MR_Word OpGtOrGe_173;

                  succeeded = (MaybePostfix_34 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    OpPriority_172 = ((MR_Word) ((MR_hl_field(1, MaybePostfix_34, (MR_Integer) 0))));
                    OpGtOrGe_173 = ((MR_Unsigned) ((MR_hl_field(1, MaybePostfix_34, (MR_Integer) 1))) & (MR_Integer) 1);
                    {
                      MR_Word NewPriority_171;
                      MR_Unsigned Var_199 = (MR_Unsigned) (OpPriority_172);
                      MR_Unsigned Var_200 = (MR_Unsigned) (Priority_16);
                      MR_Box conv16_STATE_VARIABLE_State_123_123;
                      MR_Unsigned Var_205;
                      MR_Unsigned Var_206;

                      succeeded = (Var_199 < Var_200);
                      if (succeeded)
                      {
                        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv15_STATE_VARIABLE_State_118_118;

                        func_14(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_State_118_118);
                      }
                      switch (OpGtOrGe_173) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          NewPriority_171 = OpPriority_172;
                          break;
                        case (MR_Integer) 0:
                          NewPriority_171 = mercury__ops__increment_priority_1_f_0(OpPriority_172);
                          break;
                      }
                      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_188, NewPriority_171, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
                      mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_State_123_123);
                      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_185, Stream_12, Atom_14, (MR_Integer) 1);
                      Var_205 = (MR_Unsigned) (OpPriority_172);
                      Var_206 = (MR_Unsigned) (Priority_16);
                      succeeded = (Var_205 < Var_206);
                      if (succeeded)
                      {
                        void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv18_STATE_VARIABLE_State_54;

                        func_17(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_State_54);
                      }
                    }
                  }
                  else
                    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
                }
              }
              else
              {
                MR_Word Var_189 = ((MR_Word) ((MR_hl_field(1, Var_187, (MR_Integer) 1))));
                MR_Word Var_190 = ((MR_Word) ((MR_hl_field(1, Var_187, (MR_Integer) 0))));

                if ((Var_189 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word LeftGtOrGe_44;
                  MR_Word RightGtOrGe_45;
                  MR_Word OpPriority_182;

                  succeeded = (MaybeInfix_31 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    OpPriority_182 = ((MR_Word) ((MR_hl_field(1, MaybeInfix_31, (MR_Integer) 0))));
                    LeftGtOrGe_44 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_31, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                    RightGtOrGe_45 = ((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_31, (MR_Integer) 1))) & (MR_Integer) 1);
                    {
                      MR_Word LeftPriority_46;
                      MR_Word RightPriority_48;
                      MR_Word STATE_VARIABLE_VarSet_134_134;
                      MR_Word STATE_VARIABLE_Anon_135_135;
                      MR_Unsigned Var_207 = (MR_Unsigned) (OpPriority_182);
                      MR_Unsigned Var_208 = (MR_Unsigned) (Priority_16);
                      MR_Unsigned Var_216;
                      MR_Unsigned Var_217;

                      succeeded = (Var_207 < Var_208);
                      if (succeeded)
                      {
                        void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv20_STATE_VARIABLE_State_133_133;

                        func_19(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_State_133_133);
                      }
                      switch (LeftGtOrGe_44) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          LeftPriority_46 = OpPriority_182;
                          break;
                        case (MR_Integer) 0:
                          LeftPriority_46 = mercury__ops__increment_priority_1_f_0(OpPriority_182);
                          break;
                      }
                      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_188, LeftPriority_46, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_134_134, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_135_135);
                      succeeded = (strcmp(Atom_14, (MR_String) ",") == 0);
                      if (succeeded)
                      {
                        MR_Box conv21_STATE_VARIABLE_State_138_138;

                        mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_State_138_138);
                      }
                      else
                      {
                        succeeded = (strcmp(Atom_14, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_String Dot_47;
                          MR_Box conv22_STATE_VARIABLE_State_138_138;

                          succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(Var_190);
                          if (succeeded)
                            Dot_47 = (MR_String) "\'.\'";
                          else
                            Dot_47 = (MR_String) ".";
                          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) (Dot_47)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_State_138_138);
                        }
                        else
                        {
                          MR_Box conv23_STATE_VARIABLE_State_141_141;
                          MR_Box conv24_STATE_VARIABLE_State_138_138;

                          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_State_141_141);
                          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_185, Stream_12, Atom_14, (MR_Integer) 1);
                          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_State_138_138);
                        }
                      }
                      switch (RightGtOrGe_45) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          RightPriority_48 = OpPriority_182;
                          break;
                        case (MR_Integer) 0:
                          RightPriority_48 = mercury__ops__increment_priority_1_f_0(OpPriority_182);
                          break;
                      }
                      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_190, RightPriority_48, STATE_VARIABLE_VarSet_134_134, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_135_135, STATE_VARIABLE_Anon_52);
                      Var_216 = (MR_Unsigned) (OpPriority_182);
                      Var_217 = (MR_Unsigned) (Priority_16);
                      succeeded = (Var_216 < Var_217);
                      if (succeeded)
                      {
                        void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv26_STATE_VARIABLE_State_54;

                        func_25(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_State_54);
                      }
                    }
                  }
                  else
                  {
                    MR_Word OpPriority_177;
                    MR_Word LeftGtOrGe_178;
                    MR_Word RightGtOrGe_179;

                    succeeded = (MaybeBinPrefix_32 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      OpPriority_177 = ((MR_Word) ((MR_hl_field(1, MaybeBinPrefix_32, (MR_Integer) 0))));
                      LeftGtOrGe_178 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_32, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                      RightGtOrGe_179 = ((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_32, (MR_Integer) 1))) & (MR_Integer) 1);
                      {
                        MR_Word STATE_VARIABLE_VarSet_155_155;
                        MR_Word STATE_VARIABLE_Anon_156_156;
                        MR_Word LeftPriority_175;
                        MR_Word RightPriority_176;
                        MR_Unsigned Var_218 = (MR_Unsigned) (OpPriority_177);
                        MR_Unsigned Var_219 = (MR_Unsigned) (Priority_16);
                        MR_Box conv29_STATE_VARIABLE_State_154_154;
                        MR_Box conv30_STATE_VARIABLE_State_159_159;
                        MR_Unsigned Var_227;
                        MR_Unsigned Var_228;

                        succeeded = (Var_218 < Var_219);
                        if (succeeded)
                        {
                          void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv28_STATE_VARIABLE_State_151_151;

                          func_27(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_State_151_151);
                        }
                        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_185, Stream_12, Atom_14, (MR_Integer) 1);
                        mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_State_154_154);
                        switch (LeftGtOrGe_178) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            LeftPriority_175 = OpPriority_177;
                            break;
                          case (MR_Integer) 0:
                            LeftPriority_175 = mercury__ops__increment_priority_1_f_0(OpPriority_177);
                            break;
                        }
                        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_188, LeftPriority_175, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_155_155, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_156_156);
                        mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_State_159_159);
                        switch (RightGtOrGe_179) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            RightPriority_176 = OpPriority_177;
                            break;
                          case (MR_Integer) 0:
                            RightPriority_176 = mercury__ops__increment_priority_1_f_0(OpPriority_177);
                            break;
                        }
                        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Var_190, RightPriority_176, STATE_VARIABLE_VarSet_155_155, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_156_156, STATE_VARIABLE_Anon_52);
                        Var_227 = (MR_Unsigned) (OpPriority_177);
                        Var_228 = (MR_Unsigned) (Priority_16);
                        succeeded = (Var_227 < Var_228);
                        if (succeeded)
                        {
                          void MR_CALL (* func_31)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv32_STATE_VARIABLE_State_54;

                          func_31(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_State_54);
                        }
                      }
                    }
                    else
                      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
                  }
                }
                else
                  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
              }
            }
          }
          else
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, Stream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
        }
      }
    }
  }
}

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_108_97_116_101_114_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word TypeClassInfo_for_op_table_39,
  MR_Word TypeClassInfo_for_writer_40,
  MR_Word Stream_1,
  MR_Box OpTable_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_Anon_0_6,
  MR_Word * STATE_VARIABLE_Anon_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Anon_7 = STATE_VARIABLE_Anon_0_6;
      *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
    }
    else
    {
      MR_Word X_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarSet_36_36;
      MR_Word STATE_VARIABLE_Anon_37_37;
      MR_Word Var_42;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_40, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_STATE_VARIABLE_State_35_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Anon_0_6;

      func_0(((MR_Box) (TypeClassInfo_for_writer_40)), ((MR_Box) (Stream_1)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_35_35);
      Var_42 = mercury__ops__arg_priority_1_f_0(TypeClassInfo_for_op_table_39, OpTable_2);
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_41, TypeClassInfo_for_op_table_39, TypeClassInfo_for_writer_40, Stream_1, OpTable_2, X_23, Var_42, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_Anon_0_6, &STATE_VARIABLE_Anon_37_37);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_24;
      next_value_of_STATE_VARIABLE_VarSet_0_4 = STATE_VARIABLE_VarSet_36_36;
      next_value_of_STATE_VARIABLE_Anon_0_6 = STATE_VARIABLE_Anon_37_37;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_VarSet_0_4 = next_value_of_STATE_VARIABLE_VarSet_0_4;
      STATE_VARIABLE_Anon_0_6 = next_value_of_STATE_VARIABLE_Anon_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word TypeClassInfo_for_op_table_44,
  MR_Word TypeClassInfo_for_writer_45,
  MR_Word Stream_12,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_Anon_0_24,
  MR_Word * STATE_VARIABLE_Anon_25)
{
  MR_bool succeeded = (ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_28;
  MR_Unsigned Var_47;
  MR_Unsigned Var_48;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_28;

  if (succeeded)
  {
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_44, (MR_Integer) 0)), (MR_Integer) 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_44)), OpTable_13, ((MR_Box) (Atom_14)));
    if (succeeded)
    {
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_44, (MR_Integer) 0)), (MR_Integer) 13))));
      conv2_Var_28 = func_1(((MR_Box) (TypeClassInfo_for_op_table_44)), OpTable_13);
      Var_28 = ((MR_Word) (conv2_Var_28));
      Var_47 = (MR_Unsigned) (Priority_16);
      Var_48 = (MR_Unsigned) (Var_28);
      succeeded = (Var_47 > Var_48);
      if (!(succeeded))
        succeeded = (Var_47 == Var_48);
    }
  }
  if (succeeded)
  {
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv4_STATE_VARIABLE_State_30_30;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv6_STATE_VARIABLE_State_33_33;

    func_3(((MR_Box) (TypeClassInfo_for_writer_45)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_State_30_30);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_45, Stream_12, Atom_14, (MR_Integer) 1);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_writer_45)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_State_33_33);
  }
  else
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_45, Stream_12, Atom_14, (MR_Integer) 1);
  if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
    *STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
  }
  else
  {
    MR_Word HeadArgTerm_20 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
    MR_Word TailArgTerms_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_VarSet_37_37;
    MR_Word STATE_VARIABLE_Anon_38_38;
    MR_Word Var_51;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv8_STATE_VARIABLE_State_36_36;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_State_27;

    func_7(((MR_Box) (TypeClassInfo_for_writer_45)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_State_36_36);
    Var_51 = mercury__ops__arg_priority_1_f_0(TypeClassInfo_for_op_table_44, OpTable_13);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_46, TypeClassInfo_for_op_table_44, TypeClassInfo_for_writer_45, Stream_12, OpTable_13, HeadArgTerm_20, Var_51, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_Anon_0_24, &STATE_VARIABLE_Anon_38_38);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_108_97_116_101_114_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_46, TypeClassInfo_for_op_table_44, TypeClassInfo_for_writer_45, Stream_12, OpTable_13, TailArgTerms_21, STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_Anon_38_38, STATE_VARIABLE_Anon_25);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) (TypeClassInfo_for_writer_45)), ((MR_Box) (Stream_12)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_State_27);
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_32,
  MR_Word Stream_6,
  MR_Word Const_7,
  MR_Word AGT_8)
{
  switch (MR_tag((MR_Word) Const_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Atom_18 = ((MR_String) ((MR_hl_field(0, Const_7, (MR_Integer) 0))));

        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_32, Stream_6, Atom_18, AGT_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Base_10 = ((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word Int_11 = ((MR_Word) ((MR_hl_field(1, Const_7, (MR_Integer) 1))));
        MR_Word Signedness_12 = ((((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        MR_Word Size_13 = ((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 2))) & (MR_Integer) 7);
        MR_String Prefix_14 = ((&mercury__term_io_vector_common_8[4 + Base_10]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0;
        MR_String IntStr_15;
        MR_String Suffix_16;
        MR_Integer Var_23 = ((&mercury__term_io_vector_common_8[4 + Base_10]))->mercury__term_io__vector_common_type_8_0__vct_8_f_1;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_State_24_24;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_State_25_25;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_State_22;

        IntStr_15 = mercury__integer__to_base_string_2_f_0(Int_11, Var_23);
        switch (Signedness_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Suffix_16 = ((&mercury__term_io_vector_common_7[18 + Size_13]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
            break;
          case (MR_Integer) 1:
            Suffix_16 = ((&mercury__term_io_vector_common_7[23 + Size_13]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
            break;
        }
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) (Stream_6)), ((MR_Box) (Prefix_14)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_24_24);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_6(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) (Stream_6)), ((MR_Box) (IntStr_15)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_25_25);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_8(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) (Stream_6)), ((MR_Box) (Suffix_16)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_State_22);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Str_19 = ((MR_String) ((MR_hl_field(2, Const_7, (MR_Integer) 0))));
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv11_STATE_VARIABLE_State_11_34;
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv13_STATE_VARIABLE_State_22;

        func_10(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_State_11_34);
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_32, Stream_6, Str_19);
        func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_12(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_State_22);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float Float_17 = MR_unbox_float((MR_hl_field(3, Const_7, (MR_Integer) 1)));

            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_32, Stream_6, Float_17);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ImplDef_20 = ((MR_String) ((MR_hl_field(3, Const_7, (MR_Integer) 1))));
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
            MR_Box conv1_STATE_VARIABLE_State_31_31;
            void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv3_STATE_VARIABLE_State_22;

            func_0(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) "\044")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_31_31);
            func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
            func_2(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) (Stream_6)), ((MR_Box) (ImplDef_20)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_22);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_18,
  MR_Word Stream_6,
  MR_String Str_7,
  MR_Word AGT_8)
{
  MR_bool succeeded;
  MR_Word ShouldQuote_10;

  {
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 3;
    MR_Integer mid_2;
    MR_Integer result_3;

    // binary string simple lookup switch
    ;
    do
    {
      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(Str_7, ((&mercury__term_io_vector_common_7[14 + mid_2]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
  }
  if (!(succeeded))
  {
    {
      MR_Integer Var_22;
      MR_Char Var_23;
      MR_Char Var_24;
      MR_Integer Var_27;

      succeeded = mercury__term_io__all_match_loop__ho97_3_p_in__string_0(Str_7, (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (strcmp(Str_7, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_22 = (MR_Integer) 0;
          Var_23 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_27  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_22 ;
	Length = Var_27 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_7 ;
	Index = Var_22 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	Var_24  = Ch;
}
            succeeded = (Var_23 == Var_24);
          }
          succeeded = !(succeeded);
          if (succeeded)
            succeeded = (AGT_8 == (MR_Integer) 1);
        }
      }
    }
    if (!(succeeded))
    {
      MR_Char FirstChar_19;
      MR_Integer Var_28;
      MR_Char Var_29;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_28  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Var_28 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_7 ;
	Index = (MR_Integer) 0 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	FirstChar_19  = Ch;
}
        succeeded = mercury__char__lower_upper_2_p_0(FirstChar_19, &Var_29);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = Str_7 ;
		{

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        }
      }
    }
  }
  if (succeeded)
    ShouldQuote_10 = (MR_Integer) 0;
  else
    ShouldQuote_10 = (MR_Integer) 1;
  switch (ShouldQuote_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv1_STATE_VARIABLE_State_12;

        func_0(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) (Stream_6)), ((MR_Box) (Str_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_12);
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv3_STATE_VARIABLE_State_15_15;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_State_12;

        func_2(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) "\'")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_15_15);
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_18, Stream_6, Str_7);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) "\'")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_12);
      }
      break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word Stream_5,
  MR_String Str_6)
{
  MR_bool succeeded;
  MR_Integer Var_17;
  MR_Integer Var_21;
  MR_Integer Var_22;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_17  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_22  = Length;
}
  succeeded = (Var_17 < Var_22);
  if (succeeded)
    Var_21 = Var_17;
  else
    Var_21 = Var_22;
  mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(TypeClassInfo_for_writer_11, Stream_5, Str_6, (MR_Integer) 0, Var_21);
}

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);
    MR_Integer Var_13;
    MR_Char Var_14;
    MR_Integer Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_50_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_8 ;
	Index = HeadVar__3_9 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_13  = NextIndex;
	Var_14  = Ch;
	Var_19  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Var_13 <= HeadVar__4_10);
    }
    if (succeeded)
    {
      MR_Integer next_value_of_HeadVar__3_9;

      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(Var_17, Var_18, Var_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_18,
  MR_Word Stream_5,
  MR_Char Char_6)
{
  MR_bool succeeded;
  MR_Char QuoteChar_8;

  switch (Char_6) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 7:
      {
        QuoteChar_8 = (MR_Char) 97;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 8:
      {
        QuoteChar_8 = (MR_Char) 98;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 9:
      {
        QuoteChar_8 = (MR_Char) 116;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 10:
      {
        QuoteChar_8 = (MR_Char) 110;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 11:
      {
        QuoteChar_8 = (MR_Char) 118;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 12:
      {
        QuoteChar_8 = (MR_Char) 102;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 13:
      {
        QuoteChar_8 = (MR_Char) 114;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 34:
      {
        QuoteChar_8 = (MR_Char) 34;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 39:
      {
        QuoteChar_8 = (MR_Char) 39;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 92:
      {
        QuoteChar_8 = (MR_Char) 92;
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    MR_String Var_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_State_12_12;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_State_10;

    func_0(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_String) "\\")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_12_12);
    mercury__string__char_to_string_2_p_0(QuoteChar_8, &Var_13);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) (Stream_5)), ((MR_Box) (Var_13)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_10);
  }
  else
  {
    succeeded = mercury__char__is_alnum_1_p_0(Char_6);
    if (!(succeeded))
    {
      if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
        if ((((mercury__term_io_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
      if (!(succeeded))
      {
        MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_19  = Int;
}
        succeeded = (Var_19 >= (MR_Integer) 160);
      }
    }
    if (succeeded)
    {
      MR_String Var_15;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv5_STATE_VARIABLE_State_10;

      mercury__string__char_to_string_2_p_0(Char_6, &Var_15);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) (Stream_5)), ((MR_Box) (Var_15)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_10);
    }
    else
    {
      MR_String Var_17;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv7_STATE_VARIABLE_State_10;

      Var_17 = mercury__term_io__mercury_escape_char_1_f_0(Char_6);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) (Stream_5)), ((MR_Box) (Var_17)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_10);
    }
  }
}

MR_String MR_CALL 
mercury__term_io__term_to_string_2_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word VarSet_4,
  MR_Word Term_5)
{
  MR_String Str_6;
  MR_Word State_8;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_18;
  MR_Word Var_15;
  MR_Word Var_16;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_18 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_18 = ((MR_Word) (conv1_Var_18));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_10, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_3[0]), ((MR_Box) ((MR_Integer) 0)), Term_5, Var_18, VarSet_4, &Var_15, (MR_Word) ((MR_Unsigned) 0U), &Var_16, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &State_8);
  Var_19 = (MR_Word) (State_8);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, &Var_20);
  Str_6 = mercury__string__append_list_1_f_0(Var_20);
  return Str_6;
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_48,
  MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_46,
  MR_Word tscc_proc_1_input_3_TypeClassInfo_for_writer_47,
  MR_Box tscc_proc_1_input_4_OpTable_12,
  MR_Word tscc_proc_1_input_5_Term_13,
  MR_Word tscc_proc_1_input_6_Priority_14,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_34,
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Anon_36,
  MR_Word tscc_proc_1_input_9_STATE_VARIABLE_State_0_37,
  MR_Word * tscc_output_ptr_3_STATE_VARIABLE_State_38)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_39;
  MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
  MR_Word tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
  MR_Box tscc_proc_2_input_4_OpTable_11;
  MR_Word tscc_proc_2_input_5_Var_12;
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24;
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_State_0_26;
  MR_Word tscc_output_1_STATE_VARIABLE_VarSet_34;
  MR_Word tscc_output_2_STATE_VARIABLE_Anon_36;
  MR_Word tscc_output_3_STATE_VARIABLE_State_38;

  // The code for TSCC PROC 1: pred term_io.TypeSpecOf__pred__format_term_prio_anon_vars__[Stream = string.builder.handle, State = string.builder.state]_0_1/10-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred term_io.TypeSpecOf__pred__format_term_prio_anon_vars__[Stream = string.builder.handle, State = string.builder.state]_0_1/10-0
  ;
  // proc 2 in TSCC: pred term_io.TypeSpecOf__pred__format_variable_anon_vars__[Stream = string.builder.handle, State = string.builder.state]_0_1/9-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_T_48 = tscc_proc_1_input_1_TypeInfo_for_T_48;
    MR_Word TypeClassInfo_for_op_table_46 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
    MR_Word TypeClassInfo_for_writer_47 = tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
    MR_Box OpTable_12 = tscc_proc_1_input_4_OpTable_12;
    MR_Word Term_13 = tscc_proc_1_input_5_Term_13;
    MR_Word Priority_14 = tscc_proc_1_input_6_Priority_14;
    MR_Word STATE_VARIABLE_VarSet_0_33 = tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
    MR_Word STATE_VARIABLE_VarSet_34;
    MR_Word STATE_VARIABLE_Anon_0_35 = tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
    MR_Word STATE_VARIABLE_Anon_36;
    MR_Word STATE_VARIABLE_State_0_37 = tscc_proc_1_input_9_STATE_VARIABLE_State_0_37;
    MR_Word STATE_VARIABLE_State_38;

    if (((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0))
    {
      MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 0))));
      MR_Word ArgTerms_21 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Functor_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Atom_32 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));

            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_48, TypeClassInfo_for_op_table_46, TypeClassInfo_for_writer_47, OpTable_12, Atom_32, ArgTerms_21, Priority_14, STATE_VARIABLE_VarSet_0_33, &STATE_VARIABLE_VarSet_34, STATE_VARIABLE_Anon_0_35, &STATE_VARIABLE_Anon_36, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_47, Functor_20, (MR_Integer) 0, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
        case (MR_Integer) 3:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_47, Functor_20, (MR_Integer) 0, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
      }
    }
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, Term_13, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39 = TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = TypeClassInfo_for_writer_47;
      MR_Box next_value_of_tscc_proc_2_input_4_OpTable_11 = OpTable_12;
      MR_Word next_value_of_tscc_proc_2_input_5_Var_12 = Var_18;
      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22 = STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24 = STATE_VARIABLE_Anon_0_35;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_State_0_26 = STATE_VARIABLE_State_0_37;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_39 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39;
      tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
      tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
      tscc_proc_2_input_4_OpTable_11 = next_value_of_tscc_proc_2_input_4_OpTable_11;
      tscc_proc_2_input_5_Var_12 = next_value_of_tscc_proc_2_input_5_Var_12;
      tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22;
      tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24;
      tscc_proc_2_input_8_STATE_VARIABLE_State_0_26 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_State_0_26;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_34;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_36;
    tscc_output_3_STATE_VARIABLE_State_38 = STATE_VARIABLE_State_38;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_39 = tscc_proc_2_input_1_TypeInfo_for_T_39;
    MR_Word TypeClassInfo_for_op_table_37 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
    MR_Word TypeClassInfo_for_writer_38 = tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
    MR_Box OpTable_11 = tscc_proc_2_input_4_OpTable_11;
    MR_Word Var_12 = tscc_proc_2_input_5_Var_12;
    MR_Word STATE_VARIABLE_VarSet_0_22 = tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22;
    MR_Word STATE_VARIABLE_VarSet_23;
    MR_Word STATE_VARIABLE_Anon_0_24 = tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24;
    MR_Word STATE_VARIABLE_Anon_25;
    MR_Word STATE_VARIABLE_State_0_26 = tscc_proc_2_input_8_STATE_VARIABLE_State_0_26;
    MR_Word STATE_VARIABLE_State_27;
    MR_bool succeeded;
    MR_Word Value_16;
    MR_Word TypeInfo_12_52;
    MR_Word TypeInfo_14_54;
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 2))));
    MR_Box conv0_Value_16;

    {
      TypeInfo_12_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_12_52, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_12_52, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    {
      TypeInfo_14_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_54, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_14_54, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_52, TypeInfo_14_54, Var_50, Var_12, &conv0_Value_16);
    if (succeeded)
    {
      Value_16 = ((MR_Word) (conv0_Value_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_56;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      MR_Box next_value_of_tscc_proc_1_input_4_OpTable_12;
      MR_Word next_value_of_tscc_proc_1_input_5_Term_13;
      MR_Word next_value_of_tscc_proc_1_input_6_Priority_14;
      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
      MR_Word next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_State_0_37;

      Var_56 = mercury__ops__universal_priority_1_f_0(TypeClassInfo_for_op_table_37, OpTable_11);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48 = TypeInfo_for_T_39;
      next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = TypeClassInfo_for_op_table_37;
      next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = TypeClassInfo_for_writer_38;
      next_value_of_tscc_proc_1_input_4_OpTable_12 = OpTable_11;
      next_value_of_tscc_proc_1_input_5_Term_13 = Value_16;
      next_value_of_tscc_proc_1_input_6_Priority_14 = Var_56;
      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33 = STATE_VARIABLE_VarSet_0_22;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35 = STATE_VARIABLE_Anon_0_24;
      next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_State_0_37 = STATE_VARIABLE_State_0_26;
      tscc_proc_1_input_1_TypeInfo_for_T_48 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      tscc_proc_1_input_4_OpTable_12 = next_value_of_tscc_proc_1_input_4_OpTable_12;
      tscc_proc_1_input_5_Term_13 = next_value_of_tscc_proc_1_input_5_Term_13;
      tscc_proc_1_input_6_Priority_14 = next_value_of_tscc_proc_1_input_6_Priority_14;
      tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
      tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
      tscc_proc_1_input_9_STATE_VARIABLE_State_0_37 = next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_State_0_37;
      goto top_of_proc_1;
    }
    else
    {
      MR_String Name_17;
      MR_Word TypeInfo_12_61;
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 1))));
      MR_Box conv1_Name_17;

      {
        TypeInfo_12_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_61, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_12_61, 1) = ((MR_Box) (TypeInfo_for_T_39));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_61, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, Var_12, &conv1_Name_17);
      if (succeeded)
      {
        Name_17 = ((MR_String) (conv1_Name_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv3_STATE_VARIABLE_State_27;

        func_2(((MR_Box) (TypeClassInfo_for_writer_38)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Name_17)), ((MR_Box) (STATE_VARIABLE_State_0_26)), &conv3_STATE_VARIABLE_State_27);
        STATE_VARIABLE_State_27 = ((MR_Word) (conv3_STATE_VARIABLE_State_27));
        STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
      }
      else
      {
        MR_Integer VarNum_18;
        MR_String VarName_21;
        MR_String Var_40;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_State_27;

        if ((STATE_VARIABLE_Anon_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          VarNum_18 = (MR_Integer) (Var_12);
          STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        }
        else
        {
          MR_Word Counter0_19 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Anon_0_24, (MR_Integer) 0))));
          MR_Word Counter_20;
          MR_Integer Var_64;

          VarNum_18 = (MR_Integer) (Counter0_19);
          Var_64 = (MR_Integer) ((MR_Unsigned) VarNum_18 + (MR_Unsigned) 1);
          Counter_20 = (MR_Word) (Var_64);
          {
            STATE_VARIABLE_Anon_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Anon_25, 0) = ((MR_Box) (Counter_20));
          }
        }
        mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__term_io_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), VarNum_18, &Var_40);
        mercury__string__append_3_p_2((MR_String) "_", Var_40, &VarName_21);
        mercury__varset__name_var_4_p_0(TypeInfo_for_T_39, Var_12, VarName_21, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_23);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_writer_38)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (VarName_21)), ((MR_Box) (STATE_VARIABLE_State_0_26)), &conv5_STATE_VARIABLE_State_27);
        STATE_VARIABLE_State_27 = ((MR_Word) (conv5_STATE_VARIABLE_State_27));
      }
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_23;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_25;
    tscc_output_3_STATE_VARIABLE_State_38 = STATE_VARIABLE_State_27;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_VarSet_34 = tscc_output_1_STATE_VARIABLE_VarSet_34;
  *tscc_output_ptr_2_STATE_VARIABLE_Anon_36 = tscc_output_2_STATE_VARIABLE_Anon_36;
  *tscc_output_ptr_3_STATE_VARIABLE_State_38 = tscc_output_3_STATE_VARIABLE_State_38;
  return;
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_39,
  MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_37,
  MR_Word tscc_proc_2_input_3_TypeClassInfo_for_writer_38,
  MR_Box tscc_proc_2_input_4_OpTable_11,
  MR_Word tscc_proc_2_input_5_Var_12,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_34,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Anon_36,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_State_0_26,
  MR_Word * tscc_output_ptr_3_STATE_VARIABLE_State_38)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_48;
  MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
  MR_Word tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
  MR_Box tscc_proc_1_input_4_OpTable_12;
  MR_Word tscc_proc_1_input_5_Term_13;
  MR_Word tscc_proc_1_input_6_Priority_14;
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
  MR_Word tscc_proc_1_input_9_STATE_VARIABLE_State_0_37;
  MR_Word tscc_output_1_STATE_VARIABLE_VarSet_34;
  MR_Word tscc_output_2_STATE_VARIABLE_Anon_36;
  MR_Word tscc_output_3_STATE_VARIABLE_State_38;

  // The code for TSCC PROC 2: pred term_io.TypeSpecOf__pred__format_variable_anon_vars__[Stream = string.builder.handle, State = string.builder.state]_0_1/9-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred term_io.TypeSpecOf__pred__format_term_prio_anon_vars__[Stream = string.builder.handle, State = string.builder.state]_0_1/10-0
  ;
  // proc 2 in TSCC: pred term_io.TypeSpecOf__pred__format_variable_anon_vars__[Stream = string.builder.handle, State = string.builder.state]_0_1/9-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_T_48 = tscc_proc_1_input_1_TypeInfo_for_T_48;
    MR_Word TypeClassInfo_for_op_table_46 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
    MR_Word TypeClassInfo_for_writer_47 = tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
    MR_Box OpTable_12 = tscc_proc_1_input_4_OpTable_12;
    MR_Word Term_13 = tscc_proc_1_input_5_Term_13;
    MR_Word Priority_14 = tscc_proc_1_input_6_Priority_14;
    MR_Word STATE_VARIABLE_VarSet_0_33 = tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
    MR_Word STATE_VARIABLE_VarSet_34;
    MR_Word STATE_VARIABLE_Anon_0_35 = tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
    MR_Word STATE_VARIABLE_Anon_36;
    MR_Word STATE_VARIABLE_State_0_37 = tscc_proc_1_input_9_STATE_VARIABLE_State_0_37;
    MR_Word STATE_VARIABLE_State_38;

    if (((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0))
    {
      MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 0))));
      MR_Word ArgTerms_21 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Functor_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Atom_32 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));

            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_48, TypeClassInfo_for_op_table_46, TypeClassInfo_for_writer_47, OpTable_12, Atom_32, ArgTerms_21, Priority_14, STATE_VARIABLE_VarSet_0_33, &STATE_VARIABLE_VarSet_34, STATE_VARIABLE_Anon_0_35, &STATE_VARIABLE_Anon_36, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_47, Functor_20, (MR_Integer) 0, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
        case (MR_Integer) 3:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_47, Functor_20, (MR_Integer) 0, STATE_VARIABLE_State_0_37, &STATE_VARIABLE_State_38);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.format_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
      }
    }
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, Term_13, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39 = TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = TypeClassInfo_for_writer_47;
      MR_Box next_value_of_tscc_proc_2_input_4_OpTable_11 = OpTable_12;
      MR_Word next_value_of_tscc_proc_2_input_5_Var_12 = Var_18;
      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22 = STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24 = STATE_VARIABLE_Anon_0_35;
      MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_State_0_26 = STATE_VARIABLE_State_0_37;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_39 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_39;
      tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
      tscc_proc_2_input_3_TypeClassInfo_for_writer_38 = next_value_of_tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
      tscc_proc_2_input_4_OpTable_11 = next_value_of_tscc_proc_2_input_4_OpTable_11;
      tscc_proc_2_input_5_Var_12 = next_value_of_tscc_proc_2_input_5_Var_12;
      tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22;
      tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24;
      tscc_proc_2_input_8_STATE_VARIABLE_State_0_26 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_State_0_26;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_34;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_36;
    tscc_output_3_STATE_VARIABLE_State_38 = STATE_VARIABLE_State_38;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_39 = tscc_proc_2_input_1_TypeInfo_for_T_39;
    MR_Word TypeClassInfo_for_op_table_37 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
    MR_Word TypeClassInfo_for_writer_38 = tscc_proc_2_input_3_TypeClassInfo_for_writer_38;
    MR_Box OpTable_11 = tscc_proc_2_input_4_OpTable_11;
    MR_Word Var_12 = tscc_proc_2_input_5_Var_12;
    MR_Word STATE_VARIABLE_VarSet_0_22 = tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22;
    MR_Word STATE_VARIABLE_VarSet_23;
    MR_Word STATE_VARIABLE_Anon_0_24 = tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24;
    MR_Word STATE_VARIABLE_Anon_25;
    MR_Word STATE_VARIABLE_State_0_26 = tscc_proc_2_input_8_STATE_VARIABLE_State_0_26;
    MR_Word STATE_VARIABLE_State_27;
    MR_bool succeeded;
    MR_Word Value_16;
    MR_Word TypeInfo_12_52;
    MR_Word TypeInfo_14_54;
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 2))));
    MR_Box conv0_Value_16;

    {
      TypeInfo_12_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_12_52, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_12_52, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    {
      TypeInfo_14_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_54, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_14_54, 1) = ((MR_Box) (TypeInfo_for_T_39));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_52, TypeInfo_14_54, Var_50, Var_12, &conv0_Value_16);
    if (succeeded)
    {
      Value_16 = ((MR_Word) (conv0_Value_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_56;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      MR_Box next_value_of_tscc_proc_1_input_4_OpTable_12;
      MR_Word next_value_of_tscc_proc_1_input_5_Term_13;
      MR_Word next_value_of_tscc_proc_1_input_6_Priority_14;
      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
      MR_Word next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_State_0_37;

      Var_56 = mercury__ops__universal_priority_1_f_0(TypeClassInfo_for_op_table_37, OpTable_11);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48 = TypeInfo_for_T_39;
      next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = TypeClassInfo_for_op_table_37;
      next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = TypeClassInfo_for_writer_38;
      next_value_of_tscc_proc_1_input_4_OpTable_12 = OpTable_11;
      next_value_of_tscc_proc_1_input_5_Term_13 = Value_16;
      next_value_of_tscc_proc_1_input_6_Priority_14 = Var_56;
      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33 = STATE_VARIABLE_VarSet_0_22;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35 = STATE_VARIABLE_Anon_0_24;
      next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_State_0_37 = STATE_VARIABLE_State_0_26;
      tscc_proc_1_input_1_TypeInfo_for_T_48 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_48;
      tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      tscc_proc_1_input_3_TypeClassInfo_for_writer_47 = next_value_of_tscc_proc_1_input_3_TypeClassInfo_for_writer_47;
      tscc_proc_1_input_4_OpTable_12 = next_value_of_tscc_proc_1_input_4_OpTable_12;
      tscc_proc_1_input_5_Term_13 = next_value_of_tscc_proc_1_input_5_Term_13;
      tscc_proc_1_input_6_Priority_14 = next_value_of_tscc_proc_1_input_6_Priority_14;
      tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
      tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
      tscc_proc_1_input_9_STATE_VARIABLE_State_0_37 = next_value_of_tscc_proc_1_input_9_STATE_VARIABLE_State_0_37;
      goto top_of_proc_1;
    }
    else
    {
      MR_String Name_17;
      MR_Word TypeInfo_12_61;
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 1))));
      MR_Box conv1_Name_17;

      {
        TypeInfo_12_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_61, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_12_61, 1) = ((MR_Box) (TypeInfo_for_T_39));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_39, TypeInfo_12_61, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, Var_12, &conv1_Name_17);
      if (succeeded)
      {
        Name_17 = ((MR_String) (conv1_Name_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv3_STATE_VARIABLE_State_27;

        func_2(((MR_Box) (TypeClassInfo_for_writer_38)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Name_17)), ((MR_Box) (STATE_VARIABLE_State_0_26)), &conv3_STATE_VARIABLE_State_27);
        STATE_VARIABLE_State_27 = ((MR_Word) (conv3_STATE_VARIABLE_State_27));
        STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
      }
      else
      {
        MR_Integer VarNum_18;
        MR_String VarName_21;
        MR_String Var_40;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_State_27;

        if ((STATE_VARIABLE_Anon_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          VarNum_18 = (MR_Integer) (Var_12);
          STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        }
        else
        {
          MR_Word Counter0_19 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Anon_0_24, (MR_Integer) 0))));
          MR_Word Counter_20;
          MR_Integer Var_64;

          VarNum_18 = (MR_Integer) (Counter0_19);
          Var_64 = (MR_Integer) ((MR_Unsigned) VarNum_18 + (MR_Unsigned) 1);
          Counter_20 = (MR_Word) (Var_64);
          {
            STATE_VARIABLE_Anon_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Anon_25, 0) = ((MR_Box) (Counter_20));
          }
        }
        mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__term_io_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), VarNum_18, &Var_40);
        mercury__string__append_3_p_2((MR_String) "_", Var_40, &VarName_21);
        mercury__varset__name_var_4_p_0(TypeInfo_for_T_39, Var_12, VarName_21, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_23);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_38, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_writer_38)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (VarName_21)), ((MR_Box) (STATE_VARIABLE_State_0_26)), &conv5_STATE_VARIABLE_State_27);
        STATE_VARIABLE_State_27 = ((MR_Word) (conv5_STATE_VARIABLE_State_27));
      }
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_23;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_25;
    tscc_output_3_STATE_VARIABLE_State_38 = STATE_VARIABLE_State_27;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_VarSet_34 = tscc_output_1_STATE_VARIABLE_VarSet_34;
  *tscc_output_ptr_2_STATE_VARIABLE_Anon_36 = tscc_output_2_STATE_VARIABLE_Anon_36;
  *tscc_output_ptr_3_STATE_VARIABLE_State_38 = tscc_output_3_STATE_VARIABLE_State_38;
  return;
}

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_108_97_116_101_114_95_108_105_115_116_95_101_108_101_109_101_110_116_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word TypeClassInfo_for_op_table_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_Anon_0_25,
  MR_Word * STATE_VARIABLE_Anon_26,
  MR_Word STATE_VARIABLE_State_0_27,
  MR_Word * STATE_VARIABLE_State_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 1);
    MR_Word Value_18;
    MR_Word TypeCtorInfo_11_56;
    MR_Word TypeInfo_12_57;
    MR_Word TypeCtorInfo_13_58;
    MR_Word TypeInfo_14_59;
    MR_Word Var_16;
    MR_Word Var_55;
    MR_Box conv0_Value_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(1, Term_12, (MR_Integer) 0))));
      Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_23, (MR_Integer) 2))));
      TypeCtorInfo_11_56 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
      TypeCtorInfo_13_58 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
      {
        TypeInfo_12_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_57, 0) = ((MR_Box) (TypeCtorInfo_11_56));
        MR_hl_field(0, TypeInfo_12_57, 1) = ((MR_Box) (TypeInfo_for_T_52));
      }
      {
        TypeInfo_14_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_14_59, 0) = ((MR_Box) (TypeCtorInfo_13_58));
        MR_hl_field(0, TypeInfo_14_59, 1) = ((MR_Box) (TypeInfo_for_T_52));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_52, TypeInfo_12_57, TypeInfo_14_59, Var_55, Var_16, &conv0_Value_18);
      if (succeeded)
      {
        Value_18 = ((MR_Word) (conv0_Value_18));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_Term_12 = Value_18;

      // direct tailcall eliminated
      ;
      Term_12 = next_value_of_Term_12;
      continue;
    }
    else
    {
      MR_Word ListHead_19;
      MR_Word ListTail_20;
      MR_Word Var_32;
      MR_String Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;

      succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_32 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 0))));
        Var_34 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_33 = ((MR_String) ((MR_hl_field(0, Var_32, (MR_Integer) 0))));
          succeeded = (strcmp(Var_33, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ListHead_19 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
              Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));
              succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ListTail_20 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
                Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
                succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_State_38_38;
        MR_Word STATE_VARIABLE_VarSet_39_39;
        MR_Word STATE_VARIABLE_Anon_40_40;
        MR_Word STATE_VARIABLE_State_41_41;
        MR_Word Var_61;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv2_STATE_VARIABLE_State_38_38;
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box);
        MR_Box conv4_Var_61;
        MR_Word next_value_of_Term_12;
        MR_Word next_value_of_STATE_VARIABLE_VarSet_0_23;
        MR_Word next_value_of_STATE_VARIABLE_Anon_0_25;
        MR_Word next_value_of_STATE_VARIABLE_State_0_27;

        func_1(((MR_Box) (TypeClassInfo_for_writer_51)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (STATE_VARIABLE_State_0_27)), &conv2_STATE_VARIABLE_State_38_38);
        STATE_VARIABLE_State_38_38 = ((MR_Word) (conv2_STATE_VARIABLE_State_38_38));
        func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_50, (MR_Integer) 0)), (MR_Integer) 16))));
        conv4_Var_61 = func_3(((MR_Box) (TypeClassInfo_for_op_table_50)), OpTable_11);
        Var_61 = ((MR_Word) (conv4_Var_61));
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_52, TypeClassInfo_for_op_table_50, TypeClassInfo_for_writer_51, OpTable_11, ListHead_19, Var_61, STATE_VARIABLE_VarSet_0_23, &STATE_VARIABLE_VarSet_39_39, STATE_VARIABLE_Anon_0_25, &STATE_VARIABLE_Anon_40_40, STATE_VARIABLE_State_38_38, &STATE_VARIABLE_State_41_41);
        // direct tailcall eliminated
        ;
        next_value_of_Term_12 = ListTail_20;
        next_value_of_STATE_VARIABLE_VarSet_0_23 = STATE_VARIABLE_VarSet_39_39;
        next_value_of_STATE_VARIABLE_Anon_0_25 = STATE_VARIABLE_Anon_40_40;
        next_value_of_STATE_VARIABLE_State_0_27 = STATE_VARIABLE_State_41_41;
        Term_12 = next_value_of_Term_12;
        STATE_VARIABLE_VarSet_0_23 = next_value_of_STATE_VARIABLE_VarSet_0_23;
        STATE_VARIABLE_Anon_0_25 = next_value_of_STATE_VARIABLE_Anon_0_25;
        STATE_VARIABLE_State_0_27 = next_value_of_STATE_VARIABLE_State_0_27;
        continue;
      }
      else
      {
        MR_Word Var_45;
        MR_String Var_46;
        MR_Word Var_47;

        succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 0))));
          Var_47 = ((MR_Word) ((MR_hl_field(0, Term_12, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_46 = ((MR_String) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
            succeeded = (strcmp(Var_46, (MR_String) "[]") == 0);
            if (succeeded)
              succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          *STATE_VARIABLE_State_28 = STATE_VARIABLE_State_0_27;
          *STATE_VARIABLE_Anon_26 = STATE_VARIABLE_Anon_0_25;
          *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
        }
        else
        {
          MR_Word STATE_VARIABLE_State_49_49;
          MR_Word Var_62;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv6_STATE_VARIABLE_State_49_49;
          MR_Box MR_CALL (* func_7)(MR_Box, MR_Box);
          MR_Box conv8_Var_62;

          func_5(((MR_Box) (TypeClassInfo_for_writer_51)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " | ")), ((MR_Box) (STATE_VARIABLE_State_0_27)), &conv6_STATE_VARIABLE_State_49_49);
          STATE_VARIABLE_State_49_49 = ((MR_Word) (conv6_STATE_VARIABLE_State_49_49));
          func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_50, (MR_Integer) 0)), (MR_Integer) 12))));
          conv8_Var_62 = func_7(((MR_Box) (TypeClassInfo_for_op_table_50)), OpTable_11);
          Var_62 = ((MR_Word) (conv8_Var_62));
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_52, TypeClassInfo_for_op_table_50, TypeClassInfo_for_writer_51, OpTable_11, Term_12, Var_62, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_Anon_0_25, STATE_VARIABLE_Anon_26, STATE_VARIABLE_State_49_49, STATE_VARIABLE_State_28);
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word TypeClassInfo_for_writer_24,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19,
  MR_Word STATE_VARIABLE_State_0_20,
  MR_Word * STATE_VARIABLE_State_21)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_22;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_11);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_25, TypeClassInfo_for_op_table_23, TypeClassInfo_for_writer_24, OpTable_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_Anon_0_18, STATE_VARIABLE_Anon_19, STATE_VARIABLE_State_0_20, STATE_VARIABLE_State_21);
}

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_114_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word TypeClassInfo_for_writer_24,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19,
  MR_Word STATE_VARIABLE_State_0_20,
  MR_Word * STATE_VARIABLE_State_21)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 16))));
  MR_Box conv1_Var_22;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_11);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_25, TypeClassInfo_for_op_table_23, TypeClassInfo_for_writer_24, OpTable_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_Anon_0_18, STATE_VARIABLE_Anon_19, STATE_VARIABLE_State_0_20, STATE_VARIABLE_State_21);
}

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeInfo_for_T_186,
  MR_Word TypeClassInfo_for_op_table_184,
  MR_Word TypeClassInfo_for_writer_185,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_Anon_0_51,
  MR_Word * STATE_VARIABLE_Anon_52,
  MR_Word STATE_VARIABLE_State_0_53,
  MR_Word * STATE_VARIABLE_State_54)
{
  MR_bool succeeded = (strcmp(Atom_14, (MR_String) "[|]") == 0);
  MR_Word ListHead_20;
  MR_Word ListTail_21;
  MR_Word Var_55;
  MR_Word Var_56;

  if (succeeded)
  {
    succeeded = (ArgTerms_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ListHead_20 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
      Var_55 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
      succeeded = (Var_55 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListTail_21 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 0))));
        Var_56 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 1))));
        succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_State_58_58;
    MR_Word STATE_VARIABLE_VarSet_59_59;
    MR_Word STATE_VARIABLE_Anon_60_60;
    MR_Word STATE_VARIABLE_State_61_61;
    MR_Word STATE_VARIABLE_State_64_64;
    MR_Box conv0_STATE_VARIABLE_State_58_58;
    MR_Box conv1_STATE_VARIABLE_State_54;

    mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "[")), ((MR_Box) (STATE_VARIABLE_State_0_53)), &conv0_STATE_VARIABLE_State_58_58);
    STATE_VARIABLE_State_58_58 = ((MR_Word) (conv0_STATE_VARIABLE_State_58_58));
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_114_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, ListHead_20, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_60_60, STATE_VARIABLE_State_58_58, &STATE_VARIABLE_State_61_61);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_108_97_116_101_114_95_108_105_115_116_95_101_108_101_109_101_110_116_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, ListTail_21, STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_60_60, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_61_61, &STATE_VARIABLE_State_64_64);
    mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "]")), ((MR_Box) (STATE_VARIABLE_State_64_64)), &conv1_STATE_VARIABLE_State_54);
    *STATE_VARIABLE_State_54 = ((MR_Word) (conv1_STATE_VARIABLE_State_54));
  }
  else
  {
    succeeded = (strcmp(Atom_14, (MR_String) "[]") == 0);
    if (succeeded)
      succeeded = (ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Box conv2_STATE_VARIABLE_State_54;

      mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "[]")), ((MR_Box) (STATE_VARIABLE_State_0_53)), &conv2_STATE_VARIABLE_State_54);
      *STATE_VARIABLE_State_54 = ((MR_Word) (conv2_STATE_VARIABLE_State_54));
      *STATE_VARIABLE_Anon_52 = STATE_VARIABLE_Anon_0_51;
      *STATE_VARIABLE_VarSet_50 = STATE_VARIABLE_VarSet_0_49;
    }
    else
    {
      MR_Word BracedHeadTerm_22;
      MR_Word BracedTailTerms_23;

      succeeded = (strcmp(Atom_14, (MR_String) "{}") == 0);
      if (succeeded)
      {
        succeeded = (ArgTerms_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          BracedHeadTerm_22 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
          BracedTailTerms_23 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
        }
      }
      if (succeeded)
        if ((BracedTailTerms_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word STATE_VARIABLE_State_70_70;
          MR_Word STATE_VARIABLE_State_73_73;
          MR_Box conv3_STATE_VARIABLE_State_70_70;
          MR_Box conv4_STATE_VARIABLE_State_54;

          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "{ ")), ((MR_Box) (STATE_VARIABLE_State_0_53)), &conv3_STATE_VARIABLE_State_70_70);
          STATE_VARIABLE_State_70_70 = ((MR_Word) (conv3_STATE_VARIABLE_State_70_70));
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, BracedHeadTerm_22, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_70_70, &STATE_VARIABLE_State_73_73);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " }")), ((MR_Box) (STATE_VARIABLE_State_73_73)), &conv4_STATE_VARIABLE_State_54);
          *STATE_VARIABLE_State_54 = ((MR_Word) (conv4_STATE_VARIABLE_State_54));
        }
        else
        {
          MR_Word STATE_VARIABLE_State_77_77;
          MR_Word STATE_VARIABLE_VarSet_78_78;
          MR_Word STATE_VARIABLE_Anon_79_79;
          MR_Word STATE_VARIABLE_State_80_80;
          MR_Word STATE_VARIABLE_State_83_83;
          MR_Box conv5_STATE_VARIABLE_State_77_77;
          MR_Box conv6_STATE_VARIABLE_State_54;

          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "{")), ((MR_Box) (STATE_VARIABLE_State_0_53)), &conv5_STATE_VARIABLE_State_77_77);
          STATE_VARIABLE_State_77_77 = ((MR_Word) (conv5_STATE_VARIABLE_State_77_77));
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_114_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, BracedHeadTerm_22, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_79_79, STATE_VARIABLE_State_77_77, &STATE_VARIABLE_State_80_80);
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_108_97_116_101_114_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, BracedTailTerms_23, STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_79_79, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_80_80, &STATE_VARIABLE_State_83_83);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "}")), ((MR_Box) (STATE_VARIABLE_State_83_83)), &conv6_STATE_VARIABLE_State_54);
          *STATE_VARIABLE_State_54 = ((MR_Word) (conv6_STATE_VARIABLE_State_54));
        }
      else
      {
        MR_Word Var_26;
        MR_Word FirstArg_28;
        MR_Word OtherArgTerms_29;
        MR_Word Var_86;
        MR_Word Var_87;

        succeeded = (strcmp(Atom_14, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (ArgTerms_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_86 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
            Var_87 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_26 = ((MR_Word) ((MR_hl_field(1, Var_86, (MR_Integer) 0))));
              succeeded = (Var_87 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FirstArg_28 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 0))));
                OtherArgTerms_29 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 1))));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_VarSet_88_88;
          MR_Word STATE_VARIABLE_Anon_89_89;
          MR_Word STATE_VARIABLE_State_90_90;
          MR_Word STATE_VARIABLE_State_92_92;
          MR_Word STATE_VARIABLE_VarSet_93_93;
          MR_Word STATE_VARIABLE_Anon_94_94;
          MR_Word STATE_VARIABLE_State_95_95;
          MR_Word STATE_VARIABLE_State_98_98;
          MR_Box conv7_STATE_VARIABLE_State_92_92;
          MR_Box conv8_STATE_VARIABLE_State_54;

          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_118_97_114_105_97_98_108_101_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Var_26, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_89_89, STATE_VARIABLE_State_0_53, &STATE_VARIABLE_State_90_90);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_State_90_90)), &conv7_STATE_VARIABLE_State_92_92);
          STATE_VARIABLE_State_92_92 = ((MR_Word) (conv7_STATE_VARIABLE_State_92_92));
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_97_114_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, FirstArg_28, STATE_VARIABLE_VarSet_88_88, &STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_Anon_89_89, &STATE_VARIABLE_Anon_94_94, STATE_VARIABLE_State_92_92, &STATE_VARIABLE_State_95_95);
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_108_97_116_101_114_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, OtherArgTerms_29, STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_94_94, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_95_95, &STATE_VARIABLE_State_98_98);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_State_98_98)), &conv8_STATE_VARIABLE_State_54);
          *STATE_VARIABLE_State_54 = ((MR_Word) (conv8_STATE_VARIABLE_State_54));
        }
        else
        {
          MR_Word OpInfos_30;

          succeeded = mercury__ops__lookup_op_infos_3_p_0(TypeClassInfo_for_op_table_184, OpTable_13, Atom_14, &OpInfos_30);
          if (succeeded)
          {
            MR_Word MaybeInfix_31 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 0))));
            MR_Word MaybeBinPrefix_32 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 1))));
            MR_Word MaybePrefix_33 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 2))));
            MR_Word MaybePostfix_34 = ((MR_Word) ((MR_hl_field(0, OpInfos_30, (MR_Integer) 3))));

            if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_0_53, STATE_VARIABLE_State_54);
            else
            {
              MR_Word Var_187 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
              MR_Word Var_188 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));

              if ((Var_187 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word OpPriority_40;
                MR_Word OpGtOrGe_41;

                succeeded = (MaybePrefix_33 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  OpPriority_40 = ((MR_Word) ((MR_hl_field(1, MaybePrefix_33, (MR_Integer) 0))));
                  OpGtOrGe_41 = ((MR_Unsigned) ((MR_hl_field(1, MaybePrefix_33, (MR_Integer) 1))) & (MR_Integer) 1);
                  {
                    MR_Word NewPriority_42;
                    MR_Word STATE_VARIABLE_State_108_108;
                    MR_Word STATE_VARIABLE_State_109_109;
                    MR_Word STATE_VARIABLE_State_111_111;
                    MR_Word STATE_VARIABLE_State_114_114;
                    MR_Unsigned Var_191 = (MR_Unsigned) (OpPriority_40);
                    MR_Unsigned Var_192 = (MR_Unsigned) (Priority_16);
                    MR_Box conv11_STATE_VARIABLE_State_111_111;
                    MR_Unsigned Var_197;
                    MR_Unsigned Var_198;

                    succeeded = (Var_191 < Var_192);
                    if (succeeded)
                    {
                      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv10_STATE_VARIABLE_State_108_108;

                      func_9(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_State_0_53)), &conv10_STATE_VARIABLE_State_108_108);
                      STATE_VARIABLE_State_108_108 = ((MR_Word) (conv10_STATE_VARIABLE_State_108_108));
                    }
                    else
                      STATE_VARIABLE_State_108_108 = STATE_VARIABLE_State_0_53;
                    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_185, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_108_108, &STATE_VARIABLE_State_109_109);
                    mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " ")), ((MR_Box) (STATE_VARIABLE_State_109_109)), &conv11_STATE_VARIABLE_State_111_111);
                    STATE_VARIABLE_State_111_111 = ((MR_Word) (conv11_STATE_VARIABLE_State_111_111));
                    switch (OpGtOrGe_41) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        NewPriority_42 = OpPriority_40;
                        break;
                      case (MR_Integer) 0:
                        NewPriority_42 = mercury__ops__increment_priority_1_f_0(OpPriority_40);
                        break;
                    }
                    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Var_188, NewPriority_42, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_111_111, &STATE_VARIABLE_State_114_114);
                    Var_197 = (MR_Unsigned) (OpPriority_40);
                    Var_198 = (MR_Unsigned) (Priority_16);
                    succeeded = (Var_197 < Var_198);
                    if (succeeded)
                    {
                      void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv13_STATE_VARIABLE_State_54;

                      func_12(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_State_114_114)), &conv13_STATE_VARIABLE_State_54);
                      *STATE_VARIABLE_State_54 = ((MR_Word) (conv13_STATE_VARIABLE_State_54));
                    }
                    else
                      *STATE_VARIABLE_State_54 = STATE_VARIABLE_State_114_114;
                  }
                }
                else
                {
                  MR_Word OpPriority_172;
                  MR_Word OpGtOrGe_173;

                  succeeded = (MaybePostfix_34 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    OpPriority_172 = ((MR_Word) ((MR_hl_field(1, MaybePostfix_34, (MR_Integer) 0))));
                    OpGtOrGe_173 = ((MR_Unsigned) ((MR_hl_field(1, MaybePostfix_34, (MR_Integer) 1))) & (MR_Integer) 1);
                    {
                      MR_Word STATE_VARIABLE_State_118_118;
                      MR_Word STATE_VARIABLE_State_121_121;
                      MR_Word STATE_VARIABLE_State_123_123;
                      MR_Word STATE_VARIABLE_State_124_124;
                      MR_Word NewPriority_171;
                      MR_Unsigned Var_199 = (MR_Unsigned) (OpPriority_172);
                      MR_Unsigned Var_200 = (MR_Unsigned) (Priority_16);
                      MR_Box conv16_STATE_VARIABLE_State_123_123;
                      MR_Unsigned Var_205;
                      MR_Unsigned Var_206;

                      succeeded = (Var_199 < Var_200);
                      if (succeeded)
                      {
                        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv15_STATE_VARIABLE_State_118_118;

                        func_14(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_State_0_53)), &conv15_STATE_VARIABLE_State_118_118);
                        STATE_VARIABLE_State_118_118 = ((MR_Word) (conv15_STATE_VARIABLE_State_118_118));
                      }
                      else
                        STATE_VARIABLE_State_118_118 = STATE_VARIABLE_State_0_53;
                      switch (OpGtOrGe_173) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          NewPriority_171 = OpPriority_172;
                          break;
                        case (MR_Integer) 0:
                          NewPriority_171 = mercury__ops__increment_priority_1_f_0(OpPriority_172);
                          break;
                      }
                      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Var_188, NewPriority_171, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_118_118, &STATE_VARIABLE_State_121_121);
                      mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " ")), ((MR_Box) (STATE_VARIABLE_State_121_121)), &conv16_STATE_VARIABLE_State_123_123);
                      STATE_VARIABLE_State_123_123 = ((MR_Word) (conv16_STATE_VARIABLE_State_123_123));
                      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_185, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_123_123, &STATE_VARIABLE_State_124_124);
                      Var_205 = (MR_Unsigned) (OpPriority_172);
                      Var_206 = (MR_Unsigned) (Priority_16);
                      succeeded = (Var_205 < Var_206);
                      if (succeeded)
                      {
                        void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv18_STATE_VARIABLE_State_54;

                        func_17(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_State_124_124)), &conv18_STATE_VARIABLE_State_54);
                        *STATE_VARIABLE_State_54 = ((MR_Word) (conv18_STATE_VARIABLE_State_54));
                      }
                      else
                        *STATE_VARIABLE_State_54 = STATE_VARIABLE_State_124_124;
                    }
                  }
                  else
                    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_0_53, STATE_VARIABLE_State_54);
                }
              }
              else
              {
                MR_Word Var_189 = ((MR_Word) ((MR_hl_field(1, Var_187, (MR_Integer) 1))));
                MR_Word Var_190 = ((MR_Word) ((MR_hl_field(1, Var_187, (MR_Integer) 0))));

                if ((Var_189 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word LeftGtOrGe_44;
                  MR_Word RightGtOrGe_45;
                  MR_Word OpPriority_182;

                  succeeded = (MaybeInfix_31 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    OpPriority_182 = ((MR_Word) ((MR_hl_field(1, MaybeInfix_31, (MR_Integer) 0))));
                    LeftGtOrGe_44 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_31, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                    RightGtOrGe_45 = ((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_31, (MR_Integer) 1))) & (MR_Integer) 1);
                    {
                      MR_Word LeftPriority_46;
                      MR_Word RightPriority_48;
                      MR_Word STATE_VARIABLE_State_133_133;
                      MR_Word STATE_VARIABLE_VarSet_134_134;
                      MR_Word STATE_VARIABLE_Anon_135_135;
                      MR_Word STATE_VARIABLE_State_136_136;
                      MR_Word STATE_VARIABLE_State_138_138;
                      MR_Word STATE_VARIABLE_State_147_147;
                      MR_Unsigned Var_207 = (MR_Unsigned) (OpPriority_182);
                      MR_Unsigned Var_208 = (MR_Unsigned) (Priority_16);
                      MR_Unsigned Var_216;
                      MR_Unsigned Var_217;

                      succeeded = (Var_207 < Var_208);
                      if (succeeded)
                      {
                        void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv20_STATE_VARIABLE_State_133_133;

                        func_19(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_State_0_53)), &conv20_STATE_VARIABLE_State_133_133);
                        STATE_VARIABLE_State_133_133 = ((MR_Word) (conv20_STATE_VARIABLE_State_133_133));
                      }
                      else
                        STATE_VARIABLE_State_133_133 = STATE_VARIABLE_State_0_53;
                      switch (LeftGtOrGe_44) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          LeftPriority_46 = OpPriority_182;
                          break;
                        case (MR_Integer) 0:
                          LeftPriority_46 = mercury__ops__increment_priority_1_f_0(OpPriority_182);
                          break;
                      }
                      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Var_188, LeftPriority_46, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_134_134, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_135_135, STATE_VARIABLE_State_133_133, &STATE_VARIABLE_State_136_136);
                      succeeded = (strcmp(Atom_14, (MR_String) ",") == 0);
                      if (succeeded)
                      {
                        MR_Box conv21_STATE_VARIABLE_State_138_138;

                        mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (STATE_VARIABLE_State_136_136)), &conv21_STATE_VARIABLE_State_138_138);
                        STATE_VARIABLE_State_138_138 = ((MR_Word) (conv21_STATE_VARIABLE_State_138_138));
                      }
                      else
                      {
                        succeeded = (strcmp(Atom_14, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_String Dot_47;
                          MR_Box conv22_STATE_VARIABLE_State_138_138;

                          succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(Var_190);
                          if (succeeded)
                            Dot_47 = (MR_String) "\'.\'";
                          else
                            Dot_47 = (MR_String) ".";
                          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Dot_47)), ((MR_Box) (STATE_VARIABLE_State_136_136)), &conv22_STATE_VARIABLE_State_138_138);
                          STATE_VARIABLE_State_138_138 = ((MR_Word) (conv22_STATE_VARIABLE_State_138_138));
                        }
                        else
                        {
                          MR_Word STATE_VARIABLE_State_141_141;
                          MR_Word STATE_VARIABLE_State_142_142;
                          MR_Box conv23_STATE_VARIABLE_State_141_141;
                          MR_Box conv24_STATE_VARIABLE_State_138_138;

                          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " ")), ((MR_Box) (STATE_VARIABLE_State_136_136)), &conv23_STATE_VARIABLE_State_141_141);
                          STATE_VARIABLE_State_141_141 = ((MR_Word) (conv23_STATE_VARIABLE_State_141_141));
                          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_185, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_141_141, &STATE_VARIABLE_State_142_142);
                          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " ")), ((MR_Box) (STATE_VARIABLE_State_142_142)), &conv24_STATE_VARIABLE_State_138_138);
                          STATE_VARIABLE_State_138_138 = ((MR_Word) (conv24_STATE_VARIABLE_State_138_138));
                        }
                      }
                      switch (RightGtOrGe_45) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          RightPriority_48 = OpPriority_182;
                          break;
                        case (MR_Integer) 0:
                          RightPriority_48 = mercury__ops__increment_priority_1_f_0(OpPriority_182);
                          break;
                      }
                      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Var_190, RightPriority_48, STATE_VARIABLE_VarSet_134_134, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_135_135, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_138_138, &STATE_VARIABLE_State_147_147);
                      Var_216 = (MR_Unsigned) (OpPriority_182);
                      Var_217 = (MR_Unsigned) (Priority_16);
                      succeeded = (Var_216 < Var_217);
                      if (succeeded)
                      {
                        void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv26_STATE_VARIABLE_State_54;

                        func_25(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_State_147_147)), &conv26_STATE_VARIABLE_State_54);
                        *STATE_VARIABLE_State_54 = ((MR_Word) (conv26_STATE_VARIABLE_State_54));
                      }
                      else
                        *STATE_VARIABLE_State_54 = STATE_VARIABLE_State_147_147;
                    }
                  }
                  else
                  {
                    MR_Word OpPriority_177;
                    MR_Word LeftGtOrGe_178;
                    MR_Word RightGtOrGe_179;

                    succeeded = (MaybeBinPrefix_32 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      OpPriority_177 = ((MR_Word) ((MR_hl_field(1, MaybeBinPrefix_32, (MR_Integer) 0))));
                      LeftGtOrGe_178 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_32, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                      RightGtOrGe_179 = ((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_32, (MR_Integer) 1))) & (MR_Integer) 1);
                      {
                        MR_Word STATE_VARIABLE_State_151_151;
                        MR_Word STATE_VARIABLE_State_152_152;
                        MR_Word STATE_VARIABLE_State_154_154;
                        MR_Word STATE_VARIABLE_VarSet_155_155;
                        MR_Word STATE_VARIABLE_Anon_156_156;
                        MR_Word STATE_VARIABLE_State_157_157;
                        MR_Word STATE_VARIABLE_State_159_159;
                        MR_Word STATE_VARIABLE_State_162_162;
                        MR_Word LeftPriority_175;
                        MR_Word RightPriority_176;
                        MR_Unsigned Var_218 = (MR_Unsigned) (OpPriority_177);
                        MR_Unsigned Var_219 = (MR_Unsigned) (Priority_16);
                        MR_Box conv29_STATE_VARIABLE_State_154_154;
                        MR_Box conv30_STATE_VARIABLE_State_159_159;
                        MR_Unsigned Var_227;
                        MR_Unsigned Var_228;

                        succeeded = (Var_218 < Var_219);
                        if (succeeded)
                        {
                          void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv28_STATE_VARIABLE_State_151_151;

                          func_27(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_State_0_53)), &conv28_STATE_VARIABLE_State_151_151);
                          STATE_VARIABLE_State_151_151 = ((MR_Word) (conv28_STATE_VARIABLE_State_151_151));
                        }
                        else
                          STATE_VARIABLE_State_151_151 = STATE_VARIABLE_State_0_53;
                        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_185, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_151_151, &STATE_VARIABLE_State_152_152);
                        mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " ")), ((MR_Box) (STATE_VARIABLE_State_152_152)), &conv29_STATE_VARIABLE_State_154_154);
                        STATE_VARIABLE_State_154_154 = ((MR_Word) (conv29_STATE_VARIABLE_State_154_154));
                        switch (LeftGtOrGe_178) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            LeftPriority_175 = OpPriority_177;
                            break;
                          case (MR_Integer) 0:
                            LeftPriority_175 = mercury__ops__increment_priority_1_f_0(OpPriority_177);
                            break;
                        }
                        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Var_188, LeftPriority_175, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_155_155, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_156_156, STATE_VARIABLE_State_154_154, &STATE_VARIABLE_State_157_157);
                        mercury__stream__put_4_p_0(TypeClassInfo_for_writer_185, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) " ")), ((MR_Box) (STATE_VARIABLE_State_157_157)), &conv30_STATE_VARIABLE_State_159_159);
                        STATE_VARIABLE_State_159_159 = ((MR_Word) (conv30_STATE_VARIABLE_State_159_159));
                        switch (RightGtOrGe_179) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            RightPriority_176 = OpPriority_177;
                            break;
                          case (MR_Integer) 0:
                            RightPriority_176 = mercury__ops__increment_priority_1_f_0(OpPriority_177);
                            break;
                        }
                        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Var_190, RightPriority_176, STATE_VARIABLE_VarSet_155_155, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_156_156, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_159_159, &STATE_VARIABLE_State_162_162);
                        Var_227 = (MR_Unsigned) (OpPriority_177);
                        Var_228 = (MR_Unsigned) (Priority_16);
                        succeeded = (Var_227 < Var_228);
                        if (succeeded)
                        {
                          void MR_CALL (* func_31)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_185, (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv32_STATE_VARIABLE_State_54;

                          func_31(((MR_Box) (TypeClassInfo_for_writer_185)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_State_162_162)), &conv32_STATE_VARIABLE_State_54);
                          *STATE_VARIABLE_State_54 = ((MR_Word) (conv32_STATE_VARIABLE_State_54));
                        }
                        else
                          *STATE_VARIABLE_State_54 = STATE_VARIABLE_State_162_162;
                      }
                    }
                    else
                      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_0_53, STATE_VARIABLE_State_54);
                  }
                }
                else
                  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_0_53, STATE_VARIABLE_State_54);
              }
            }
          }
          else
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(TypeInfo_for_T_186, TypeClassInfo_for_op_table_184, TypeClassInfo_for_writer_185, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52, STATE_VARIABLE_State_0_53, STATE_VARIABLE_State_54);
        }
      }
    }
  }
}

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_108_97_116_101_114_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word TypeClassInfo_for_op_table_39,
  MR_Word TypeClassInfo_for_writer_40,
  MR_Box OpTable_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_Anon_0_6,
  MR_Word * STATE_VARIABLE_Anon_7,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_State_9 = STATE_VARIABLE_State_0_8;
      *STATE_VARIABLE_Anon_7 = STATE_VARIABLE_Anon_0_6;
      *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
    }
    else
    {
      MR_Word X_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_35_35;
      MR_Word STATE_VARIABLE_VarSet_36_36;
      MR_Word STATE_VARIABLE_Anon_37_37;
      MR_Word STATE_VARIABLE_State_38_38;
      MR_Word Var_42;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_40, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_STATE_VARIABLE_State_35_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Anon_0_6;
      MR_Word next_value_of_STATE_VARIABLE_State_0_8;

      func_0(((MR_Box) (TypeClassInfo_for_writer_40)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (STATE_VARIABLE_State_0_8)), &conv1_STATE_VARIABLE_State_35_35);
      STATE_VARIABLE_State_35_35 = ((MR_Word) (conv1_STATE_VARIABLE_State_35_35));
      Var_42 = mercury__ops__arg_priority_1_f_0(TypeClassInfo_for_op_table_39, OpTable_2);
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_41, TypeClassInfo_for_op_table_39, TypeClassInfo_for_writer_40, OpTable_2, X_23, Var_42, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_Anon_0_6, &STATE_VARIABLE_Anon_37_37, STATE_VARIABLE_State_35_35, &STATE_VARIABLE_State_38_38);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_24;
      next_value_of_STATE_VARIABLE_VarSet_0_4 = STATE_VARIABLE_VarSet_36_36;
      next_value_of_STATE_VARIABLE_Anon_0_6 = STATE_VARIABLE_Anon_37_37;
      next_value_of_STATE_VARIABLE_State_0_8 = STATE_VARIABLE_State_38_38;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_VarSet_0_4 = next_value_of_STATE_VARIABLE_VarSet_0_4;
      STATE_VARIABLE_Anon_0_6 = next_value_of_STATE_VARIABLE_Anon_0_6;
      STATE_VARIABLE_State_0_8 = next_value_of_STATE_VARIABLE_State_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_97_116_111_109_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_115_116_100_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeInfo_for_T_46,
  MR_Word TypeClassInfo_for_op_table_44,
  MR_Word TypeClassInfo_for_writer_45,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_Anon_0_24,
  MR_Word * STATE_VARIABLE_Anon_25,
  MR_Word STATE_VARIABLE_State_0_26,
  MR_Word * STATE_VARIABLE_State_27)
{
  MR_bool succeeded = (ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word STATE_VARIABLE_State_33_33;
  MR_Word Var_28;
  MR_Unsigned Var_47;
  MR_Unsigned Var_48;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_28;

  if (succeeded)
  {
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_44, (MR_Integer) 0)), (MR_Integer) 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_44)), OpTable_13, ((MR_Box) (Atom_14)));
    if (succeeded)
    {
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_44, (MR_Integer) 0)), (MR_Integer) 13))));
      conv2_Var_28 = func_1(((MR_Box) (TypeClassInfo_for_op_table_44)), OpTable_13);
      Var_28 = ((MR_Word) (conv2_Var_28));
      Var_47 = (MR_Unsigned) (Priority_16);
      Var_48 = (MR_Unsigned) (Var_28);
      succeeded = (Var_47 > Var_48);
      if (!(succeeded))
        succeeded = (Var_47 == Var_48);
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_State_30_30;
    MR_Word STATE_VARIABLE_State_31_31;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv4_STATE_VARIABLE_State_30_30;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv6_STATE_VARIABLE_State_33_33;

    func_3(((MR_Box) (TypeClassInfo_for_writer_45)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_State_0_26)), &conv4_STATE_VARIABLE_State_30_30);
    STATE_VARIABLE_State_30_30 = ((MR_Word) (conv4_STATE_VARIABLE_State_30_30));
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_45, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_writer_45)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_State_31_31)), &conv6_STATE_VARIABLE_State_33_33);
    STATE_VARIABLE_State_33_33 = ((MR_Word) (conv6_STATE_VARIABLE_State_33_33));
  }
  else
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_45, Atom_14, (MR_Integer) 1, STATE_VARIABLE_State_0_26, &STATE_VARIABLE_State_33_33);
  if ((ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
    *STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
    *STATE_VARIABLE_State_27 = STATE_VARIABLE_State_33_33;
  }
  else
  {
    MR_Word HeadArgTerm_20 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));
    MR_Word TailArgTerms_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_State_36_36;
    MR_Word STATE_VARIABLE_VarSet_37_37;
    MR_Word STATE_VARIABLE_Anon_38_38;
    MR_Word STATE_VARIABLE_State_39_39;
    MR_Word STATE_VARIABLE_State_42_42;
    MR_Word Var_51;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv8_STATE_VARIABLE_State_36_36;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_State_27;

    func_7(((MR_Box) (TypeClassInfo_for_writer_45)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_State_33_33)), &conv8_STATE_VARIABLE_State_36_36);
    STATE_VARIABLE_State_36_36 = ((MR_Word) (conv8_STATE_VARIABLE_State_36_36));
    Var_51 = mercury__ops__arg_priority_1_f_0(TypeClassInfo_for_op_table_44, OpTable_13);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_112_114_105_111_95_97_110_111_110_95_118_97_114_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_10_p_0(TypeInfo_for_T_46, TypeClassInfo_for_op_table_44, TypeClassInfo_for_writer_45, OpTable_13, HeadArgTerm_20, Var_51, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_Anon_0_24, &STATE_VARIABLE_Anon_38_38, STATE_VARIABLE_State_36_36, &STATE_VARIABLE_State_39_39);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_101_114_109_95_108_97_116_101_114_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeInfo_for_T_46, TypeClassInfo_for_op_table_44, TypeClassInfo_for_writer_45, OpTable_13, TailArgTerms_21, STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_Anon_38_38, STATE_VARIABLE_Anon_25, STATE_VARIABLE_State_39_39, &STATE_VARIABLE_State_42_42);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_45, (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) (TypeClassInfo_for_writer_45)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_State_42_42)), &conv10_STATE_VARIABLE_State_27);
    *STATE_VARIABLE_State_27 = ((MR_Word) (conv10_STATE_VARIABLE_State_27));
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_111_110_115_116_97_110_116_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_32,
  MR_Word Const_7,
  MR_Word AGT_8,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22)
{
  switch (MR_tag((MR_Word) Const_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Atom_18 = ((MR_String) ((MR_hl_field(0, Const_7, (MR_Integer) 0))));

        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_32, Atom_18, AGT_8, STATE_VARIABLE_State_0_21, STATE_VARIABLE_State_22);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Base_10 = ((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word Int_11 = ((MR_Word) ((MR_hl_field(1, Const_7, (MR_Integer) 1))));
        MR_Word Signedness_12 = ((((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        MR_Word Size_13 = ((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 2))) & (MR_Integer) 7);
        MR_String Prefix_14 = ((&mercury__term_io_vector_common_8[0 + Base_10]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0;
        MR_String IntStr_15;
        MR_String Suffix_16;
        MR_Integer Var_23 = ((&mercury__term_io_vector_common_8[0 + Base_10]))->mercury__term_io__vector_common_type_8_0__vct_8_f_1;
        MR_Word STATE_VARIABLE_State_24_24;
        MR_Word STATE_VARIABLE_State_25_25;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_State_24_24;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_State_25_25;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_State_22;

        IntStr_15 = mercury__integer__to_base_string_2_f_0(Int_11, Var_23);
        switch (Signedness_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Suffix_16 = ((&mercury__term_io_vector_common_7[4 + Size_13]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
            break;
          case (MR_Integer) 1:
            Suffix_16 = ((&mercury__term_io_vector_common_7[9 + Size_13]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
            break;
        }
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Prefix_14)), ((MR_Box) (STATE_VARIABLE_State_0_21)), &conv5_STATE_VARIABLE_State_24_24);
        STATE_VARIABLE_State_24_24 = ((MR_Word) (conv5_STATE_VARIABLE_State_24_24));
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_6(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (IntStr_15)), ((MR_Box) (STATE_VARIABLE_State_24_24)), &conv7_STATE_VARIABLE_State_25_25);
        STATE_VARIABLE_State_25_25 = ((MR_Word) (conv7_STATE_VARIABLE_State_25_25));
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_8(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Suffix_16)), ((MR_Box) (STATE_VARIABLE_State_25_25)), &conv9_STATE_VARIABLE_State_22);
        *STATE_VARIABLE_State_22 = ((MR_Word) (conv9_STATE_VARIABLE_State_22));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Str_19 = ((MR_String) ((MR_hl_field(2, Const_7, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_State_11_34;
        MR_Word STATE_VARIABLE_State_12_35;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv11_STATE_VARIABLE_State_11_34;
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv13_STATE_VARIABLE_State_22;

        func_10(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (STATE_VARIABLE_State_0_21)), &conv11_STATE_VARIABLE_State_11_34);
        STATE_VARIABLE_State_11_34 = ((MR_Word) (conv11_STATE_VARIABLE_State_11_34));
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_32, Str_19, STATE_VARIABLE_State_11_34, &STATE_VARIABLE_State_12_35);
        func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
        func_12(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\"")), ((MR_Box) (STATE_VARIABLE_State_12_35)), &conv13_STATE_VARIABLE_State_22);
        *STATE_VARIABLE_State_22 = ((MR_Word) (conv13_STATE_VARIABLE_State_22));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float Float_17 = MR_unbox_float((MR_hl_field(3, Const_7, (MR_Integer) 1)));

            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_32, Float_17, STATE_VARIABLE_State_0_21, STATE_VARIABLE_State_22);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ImplDef_20 = ((MR_String) ((MR_hl_field(3, Const_7, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_State_31_31;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
            MR_Box conv1_STATE_VARIABLE_State_31_31;
            void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv3_STATE_VARIABLE_State_22;

            func_0(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\044")), ((MR_Box) (STATE_VARIABLE_State_0_21)), &conv1_STATE_VARIABLE_State_31_31);
            STATE_VARIABLE_State_31_31 = ((MR_Word) (conv1_STATE_VARIABLE_State_31_31));
            func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_32, (MR_Integer) 0)), (MR_Integer) 5))));
            func_2(((MR_Box) (TypeClassInfo_for_writer_32)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (ImplDef_20)), ((MR_Box) (STATE_VARIABLE_State_31_31)), &conv3_STATE_VARIABLE_State_22);
            *STATE_VARIABLE_State_22 = ((MR_Word) (conv3_STATE_VARIABLE_State_22));
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
    MR_Word Var_33;
    MR_Word Var_34;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Var_34)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_String Op_13 = ((MR_String) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
            MR_Word Arg_16;
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word next_value_of_HeadVar__1_1;

            succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_36 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 0))));
              Var_35 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 1))));
              if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
                MR_Box conv2_Var_21;
                MR_Box conv1_Var_22;

                Arg_16 = Var_36;
                func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Integer) 0)), (MR_Integer) 8))));
                succeeded = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_13)), &conv2_Var_21, &conv1_Var_22);
                if (succeeded)
                  succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeClassInfo_for_op_table_30;
                MR_Word Var_25;
                MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
                MR_Box conv6_Var_18;
                MR_Box conv5_Var_19;
                MR_Box conv4_Var_20;

                Arg_16 = Var_36;
                Var_25 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
                succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TypeClassInfo_for_op_table_30 = (MR_Word) (&mercury__term_io_scalar_common_4[0]);
                  func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_30, (MR_Integer) 0)), (MR_Integer) 5))));
                  succeeded = func_3(((MR_Box) (TypeClassInfo_for_op_table_30)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_13)), &conv6_Var_18, &conv5_Var_19, &conv4_Var_20);
                  if (succeeded)
                    succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = Arg_16;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Var_34, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_18,
  MR_String Str_7,
  MR_Word AGT_8,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  MR_bool succeeded;
  MR_Word ShouldQuote_10;

  {
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 3;
    MR_Integer mid_2;
    MR_Integer result_3;

    // binary string simple lookup switch
    ;
    do
    {
      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(Str_7, ((&mercury__term_io_vector_common_7[0 + mid_2]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
  }
  if (!(succeeded))
  {
    {
      MR_Integer Var_22;
      MR_Char Var_23;
      MR_Char Var_24;
      MR_Integer Var_27;

      succeeded = mercury__term_io__all_match_loop__ho97_3_p_in__string_0(Str_7, (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (strcmp(Str_7, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_22 = (MR_Integer) 0;
          Var_23 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_27  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_22 ;
	Length = Var_27 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_7 ;
	Index = Var_22 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	Var_24  = Ch;
}
            succeeded = (Var_23 == Var_24);
          }
          succeeded = !(succeeded);
          if (succeeded)
            succeeded = (AGT_8 == (MR_Integer) 1);
        }
      }
    }
    if (!(succeeded))
    {
      MR_Char FirstChar_19;
      MR_Integer Var_28;
      MR_Char Var_29;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_28  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Var_28 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_7 ;
	Index = (MR_Integer) 0 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	FirstChar_19  = Ch;
}
        succeeded = mercury__char__lower_upper_2_p_0(FirstChar_19, &Var_29);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = Str_7 ;
		{

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        }
      }
    }
  }
  if (succeeded)
    ShouldQuote_10 = (MR_Integer) 0;
  else
    ShouldQuote_10 = (MR_Integer) 1;
  switch (ShouldQuote_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv1_STATE_VARIABLE_State_12;

        func_0(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Str_7)), ((MR_Box) (STATE_VARIABLE_State_0_11)), &conv1_STATE_VARIABLE_State_12);
        *STATE_VARIABLE_State_12 = ((MR_Word) (conv1_STATE_VARIABLE_State_12));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_State_15_15;
        MR_Word STATE_VARIABLE_State_16_16;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv3_STATE_VARIABLE_State_15_15;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_State_12;

        func_2(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\'")), ((MR_Box) (STATE_VARIABLE_State_0_11)), &conv3_STATE_VARIABLE_State_15_15);
        STATE_VARIABLE_State_15_15 = ((MR_Word) (conv3_STATE_VARIABLE_State_15_15));
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_18, Str_7, STATE_VARIABLE_State_15_15, &STATE_VARIABLE_State_16_16);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\'")), ((MR_Box) (STATE_VARIABLE_State_16_16)), &conv5_STATE_VARIABLE_State_12);
        *STATE_VARIABLE_State_12 = ((MR_Word) (conv5_STATE_VARIABLE_State_12));
      }
      break;
  }
}

static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho97_3_p_in__string_0(
  MR_String HeadVar__2_5,
  MR_Integer HeadVar__3_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_7;
    MR_Char Var_8;
    MR_Word Var_9;
    MR_Integer Var_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__term_io__all_match_loop__ho97_3_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_5 ;
	Index = HeadVar__3_6 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_7  = NextIndex;
	Var_8  = Ch;
	Var_10  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_10 == (MR_Integer) -1);
      if (succeeded)
        Var_9 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_11;

{
#define MR_PROC_LABEL mercury__term_io__all_match_loop__ho97_3_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_10 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	Var_11  = U8;
}
        {
          Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_9, 0) = ((MR_Box) (MR_Word) (Var_11));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer next_value_of_HeadVar__3_6;

      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = mercury__mercury_term_lexer__graphic_token_char_1_p_0(Var_8);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_6 = Var_7;
          HeadVar__3_6 = next_value_of_HeadVar__3_6;
          continue;
        }
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_String Str_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  MR_bool succeeded;
  MR_Integer Var_17;
  MR_Integer Var_21;
  MR_Integer Var_22;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_17  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_22  = Length;
}
  succeeded = (Var_17 < Var_22);
  if (succeeded)
    Var_21 = Var_17;
  else
    Var_21 = Var_22;
  mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_51_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(TypeClassInfo_for_writer_11, Str_6, (MR_Integer) 0, Var_21, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_51_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);
    MR_Integer Var_13;
    MR_Char Var_14;
    MR_Integer Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_49_48_51_95_95_91_51_44_32_52_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_8 ;
	Index = HeadVar__3_9 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_13  = NextIndex;
	Var_14  = Ch;
	Var_19  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Var_13 <= HeadVar__4_10);
    }
    if (succeeded)
    {
      MR_Word Var_15;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Word next_value_of_HeadVar__5_11;

      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(Var_17, Var_14, HeadVar__5_11, &Var_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      next_value_of_HeadVar__5_11 = Var_15;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    else
      *HeadVar__6_12 = HeadVar__5_11;
    break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_18,
  MR_Char Char_6,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10)
{
  MR_bool succeeded;
  MR_Char QuoteChar_8;

  switch (Char_6) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 7:
      {
        QuoteChar_8 = (MR_Char) 97;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 8:
      {
        QuoteChar_8 = (MR_Char) 98;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 9:
      {
        QuoteChar_8 = (MR_Char) 116;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 10:
      {
        QuoteChar_8 = (MR_Char) 110;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 11:
      {
        QuoteChar_8 = (MR_Char) 118;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 12:
      {
        QuoteChar_8 = (MR_Char) 102;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 13:
      {
        QuoteChar_8 = (MR_Char) 114;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 34:
      {
        QuoteChar_8 = (MR_Char) 34;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 39:
      {
        QuoteChar_8 = (MR_Char) 39;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 92:
      {
        QuoteChar_8 = (MR_Char) 92;
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_State_12_12;
    MR_String Var_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_State_12_12;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_State_10;

    func_0(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "\\")), ((MR_Box) (STATE_VARIABLE_State_0_9)), &conv1_STATE_VARIABLE_State_12_12);
    STATE_VARIABLE_State_12_12 = ((MR_Word) (conv1_STATE_VARIABLE_State_12_12));
    mercury__string__char_to_string_2_p_0(QuoteChar_8, &Var_13);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Var_13)), ((MR_Box) (STATE_VARIABLE_State_12_12)), &conv3_STATE_VARIABLE_State_10);
    *STATE_VARIABLE_State_10 = ((MR_Word) (conv3_STATE_VARIABLE_State_10));
  }
  else
  {
    succeeded = mercury__char__is_alnum_1_p_0(Char_6);
    if (!(succeeded))
    {
      if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
        if ((((mercury__term_io_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
      if (!(succeeded))
      {
        MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_19  = Int;
}
        succeeded = (Var_19 >= (MR_Integer) 160);
      }
    }
    if (succeeded)
    {
      MR_String Var_15;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv5_STATE_VARIABLE_State_10;

      mercury__string__char_to_string_2_p_0(Char_6, &Var_15);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Var_15)), ((MR_Box) (STATE_VARIABLE_State_0_9)), &conv5_STATE_VARIABLE_State_10);
      *STATE_VARIABLE_State_10 = ((MR_Word) (conv5_STATE_VARIABLE_State_10));
    }
    else
    {
      MR_String Var_17;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv7_STATE_VARIABLE_State_10;

      Var_17 = mercury__term_io__mercury_escape_char_1_f_0(Char_6);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Var_17)), ((MR_Box) (STATE_VARIABLE_State_0_9)), &conv7_STATE_VARIABLE_State_10);
      *STATE_VARIABLE_State_10 = ((MR_Word) (conv7_STATE_VARIABLE_State_10));
    }
  }
}

MR_String MR_CALL 
mercury__term_io__mercury_escape_char_1_f_0(
  MR_Char Char_3)
{
  MR_String EscapeCode_4;
  MR_Integer Int_5;
  MR_String OctalString0_6;
  MR_String OctalString_7;
  MR_String Var_12;

{
#define MR_PROC_LABEL mercury__term_io__mercury_escape_char_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_5  = Int;
}
  mercury__string__int_to_base_string_3_p_0(Int_5, (MR_Integer) 8, &OctalString0_6);
  mercury__string__pad_left_4_p_0(OctalString0_6, (MR_Char) 48, (MR_Integer) 3, &OctalString_7);
  mercury__string__append_3_p_2(OctalString_7, (MR_String) "\\", &Var_12);
  mercury__string__append_3_p_2((MR_String) "\\", Var_12, &EscapeCode_4);
  return EscapeCode_4;
}

static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_io____Unify____adjacent_to_graphic_token_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_io____Compare____adjacent_to_graphic_token_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_io____Unify____anon_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_io____Unify____anon_var_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_io____Compare____anon_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_io____Compare____anon_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__term_io__init(void)
{
}

void mercury__term_io__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term_io__term_io__type_ctor_info_adjacent_to_graphic_token_0);
	MR_register_type_ctor_info(&mercury__term_io__term_io__type_ctor_info_anon_var_info_0);
}

void mercury__term_io__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__term_io__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module term_io.
