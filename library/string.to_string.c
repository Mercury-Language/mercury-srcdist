/*
** Automatically generated from `string.to_string.m'
** by the Mercury compiler,
** version rotd-2019-07-10
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


// :- module string.to_string.
// :- implementation.

/*
INIT mercury__string__to_string__init
ENDINIT
*/

#include "string.to_string.mih"


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
#include "int64.mih"
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
#include "parser.mih"
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
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0;

static MR_Integer MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_3(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(
  MR_Word TypeInfo_for_T_126,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_36,
  MR_Word * STATE_VARIABLE_Rs_37);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_3(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
  MR_Word NonCanon_8,
  MR_Integer Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_2(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(
  MR_Word TypeInfo_for_T_126,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_36,
  MR_Word * STATE_VARIABLE_Rs_37);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_2(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
  MR_Word NonCanon_8,
  MR_Integer Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_0(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(
  MR_Word TypeInfo_for_T_126,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_36,
  MR_Word * STATE_VARIABLE_Rs_37);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_0(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
  MR_Word NonCanon_8,
  MR_Integer Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_1(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(
  MR_Word TypeInfo_for_T_126,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_36,
  MR_Word * STATE_VARIABLE_Rs_37);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_1(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
  MR_Word NonCanon_8,
  MR_Integer Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__det_dynamic_cast_2_p_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Box X_3,
  MR_Box * Y_4);

static void MR_CALL 
mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(
  MR_Word PrivateBuiltinTypeInfo_4,
  MR_Word STATE_VARIABLE_Rs_0_8,
  MR_Word * STATE_VARIABLE_Rs_9);

static void MR_CALL 
mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(
  MR_Word TypeCtorDesc_4,
  MR_Word STATE_VARIABLE_Rs_0_12,
  MR_Word * STATE_VARIABLE_Rs_13);

static void MR_CALL 
mercury__string__to_string__type_desc_to_revstrings_3_p_0(
  MR_Word TypeDesc_4,
  MR_Word STATE_VARIABLE_Rs_0_6,
  MR_Word * STATE_VARIABLE_Rs_7);

static MR_Word MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word TypeInfo_for_T1_1_16,
  MR_Box V_7_7,
  MR_Word V_8_8,
  MR_Integer V_9_9);

static void MR_CALL 
mercury__string__to_string__adjust_priority_3_p_0(
  MR_Integer Priority_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3);

static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
  MR_String String_6,
  MR_Integer Priority_7,
  MR_Integer OpPriority_8,
  MR_Word STATE_VARIABLE_Rs_0_10,
  MR_Word * STATE_VARIABLE_Rs_11);

static MR_Integer MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void);

static void MR_CALL 
mercury__string__to_string__add_revstring_3_p_0(
  MR_String String_4,
  MR_Word RevStrings_5,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__string__to_string_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__string__to_string_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_5[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
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
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



static const MR_FA_TypeInfo_Struct1 mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__string__to_string__string__to_string__type_ctor_info_revstrings_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__string__to_string____Unify____revstrings_0_0_10001)),
  ((MR_Box) (mercury__string__to_string____Compare____revstrings_0_0_10001)),
  (MR_String) "string.to_string",
  (MR_String) "revstrings",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
  }
}

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
  }
}

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
  }
}

