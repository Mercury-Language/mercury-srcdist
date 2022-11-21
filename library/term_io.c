/*
** Automatically generated from `term_io.m'
** by the Mercury compiler,
** version rotd-2022-11-21
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
#include "std_util.mih"
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
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0;

static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1;

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_ordinal_ordered_adjacent_to_graphic_token_0[2];

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0[2];

static const MR_Integer mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0[2];

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Box Var_19,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__term_io__foldl_between_2__ho31_6_p_in__string_0(
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__term_io__write_later_list_elements_9_p_0(
  MR_Word TypeInfo_for_T_51,
  MR_Word TypeClassInfo_for_op_table_50,
  MR_Word OutStream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Integer STATE_VARIABLE_N_0_25,
  MR_Integer * STATE_VARIABLE_N_26);

static void MR_CALL 
mercury__term_io__write_term_arg_9_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word OutStream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Integer STATE_VARIABLE_N_0_18,
  MR_Integer * STATE_VARIABLE_N_19);

static void MR_CALL 
mercury__term_io__write_term_later_args_9_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeClassInfo_for_op_table_39,
  MR_Word OutStream_1,
  MR_Box OpTable_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Integer STATE_VARIABLE_N_0_6,
  MR_Integer * STATE_VARIABLE_N_7);

static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho23_3_p_in__string_0(
  MR_String HeadVar__2_5,
  MR_Integer HeadVar__3_6);

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_55_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Word Var_19,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10);

static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__term_io_scalar_common_1[3][2];

static /* final */ const MR_Box mercury__term_io_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__term_io_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_io_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__term_io_scalar_common_5[1][3];


struct mercury__term_io__vector_common_type_6_0_s {
  const MR_String mercury__term_io__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mercury__term_io__vector_common_type_6_0_s mercury__term_io_vector_common_6[44];

struct mercury__term_io__vector_common_type_7_0_s {
  const MR_Integer mercury__term_io__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__term_io__vector_common_type_7_0_s mercury__term_io_vector_common_7[12];



static /* final */ const MR_Box mercury__term_io_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "\"")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__term_io_scalar_common_5[1][3] = {
  /* row   0 */
  {
    (MR_Unsigned) 4227923967U,
    (MR_Unsigned) 4160749569U,
    (MR_Unsigned) 2013265921U
  },
};


static /* final */ const struct mercury__term_io__vector_common_type_6_0_s mercury__term_io_vector_common_6[44] = {
  /* row   0 */   { (MR_String) "!" },
  /* row   1 */   { (MR_String) ";" },
  /* row   2 */   { (MR_String) "[]" },
  /* row   3 */   { (MR_String) "{}" },
  /* row   4 */   { (MR_String) "0b" },
  /* row   5 */   { (MR_String) "0o" },
  /* row   6 */   { (MR_String) "" },
  /* row   7 */   { (MR_String) "0x" },
  /* row   8 */   { (MR_String) "" },
  /* row   9 */   { (MR_String) "i8" },
  /* row  10 */   { (MR_String) "i16" },
  /* row  11 */   { (MR_String) "i32" },
  /* row  12 */   { (MR_String) "i64" },
  /* row  13 */   { (MR_String) "u" },
  /* row  14 */   { (MR_String) "u8" },
  /* row  15 */   { (MR_String) "u16" },
  /* row  16 */   { (MR_String) "u32" },
  /* row  17 */   { (MR_String) "u64" },
  /* row  18 */   { (MR_String) "!" },
  /* row  19 */   { (MR_String) ";" },
  /* row  20 */   { (MR_String) "[]" },
  /* row  21 */   { (MR_String) "{}" },
  /* row  22 */   { (MR_String) "0b" },
  /* row  23 */   { (MR_String) "0o" },
  /* row  24 */   { (MR_String) "" },
  /* row  25 */   { (MR_String) "0x" },
  /* row  26 */   { (MR_String) "" },
  /* row  27 */   { (MR_String) "i8" },
  /* row  28 */   { (MR_String) "i16" },
  /* row  29 */   { (MR_String) "i32" },
  /* row  30 */   { (MR_String) "i64" },
  /* row  31 */   { (MR_String) "u" },
  /* row  32 */   { (MR_String) "u8" },
  /* row  33 */   { (MR_String) "u16" },
  /* row  34 */   { (MR_String) "u32" },
  /* row  35 */   { (MR_String) "u64" },
  /* row  36 */   { (MR_String) "!" },
  /* row  37 */   { (MR_String) ";" },
  /* row  38 */   { (MR_String) "[]" },
  /* row  39 */   { (MR_String) "{}" },
  /* row  40 */   { (MR_String) "0b" },
  /* row  41 */   { (MR_String) "0o" },
  /* row  42 */   { (MR_String) "" },
  /* row  43 */   { (MR_String) "0x" },
};

static /* final */ const struct mercury__term_io__vector_common_type_7_0_s mercury__term_io_vector_common_7[12] = {
  /* row   0 */   { (MR_Integer) 2 },
  /* row   1 */   { (MR_Integer) 8 },
  /* row   2 */   { (MR_Integer) 10 },
  /* row   3 */   { (MR_Integer) 16 },
  /* row   4 */   { (MR_Integer) 2 },
  /* row   5 */   { (MR_Integer) 8 },
  /* row   6 */   { (MR_Integer) 10 },
  /* row   7 */   { (MR_Integer) 16 },
  /* row   8 */   { (MR_Integer) 2 },
  /* row   9 */   { (MR_Integer) 8 },
  /* row  10 */   { (MR_Integer) 10 },
  /* row  11 */   { (MR_Integer) 16 },
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

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word Stream_5,
  MR_String S_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_STATE_VARIABLE_State_11_11;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_State_9;

  func_0(((MR_Box) (TypeClassInfo_for_writer_15)), ((MR_Box) (Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_11_11);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_5, S_6);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_15)), ((MR_Box) (Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word Stream_5,
  MR_String S_6)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_11, TypeClassInfo_for_writer_12, Stream_5, S_6, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word Stream_5,
  MR_Char C_6)
{
  mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(TypeClassInfo_for_writer_11, Stream_5, C_6);
}

void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word Stream_5,
  MR_Char C_6)
{
  MR_String Var_10;
  MR_String Var_16;
  MR_String Var_19;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_State_9;

  mercury__term_io__string_is_escaped_char_2_p_0(C_6, &Var_16);
  mercury__string__append_3_p_2(Var_16, (MR_String) "\'", &Var_19);
  mercury__string__append_3_p_2((MR_String) "\'", Var_19, &Var_10);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_11, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_writer_11)), ((MR_Box) (Stream_5)), ((MR_Box) (Var_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_9);
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
        if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
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
    if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
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
  MR_String HeadVar__2_2 = ((&mercury__term_io_vector_common_6[40 + HeadVar__1_1]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__term_io__integer_base_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2 = ((&mercury__term_io_vector_common_7[8 + HeadVar__1_1]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;

  return HeadVar__2_2;
}

void MR_CALL 
mercury__term_io__quote_atom_agt_4_p_0(
  MR_String S_5,
  MR_Word AdjacentToGraphicToken_6)
{
  MR_Word Stream_8;
  MR_Box Var_14;

{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Stream;
}
  Stream_8 = (MR_Word) (Var_14);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_8, S_5, AdjacentToGraphicToken_6);
}

MR_String MR_CALL 
mercury__term_io__quoted_atom_1_f_0(
  MR_String S_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = mercury__term_io__quoted_atom_agt_2_f_0(S_3, (MR_Integer) 1);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__term_io__quote_atom_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Box Stream_5,
  MR_String S_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_11, TypeClassInfo_for_writer_12, Stream_5, S_6, (MR_Integer) 1, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__quote_atom_agt_5_p_0(
  MR_Word TypeClassInfo_for_writer_18,
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_6,
  MR_String S_7,
  MR_Word AdjacentToGraphicToken_8,
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
      result_3 = MR_strcmp(S_7, ((&mercury__term_io_vector_common_6[36 + mid_2]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0);
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
      MR_Integer Var_23;
      MR_Char Var_24;
      MR_Char Var_25;
      MR_Integer Var_28;

      succeeded = mercury__term_io__all_match_loop__ho23_3_p_in__string_0(S_7, (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (strcmp(S_7, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_23 = (MR_Integer) 0;
          Var_24 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_28  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_23 ;
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
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_7 ;
	Index = Var_23 ;
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
	Var_25  = Ch;
}
            succeeded = (Var_24 == Var_25);
          }
          succeeded = !(succeeded);
          if (succeeded)
            succeeded = (AdjacentToGraphicToken_8 == (MR_Integer) 1);
        }
      }
    }
    if (!(succeeded))
    {
      MR_Char FirstChar_20;
      MR_Integer Var_29;
      MR_Char Var_30;

{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_29  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Var_29 ;
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
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_7 ;
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
	FirstChar_20  = Ch;
}
        succeeded = mercury__char__lower_upper_2_p_0(FirstChar_20, &Var_30);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_7 ;
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

        func_0(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_6, ((MR_Box) (S_7)), STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box STATE_VARIABLE_State_15_15;
        MR_Box STATE_VARIABLE_State_16_16;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_1(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), STATE_VARIABLE_State_0_11, &STATE_VARIABLE_State_15_15);
        mercury__term_io__write_escaped_string_4_p_0(TypeClassInfo_for_writer_18, TypeClassInfo_for_writer_19, Stream_6, S_7, STATE_VARIABLE_State_15_15, &STATE_VARIABLE_State_16_16);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), STATE_VARIABLE_State_16_16, STATE_VARIABLE_State_12);
      }
      break;
  }
}

void MR_CALL 
mercury__term_io__quote_atom_3_p_0(
  MR_String S_4)
{
  MR_Word Stream_9;
  MR_Box Var_13;

{
#define MR_PROC_LABEL mercury__term_io__quote_atom_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Stream;
}
  Stream_9 = (MR_Word) (Var_13);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_9, S_4, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__write_escaped_string_3_p_0(
  MR_String String_4)
{
  MR_Word Stream_6;
  MR_Box Var_12;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Var_12);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_6, String_4);
}

MR_String MR_CALL 
mercury__term_io__quoted_string_1_f_0(
  MR_String S_3)
{
  MR_String HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_6;
  MR_String Var_7;

  Var_7 = mercury__term_io__escaped_string_1_f_0(S_3);
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (Var_7));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) (MR_mkword(1, &mercury__term_io_scalar_common_1[1])));
  }
  {
    Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_4, 0) = ((MR_Box) ((MR_String) "\""));
    MR_hl_field(1, Var_4, 1) = ((MR_Box) (Var_6));
  }
  HeadVar__2_2 = mercury__string__append_list_1_f_0(Var_4);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__term_io__quote_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box Stream_5,
  MR_String S_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  MR_Box STATE_VARIABLE_State_11_11;
  MR_Box STATE_VARIABLE_State_12_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_writer_15)), Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_11_11);
  mercury__term_io__write_escaped_string_4_p_0(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_5, S_6, STATE_VARIABLE_State_11_11, &STATE_VARIABLE_State_12_12);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_writer_15)), Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__write_escaped_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Box Stream_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  MR_bool succeeded;
  MR_Integer Var_18;
  MR_Integer Var_20;
  MR_Integer Var_22;
  MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_18  = Length;
}
  succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
  if (succeeded)
    Var_20 = (MR_Integer) 0;
  else
    Var_20 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_23  = Length;
}
  succeeded = (Var_18 < Var_23);
  if (succeeded)
    Var_22 = Var_18;
  else
    Var_22 = Var_23;
  mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(TypeClassInfo_for_writer_11, TypeClassInfo_for_writer_12, Stream_5, String_6, Var_20, Var_22, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Box Var_19,
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
    MR_Integer Var_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0

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
	Var_20  = ReplacedCodeUnit;
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

      mercury__term_io__write_escaped_char_4_p_0(Var_17, Var_18, Var_19, Var_14, HeadVar__5_11, &Var_15);
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
mercury__term_io__quote_string_3_p_0(
  MR_String S_4)
{
  MR_Word Stream_6;
  MR_Box Var_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_State_11_14;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__term_io__quote_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Var_12);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_11_14);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_6, S_4);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_8);
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
          if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) *Char_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) *Char_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
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

