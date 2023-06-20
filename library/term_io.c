/*
** Automatically generated from `term_io.m'
** by the Mercury compiler,
** version rotd-2023-06-20
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
mercury__term_io__foldl_between_2__ho29_6_p_in__string_0(
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static MR_Word MR_CALL 
mercury__term_io__map__ho15_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__term_io__LCMC__func__map__ho15__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15);

static void MR_CALL 
mercury__term_io__write_later_list_elements_9_p_0(
  MR_Word TypeInfo_for_T_51,
  MR_Word TypeClassInfo_for_op_table_50,
  MR_Word OutStream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_Anon_0_25,
  MR_Word * STATE_VARIABLE_Anon_26);

static void MR_CALL 
mercury__term_io__write_term_arg_9_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeClassInfo_for_op_table_23,
  MR_Word OutStream_10,
  MR_Box OpTable_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19);

static void MR_CALL 
mercury__term_io__write_atom_term_prio_anon_vars_11_p_0(
  MR_Word TypeInfo_for_T_185,
  MR_Word TypeClassInfo_for_op_table_184,
  MR_Word OutStream_12,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_Anon_0_51,
  MR_Word * STATE_VARIABLE_Anon_52);

static void MR_CALL 
mercury__term_io__write_term_later_args_9_p_0(
  MR_Word TypeInfo_for_T_40,
  MR_Word TypeClassInfo_for_op_table_39,
  MR_Word OutStream_1,
  MR_Box OpTable_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_Anon_0_6,
  MR_Word * STATE_VARIABLE_Anon_7);

static void MR_CALL 
mercury__term_io__write_atom_term_prio_anon_vars_std_11_p_0(
  MR_Word TypeInfo_for_T_45,
  MR_Word TypeClassInfo_for_op_table_44,
  MR_Word OutStream_12,
  MR_Box OpTable_13,
  MR_String Atom_14,
  MR_Word ArgTerms_15,
  MR_Word Priority_16,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_Anon_0_24,
  MR_Word * STATE_VARIABLE_Anon_25);

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

static MR_bool MR_CALL 
mercury__term_io____Unify____anon_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_io____Compare____anon_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__term_io_scalar_common_1[3][2];

static /* final */ const MR_Box mercury__term_io_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__term_io_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_io_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__term_io_scalar_common_5[1][1];

static /* final */ const MR_Integer mercury__term_io_scalar_common_6[1][3];