void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_3(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  {
    MR_Word RevStrings_9;
    MR_Word Var_11;
    MR_Integer Priority_20;
    MR_Integer Var_21;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_Var_21;

    conv1_Var_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_21 = ((MR_Integer) (conv1_Var_21));
    Priority_20 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_for_T_12, NonCanon_5, Priority_20, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
    *String_8 = mercury__string__append_list_1_f_0(Var_11);
  }
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_3(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_8, (MR_Integer) 0))));
    MR_Box Var_13 = (MR_hl_field(MR_mktag(0), X_8, (MR_Integer) 1));

    mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_15, NonCanon_6, (MR_Integer) 1000, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
  }
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_3(TypeInfo_28_28, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_42;
      MR_Word STATE_VARIABLE_Rs_21_21;
      MR_Word STATE_VARIABLE_Rs_22_22;
      MR_Integer Priority_39;
      MR_Box Var_40;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_39 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_40 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_42, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_42, NonCanon_6, Priority_39, Var_40, STATE_VARIABLE_Rs_21_21, &STATE_VARIABLE_Rs_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_Univ_8 = ListTail_14;
      next_value_of_STATE_VARIABLE_Rs_0_15 = STATE_VARIABLE_Rs_22_22;
      Univ_8 = next_value_of_Univ_8;
      STATE_VARIABLE_Rs_0_15 = next_value_of_STATE_VARIABLE_Rs_0_15;
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_10, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_Rs_16 = STATE_VARIABLE_Rs_0_15;
      else
      {
        MR_Word TypeInfo_29_29;
        MR_Word STATE_VARIABLE_Rs_25_25;
        MR_Box Var_26;
        MR_Integer Priority_52;
        MR_Integer Var_53;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Var_53;

        {
          STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_29_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0))));
        Var_26 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
        conv1_Var_53 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Var_53 = ((MR_Integer) (conv1_Var_53));
        Priority_52 = (MR_Integer) ((MR_Unsigned) Var_53 + (MR_Unsigned) (MR_Integer) 1);
        mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_29_29, NonCanon_6, Priority_52, Var_26, STATE_VARIABLE_Rs_25_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_16,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Integer Priority_10;
    MR_Integer Var_13;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_Var_13;

    conv1_Var_13 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_13 = ((MR_Integer) (conv1_Var_13));
    Priority_10 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_for_T_16, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_3(
  MR_Word TypeInfo_for_T_109,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Box conv0_String_12;

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) (conv0_String_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_36;

      Var_36 = mercury__term_io__quoted_string_1_f_0(String_12);
      mercury__string__to_string__add_revstring_3_p_0(Var_36, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Char Char_13;
      MR_Box conv1_Char_13;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String Var_38;

        Var_38 = mercury__term_io__quoted_char_1_f_0(Char_13);
        mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
      {
        MR_Integer Int_14;
        MR_Box conv2_Int_14;

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) (conv2_Int_14));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_40;

          Var_40 = mercury__string__int_to_string_1_f_0(Int_14);
          mercury__string__to_string__add_revstring_3_p_0(Var_40, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
        else
        {
          MR_Unsigned UInt_15;
          MR_Box conv3_UInt_15;

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) (conv3_UInt_15));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_String Var_42;
            MR_String Var_44;

            Var_44 = mercury__string__uint_to_string_1_f_0(UInt_15);
            Var_42 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) "u");
            mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
          else
          {
            int8_t Int8_16;
            MR_Box conv4_Int8_16;

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
            if (succeeded)
            {
              Int8_16 = ((int8_t) (MR_Word) conv4_Int8_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_46;
              MR_String Var_48;

              Var_48 = mercury__string__int8_to_string_1_f_0(Int8_16);
              Var_46 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "i8");
              mercury__string__to_string__add_revstring_3_p_0(Var_46, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
            }
            else
            {
              uint8_t UInt8_17;
              MR_Box conv5_UInt8_17;

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
              if (succeeded)
              {
                UInt8_17 = ((uint8_t) (MR_Word) conv5_UInt8_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_50;
                MR_String Var_52;

                Var_52 = mercury__string__uint8_to_string_1_f_0(UInt8_17);
                Var_50 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) "u8");
                mercury__string__to_string__add_revstring_3_p_0(Var_50, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
              }
              else
              {
                int16_t Int16_18;
                MR_Box conv6_Int16_18;

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
                if (succeeded)
                {
                  Int16_18 = ((int16_t) (MR_Word) conv6_Int16_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_54;
                  MR_String Var_56;

                  Var_56 = mercury__string__int16_to_string_1_f_0(Int16_18);
                  Var_54 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) "i16");
                  mercury__string__to_string__add_revstring_3_p_0(Var_54, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                }
                else
                {
                  uint16_t UInt16_19;
                  MR_Box conv7_UInt16_19;

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
                  if (succeeded)
                  {
                    UInt16_19 = ((uint16_t) (MR_Word) conv7_UInt16_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_String Var_58;
                    MR_String Var_60;

                    Var_60 = mercury__string__uint16_to_string_1_f_0(UInt16_19);
                    Var_58 = mercury__string__f_43_43_2_f_0(Var_60, (MR_String) "u16");
                    mercury__string__to_string__add_revstring_3_p_0(Var_58, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                  }
                  else
                  {
                    int32_t Int32_20;
                    MR_Box conv8_Int32_20;

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
                    if (succeeded)
                    {
                      Int32_20 = ((int32_t) (MR_Word) conv8_Int32_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_String Var_62;
                      MR_String Var_64;

                      Var_64 = mercury__string__int32_to_string_1_f_0(Int32_20);
                      Var_62 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "i32");
                      mercury__string__to_string__add_revstring_3_p_0(Var_62, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                    }
                    else
                    {
                      uint32_t UInt32_21;
                      MR_Box conv9_UInt32_21;

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
                      if (succeeded)
                      {
                        UInt32_21 = ((uint32_t) (MR_Word) conv9_UInt32_21);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_String Var_66;
                        MR_String Var_68;

                        Var_68 = mercury__string__uint32_to_string_1_f_0(UInt32_21);
                        Var_66 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) "u32");
                        mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                      }
                      else
                      {
                        MR_Float Float_22;
                        MR_Box conv10_Float_22;

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
                        if (succeeded)
                        {
                          Float_22 = MR_unbox_float(conv10_Float_22);
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          MR_String Var_70;

                          Var_70 = mercury__string__float_to_string_1_f_0(Float_22);
                          mercury__string__to_string__add_revstring_3_p_0(Var_70, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                        }
                        else
                        {
                          MR_Box Bitmap_23;
                          MR_Box conv11_Bitmap_23;

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
                          if (succeeded)
                          {
                            Bitmap_23 = ((MR_Box) (conv11_Bitmap_23));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            MR_String Var_72;
                            MR_String Var_74;

                            Var_74 = mercury__bitmap__to_string_1_f_0(Bitmap_23);
                            Var_72 = mercury__term_io__quoted_string_1_f_0(Var_74);
                            mercury__string__to_string__add_revstring_3_p_0(Var_72, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                          }
                          else
                          {
                            MR_Word TypeDesc_24;
                            MR_Box conv12_TypeDesc_24;

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
                            if (succeeded)
                            {
                              TypeDesc_24 = ((MR_Word) (conv12_TypeDesc_24));
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                              mercury__string__to_string__type_desc_to_revstrings_3_p_0(TypeDesc_24, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                            else
                            {
                              MR_Word TypeCtorDesc_25;
                              MR_Box conv13_TypeCtorDesc_25;

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
                              if (succeeded)
                              {
                                TypeCtorDesc_25 = ((MR_Word) (conv13_TypeCtorDesc_25));
                                succeeded = MR_TRUE;
                              }
                              if (succeeded)
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(TypeCtorDesc_25, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                              else
                              {
                                MR_Word C_Pointer_26;
                                MR_Box conv14_C_Pointer_26;

                                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
                                if (succeeded)
                                {
                                  C_Pointer_26 = ((MR_Word) (conv14_C_Pointer_26));
                                  succeeded = MR_TRUE;
                                }
                                if (succeeded)
                                {
                                  MR_String Var_77;

                                  Var_77 = mercury__string__c_pointer_to_string_1_f_0(C_Pointer_26);
                                  mercury__string__to_string__add_revstring_3_p_0(Var_77, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                }
                                else
                                {
                                  MR_Word ElemType_29;
                                  MR_Word TypeCtor_27;
                                  MR_Word ArgTypes_28;
                                  MR_Word Var_79;
                                  MR_Word Var_80;
                                  MR_String Var_81;
                                  MR_String Var_82;

                                  Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                  succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_28, (MR_Integer) 0))));
                                    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_28, (MR_Integer) 1))));
                                    succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_81 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_27);
                                      succeeded = (strcmp(Var_81, (MR_String) "array") == 0);
                                      if (succeeded)
                                      {
                                        Var_82 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_27);
                                        succeeded = (strcmp(Var_82, (MR_String) "array") == 0);
                                      }
                                    }
                                  }
                                  if (succeeded)
                                  {
                                    MR_Word TypeInfo_125_125;
                                    MR_Word TypeInfo_127_127;
                                    MR_ArrayPtr Array_31;
                                    MR_Box conv15_Array_31;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_125_125, ElemType_29);
                                    {
                                      TypeInfo_127_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), TypeInfo_127_127, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                      MR_hl_field(MR_mktag(0), TypeInfo_127_127, 1) = ((MR_Box) (TypeInfo_125_125));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, TypeInfo_127_127, X_10, &conv15_Array_31);
                                    Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                    mercury__string__to_string__array_to_revstrings_5_p_3(TypeInfo_125_125, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                  }
                                  else
                                  {
                                    MR_Word ElemType_107;
                                    MR_Word Var_84;
                                    MR_Word Var_85;
                                    MR_String Var_86;
                                    MR_String Var_87;
                                    MR_Word TypeCtor_95;
                                    MR_Word ArgTypes_96;

                                    Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                    succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      ElemType_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_96, (MR_Integer) 0))));
                                      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_96, (MR_Integer) 1))));
                                      succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_86 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_95);
                                        succeeded = (strcmp(Var_86, (MR_String) "version_array") == 0);
                                        if (succeeded)
                                        {
                                          Var_87 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_95);
                                          succeeded = (strcmp(Var_87, (MR_String) "version_array") == 0);
                                        }
                                      }
                                    }
                                    if (succeeded)
                                    {
                                      MR_Word TypeInfo_128_128;
                                      MR_Word TypeInfo_130_130;
                                      MR_Box VersionArray_32;
                                      MR_Box conv16_VersionArray_32;

                                      mercury__type_desc__has_type_2_p_0(&TypeInfo_128_128, ElemType_107);
                                      {
                                        TypeInfo_130_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), TypeInfo_130_130, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                        MR_hl_field(MR_mktag(0), TypeInfo_130_130, 1) = ((MR_Box) (TypeInfo_128_128));
                                      }
                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, TypeInfo_130_130, X_10, &conv16_VersionArray_32);
                                      VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                      mercury__string__to_string__version_array_to_revstrings_5_p_3(TypeInfo_128_128, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                    }
                                    else
                                    {
                                      MR_Word Var_89;
                                      MR_Word Var_90;
                                      MR_String Var_91;
                                      MR_String Var_92;
                                      MR_Word TypeCtor_98;
                                      MR_Word ArgTypes_99;

                                      Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                      mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                      succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_99, (MR_Integer) 1))));
                                        succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          Var_91 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_98);
                                          succeeded = (strcmp(Var_91, (MR_String) "type_info") == 0);
                                          if (succeeded)
                                          {
                                            Var_92 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_98);
                                            succeeded = (strcmp(Var_92, (MR_String) "private_builtin") == 0);
                                          }
                                        }
                                      }
                                      if (succeeded)
                                      {
                                        MR_Word PrivateBuiltinTypeInfo_33;
                                        MR_Box conv17_PrivateBuiltinTypeInfo_33;

                                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                        PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                        mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                      }
                                      else
                                        mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(TypeInfo_for_T_109, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(
  MR_Word TypeInfo_for_T_126,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_36,
  MR_Word * STATE_VARIABLE_Rs_37)
{
  {
    MR_bool succeeded;
    MR_String Functor_12;
    MR_Word Args_14;
    MR_Integer _Arity_13;
    MR_Word ListHead_15;
    MR_Word ListTail_16;
    MR_Word Var_38;
    MR_Word Var_39;

    mercury__deconstruct__deconstruct_5_p_3(TypeInfo_for_T_126, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
    succeeded = (strcmp(Functor_12, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
        succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
          Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1))));
          succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Rs_41_41;
      MR_Word STATE_VARIABLE_Rs_42_42;
      MR_Word STATE_VARIABLE_Rs_43_43;

      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_41_41);
      mercury__string__to_string__arg_to_revstrings_5_p_3(NonCanon_7, ListHead_15, STATE_VARIABLE_Rs_41_41, &STATE_VARIABLE_Rs_42_42);
      mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_42_42, &STATE_VARIABLE_Rs_43_43);
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", STATE_VARIABLE_Rs_43_43, STATE_VARIABLE_Rs_37);
    }
    else
    {
      succeeded = (strcmp(Functor_12, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
      }
      else
      {
        succeeded = (strcmp(Functor_12, (MR_String) "{}") == 0);
        if (succeeded)
          if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
          }
          else
          {
            MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));

            if ((Var_138 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word TypeInfo_127_127;
              MR_Word STATE_VARIABLE_Rs_56_56;
              MR_Box Var_57;
              MR_Word STATE_VARIABLE_Rs_58_58;

              mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_56_56);
              Var_57 = mercury__univ__univ_value_1_f_0(&TypeInfo_127_127, Var_139);
              mercury__string__to_string__value_to_revstrings_5_p_3(TypeInfo_127_127, NonCanon_7, Var_57, STATE_VARIABLE_Rs_56_56, &STATE_VARIABLE_Rs_58_58);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_58_58, STATE_VARIABLE_Rs_37);
            }
            else
            {
              MR_Word STATE_VARIABLE_Rs_49_49;
              MR_Word STATE_VARIABLE_Rs_50_50;
              MR_Word STATE_VARIABLE_Rs_51_51;

              mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_49_49);
              mercury__string__to_string__arg_to_revstrings_5_p_3(NonCanon_7, Var_139, STATE_VARIABLE_Rs_49_49, &STATE_VARIABLE_Rs_50_50);
              mercury__string__to_string__term_args_to_revstrings_5_p_3(NonCanon_7, Var_138, STATE_VARIABLE_Rs_50_50, &STATE_VARIABLE_Rs_51_51);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_51_51, STATE_VARIABLE_Rs_37);
            }
          }
        else
        {
          MR_Word Arg_22;
          MR_Word Var_63;

          succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Arg_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
            Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23;
            MR_Word OpAssoc_24;

            succeeded = mercury__ops__lookup_prefix_op_4_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_23, &OpAssoc_24);
            if (succeeded)
            {
              MR_Word TypeInfo_129_129;
              MR_Integer NewPriority_25;
              MR_Word STATE_VARIABLE_Rs_65_65;
              MR_String Var_66;
              MR_Word STATE_VARIABLE_Rs_67_67;
              MR_Word STATE_VARIABLE_Rs_69_69;
              MR_Box Var_70;
              MR_Word STATE_VARIABLE_Rs_71_71;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_23, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_65_65);
              Var_66 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_65_65, &STATE_VARIABLE_Rs_67_67);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_67_67, &STATE_VARIABLE_Rs_69_69);
              mercury__string__to_string__adjust_priority_3_p_0(OpPriority_23, OpAssoc_24, &NewPriority_25);
              Var_70 = mercury__univ__univ_value_1_f_0(&TypeInfo_129_129, Arg_22);
              mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_129_129, NonCanon_7, NewPriority_25, Var_70, STATE_VARIABLE_Rs_69_69, &STATE_VARIABLE_Rs_71_71);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_23, STATE_VARIABLE_Rs_71_71, STATE_VARIABLE_Rs_37);
            }
            else
            {
              MR_Integer OpPriority_120;
              MR_Word OpAssoc_121;

              succeeded = mercury__ops__lookup_postfix_op_4_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_120, &OpAssoc_121);
              if (succeeded)
              {
                MR_Word TypeInfo_131_131;
                MR_Word STATE_VARIABLE_Rs_75_75;
                MR_Box Var_76;
                MR_Word STATE_VARIABLE_Rs_77_77;
                MR_Word STATE_VARIABLE_Rs_79_79;
                MR_String Var_80;
                MR_Word STATE_VARIABLE_Rs_81_81;
                MR_Integer NewPriority_119;

                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_120, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_75_75);
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_120, OpAssoc_121, &NewPriority_119);
                Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_131_131, Arg_22);
                mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_131_131, NonCanon_7, NewPriority_119, Var_76, STATE_VARIABLE_Rs_75_75, &STATE_VARIABLE_Rs_77_77);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_77_77, &STATE_VARIABLE_Rs_79_79);
                Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_79_79, &STATE_VARIABLE_Rs_81_81);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_120, STATE_VARIABLE_Rs_81_81, STATE_VARIABLE_Rs_37);
              }
              else
                mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
            }
          }
          else
          {
            MR_Word Arg1_26;
            MR_Word Arg2_27;
            MR_Word Var_85;
            MR_Word Var_86;

            succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Arg1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
              Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
              succeeded = (Var_85 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Arg2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 0))));
                Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 1))));
                succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word LeftAssoc_28;
              MR_Word RightAssoc_29;
              MR_Integer OpPriority_124;

              succeeded = mercury__ops__lookup_infix_op_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_124, &LeftAssoc_28, &RightAssoc_29);
              if (succeeded)
              {
                MR_Word TypeInfo_133_133;
                MR_Word TypeInfo_134_134;
                MR_Integer LeftPriority_30;
                MR_Integer RightPriority_31;
                MR_Word STATE_VARIABLE_Rs_88_88;
                MR_Box Var_89;
                MR_Word STATE_VARIABLE_Rs_90_90;
                MR_Word STATE_VARIABLE_Rs_92_92;
                MR_Box Var_99;
                MR_Word STATE_VARIABLE_Rs_100_100;

                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_124, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_88_88);
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_124, LeftAssoc_28, &LeftPriority_30);
                Var_89 = mercury__univ__univ_value_1_f_0(&TypeInfo_133_133, Arg1_26);
                mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_133_133, NonCanon_7, LeftPriority_30, Var_89, STATE_VARIABLE_Rs_88_88, &STATE_VARIABLE_Rs_90_90);
                succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
                if (succeeded)
                {
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_92_92);
                }
                else
                {
                  MR_Word STATE_VARIABLE_Rs_94_94;
                  MR_String Var_95;
                  MR_Word STATE_VARIABLE_Rs_96_96;

                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_94_94);
                  Var_95 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                  mercury__string__to_string__add_revstring_3_p_0(Var_95, STATE_VARIABLE_Rs_94_94, &STATE_VARIABLE_Rs_96_96);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_96_96, &STATE_VARIABLE_Rs_92_92);
                }
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_124, RightAssoc_29, &RightPriority_31);
                Var_99 = mercury__univ__univ_value_1_f_0(&TypeInfo_134_134, Arg2_27);
                mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_134_134, NonCanon_7, RightPriority_31, Var_99, STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_100_100);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_124, STATE_VARIABLE_Rs_100_100, STATE_VARIABLE_Rs_37);
              }
              else
              {
                MR_Word FirstAssoc_32;
                MR_Word SecondAssoc_33;
                MR_Integer OpPriority_123;

                succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_123, &FirstAssoc_32, &SecondAssoc_33);
                if (succeeded)
                {
                  MR_Word TypeInfo_136_136;
                  MR_Word TypeInfo_137_137;
                  MR_Integer FirstPriority_34;
                  MR_Integer SecondPriority_35;
                  MR_Word STATE_VARIABLE_Rs_104_104;
                  MR_String Var_105;
                  MR_Word STATE_VARIABLE_Rs_106_106;
                  MR_Word STATE_VARIABLE_Rs_108_108;
                  MR_Box Var_109;
                  MR_Word STATE_VARIABLE_Rs_110_110;
                  MR_Word STATE_VARIABLE_Rs_112_112;
                  MR_Box Var_113;
                  MR_Word STATE_VARIABLE_Rs_114_114;

                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_123, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_104_104);
                  Var_105 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                  mercury__string__to_string__add_revstring_3_p_0(Var_105, STATE_VARIABLE_Rs_104_104, &STATE_VARIABLE_Rs_106_106);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_106_106, &STATE_VARIABLE_Rs_108_108);
                  mercury__string__to_string__adjust_priority_3_p_0(OpPriority_123, FirstAssoc_32, &FirstPriority_34);
                  Var_109 = mercury__univ__univ_value_1_f_0(&TypeInfo_136_136, Arg1_26);
                  mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_136_136, NonCanon_7, FirstPriority_34, Var_109, STATE_VARIABLE_Rs_108_108, &STATE_VARIABLE_Rs_110_110);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_110_110, &STATE_VARIABLE_Rs_112_112);
                  mercury__string__to_string__adjust_priority_3_p_0(OpPriority_123, SecondAssoc_33, &SecondPriority_35);
                  Var_113 = mercury__univ__univ_value_1_f_0(&TypeInfo_137_137, Arg2_27);
                  mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_137_137, NonCanon_7, SecondPriority_35, Var_113, STATE_VARIABLE_Rs_112_112, &STATE_VARIABLE_Rs_114_114);
                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_123, STATE_VARIABLE_Rs_114_114, STATE_VARIABLE_Rs_37);
                }
                else
                  mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_3(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_5 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_33;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Integer Priority_30;
      MR_Box Var_31;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_30 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_31 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_33, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_33, NonCanon_1, Priority_30, Var_31, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_20_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word STATE_VARIABLE_Rs_14_14;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_Rs_16_16;
    MR_Integer V_8_40;
    MR_Integer V_4_44;
    MR_Integer Priority_52;
    MR_Integer Var_53;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_53;

    {
      STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
    }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, Array_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 V_4_44  = N;
}
    V_8_40 = (MR_Integer) ((MR_Unsigned) V_4_44 - (MR_Unsigned) (MR_Integer) 1);
    Var_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(TypeInfo_for_T_19, Array_8, (MR_Word) ((MR_Unsigned) 0U), V_8_40);
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_53 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_53 = ((MR_Integer) (conv1_Var_53));
    Priority_52 = (MR_Integer) ((MR_Unsigned) Var_53 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_21_21, NonCanon_6, Priority_52, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, &STATE_VARIABLE_Rs_16_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word STATE_VARIABLE_Rs_14_14;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_Rs_16_16;
    MR_Integer Priority_32;
    MR_Integer Var_33;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_33;

    {
      STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
    }
    mercury__array__to_list_2_p_0(TypeInfo_for_T_19, Array_8, &Var_15);
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_33 = ((MR_Integer) (conv1_Var_33));
    Priority_32 = (MR_Integer) ((MR_Unsigned) Var_33 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_21_21, NonCanon_6, Priority_32, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, &STATE_VARIABLE_Rs_16_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
  MR_Word NonCanon_8,
  MR_Integer Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  {
    MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
    MR_Word STATE_VARIABLE_Rs_24_24;
    MR_Word TypeClassInfo_for_op_table_34;
    MR_Integer Var_18;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
    MR_Box conv2_Var_18;

    if (succeeded)
    {
      TypeClassInfo_for_op_table_34 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_34)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
      if (succeeded)
      {
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12))));
        conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_34)), ((MR_Box) ((MR_Integer) 0)));
        Var_18 = ((MR_Integer) (conv2_Var_18));
        succeeded = (Priority_10 <= Var_18);
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_String Var_21;
      MR_Word STATE_VARIABLE_Rs_22_22;

      {
        STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
      }
      Var_21 = mercury__term_io__quoted_atom_agt_2_f_0(Functor_11, (MR_Integer) 1);
      {
        STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_20_20));
      }
      {
        STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_22_22));
      }
    }
    else
    {
      MR_String Var_25;

      Var_25 = mercury__term_io__quoted_atom_agt_2_f_0(Functor_11, (MR_Integer) 0);
      {
        STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
      }
    }
    if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_24_24;
    else
    {
      MR_Word TypeInfo_15_57;
      MR_Word Y_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
      MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_29_29;
      MR_Word STATE_VARIABLE_Rs_30_30;
      MR_Word STATE_VARIABLE_Rs_31_31;
      MR_Integer Priority_54;
      MR_Box Var_55;

      {
        STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_24_24));
      }
      Priority_54 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_55 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_57, Y_14);
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_57, NonCanon_8, Priority_54, Var_55, STATE_VARIABLE_Rs_29_29, &STATE_VARIABLE_Rs_30_30);
      mercury__string__to_string__term_args_to_revstrings_5_p_3(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_30_30, &STATE_VARIABLE_Rs_31_31);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Rs_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_31_31));
      }
    }
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_2(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  {
    MR_Word RevStrings_9;
    MR_Word Var_11;
    MR_Integer Priority_20;
    MR_Integer Var_21;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_Var_21;

    conv1_Var_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_21 = ((MR_Integer) (conv1_Var_21));
    Priority_20 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_for_T_12, NonCanon_5, Priority_20, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
    *String_8 = mercury__string__append_list_1_f_0(Var_11);
  }
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_2(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_8, (MR_Integer) 0))));
    MR_Box Var_13 = (MR_hl_field(MR_mktag(0), X_8, (MR_Integer) 1));

    mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_15, NonCanon_6, (MR_Integer) 1000, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
  }
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_28_28, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_42;
      MR_Word STATE_VARIABLE_Rs_21_21;
      MR_Word STATE_VARIABLE_Rs_22_22;
      MR_Integer Priority_39;
      MR_Box Var_40;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_39 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_40 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_42, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_42, NonCanon_6, Priority_39, Var_40, STATE_VARIABLE_Rs_21_21, &STATE_VARIABLE_Rs_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_Univ_8 = ListTail_14;
      next_value_of_STATE_VARIABLE_Rs_0_15 = STATE_VARIABLE_Rs_22_22;
      Univ_8 = next_value_of_Univ_8;
      STATE_VARIABLE_Rs_0_15 = next_value_of_STATE_VARIABLE_Rs_0_15;
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_10, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_Rs_16 = STATE_VARIABLE_Rs_0_15;
      else
      {
        MR_Word TypeInfo_29_29;
        MR_Word STATE_VARIABLE_Rs_25_25;
        MR_Box Var_26;
        MR_Integer Priority_52;
        MR_Integer Var_53;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Var_53;

        {
          STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_29_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0))));
        Var_26 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
        conv1_Var_53 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Var_53 = ((MR_Integer) (conv1_Var_53));
        Priority_52 = (MR_Integer) ((MR_Unsigned) Var_53 + (MR_Unsigned) (MR_Integer) 1);
        mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_29_29, NonCanon_6, Priority_52, Var_26, STATE_VARIABLE_Rs_25_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_16,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Integer Priority_10;
    MR_Integer Var_13;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_Var_13;

    conv1_Var_13 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_13 = ((MR_Integer) (conv1_Var_13));
    Priority_10 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_for_T_16, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_2(
  MR_Word TypeInfo_for_T_109,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Box conv0_String_12;

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) (conv0_String_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_36;

      Var_36 = mercury__term_io__quoted_string_1_f_0(String_12);
      mercury__string__to_string__add_revstring_3_p_0(Var_36, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Char Char_13;
      MR_Box conv1_Char_13;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String Var_38;

        Var_38 = mercury__term_io__quoted_char_1_f_0(Char_13);
        mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
      {
        MR_Integer Int_14;
        MR_Box conv2_Int_14;

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) (conv2_Int_14));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_40;

          Var_40 = mercury__string__int_to_string_1_f_0(Int_14);
          mercury__string__to_string__add_revstring_3_p_0(Var_40, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
        else
        {
          MR_Unsigned UInt_15;
          MR_Box conv3_UInt_15;

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) (conv3_UInt_15));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_String Var_42;
            MR_String Var_44;

            Var_44 = mercury__string__uint_to_string_1_f_0(UInt_15);
            Var_42 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) "u");
            mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
          else
          {
            int8_t Int8_16;
            MR_Box conv4_Int8_16;

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
            if (succeeded)
            {
              Int8_16 = ((int8_t) (MR_Word) conv4_Int8_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_46;
              MR_String Var_48;

              Var_48 = mercury__string__int8_to_string_1_f_0(Int8_16);
              Var_46 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "i8");
              mercury__string__to_string__add_revstring_3_p_0(Var_46, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
            }
            else
            {
              uint8_t UInt8_17;
              MR_Box conv5_UInt8_17;

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
              if (succeeded)
              {
                UInt8_17 = ((uint8_t) (MR_Word) conv5_UInt8_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_50;
                MR_String Var_52;

                Var_52 = mercury__string__uint8_to_string_1_f_0(UInt8_17);
                Var_50 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) "u8");
                mercury__string__to_string__add_revstring_3_p_0(Var_50, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
              }
              else
              {
                int16_t Int16_18;
                MR_Box conv6_Int16_18;

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
                if (succeeded)
                {
                  Int16_18 = ((int16_t) (MR_Word) conv6_Int16_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_54;
                  MR_String Var_56;

                  Var_56 = mercury__string__int16_to_string_1_f_0(Int16_18);
                  Var_54 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) "i16");
                  mercury__string__to_string__add_revstring_3_p_0(Var_54, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                }
                else
                {
                  uint16_t UInt16_19;
                  MR_Box conv7_UInt16_19;

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
                  if (succeeded)
                  {
                    UInt16_19 = ((uint16_t) (MR_Word) conv7_UInt16_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_String Var_58;
                    MR_String Var_60;

                    Var_60 = mercury__string__uint16_to_string_1_f_0(UInt16_19);
                    Var_58 = mercury__string__f_43_43_2_f_0(Var_60, (MR_String) "u16");
                    mercury__string__to_string__add_revstring_3_p_0(Var_58, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                  }
                  else
                  {
                    int32_t Int32_20;
                    MR_Box conv8_Int32_20;

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
                    if (succeeded)
                    {
                      Int32_20 = ((int32_t) (MR_Word) conv8_Int32_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_String Var_62;
                      MR_String Var_64;

                      Var_64 = mercury__string__int32_to_string_1_f_0(Int32_20);
                      Var_62 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "i32");
                      mercury__string__to_string__add_revstring_3_p_0(Var_62, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                    }
                    else
                    {
                      uint32_t UInt32_21;
                      MR_Box conv9_UInt32_21;

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
                      if (succeeded)
                      {
                        UInt32_21 = ((uint32_t) (MR_Word) conv9_UInt32_21);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_String Var_66;
                        MR_String Var_68;

                        Var_68 = mercury__string__uint32_to_string_1_f_0(UInt32_21);
                        Var_66 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) "u32");
                        mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                      }
                      else
                      {
                        MR_Float Float_22;
                        MR_Box conv10_Float_22;

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
                        if (succeeded)
                        {
                          Float_22 = MR_unbox_float(conv10_Float_22);
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          MR_String Var_70;

                          Var_70 = mercury__string__float_to_string_1_f_0(Float_22);
                          mercury__string__to_string__add_revstring_3_p_0(Var_70, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                        }
                        else
                        {
                          MR_Box Bitmap_23;
                          MR_Box conv11_Bitmap_23;

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
                          if (succeeded)
                          {
                            Bitmap_23 = ((MR_Box) (conv11_Bitmap_23));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            MR_String Var_72;
                            MR_String Var_74;

                            Var_74 = mercury__bitmap__to_string_1_f_0(Bitmap_23);
                            Var_72 = mercury__term_io__quoted_string_1_f_0(Var_74);
                            mercury__string__to_string__add_revstring_3_p_0(Var_72, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                          }
                          else
                          {
                            MR_Word TypeDesc_24;
                            MR_Box conv12_TypeDesc_24;

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
                            if (succeeded)
                            {
                              TypeDesc_24 = ((MR_Word) (conv12_TypeDesc_24));
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                              mercury__string__to_string__type_desc_to_revstrings_3_p_0(TypeDesc_24, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                            else
                            {
                              MR_Word TypeCtorDesc_25;
                              MR_Box conv13_TypeCtorDesc_25;

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
                              if (succeeded)
                              {
                                TypeCtorDesc_25 = ((MR_Word) (conv13_TypeCtorDesc_25));
                                succeeded = MR_TRUE;
                              }
                              if (succeeded)
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(TypeCtorDesc_25, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                              else
                              {
                                MR_Word C_Pointer_26;
                                MR_Box conv14_C_Pointer_26;

                                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
                                if (succeeded)
                                {
                                  C_Pointer_26 = ((MR_Word) (conv14_C_Pointer_26));
                                  succeeded = MR_TRUE;
                                }
                                if (succeeded)
                                {
                                  MR_String Var_77;

                                  Var_77 = mercury__string__c_pointer_to_string_1_f_0(C_Pointer_26);
                                  mercury__string__to_string__add_revstring_3_p_0(Var_77, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                }
                                else
                                {
                                  MR_Word ElemType_29;
                                  MR_Word TypeCtor_27;
                                  MR_Word ArgTypes_28;
                                  MR_Word Var_79;
                                  MR_Word Var_80;
                                  MR_String Var_81;
                                  MR_String Var_82;

                                  Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                  succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_28, (MR_Integer) 0))));
                                    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_28, (MR_Integer) 1))));
                                    succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_81 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_27);
                                      succeeded = (strcmp(Var_81, (MR_String) "array") == 0);
                                      if (succeeded)
                                      {
                                        Var_82 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_27);
                                        succeeded = (strcmp(Var_82, (MR_String) "array") == 0);
                                      }
                                    }
                                  }
                                  if (succeeded)
                                  {
                                    MR_Word TypeInfo_125_125;
                                    MR_Word TypeInfo_127_127;
                                    MR_ArrayPtr Array_31;
                                    MR_Box conv15_Array_31;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_125_125, ElemType_29);
                                    {
                                      TypeInfo_127_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), TypeInfo_127_127, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                      MR_hl_field(MR_mktag(0), TypeInfo_127_127, 1) = ((MR_Box) (TypeInfo_125_125));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, TypeInfo_127_127, X_10, &conv15_Array_31);
                                    Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                    mercury__string__to_string__array_to_revstrings_5_p_2(TypeInfo_125_125, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                  }
                                  else
                                  {
                                    MR_Word ElemType_107;
                                    MR_Word Var_84;
                                    MR_Word Var_85;
                                    MR_String Var_86;
                                    MR_String Var_87;
                                    MR_Word TypeCtor_95;
                                    MR_Word ArgTypes_96;

                                    Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                    succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      ElemType_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_96, (MR_Integer) 0))));
                                      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_96, (MR_Integer) 1))));
                                      succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_86 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_95);
                                        succeeded = (strcmp(Var_86, (MR_String) "version_array") == 0);
                                        if (succeeded)
                                        {
                                          Var_87 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_95);
                                          succeeded = (strcmp(Var_87, (MR_String) "version_array") == 0);
                                        }
                                      }
                                    }
                                    if (succeeded)
                                    {
                                      MR_Word TypeInfo_128_128;
                                      MR_Word TypeInfo_130_130;
                                      MR_Box VersionArray_32;
                                      MR_Box conv16_VersionArray_32;

                                      mercury__type_desc__has_type_2_p_0(&TypeInfo_128_128, ElemType_107);
                                      {
                                        TypeInfo_130_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), TypeInfo_130_130, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                        MR_hl_field(MR_mktag(0), TypeInfo_130_130, 1) = ((MR_Box) (TypeInfo_128_128));
                                      }
                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, TypeInfo_130_130, X_10, &conv16_VersionArray_32);
                                      VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                      mercury__string__to_string__version_array_to_revstrings_5_p_2(TypeInfo_128_128, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                    }
                                    else
                                    {
                                      MR_Word Var_89;
                                      MR_Word Var_90;
                                      MR_String Var_91;
                                      MR_String Var_92;
                                      MR_Word TypeCtor_98;
                                      MR_Word ArgTypes_99;

                                      Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                      mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                      succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_99, (MR_Integer) 1))));
                                        succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          Var_91 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_98);
                                          succeeded = (strcmp(Var_91, (MR_String) "type_info") == 0);
                                          if (succeeded)
                                          {
                                            Var_92 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_98);
                                            succeeded = (strcmp(Var_92, (MR_String) "private_builtin") == 0);
                                          }
                                        }
                                      }
                                      if (succeeded)
                                      {
                                        MR_Word PrivateBuiltinTypeInfo_33;
                                        MR_Box conv17_PrivateBuiltinTypeInfo_33;

                                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                        PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                        mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                      }
                                      else
                                        mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(TypeInfo_for_T_109, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(
  MR_Word TypeInfo_for_T_126,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_36,
  MR_Word * STATE_VARIABLE_Rs_37)
{
  {
    MR_bool succeeded;
    MR_String Functor_12;
    MR_Word Args_14;
    MR_Integer _Arity_13;
    MR_Word ListHead_15;
    MR_Word ListTail_16;
    MR_Word Var_38;
    MR_Word Var_39;

    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_for_T_126, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
    succeeded = (strcmp(Functor_12, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
        succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
          Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1))));
          succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Rs_41_41;
      MR_Word STATE_VARIABLE_Rs_42_42;
      MR_Word STATE_VARIABLE_Rs_43_43;

      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_41_41);
      mercury__string__to_string__arg_to_revstrings_5_p_2(NonCanon_7, ListHead_15, STATE_VARIABLE_Rs_41_41, &STATE_VARIABLE_Rs_42_42);
      mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_42_42, &STATE_VARIABLE_Rs_43_43);
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", STATE_VARIABLE_Rs_43_43, STATE_VARIABLE_Rs_37);
    }
    else
    {
      succeeded = (strcmp(Functor_12, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
      }
      else
      {
        succeeded = (strcmp(Functor_12, (MR_String) "{}") == 0);
        if (succeeded)
          if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
          }
          else
          {
            MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));

            if ((Var_138 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word TypeInfo_127_127;
              MR_Word STATE_VARIABLE_Rs_56_56;
              MR_Box Var_57;
              MR_Word STATE_VARIABLE_Rs_58_58;

              mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_56_56);
              Var_57 = mercury__univ__univ_value_1_f_0(&TypeInfo_127_127, Var_139);
              mercury__string__to_string__value_to_revstrings_5_p_2(TypeInfo_127_127, NonCanon_7, Var_57, STATE_VARIABLE_Rs_56_56, &STATE_VARIABLE_Rs_58_58);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_58_58, STATE_VARIABLE_Rs_37);
            }
            else
            {
              MR_Word STATE_VARIABLE_Rs_49_49;
              MR_Word STATE_VARIABLE_Rs_50_50;
              MR_Word STATE_VARIABLE_Rs_51_51;

              mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_49_49);
              mercury__string__to_string__arg_to_revstrings_5_p_2(NonCanon_7, Var_139, STATE_VARIABLE_Rs_49_49, &STATE_VARIABLE_Rs_50_50);
              mercury__string__to_string__term_args_to_revstrings_5_p_2(NonCanon_7, Var_138, STATE_VARIABLE_Rs_50_50, &STATE_VARIABLE_Rs_51_51);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_51_51, STATE_VARIABLE_Rs_37);
            }
          }
        else
        {
          MR_Word Arg_22;
          MR_Word Var_63;

          succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Arg_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
            Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23;
            MR_Word OpAssoc_24;

            succeeded = mercury__ops__lookup_prefix_op_4_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_23, &OpAssoc_24);
            if (succeeded)
            {
              MR_Word TypeInfo_129_129;
              MR_Integer NewPriority_25;
              MR_Word STATE_VARIABLE_Rs_65_65;
              MR_String Var_66;
              MR_Word STATE_VARIABLE_Rs_67_67;
              MR_Word STATE_VARIABLE_Rs_69_69;
              MR_Box Var_70;
              MR_Word STATE_VARIABLE_Rs_71_71;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_23, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_65_65);
              Var_66 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_65_65, &STATE_VARIABLE_Rs_67_67);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_67_67, &STATE_VARIABLE_Rs_69_69);
              mercury__string__to_string__adjust_priority_3_p_0(OpPriority_23, OpAssoc_24, &NewPriority_25);
              Var_70 = mercury__univ__univ_value_1_f_0(&TypeInfo_129_129, Arg_22);
              mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_129_129, NonCanon_7, NewPriority_25, Var_70, STATE_VARIABLE_Rs_69_69, &STATE_VARIABLE_Rs_71_71);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_23, STATE_VARIABLE_Rs_71_71, STATE_VARIABLE_Rs_37);
            }
            else
            {
              MR_Integer OpPriority_120;
              MR_Word OpAssoc_121;

              succeeded = mercury__ops__lookup_postfix_op_4_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_120, &OpAssoc_121);
              if (succeeded)
              {
                MR_Word TypeInfo_131_131;
                MR_Word STATE_VARIABLE_Rs_75_75;
                MR_Box Var_76;
                MR_Word STATE_VARIABLE_Rs_77_77;
                MR_Word STATE_VARIABLE_Rs_79_79;
                MR_String Var_80;
                MR_Word STATE_VARIABLE_Rs_81_81;
                MR_Integer NewPriority_119;

                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_120, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_75_75);
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_120, OpAssoc_121, &NewPriority_119);
                Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_131_131, Arg_22);
                mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_131_131, NonCanon_7, NewPriority_119, Var_76, STATE_VARIABLE_Rs_75_75, &STATE_VARIABLE_Rs_77_77);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_77_77, &STATE_VARIABLE_Rs_79_79);
                Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_79_79, &STATE_VARIABLE_Rs_81_81);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_120, STATE_VARIABLE_Rs_81_81, STATE_VARIABLE_Rs_37);
              }
              else
                mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
            }
          }
          else
          {
            MR_Word Arg1_26;
            MR_Word Arg2_27;
            MR_Word Var_85;
            MR_Word Var_86;

            succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Arg1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
              Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
              succeeded = (Var_85 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Arg2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 0))));
                Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 1))));
                succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word LeftAssoc_28;
              MR_Word RightAssoc_29;
              MR_Integer OpPriority_124;

              succeeded = mercury__ops__lookup_infix_op_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_124, &LeftAssoc_28, &RightAssoc_29);
              if (succeeded)
              {
                MR_Word TypeInfo_133_133;
                MR_Word TypeInfo_134_134;
                MR_Integer LeftPriority_30;
                MR_Integer RightPriority_31;
                MR_Word STATE_VARIABLE_Rs_88_88;
                MR_Box Var_89;
                MR_Word STATE_VARIABLE_Rs_90_90;
                MR_Word STATE_VARIABLE_Rs_92_92;
                MR_Box Var_99;
                MR_Word STATE_VARIABLE_Rs_100_100;

                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_124, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_88_88);
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_124, LeftAssoc_28, &LeftPriority_30);
                Var_89 = mercury__univ__univ_value_1_f_0(&TypeInfo_133_133, Arg1_26);
                mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_133_133, NonCanon_7, LeftPriority_30, Var_89, STATE_VARIABLE_Rs_88_88, &STATE_VARIABLE_Rs_90_90);
                succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
                if (succeeded)
                {
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_92_92);
                }
                else
                {
                  MR_Word STATE_VARIABLE_Rs_94_94;
                  MR_String Var_95;
                  MR_Word STATE_VARIABLE_Rs_96_96;

                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_94_94);
                  Var_95 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                  mercury__string__to_string__add_revstring_3_p_0(Var_95, STATE_VARIABLE_Rs_94_94, &STATE_VARIABLE_Rs_96_96);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_96_96, &STATE_VARIABLE_Rs_92_92);
                }
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_124, RightAssoc_29, &RightPriority_31);
                Var_99 = mercury__univ__univ_value_1_f_0(&TypeInfo_134_134, Arg2_27);
                mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_134_134, NonCanon_7, RightPriority_31, Var_99, STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_100_100);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_124, STATE_VARIABLE_Rs_100_100, STATE_VARIABLE_Rs_37);
              }
              else
              {
                MR_Word FirstAssoc_32;
                MR_Word SecondAssoc_33;
                MR_Integer OpPriority_123;

                succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_123, &FirstAssoc_32, &SecondAssoc_33);
                if (succeeded)
                {
                  MR_Word TypeInfo_136_136;
                  MR_Word TypeInfo_137_137;
                  MR_Integer FirstPriority_34;
                  MR_Integer SecondPriority_35;
                  MR_Word STATE_VARIABLE_Rs_104_104;
                  MR_String Var_105;
                  MR_Word STATE_VARIABLE_Rs_106_106;
                  MR_Word STATE_VARIABLE_Rs_108_108;
                  MR_Box Var_109;
                  MR_Word STATE_VARIABLE_Rs_110_110;
                  MR_Word STATE_VARIABLE_Rs_112_112;
                  MR_Box Var_113;
                  MR_Word STATE_VARIABLE_Rs_114_114;

                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_123, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_104_104);
                  Var_105 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                  mercury__string__to_string__add_revstring_3_p_0(Var_105, STATE_VARIABLE_Rs_104_104, &STATE_VARIABLE_Rs_106_106);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_106_106, &STATE_VARIABLE_Rs_108_108);
                  mercury__string__to_string__adjust_priority_3_p_0(OpPriority_123, FirstAssoc_32, &FirstPriority_34);
                  Var_109 = mercury__univ__univ_value_1_f_0(&TypeInfo_136_136, Arg1_26);
                  mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_136_136, NonCanon_7, FirstPriority_34, Var_109, STATE_VARIABLE_Rs_108_108, &STATE_VARIABLE_Rs_110_110);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_110_110, &STATE_VARIABLE_Rs_112_112);
                  mercury__string__to_string__adjust_priority_3_p_0(OpPriority_123, SecondAssoc_33, &SecondPriority_35);
                  Var_113 = mercury__univ__univ_value_1_f_0(&TypeInfo_137_137, Arg2_27);
                  mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_137_137, NonCanon_7, SecondPriority_35, Var_113, STATE_VARIABLE_Rs_112_112, &STATE_VARIABLE_Rs_114_114);
                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_123, STATE_VARIABLE_Rs_114_114, STATE_VARIABLE_Rs_37);
                }
                else
                  mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_2(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_5 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_33;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Integer Priority_30;
      MR_Box Var_31;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_30 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_31 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_33, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_33, NonCanon_1, Priority_30, Var_31, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_20_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word STATE_VARIABLE_Rs_14_14;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_Rs_16_16;
    MR_Integer V_8_40;
    MR_Integer V_4_44;
    MR_Integer Priority_52;
    MR_Integer Var_53;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_53;

    {
      STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
    }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, Array_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 V_4_44  = N;
}
    V_8_40 = (MR_Integer) ((MR_Unsigned) V_4_44 - (MR_Unsigned) (MR_Integer) 1);
    Var_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(TypeInfo_for_T_19, Array_8, (MR_Word) ((MR_Unsigned) 0U), V_8_40);
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_53 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_53 = ((MR_Integer) (conv1_Var_53));
    Priority_52 = (MR_Integer) ((MR_Unsigned) Var_53 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_21_21, NonCanon_6, Priority_52, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, &STATE_VARIABLE_Rs_16_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word STATE_VARIABLE_Rs_14_14;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_Rs_16_16;
    MR_Integer Priority_32;
    MR_Integer Var_33;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_33;

    {
      STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
    }
    mercury__array__to_list_2_p_0(TypeInfo_for_T_19, Array_8, &Var_15);
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_33 = ((MR_Integer) (conv1_Var_33));
    Priority_32 = (MR_Integer) ((MR_Unsigned) Var_33 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_21_21, NonCanon_6, Priority_32, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, &STATE_VARIABLE_Rs_16_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
  MR_Word NonCanon_8,
  MR_Integer Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  {
    MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
    MR_Word STATE_VARIABLE_Rs_24_24;
    MR_Word TypeClassInfo_for_op_table_34;
    MR_Integer Var_18;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
    MR_Box conv2_Var_18;

    if (succeeded)
    {
      TypeClassInfo_for_op_table_34 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_34)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
      if (succeeded)
      {
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12))));
        conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_34)), ((MR_Box) ((MR_Integer) 0)));
        Var_18 = ((MR_Integer) (conv2_Var_18));
        succeeded = (Priority_10 <= Var_18);
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_String Var_21;
      MR_Word STATE_VARIABLE_Rs_22_22;

      {
        STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
      }
      Var_21 = mercury__term_io__quoted_atom_agt_2_f_0(Functor_11, (MR_Integer) 1);
      {
        STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_20_20));
      }
      {
        STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_22_22));
      }
    }
    else
    {
      MR_String Var_25;

      Var_25 = mercury__term_io__quoted_atom_agt_2_f_0(Functor_11, (MR_Integer) 0);
      {
        STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
      }
    }
    if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_24_24;
    else
    {
      MR_Word TypeInfo_15_57;
      MR_Word Y_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
      MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_29_29;
      MR_Word STATE_VARIABLE_Rs_30_30;
      MR_Word STATE_VARIABLE_Rs_31_31;
      MR_Integer Priority_54;
      MR_Box Var_55;

      {
        STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_24_24));
      }
      Priority_54 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_55 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_57, Y_14);
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_57, NonCanon_8, Priority_54, Var_55, STATE_VARIABLE_Rs_29_29, &STATE_VARIABLE_Rs_30_30);
      mercury__string__to_string__term_args_to_revstrings_5_p_2(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_30_30, &STATE_VARIABLE_Rs_31_31);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Rs_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_31_31));
      }
    }
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  {
    MR_Word RevStrings_9;
    MR_Word Var_11;
    MR_Integer Priority_20;
    MR_Integer Var_21;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_Var_21;

    conv1_Var_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_21 = ((MR_Integer) (conv1_Var_21));
    Priority_20 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_for_T_12, NonCanon_5, Priority_20, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
    *String_8 = mercury__string__append_list_1_f_0(Var_11);
  }
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_0(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_8, (MR_Integer) 0))));
    MR_Box Var_13 = (MR_hl_field(MR_mktag(0), X_8, (MR_Integer) 1));

    mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_15, NonCanon_6, (MR_Integer) 1000, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
  }
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_0(TypeInfo_28_28, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_42;
      MR_Word STATE_VARIABLE_Rs_21_21;
      MR_Word STATE_VARIABLE_Rs_22_22;
      MR_Integer Priority_39;
      MR_Box Var_40;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_39 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_40 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_42, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_42, NonCanon_6, Priority_39, Var_40, STATE_VARIABLE_Rs_21_21, &STATE_VARIABLE_Rs_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_Univ_8 = ListTail_14;
      next_value_of_STATE_VARIABLE_Rs_0_15 = STATE_VARIABLE_Rs_22_22;
      Univ_8 = next_value_of_Univ_8;
      STATE_VARIABLE_Rs_0_15 = next_value_of_STATE_VARIABLE_Rs_0_15;
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_10, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_Rs_16 = STATE_VARIABLE_Rs_0_15;
      else
      {
        MR_Word TypeInfo_29_29;
        MR_Word STATE_VARIABLE_Rs_25_25;
        MR_Box Var_26;
        MR_Integer Priority_52;
        MR_Integer Var_53;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Var_53;

        {
          STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_29_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0))));
        Var_26 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
        conv1_Var_53 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Var_53 = ((MR_Integer) (conv1_Var_53));
        Priority_52 = (MR_Integer) ((MR_Unsigned) Var_53 + (MR_Unsigned) (MR_Integer) 1);
        mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_29_29, NonCanon_6, Priority_52, Var_26, STATE_VARIABLE_Rs_25_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Integer Priority_10;
    MR_Integer Var_13;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_Var_13;

    conv1_Var_13 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_13 = ((MR_Integer) (conv1_Var_13));
    Priority_10 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_for_T_16, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_0(
  MR_Word TypeInfo_for_T_109,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Box conv0_String_12;

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) (conv0_String_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_36;

      Var_36 = mercury__term_io__quoted_string_1_f_0(String_12);
      mercury__string__to_string__add_revstring_3_p_0(Var_36, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Char Char_13;
      MR_Box conv1_Char_13;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String Var_38;

        Var_38 = mercury__term_io__quoted_char_1_f_0(Char_13);
        mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
      {
        MR_Integer Int_14;
        MR_Box conv2_Int_14;

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) (conv2_Int_14));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_40;

          Var_40 = mercury__string__int_to_string_1_f_0(Int_14);
          mercury__string__to_string__add_revstring_3_p_0(Var_40, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
        else
        {
          MR_Unsigned UInt_15;
          MR_Box conv3_UInt_15;

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) (conv3_UInt_15));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_String Var_42;
            MR_String Var_44;

            Var_44 = mercury__string__uint_to_string_1_f_0(UInt_15);
            Var_42 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) "u");
            mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
          else
          {
            int8_t Int8_16;
            MR_Box conv4_Int8_16;

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
            if (succeeded)
            {
              Int8_16 = ((int8_t) (MR_Word) conv4_Int8_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_46;
              MR_String Var_48;

              Var_48 = mercury__string__int8_to_string_1_f_0(Int8_16);
              Var_46 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "i8");
              mercury__string__to_string__add_revstring_3_p_0(Var_46, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
            }
            else
            {
              uint8_t UInt8_17;
              MR_Box conv5_UInt8_17;

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
              if (succeeded)
              {
                UInt8_17 = ((uint8_t) (MR_Word) conv5_UInt8_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_50;
                MR_String Var_52;

                Var_52 = mercury__string__uint8_to_string_1_f_0(UInt8_17);
                Var_50 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) "u8");
                mercury__string__to_string__add_revstring_3_p_0(Var_50, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
              }
              else
              {
                int16_t Int16_18;
                MR_Box conv6_Int16_18;

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
                if (succeeded)
                {
                  Int16_18 = ((int16_t) (MR_Word) conv6_Int16_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_54;
                  MR_String Var_56;

                  Var_56 = mercury__string__int16_to_string_1_f_0(Int16_18);
                  Var_54 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) "i16");
                  mercury__string__to_string__add_revstring_3_p_0(Var_54, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                }
                else
                {
                  uint16_t UInt16_19;
                  MR_Box conv7_UInt16_19;

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
                  if (succeeded)
                  {
                    UInt16_19 = ((uint16_t) (MR_Word) conv7_UInt16_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_String Var_58;
                    MR_String Var_60;

                    Var_60 = mercury__string__uint16_to_string_1_f_0(UInt16_19);
                    Var_58 = mercury__string__f_43_43_2_f_0(Var_60, (MR_String) "u16");
                    mercury__string__to_string__add_revstring_3_p_0(Var_58, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                  }
                  else
                  {
                    int32_t Int32_20;
                    MR_Box conv8_Int32_20;

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
                    if (succeeded)
                    {
                      Int32_20 = ((int32_t) (MR_Word) conv8_Int32_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_String Var_62;
                      MR_String Var_64;

                      Var_64 = mercury__string__int32_to_string_1_f_0(Int32_20);
                      Var_62 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "i32");
                      mercury__string__to_string__add_revstring_3_p_0(Var_62, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                    }
                    else
                    {
                      uint32_t UInt32_21;
                      MR_Box conv9_UInt32_21;

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
                      if (succeeded)
                      {
                        UInt32_21 = ((uint32_t) (MR_Word) conv9_UInt32_21);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_String Var_66;
                        MR_String Var_68;

                        Var_68 = mercury__string__uint32_to_string_1_f_0(UInt32_21);
                        Var_66 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) "u32");
                        mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                      }
                      else
                      {
                        MR_Float Float_22;
                        MR_Box conv10_Float_22;

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
                        if (succeeded)
                        {
                          Float_22 = MR_unbox_float(conv10_Float_22);
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          MR_String Var_70;

                          Var_70 = mercury__string__float_to_string_1_f_0(Float_22);
                          mercury__string__to_string__add_revstring_3_p_0(Var_70, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                        }
                        else
                        {
                          MR_Box Bitmap_23;
                          MR_Box conv11_Bitmap_23;

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
                          if (succeeded)
                          {
                            Bitmap_23 = ((MR_Box) (conv11_Bitmap_23));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            MR_String Var_72;
                            MR_String Var_74;

                            Var_74 = mercury__bitmap__to_string_1_f_0(Bitmap_23);
                            Var_72 = mercury__term_io__quoted_string_1_f_0(Var_74);
                            mercury__string__to_string__add_revstring_3_p_0(Var_72, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                          }
                          else
                          {
                            MR_Word TypeDesc_24;
                            MR_Box conv12_TypeDesc_24;

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
                            if (succeeded)
                            {
                              TypeDesc_24 = ((MR_Word) (conv12_TypeDesc_24));
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                              mercury__string__to_string__type_desc_to_revstrings_3_p_0(TypeDesc_24, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                            else
                            {
                              MR_Word TypeCtorDesc_25;
                              MR_Box conv13_TypeCtorDesc_25;

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
                              if (succeeded)
                              {
                                TypeCtorDesc_25 = ((MR_Word) (conv13_TypeCtorDesc_25));
                                succeeded = MR_TRUE;
                              }
                              if (succeeded)
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(TypeCtorDesc_25, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                              else
                              {
                                MR_Word C_Pointer_26;
                                MR_Box conv14_C_Pointer_26;

                                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
                                if (succeeded)
                                {
                                  C_Pointer_26 = ((MR_Word) (conv14_C_Pointer_26));
                                  succeeded = MR_TRUE;
                                }
                                if (succeeded)
                                {
                                  MR_String Var_77;

                                  Var_77 = mercury__string__c_pointer_to_string_1_f_0(C_Pointer_26);
                                  mercury__string__to_string__add_revstring_3_p_0(Var_77, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                }
                                else
                                {
                                  MR_Word ElemType_29;
                                  MR_Word TypeCtor_27;
                                  MR_Word ArgTypes_28;
                                  MR_Word Var_79;
                                  MR_Word Var_80;
                                  MR_String Var_81;
                                  MR_String Var_82;

                                  Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                  succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_28, (MR_Integer) 0))));
                                    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_28, (MR_Integer) 1))));
                                    succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_81 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_27);
                                      succeeded = (strcmp(Var_81, (MR_String) "array") == 0);
                                      if (succeeded)
                                      {
                                        Var_82 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_27);
                                        succeeded = (strcmp(Var_82, (MR_String) "array") == 0);
                                      }
                                    }
                                  }
                                  if (succeeded)
                                  {
                                    MR_Word TypeInfo_125_125;
                                    MR_Word TypeInfo_127_127;
                                    MR_ArrayPtr Array_31;
                                    MR_Box conv15_Array_31;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_125_125, ElemType_29);
                                    {
                                      TypeInfo_127_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), TypeInfo_127_127, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                      MR_hl_field(MR_mktag(0), TypeInfo_127_127, 1) = ((MR_Box) (TypeInfo_125_125));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, TypeInfo_127_127, X_10, &conv15_Array_31);
                                    Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                    mercury__string__to_string__array_to_revstrings_5_p_0(TypeInfo_125_125, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                  }
                                  else
                                  {
                                    MR_Word ElemType_107;
                                    MR_Word Var_84;
                                    MR_Word Var_85;
                                    MR_String Var_86;
                                    MR_String Var_87;
                                    MR_Word TypeCtor_95;
                                    MR_Word ArgTypes_96;

                                    Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                    succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      ElemType_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_96, (MR_Integer) 0))));
                                      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_96, (MR_Integer) 1))));
                                      succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_86 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_95);
                                        succeeded = (strcmp(Var_86, (MR_String) "version_array") == 0);
                                        if (succeeded)
                                        {
                                          Var_87 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_95);
                                          succeeded = (strcmp(Var_87, (MR_String) "version_array") == 0);
                                        }
                                      }
                                    }
                                    if (succeeded)
                                    {
                                      MR_Word TypeInfo_128_128;
                                      MR_Word TypeInfo_130_130;
                                      MR_Box VersionArray_32;
                                      MR_Box conv16_VersionArray_32;

                                      mercury__type_desc__has_type_2_p_0(&TypeInfo_128_128, ElemType_107);
                                      {
                                        TypeInfo_130_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), TypeInfo_130_130, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                        MR_hl_field(MR_mktag(0), TypeInfo_130_130, 1) = ((MR_Box) (TypeInfo_128_128));
                                      }
                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, TypeInfo_130_130, X_10, &conv16_VersionArray_32);
                                      VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                      mercury__string__to_string__version_array_to_revstrings_5_p_0(TypeInfo_128_128, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                    }
                                    else
                                    {
                                      MR_Word Var_89;
                                      MR_Word Var_90;
                                      MR_String Var_91;
                                      MR_String Var_92;
                                      MR_Word TypeCtor_98;
                                      MR_Word ArgTypes_99;

                                      Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                      mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                      succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_99, (MR_Integer) 1))));
                                        succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          Var_91 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_98);
                                          succeeded = (strcmp(Var_91, (MR_String) "type_info") == 0);
                                          if (succeeded)
                                          {
                                            Var_92 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_98);
                                            succeeded = (strcmp(Var_92, (MR_String) "private_builtin") == 0);
                                          }
                                        }
                                      }
                                      if (succeeded)
                                      {
                                        MR_Word PrivateBuiltinTypeInfo_33;
                                        MR_Box conv17_PrivateBuiltinTypeInfo_33;

                                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                        PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                        mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                      }
                                      else
                                        mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(TypeInfo_for_T_109, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(
  MR_Word TypeInfo_for_T_126,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_36,
  MR_Word * STATE_VARIABLE_Rs_37)
{
  {
    MR_bool succeeded;
    MR_String Functor_12;
    MR_Word Args_14;
    MR_Integer _Arity_13;
    MR_Word ListHead_15;
    MR_Word ListTail_16;
    MR_Word Var_38;
    MR_Word Var_39;

    mercury__deconstruct__deconstruct_5_p_0(TypeInfo_for_T_126, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
    succeeded = (strcmp(Functor_12, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
        succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
          Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1))));
          succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Rs_41_41;
      MR_Word STATE_VARIABLE_Rs_42_42;
      MR_Word STATE_VARIABLE_Rs_43_43;

      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_41_41);
      mercury__string__to_string__arg_to_revstrings_5_p_0(NonCanon_7, ListHead_15, STATE_VARIABLE_Rs_41_41, &STATE_VARIABLE_Rs_42_42);
      mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_42_42, &STATE_VARIABLE_Rs_43_43);
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", STATE_VARIABLE_Rs_43_43, STATE_VARIABLE_Rs_37);
    }
    else
    {
      succeeded = (strcmp(Functor_12, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
      }
      else
      {
        succeeded = (strcmp(Functor_12, (MR_String) "{}") == 0);
        if (succeeded)
          if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
          }
          else
          {
            MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));

            if ((Var_138 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word TypeInfo_127_127;
              MR_Word STATE_VARIABLE_Rs_56_56;
              MR_Box Var_57;
              MR_Word STATE_VARIABLE_Rs_58_58;

              mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_56_56);
              Var_57 = mercury__univ__univ_value_1_f_0(&TypeInfo_127_127, Var_139);
              mercury__string__to_string__value_to_revstrings_5_p_0(TypeInfo_127_127, NonCanon_7, Var_57, STATE_VARIABLE_Rs_56_56, &STATE_VARIABLE_Rs_58_58);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_58_58, STATE_VARIABLE_Rs_37);
            }
            else
            {
              MR_Word STATE_VARIABLE_Rs_49_49;
              MR_Word STATE_VARIABLE_Rs_50_50;
              MR_Word STATE_VARIABLE_Rs_51_51;

              mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_49_49);
              mercury__string__to_string__arg_to_revstrings_5_p_0(NonCanon_7, Var_139, STATE_VARIABLE_Rs_49_49, &STATE_VARIABLE_Rs_50_50);
              mercury__string__to_string__term_args_to_revstrings_5_p_0(NonCanon_7, Var_138, STATE_VARIABLE_Rs_50_50, &STATE_VARIABLE_Rs_51_51);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_51_51, STATE_VARIABLE_Rs_37);
            }
          }
        else
        {
          MR_Word Arg_22;
          MR_Word Var_63;

          succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Arg_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
            Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23;
            MR_Word OpAssoc_24;

            succeeded = mercury__ops__lookup_prefix_op_4_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_23, &OpAssoc_24);
            if (succeeded)
            {
              MR_Word TypeInfo_129_129;
              MR_Integer NewPriority_25;
              MR_Word STATE_VARIABLE_Rs_65_65;
              MR_String Var_66;
              MR_Word STATE_VARIABLE_Rs_67_67;
              MR_Word STATE_VARIABLE_Rs_69_69;
              MR_Box Var_70;
              MR_Word STATE_VARIABLE_Rs_71_71;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_23, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_65_65);
              Var_66 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_65_65, &STATE_VARIABLE_Rs_67_67);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_67_67, &STATE_VARIABLE_Rs_69_69);
              mercury__string__to_string__adjust_priority_3_p_0(OpPriority_23, OpAssoc_24, &NewPriority_25);
              Var_70 = mercury__univ__univ_value_1_f_0(&TypeInfo_129_129, Arg_22);
              mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_129_129, NonCanon_7, NewPriority_25, Var_70, STATE_VARIABLE_Rs_69_69, &STATE_VARIABLE_Rs_71_71);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_23, STATE_VARIABLE_Rs_71_71, STATE_VARIABLE_Rs_37);
            }
            else
            {
              MR_Integer OpPriority_120;
              MR_Word OpAssoc_121;

              succeeded = mercury__ops__lookup_postfix_op_4_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_120, &OpAssoc_121);
              if (succeeded)
              {
                MR_Word TypeInfo_131_131;
                MR_Word STATE_VARIABLE_Rs_75_75;
                MR_Box Var_76;
                MR_Word STATE_VARIABLE_Rs_77_77;
                MR_Word STATE_VARIABLE_Rs_79_79;
                MR_String Var_80;
                MR_Word STATE_VARIABLE_Rs_81_81;
                MR_Integer NewPriority_119;

                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_120, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_75_75);
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_120, OpAssoc_121, &NewPriority_119);
                Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_131_131, Arg_22);
                mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_131_131, NonCanon_7, NewPriority_119, Var_76, STATE_VARIABLE_Rs_75_75, &STATE_VARIABLE_Rs_77_77);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_77_77, &STATE_VARIABLE_Rs_79_79);
                Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_79_79, &STATE_VARIABLE_Rs_81_81);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_120, STATE_VARIABLE_Rs_81_81, STATE_VARIABLE_Rs_37);
              }
              else
                mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
            }
          }
          else
          {
            MR_Word Arg1_26;
            MR_Word Arg2_27;
            MR_Word Var_85;
            MR_Word Var_86;

            succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Arg1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
              Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
              succeeded = (Var_85 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Arg2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 0))));
                Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 1))));
                succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word LeftAssoc_28;
              MR_Word RightAssoc_29;
              MR_Integer OpPriority_124;

              succeeded = mercury__ops__lookup_infix_op_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_124, &LeftAssoc_28, &RightAssoc_29);
              if (succeeded)
              {
                MR_Word TypeInfo_133_133;
                MR_Word TypeInfo_134_134;
                MR_Integer LeftPriority_30;
                MR_Integer RightPriority_31;
                MR_Word STATE_VARIABLE_Rs_88_88;
                MR_Box Var_89;
                MR_Word STATE_VARIABLE_Rs_90_90;
                MR_Word STATE_VARIABLE_Rs_92_92;
                MR_Box Var_99;
                MR_Word STATE_VARIABLE_Rs_100_100;

                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_124, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_88_88);
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_124, LeftAssoc_28, &LeftPriority_30);
                Var_89 = mercury__univ__univ_value_1_f_0(&TypeInfo_133_133, Arg1_26);
                mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_133_133, NonCanon_7, LeftPriority_30, Var_89, STATE_VARIABLE_Rs_88_88, &STATE_VARIABLE_Rs_90_90);
                succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
                if (succeeded)
                {
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_92_92);
                }
                else
                {
                  MR_Word STATE_VARIABLE_Rs_94_94;
                  MR_String Var_95;
                  MR_Word STATE_VARIABLE_Rs_96_96;

                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_94_94);
                  Var_95 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                  mercury__string__to_string__add_revstring_3_p_0(Var_95, STATE_VARIABLE_Rs_94_94, &STATE_VARIABLE_Rs_96_96);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_96_96, &STATE_VARIABLE_Rs_92_92);
                }
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_124, RightAssoc_29, &RightPriority_31);
                Var_99 = mercury__univ__univ_value_1_f_0(&TypeInfo_134_134, Arg2_27);
                mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_134_134, NonCanon_7, RightPriority_31, Var_99, STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_100_100);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_124, STATE_VARIABLE_Rs_100_100, STATE_VARIABLE_Rs_37);
              }
              else
              {
                MR_Word FirstAssoc_32;
                MR_Word SecondAssoc_33;
                MR_Integer OpPriority_123;

                succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_123, &FirstAssoc_32, &SecondAssoc_33);
                if (succeeded)
                {
                  MR_Word TypeInfo_136_136;
                  MR_Word TypeInfo_137_137;
                  MR_Integer FirstPriority_34;
                  MR_Integer SecondPriority_35;
                  MR_Word STATE_VARIABLE_Rs_104_104;
                  MR_String Var_105;
                  MR_Word STATE_VARIABLE_Rs_106_106;
                  MR_Word STATE_VARIABLE_Rs_108_108;
                  MR_Box Var_109;
                  MR_Word STATE_VARIABLE_Rs_110_110;
                  MR_Word STATE_VARIABLE_Rs_112_112;
                  MR_Box Var_113;
                  MR_Word STATE_VARIABLE_Rs_114_114;

                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_123, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_104_104);
                  Var_105 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                  mercury__string__to_string__add_revstring_3_p_0(Var_105, STATE_VARIABLE_Rs_104_104, &STATE_VARIABLE_Rs_106_106);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_106_106, &STATE_VARIABLE_Rs_108_108);
                  mercury__string__to_string__adjust_priority_3_p_0(OpPriority_123, FirstAssoc_32, &FirstPriority_34);
                  Var_109 = mercury__univ__univ_value_1_f_0(&TypeInfo_136_136, Arg1_26);
                  mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_136_136, NonCanon_7, FirstPriority_34, Var_109, STATE_VARIABLE_Rs_108_108, &STATE_VARIABLE_Rs_110_110);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_110_110, &STATE_VARIABLE_Rs_112_112);
                  mercury__string__to_string__adjust_priority_3_p_0(OpPriority_123, SecondAssoc_33, &SecondPriority_35);
                  Var_113 = mercury__univ__univ_value_1_f_0(&TypeInfo_137_137, Arg2_27);
                  mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_137_137, NonCanon_7, SecondPriority_35, Var_113, STATE_VARIABLE_Rs_112_112, &STATE_VARIABLE_Rs_114_114);
                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_123, STATE_VARIABLE_Rs_114_114, STATE_VARIABLE_Rs_37);
                }
                else
                  mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_0(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_5 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_33;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Integer Priority_30;
      MR_Box Var_31;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_30 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_31 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_33, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_33, NonCanon_1, Priority_30, Var_31, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_20_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word STATE_VARIABLE_Rs_14_14;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_Rs_16_16;
    MR_Integer V_8_40;
    MR_Integer V_4_44;
    MR_Integer Priority_52;
    MR_Integer Var_53;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_53;

    {
      STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
    }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, Array_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 V_4_44  = N;
}
    V_8_40 = (MR_Integer) ((MR_Unsigned) V_4_44 - (MR_Unsigned) (MR_Integer) 1);
    Var_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(TypeInfo_for_T_19, Array_8, (MR_Word) ((MR_Unsigned) 0U), V_8_40);
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_53 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_53 = ((MR_Integer) (conv1_Var_53));
    Priority_52 = (MR_Integer) ((MR_Unsigned) Var_53 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_21_21, NonCanon_6, Priority_52, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, &STATE_VARIABLE_Rs_16_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word STATE_VARIABLE_Rs_14_14;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_Rs_16_16;
    MR_Integer Priority_32;
    MR_Integer Var_33;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_33;

    {
      STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
    }
    mercury__array__to_list_2_p_0(TypeInfo_for_T_19, Array_8, &Var_15);
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_33 = ((MR_Integer) (conv1_Var_33));
    Priority_32 = (MR_Integer) ((MR_Unsigned) Var_33 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_21_21, NonCanon_6, Priority_32, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, &STATE_VARIABLE_Rs_16_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
  MR_Word NonCanon_8,
  MR_Integer Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  {
    MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
    MR_Word STATE_VARIABLE_Rs_24_24;
    MR_Word TypeClassInfo_for_op_table_34;
    MR_Integer Var_18;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
    MR_Box conv2_Var_18;

    if (succeeded)
    {
      TypeClassInfo_for_op_table_34 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_34)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
      if (succeeded)
      {
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12))));
        conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_34)), ((MR_Box) ((MR_Integer) 0)));
        Var_18 = ((MR_Integer) (conv2_Var_18));
        succeeded = (Priority_10 <= Var_18);
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_String Var_21;
      MR_Word STATE_VARIABLE_Rs_22_22;

      {
        STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
      }
      Var_21 = mercury__term_io__quoted_atom_agt_2_f_0(Functor_11, (MR_Integer) 1);
      {
        STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_20_20));
      }
      {
        STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_22_22));
      }
    }
    else
    {
      MR_String Var_25;

      Var_25 = mercury__term_io__quoted_atom_agt_2_f_0(Functor_11, (MR_Integer) 0);
      {
        STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
      }
    }
    if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_24_24;
    else
    {
      MR_Word TypeInfo_15_57;
      MR_Word Y_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
      MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_29_29;
      MR_Word STATE_VARIABLE_Rs_30_30;
      MR_Word STATE_VARIABLE_Rs_31_31;
      MR_Integer Priority_54;
      MR_Box Var_55;

      {
        STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_24_24));
      }
      Priority_54 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_55 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_57, Y_14);
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_57, NonCanon_8, Priority_54, Var_55, STATE_VARIABLE_Rs_29_29, &STATE_VARIABLE_Rs_30_30);
      mercury__string__to_string__term_args_to_revstrings_5_p_0(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_30_30, &STATE_VARIABLE_Rs_31_31);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Rs_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_31_31));
      }
    }
  }
}