MR_String MR_CALL 
mercury__term_io__escaped_char_1_f_0(
  MR_Char Char_3)
{
  MR_String String_4;

  mercury__term_io__string_is_escaped_char_2_p_0(Char_3, &String_4);
  return String_4;
}

void MR_CALL 
mercury__term_io__write_escaped_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
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
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_writer_17)), Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 92)), STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_12_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_writer_17)), Stream_5, ((MR_Box) (MR_Word) (QuoteChar_8)), STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_10);
  }
  else
  {
    succeeded = mercury__char__is_alnum_1_p_0(Char_6);
    if (!(succeeded))
    {
      if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
        if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
      if (!(succeeded))
      {
        MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_18  = Int;
}
        succeeded = (Var_18 >= (MR_Integer) 160);
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5))));

      func_2(((MR_Box) (TypeClassInfo_for_writer_17)), Stream_5, ((MR_Box) (MR_Word) (Char_6)), STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
    }
    else
    {
      MR_String Var_15;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      Var_15 = mercury__term_io__mercury_escape_char_1_f_0(Char_6);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_writer_16)), Stream_5, ((MR_Box) (Var_15)), STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
    }
  }
}

void MR_CALL 
mercury__term_io__write_escaped_char_3_p_0(
  MR_Char Char_4)
{
  MR_Word Stream_6;
  MR_Box Var_12;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_12  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Var_12);
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_6, Char_4);
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

void MR_CALL 
mercury__term_io__quote_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Box Stream_5,
  MR_Char C_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(TypeClassInfo_for_writer_11, Stream_5, C_6, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Box Stream_5,
  MR_Char C_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  MR_String Var_10;
  MR_String Var_16;
  MR_String Var_19;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  mercury__term_io__string_is_escaped_char_2_p_0(C_6, &Var_16);
  mercury__string__append_3_p_2(Var_16, (MR_String) "\'", &Var_19);
  mercury__string__append_3_p_2((MR_String) "\'", Var_19, &Var_10);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_11, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_writer_11)), Stream_5, ((MR_Box) (Var_10)), STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__quote_char_3_p_0(
  MR_Char C_4)
{
  MR_Word OutStream_6;
  MR_String Var_10;
  MR_Box Var_11;
  MR_String Var_15;
  MR_String Var_18;

{
#define MR_PROC_LABEL mercury__term_io__quote_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_11  = (MR_Box) Stream;
}
  OutStream_6 = (MR_Word) (Var_11);
  mercury__term_io__string_is_escaped_char_2_p_0(C_4, &Var_15);
  mercury__string__append_3_p_2(Var_15, (MR_String) "\'", &Var_18);
  mercury__string__append_3_p_2((MR_String) "\'", Var_18, &Var_10);
  mercury__io__write_string_4_p_0(OutStream_6, Var_10);
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
        if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
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
mercury__term_io__write_variable_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Word OutStream_7,
  MR_Box OpTable_8,
  MR_Word Var_9,
  MR_Word VarSet_10)
{
  MR_Word Var_12;
  MR_Integer Var_13;

  mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_17, OutStream_7, OpTable_8, Var_9, VarSet_10, &Var_12, (MR_Integer) 0, &Var_13);
}

void MR_CALL 
mercury__term_io__write_variable_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_op_table_14,
  MR_Box OpTable_6,
  MR_Word Var_7,
  MR_Word VarSet_8)
{
  MR_Word OutStream_10;
  MR_Box Var_16;
  MR_Word Var_17;
  MR_Integer Var_18;

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
  mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, OutStream_10, OpTable_6, Var_7, VarSet_8, &Var_17, (MR_Integer) 0, &Var_18);
}

void MR_CALL 
mercury__term_io__write_variable_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word OutStream_6,
  MR_Word Var_7,
  MR_Word VarSet_8)
{
  MR_Word Var_15;
  MR_Integer Var_16;

  mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), Var_7, VarSet_8, &Var_15, (MR_Integer) 0, &Var_16);
}

void MR_CALL 
mercury__term_io__write_variable_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Var_5,
  MR_Word VarSet_6)
{
  MR_Word OutStream_8;
  MR_Box Var_13;
  MR_Word Var_16;
  MR_Integer Var_17;

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
  mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_8, ((MR_Box) ((MR_Integer) 0)), Var_5, VarSet_6, &Var_16, (MR_Integer) 0, &Var_17);
}