struct mercury__term_io__vector_common_type_7_0_s {
  const MR_String mercury__term_io__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__term_io__vector_common_type_7_0_s mercury__term_io_vector_common_7[44];

struct mercury__term_io__vector_common_type_8_0_s {
  const MR_Integer mercury__term_io__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct mercury__term_io__vector_common_type_8_0_s mercury__term_io_vector_common_8[12];



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
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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


static /* final */ const struct mercury__term_io__vector_common_type_7_0_s mercury__term_io_vector_common_7[44] = {
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

static /* final */ const struct mercury__term_io__vector_common_type_8_0_s mercury__term_io_vector_common_8[12] = {
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
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
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
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_5, S_6);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5))));
  func_2(((MR_Box) (TypeClassInfo_for_writer_15)), ((MR_Box) (Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word Stream_5,
  MR_String S_6)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_11, TypeClassInfo_for_writer_12, Stream_5, S_6, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_11,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word Stream_5,
  MR_Char C_6)
{
  mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(TypeClassInfo_for_writer_11, Stream_5, C_6);
}

void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(
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
  MR_String HeadVar__2_2 = ((&mercury__term_io_vector_common_7[40 + HeadVar__1_1]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__term_io__integer_base_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2 = ((&mercury__term_io_vector_common_8[8 + HeadVar__1_1]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0;

  return HeadVar__2_2;
}

void MR_CALL 
mercury__term_io__quote_atom_agt_4_p_0(
  MR_String Str_5,
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
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_8, Str_5, AdjacentToGraphicToken_6);
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
      result_3 = MR_strcmp(S_7, ((&mercury__term_io_vector_common_7[36 + mid_2]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0);
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
  MR_String Str_4)
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
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_9, Str_4, (MR_Integer) 1);
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
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_6, String_4);
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
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_6, S_4);
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
        if ((((mercury__term_io_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
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
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_6, Char_4);
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
mercury__term_io__write_variable_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Word OutStream_7,
  MR_Box OpTable_8,
  MR_Word Var_9,
  MR_Word VarSet_10)
{
  MR_Word Var_12;
  MR_Word Var_13;

  mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_17, OutStream_7, OpTable_8, Var_9, VarSet_10, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_13);
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
  mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, OutStream_10, OpTable_6, Var_7, VarSet_8, &Var_17, (MR_Word) ((MR_Unsigned) 0U), &Var_18);
}

void MR_CALL 
mercury__term_io__write_variable_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word OutStream_6,
  MR_Word Var_7,
  MR_Word VarSet_8)
{
  MR_Word Var_15;
  MR_Word Var_16;

  mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), Var_7, VarSet_8, &Var_15, (MR_Word) ((MR_Unsigned) 0U), &Var_16);
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
  mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_8, ((MR_Box) ((MR_Integer) 0)), Var_5, VarSet_6, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17);
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
        MR_String Var_15 = ((&mercury__term_io_vector_common_7[22 + Base_7]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
        MR_String Var_16;
        MR_String Var_17;
        MR_Integer Var_18 = ((&mercury__term_io_vector_common_8[4 + Base_7]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0;
        MR_String Var_19;

        Var_17 = mercury__integer__to_base_string_2_f_0(I_8, Var_18);
        switch (Signedness_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_19 = ((&mercury__term_io_vector_common_7[26 + Size_10]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
            break;
          case (MR_Integer) 1:
            Var_19 = ((&mercury__term_io_vector_common_7[31 + Size_10]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
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
      result_3 = MR_strcmp(S_4, ((&mercury__term_io_vector_common_7[18 + mid_2]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0);
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
  MR_String String0_3)
{
  MR_bool succeeded;
  MR_String String_4;
  MR_Word RevStrings_5;
  MR_Word Strings_6;
  MR_Integer Var_15;
  MR_Integer Var_19;
  MR_Integer Var_21;
  MR_Integer Var_22;
  MR_Word Var_24;

{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String0_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_15  = Length;
}
  succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
  if (succeeded)
    Var_19 = (MR_Integer) 0;
  else
    Var_19 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String0_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_22  = Length;
}
  succeeded = (Var_15 < Var_22);
  if (succeeded)
    Var_21 = Var_15;
  else
    Var_21 = Var_22;
  mercury__term_io__foldl_between_2__ho29_6_p_in__string_0(String0_3, Var_19, Var_21, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_5);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_5, &Strings_6);
  Var_24 = mercury__term_io__map__ho15_2_f_in__list_0(Strings_6);
  mercury__string__unsafe_append_string_pieces_2_p_0(Var_24, &String_4);
  return String_4;
}

static void MR_CALL 
mercury__term_io__foldl_between_2__ho29_6_p_in__string_0(
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
    MR_Integer Var_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_io__foldl_between_2__ho29_6_p_in__string_0

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
	Var_17  = ReplacedCodeUnit;
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

      mercury__term_io__add_escaped_char_3_p_0(Var_14, HeadVar__5_11, &Var_15);
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
mercury__term_io__add_escaped_char_3_p_0(
  MR_Char Char_4,
  MR_Word RevStrings0_5,
  MR_Word * RevStrings_6)
{
  MR_bool succeeded;
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
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *RevStrings_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (RevStrings0_5));
    }
  }
  else
  {
    succeeded = mercury__char__is_alnum_1_p_0(Char_4);
    if (!(succeeded))
    {
      if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
        if ((((mercury__term_io_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
      if (!(succeeded))
      {
        MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__term_io__add_escaped_char_3_p_0

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
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *RevStrings_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (RevStrings0_5));
      }
    }
    else
    {
      MR_String Var_14;

      Var_14 = mercury__term_io__mercury_escape_char_1_f_0(Char_4);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *RevStrings_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (RevStrings0_5));
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__term_io__map__ho15_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Integer Var_13;
    MR_Word * AddrSCCcallarg_9_14;

{
#define MR_PROC_LABEL mercury__term_io__map__ho15_2_f_in__list_0

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
    AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__term_io__LCMC__func__map__ho15__1_3_p_0(Var_7, AddrSCCcallarg_9_14);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__term_io__LCMC__func__map__ho15__1_3_p_0(
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
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Integer Var_13;
      MR_Word * AddrSCCcallarg_9_14;
      MR_Word HeadVar__3_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_15;

{
#define MR_PROC_LABEL mercury__term_io__LCMC__func__map__ho15__1_3_p_0

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
      AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_16, (MR_Integer) 1)));
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

void MR_CALL 
mercury__term_io__write_constant_4_p_0(
  MR_Word OutStream_5,
  MR_Word Const_6)
{
  mercury__term_io__write_constant_5_p_0(OutStream_5, Const_6, (MR_Integer) 1);
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
  MR_Word Var_19;

  conv1_Var_21 = func_0(((MR_Box) (TypeClassInfo_for_op_table_16)), OpTable_8);
  Var_21 = ((MR_Word) (conv1_Var_21));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_17, TypeClassInfo_for_op_table_16, OutStream_7, OpTable_8, Term_10, Var_21, VarSet_9, &Var_18, (MR_Word) ((MR_Unsigned) 0U), &Var_19);
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
  MR_Word Var_20;

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
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, OutStream_10, OpTable_6, Term_8, Var_22, VarSet_7, &Var_19, (MR_Word) ((MR_Unsigned) 0U), &Var_20);
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
  MR_Word Var_18;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_20 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_20 = ((MR_Word) (conv1_Var_20));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_20, VarSet_7, &Var_17, (MR_Word) ((MR_Unsigned) 0U), &Var_18);
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
  MR_Word Var_19;

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
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_8, ((MR_Box) ((MR_Integer) 0)), Term_6, Var_21, VarSet_5, &Var_18, (MR_Word) ((MR_Unsigned) 0U), &Var_19);
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
  MR_Word Var_13;

  conv1_Var_19 = func_0(((MR_Box) (TypeClassInfo_for_op_table_17)), OpTable_8);
  Var_19 = ((MR_Word) (conv1_Var_19));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_17, OutStream_7, OpTable_8, Term_10, Var_19, VarSet_9, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_13);
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
  MR_Word Var_18;

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
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_15, TypeClassInfo_for_op_table_14, OutStream_10, OpTable_6, Term_8, Var_20, VarSet_7, &Var_17, (MR_Word) ((MR_Unsigned) 0U), &Var_18);
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
  MR_Word Var_16;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_18 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_18 = ((MR_Word) (conv1_Var_18));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_18, VarSet_7, &Var_15, (MR_Word) ((MR_Unsigned) 0U), &Var_16);
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
  MR_Word Var_17;

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
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_12, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_8, ((MR_Box) ((MR_Integer) 0)), Term_6, Var_19, VarSet_5, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17);
}

void MR_CALL 
mercury__term_io__write_term_prio_anon_vars_10_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_47,
  MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_46,
  MR_Word tscc_proc_1_input_3_OutStream_11,
  MR_Box tscc_proc_1_input_4_OpTable_12,
  MR_Word tscc_proc_1_input_5_Term_13,
  MR_Word tscc_proc_1_input_6_Priority_14,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_34,
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Anon_36)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_38;
  MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
  MR_Word tscc_proc_2_input_3_OutStream_10;
  MR_Box tscc_proc_2_input_4_OpTable_11;
  MR_Word tscc_proc_2_input_5_Var_12;
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24;
  MR_Word tscc_output_1_STATE_VARIABLE_VarSet_34;
  MR_Word tscc_output_2_STATE_VARIABLE_Anon_36;

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
    MR_Word TypeInfo_for_T_47 = tscc_proc_1_input_1_TypeInfo_for_T_47;
    MR_Word TypeClassInfo_for_op_table_46 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
    MR_Word OutStream_11 = tscc_proc_1_input_3_OutStream_11;
    MR_Box OpTable_12 = tscc_proc_1_input_4_OpTable_12;
    MR_Word Term_13 = tscc_proc_1_input_5_Term_13;
    MR_Word Priority_14 = tscc_proc_1_input_6_Priority_14;
    MR_Word STATE_VARIABLE_VarSet_0_33 = tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
    MR_Word STATE_VARIABLE_VarSet_34;
    MR_Word STATE_VARIABLE_Anon_0_35 = tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
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

            mercury__term_io__write_atom_term_prio_anon_vars_11_p_0(TypeInfo_for_T_47, TypeClassInfo_for_op_table_46, OutStream_11, OpTable_12, Atom_32, ArgTerms_21, Priority_14, STATE_VARIABLE_VarSet_0_33, &STATE_VARIABLE_VarSet_34, STATE_VARIABLE_Anon_0_35, &STATE_VARIABLE_Anon_36);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__write_constant_5_p_0(OutStream_11, Functor_20, (MR_Integer) 0);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.write_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
        case (MR_Integer) 3:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__write_constant_5_p_0(OutStream_11, Functor_20, (MR_Integer) 0);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.write_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
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
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_38 = TypeInfo_for_T_47;
      MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_2_input_3_OutStream_10 = OutStream_11;
      MR_Box next_value_of_tscc_proc_2_input_4_OpTable_11 = OpTable_12;
      MR_Word next_value_of_tscc_proc_2_input_5_Var_12 = Var_18;
      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22 = STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24 = STATE_VARIABLE_Anon_0_35;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_38 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_38;
      tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
      tscc_proc_2_input_3_OutStream_10 = next_value_of_tscc_proc_2_input_3_OutStream_10;
      tscc_proc_2_input_4_OpTable_11 = next_value_of_tscc_proc_2_input_4_OpTable_11;
      tscc_proc_2_input_5_Var_12 = next_value_of_tscc_proc_2_input_5_Var_12;
      tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22;
      tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_34;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_36;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_38 = tscc_proc_2_input_1_TypeInfo_for_T_38;
    MR_Word TypeClassInfo_for_op_table_37 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
    MR_Word OutStream_10 = tscc_proc_2_input_3_OutStream_10;
    MR_Box OpTable_11 = tscc_proc_2_input_4_OpTable_11;
    MR_Word Var_12 = tscc_proc_2_input_5_Var_12;
    MR_Word STATE_VARIABLE_VarSet_0_22 = tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22;
    MR_Word STATE_VARIABLE_VarSet_23;
    MR_Word STATE_VARIABLE_Anon_0_24 = tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24;
    MR_Word STATE_VARIABLE_Anon_25;
    MR_bool succeeded;
    MR_Word Value_16;
    MR_Word TypeInfo_12_51;
    MR_Word TypeInfo_14_53;
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 2))));
    MR_Box conv0_Value_16;

    {
      TypeInfo_12_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_12_51, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_12_51, 1) = ((MR_Box) (TypeInfo_for_T_38));
    }
    {
      TypeInfo_14_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_53, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_14_53, 1) = ((MR_Box) (TypeInfo_for_T_38));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_38, TypeInfo_12_51, TypeInfo_14_53, Var_49, Var_12, &conv0_Value_16);
    if (succeeded)
    {
      Value_16 = ((MR_Word) (conv0_Value_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_55;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_37, (MR_Integer) 0)), (MR_Integer) 12))));
      MR_Box conv2_Var_55;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_47;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_1_input_3_OutStream_11;
      MR_Box next_value_of_tscc_proc_1_input_4_OpTable_12;
      MR_Word next_value_of_tscc_proc_1_input_5_Term_13;
      MR_Word next_value_of_tscc_proc_1_input_6_Priority_14;
      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;

      conv2_Var_55 = func_1(((MR_Box) (TypeClassInfo_for_op_table_37)), OpTable_11);
      Var_55 = ((MR_Word) (conv2_Var_55));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_47 = TypeInfo_for_T_38;
      next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = TypeClassInfo_for_op_table_37;
      next_value_of_tscc_proc_1_input_3_OutStream_11 = OutStream_10;
      next_value_of_tscc_proc_1_input_4_OpTable_12 = OpTable_11;
      next_value_of_tscc_proc_1_input_5_Term_13 = Value_16;
      next_value_of_tscc_proc_1_input_6_Priority_14 = Var_55;
      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33 = STATE_VARIABLE_VarSet_0_22;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35 = STATE_VARIABLE_Anon_0_24;
      tscc_proc_1_input_1_TypeInfo_for_T_47 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_47;
      tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      tscc_proc_1_input_3_OutStream_11 = next_value_of_tscc_proc_1_input_3_OutStream_11;
      tscc_proc_1_input_4_OpTable_12 = next_value_of_tscc_proc_1_input_4_OpTable_12;
      tscc_proc_1_input_5_Term_13 = next_value_of_tscc_proc_1_input_5_Term_13;
      tscc_proc_1_input_6_Priority_14 = next_value_of_tscc_proc_1_input_6_Priority_14;
      tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
      tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
      goto top_of_proc_1;
    }
    else
    {
      MR_String Name_17;
      MR_Word TypeInfo_12_60;
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 1))));
      MR_Box conv3_Name_17;

      {
        TypeInfo_12_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_60, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_12_60, 1) = ((MR_Box) (TypeInfo_for_T_38));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_38, TypeInfo_12_60, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_57, Var_12, &conv3_Name_17);
      if (succeeded)
      {
        Name_17 = ((MR_String) (conv3_Name_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(OutStream_10, Name_17);
        STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
      }
      else
      {
        MR_Integer VarNum_18;
        MR_String VarName_21;
        MR_String Var_39;

        if ((STATE_VARIABLE_Anon_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          VarNum_18 = (MR_Integer) (Var_12);
          STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        }
        else
        {
          MR_Word Counter0_19 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Anon_0_24, (MR_Integer) 0))));
          MR_Word Counter_20;
          MR_Integer Var_63;

          VarNum_18 = (MR_Integer) (Counter0_19);
          Var_63 = (MR_Integer) ((MR_Unsigned) VarNum_18 + (MR_Unsigned) 1);
          Counter_20 = (MR_Word) (Var_63);
          {
            STATE_VARIABLE_Anon_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Anon_25, 0) = ((MR_Box) (Counter_20));
          }
        }
        mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__term_io_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), VarNum_18, &Var_39);
        mercury__string__append_3_p_2((MR_String) "_", Var_39, &VarName_21);
        mercury__varset__name_var_4_p_0(TypeInfo_for_T_38, Var_12, VarName_21, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_23);
        mercury__io__write_string_4_p_0(OutStream_10, VarName_21);
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
mercury__term_io__write_variable_anon_vars_9_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_38,
  MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_37,
  MR_Word tscc_proc_2_input_3_OutStream_10,
  MR_Box tscc_proc_2_input_4_OpTable_11,
  MR_Word tscc_proc_2_input_5_Var_12,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_34,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Anon_36)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_47;
  MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
  MR_Word tscc_proc_1_input_3_OutStream_11;
  MR_Box tscc_proc_1_input_4_OpTable_12;
  MR_Word tscc_proc_1_input_5_Term_13;
  MR_Word tscc_proc_1_input_6_Priority_14;
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
  MR_Word tscc_output_1_STATE_VARIABLE_VarSet_34;
  MR_Word tscc_output_2_STATE_VARIABLE_Anon_36;

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
    MR_Word TypeInfo_for_T_47 = tscc_proc_1_input_1_TypeInfo_for_T_47;
    MR_Word TypeClassInfo_for_op_table_46 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
    MR_Word OutStream_11 = tscc_proc_1_input_3_OutStream_11;
    MR_Box OpTable_12 = tscc_proc_1_input_4_OpTable_12;
    MR_Word Term_13 = tscc_proc_1_input_5_Term_13;
    MR_Word Priority_14 = tscc_proc_1_input_6_Priority_14;
    MR_Word STATE_VARIABLE_VarSet_0_33 = tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
    MR_Word STATE_VARIABLE_VarSet_34;
    MR_Word STATE_VARIABLE_Anon_0_35 = tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
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

            mercury__term_io__write_atom_term_prio_anon_vars_11_p_0(TypeInfo_for_T_47, TypeClassInfo_for_op_table_46, OutStream_11, OpTable_12, Atom_32, ArgTerms_21, Priority_14, STATE_VARIABLE_VarSet_0_33, &STATE_VARIABLE_VarSet_34, STATE_VARIABLE_Anon_0_35, &STATE_VARIABLE_Anon_36);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__write_constant_5_p_0(OutStream_11, Functor_20, (MR_Integer) 0);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.write_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
                return;
              }
            STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
            STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_0_35;
          }
          break;
        case (MR_Integer) 3:
          {
            if ((ArgTerms_21 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__term_io__write_constant_5_p_0(OutStream_11, Functor_20, (MR_Integer) 0);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_io.write_term_prio_anon_vars\'/10", (MR_String) "constant has arguments");
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
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_38 = TypeInfo_for_T_47;
      MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_2_input_3_OutStream_10 = OutStream_11;
      MR_Box next_value_of_tscc_proc_2_input_4_OpTable_11 = OpTable_12;
      MR_Word next_value_of_tscc_proc_2_input_5_Var_12 = Var_18;
      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22 = STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24 = STATE_VARIABLE_Anon_0_35;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_38 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_38;
      tscc_proc_2_input_2_TypeClassInfo_for_op_table_37 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
      tscc_proc_2_input_3_OutStream_10 = next_value_of_tscc_proc_2_input_3_OutStream_10;
      tscc_proc_2_input_4_OpTable_11 = next_value_of_tscc_proc_2_input_4_OpTable_11;
      tscc_proc_2_input_5_Var_12 = next_value_of_tscc_proc_2_input_5_Var_12;
      tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22;
      tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_34;
    tscc_output_2_STATE_VARIABLE_Anon_36 = STATE_VARIABLE_Anon_36;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_38 = tscc_proc_2_input_1_TypeInfo_for_T_38;
    MR_Word TypeClassInfo_for_op_table_37 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_37;
    MR_Word OutStream_10 = tscc_proc_2_input_3_OutStream_10;
    MR_Box OpTable_11 = tscc_proc_2_input_4_OpTable_11;
    MR_Word Var_12 = tscc_proc_2_input_5_Var_12;
    MR_Word STATE_VARIABLE_VarSet_0_22 = tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_22;
    MR_Word STATE_VARIABLE_VarSet_23;
    MR_Word STATE_VARIABLE_Anon_0_24 = tscc_proc_2_input_7_STATE_VARIABLE_Anon_0_24;
    MR_Word STATE_VARIABLE_Anon_25;
    MR_bool succeeded;
    MR_Word Value_16;
    MR_Word TypeInfo_12_51;
    MR_Word TypeInfo_14_53;
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 2))));
    MR_Box conv0_Value_16;

    {
      TypeInfo_12_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_12_51, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_12_51, 1) = ((MR_Box) (TypeInfo_for_T_38));
    }
    {
      TypeInfo_14_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_14_53, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_14_53, 1) = ((MR_Box) (TypeInfo_for_T_38));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_38, TypeInfo_12_51, TypeInfo_14_53, Var_49, Var_12, &conv0_Value_16);
    if (succeeded)
    {
      Value_16 = ((MR_Word) (conv0_Value_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_55;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_37, (MR_Integer) 0)), (MR_Integer) 12))));
      MR_Box conv2_Var_55;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_47;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      MR_Word next_value_of_tscc_proc_1_input_3_OutStream_11;
      MR_Box next_value_of_tscc_proc_1_input_4_OpTable_12;
      MR_Word next_value_of_tscc_proc_1_input_5_Term_13;
      MR_Word next_value_of_tscc_proc_1_input_6_Priority_14;
      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
      MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;

      conv2_Var_55 = func_1(((MR_Box) (TypeClassInfo_for_op_table_37)), OpTable_11);
      Var_55 = ((MR_Word) (conv2_Var_55));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_47 = TypeInfo_for_T_38;
      next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = TypeClassInfo_for_op_table_37;
      next_value_of_tscc_proc_1_input_3_OutStream_11 = OutStream_10;
      next_value_of_tscc_proc_1_input_4_OpTable_12 = OpTable_11;
      next_value_of_tscc_proc_1_input_5_Term_13 = Value_16;
      next_value_of_tscc_proc_1_input_6_Priority_14 = Var_55;
      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33 = STATE_VARIABLE_VarSet_0_22;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35 = STATE_VARIABLE_Anon_0_24;
      tscc_proc_1_input_1_TypeInfo_for_T_47 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_47;
      tscc_proc_1_input_2_TypeClassInfo_for_op_table_46 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_46;
      tscc_proc_1_input_3_OutStream_11 = next_value_of_tscc_proc_1_input_3_OutStream_11;
      tscc_proc_1_input_4_OpTable_12 = next_value_of_tscc_proc_1_input_4_OpTable_12;
      tscc_proc_1_input_5_Term_13 = next_value_of_tscc_proc_1_input_5_Term_13;
      tscc_proc_1_input_6_Priority_14 = next_value_of_tscc_proc_1_input_6_Priority_14;
      tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_33;
      tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_Anon_0_35;
      goto top_of_proc_1;
    }
    else
    {
      MR_String Name_17;
      MR_Word TypeInfo_12_60;
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarSet_0_22, (MR_Integer) 1))));
      MR_Box conv3_Name_17;

      {
        TypeInfo_12_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_60, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_12_60, 1) = ((MR_Box) (TypeInfo_for_T_38));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_38, TypeInfo_12_60, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_57, Var_12, &conv3_Name_17);
      if (succeeded)
      {
        Name_17 = ((MR_String) (conv3_Name_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(OutStream_10, Name_17);
        STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
      }
      else
      {
        MR_Integer VarNum_18;
        MR_String VarName_21;
        MR_String Var_39;

        if ((STATE_VARIABLE_Anon_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          VarNum_18 = (MR_Integer) (Var_12);
          STATE_VARIABLE_Anon_25 = STATE_VARIABLE_Anon_0_24;
        }
        else
        {
          MR_Word Counter0_19 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Anon_0_24, (MR_Integer) 0))));
          MR_Word Counter_20;
          MR_Integer Var_63;

          VarNum_18 = (MR_Integer) (Counter0_19);
          Var_63 = (MR_Integer) ((MR_Unsigned) VarNum_18 + (MR_Unsigned) 1);
          Counter_20 = (MR_Word) (Var_63);
          {
            STATE_VARIABLE_Anon_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Anon_25, 0) = ((MR_Box) (Counter_20));
          }
        }
        mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__term_io_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), VarNum_18, &Var_39);
        mercury__string__append_3_p_2((MR_String) "_", Var_39, &VarName_21);
        mercury__varset__name_var_4_p_0(TypeInfo_for_T_38, Var_12, VarName_21, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_23);
        mercury__io__write_string_4_p_0(OutStream_10, VarName_21);
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
mercury__term_io__write_later_list_elements_9_p_0(
  MR_Word TypeInfo_for_T_51,
  MR_Word TypeClassInfo_for_op_table_50,
  MR_Word OutStream_10,
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
        MR_Word STATE_VARIABLE_Anon_40_40;
        MR_Word Var_60;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
        MR_Box conv2_Var_60;
        MR_Word next_value_of_Term_12;
        MR_Word next_value_of_STATE_VARIABLE_VarSet_0_23;
        MR_Word next_value_of_STATE_VARIABLE_Anon_0_25;

        mercury__io__write_string_4_p_0(OutStream_10, (MR_String) ", ");
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_50, (MR_Integer) 0)), (MR_Integer) 16))));
        conv2_Var_60 = func_1(((MR_Box) (TypeClassInfo_for_op_table_50)), OpTable_11);
        Var_60 = ((MR_Word) (conv2_Var_60));
        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_51, TypeClassInfo_for_op_table_50, OutStream_10, OpTable_11, ListHead_19, Var_60, STATE_VARIABLE_VarSet_0_23, &STATE_VARIABLE_VarSet_39_39, STATE_VARIABLE_Anon_0_25, &STATE_VARIABLE_Anon_40_40);
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
          MR_Word Var_61;
          MR_Box MR_CALL (* func_3)(MR_Box, MR_Box);
          MR_Box conv4_Var_61;

          mercury__io__write_string_4_p_0(OutStream_10, (MR_String) " | ");
          func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_50, (MR_Integer) 0)), (MR_Integer) 12))));
          conv4_Var_61 = func_3(((MR_Box) (TypeClassInfo_for_op_table_50)), OpTable_11);
          Var_61 = ((MR_Word) (conv4_Var_61));
          mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_51, TypeClassInfo_for_op_table_50, OutStream_10, OpTable_11, Term_12, Var_61, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_Anon_0_25, STATE_VARIABLE_Anon_26);
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
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 16))));
  MR_Box conv1_Var_22;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_11);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_24, TypeClassInfo_for_op_table_23, OutStream_10, OpTable_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_Anon_0_18, STATE_VARIABLE_Anon_19);
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
  MR_Word STATE_VARIABLE_Anon_0_18,
  MR_Word * STATE_VARIABLE_Anon_19)
{
  MR_Word Var_22;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_23, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_22;

  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_23)), OpTable_11);
  Var_22 = ((MR_Word) (conv1_Var_22));
  mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_24, TypeClassInfo_for_op_table_23, OutStream_10, OpTable_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_Anon_0_18, STATE_VARIABLE_Anon_19);
}