MR_String MR_CALL 
mercury__string__to_string__string_ops_impl_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box Univ_5)
{
  {
    MR_String String_6;

    mercury__string__to_string__string_ops_noncanon_impl_4_p_1(TypeInfo_for_T_8, (MR_Integer) 1, Univ_5, &String_6);
    return String_6;
  }
}

MR_String MR_CALL 
mercury__string__to_string__string_impl_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box Univ_3)
{
  {
    MR_String String_4;

    mercury__string__to_string__string_ops_noncanon_impl_4_p_1(TypeInfo_for_T_7, (MR_Integer) 1, Univ_3, &String_4);
    return String_4;
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  {
    MR_Word RevStrings_9;
    MR_Word Var_11;
    MR_Integer Priority_20;
    MR_Integer Var_21;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_Var_21;

    conv1_Var_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_21 = ((MR_Integer) (conv1_Var_21));
    Priority_20 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_12, NonCanon_5, Priority_20, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
    *String_8 = mercury__string__append_list_1_f_0(Var_11);
  }
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_1(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_8, (MR_Integer) 0))));
    MR_Box Var_13 = (MR_hl_field(MR_mktag(0), X_8, (MR_Integer) 1));

    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_15, NonCanon_6, (MR_Integer) 1000, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
  }
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_28_28, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_42;
      MR_Word STATE_VARIABLE_Rs_21_21;
      MR_Word STATE_VARIABLE_Rs_22_22;
      MR_Integer Priority_39;
      MR_Box Var_40;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_39 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_40 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_42, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_42, NonCanon_6, Priority_39, Var_40, STATE_VARIABLE_Rs_21_21, &STATE_VARIABLE_Rs_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_Univ_8 = ListTail_14;
      next_value_of_STATE_VARIABLE_Rs_0_15 = STATE_VARIABLE_Rs_22_22;
      Univ_8 = next_value_of_Univ_8;
      STATE_VARIABLE_Rs_0_15 = next_value_of_STATE_VARIABLE_Rs_0_15;
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_10, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_Rs_16 = STATE_VARIABLE_Rs_0_15;
      else
      {
        MR_Word TypeInfo_29_29;
        MR_Word STATE_VARIABLE_Rs_25_25;
        MR_Box Var_26;
        MR_Integer Priority_52;
        MR_Integer Var_53;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Var_53;

        {
          STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_29_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0))));
        Var_26 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
        conv1_Var_53 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Var_53 = ((MR_Integer) (conv1_Var_53));
        Priority_52 = (MR_Integer) ((MR_Unsigned) Var_53 + (MR_Unsigned) (MR_Integer) 1);
        mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_29_29, NonCanon_6, Priority_52, Var_26, STATE_VARIABLE_Rs_25_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_16,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Integer Priority_10;
    MR_Integer Var_13;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_Var_13;

    conv1_Var_13 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_13 = ((MR_Integer) (conv1_Var_13));
    Priority_10 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_16, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_1(
  MR_Word TypeInfo_for_T_109,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Box conv0_String_12;

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) (conv0_String_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_36;

      Var_36 = mercury__term_io__quoted_string_1_f_0(String_12);
      mercury__string__to_string__add_revstring_3_p_0(Var_36, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Char Char_13;
      MR_Box conv1_Char_13;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String Var_38;

        Var_38 = mercury__term_io__quoted_char_1_f_0(Char_13);
        mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
      {
        MR_Integer Int_14;
        MR_Box conv2_Int_14;

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) (conv2_Int_14));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_40;

          Var_40 = mercury__string__int_to_string_1_f_0(Int_14);
          mercury__string__to_string__add_revstring_3_p_0(Var_40, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
        else
        {
          MR_Unsigned UInt_15;
          MR_Box conv3_UInt_15;

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) (conv3_UInt_15));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_String Var_42;
            MR_String Var_44;

            Var_44 = mercury__string__uint_to_string_1_f_0(UInt_15);
            Var_42 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) "u");
            mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
          else
          {
            int8_t Int8_16;
            MR_Box conv4_Int8_16;

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
            if (succeeded)
            {
              Int8_16 = ((int8_t) (MR_Word) conv4_Int8_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_46;
              MR_String Var_48;

              Var_48 = mercury__string__int8_to_string_1_f_0(Int8_16);
              Var_46 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "i8");
              mercury__string__to_string__add_revstring_3_p_0(Var_46, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
            }
            else
            {
              uint8_t UInt8_17;
              MR_Box conv5_UInt8_17;

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
              if (succeeded)
              {
                UInt8_17 = ((uint8_t) (MR_Word) conv5_UInt8_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_50;
                MR_String Var_52;

                Var_52 = mercury__string__uint8_to_string_1_f_0(UInt8_17);
                Var_50 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) "u8");
                mercury__string__to_string__add_revstring_3_p_0(Var_50, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
              }
              else
              {
                int16_t Int16_18;
                MR_Box conv6_Int16_18;

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
                if (succeeded)
                {
                  Int16_18 = ((int16_t) (MR_Word) conv6_Int16_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_54;
                  MR_String Var_56;

                  Var_56 = mercury__string__int16_to_string_1_f_0(Int16_18);
                  Var_54 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) "i16");
                  mercury__string__to_string__add_revstring_3_p_0(Var_54, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                }
                else
                {
                  uint16_t UInt16_19;
                  MR_Box conv7_UInt16_19;

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
                  if (succeeded)
                  {
                    UInt16_19 = ((uint16_t) (MR_Word) conv7_UInt16_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_String Var_58;
                    MR_String Var_60;

                    Var_60 = mercury__string__uint16_to_string_1_f_0(UInt16_19);
                    Var_58 = mercury__string__f_43_43_2_f_0(Var_60, (MR_String) "u16");
                    mercury__string__to_string__add_revstring_3_p_0(Var_58, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                  }
                  else
                  {
                    int32_t Int32_20;
                    MR_Box conv8_Int32_20;

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
                    if (succeeded)
                    {
                      Int32_20 = ((int32_t) (MR_Word) conv8_Int32_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_String Var_62;
                      MR_String Var_64;

                      Var_64 = mercury__string__int32_to_string_1_f_0(Int32_20);
                      Var_62 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "i32");
                      mercury__string__to_string__add_revstring_3_p_0(Var_62, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                    }
                    else
                    {
                      uint32_t UInt32_21;
                      MR_Box conv9_UInt32_21;

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
                      if (succeeded)
                      {
                        UInt32_21 = ((uint32_t) (MR_Word) conv9_UInt32_21);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_String Var_66;
                        MR_String Var_68;

                        Var_68 = mercury__string__uint32_to_string_1_f_0(UInt32_21);
                        Var_66 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) "u32");
                        mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                      }
                      else
                      {
                        MR_Float Float_22;
                        MR_Box conv10_Float_22;

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
                        if (succeeded)
                        {
                          Float_22 = MR_unbox_float(conv10_Float_22);
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          MR_String Var_70;

                          Var_70 = mercury__string__float_to_string_1_f_0(Float_22);
                          mercury__string__to_string__add_revstring_3_p_0(Var_70, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                        }
                        else
                        {
                          MR_Box Bitmap_23;
                          MR_Box conv11_Bitmap_23;

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
                          if (succeeded)
                          {
                            Bitmap_23 = ((MR_Box) (conv11_Bitmap_23));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            MR_String Var_72;
                            MR_String Var_74;

                            Var_74 = mercury__bitmap__to_string_1_f_0(Bitmap_23);
                            Var_72 = mercury__term_io__quoted_string_1_f_0(Var_74);
                            mercury__string__to_string__add_revstring_3_p_0(Var_72, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                          }
                          else
                          {
                            MR_Word TypeDesc_24;
                            MR_Box conv12_TypeDesc_24;

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
                            if (succeeded)
                            {
                              TypeDesc_24 = ((MR_Word) (conv12_TypeDesc_24));
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                              mercury__string__to_string__type_desc_to_revstrings_3_p_0(TypeDesc_24, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                            else
                            {
                              MR_Word TypeCtorDesc_25;
                              MR_Box conv13_TypeCtorDesc_25;

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
                              if (succeeded)
                              {
                                TypeCtorDesc_25 = ((MR_Word) (conv13_TypeCtorDesc_25));
                                succeeded = MR_TRUE;
                              }
                              if (succeeded)
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(TypeCtorDesc_25, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                              else
                              {
                                MR_Word C_Pointer_26;
                                MR_Box conv14_C_Pointer_26;

                                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
                                if (succeeded)
                                {
                                  C_Pointer_26 = ((MR_Word) (conv14_C_Pointer_26));
                                  succeeded = MR_TRUE;
                                }
                                if (succeeded)
                                {
                                  MR_String Var_77;

                                  Var_77 = mercury__string__c_pointer_to_string_1_f_0(C_Pointer_26);
                                  mercury__string__to_string__add_revstring_3_p_0(Var_77, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                }
                                else
                                {
                                  MR_Word ElemType_29;
                                  MR_Word TypeCtor_27;
                                  MR_Word ArgTypes_28;
                                  MR_Word Var_79;
                                  MR_Word Var_80;
                                  MR_String Var_81;
                                  MR_String Var_82;

                                  Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                  succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_28, (MR_Integer) 0))));
                                    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_28, (MR_Integer) 1))));
                                    succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_81 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_27);
                                      succeeded = (strcmp(Var_81, (MR_String) "array") == 0);
                                      if (succeeded)
                                      {
                                        Var_82 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_27);
                                        succeeded = (strcmp(Var_82, (MR_String) "array") == 0);
                                      }
                                    }
                                  }
                                  if (succeeded)
                                  {
                                    MR_Word TypeInfo_125_125;
                                    MR_Word TypeInfo_127_127;
                                    MR_ArrayPtr Array_31;
                                    MR_Box conv15_Array_31;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_125_125, ElemType_29);
                                    {
                                      TypeInfo_127_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), TypeInfo_127_127, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                      MR_hl_field(MR_mktag(0), TypeInfo_127_127, 1) = ((MR_Box) (TypeInfo_125_125));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, TypeInfo_127_127, X_10, &conv15_Array_31);
                                    Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                    mercury__string__to_string__array_to_revstrings_5_p_1(TypeInfo_125_125, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                  }
                                  else
                                  {
                                    MR_Word ElemType_107;
                                    MR_Word Var_84;
                                    MR_Word Var_85;
                                    MR_String Var_86;
                                    MR_String Var_87;
                                    MR_Word TypeCtor_95;
                                    MR_Word ArgTypes_96;

                                    Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                    succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      ElemType_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_96, (MR_Integer) 0))));
                                      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_96, (MR_Integer) 1))));
                                      succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_86 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_95);
                                        succeeded = (strcmp(Var_86, (MR_String) "version_array") == 0);
                                        if (succeeded)
                                        {
                                          Var_87 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_95);
                                          succeeded = (strcmp(Var_87, (MR_String) "version_array") == 0);
                                        }
                                      }
                                    }
                                    if (succeeded)
                                    {
                                      MR_Word TypeInfo_128_128;
                                      MR_Word TypeInfo_130_130;
                                      MR_Box VersionArray_32;
                                      MR_Box conv16_VersionArray_32;

                                      mercury__type_desc__has_type_2_p_0(&TypeInfo_128_128, ElemType_107);
                                      {
                                        TypeInfo_130_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), TypeInfo_130_130, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                        MR_hl_field(MR_mktag(0), TypeInfo_130_130, 1) = ((MR_Box) (TypeInfo_128_128));
                                      }
                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, TypeInfo_130_130, X_10, &conv16_VersionArray_32);
                                      VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                      mercury__string__to_string__version_array_to_revstrings_5_p_1(TypeInfo_128_128, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                    }
                                    else
                                    {
                                      MR_Word Var_89;
                                      MR_Word Var_90;
                                      MR_String Var_91;
                                      MR_String Var_92;
                                      MR_Word TypeCtor_98;
                                      MR_Word ArgTypes_99;

                                      Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_109);
                                      mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                      succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_99, (MR_Integer) 1))));
                                        succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          Var_91 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_98);
                                          succeeded = (strcmp(Var_91, (MR_String) "type_info") == 0);
                                          if (succeeded)
                                          {
                                            Var_92 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_98);
                                            succeeded = (strcmp(Var_92, (MR_String) "private_builtin") == 0);
                                          }
                                        }
                                      }
                                      if (succeeded)
                                      {
                                        MR_Word PrivateBuiltinTypeInfo_33;
                                        MR_Box conv17_PrivateBuiltinTypeInfo_33;

                                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_109, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                        PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                        mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                      }
                                      else
                                        mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(TypeInfo_for_T_109, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(
  MR_Word TypeInfo_for_T_126,
  MR_Word NonCanon_7,
  MR_Integer Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_36,
  MR_Word * STATE_VARIABLE_Rs_37)
{
  {
    MR_bool succeeded;
    MR_String Functor_12;
    MR_Word Args_14;
    MR_Integer _Arity_13;
    MR_Word ListHead_15;
    MR_Word ListTail_16;
    MR_Word Var_38;
    MR_Word Var_39;

    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_126, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
    succeeded = (strcmp(Functor_12, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
        succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
          Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1))));
          succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Rs_41_41;
      MR_Word STATE_VARIABLE_Rs_42_42;
      MR_Word STATE_VARIABLE_Rs_43_43;

      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_41_41);
      mercury__string__to_string__arg_to_revstrings_5_p_1(NonCanon_7, ListHead_15, STATE_VARIABLE_Rs_41_41, &STATE_VARIABLE_Rs_42_42);
      mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_42_42, &STATE_VARIABLE_Rs_43_43);
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", STATE_VARIABLE_Rs_43_43, STATE_VARIABLE_Rs_37);
    }
    else
    {
      succeeded = (strcmp(Functor_12, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
      }
      else
      {
        succeeded = (strcmp(Functor_12, (MR_String) "{}") == 0);
        if (succeeded)
          if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
          }
          else
          {
            MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));

            if ((Var_138 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word TypeInfo_127_127;
              MR_Word STATE_VARIABLE_Rs_56_56;
              MR_Box Var_57;
              MR_Word STATE_VARIABLE_Rs_58_58;

              mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_56_56);
              Var_57 = mercury__univ__univ_value_1_f_0(&TypeInfo_127_127, Var_139);
              mercury__string__to_string__value_to_revstrings_5_p_1(TypeInfo_127_127, NonCanon_7, Var_57, STATE_VARIABLE_Rs_56_56, &STATE_VARIABLE_Rs_58_58);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_58_58, STATE_VARIABLE_Rs_37);
            }
            else
            {
              MR_Word STATE_VARIABLE_Rs_49_49;
              MR_Word STATE_VARIABLE_Rs_50_50;
              MR_Word STATE_VARIABLE_Rs_51_51;

              mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_49_49);
              mercury__string__to_string__arg_to_revstrings_5_p_1(NonCanon_7, Var_139, STATE_VARIABLE_Rs_49_49, &STATE_VARIABLE_Rs_50_50);
              mercury__string__to_string__term_args_to_revstrings_5_p_1(NonCanon_7, Var_138, STATE_VARIABLE_Rs_50_50, &STATE_VARIABLE_Rs_51_51);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_51_51, STATE_VARIABLE_Rs_37);
            }
          }
        else
        {
          MR_Word Arg_22;
          MR_Word Var_63;

          succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Arg_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
            Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23;
            MR_Word OpAssoc_24;

            succeeded = mercury__ops__lookup_prefix_op_4_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_23, &OpAssoc_24);
            if (succeeded)
            {
              MR_Word TypeInfo_129_129;
              MR_Integer NewPriority_25;
              MR_Word STATE_VARIABLE_Rs_65_65;
              MR_String Var_66;
              MR_Word STATE_VARIABLE_Rs_67_67;
              MR_Word STATE_VARIABLE_Rs_69_69;
              MR_Box Var_70;
              MR_Word STATE_VARIABLE_Rs_71_71;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_23, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_65_65);
              Var_66 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_65_65, &STATE_VARIABLE_Rs_67_67);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_67_67, &STATE_VARIABLE_Rs_69_69);
              mercury__string__to_string__adjust_priority_3_p_0(OpPriority_23, OpAssoc_24, &NewPriority_25);
              Var_70 = mercury__univ__univ_value_1_f_0(&TypeInfo_129_129, Arg_22);
              mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_129_129, NonCanon_7, NewPriority_25, Var_70, STATE_VARIABLE_Rs_69_69, &STATE_VARIABLE_Rs_71_71);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_23, STATE_VARIABLE_Rs_71_71, STATE_VARIABLE_Rs_37);
            }
            else
            {
              MR_Integer OpPriority_120;
              MR_Word OpAssoc_121;

              succeeded = mercury__ops__lookup_postfix_op_4_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_120, &OpAssoc_121);
              if (succeeded)
              {
                MR_Word TypeInfo_131_131;
                MR_Word STATE_VARIABLE_Rs_75_75;
                MR_Box Var_76;
                MR_Word STATE_VARIABLE_Rs_77_77;
                MR_Word STATE_VARIABLE_Rs_79_79;
                MR_String Var_80;
                MR_Word STATE_VARIABLE_Rs_81_81;
                MR_Integer NewPriority_119;

                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_120, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_75_75);
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_120, OpAssoc_121, &NewPriority_119);
                Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_131_131, Arg_22);
                mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_131_131, NonCanon_7, NewPriority_119, Var_76, STATE_VARIABLE_Rs_75_75, &STATE_VARIABLE_Rs_77_77);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_77_77, &STATE_VARIABLE_Rs_79_79);
                Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_79_79, &STATE_VARIABLE_Rs_81_81);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_120, STATE_VARIABLE_Rs_81_81, STATE_VARIABLE_Rs_37);
              }
              else
                mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
            }
          }
          else
          {
            MR_Word Arg1_26;
            MR_Word Arg2_27;
            MR_Word Var_85;
            MR_Word Var_86;

            succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Arg1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
              Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
              succeeded = (Var_85 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Arg2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 0))));
                Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 1))));
                succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              MR_Word LeftAssoc_28;
              MR_Word RightAssoc_29;
              MR_Integer OpPriority_124;

              succeeded = mercury__ops__lookup_infix_op_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_124, &LeftAssoc_28, &RightAssoc_29);
              if (succeeded)
              {
                MR_Word TypeInfo_133_133;
                MR_Word TypeInfo_134_134;
                MR_Integer LeftPriority_30;
                MR_Integer RightPriority_31;
                MR_Word STATE_VARIABLE_Rs_88_88;
                MR_Box Var_89;
                MR_Word STATE_VARIABLE_Rs_90_90;
                MR_Word STATE_VARIABLE_Rs_92_92;
                MR_Box Var_99;
                MR_Word STATE_VARIABLE_Rs_100_100;

                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_124, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_88_88);
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_124, LeftAssoc_28, &LeftPriority_30);
                Var_89 = mercury__univ__univ_value_1_f_0(&TypeInfo_133_133, Arg1_26);
                mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_133_133, NonCanon_7, LeftPriority_30, Var_89, STATE_VARIABLE_Rs_88_88, &STATE_VARIABLE_Rs_90_90);
                succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
                if (succeeded)
                {
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_92_92);
                }
                else
                {
                  MR_Word STATE_VARIABLE_Rs_94_94;
                  MR_String Var_95;
                  MR_Word STATE_VARIABLE_Rs_96_96;

                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_94_94);
                  Var_95 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                  mercury__string__to_string__add_revstring_3_p_0(Var_95, STATE_VARIABLE_Rs_94_94, &STATE_VARIABLE_Rs_96_96);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_96_96, &STATE_VARIABLE_Rs_92_92);
                }
                mercury__string__to_string__adjust_priority_3_p_0(OpPriority_124, RightAssoc_29, &RightPriority_31);
                Var_99 = mercury__univ__univ_value_1_f_0(&TypeInfo_134_134, Arg2_27);
                mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_134_134, NonCanon_7, RightPriority_31, Var_99, STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_100_100);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_124, STATE_VARIABLE_Rs_100_100, STATE_VARIABLE_Rs_37);
              }
              else
              {
                MR_Word FirstAssoc_32;
                MR_Word SecondAssoc_33;
                MR_Integer OpPriority_123;

                succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpPriority_123, &FirstAssoc_32, &SecondAssoc_33);
                if (succeeded)
                {
                  MR_Word TypeInfo_136_136;
                  MR_Word TypeInfo_137_137;
                  MR_Integer FirstPriority_34;
                  MR_Integer SecondPriority_35;
                  MR_Word STATE_VARIABLE_Rs_104_104;
                  MR_String Var_105;
                  MR_Word STATE_VARIABLE_Rs_106_106;
                  MR_Word STATE_VARIABLE_Rs_108_108;
                  MR_Box Var_109;
                  MR_Word STATE_VARIABLE_Rs_110_110;
                  MR_Word STATE_VARIABLE_Rs_112_112;
                  MR_Box Var_113;
                  MR_Word STATE_VARIABLE_Rs_114_114;

                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", Priority_9, OpPriority_123, STATE_VARIABLE_Rs_0_36, &STATE_VARIABLE_Rs_104_104);
                  Var_105 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                  mercury__string__to_string__add_revstring_3_p_0(Var_105, STATE_VARIABLE_Rs_104_104, &STATE_VARIABLE_Rs_106_106);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_106_106, &STATE_VARIABLE_Rs_108_108);
                  mercury__string__to_string__adjust_priority_3_p_0(OpPriority_123, FirstAssoc_32, &FirstPriority_34);
                  Var_109 = mercury__univ__univ_value_1_f_0(&TypeInfo_136_136, Arg1_26);
                  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_136_136, NonCanon_7, FirstPriority_34, Var_109, STATE_VARIABLE_Rs_108_108, &STATE_VARIABLE_Rs_110_110);
                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_110_110, &STATE_VARIABLE_Rs_112_112);
                  mercury__string__to_string__adjust_priority_3_p_0(OpPriority_123, SecondAssoc_33, &SecondPriority_35);
                  Var_113 = mercury__univ__univ_value_1_f_0(&TypeInfo_137_137, Arg2_27);
                  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_137_137, NonCanon_7, SecondPriority_35, Var_113, STATE_VARIABLE_Rs_112_112, &STATE_VARIABLE_Rs_114_114);
                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", Priority_9, OpPriority_123, STATE_VARIABLE_Rs_114_114, STATE_VARIABLE_Rs_37);
                }
                else
                  mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, Priority_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_36, STATE_VARIABLE_Rs_37);
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_1(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_5 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_33;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Integer Priority_30;
      MR_Box Var_31;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_30 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_31 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_33, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_33, NonCanon_1, Priority_30, Var_31, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_20_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word STATE_VARIABLE_Rs_14_14;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_Rs_16_16;
    MR_Integer V_8_40;
    MR_Integer V_4_44;
    MR_Integer Priority_52;
    MR_Integer Var_53;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_53;

    {
      STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
    }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, Array_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 V_4_44  = N;
}
    V_8_40 = (MR_Integer) ((MR_Unsigned) V_4_44 - (MR_Unsigned) (MR_Integer) 1);
    Var_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(TypeInfo_for_T_19, Array_8, (MR_Word) ((MR_Unsigned) 0U), V_8_40);
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_53 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_53 = ((MR_Integer) (conv1_Var_53));
    Priority_52 = (MR_Integer) ((MR_Unsigned) Var_53 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_21_21, NonCanon_6, Priority_52, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, &STATE_VARIABLE_Rs_16_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word STATE_VARIABLE_Rs_14_14;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_Rs_16_16;
    MR_Integer Priority_32;
    MR_Integer Var_33;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_33;

    {
      STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
    }
    mercury__array__to_list_2_p_0(TypeInfo_for_T_19, Array_8, &Var_15);
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_33 = ((MR_Integer) (conv1_Var_33));
    Priority_32 = (MR_Integer) ((MR_Unsigned) Var_33 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_21_21, NonCanon_6, Priority_32, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, &STATE_VARIABLE_Rs_16_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
  MR_Word NonCanon_8,
  MR_Integer Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  {
    MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
    MR_Word STATE_VARIABLE_Rs_24_24;
    MR_Word TypeClassInfo_for_op_table_34;
    MR_Integer Var_18;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
    MR_Box conv2_Var_18;

    if (succeeded)
    {
      TypeClassInfo_for_op_table_34 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_34)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
      if (succeeded)
      {
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12))));
        conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_34)), ((MR_Box) ((MR_Integer) 0)));
        Var_18 = ((MR_Integer) (conv2_Var_18));
        succeeded = (Priority_10 <= Var_18);
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_String Var_21;
      MR_Word STATE_VARIABLE_Rs_22_22;

      {
        STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
      }
      Var_21 = mercury__term_io__quoted_atom_agt_2_f_0(Functor_11, (MR_Integer) 1);
      {
        STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_20_20));
      }
      {
        STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_22_22));
      }
    }
    else
    {
      MR_String Var_25;

      Var_25 = mercury__term_io__quoted_atom_agt_2_f_0(Functor_11, (MR_Integer) 0);
      {
        STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
      }
    }
    if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_24_24;
    else
    {
      MR_Word TypeInfo_15_57;
      MR_Word Y_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
      MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_29_29;
      MR_Word STATE_VARIABLE_Rs_30_30;
      MR_Word STATE_VARIABLE_Rs_31_31;
      MR_Integer Priority_54;
      MR_Box Var_55;

      {
        STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_24_24));
      }
      Priority_54 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
      Var_55 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_57, Y_14);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_57, NonCanon_8, Priority_54, Var_55, STATE_VARIABLE_Rs_29_29, &STATE_VARIABLE_Rs_30_30);
      mercury__string__to_string__term_args_to_revstrings_5_p_1(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_30_30, &STATE_VARIABLE_Rs_31_31);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Rs_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_31_31));
      }
    }
  }
}