MR_String MR_CALL 
mercury__term_io__format_constant_1_f_0(
  MR_Word Const_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = mercury__term_io__format_constant_agt_2_f_0(Const_3, (MR_Integer) 1);
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__term_io__format_constant_agt_2_f_0(
  MR_Word Const_4,
  MR_Word AdjacentToGraphicToken_5)
{
  MR_String Str_6;

  switch (MR_tag((MR_Word) Const_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String A_12 = ((MR_String) ((MR_hl_field(0, Const_4, (MR_Integer) 0))));

        Str_6 = mercury__term_io__quoted_atom_agt_2_f_0(A_12, AdjacentToGraphicToken_5);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Base_7 = ((MR_Unsigned) ((MR_hl_field(1, Const_4, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word I_8 = ((MR_Word) ((MR_hl_field(1, Const_4, (MR_Integer) 1))));
        MR_Word Signedness_9 = ((((MR_Unsigned) ((MR_hl_field(1, Const_4, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        MR_Word Size_10 = ((MR_Unsigned) ((MR_hl_field(1, Const_4, (MR_Integer) 2))) & (MR_Integer) 7);
        MR_String Var_15 = ((&mercury__term_io_vector_common_6[22 + Base_7]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
        MR_String Var_16;
        MR_String Var_17;
        MR_Integer Var_18 = ((&mercury__term_io_vector_common_7[4 + Base_7]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
        MR_String Var_19;

        Var_17 = mercury__integer__to_base_string_2_f_0(I_8, Var_18);
        switch (Signedness_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_19 = ((&mercury__term_io_vector_common_6[26 + Size_10]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
            break;
          case (MR_Integer) 1:
            Var_19 = ((&mercury__term_io_vector_common_6[31 + Size_10]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
            break;
        }
        mercury__string__append_3_p_2(Var_17, Var_19, &Var_16);
        mercury__string__append_3_p_2(Var_15, Var_16, &Str_6);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String S_13 = ((MR_String) ((MR_hl_field(2, Const_4, (MR_Integer) 0))));
        MR_Word Var_21;
        MR_Word Var_23;
        MR_String Var_24;

        Var_24 = mercury__term_io__escaped_string_1_f_0(S_13);
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &mercury__term_io_scalar_common_1[1])));
        }
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) ((MR_String) "\""));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
        }
        Str_6 = mercury__string__append_list_1_f_0(Var_21);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float F_11 = MR_unbox_float((MR_hl_field(3, Const_4, (MR_Integer) 1)));

{
#define MR_PROC_LABEL mercury__term_io__format_constant_agt_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt = F_11 ;
		{
{
    // For efficiency reasons we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	Str_6  = Str;
}
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String N_14 = ((MR_String) ((MR_hl_field(3, Const_4, (MR_Integer) 1))));

            mercury__string__append_3_p_2((MR_String) "\044", N_14, &Str_6);
          }
          break;
      }
      break;
  }
  return Str_6;
}

MR_String MR_CALL 
mercury__term_io__quoted_atom_agt_2_f_0(
  MR_String S_4,
  MR_Word AdjacentToGraphicToken_5)
{
  MR_bool succeeded;
  MR_String String_6;
  MR_Word ShouldQuote_7;

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
      result_3 = MR_strcmp(S_4, ((&mercury__term_io_vector_common_6[18 + mid_2]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0);
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
      MR_Integer Var_18;
      MR_Char Var_19;
      MR_Char Var_20;
      MR_Integer Var_23;

      succeeded = mercury__term_io__all_match_loop__ho23_3_p_in__string_0(S_4, (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (strcmp(S_4, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_18 = (MR_Integer) 0;
          Var_19 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_23  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_18 ;
	Length = Var_23 ;
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
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_4 ;
	Index = Var_18 ;
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
	Var_20  = Ch;
}
            succeeded = (Var_19 == Var_20);
          }
          succeeded = !(succeeded);
          if (succeeded)
            succeeded = (AdjacentToGraphicToken_5 == (MR_Integer) 1);
        }
      }
    }
    if (!(succeeded))
    {
      MR_Char FirstChar_15;
      MR_Integer Var_24;
      MR_Char Var_25;

{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_24  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Var_24 ;
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
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_4 ;
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
	FirstChar_15  = Ch;
}
        succeeded = mercury__char__lower_upper_2_p_0(FirstChar_15, &Var_25);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_4 ;
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
    ShouldQuote_7 = (MR_Integer) 0;
  else
    ShouldQuote_7 = (MR_Integer) 1;
  switch (ShouldQuote_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      String_6 = S_4;
      break;
    case (MR_Integer) 1:
      {
        MR_String ES_8;
        MR_Word Var_9;
        MR_Word Var_11;

        ES_8 = mercury__term_io__escaped_string_1_f_0(S_4);
        {
          Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_11, 0) = ((MR_Box) (ES_8));
          MR_hl_field(1, Var_11, 1) = ((MR_Box) (MR_mkword(1, &mercury__term_io_scalar_common_1[2])));
        }
        {
          Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_9, 0) = ((MR_Box) ((MR_String) "\'"));
          MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_11));
        }
        String_6 = mercury__string__append_list_1_f_0(Var_9);
      }
      break;
  }
  return String_6;
}

MR_String MR_CALL 
mercury__term_io__escaped_string_1_f_0(
  MR_String String_3)
{
  MR_bool succeeded;
  MR_String HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Integer Var_14;
  MR_Integer Var_20;
  MR_Integer Var_22;
  MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_14  = Length;
}
  succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
  if (succeeded)
    Var_20 = (MR_Integer) 0;
  else
    Var_20 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_23  = Length;
}
  succeeded = (Var_14 < Var_23);
  if (succeeded)
    Var_22 = Var_14;
  else
    Var_22 = Var_23;
  mercury__term_io__foldl_between_2__ho31_6_p_in__string_0(String_3, Var_20, Var_22, (MR_Word) ((MR_Unsigned) 0U), &Var_5);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_5, &Var_4);
  HeadVar__2_2 = mercury__string__append_list_1_f_0(Var_4);
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__term_io__foldl_between_2__ho31_6_p_in__string_0(
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
#define MR_PROC_LABEL mercury__term_io__foldl_between_2__ho31_6_p_in__string_0

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

      Var_15 = mercury__term_io__add_escaped_char_2_f_0(Var_14, HeadVar__5_11);
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

MR_Word MR_CALL 
mercury__term_io__add_escaped_char_2_f_0(
  MR_Char Char_4,
  MR_Word Strings0_5)
{
  MR_bool succeeded;
  MR_Word Strings_6;
  MR_Char QuoteChar_7;

  switch (Char_4) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 7:
      {
        QuoteChar_7 = (MR_Char) 97;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 8:
      {
        QuoteChar_7 = (MR_Char) 98;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 9:
      {
        QuoteChar_7 = (MR_Char) 116;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 10:
      {
        QuoteChar_7 = (MR_Char) 110;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 11:
      {
        QuoteChar_7 = (MR_Char) 118;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 12:
      {
        QuoteChar_7 = (MR_Char) 102;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 13:
      {
        QuoteChar_7 = (MR_Char) 114;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 34:
      {
        QuoteChar_7 = (MR_Char) 34;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 39:
      {
        QuoteChar_7 = (MR_Char) 39;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 92:
      {
        QuoteChar_7 = (MR_Char) 92;
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    MR_String Var_8;
    MR_Word Var_9;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = ((MR_Box) (MR_Word) (QuoteChar_7));
      MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
      MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_11));
    }
    mercury__string__from_char_list_2_p_0(Var_9, &Var_8);
    {
      Strings_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Strings_6, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, Strings_6, 1) = ((MR_Box) (Strings0_5));
    }
  }
  else
  {
    succeeded = mercury__char__is_alnum_1_p_0(Char_4);
    if (!(succeeded))
    {
      if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
        if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
      if (!(succeeded))
      {
        MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__term_io__add_escaped_char_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_15  = Int;
}
        succeeded = (Var_15 >= (MR_Integer) 160);
      }
    }
    if (succeeded)
    {
      MR_String Var_13;

      mercury__string__char_to_string_2_p_0(Char_4, &Var_13);
      {
        Strings_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Strings_6, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, Strings_6, 1) = ((MR_Box) (Strings0_5));
      }
    }
    else
    {
      MR_String Var_14;

      Var_14 = mercury__term_io__mercury_escape_char_1_f_0(Char_4);
      {
        Strings_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Strings_6, 0) = ((MR_Box) (Var_14));
        MR_hl_field(1, Strings_6, 1) = ((MR_Box) (Strings0_5));
      }
    }
  }
  return Strings_6;
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
  mercury__term_io__write_constant_5_p_0(OutStream_6, Const_4, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__write_term_nl_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_op_table_16,
  MR_Word OutStream_7,
  MR_Box OpTable_8,
  MR_Word VarSet_9,
  MR_Word Term_10)
{
  MR_Word Var_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_21;
  MR_Word Var_18;
  MR_Integer Var_19;

  conv1_Var_21 = func_0(((MR_Box) (TypeClassInfo_for_op_table_16)), OpTable_8);
  Var_21 = ((MR_Word) (conv1_Var_21));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, OutStream_7, OpTable_8, Term_10, Var_21, VarSet_9, &Var_18, (MR_Integer) 0, &Var_19);
  mercury__io__write_string_4_p_0(OutStream_7, (MR_String) ".\n");
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
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_22;
  MR_Word Var_19;
  MR_Integer Var_20;

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
  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_14)), OpTable_6);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, OutStream_10, OpTable_6, Term_8, Var_22, VarSet_7, &Var_19, (MR_Integer) 0, &Var_20);
  mercury__io__write_string_4_p_0(OutStream_10, (MR_String) ".\n");
}

void MR_CALL 
mercury__term_io__write_term_nl_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word OutStream_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  MR_Word Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_20;
  MR_Word Var_17;
  MR_Integer Var_18;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_20 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_20 = ((MR_Word) (conv1_Var_20));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_20, VarSet_7, &Var_17, (MR_Integer) 0, &Var_18);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) ".\n");
}

void MR_CALL 
mercury__term_io__write_term_nl_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSet_5,
  MR_Word Term_6)
{
  MR_Word OutStream_8;
  MR_Box Var_13;
  MR_Word Var_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_21;
  MR_Word Var_18;
  MR_Integer Var_19;

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
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_21 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_21 = ((MR_Word) (conv1_Var_21));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_8, ((MR_Box) ((MR_Integer) 0)), Term_6, Var_21, VarSet_5, &Var_18, (MR_Integer) 0, &Var_19);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) ".\n");
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
  MR_Word Var_19;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_19;
  MR_Word Var_12;
  MR_Integer Var_13;

  conv1_Var_19 = func_0(((MR_Box) (TypeClassInfo_for_op_table_17)), OpTable_8);
  Var_19 = ((MR_Word) (conv1_Var_19));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_17, OutStream_7, OpTable_8, Term_10, Var_19, VarSet_9, &Var_12, (MR_Integer) 0, &Var_13);
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
  MR_Box Var_16;
  MR_Word Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_20;
  MR_Word Var_17;
  MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__term_io__write_term_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) Stream;
}
  OutStream_10 = (MR_Word) (Var_16);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_20 = func_0(((MR_Box) (TypeClassInfo_for_op_table_14)), OpTable_6);
  Var_20 = ((MR_Word) (conv1_Var_20));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, OutStream_10, OpTable_6, Term_8, Var_20, VarSet_7, &Var_17, (MR_Integer) 0, &Var_18);
}

void MR_CALL 
mercury__term_io__write_term_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word OutStream_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  MR_Word Var_18;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_18;
  MR_Word Var_15;
  MR_Integer Var_16;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_18 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_18 = ((MR_Word) (conv1_Var_18));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_18, VarSet_7, &Var_15, (MR_Integer) 0, &Var_16);
}

void MR_CALL 
mercury__term_io__write_term_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSet_5,
  MR_Word Term_6)
{
  MR_Word OutStream_8;
  MR_Box Var_13;
  MR_Word Var_19;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_19;
  MR_Word Var_16;
  MR_Integer Var_17;

{
#define MR_PROC_LABEL mercury__term_io__write_term_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Stream;
}
  OutStream_8 = (MR_Word) (Var_13);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_19 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_19 = ((MR_Word) (conv1_Var_19));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_8, ((MR_Box) ((MR_Integer) 0)), Term_6, Var_19, VarSet_5, &Var_16, (MR_Integer) 0, &Var_17);
}