static void MR_CALL 
mercury__term_io__write_atom_term_prio_anon_vars_11_p_0(
  MR_Word TypeInfo_for_T_185,
  MR_Word TypeClassInfo_for_op_table_184,
  MR_Word OutStream_12,
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

    mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 91);
    mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, ListHead_20, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_60_60);
    mercury__term_io__write_later_list_elements_9_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, ListTail_21, STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_60_60, STATE_VARIABLE_Anon_52);
    mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 93);
  }
  else
  {
    succeeded = (strcmp(Atom_14, (MR_String) "[]") == 0);
    if (succeeded)
      succeeded = (ArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(OutStream_12, (MR_String) "[]");
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
          mercury__io__write_string_4_p_0(OutStream_12, (MR_String) "{ ");
          mercury__term_io__write_term_anon_vars_9_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, BracedHeadTerm_22, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
          mercury__io__write_string_4_p_0(OutStream_12, (MR_String) " }");
        }
        else
        {
          MR_Word STATE_VARIABLE_VarSet_78_78;
          MR_Word STATE_VARIABLE_Anon_79_79;

          mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 123);
          mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, BracedHeadTerm_22, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_79_79);
          mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, BracedTailTerms_23, STATE_VARIABLE_VarSet_78_78, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_79_79, STATE_VARIABLE_Anon_52);
          mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 125);
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

          mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Var_26, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_89_89);
          mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 40);
          mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, FirstArg_28, STATE_VARIABLE_VarSet_88_88, &STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_Anon_89_89, &STATE_VARIABLE_Anon_94_94);
          mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, OtherArgTerms_29, STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_94_94, STATE_VARIABLE_Anon_52);
          mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 41);
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
              mercury__term_io__write_atom_term_prio_anon_vars_std_11_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
            else
            {
              MR_Word Var_194 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 1))));
              MR_Word Var_195 = ((MR_Word) ((MR_hl_field(1, ArgTerms_15, (MR_Integer) 0))));

              if ((Var_194 == (MR_Word) ((MR_Unsigned) 0U)))
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
                    MR_Unsigned Var_198 = (MR_Unsigned) (OpPriority_40);
                    MR_Unsigned Var_199 = (MR_Unsigned) (Priority_16);
                    MR_Unsigned Var_206;
                    MR_Unsigned Var_207;

                    succeeded = (Var_198 < Var_199);
                    if (succeeded)
                    {
                      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv1_STATE_VARIABLE_IO_108_108;

                      func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_12)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_108_108);
                    }
                    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_12, Atom_14, (MR_Integer) 1);
                    mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 32);
                    switch (OpGtOrGe_41) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        NewPriority_42 = OpPriority_40;
                        break;
                      case (MR_Integer) 0:
                        NewPriority_42 = mercury__ops__increment_priority_1_f_0(OpPriority_40);
                        break;
                    }
                    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Var_195, NewPriority_42, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
                    Var_206 = (MR_Unsigned) (OpPriority_40);
                    Var_207 = (MR_Unsigned) (Priority_16);
                    succeeded = (Var_206 < Var_207);
                    if (succeeded)
                    {
                      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv3_STATE_VARIABLE_IO_54;

                      func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_12)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_54);
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
                      MR_Unsigned Var_208 = (MR_Unsigned) (OpPriority_172);
                      MR_Unsigned Var_209 = (MR_Unsigned) (Priority_16);
                      MR_Unsigned Var_216;
                      MR_Unsigned Var_217;

                      succeeded = (Var_208 < Var_209);
                      if (succeeded)
                      {
                        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv5_STATE_VARIABLE_IO_118_118;

                        func_4(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_12)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_118_118);
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
                      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Var_195, NewPriority_171, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
                      mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 32);
                      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_12, Atom_14, (MR_Integer) 1);
                      Var_216 = (MR_Unsigned) (OpPriority_172);
                      Var_217 = (MR_Unsigned) (Priority_16);
                      succeeded = (Var_216 < Var_217);
                      if (succeeded)
                      {
                        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv7_STATE_VARIABLE_IO_54;

                        func_6(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_12)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_54);
                      }
                    }
                  }
                  else
                    mercury__term_io__write_atom_term_prio_anon_vars_std_11_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
                }
              }
              else
              {
                MR_Word Var_196 = ((MR_Word) ((MR_hl_field(1, Var_194, (MR_Integer) 1))));
                MR_Word Var_197 = ((MR_Word) ((MR_hl_field(1, Var_194, (MR_Integer) 0))));

                if ((Var_196 == (MR_Word) ((MR_Unsigned) 0U)))
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
                      MR_Unsigned Var_218 = (MR_Unsigned) (OpPriority_182);
                      MR_Unsigned Var_219 = (MR_Unsigned) (Priority_16);
                      MR_Unsigned Var_229;
                      MR_Unsigned Var_230;

                      succeeded = (Var_218 < Var_219);
                      if (succeeded)
                      {
                        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv9_STATE_VARIABLE_IO_133_133;

                        func_8(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_12)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_133_133);
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
                      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Var_195, LeftPriority_46, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_134_134, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_135_135);
                      succeeded = (strcmp(Atom_14, (MR_String) ",") == 0);
                      if (succeeded)
                        mercury__io__write_string_4_p_0(OutStream_12, (MR_String) ", ");
                      else
                      {
                        succeeded = (strcmp(Atom_14, (MR_String) ".") == 0);
                        if (succeeded)
                        {
                          MR_String Dot_47;

                          succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(Var_197);
                          if (succeeded)
                            Dot_47 = (MR_String) "\'.\'";
                          else
                            Dot_47 = (MR_String) ".";
                          mercury__io__write_string_4_p_0(OutStream_12, Dot_47);
                        }
                        else
                        {
                          mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 32);
                          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_12, Atom_14, (MR_Integer) 1);
                          mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 32);
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
                      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Var_197, RightPriority_48, STATE_VARIABLE_VarSet_134_134, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_135_135, STATE_VARIABLE_Anon_52);
                      Var_229 = (MR_Unsigned) (OpPriority_182);
                      Var_230 = (MR_Unsigned) (Priority_16);
                      succeeded = (Var_229 < Var_230);
                      if (succeeded)
                      {
                        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv11_STATE_VARIABLE_IO_54;

                        func_10(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_12)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_54);
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
                        MR_Unsigned Var_231 = (MR_Unsigned) (OpPriority_177);
                        MR_Unsigned Var_232 = (MR_Unsigned) (Priority_16);
                        MR_Unsigned Var_242;
                        MR_Unsigned Var_243;

                        succeeded = (Var_231 < Var_232);
                        if (succeeded)
                        {
                          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv13_STATE_VARIABLE_IO_151_151;

                          func_12(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_12)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_151_151);
                        }
                        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_12, Atom_14, (MR_Integer) 1);
                        mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 32);
                        switch (LeftGtOrGe_178) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            LeftPriority_175 = OpPriority_177;
                            break;
                          case (MR_Integer) 0:
                            LeftPriority_175 = mercury__ops__increment_priority_1_f_0(OpPriority_177);
                            break;
                        }
                        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Var_195, LeftPriority_175, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_155_155, STATE_VARIABLE_Anon_0_51, &STATE_VARIABLE_Anon_156_156);
                        mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 32);
                        switch (RightGtOrGe_179) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            RightPriority_176 = OpPriority_177;
                            break;
                          case (MR_Integer) 0:
                            RightPriority_176 = mercury__ops__increment_priority_1_f_0(OpPriority_177);
                            break;
                        }
                        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Var_197, RightPriority_176, STATE_VARIABLE_VarSet_155_155, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_156_156, STATE_VARIABLE_Anon_52);
                        Var_242 = (MR_Unsigned) (OpPriority_177);
                        Var_243 = (MR_Unsigned) (Priority_16);
                        succeeded = (Var_242 < Var_243);
                        if (succeeded)
                        {
                          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv15_STATE_VARIABLE_IO_54;

                          func_14(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_12)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_54);
                        }
                      }
                    }
                    else
                      mercury__term_io__write_atom_term_prio_anon_vars_std_11_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
                  }
                }
                else
                  mercury__term_io__write_atom_term_prio_anon_vars_std_11_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
              }
            }
          }
          else
            mercury__term_io__write_atom_term_prio_anon_vars_std_11_p_0(TypeInfo_for_T_185, TypeClassInfo_for_op_table_184, OutStream_12, OpTable_13, Atom_14, ArgTerms_15, Priority_16, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_Anon_0_51, STATE_VARIABLE_Anon_52);
        }
      }
    }
  }
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
      MR_Word Var_41;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_41;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Anon_0_6;

      mercury__io__write_string_4_p_0(OutStream_1, (MR_String) ", ");
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_39, (MR_Integer) 0)), (MR_Integer) 16))));
      conv1_Var_41 = func_0(((MR_Box) (TypeClassInfo_for_op_table_39)), OpTable_2);
      Var_41 = ((MR_Word) (conv1_Var_41));
      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_40, TypeClassInfo_for_op_table_39, OutStream_1, OpTable_2, X_23, Var_41, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_Anon_0_6, &STATE_VARIABLE_Anon_37_37);
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
mercury__term_io__write_atom_term_prio_anon_vars_std_11_p_0(
  MR_Word TypeInfo_for_T_45,
  MR_Word TypeClassInfo_for_op_table_44,
  MR_Word OutStream_12,
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
  MR_Unsigned Var_46;
  MR_Unsigned Var_47;
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
      Var_46 = (MR_Unsigned) (Priority_16);
      Var_47 = (MR_Unsigned) (Var_28);
      succeeded = (Var_46 > Var_47);
      if (!(succeeded))
        succeeded = (Var_46 == Var_47);
    }
  }
  if (succeeded)
  {
    mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 40);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_12, Atom_14, (MR_Integer) 1);
    mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 41);
  }
  else
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_12, Atom_14, (MR_Integer) 1);
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
    MR_Word Var_54;

    mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 40);
    Var_54 = mercury__ops__arg_priority_1_f_0(TypeClassInfo_for_op_table_44, OpTable_13);
    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_45, TypeClassInfo_for_op_table_44, OutStream_12, OpTable_13, HeadArgTerm_20, Var_54, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_Anon_0_24, &STATE_VARIABLE_Anon_38_38);
    mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_45, TypeClassInfo_for_op_table_44, OutStream_12, OpTable_13, TailArgTerms_21, STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_Anon_38_38, STATE_VARIABLE_Anon_25);
    mercury__io__write_char_4_p_0(OutStream_12, (MR_Char) 41);
  }
}