static void MR_CALL 
mercury__string__to_string__det_dynamic_cast_2_p_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Box X_3,
  MR_Box * Y_4)
{
  {
    MR_Word Var_5;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T1_6, X_3, &Var_5);
    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T2_7, Var_5, Y_4);
  }
}

static void MR_CALL 
mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(
  MR_Word PrivateBuiltinTypeInfo_4,
  MR_Word STATE_VARIABLE_Rs_0_8,
  MR_Word * STATE_VARIABLE_Rs_9)
{
  {
    MR_Word TypeInfo_6 = (MR_Word) (PrivateBuiltinTypeInfo_4);
    MR_Word TypeDesc_7;
    MR_String Var_15;
    MR_String Var_17;

    mercury__type_desc__type_info_to_type_desc_2_p_0(TypeInfo_6, &TypeDesc_7);
    Var_17 = mercury__type_desc__type_name_1_f_0(TypeDesc_7);
    Var_15 = mercury__term_io__quoted_atom_agt_2_f_0(Var_17, (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_8));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(
  MR_Word TypeCtorDesc_4,
  MR_Word STATE_VARIABLE_Rs_0_12,
  MR_Word * STATE_VARIABLE_Rs_13)
{
  {
    MR_bool succeeded;
    MR_String ModuleName_6;
    MR_String Name0_7;
    MR_Integer Arity0_8;
    MR_String Name_9;
    MR_Integer Arity_10;
    MR_String String_11;

{
#define MR_PROC_LABEL mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtorDesc_4 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 ModuleName_6  = TypeCtorModuleName;
	 Name0_7  = TypeCtorName;
	 Arity0_8  = TypeCtorArity;
}
    Name_9 = mercury__term_io__quoted_atom_agt_2_f_0(Name0_7, (MR_Integer) 1);
    succeeded = (strcmp(ModuleName_6, (MR_String) "builtin") == 0);
    if (succeeded)
      succeeded = (strcmp(Name_9, (MR_String) "func") == 0);
    if (succeeded)
    {
      Arity_10 = (MR_Integer) ((MR_Unsigned) Arity0_8 - (MR_Unsigned) (MR_Integer) 1);
    }
    else
      Arity_10 = Arity0_8;
    succeeded = (strcmp(ModuleName_6, (MR_String) "builtin") == 0);
    if (succeeded)
    {
      MR_String Var_30;
      MR_String Var_38;

      mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Arity_10, &Var_30);
      mercury__string__append_3_p_2((MR_String) "/", Var_30, &Var_38);
      mercury__string__append_3_p_2(Name_9, Var_38, &String_11);
    }
    else
    {
      MR_String Var_39;
      MR_String Var_47;
      MR_String Var_48;
      MR_String Var_50;

      mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Arity_10, &Var_39);
      mercury__string__append_3_p_2((MR_String) "/", Var_39, &Var_47);
      mercury__string__append_3_p_2(Name_9, Var_47, &Var_48);
      mercury__string__append_3_p_2((MR_String) ".", Var_48, &Var_50);
      String_11 = mercury__string__f_43_43_2_f_0(ModuleName_6, Var_50);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_12));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__type_desc_to_revstrings_3_p_0(
  MR_Word TypeDesc_4,
  MR_Word STATE_VARIABLE_Rs_0_6,
  MR_Word * STATE_VARIABLE_Rs_7)
{
  {
    MR_String Var_8;
    MR_String Var_10;

    Var_10 = mercury__type_desc__type_name_1_f_0(TypeDesc_4);
    Var_8 = mercury__term_io__quoted_atom_agt_2_f_0(Var_10, (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_6));
    }
  }
}