void MR_CALL 
mercury__term_io__write_term_prio_anon_vars_10_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_204,
  MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_203,
  MR_Word tscc_proc_1_input_3_OutStream_11,
  MR_Box tscc_proc_1_input_4_OpTable_12,
  MR_Word tscc_proc_1_input_5_Term_13,
  MR_Word tscc_proc_1_input_6_Priority_14,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_52,
  MR_Integer tscc_proc_1_input_8_STATE_VARIABLE_N_0_53,
  MR_Integer * tscc_output_ptr_2_STATE_VARIABLE_N_54)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_33;
  MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_32;
  MR_Word tscc_proc_2_input_3_OutStream_10;
  MR_Box tscc_proc_2_input_4_OpTable_11;
  MR_Word tscc_proc_2_input_5_Var_12;
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21;
  MR_Integer tscc_proc_2_input_7_STATE_VARIABLE_N_0_23;
  MR_Word tscc_output_1_STATE_VARIABLE_VarSet_52;
  MR_Integer tscc_output_2_STATE_VARIABLE_N_54;

  // The code for TSCC PROC 1: pred term_io.write_term_prio_anon_vars/10-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred term_io.write_term_prio_anon_vars/10-0
  ;
  // proc 2 in TSCC: pred term_io.write_variable_anon_vars/9-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_T_204 = tscc_proc_1_input_1_TypeInfo_for_T_204;
    MR_Word TypeClassInfo_for_op_table_203 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_203;
    MR_Word OutStream_11 = tscc_proc_1_input_3_OutStream_11;
    MR_Box OpTable_12 = tscc_proc_1_input_4_OpTable_12;
    MR_Word Term_13 = tscc_proc_1_input_5_Term_13;
    MR_Word Priority_14 = tscc_proc_1_input_6_Priority_14;
    MR_Word STATE_VARIABLE_VarSet_0_51 = tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
    MR_Word STATE_VARIABLE_VarSet_52;
    MR_Integer STATE_VARIABLE_N_0_53 = tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;
    MR_Integer STATE_VARIABLE_N_54;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0))
    {
      MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 0))));
      MR_Word Args_21 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 1))));
      MR_Word ListHead_23;
      MR_Word ListTail_24;
      MR_String Var_60;
      MR_Word Var_61;
      MR_Word Var_62;

      succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_60 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
        succeeded = (strcmp(Var_60, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ListHead_23 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
            Var_61 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
            succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ListTail_24 = ((MR_Word) ((MR_hl_field(1, Var_61, (MR_Integer) 0))));
              Var_62 = ((MR_Word) ((MR_hl_field(1, Var_61, (MR_Integer) 1))));
              succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_VarSet_65_65;
        MR_Integer STATE_VARIABLE_N_66_66;

        mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 91);
        mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, ListHead_23, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_65_65, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_66_66);
        mercury__term_io__write_later_list_elements_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, ListTail_24, STATE_VARIABLE_VarSet_65_65, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_66_66, &STATE_VARIABLE_N_54);
        mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 93);
      }
      else
      {
        MR_String Var_73;

        succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_73 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
          succeeded = (strcmp(Var_73, (MR_String) "[]") == 0);
          if (succeeded)
            succeeded = (Args_21 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "[]");
          STATE_VARIABLE_N_54 = STATE_VARIABLE_N_0_53;
          STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_0_51;
        }
        else
        {
          MR_Word BracedTerm_25;
          MR_String Var_76;
          MR_Word Var_77;

          succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_76 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
            succeeded = (strcmp(Var_76, (MR_String) "{}") == 0);
            if (succeeded)
            {
              succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BracedTerm_25 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                Var_77 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
          {
            mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "{ ");
            mercury__term_io__write_term_anon_vars_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, BracedTerm_25, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
            mercury__io__write_string_4_p_0(OutStream_11, (MR_String) " }");
          }
          else
          {
            MR_Word BracedHead_26;
            MR_Word BracedTail_27;
            MR_String Var_85;

            succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_85 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
              succeeded = (strcmp(Var_85, (MR_String) "{}") == 0);
              if (succeeded)
              {
                succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BracedHead_26 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                  BracedTail_27 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                }
              }
            }
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_VarSet_88_88;
              MR_Integer STATE_VARIABLE_N_89_89;

              mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 123);
              mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, BracedHead_26, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_89_89);
              mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, BracedTail_27, STATE_VARIABLE_VarSet_88_88, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_89_89, &STATE_VARIABLE_N_54);
              mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 125);
            }
            else
            {
              MR_Word FirstArg_29;
              MR_Word OtherArgs_30;
              MR_Word Var_202;
              MR_String Var_96;
              MR_Word Var_97;
              MR_Word Var_98;

              succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_96 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                succeeded = (strcmp(Var_96, (MR_String) "") == 0);
                if (succeeded)
                {
                  succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_97 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                    Var_98 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_97)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_202 = ((MR_Word) ((MR_hl_field(1, Var_97, (MR_Integer) 0))));
                      succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FirstArg_29 = ((MR_Word) ((MR_hl_field(1, Var_98, (MR_Integer) 0))));
                        OtherArgs_30 = ((MR_Word) ((MR_hl_field(1, Var_98, (MR_Integer) 1))));
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_VarSet_99_99;
                MR_Integer STATE_VARIABLE_N_100_100;
                MR_Word STATE_VARIABLE_VarSet_104_104;
                MR_Integer STATE_VARIABLE_N_105_105;

                mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Var_202, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_99_99, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_100_100);
                mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, FirstArg_29, STATE_VARIABLE_VarSet_99_99, &STATE_VARIABLE_VarSet_104_104, STATE_VARIABLE_N_100_100, &STATE_VARIABLE_N_105_105);
                mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, OtherArgs_30, STATE_VARIABLE_VarSet_104_104, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_105_105, &STATE_VARIABLE_N_54);
                mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
              }
              else
              {
                MR_Word PrefixArg_31;
                MR_Word OpPriority_33;
                MR_Word OpGtOrGe_34;
                MR_String OpName_32;
                MR_Word Var_112;

                succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  PrefixArg_31 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                  Var_112 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                  succeeded = (Var_112 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      OpName_32 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                      succeeded = mercury__ops__lookup_prefix_op_4_p_0(TypeClassInfo_for_op_table_203, OpTable_12, OpName_32, &OpPriority_33, &OpGtOrGe_34);
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word NewPriority_35;
                  MR_Unsigned Var_213 = (MR_Unsigned) (OpPriority_33);
                  MR_Unsigned Var_214 = (MR_Unsigned) (Priority_14);
                  MR_Unsigned Var_218;
                  MR_Unsigned Var_219;

                  succeeded = (Var_213 < Var_214);
                  if (succeeded)
                  {
                    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                    MR_Box conv1_STATE_VARIABLE_IO_114_114;

                    func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_114_114);
                  }
                  mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                  mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                  switch (OpGtOrGe_34) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      NewPriority_35 = OpPriority_33;
                      break;
                    case (MR_Integer) 0:
                      NewPriority_35 = mercury__ops__increment_priority_1_f_0(OpPriority_33);
                      break;
                  }
                  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, PrefixArg_31, NewPriority_35, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
                  Var_218 = (MR_Unsigned) (OpPriority_33);
                  Var_219 = (MR_Unsigned) (Priority_14);
                  succeeded = (Var_218 < Var_219);
                  if (succeeded)
                  {
                    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                    MR_Box conv3_STATE_VARIABLE_IO_56;

                    func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_56);
                  }
                }
                else
                {
                  MR_Word PostfixArg_36;
                  MR_Word OpPriority_199;
                  MR_Word OpGtOrGe_200;
                  MR_Word Var_123;
                  MR_String OpName_189;

                  succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    PostfixArg_36 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                    Var_123 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                    succeeded = (Var_123 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        OpName_189 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                        succeeded = mercury__ops__lookup_postfix_op_4_p_0(TypeClassInfo_for_op_table_203, OpTable_12, OpName_189, &OpPriority_199, &OpGtOrGe_200);
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NewPriority_190;
                    MR_Unsigned Var_220 = (MR_Unsigned) (OpPriority_199);
                    MR_Unsigned Var_221 = (MR_Unsigned) (Priority_14);
                    MR_Unsigned Var_225;
                    MR_Unsigned Var_226;

                    succeeded = (Var_220 < Var_221);
                    if (succeeded)
                    {
                      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv5_STATE_VARIABLE_IO_125_125;

                      func_4(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_125_125);
                    }
                    switch (OpGtOrGe_200) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        NewPriority_190 = OpPriority_199;
                        break;
                      case (MR_Integer) 0:
                        NewPriority_190 = mercury__ops__increment_priority_1_f_0(OpPriority_199);
                        break;
                    }
                    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, PostfixArg_36, NewPriority_190, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
                    mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                    mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                    Var_225 = (MR_Unsigned) (OpPriority_199);
                    Var_226 = (MR_Unsigned) (Priority_14);
                    succeeded = (Var_225 < Var_226);
                    if (succeeded)
                    {
                      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv7_STATE_VARIABLE_IO_56;

                      func_6(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_56);
                    }
                  }
                  else
                  {
                    MR_Word Arg1_37;
                    MR_Word Arg2_38;
                    MR_Word LeftGtOrGe_39;
                    MR_Word RightGtOrGe_40;
                    MR_String OpName_196;
                    MR_Word OpPriority_197;
                    MR_Word Var_134;
                    MR_Word Var_135;

                    succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Arg1_37 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                      Var_134 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                      succeeded = (Var_134 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Arg2_38 = ((MR_Word) ((MR_hl_field(1, Var_134, (MR_Integer) 0))));
                        Var_135 = ((MR_Word) ((MR_hl_field(1, Var_134, (MR_Integer) 1))));
                        succeeded = (Var_135 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            OpName_196 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                            succeeded = mercury__ops__lookup_infix_op_5_p_0(TypeClassInfo_for_op_table_203, OpTable_12, OpName_196, &OpPriority_197, &LeftGtOrGe_39, &RightGtOrGe_40);
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word LeftPriority_41;
                      MR_Word RightPriority_43;
                      MR_Word STATE_VARIABLE_VarSet_138_138;
                      MR_Integer STATE_VARIABLE_N_139_139;
                      MR_Unsigned Var_227 = (MR_Unsigned) (OpPriority_197);
                      MR_Unsigned Var_228 = (MR_Unsigned) (Priority_14);
                      MR_Unsigned Var_235;
                      MR_Unsigned Var_236;

                      succeeded = (Var_227 < Var_228);
                      if (succeeded)
                      {
                        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv9_STATE_VARIABLE_IO_137_137;

                        func_8(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_137_137);
                      }
                      switch (LeftGtOrGe_39) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          LeftPriority_41 = OpPriority_197;
                          break;
                        case (MR_Integer) 0:
                          LeftPriority_41 = mercury__ops__increment_priority_1_f_0(OpPriority_197);
                          break;
                      }
                      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Arg1_37, LeftPriority_41, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_138_138, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_139_139);
                      succeeded = (strcmp(OpName_196, (MR_String) ",") == 0);
                      if (succeeded)
                        mercury__io__write_string_4_p_0(OutStream_11, (MR_String) ", ");
                      else
                      {
                        succeeded = (strcmp(OpName_196, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_String Dot_42;

                          succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(Arg2_38);
                          if (succeeded)
                            Dot_42 = (MR_String) "\'.\'";
                          else
                            Dot_42 = (MR_String) ".";
                          mercury__io__write_string_4_p_0(OutStream_11, Dot_42);
                        }
                        else
                        {
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                          mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                        }
                      }
                      switch (RightGtOrGe_40) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          RightPriority_43 = OpPriority_197;
                          break;
                        case (MR_Integer) 0:
                          RightPriority_43 = mercury__ops__increment_priority_1_f_0(OpPriority_197);
                          break;
                      }
                      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Arg2_38, RightPriority_43, STATE_VARIABLE_VarSet_138_138, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_139_139, &STATE_VARIABLE_N_54);
                      Var_235 = (MR_Unsigned) (OpPriority_197);
                      Var_236 = (MR_Unsigned) (Priority_14);
                      succeeded = (Var_235 < Var_236);
                      if (succeeded)
                      {
                        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv11_STATE_VARIABLE_IO_56;

                        func_10(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_56);
                      }
                    }
                    else
                    {
                      MR_Word FirstGtOrGe_44;
                      MR_Word SecondGtOrGe_45;
                      MR_Word OpPriority_193;
                      MR_Word Arg1_194;
                      MR_Word Arg2_195;
                      MR_Word Var_154;
                      MR_Word Var_155;
                      MR_String OpName_191;

                      succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Arg1_194 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                        Var_154 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                        succeeded = (Var_154 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Arg2_195 = ((MR_Word) ((MR_hl_field(1, Var_154, (MR_Integer) 0))));
                          Var_155 = ((MR_Word) ((MR_hl_field(1, Var_154, (MR_Integer) 1))));
                          succeeded = (Var_155 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              OpName_191 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                              succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(TypeClassInfo_for_op_table_203, OpTable_12, OpName_191, &OpPriority_193, &FirstGtOrGe_44, &SecondGtOrGe_45);
                            }
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word FirstPriority_46;
                        MR_Word SecondPriority_47;
                        MR_Word STATE_VARIABLE_VarSet_161_161;
                        MR_Integer STATE_VARIABLE_N_162_162;
                        MR_Unsigned Var_237 = (MR_Unsigned) (OpPriority_193);
                        MR_Unsigned Var_238 = (MR_Unsigned) (Priority_14);
                        MR_Unsigned Var_245;
                        MR_Unsigned Var_246;

                        succeeded = (Var_237 < Var_238);
                        if (succeeded)
                        {
                          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv13_STATE_VARIABLE_IO_157_157;

                          func_12(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_157_157);
                        }
                        mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                        mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                        switch (FirstGtOrGe_44) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            FirstPriority_46 = OpPriority_193;
                            break;
                          case (MR_Integer) 0:
                            FirstPriority_46 = mercury__ops__increment_priority_1_f_0(OpPriority_193);
                            break;
                        }
                        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Arg1_194, FirstPriority_46, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_161_161, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_162_162);
                        mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                        switch (SecondGtOrGe_45) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            SecondPriority_47 = OpPriority_193;
                            break;
                          case (MR_Integer) 0:
                            SecondPriority_47 = mercury__ops__increment_priority_1_f_0(OpPriority_193);
                            break;
                        }
                        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Arg2_195, SecondPriority_47, STATE_VARIABLE_VarSet_161_161, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_162_162, &STATE_VARIABLE_N_54);
                        Var_245 = (MR_Unsigned) (OpPriority_193);
                        Var_246 = (MR_Unsigned) (Priority_14);
                        succeeded = (Var_245 < Var_246);
                        if (succeeded)
                        {
                          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv15_STATE_VARIABLE_IO_56;

                          func_14(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_56);
                        }
                      }
                      else
                      {
                        MR_String Op_48;
                        MR_Word Var_171;

                        succeeded = (Args_21 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Op_48 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                            succeeded = mercury__ops__is_op_2_p_0(TypeClassInfo_for_op_table_203, OpTable_12, Op_48);
                            if (succeeded)
                            {
                              Var_171 = mercury__ops__loosest_op_priority_1_f_0(TypeClassInfo_for_op_table_203, OpTable_12);
                              succeeded = mercury__ops__priority_ge_2_p_0(Priority_14, Var_171);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                          mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
                        }
                        else
                          mercury__term_io__write_constant_5_p_0(OutStream_11, Functor_20, (MR_Integer) 0);
                        if ((Args_21 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_0_51;
                          STATE_VARIABLE_N_54 = STATE_VARIABLE_N_0_53;
                        }
                        else
                        {
                          MR_Word X_49 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                          MR_Word Xs_50 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                          MR_Word STATE_VARIABLE_VarSet_181_181;
                          MR_Integer STATE_VARIABLE_N_182_182;

                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                          mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, X_49, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_181_181, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_182_182);
                          mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Xs_50, STATE_VARIABLE_VarSet_181_181, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_182_182, &STATE_VARIABLE_N_54);
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, Term_13, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_33 = TypeInfo_for_T_204;
      MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_32 = TypeClassInfo_for_op_table_203;
      MR_Word next_value_of_tscc_proc_2_input_3_OutStream_10 = OutStream_11;
      MR_Box next_value_of_tscc_proc_2_input_4_OpTable_11 = OpTable_12;
      MR_Word next_value_of_tscc_proc_2_input_5_Var_12 = Var_18;
      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21 = STATE_VARIABLE_VarSet_0_51;
      MR_Integer next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_N_0_23 = STATE_VARIABLE_N_0_53;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_33;
      tscc_proc_2_input_2_TypeClassInfo_for_op_table_32 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_32;
      tscc_proc_2_input_3_OutStream_10 = next_value_of_tscc_proc_2_input_3_OutStream_10;
      tscc_proc_2_input_4_OpTable_11 = next_value_of_tscc_proc_2_input_4_OpTable_11;
      tscc_proc_2_input_5_Var_12 = next_value_of_tscc_proc_2_input_5_Var_12;
      tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21;
      tscc_proc_2_input_7_STATE_VARIABLE_N_0_23 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_N_0_23;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_52;
    tscc_output_2_STATE_VARIABLE_N_54 = STATE_VARIABLE_N_54;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_33 = tscc_proc_2_input_1_TypeInfo_for_T_33;
    MR_Word TypeClassInfo_for_op_table_32 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_32;
    MR_Word OutStream_10 = tscc_proc_2_input_3_OutStream_10;
    MR_Box OpTable_11 = tscc_proc_2_input_4_OpTable_11;
    MR_Word Var_12 = tscc_proc_2_input_5_Var_12;
    MR_Word STATE_VARIABLE_VarSet_0_21 = tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21;
    MR_Word STATE_VARIABLE_VarSet_22;
    MR_Integer STATE_VARIABLE_N_0_23 = tscc_proc_2_input_7_STATE_VARIABLE_N_0_23;
    MR_Integer STATE_VARIABLE_N_24;
    MR_bool succeeded;
    MR_Word Value_16;
    MR_Word TypeInfo_12_38;
    MR_Word TypeInfo_14_40;
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_21, (MR_Integer) 2))));
    MR_Box conv16_Value_16;

    {
      TypeInfo_12_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_12_38, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_12_38, 1) = ((MR_Box) (TypeInfo_for_T_33));
    }
    {
      TypeInfo_14_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_40, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_14_40, 1) = ((MR_Box) (TypeInfo_for_T_33));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_33, TypeInfo_12_38, TypeInfo_14_40, Var_36, Var_12, &conv16_Value_16);
    if (succeeded)
    {
      Value_16 = ((MR_Word) (conv16_Value_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_42;
      MR_Box MR_CALL (* func_17)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_32, (MR_Integer) 0)), (MR_Integer) 12))));
      MR_Box conv18_Var_42;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_204;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_203;
      MR_Word next_value_of_tscc_proc_1_input_3_OutStream_11;
      MR_Box next_value_of_tscc_proc_1_input_4_OpTable_12;
      MR_Word next_value_of_tscc_proc_1_input_5_Term_13;
      MR_Word next_value_of_tscc_proc_1_input_6_Priority_14;
      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
      MR_Integer next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;

      conv18_Var_42 = func_17(((MR_Box) (TypeClassInfo_for_op_table_32)), OpTable_11);
      Var_42 = ((MR_Word) (conv18_Var_42));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_204 = TypeInfo_for_T_33;
      next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_203 = TypeClassInfo_for_op_table_32;
      next_value_of_tscc_proc_1_input_3_OutStream_11 = OutStream_10;
      next_value_of_tscc_proc_1_input_4_OpTable_12 = OpTable_11;
      next_value_of_tscc_proc_1_input_5_Term_13 = Value_16;
      next_value_of_tscc_proc_1_input_6_Priority_14 = Var_42;
      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51 = STATE_VARIABLE_VarSet_0_21;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53 = STATE_VARIABLE_N_0_23;
      tscc_proc_1_input_1_TypeInfo_for_T_204 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_204;
      tscc_proc_1_input_2_TypeClassInfo_for_op_table_203 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_203;
      tscc_proc_1_input_3_OutStream_11 = next_value_of_tscc_proc_1_input_3_OutStream_11;
      tscc_proc_1_input_4_OpTable_12 = next_value_of_tscc_proc_1_input_4_OpTable_12;
      tscc_proc_1_input_5_Term_13 = next_value_of_tscc_proc_1_input_5_Term_13;
      tscc_proc_1_input_6_Priority_14 = next_value_of_tscc_proc_1_input_6_Priority_14;
      tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
      tscc_proc_1_input_8_STATE_VARIABLE_N_0_53 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;
      goto top_of_proc_1;
    }
    else
    {
      MR_String Name_17;
      MR_Word TypeInfo_12_47;
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_21, (MR_Integer) 1))));
      MR_Box conv19_Name_17;

      {
        TypeInfo_12_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_47, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_12_47, 1) = ((MR_Box) (TypeInfo_for_T_33));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_33, TypeInfo_12_47, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_44, Var_12, &conv19_Name_17);
      if (succeeded)
      {
        Name_17 = ((MR_String) (conv19_Name_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(OutStream_10, Name_17);
        STATE_VARIABLE_VarSet_22 = STATE_VARIABLE_VarSet_0_21;
      }
      else
      {
        MR_Integer VarNum_18 = (MR_Integer) (Var_12);
        MR_String VarNumStr_19;
        MR_String VarName_20;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_anon_vars_9_p_0

	MR_Integer I;
	MR_String S;

	I = VarNum_18 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	VarNumStr_19  = S;
}
        mercury__string__append_3_p_2((MR_String) "_", VarNumStr_19, &VarName_20);
        mercury__varset__name_var_4_p_0(TypeInfo_for_T_33, Var_12, VarName_20, STATE_VARIABLE_VarSet_0_21, &STATE_VARIABLE_VarSet_22);
        mercury__io__write_string_4_p_0(OutStream_10, VarName_20);
      }
      STATE_VARIABLE_N_24 = STATE_VARIABLE_N_0_23;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_22;
    tscc_output_2_STATE_VARIABLE_N_54 = STATE_VARIABLE_N_24;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_VarSet_52 = tscc_output_1_STATE_VARIABLE_VarSet_52;
  *tscc_output_ptr_2_STATE_VARIABLE_N_54 = tscc_output_2_STATE_VARIABLE_N_54;
  return;
}