void MR_CALL 
mercury__term_io__write_constant_5_p_0(
  MR_Word OutStream_6,
  MR_Word Const_7,
  MR_Word NGT_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Const_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Atom_18 = ((MR_String) ((MR_hl_field(0, Const_7, (MR_Integer) 0))));

        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_6, Atom_18, NGT_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Base_10 = ((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word Int_11 = ((MR_Word) ((MR_hl_field(1, Const_7, (MR_Integer) 1))));
        MR_Word Signedness_12 = ((((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        MR_Word Size_13 = ((MR_Unsigned) ((MR_hl_field(1, Const_7, (MR_Integer) 2))) & (MR_Integer) 7);
        MR_String Prefix_14 = ((&mercury__term_io_vector_common_7[4 + Base_10]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
        MR_String IntStr_15;
        MR_String Suffix_16;
        MR_Integer Var_23 = ((&mercury__term_io_vector_common_8[0 + Base_10]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0;

        IntStr_15 = mercury__integer__to_base_string_2_f_0(Int_11, Var_23);
        switch (Signedness_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Suffix_16 = ((&mercury__term_io_vector_common_7[8 + Size_13]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
            break;
          case (MR_Integer) 1:
            Suffix_16 = ((&mercury__term_io_vector_common_7[13 + Size_13]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
            break;
        }
        mercury__io__write_string_4_p_0(OutStream_6, Prefix_14);
        mercury__io__write_string_4_p_0(OutStream_6, IntStr_15);
        mercury__io__write_string_4_p_0(OutStream_6, Suffix_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Str_19 = ((MR_String) ((MR_hl_field(2, Const_7, (MR_Integer) 0))));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv1_STATE_VARIABLE_State_11_43;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_IO_22;

        func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_11_43);
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_6, Str_19);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_22);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float Float_17 = MR_unbox_float((MR_hl_field(3, Const_7, (MR_Integer) 1)));
            MR_Box Var_36 = (MR_Box) (OutStream_6);
            MR_Box Var_37;

{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_36 ;
	Val = Float_17 ;
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

              mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_37, (MR_String) "error writing to output file: ", &Var_40);
              {
                mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_40)));
                return;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ImplDef_20 = ((MR_String) ((MR_hl_field(3, Const_7, (MR_Integer) 1))));

            mercury__io__write_char_4_p_0(OutStream_6, (MR_Char) 36);
            mercury__io__write_string_4_p_0(OutStream_6, ImplDef_20);
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
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
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
      result_3 = MR_strcmp(S_7, ((&mercury__term_io_vector_common_7[0 + mid_2]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0);
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
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

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
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

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
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

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
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

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
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

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
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

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
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

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
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_18, TypeClassInfo_for_writer_19, Stream_6, S_7);
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
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
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
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

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
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

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

      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(Var_17, Var_18, Var_19, Var_14);
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
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
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
        if ((((mercury__term_io_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      else
        succeeded = MR_FALSE;
      if (!(succeeded))
      {
        MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

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