static MR_Word MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word TypeInfo_for_T1_1_16,
  MR_Box V_7_7,
  MR_Word V_8_8,
  MR_Integer V_9_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_Integer) 0 <= V_9_9);
    MR_Word V_5_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word V_11_12;
      MR_Integer V_13_13;
      MR_Box V_12_14;
      MR_Word next_value_of_V_8_8;
      MR_Integer next_value_of_V_9_9;

      V_12_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_1_16, V_7_7, V_9_9);
      {
        V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_11_12, 0) = V_12_14;
        MR_hl_field(MR_mktag(1), V_11_12, 1) = ((MR_Box) (V_8_8));
      }
      V_13_13 = (MR_Integer) ((MR_Unsigned) V_9_9 - (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_V_8_8 = V_11_12;
      next_value_of_V_9_9 = V_13_13;
      V_8_8 = next_value_of_V_8_8;
      V_9_9 = next_value_of_V_9_9;
      continue;
    }
    else
      V_5_10 = V_8_8;
    return V_5_10;
    break;
  }
}

static void MR_CALL 
mercury__string__to_string__adjust_priority_3_p_0(
  MR_Integer Priority_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *HeadVar__3_3 = (MR_Integer) ((MR_Unsigned) Priority_1 - (MR_Unsigned) (MR_Integer) 1);
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = Priority_1;
      break;
  }
}

static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
  MR_String String_6,
  MR_Integer Priority_7,
  MR_Integer OpPriority_8,
  MR_Word STATE_VARIABLE_Rs_0_10,
  MR_Word * STATE_VARIABLE_Rs_11)
{
  {
    MR_bool succeeded = (OpPriority_8 > Priority_7);

    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Rs_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_6));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_10));
      }
    else
      *STATE_VARIABLE_Rs_11 = STATE_VARIABLE_Rs_0_10;
  }
}

static MR_Integer MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    return (MR_Integer) 1000;
  }
}

static void MR_CALL 
mercury__string__to_string__add_revstring_3_p_0(
  MR_String String_4,
  MR_Word RevStrings_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__3_3 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_4));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RevStrings_5));
  }
}

static MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__to_string____Unify____revstrings_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__string__to_string____Compare____revstrings_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__string__to_string__init(void)
{
}

void mercury__string__to_string__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__to_string__string__to_string__type_ctor_info_revstrings_0);
}

void mercury__string__to_string__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__string__to_string__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module string.to_string.