void MR_CALL 
mercury__term_io__write_variable_anon_vars_9_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_33,
  MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_32,
  MR_Word tscc_proc_2_input_3_OutStream_10,
  MR_Box tscc_proc_2_input_4_OpTable_11,
  MR_Word tscc_proc_2_input_5_Var_12,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_52,
  MR_Integer tscc_proc_2_input_7_STATE_VARIABLE_N_0_23,
  MR_Integer * tscc_output_ptr_2_STATE_VARIABLE_N_54)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_204;
  MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_203;
  MR_Word tscc_proc_1_input_3_OutStream_11;
  MR_Box tscc_proc_1_input_4_OpTable_12;
  MR_Word tscc_proc_1_input_5_Term_13;
  MR_Word tscc_proc_1_input_6_Priority_14;
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
  MR_Integer tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;
  MR_Word tscc_output_1_STATE_VARIABLE_VarSet_52;
  MR_Integer tscc_output_2_STATE_VARIABLE_N_54;

  // The code for TSCC PROC 2: pred term_io.write_variable_anon_vars/9-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred term_io.write_term_prio_anon_vars/10-0
  ;
  // proc 2 in TSCC: pred term_io.write_variable_anon_vars/9-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_T_204 = tscc_proc_1_input_1_TypeInfo_for_T_204;
    MR_Word TypeClassInfo_for_op_table_203 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_203;
    MR_Word OutStream_11 = tscc_proc_1_input_3_OutStream_11;
    MR_Box OpTable_12 = tscc_proc_1_input_4_OpTable_12;
    MR_Word Term_13 = tscc_proc_1_input_5_Term_13;
    MR_Word Priority_14 = tscc_proc_1_input_6_Priority_14;
    MR_Word STATE_VARIABLE_VarSet_0_51 = tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
    MR_Word STATE_VARIABLE_VarSet_52;
    MR_Integer STATE_VARIABLE_N_0_53 = tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;
    MR_Integer STATE_VARIABLE_N_54;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0))
    {
      MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 0))));
      MR_Word Args_21 = ((MR_Word) ((MR_hl_field(0, Term_13, (MR_Integer) 1))));
      MR_Word ListHead_23;
      MR_Word ListTail_24;
      MR_String Var_60;
      MR_Word Var_61;
      MR_Word Var_62;

      succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_60 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
        succeeded = (strcmp(Var_60, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ListHead_23 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
            Var_61 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
            succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ListTail_24 = ((MR_Word) ((MR_hl_field(1, Var_61, (MR_Integer) 0))));
              Var_62 = ((MR_Word) ((MR_hl_field(1, Var_61, (MR_Integer) 1))));
              succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_VarSet_65_65;
        MR_Integer STATE_VARIABLE_N_66_66;

        mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 91);
        mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, ListHead_23, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_65_65, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_66_66);
        mercury__term_io__write_later_list_elements_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, ListTail_24, STATE_VARIABLE_VarSet_65_65, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_66_66, &STATE_VARIABLE_N_54);
        mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 93);
      }
      else
      {
        MR_String Var_73;

        succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_73 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
          succeeded = (strcmp(Var_73, (MR_String) "[]") == 0);
          if (succeeded)
            succeeded = (Args_21 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "[]");
          STATE_VARIABLE_N_54 = STATE_VARIABLE_N_0_53;
          STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_0_51;
        }
        else
        {
          MR_Word BracedTerm_25;
          MR_String Var_76;
          MR_Word Var_77;

          succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_76 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
            succeeded = (strcmp(Var_76, (MR_String) "{}") == 0);
            if (succeeded)
            {
              succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BracedTerm_25 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                Var_77 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
          {
            mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "{ ");
            mercury__term_io__write_term_anon_vars_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, BracedTerm_25, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
            mercury__io__write_string_4_p_0(OutStream_11, (MR_String) " }");
          }
          else
          {
            MR_Word BracedHead_26;
            MR_Word BracedTail_27;
            MR_String Var_85;

            succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_85 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
              succeeded = (strcmp(Var_85, (MR_String) "{}") == 0);
              if (succeeded)
              {
                succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BracedHead_26 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                  BracedTail_27 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                }
              }
            }
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_VarSet_88_88;
              MR_Integer STATE_VARIABLE_N_89_89;

              mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 123);
              mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, BracedHead_26, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_89_89);
              mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, BracedTail_27, STATE_VARIABLE_VarSet_88_88, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_89_89, &STATE_VARIABLE_N_54);
              mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 125);
            }
            else
            {
              MR_Word FirstArg_29;
              MR_Word OtherArgs_30;
              MR_Word Var_202;
              MR_String Var_96;
              MR_Word Var_97;
              MR_Word Var_98;

              succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_96 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                succeeded = (strcmp(Var_96, (MR_String) "") == 0);
                if (succeeded)
                {
                  succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_97 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                    Var_98 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_97)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_202 = ((MR_Word) ((MR_hl_field(1, Var_97, (MR_Integer) 0))));
                      succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        FirstArg_29 = ((MR_Word) ((MR_hl_field(1, Var_98, (MR_Integer) 0))));
                        OtherArgs_30 = ((MR_Word) ((MR_hl_field(1, Var_98, (MR_Integer) 1))));
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_VarSet_99_99;
                MR_Integer STATE_VARIABLE_N_100_100;
                MR_Word STATE_VARIABLE_VarSet_104_104;
                MR_Integer STATE_VARIABLE_N_105_105;

                mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Var_202, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_99_99, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_100_100);
                mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, FirstArg_29, STATE_VARIABLE_VarSet_99_99, &STATE_VARIABLE_VarSet_104_104, STATE_VARIABLE_N_100_100, &STATE_VARIABLE_N_105_105);
                mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, OtherArgs_30, STATE_VARIABLE_VarSet_104_104, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_105_105, &STATE_VARIABLE_N_54);
                mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
              }
              else
              {
                MR_Word PrefixArg_31;
                MR_Word OpPriority_33;
                MR_Word OpGtOrGe_34;
                MR_String OpName_32;
                MR_Word Var_112;

                succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  PrefixArg_31 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                  Var_112 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                  succeeded = (Var_112 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      OpName_32 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                      succeeded = mercury__ops__lookup_prefix_op_4_p_0(TypeClassInfo_for_op_table_203, OpTable_12, OpName_32, &OpPriority_33, &OpGtOrGe_34);
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word NewPriority_35;
                  MR_Unsigned Var_213 = (MR_Unsigned) (OpPriority_33);
                  MR_Unsigned Var_214 = (MR_Unsigned) (Priority_14);
                  MR_Unsigned Var_218;
                  MR_Unsigned Var_219;

                  succeeded = (Var_213 < Var_214);
                  if (succeeded)
                  {
                    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                    MR_Box conv1_STATE_VARIABLE_IO_114_114;

                    func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_114_114);
                  }
                  mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                  mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                  switch (OpGtOrGe_34) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      NewPriority_35 = OpPriority_33;
                      break;
                    case (MR_Integer) 0:
                      NewPriority_35 = mercury__ops__increment_priority_1_f_0(OpPriority_33);
                      break;
                  }
                  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, PrefixArg_31, NewPriority_35, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
                  Var_218 = (MR_Unsigned) (OpPriority_33);
                  Var_219 = (MR_Unsigned) (Priority_14);
                  succeeded = (Var_218 < Var_219);
                  if (succeeded)
                  {
                    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                    MR_Box conv3_STATE_VARIABLE_IO_56;

                    func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_56);
                  }
                }
                else
                {
                  MR_Word PostfixArg_36;
                  MR_Word OpPriority_199;
                  MR_Word OpGtOrGe_200;
                  MR_Word Var_123;
                  MR_String OpName_189;

                  succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    PostfixArg_36 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                    Var_123 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                    succeeded = (Var_123 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        OpName_189 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                        succeeded = mercury__ops__lookup_postfix_op_4_p_0(TypeClassInfo_for_op_table_203, OpTable_12, OpName_189, &OpPriority_199, &OpGtOrGe_200);
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NewPriority_190;
                    MR_Unsigned Var_220 = (MR_Unsigned) (OpPriority_199);
                    MR_Unsigned Var_221 = (MR_Unsigned) (Priority_14);
                    MR_Unsigned Var_225;
                    MR_Unsigned Var_226;

                    succeeded = (Var_220 < Var_221);
                    if (succeeded)
                    {
                      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv5_STATE_VARIABLE_IO_125_125;

                      func_4(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_125_125);
                    }
                    switch (OpGtOrGe_200) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        NewPriority_190 = OpPriority_199;
                        break;
                      case (MR_Integer) 0:
                        NewPriority_190 = mercury__ops__increment_priority_1_f_0(OpPriority_199);
                        break;
                    }
                    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, PostfixArg_36, NewPriority_190, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
                    mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                    mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                    Var_225 = (MR_Unsigned) (OpPriority_199);
                    Var_226 = (MR_Unsigned) (Priority_14);
                    succeeded = (Var_225 < Var_226);
                    if (succeeded)
                    {
                      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv7_STATE_VARIABLE_IO_56;

                      func_6(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_56);
                    }
                  }
                  else
                  {
                    MR_Word Arg1_37;
                    MR_Word Arg2_38;
                    MR_Word LeftGtOrGe_39;
                    MR_Word RightGtOrGe_40;
                    MR_String OpName_196;
                    MR_Word OpPriority_197;
                    MR_Word Var_134;
                    MR_Word Var_135;

                    succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Arg1_37 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                      Var_134 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                      succeeded = (Var_134 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Arg2_38 = ((MR_Word) ((MR_hl_field(1, Var_134, (MR_Integer) 0))));
                        Var_135 = ((MR_Word) ((MR_hl_field(1, Var_134, (MR_Integer) 1))));
                        succeeded = (Var_135 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            OpName_196 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                            succeeded = mercury__ops__lookup_infix_op_5_p_0(TypeClassInfo_for_op_table_203, OpTable_12, OpName_196, &OpPriority_197, &LeftGtOrGe_39, &RightGtOrGe_40);
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word LeftPriority_41;
                      MR_Word RightPriority_43;
                      MR_Word STATE_VARIABLE_VarSet_138_138;
                      MR_Integer STATE_VARIABLE_N_139_139;
                      MR_Unsigned Var_227 = (MR_Unsigned) (OpPriority_197);
                      MR_Unsigned Var_228 = (MR_Unsigned) (Priority_14);
                      MR_Unsigned Var_235;
                      MR_Unsigned Var_236;

                      succeeded = (Var_227 < Var_228);
                      if (succeeded)
                      {
                        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv9_STATE_VARIABLE_IO_137_137;

                        func_8(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_137_137);
                      }
                      switch (LeftGtOrGe_39) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          LeftPriority_41 = OpPriority_197;
                          break;
                        case (MR_Integer) 0:
                          LeftPriority_41 = mercury__ops__increment_priority_1_f_0(OpPriority_197);
                          break;
                      }
                      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Arg1_37, LeftPriority_41, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_138_138, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_139_139);
                      succeeded = (strcmp(OpName_196, (MR_String) ",") == 0);
                      if (succeeded)
                        mercury__io__write_string_4_p_0(OutStream_11, (MR_String) ", ");
                      else
                      {
                        succeeded = (strcmp(OpName_196, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_String Dot_42;

                          succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(Arg2_38);
                          if (succeeded)
                            Dot_42 = (MR_String) "\'.\'";
                          else
                            Dot_42 = (MR_String) ".";
                          mercury__io__write_string_4_p_0(OutStream_11, Dot_42);
                        }
                        else
                        {
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                          mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                        }
                      }
                      switch (RightGtOrGe_40) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          RightPriority_43 = OpPriority_197;
                          break;
                        case (MR_Integer) 0:
                          RightPriority_43 = mercury__ops__increment_priority_1_f_0(OpPriority_197);
                          break;
                      }
                      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Arg2_38, RightPriority_43, STATE_VARIABLE_VarSet_138_138, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_139_139, &STATE_VARIABLE_N_54);
                      Var_235 = (MR_Unsigned) (OpPriority_197);
                      Var_236 = (MR_Unsigned) (Priority_14);
                      succeeded = (Var_235 < Var_236);
                      if (succeeded)
                      {
                        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv11_STATE_VARIABLE_IO_56;

                        func_10(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_56);
                      }
                    }
                    else
                    {
                      MR_Word FirstGtOrGe_44;
                      MR_Word SecondGtOrGe_45;
                      MR_Word OpPriority_193;
                      MR_Word Arg1_194;
                      MR_Word Arg2_195;
                      MR_Word Var_154;
                      MR_Word Var_155;
                      MR_String OpName_191;

                      succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Arg1_194 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                        Var_154 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                        succeeded = (Var_154 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Arg2_195 = ((MR_Word) ((MR_hl_field(1, Var_154, (MR_Integer) 0))));
                          Var_155 = ((MR_Word) ((MR_hl_field(1, Var_154, (MR_Integer) 1))));
                          succeeded = (Var_155 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              OpName_191 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                              succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(TypeClassInfo_for_op_table_203, OpTable_12, OpName_191, &OpPriority_193, &FirstGtOrGe_44, &SecondGtOrGe_45);
                            }
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word FirstPriority_46;
                        MR_Word SecondPriority_47;
                        MR_Word STATE_VARIABLE_VarSet_161_161;
                        MR_Integer STATE_VARIABLE_N_162_162;
                        MR_Unsigned Var_237 = (MR_Unsigned) (OpPriority_193);
                        MR_Unsigned Var_238 = (MR_Unsigned) (Priority_14);
                        MR_Unsigned Var_245;
                        MR_Unsigned Var_246;

                        succeeded = (Var_237 < Var_238);
                        if (succeeded)
                        {
                          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv13_STATE_VARIABLE_IO_157_157;

                          func_12(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_157_157);
                        }
                        mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                        mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                        switch (FirstGtOrGe_44) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            FirstPriority_46 = OpPriority_193;
                            break;
                          case (MR_Integer) 0:
                            FirstPriority_46 = mercury__ops__increment_priority_1_f_0(OpPriority_193);
                            break;
                        }
                        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Arg1_194, FirstPriority_46, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_161_161, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_162_162);
                        mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                        switch (SecondGtOrGe_45) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            SecondPriority_47 = OpPriority_193;
                            break;
                          case (MR_Integer) 0:
                            SecondPriority_47 = mercury__ops__increment_priority_1_f_0(OpPriority_193);
                            break;
                        }
                        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Arg2_195, SecondPriority_47, STATE_VARIABLE_VarSet_161_161, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_162_162, &STATE_VARIABLE_N_54);
                        Var_245 = (MR_Unsigned) (OpPriority_193);
                        Var_246 = (MR_Unsigned) (Priority_14);
                        succeeded = (Var_245 < Var_246);
                        if (succeeded)
                        {
                          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv15_STATE_VARIABLE_IO_56;

                          func_14(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_56);
                        }
                      }
                      else
                      {
                        MR_String Op_48;
                        MR_Word Var_171;

                        succeeded = (Args_21 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Op_48 = ((MR_String) ((MR_hl_field(0, Functor_20, (MR_Integer) 0))));
                            succeeded = mercury__ops__is_op_2_p_0(TypeClassInfo_for_op_table_203, OpTable_12, Op_48);
                            if (succeeded)
                            {
                              Var_171 = mercury__ops__loosest_op_priority_1_f_0(TypeClassInfo_for_op_table_203, OpTable_12);
                              succeeded = mercury__ops__priority_ge_2_p_0(Priority_14, Var_171);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                          mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
                        }
                        else
                          mercury__term_io__write_constant_5_p_0(OutStream_11, Functor_20, (MR_Integer) 0);
                        if ((Args_21 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_0_51;
                          STATE_VARIABLE_N_54 = STATE_VARIABLE_N_0_53;
                        }
                        else
                        {
                          MR_Word X_49 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
                          MR_Word Xs_50 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
                          MR_Word STATE_VARIABLE_VarSet_181_181;
                          MR_Integer STATE_VARIABLE_N_182_182;

                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                          mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, X_49, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_181_181, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_182_182);
                          mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_204, TypeClassInfo_for_op_table_203, OutStream_11, OpTable_12, Xs_50, STATE_VARIABLE_VarSet_181_181, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_182_182, &STATE_VARIABLE_N_54);
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, Term_13, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_33 = TypeInfo_for_T_204;
      MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_32 = TypeClassInfo_for_op_table_203;
      MR_Word next_value_of_tscc_proc_2_input_3_OutStream_10 = OutStream_11;
      MR_Box next_value_of_tscc_proc_2_input_4_OpTable_11 = OpTable_12;
      MR_Word next_value_of_tscc_proc_2_input_5_Var_12 = Var_18;
      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21 = STATE_VARIABLE_VarSet_0_51;
      MR_Integer next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_N_0_23 = STATE_VARIABLE_N_0_53;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_33;
      tscc_proc_2_input_2_TypeClassInfo_for_op_table_32 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_32;
      tscc_proc_2_input_3_OutStream_10 = next_value_of_tscc_proc_2_input_3_OutStream_10;
      tscc_proc_2_input_4_OpTable_11 = next_value_of_tscc_proc_2_input_4_OpTable_11;
      tscc_proc_2_input_5_Var_12 = next_value_of_tscc_proc_2_input_5_Var_12;
      tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21;
      tscc_proc_2_input_7_STATE_VARIABLE_N_0_23 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_N_0_23;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_52;
    tscc_output_2_STATE_VARIABLE_N_54 = STATE_VARIABLE_N_54;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_33 = tscc_proc_2_input_1_TypeInfo_for_T_33;
    MR_Word TypeClassInfo_for_op_table_32 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_32;
    MR_Word OutStream_10 = tscc_proc_2_input_3_OutStream_10;
    MR_Box OpTable_11 = tscc_proc_2_input_4_OpTable_11;
    MR_Word Var_12 = tscc_proc_2_input_5_Var_12;
    MR_Word STATE_VARIABLE_VarSet_0_21 = tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21;
    MR_Word STATE_VARIABLE_VarSet_22;
    MR_Integer STATE_VARIABLE_N_0_23 = tscc_proc_2_input_7_STATE_VARIABLE_N_0_23;
    MR_Integer STATE_VARIABLE_N_24;
    MR_bool succeeded;
    MR_Word Value_16;
    MR_Word TypeInfo_12_38;
    MR_Word TypeInfo_14_40;
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_21, (MR_Integer) 2))));
    MR_Box conv16_Value_16;

    {
      TypeInfo_12_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_12_38, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_12_38, 1) = ((MR_Box) (TypeInfo_for_T_33));
    }
    {
      TypeInfo_14_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_40, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_14_40, 1) = ((MR_Box) (TypeInfo_for_T_33));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_33, TypeInfo_12_38, TypeInfo_14_40, Var_36, Var_12, &conv16_Value_16);
    if (succeeded)
    {
      Value_16 = ((MR_Word) (conv16_Value_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_42;
      MR_Box MR_CALL (* func_17)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_32, (MR_Integer) 0)), (MR_Integer) 12))));
      MR_Box conv18_Var_42;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_204;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_203;
      MR_Word next_value_of_tscc_proc_1_input_3_OutStream_11;
      MR_Box next_value_of_tscc_proc_1_input_4_OpTable_12;
      MR_Word next_value_of_tscc_proc_1_input_5_Term_13;
      MR_Word next_value_of_tscc_proc_1_input_6_Priority_14;
      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
      MR_Integer next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;

      conv18_Var_42 = func_17(((MR_Box) (TypeClassInfo_for_op_table_32)), OpTable_11);
      Var_42 = ((MR_Word) (conv18_Var_42));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_204 = TypeInfo_for_T_33;
      next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_203 = TypeClassInfo_for_op_table_32;
      next_value_of_tscc_proc_1_input_3_OutStream_11 = OutStream_10;
      next_value_of_tscc_proc_1_input_4_OpTable_12 = OpTable_11;
      next_value_of_tscc_proc_1_input_5_Term_13 = Value_16;
      next_value_of_tscc_proc_1_input_6_Priority_14 = Var_42;
      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51 = STATE_VARIABLE_VarSet_0_21;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53 = STATE_VARIABLE_N_0_23;
      tscc_proc_1_input_1_TypeInfo_for_T_204 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_204;
      tscc_proc_1_input_2_TypeClassInfo_for_op_table_203 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_203;
      tscc_proc_1_input_3_OutStream_11 = next_value_of_tscc_proc_1_input_3_OutStream_11;
      tscc_proc_1_input_4_OpTable_12 = next_value_of_tscc_proc_1_input_4_OpTable_12;
      tscc_proc_1_input_5_Term_13 = next_value_of_tscc_proc_1_input_5_Term_13;
      tscc_proc_1_input_6_Priority_14 = next_value_of_tscc_proc_1_input_6_Priority_14;
      tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
      tscc_proc_1_input_8_STATE_VARIABLE_N_0_53 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;
      goto top_of_proc_1;
    }
    else
    {
      MR_String Name_17;
      MR_Word TypeInfo_12_47;
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_21, (MR_Integer) 1))));
      MR_Box conv19_Name_17;

      {
        TypeInfo_12_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_47, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_12_47, 1) = ((MR_Box) (TypeInfo_for_T_33));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_33, TypeInfo_12_47, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_44, Var_12, &conv19_Name_17);
      if (succeeded)
      {
        Name_17 = ((MR_String) (conv19_Name_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(OutStream_10, Name_17);
        STATE_VARIABLE_VarSet_22 = STATE_VARIABLE_VarSet_0_21;
      }
      else
      {
        MR_Integer VarNum_18 = (MR_Integer) (Var_12);
        MR_String VarNumStr_19;
        MR_String VarName_20;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_anon_vars_9_p_0

	MR_Integer I;
	MR_String S;

	I = VarNum_18 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	VarNumStr_19  = S;
}
        mercury__string__append_3_p_2((MR_String) "_", VarNumStr_19, &VarName_20);
        mercury__varset__name_var_4_p_0(TypeInfo_for_T_33, Var_12, VarName_20, STATE_VARIABLE_VarSet_0_21, &STATE_VARIABLE_VarSet_22);
        mercury__io__write_string_4_p_0(OutStream_10, VarName_20);
      }
      STATE_VARIABLE_N_24 = STATE_VARIABLE_N_0_23;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_22;
    tscc_output_2_STATE_VARIABLE_N_54 = STATE_VARIABLE_N_24;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_VarSet_52 = tscc_output_1_STATE_VARIABLE_VarSet_52;
  *tscc_output_ptr_2_STATE_VARIABLE_N_54 = tscc_output_2_STATE_VARIABLE_N_54;
  return;
}

static void MR_CALL 
mercury__term_io__write_later_list_elements_9_p_0(
  MR_Word TypeInfo_for_T_51,
  MR_Word TypeClassInfo_for_op_table_50,
  MR_Word OutStream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Integer STATE_VARIABLE_N_0_25,
  MR_Integer * STATE_VARIABLE_N_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 1);
    MR_Word Value_18;
    MR_Word TypeCtorInfo_11_55;
    MR_Word TypeInfo_12_56;
    MR_Word TypeCtorInfo_13_57;
    MR_Word TypeInfo_14_58;
    MR_Word Var_16;
    MR_Word Var_54;
    MR_Box conv0_Value_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(1, Term_12, (MR_Integer) 0))));
      Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_23, (MR_Integer) 2))));
      TypeCtorInfo_11_55 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
      TypeCtorInfo_13_57 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
      {
        TypeInfo_12_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_56, 0) = ((MR_Box) (TypeCtorInfo_11_55));
        MR_hl_field(0, TypeInfo_12_56, 1) = ((MR_Box) (TypeInfo_for_T_51));
      }
      {
        TypeInfo_14_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_14_58, 0) = ((MR_Box) (TypeCtorInfo_13_57));
        MR_hl_field(0, TypeInfo_14_58, 1) = ((MR_Box) (TypeInfo_for_T_51));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_51, TypeInfo_12_56, TypeInfo_14_58, Var_54, Var_16, &conv0_Value_18);
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
        MR_Integer STATE_VARIABLE_N_40_40;
        MR_Word Var_60;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
        MR_Box conv2_Var_60;
        MR_Word next_value_of_Term_12;
        MR_Word next_value_of_STATE_VARIABLE_VarSet_0_23;
        MR_Integer next_value_of_STATE_VARIABLE_N_0_25;

        mercury__io__write_string_4_p_0(OutStream_10, (MR_String) ", ");
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_50, (MR_Integer) 0)), (MR_Integer) 16))));
        conv2_Var_60 = func_1(((MR_Box) (TypeClassInfo_for_op_table_50)), OpTable_11);
        Var_60 = ((MR_Word) (conv2_Var_60));
        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_51, TypeClassInfo_for_op_table_50, OutStream_10, OpTable_11, ListHead_19, Var_60, STATE_VARIABLE_VarSet_0_23, &STATE_VARIABLE_VarSet_39_39, STATE_VARIABLE_N_0_25, &STATE_VARIABLE_N_40_40);
        // direct tailcall eliminated
        ;
        next_value_of_Term_12 = ListTail_20;
        next_value_of_STATE_VARIABLE_VarSet_0_23 = STATE_VARIABLE_VarSet_39_39;
        next_value_of_STATE_VARIABLE_N_0_25 = STATE_VARIABLE_N_40_40;
        Term_12 = next_value_of_Term_12;
        STATE_VARIABLE_VarSet_0_23 = next_value_of_STATE_VARIABLE_VarSet_0_23;
        STATE_VARIABLE_N_0_25 = next_value_of_STATE_VARIABLE_N_0_25;
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
          *STATE_VARIABLE_N_26 = STATE_VARIABLE_N_0_25;
          *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
        }
        else
        {
          MR_Word Var_61;
          MR_Box MR_CALL (* func_3)(MR_Box, MR_Box);
          MR_Box conv4_Var_61;

          mercury__io__write_string_4_p_0(OutStream_10, (MR_String) " | ");
          func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_50, (MR_Integer) 0)), (MR_Integer) 12))));
          conv4_Var_61 = func_3(((MR_Box) (TypeClassInfo_for_op_table_50)), OpTable_11);
          Var_61 = ((MR_Word) (conv4_Var_61));
          mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_51, TypeClassInfo_for_op_table_50, OutStream_10, OpTable_11, Term_12, Var_61, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_N_0_25, STATE_VARIABLE_N_26);
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__term_io__write_term_arg_9_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word OutStream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Integer STATE_VARIABLE_N_0_18,
  MR_Integer * STATE_VARIABLE_N_19)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 16))));
  MR_Box conv1_Var_22;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_11);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_24, TypeClassInfo_for_op_table_23, OutStream_10, OpTable_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_N_0_18, STATE_VARIABLE_N_19);
}

void MR_CALL 
mercury__term_io__write_term_anon_vars_9_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word OutStream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Integer STATE_VARIABLE_N_0_18,
  MR_Integer * STATE_VARIABLE_N_19)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_22;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_11);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_24, TypeClassInfo_for_op_table_23, OutStream_10, OpTable_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_N_0_18, STATE_VARIABLE_N_19);
}

static void MR_CALL 
mercury__term_io__write_term_later_args_9_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeClassInfo_for_op_table_39,
  MR_Word OutStream_1,
  MR_Box OpTable_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Integer STATE_VARIABLE_N_0_6,
  MR_Integer * STATE_VARIABLE_N_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_N_7 = STATE_VARIABLE_N_0_6;
      *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
    }
    else
    {
      MR_Word X_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarSet_36_36;
      MR_Integer STATE_VARIABLE_N_37_37;
      MR_Word Var_41;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_41;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_6;

      mercury__io__write_string_4_p_0(OutStream_1, (MR_String) ", ");
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_39, (MR_Integer) 0)), (MR_Integer) 16))));
      conv1_Var_41 = func_0(((MR_Box) (TypeClassInfo_for_op_table_39)), OpTable_2);
      Var_41 = ((MR_Word) (conv1_Var_41));
      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_40, TypeClassInfo_for_op_table_39, OutStream_1, OpTable_2, X_23, Var_41, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_N_0_6, &STATE_VARIABLE_N_37_37);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_24;
      next_value_of_STATE_VARIABLE_VarSet_0_4 = STATE_VARIABLE_VarSet_36_36;
      next_value_of_STATE_VARIABLE_N_0_6 = STATE_VARIABLE_N_37_37;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_VarSet_0_4 = next_value_of_STATE_VARIABLE_VarSet_0_4;
      STATE_VARIABLE_N_0_6 = next_value_of_STATE_VARIABLE_N_0_6;
      continue;
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
                func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
                succeeded = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_13)), &conv2_Var_21, &conv1_Var_22);
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
                  TypeClassInfo_for_op_table_30 = (MR_Word) (&mercury__term_io_scalar_common_1[0]);
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
mercury__term_io__write_constant_4_p_0(
  MR_Word OutStream_5,
  MR_Word Const_6)
{
  mercury__term_io__write_constant_5_p_0(OutStream_5, Const_6, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__write_constant_5_p_0(
  MR_Word OutStream_6,
  MR_Word Const_7,
  MR_Word AdjacentToGraphicToken_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Const_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String A_18 = ((MR_String) ((MR_hl_field(0, Const_7, (MR_Integer) 0))));

        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_6, A_18, AdjacentToGraphicToken_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Base_10 = ((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word I_11 = ((MR_Word) ((MR_hl_field(1, Const_7, (MR_Integer) 1))));
        MR_Word Signedness_12 = ((((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        MR_Word Size_13 = ((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 2))) & (MR_Integer) 7);
        MR_String Prefix_14 = ((&mercury__term_io_vector_common_6[4 + Base_10]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
        MR_String IntString_15;
        MR_String Suffix_16;
        MR_Integer Var_23 = ((&mercury__term_io_vector_common_7[0 + Base_10]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;

        IntString_15 = mercury__integer__to_base_string_2_f_0(I_11, Var_23);
        switch (Signedness_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Suffix_16 = ((&mercury__term_io_vector_common_6[8 + Size_13]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
            break;
          case (MR_Integer) 1:
            Suffix_16 = ((&mercury__term_io_vector_common_6[13 + Size_13]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
            break;
        }
        mercury__io__write_string_4_p_0(OutStream_6, Prefix_14);
        mercury__io__write_string_4_p_0(OutStream_6, IntString_15);
        mercury__io__write_string_4_p_0(OutStream_6, Suffix_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String S_19 = ((MR_String) ((MR_hl_field(2, Const_7, (MR_Integer) 0))));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv1_STATE_VARIABLE_State_11_43;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_IO_22;

        func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_11_43);
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_6, S_19);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_22);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float F_17 = MR_unbox_float((MR_hl_field(3, Const_7, (MR_Integer) 1)));
            MR_Box Var_36 = (MR_Box) (OutStream_6);
            MR_Box Var_37;

{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_36 ;
	Val = F_17 ;
		{

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MR_sprintf_float(buf, Val);
    if (ML_fprintf(Stream, "%s", buf) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Var_37  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Var_37 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
            if (!(succeeded))
            {
              MR_Word Var_40;

              mercury__io__make_io_error_from_system_error_5_p_0(Var_37, (MR_String) "error writing to output file: ", &Var_40);
              {
                mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_40)));
                return;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String N_20 = ((MR_String) ((MR_hl_field(3, Const_7, (MR_Integer) 1))));

            mercury__io__write_char_4_p_0(OutStream_6, (MR_Char) 36);
            mercury__io__write_string_4_p_0(OutStream_6, N_20);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_18,
  MR_Word TypeClassInfo_for_writer_19,
  MR_Word Stream_6,
  MR_String S_7,
  MR_Word AdjacentToGraphicToken_8)
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
      result_3 = MR_strcmp(S_7, ((&mercury__term_io_vector_common_6[0 + mid_2]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0);
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
      MR_Integer Var_23;
      MR_Char Var_24;
      MR_Char Var_25;
      MR_Integer Var_28;

      succeeded = mercury__term_io__all_match_loop__ho23_3_p_in__string_0(S_7, (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (strcmp(S_7, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_23 = (MR_Integer) 0;
          Var_24 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_28  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_23 ;
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
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_7 ;
	Index = Var_23 ;
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
	Var_25  = Ch;
}
            succeeded = (Var_24 == Var_25);
          }
          succeeded = !(succeeded);
          if (succeeded)
            succeeded = (AdjacentToGraphicToken_8 == (MR_Integer) 1);
        }
      }
    }
    if (!(succeeded))
    {
      MR_Char FirstChar_20;
      MR_Integer Var_29;
      MR_Char Var_30;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_29  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Var_29 ;
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
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_7 ;
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
	FirstChar_20  = Ch;
}
        succeeded = mercury__char__lower_upper_2_p_0(FirstChar_20, &Var_30);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_7 ;
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

        func_0(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) (Stream_6)), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_12);
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv3_STATE_VARIABLE_State_15_15;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_State_12;

        func_2(((MR_Box) (TypeClassInfo_for_writer_19)), ((MR_Box) (Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_15_15);
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_18, TypeClassInfo_for_writer_19, Stream_6, S_7);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_writer_19)), ((MR_Box) (Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_12);
      }
      break;
  }
}

static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho23_3_p_in__string_0(
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
#define MR_PROC_LABEL mercury__term_io__all_match_loop__ho23_3_p_in__string_0

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
#define MR_PROC_LABEL mercury__term_io__all_match_loop__ho23_3_p_in__string_0

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
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word Stream_5,
  MR_String String_6)
{
  MR_bool succeeded;
  MR_Integer Var_18;
  MR_Integer Var_20;
  MR_Integer Var_22;
  MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_18  = Length;
}
  succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
  if (succeeded)
    Var_20 = (MR_Integer) 0;
  else
    Var_20 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_23  = Length;
}
  succeeded = (Var_18 < Var_23);
  if (succeeded)
    Var_22 = Var_18;
  else
    Var_22 = Var_23;
  mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_55_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(TypeClassInfo_for_writer_11, TypeClassInfo_for_writer_12, Stream_5, String_6, Var_20, Var_22);
}

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_55_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Word Var_19,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);
    MR_Integer Var_13;
    MR_Char Var_14;
    MR_Integer Var_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_55_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0

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
	Var_20  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Var_13 <= HeadVar__4_10);
    }
    if (succeeded)
    {
      MR_Integer next_value_of_HeadVar__3_9;

      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(Var_17, Var_18, Var_19, Var_14);
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
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
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
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_State_12_12;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_State_10;

    func_0(((MR_Box) (TypeClassInfo_for_writer_17)), ((MR_Box) (Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 92)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_12_12);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_writer_17)), ((MR_Box) (Stream_5)), ((MR_Box) (MR_Word) (QuoteChar_8)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_10);
  }
  else
  {
    succeeded = mercury__char__is_alnum_1_p_0(Char_6);
    if (!(succeeded))
    {
      if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
        if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
      if (!(succeeded))
      {
        MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_18  = Int;
}
        succeeded = (Var_18 >= (MR_Integer) 160);
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv5_STATE_VARIABLE_State_10;

      func_4(((MR_Box) (TypeClassInfo_for_writer_17)), ((MR_Box) (Stream_5)), ((MR_Box) (MR_Word) (Char_6)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_10);
    }
    else
    {
      MR_String Var_15;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv7_STATE_VARIABLE_State_10;

      Var_15 = mercury__term_io__mercury_escape_char_1_f_0(Char_6);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_writer_16)), ((MR_Box) (Stream_5)), ((MR_Box) (Var_15)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_10);
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

void mercury__term_io__init(void)
{
}

void mercury__term_io__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term_io__term_io__type_ctor_info_adjacent_to_graphic_token_0);
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
