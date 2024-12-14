/*
** Automatically generated from `string.to_string.m'
** by the Mercury compiler,
** version rotd-2024-12-14
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




static const MR_FA_TypeInfo_Struct1 mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0;

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
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35);

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_3(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_3(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
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
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35);

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_2(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_2(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
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
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35);

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_0(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_0(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
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
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35);

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_1(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_1(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
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

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(
  MR_Box HeadVar__2_7,
  MR_Integer HeadVar__3_8,
  MR_Word HeadVar__4_9,
  MR_Word * HeadVar__5_10);

static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
  MR_String String_6,
  MR_Word Priority_7,
  MR_Word OpPrio_8,
  MR_Word STATE_VARIABLE_Rs_0_10,
  MR_Word * STATE_VARIABLE_Rs_11);

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

static /* final */ const MR_Box mercury__string__to_string_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_3[2][4];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__string__to_string_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_2[2][3] = {
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

static /* final */ const MR_Box mercury__string__to_string_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_3[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
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


static const MR_FA_TypeInfo_Struct1 mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

const MR_TypeCtorInfo_Struct mercury__string__to_string__string__to_string__type_ctor_info_revstrings_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__string__to_string____Unify____revstrings_0_0_10001)),
  ((MR_Box) (mercury__string__to_string____Compare____revstrings_0_0_10001)),
  (MR_String) "string.to_string",
  (MR_String) "revstrings",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
}

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
}

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
}

void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_3(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word RevStrings_9;
  MR_Word Var_11;
  MR_Word Priority_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Priority_14;

  conv1_Priority_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_14 = ((MR_Word) (conv1_Priority_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_for_T_12, NonCanon_5, Priority_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
  *String_8 = mercury__string__append_list_1_f_0(Var_11);
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_3(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word Priority_10;
  MR_Box Var_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 15))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(0, X_8, (MR_Integer) 0))));
  Var_13 = (MR_hl_field(0, X_8, (MR_Integer) 1));
  mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_15, NonCanon_6, Priority_10, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
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
    MR_Word TypeInfo_27_27 = ((MR_Word) ((MR_hl_field(0, Univ_8, (MR_Integer) 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(0, Univ_8, (MR_Integer) 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_3(TypeInfo_27_27, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_32;
      MR_Word STATE_VARIABLE_Rs_21_21;
      MR_Word STATE_VARIABLE_Rs_22_22;
      MR_Word Priority_29;
      MR_Box Var_30;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_29 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_30 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_32, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_32, NonCanon_6, Priority_29, Var_30, STATE_VARIABLE_Rs_21_21, &STATE_VARIABLE_Rs_22_22);
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
        MR_Word TypeInfo_28_28;
        MR_Word STATE_VARIABLE_Rs_25_25;
        MR_Box Var_26;
        MR_Word Priority_33;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Priority_33;

        {
          STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(1, STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(0, Univ_8, (MR_Integer) 0))));
        Var_26 = (MR_hl_field(0, Univ_8, (MR_Integer) 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
        conv1_Priority_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Priority_33 = ((MR_Word) (conv1_Priority_33));
        mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_28_28, NonCanon_6, Priority_33, Var_26, STATE_VARIABLE_Rs_25_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_13,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word Priority_10;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_for_T_13, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_3(
  MR_Word TypeInfo_for_T_108,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String String_12;
  MR_Box conv0_String_12;

  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
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

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
    if (succeeded)
    {
      Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_38;

      Var_38 = mercury__term_io__quoted_char_to_string_1_f_0(Char_13);
      mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Integer Int_14;
      MR_Box conv2_Int_14;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
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

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
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

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
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

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
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

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
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

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
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

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
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

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
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

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
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

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
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

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
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

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
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

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
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

                                Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ElemType_29 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 0))));
                                  Var_80 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 1))));
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
                                  MR_Word TypeInfo_124_124;
                                  MR_Word TypeInfo_126_126;
                                  MR_ArrayPtr Array_31;
                                  MR_Box conv15_Array_31;

                                  mercury__type_desc__has_type_2_p_0(&TypeInfo_124_124, ElemType_29);
                                  {
                                    TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(0, TypeInfo_126_126, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                    MR_hl_field(0, TypeInfo_126_126, 1) = ((MR_Box) (TypeInfo_124_124));
                                  }
                                  mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_126_126, X_10, &conv15_Array_31);
                                  Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                  mercury__string__to_string__array_to_revstrings_5_p_3(TypeInfo_124_124, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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

                                  Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                  succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_107 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 0))));
                                    Var_85 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 1))));
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
                                    MR_Word TypeInfo_127_127;
                                    MR_Word TypeInfo_129_129;
                                    MR_Box VersionArray_32;
                                    MR_Box conv16_VersionArray_32;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_127_127, ElemType_107);
                                    {
                                      TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, TypeInfo_129_129, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                      MR_hl_field(0, TypeInfo_129_129, 1) = ((MR_Box) (TypeInfo_127_127));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_129_129, X_10, &conv16_VersionArray_32);
                                    VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                    mercury__string__to_string__version_array_to_revstrings_5_p_3(TypeInfo_127_127, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                  }
                                  else
                                  {
                                    MR_Word Var_89;
                                    MR_Word Var_90;
                                    MR_String Var_91;
                                    MR_String Var_92;
                                    MR_Word TypeCtor_98;
                                    MR_Word ArgTypes_99;

                                    Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                    succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_90 = ((MR_Word) ((MR_hl_field(1, ArgTypes_99, (MR_Integer) 1))));
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

                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                      PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                      mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                    }
                                    else
                                      mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(TypeInfo_for_T_108, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String Functor_12;
  MR_Word Args_14;
  MR_Integer _Arity_13;
  MR_Word STATE_VARIABLE_Rs_43_43;

  mercury__deconstruct__deconstruct_5_p_3(TypeInfo_for_T_157, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((strcmp(Functor_12, (MR_String) "[]") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_43_43);
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_43_43);
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
  {
    MR_Word Var_171 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 1))));
    MR_Word Var_172 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 0))));

    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      if ((Var_171 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeInfo_158_158;
        MR_Word STATE_VARIABLE_Rs_50_50;
        MR_Box Var_51;
        MR_Word STATE_VARIABLE_Rs_52_52;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_50_50);
        Var_51 = mercury__univ__univ_value_1_f_0(&TypeInfo_158_158, Var_172);
        mercury__string__to_string__value_to_revstrings_5_p_3(TypeInfo_158_158, NonCanon_7, Var_51, STATE_VARIABLE_Rs_50_50, &STATE_VARIABLE_Rs_52_52);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_52_52, &STATE_VARIABLE_Rs_43_43);
      }
      else
      {
        MR_Word STATE_VARIABLE_Rs_56_56;
        MR_Word STATE_VARIABLE_Rs_57_57;
        MR_Word STATE_VARIABLE_Rs_58_58;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_56_56);
        mercury__string__to_string__arg_to_revstrings_5_p_3(NonCanon_7, Var_172, STATE_VARIABLE_Rs_56_56, &STATE_VARIABLE_Rs_57_57);
        mercury__string__to_string__term_args_to_revstrings_5_p_3(NonCanon_7, Var_171, STATE_VARIABLE_Rs_57_57, &STATE_VARIABLE_Rs_58_58);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_58_58, &STATE_VARIABLE_Rs_43_43);
      }
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "[|]") == 0))
    {
      MR_Word ListTail_16;
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_39_39;
      MR_Word STATE_VARIABLE_Rs_40_40;
      MR_Word STATE_VARIABLE_Rs_41_41;
      MR_String Var_42;

      succeeded = (Var_171 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListTail_16 = ((MR_Word) ((MR_hl_field(1, Var_171, (MR_Integer) 0))));
        Var_37 = ((MR_Word) ((MR_hl_field(1, Var_171, (MR_Integer) 1))));
        succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_38 = (MR_String) "[";
          mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_39_39);
          mercury__string__to_string__arg_to_revstrings_5_p_3(NonCanon_7, Var_172, STATE_VARIABLE_Rs_39_39, &STATE_VARIABLE_Rs_40_40);
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_40_40, &STATE_VARIABLE_Rs_41_41);
          Var_42 = (MR_String) "]";
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_41_41, &STATE_VARIABLE_Rs_43_43);
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    *STATE_VARIABLE_Rs_35 = STATE_VARIABLE_Rs_43_43;
  else
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
  else
  {
    MR_Word Var_169 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 1))));
    MR_Word Var_170 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 0))));

    if ((Var_169 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpInfos_23;

      succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_23);
      if (succeeded)
      {
        MR_Word OpPrio_24;
        MR_Word GtOrGeA_25;
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, (MR_Integer) 2))));

        succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OpPrio_24 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 0))));
          GtOrGeA_25 = ((MR_Unsigned) ((MR_hl_field(1, Var_62, (MR_Integer) 1))) & (MR_Integer) 1);
          {
            MR_Word TypeInfo_160_160;
            MR_Word MinPrioA_26;
            MR_Word STATE_VARIABLE_Rs_64_64;
            MR_String Var_65;
            MR_Word STATE_VARIABLE_Rs_66_66;
            MR_Word STATE_VARIABLE_Rs_68_68;
            MR_Box Var_69;
            MR_Word STATE_VARIABLE_Rs_70_70;

            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_64_64);
            Var_65 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
            mercury__string__to_string__add_revstring_3_p_0(Var_65, STATE_VARIABLE_Rs_64_64, &STATE_VARIABLE_Rs_66_66);
            mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_66_66, &STATE_VARIABLE_Rs_68_68);
            switch (GtOrGeA_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                MinPrioA_26 = OpPrio_24;
                break;
              case (MR_Integer) 0:
                MinPrioA_26 = mercury__ops__increment_priority_1_f_0(OpPrio_24);
                break;
            }
            Var_69 = mercury__univ__univ_value_1_f_0(&TypeInfo_160_160, Var_170);
            mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_160_160, NonCanon_7, MinPrioA_26, Var_69, STATE_VARIABLE_Rs_68_68, &STATE_VARIABLE_Rs_70_70);
            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_70_70, STATE_VARIABLE_Rs_35);
          }
        }
        else
        {
          MR_Word OpPrio_126;
          MR_Word GtOrGeA_127;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, (MR_Integer) 3))));

          succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_126 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
            GtOrGeA_127 = ((MR_Unsigned) ((MR_hl_field(1, Var_73, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_161_161;
              MR_Word STATE_VARIABLE_Rs_75_75;
              MR_Box Var_76;
              MR_Word STATE_VARIABLE_Rs_77_77;
              MR_Word STATE_VARIABLE_Rs_79_79;
              MR_String Var_80;
              MR_Word STATE_VARIABLE_Rs_81_81;
              MR_Word MinPrioA_125;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_75_75);
              switch (GtOrGeA_127) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_125 = OpPrio_126;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_125 = mercury__ops__increment_priority_1_f_0(OpPrio_126);
                  break;
              }
              Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_161_161, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_161_161, NonCanon_7, MinPrioA_125, Var_76, STATE_VARIABLE_Rs_75_75, &STATE_VARIABLE_Rs_77_77);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_77_77, &STATE_VARIABLE_Rs_79_79);
              Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_79_79, &STATE_VARIABLE_Rs_81_81);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_81_81, STATE_VARIABLE_Rs_35);
            }
          }
          else
            mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, Var_169, (MR_Integer) 1))));
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(1, Var_169, (MR_Integer) 0))));

      if ((Var_173 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OpInfos_140;

        succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_140);
        if (succeeded)
        {
          MR_Word GtOrGeB_28;
          MR_Word OpPrio_137;
          MR_Word GtOrGeA_138;
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, (MR_Integer) 0))));

          succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_137 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
            GtOrGeA_138 = ((((MR_Unsigned) ((MR_hl_field(1, Var_88, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            GtOrGeB_28 = ((MR_Unsigned) ((MR_hl_field(1, Var_88, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_163_163;
              MR_Word TypeInfo_164_164;
              MR_Word MinPrioB_29;
              MR_Word STATE_VARIABLE_Rs_90_90;
              MR_Box Var_91;
              MR_Word STATE_VARIABLE_Rs_92_92;
              MR_Word STATE_VARIABLE_Rs_94_94;
              MR_Box Var_101;
              MR_Word STATE_VARIABLE_Rs_102_102;
              MR_Word MinPrioA_129;

              switch (GtOrGeA_138) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_129 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_129 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              switch (GtOrGeB_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioB_29 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioB_29 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_90_90);
              Var_91 = mercury__univ__univ_value_1_f_0(&TypeInfo_163_163, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_163_163, NonCanon_7, MinPrioA_129, Var_91, STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_92_92);
              succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
              if (succeeded)
                mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_94_94);
              else
              {
                MR_Word STATE_VARIABLE_Rs_96_96;
                MR_String Var_97;
                MR_Word STATE_VARIABLE_Rs_98_98;

                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_96_96);
                Var_97 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_97, STATE_VARIABLE_Rs_96_96, &STATE_VARIABLE_Rs_98_98);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_98_98, &STATE_VARIABLE_Rs_94_94);
              }
              Var_101 = mercury__univ__univ_value_1_f_0(&TypeInfo_164_164, Var_174);
              mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_164_164, NonCanon_7, MinPrioB_29, Var_101, STATE_VARIABLE_Rs_94_94, &STATE_VARIABLE_Rs_102_102);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_102_102, STATE_VARIABLE_Rs_35);
            }
          }
          else
          {
            MR_Word OpPrio_132;
            MR_Word GtOrGeA_133;
            MR_Word GtOrGeB_135;
            MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, (MR_Integer) 1))));

            succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              OpPrio_132 = ((MR_Word) ((MR_hl_field(1, Var_105, (MR_Integer) 0))));
              GtOrGeA_133 = ((((MR_Unsigned) ((MR_hl_field(1, Var_105, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              GtOrGeB_135 = ((MR_Unsigned) ((MR_hl_field(1, Var_105, (MR_Integer) 1))) & (MR_Integer) 1);
              {
                MR_Word TypeInfo_165_165;
                MR_Word TypeInfo_166_166;
                MR_Word STATE_VARIABLE_Rs_107_107;
                MR_String Var_108;
                MR_Word STATE_VARIABLE_Rs_109_109;
                MR_Word STATE_VARIABLE_Rs_111_111;
                MR_Box Var_112;
                MR_Word STATE_VARIABLE_Rs_113_113;
                MR_Word STATE_VARIABLE_Rs_115_115;
                MR_Box Var_116;
                MR_Word STATE_VARIABLE_Rs_117_117;
                MR_Word MinPrioA_130;
                MR_Word MinPrioB_131;

                switch (GtOrGeA_133) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioA_130 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioA_130 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                switch (GtOrGeB_135) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioB_131 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioB_131 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_107_107);
                Var_108 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_108, STATE_VARIABLE_Rs_107_107, &STATE_VARIABLE_Rs_109_109);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_109_109, &STATE_VARIABLE_Rs_111_111);
                Var_112 = mercury__univ__univ_value_1_f_0(&TypeInfo_165_165, Var_170);
                mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_165_165, NonCanon_7, MinPrioA_130, Var_112, STATE_VARIABLE_Rs_111_111, &STATE_VARIABLE_Rs_113_113);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_113_113, &STATE_VARIABLE_Rs_115_115);
                Var_116 = mercury__univ__univ_value_1_f_0(&TypeInfo_166_166, Var_174);
                mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_166_166, NonCanon_7, MinPrioB_131, Var_116, STATE_VARIABLE_Rs_115_115, &STATE_VARIABLE_Rs_117_117);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_117_117, STATE_VARIABLE_Rs_35);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
        }
        else
          mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_3(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfSTATE_VARIABLE_Rs_25 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
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
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
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

void MR_CALL 
mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3(
  MR_Word TypeInfo_for_T_108,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_135)
{
  MR_bool succeeded;
  MR_String String_12;
  MR_Box conv0_String_12;

  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
  if (succeeded)
  {
    String_12 = ((MR_String) (conv0_String_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_35;
    MR_String Var_36;

    Var_36 = mercury__term_io__quoted_string_1_f_0(String_12);
    mercury__string__to_string__add_revstring_3_p_0(Var_36, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_35);
    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_35;
  }
  else
  {
    MR_Char Char_13;
    MR_Box conv1_Char_13;

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
    if (succeeded)
    {
      Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_136;

      Var_38 = mercury__term_io__quoted_char_to_string_1_f_0(Char_13);
      mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_136);
      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_136;
    }
    else
    {
      MR_Integer Int_14;
      MR_Box conv2_Int_14;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
      if (succeeded)
      {
        Int_14 = ((MR_Integer) (conv2_Int_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String Var_40;
        MR_Word STATE_VARIABLE_Rs_137;

        Var_40 = mercury__string__int_to_string_1_f_0(Int_14);
        mercury__string__to_string__add_revstring_3_p_0(Var_40, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_137);
        *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_137;
      }
      else
      {
        MR_Unsigned UInt_15;
        MR_Box conv3_UInt_15;

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
        if (succeeded)
        {
          UInt_15 = ((MR_Unsigned) (conv3_UInt_15));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_42;
          MR_String Var_44;
          MR_Word STATE_VARIABLE_Rs_138;

          Var_44 = mercury__string__uint_to_string_1_f_0(UInt_15);
          Var_42 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) "u");
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_138);
          *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_138;
        }
        else
        {
          int8_t Int8_16;
          MR_Box conv4_Int8_16;

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
          if (succeeded)
          {
            Int8_16 = ((int8_t) (MR_Word) conv4_Int8_16);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_String Var_46;
            MR_String Var_48;
            MR_Word STATE_VARIABLE_Rs_139;

            Var_48 = mercury__string__int8_to_string_1_f_0(Int8_16);
            Var_46 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "i8");
            mercury__string__to_string__add_revstring_3_p_0(Var_46, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_139);
            *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_139;
          }
          else
          {
            uint8_t UInt8_17;
            MR_Box conv5_UInt8_17;

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
            if (succeeded)
            {
              UInt8_17 = ((uint8_t) (MR_Word) conv5_UInt8_17);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_50;
              MR_String Var_52;
              MR_Word STATE_VARIABLE_Rs_140;

              Var_52 = mercury__string__uint8_to_string_1_f_0(UInt8_17);
              Var_50 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) "u8");
              mercury__string__to_string__add_revstring_3_p_0(Var_50, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_140);
              *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_140;
            }
            else
            {
              int16_t Int16_18;
              MR_Box conv6_Int16_18;

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
              if (succeeded)
              {
                Int16_18 = ((int16_t) (MR_Word) conv6_Int16_18);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_54;
                MR_String Var_56;
                MR_Word STATE_VARIABLE_Rs_141;

                Var_56 = mercury__string__int16_to_string_1_f_0(Int16_18);
                Var_54 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) "i16");
                mercury__string__to_string__add_revstring_3_p_0(Var_54, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_141);
                *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_141;
              }
              else
              {
                uint16_t UInt16_19;
                MR_Box conv7_UInt16_19;

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
                if (succeeded)
                {
                  UInt16_19 = ((uint16_t) (MR_Word) conv7_UInt16_19);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_58;
                  MR_String Var_60;
                  MR_Word STATE_VARIABLE_Rs_142;

                  Var_60 = mercury__string__uint16_to_string_1_f_0(UInt16_19);
                  Var_58 = mercury__string__f_43_43_2_f_0(Var_60, (MR_String) "u16");
                  mercury__string__to_string__add_revstring_3_p_0(Var_58, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_142);
                  *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_142;
                }
                else
                {
                  int32_t Int32_20;
                  MR_Box conv8_Int32_20;

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
                  if (succeeded)
                  {
                    Int32_20 = ((int32_t) (MR_Word) conv8_Int32_20);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_String Var_62;
                    MR_String Var_64;
                    MR_Word STATE_VARIABLE_Rs_143;

                    Var_64 = mercury__string__int32_to_string_1_f_0(Int32_20);
                    Var_62 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "i32");
                    mercury__string__to_string__add_revstring_3_p_0(Var_62, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_143);
                    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_143;
                  }
                  else
                  {
                    uint32_t UInt32_21;
                    MR_Box conv9_UInt32_21;

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
                    if (succeeded)
                    {
                      UInt32_21 = ((uint32_t) (MR_Word) conv9_UInt32_21);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_String Var_66;
                      MR_String Var_68;
                      MR_Word STATE_VARIABLE_Rs_144;

                      Var_68 = mercury__string__uint32_to_string_1_f_0(UInt32_21);
                      Var_66 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) "u32");
                      mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_144);
                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_144;
                    }
                    else
                    {
                      MR_Float Float_22;
                      MR_Box conv10_Float_22;

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
                      if (succeeded)
                      {
                        Float_22 = MR_unbox_float(conv10_Float_22);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_String Var_70;
                        MR_Word STATE_VARIABLE_Rs_145;

                        Var_70 = mercury__string__float_to_string_1_f_0(Float_22);
                        mercury__string__to_string__add_revstring_3_p_0(Var_70, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_145);
                        *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_145;
                      }
                      else
                      {
                        MR_Box Bitmap_23;
                        MR_Box conv11_Bitmap_23;

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
                        if (succeeded)
                        {
                          Bitmap_23 = ((MR_Box) (conv11_Bitmap_23));
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          MR_String Var_72;
                          MR_String Var_74;
                          MR_Word STATE_VARIABLE_Rs_146;

                          Var_74 = mercury__bitmap__to_string_1_f_0(Bitmap_23);
                          Var_72 = mercury__term_io__quoted_string_1_f_0(Var_74);
                          mercury__string__to_string__add_revstring_3_p_0(Var_72, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_146);
                          *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_146;
                        }
                        else
                        {
                          MR_Word TypeDesc_24;
                          MR_Box conv12_TypeDesc_24;

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
                          if (succeeded)
                          {
                            TypeDesc_24 = ((MR_Word) (conv12_TypeDesc_24));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            MR_Word STATE_VARIABLE_Rs_147;

                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(TypeDesc_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_147);
                            *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_147;
                          }
                          else
                          {
                            MR_Word TypeCtorDesc_25;
                            MR_Box conv13_TypeCtorDesc_25;

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
                            if (succeeded)
                            {
                              TypeCtorDesc_25 = ((MR_Word) (conv13_TypeCtorDesc_25));
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                            {
                              MR_Word STATE_VARIABLE_Rs_148;

                              mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(TypeCtorDesc_25, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_148);
                              *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_148;
                            }
                            else
                            {
                              MR_Word C_Pointer_26;
                              MR_Box conv14_C_Pointer_26;

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
                              if (succeeded)
                              {
                                C_Pointer_26 = ((MR_Word) (conv14_C_Pointer_26));
                                succeeded = MR_TRUE;
                              }
                              if (succeeded)
                              {
                                MR_String Var_77;
                                MR_Word STATE_VARIABLE_Rs_149;

                                Var_77 = mercury__string__c_pointer_to_string_1_f_0(C_Pointer_26);
                                mercury__string__to_string__add_revstring_3_p_0(Var_77, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_149);
                                *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_149;
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

                                Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ElemType_29 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 0))));
                                  Var_80 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 1))));
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
                                  MR_Word TypeInfo_124_124;
                                  MR_Word TypeInfo_126_126;
                                  MR_ArrayPtr Array_31;
                                  MR_Word STATE_VARIABLE_Rs_150;
                                  MR_Box conv15_Array_31;

                                  mercury__type_desc__has_type_2_p_0(&TypeInfo_124_124, ElemType_29);
                                  {
                                    TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(0, TypeInfo_126_126, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                    MR_hl_field(0, TypeInfo_126_126, 1) = ((MR_Box) (TypeInfo_124_124));
                                  }
                                  mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_126_126, X_10, &conv15_Array_31);
                                  Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                  mercury__string__to_string__array_to_revstrings_5_p_3(TypeInfo_124_124, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_150);
                                  *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_150;
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

                                  Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                  succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_107 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 0))));
                                    Var_85 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 1))));
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
                                    MR_Word TypeInfo_127_127;
                                    MR_Word TypeInfo_129_129;
                                    MR_Box VersionArray_32;
                                    MR_Word STATE_VARIABLE_Rs_151;
                                    MR_Box conv16_VersionArray_32;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_127_127, ElemType_107);
                                    {
                                      TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, TypeInfo_129_129, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                      MR_hl_field(0, TypeInfo_129_129, 1) = ((MR_Box) (TypeInfo_127_127));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_129_129, X_10, &conv16_VersionArray_32);
                                    VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                    mercury__string__to_string__version_array_to_revstrings_5_p_3(TypeInfo_127_127, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_151);
                                    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_151;
                                  }
                                  else
                                  {
                                    MR_Word Var_89;
                                    MR_Word Var_90;
                                    MR_String Var_91;
                                    MR_String Var_92;
                                    MR_Word TypeCtor_98;
                                    MR_Word ArgTypes_99;

                                    Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                    succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_90 = ((MR_Word) ((MR_hl_field(1, ArgTypes_99, (MR_Integer) 1))));
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
                                      MR_Word STATE_VARIABLE_Rs_152;
                                      MR_Box conv17_PrivateBuiltinTypeInfo_33;

                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                      PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                      mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_152);
                                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_152;
                                    }
                                    else
                                    {
                                      MR_Word STATE_VARIABLE_Rs_153;

                                      mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(TypeInfo_for_T_108, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_153);
                                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_153;
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
mercury__string__to_string__version_array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_14_14;
  MR_Word Var_15;
  MR_Integer Var_25;
  MR_Integer Var_26;
  MR_Word Priority_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_29;
  MR_Word * AddrSTATE_VARIABLE_Rs_16_32;

  {
    STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_3

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)Array_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
  Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(Array_8, Var_25, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Priority_29 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_29 = ((MR_Word) (conv1_Priority_29));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_16_32 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, (MR_Integer) 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3(TypeInfo_20_20, NonCanon_6, Priority_29, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, AddrSTATE_VARIABLE_Rs_16_32);
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_14_14;
  MR_Word Var_15;
  MR_Word Priority_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_21;
  MR_Word * AddrSTATE_VARIABLE_Rs_16_23;

  {
    STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
  mercury__array__to_list_2_p_0(TypeInfo_for_T_18, Array_8, &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Priority_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_21 = ((MR_Word) (conv1_Priority_21));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_16_23 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, (MR_Integer) 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3(TypeInfo_20_20, NonCanon_6, Priority_21, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, AddrSTATE_VARIABLE_Rs_16_23);
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word STATE_VARIABLE_Rs_24_24;
  MR_Word TypeClassInfo_for_op_table_33;
  MR_Word Var_18;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_18;

  if (succeeded)
  {
    TypeClassInfo_for_op_table_33 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
    if (succeeded)
    {
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 13))));
      conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)));
      Var_18 = ((MR_Word) (conv2_Var_18));
      Var_34 = (MR_Unsigned) (Priority_10);
      Var_35 = (MR_Unsigned) (Var_18);
      succeeded = (Var_34 > Var_35);
      if (!(succeeded))
        succeeded = (Var_34 == Var_35);
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_20_20;
    MR_String Var_21;
    MR_Word STATE_VARIABLE_Rs_22_22;

    {
      STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
    Var_21 = mercury__term_io__quoted_atom_1_f_0(Functor_11);
    {
      STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_20_20));
    }
    {
      STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_22_22));
    }
  }
  else
  {
    MR_String Var_25;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;

    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_4[0]), Functor_11, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_38);
    Var_41 = (MR_Word) (Var_38);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, &Var_42);
    Var_25 = mercury__string__append_list_1_f_0(Var_42);
    {
      STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
  }
  if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_24_24;
  else
  {
    MR_Word TypeInfo_15_47;
    MR_Word Y_14 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 0))));
    MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Rs_29_29;
    MR_Word STATE_VARIABLE_Rs_30_30;
    MR_Word Priority_44;
    MR_Box Var_45;
    MR_Word * AddrSTATE_VARIABLE_Rs_31_48;

    {
      STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_24_24));
    }
    Priority_44 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
    Var_45 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_47, Y_14);
    mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_47, NonCanon_8, Priority_44, Var_45, STATE_VARIABLE_Rs_29_29, &STATE_VARIABLE_Rs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSTATE_VARIABLE_Rs_31_48 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_17, (MR_Integer) 1)));
    mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_3(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_30_30, AddrSTATE_VARIABLE_Rs_31_48);
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_2(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word RevStrings_9;
  MR_Word Var_11;
  MR_Word Priority_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Priority_14;

  conv1_Priority_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_14 = ((MR_Word) (conv1_Priority_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_for_T_12, NonCanon_5, Priority_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
  *String_8 = mercury__string__append_list_1_f_0(Var_11);
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_2(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word Priority_10;
  MR_Box Var_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 15))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(0, X_8, (MR_Integer) 0))));
  Var_13 = (MR_hl_field(0, X_8, (MR_Integer) 1));
  mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_15, NonCanon_6, Priority_10, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
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
    MR_Word TypeInfo_27_27 = ((MR_Word) ((MR_hl_field(0, Univ_8, (MR_Integer) 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(0, Univ_8, (MR_Integer) 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_27_27, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_32;
      MR_Word STATE_VARIABLE_Rs_21_21;
      MR_Word STATE_VARIABLE_Rs_22_22;
      MR_Word Priority_29;
      MR_Box Var_30;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_29 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_30 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_32, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_32, NonCanon_6, Priority_29, Var_30, STATE_VARIABLE_Rs_21_21, &STATE_VARIABLE_Rs_22_22);
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
        MR_Word TypeInfo_28_28;
        MR_Word STATE_VARIABLE_Rs_25_25;
        MR_Box Var_26;
        MR_Word Priority_33;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Priority_33;

        {
          STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(1, STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(0, Univ_8, (MR_Integer) 0))));
        Var_26 = (MR_hl_field(0, Univ_8, (MR_Integer) 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
        conv1_Priority_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Priority_33 = ((MR_Word) (conv1_Priority_33));
        mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_28_28, NonCanon_6, Priority_33, Var_26, STATE_VARIABLE_Rs_25_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word Priority_10;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_for_T_13, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_2(
  MR_Word TypeInfo_for_T_108,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String String_12;
  MR_Box conv0_String_12;

  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
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

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
    if (succeeded)
    {
      Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_38;

      Var_38 = mercury__term_io__quoted_char_to_string_1_f_0(Char_13);
      mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Integer Int_14;
      MR_Box conv2_Int_14;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
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

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
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

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
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

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
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

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
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

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
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

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
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

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
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

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
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

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
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

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
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

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
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

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
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

                                Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ElemType_29 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 0))));
                                  Var_80 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 1))));
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
                                  MR_Word TypeInfo_124_124;
                                  MR_Word TypeInfo_126_126;
                                  MR_ArrayPtr Array_31;
                                  MR_Box conv15_Array_31;

                                  mercury__type_desc__has_type_2_p_0(&TypeInfo_124_124, ElemType_29);
                                  {
                                    TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(0, TypeInfo_126_126, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                    MR_hl_field(0, TypeInfo_126_126, 1) = ((MR_Box) (TypeInfo_124_124));
                                  }
                                  mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_126_126, X_10, &conv15_Array_31);
                                  Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                  mercury__string__to_string__array_to_revstrings_5_p_2(TypeInfo_124_124, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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

                                  Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                  succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_107 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 0))));
                                    Var_85 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 1))));
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
                                    MR_Word TypeInfo_127_127;
                                    MR_Word TypeInfo_129_129;
                                    MR_Box VersionArray_32;
                                    MR_Box conv16_VersionArray_32;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_127_127, ElemType_107);
                                    {
                                      TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, TypeInfo_129_129, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                      MR_hl_field(0, TypeInfo_129_129, 1) = ((MR_Box) (TypeInfo_127_127));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_129_129, X_10, &conv16_VersionArray_32);
                                    VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                    mercury__string__to_string__version_array_to_revstrings_5_p_2(TypeInfo_127_127, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                  }
                                  else
                                  {
                                    MR_Word Var_89;
                                    MR_Word Var_90;
                                    MR_String Var_91;
                                    MR_String Var_92;
                                    MR_Word TypeCtor_98;
                                    MR_Word ArgTypes_99;

                                    Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                    succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_90 = ((MR_Word) ((MR_hl_field(1, ArgTypes_99, (MR_Integer) 1))));
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

                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                      PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                      mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                    }
                                    else
                                      mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(TypeInfo_for_T_108, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String Functor_12;
  MR_Word Args_14;
  MR_Integer _Arity_13;
  MR_Word STATE_VARIABLE_Rs_43_43;

  mercury__deconstruct__deconstruct_5_p_2(TypeInfo_for_T_157, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((strcmp(Functor_12, (MR_String) "[]") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_43_43);
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_43_43);
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
  {
    MR_Word Var_171 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 1))));
    MR_Word Var_172 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 0))));

    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      if ((Var_171 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeInfo_158_158;
        MR_Word STATE_VARIABLE_Rs_50_50;
        MR_Box Var_51;
        MR_Word STATE_VARIABLE_Rs_52_52;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_50_50);
        Var_51 = mercury__univ__univ_value_1_f_0(&TypeInfo_158_158, Var_172);
        mercury__string__to_string__value_to_revstrings_5_p_2(TypeInfo_158_158, NonCanon_7, Var_51, STATE_VARIABLE_Rs_50_50, &STATE_VARIABLE_Rs_52_52);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_52_52, &STATE_VARIABLE_Rs_43_43);
      }
      else
      {
        MR_Word STATE_VARIABLE_Rs_56_56;
        MR_Word STATE_VARIABLE_Rs_57_57;
        MR_Word STATE_VARIABLE_Rs_58_58;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_56_56);
        mercury__string__to_string__arg_to_revstrings_5_p_2(NonCanon_7, Var_172, STATE_VARIABLE_Rs_56_56, &STATE_VARIABLE_Rs_57_57);
        mercury__string__to_string__term_args_to_revstrings_5_p_2(NonCanon_7, Var_171, STATE_VARIABLE_Rs_57_57, &STATE_VARIABLE_Rs_58_58);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_58_58, &STATE_VARIABLE_Rs_43_43);
      }
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "[|]") == 0))
    {
      MR_Word ListTail_16;
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_39_39;
      MR_Word STATE_VARIABLE_Rs_40_40;
      MR_Word STATE_VARIABLE_Rs_41_41;
      MR_String Var_42;

      succeeded = (Var_171 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListTail_16 = ((MR_Word) ((MR_hl_field(1, Var_171, (MR_Integer) 0))));
        Var_37 = ((MR_Word) ((MR_hl_field(1, Var_171, (MR_Integer) 1))));
        succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_38 = (MR_String) "[";
          mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_39_39);
          mercury__string__to_string__arg_to_revstrings_5_p_2(NonCanon_7, Var_172, STATE_VARIABLE_Rs_39_39, &STATE_VARIABLE_Rs_40_40);
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_40_40, &STATE_VARIABLE_Rs_41_41);
          Var_42 = (MR_String) "]";
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_41_41, &STATE_VARIABLE_Rs_43_43);
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    *STATE_VARIABLE_Rs_35 = STATE_VARIABLE_Rs_43_43;
  else
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
  else
  {
    MR_Word Var_169 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 1))));
    MR_Word Var_170 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 0))));

    if ((Var_169 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpInfos_23;

      succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_23);
      if (succeeded)
      {
        MR_Word OpPrio_24;
        MR_Word GtOrGeA_25;
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, (MR_Integer) 2))));

        succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OpPrio_24 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 0))));
          GtOrGeA_25 = ((MR_Unsigned) ((MR_hl_field(1, Var_62, (MR_Integer) 1))) & (MR_Integer) 1);
          {
            MR_Word TypeInfo_160_160;
            MR_Word MinPrioA_26;
            MR_Word STATE_VARIABLE_Rs_64_64;
            MR_String Var_65;
            MR_Word STATE_VARIABLE_Rs_66_66;
            MR_Word STATE_VARIABLE_Rs_68_68;
            MR_Box Var_69;
            MR_Word STATE_VARIABLE_Rs_70_70;

            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_64_64);
            Var_65 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
            mercury__string__to_string__add_revstring_3_p_0(Var_65, STATE_VARIABLE_Rs_64_64, &STATE_VARIABLE_Rs_66_66);
            mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_66_66, &STATE_VARIABLE_Rs_68_68);
            switch (GtOrGeA_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                MinPrioA_26 = OpPrio_24;
                break;
              case (MR_Integer) 0:
                MinPrioA_26 = mercury__ops__increment_priority_1_f_0(OpPrio_24);
                break;
            }
            Var_69 = mercury__univ__univ_value_1_f_0(&TypeInfo_160_160, Var_170);
            mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_160_160, NonCanon_7, MinPrioA_26, Var_69, STATE_VARIABLE_Rs_68_68, &STATE_VARIABLE_Rs_70_70);
            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_70_70, STATE_VARIABLE_Rs_35);
          }
        }
        else
        {
          MR_Word OpPrio_126;
          MR_Word GtOrGeA_127;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, (MR_Integer) 3))));

          succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_126 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
            GtOrGeA_127 = ((MR_Unsigned) ((MR_hl_field(1, Var_73, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_161_161;
              MR_Word STATE_VARIABLE_Rs_75_75;
              MR_Box Var_76;
              MR_Word STATE_VARIABLE_Rs_77_77;
              MR_Word STATE_VARIABLE_Rs_79_79;
              MR_String Var_80;
              MR_Word STATE_VARIABLE_Rs_81_81;
              MR_Word MinPrioA_125;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_75_75);
              switch (GtOrGeA_127) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_125 = OpPrio_126;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_125 = mercury__ops__increment_priority_1_f_0(OpPrio_126);
                  break;
              }
              Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_161_161, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_161_161, NonCanon_7, MinPrioA_125, Var_76, STATE_VARIABLE_Rs_75_75, &STATE_VARIABLE_Rs_77_77);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_77_77, &STATE_VARIABLE_Rs_79_79);
              Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_79_79, &STATE_VARIABLE_Rs_81_81);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_81_81, STATE_VARIABLE_Rs_35);
            }
          }
          else
            mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, Var_169, (MR_Integer) 1))));
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(1, Var_169, (MR_Integer) 0))));

      if ((Var_173 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OpInfos_140;

        succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_140);
        if (succeeded)
        {
          MR_Word GtOrGeB_28;
          MR_Word OpPrio_137;
          MR_Word GtOrGeA_138;
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, (MR_Integer) 0))));

          succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_137 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
            GtOrGeA_138 = ((((MR_Unsigned) ((MR_hl_field(1, Var_88, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            GtOrGeB_28 = ((MR_Unsigned) ((MR_hl_field(1, Var_88, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_163_163;
              MR_Word TypeInfo_164_164;
              MR_Word MinPrioB_29;
              MR_Word STATE_VARIABLE_Rs_90_90;
              MR_Box Var_91;
              MR_Word STATE_VARIABLE_Rs_92_92;
              MR_Word STATE_VARIABLE_Rs_94_94;
              MR_Box Var_101;
              MR_Word STATE_VARIABLE_Rs_102_102;
              MR_Word MinPrioA_129;

              switch (GtOrGeA_138) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_129 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_129 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              switch (GtOrGeB_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioB_29 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioB_29 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_90_90);
              Var_91 = mercury__univ__univ_value_1_f_0(&TypeInfo_163_163, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_163_163, NonCanon_7, MinPrioA_129, Var_91, STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_92_92);
              succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
              if (succeeded)
                mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_94_94);
              else
              {
                MR_Word STATE_VARIABLE_Rs_96_96;
                MR_String Var_97;
                MR_Word STATE_VARIABLE_Rs_98_98;

                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_96_96);
                Var_97 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_97, STATE_VARIABLE_Rs_96_96, &STATE_VARIABLE_Rs_98_98);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_98_98, &STATE_VARIABLE_Rs_94_94);
              }
              Var_101 = mercury__univ__univ_value_1_f_0(&TypeInfo_164_164, Var_174);
              mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_164_164, NonCanon_7, MinPrioB_29, Var_101, STATE_VARIABLE_Rs_94_94, &STATE_VARIABLE_Rs_102_102);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_102_102, STATE_VARIABLE_Rs_35);
            }
          }
          else
          {
            MR_Word OpPrio_132;
            MR_Word GtOrGeA_133;
            MR_Word GtOrGeB_135;
            MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, (MR_Integer) 1))));

            succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              OpPrio_132 = ((MR_Word) ((MR_hl_field(1, Var_105, (MR_Integer) 0))));
              GtOrGeA_133 = ((((MR_Unsigned) ((MR_hl_field(1, Var_105, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              GtOrGeB_135 = ((MR_Unsigned) ((MR_hl_field(1, Var_105, (MR_Integer) 1))) & (MR_Integer) 1);
              {
                MR_Word TypeInfo_165_165;
                MR_Word TypeInfo_166_166;
                MR_Word STATE_VARIABLE_Rs_107_107;
                MR_String Var_108;
                MR_Word STATE_VARIABLE_Rs_109_109;
                MR_Word STATE_VARIABLE_Rs_111_111;
                MR_Box Var_112;
                MR_Word STATE_VARIABLE_Rs_113_113;
                MR_Word STATE_VARIABLE_Rs_115_115;
                MR_Box Var_116;
                MR_Word STATE_VARIABLE_Rs_117_117;
                MR_Word MinPrioA_130;
                MR_Word MinPrioB_131;

                switch (GtOrGeA_133) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioA_130 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioA_130 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                switch (GtOrGeB_135) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioB_131 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioB_131 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_107_107);
                Var_108 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_108, STATE_VARIABLE_Rs_107_107, &STATE_VARIABLE_Rs_109_109);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_109_109, &STATE_VARIABLE_Rs_111_111);
                Var_112 = mercury__univ__univ_value_1_f_0(&TypeInfo_165_165, Var_170);
                mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_165_165, NonCanon_7, MinPrioA_130, Var_112, STATE_VARIABLE_Rs_111_111, &STATE_VARIABLE_Rs_113_113);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_113_113, &STATE_VARIABLE_Rs_115_115);
                Var_116 = mercury__univ__univ_value_1_f_0(&TypeInfo_166_166, Var_174);
                mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_166_166, NonCanon_7, MinPrioB_131, Var_116, STATE_VARIABLE_Rs_115_115, &STATE_VARIABLE_Rs_117_117);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_117_117, STATE_VARIABLE_Rs_35);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
        }
        else
          mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_2(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfSTATE_VARIABLE_Rs_25 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
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
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
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

void MR_CALL 
mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2(
  MR_Word TypeInfo_for_T_108,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_135)
{
  MR_bool succeeded;
  MR_String String_12;
  MR_Box conv0_String_12;

  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
  if (succeeded)
  {
    String_12 = ((MR_String) (conv0_String_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_35;
    MR_String Var_36;

    Var_36 = mercury__term_io__quoted_string_1_f_0(String_12);
    mercury__string__to_string__add_revstring_3_p_0(Var_36, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_35);
    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_35;
  }
  else
  {
    MR_Char Char_13;
    MR_Box conv1_Char_13;

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
    if (succeeded)
    {
      Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_136;

      Var_38 = mercury__term_io__quoted_char_to_string_1_f_0(Char_13);
      mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_136);
      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_136;
    }
    else
    {
      MR_Integer Int_14;
      MR_Box conv2_Int_14;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
      if (succeeded)
      {
        Int_14 = ((MR_Integer) (conv2_Int_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String Var_40;
        MR_Word STATE_VARIABLE_Rs_137;

        Var_40 = mercury__string__int_to_string_1_f_0(Int_14);
        mercury__string__to_string__add_revstring_3_p_0(Var_40, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_137);
        *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_137;
      }
      else
      {
        MR_Unsigned UInt_15;
        MR_Box conv3_UInt_15;

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
        if (succeeded)
        {
          UInt_15 = ((MR_Unsigned) (conv3_UInt_15));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_42;
          MR_String Var_44;
          MR_Word STATE_VARIABLE_Rs_138;

          Var_44 = mercury__string__uint_to_string_1_f_0(UInt_15);
          Var_42 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) "u");
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_138);
          *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_138;
        }
        else
        {
          int8_t Int8_16;
          MR_Box conv4_Int8_16;

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
          if (succeeded)
          {
            Int8_16 = ((int8_t) (MR_Word) conv4_Int8_16);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_String Var_46;
            MR_String Var_48;
            MR_Word STATE_VARIABLE_Rs_139;

            Var_48 = mercury__string__int8_to_string_1_f_0(Int8_16);
            Var_46 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "i8");
            mercury__string__to_string__add_revstring_3_p_0(Var_46, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_139);
            *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_139;
          }
          else
          {
            uint8_t UInt8_17;
            MR_Box conv5_UInt8_17;

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
            if (succeeded)
            {
              UInt8_17 = ((uint8_t) (MR_Word) conv5_UInt8_17);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_50;
              MR_String Var_52;
              MR_Word STATE_VARIABLE_Rs_140;

              Var_52 = mercury__string__uint8_to_string_1_f_0(UInt8_17);
              Var_50 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) "u8");
              mercury__string__to_string__add_revstring_3_p_0(Var_50, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_140);
              *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_140;
            }
            else
            {
              int16_t Int16_18;
              MR_Box conv6_Int16_18;

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
              if (succeeded)
              {
                Int16_18 = ((int16_t) (MR_Word) conv6_Int16_18);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_54;
                MR_String Var_56;
                MR_Word STATE_VARIABLE_Rs_141;

                Var_56 = mercury__string__int16_to_string_1_f_0(Int16_18);
                Var_54 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) "i16");
                mercury__string__to_string__add_revstring_3_p_0(Var_54, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_141);
                *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_141;
              }
              else
              {
                uint16_t UInt16_19;
                MR_Box conv7_UInt16_19;

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
                if (succeeded)
                {
                  UInt16_19 = ((uint16_t) (MR_Word) conv7_UInt16_19);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_58;
                  MR_String Var_60;
                  MR_Word STATE_VARIABLE_Rs_142;

                  Var_60 = mercury__string__uint16_to_string_1_f_0(UInt16_19);
                  Var_58 = mercury__string__f_43_43_2_f_0(Var_60, (MR_String) "u16");
                  mercury__string__to_string__add_revstring_3_p_0(Var_58, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_142);
                  *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_142;
                }
                else
                {
                  int32_t Int32_20;
                  MR_Box conv8_Int32_20;

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
                  if (succeeded)
                  {
                    Int32_20 = ((int32_t) (MR_Word) conv8_Int32_20);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_String Var_62;
                    MR_String Var_64;
                    MR_Word STATE_VARIABLE_Rs_143;

                    Var_64 = mercury__string__int32_to_string_1_f_0(Int32_20);
                    Var_62 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "i32");
                    mercury__string__to_string__add_revstring_3_p_0(Var_62, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_143);
                    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_143;
                  }
                  else
                  {
                    uint32_t UInt32_21;
                    MR_Box conv9_UInt32_21;

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
                    if (succeeded)
                    {
                      UInt32_21 = ((uint32_t) (MR_Word) conv9_UInt32_21);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_String Var_66;
                      MR_String Var_68;
                      MR_Word STATE_VARIABLE_Rs_144;

                      Var_68 = mercury__string__uint32_to_string_1_f_0(UInt32_21);
                      Var_66 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) "u32");
                      mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_144);
                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_144;
                    }
                    else
                    {
                      MR_Float Float_22;
                      MR_Box conv10_Float_22;

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
                      if (succeeded)
                      {
                        Float_22 = MR_unbox_float(conv10_Float_22);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_String Var_70;
                        MR_Word STATE_VARIABLE_Rs_145;

                        Var_70 = mercury__string__float_to_string_1_f_0(Float_22);
                        mercury__string__to_string__add_revstring_3_p_0(Var_70, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_145);
                        *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_145;
                      }
                      else
                      {
                        MR_Box Bitmap_23;
                        MR_Box conv11_Bitmap_23;

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
                        if (succeeded)
                        {
                          Bitmap_23 = ((MR_Box) (conv11_Bitmap_23));
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          MR_String Var_72;
                          MR_String Var_74;
                          MR_Word STATE_VARIABLE_Rs_146;

                          Var_74 = mercury__bitmap__to_string_1_f_0(Bitmap_23);
                          Var_72 = mercury__term_io__quoted_string_1_f_0(Var_74);
                          mercury__string__to_string__add_revstring_3_p_0(Var_72, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_146);
                          *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_146;
                        }
                        else
                        {
                          MR_Word TypeDesc_24;
                          MR_Box conv12_TypeDesc_24;

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
                          if (succeeded)
                          {
                            TypeDesc_24 = ((MR_Word) (conv12_TypeDesc_24));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            MR_Word STATE_VARIABLE_Rs_147;

                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(TypeDesc_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_147);
                            *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_147;
                          }
                          else
                          {
                            MR_Word TypeCtorDesc_25;
                            MR_Box conv13_TypeCtorDesc_25;

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
                            if (succeeded)
                            {
                              TypeCtorDesc_25 = ((MR_Word) (conv13_TypeCtorDesc_25));
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                            {
                              MR_Word STATE_VARIABLE_Rs_148;

                              mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(TypeCtorDesc_25, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_148);
                              *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_148;
                            }
                            else
                            {
                              MR_Word C_Pointer_26;
                              MR_Box conv14_C_Pointer_26;

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
                              if (succeeded)
                              {
                                C_Pointer_26 = ((MR_Word) (conv14_C_Pointer_26));
                                succeeded = MR_TRUE;
                              }
                              if (succeeded)
                              {
                                MR_String Var_77;
                                MR_Word STATE_VARIABLE_Rs_149;

                                Var_77 = mercury__string__c_pointer_to_string_1_f_0(C_Pointer_26);
                                mercury__string__to_string__add_revstring_3_p_0(Var_77, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_149);
                                *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_149;
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

                                Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ElemType_29 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 0))));
                                  Var_80 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 1))));
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
                                  MR_Word TypeInfo_124_124;
                                  MR_Word TypeInfo_126_126;
                                  MR_ArrayPtr Array_31;
                                  MR_Word STATE_VARIABLE_Rs_150;
                                  MR_Box conv15_Array_31;

                                  mercury__type_desc__has_type_2_p_0(&TypeInfo_124_124, ElemType_29);
                                  {
                                    TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(0, TypeInfo_126_126, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                    MR_hl_field(0, TypeInfo_126_126, 1) = ((MR_Box) (TypeInfo_124_124));
                                  }
                                  mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_126_126, X_10, &conv15_Array_31);
                                  Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                  mercury__string__to_string__array_to_revstrings_5_p_2(TypeInfo_124_124, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_150);
                                  *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_150;
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

                                  Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                  succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_107 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 0))));
                                    Var_85 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 1))));
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
                                    MR_Word TypeInfo_127_127;
                                    MR_Word TypeInfo_129_129;
                                    MR_Box VersionArray_32;
                                    MR_Word STATE_VARIABLE_Rs_151;
                                    MR_Box conv16_VersionArray_32;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_127_127, ElemType_107);
                                    {
                                      TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, TypeInfo_129_129, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                      MR_hl_field(0, TypeInfo_129_129, 1) = ((MR_Box) (TypeInfo_127_127));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_129_129, X_10, &conv16_VersionArray_32);
                                    VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                    mercury__string__to_string__version_array_to_revstrings_5_p_2(TypeInfo_127_127, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_151);
                                    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_151;
                                  }
                                  else
                                  {
                                    MR_Word Var_89;
                                    MR_Word Var_90;
                                    MR_String Var_91;
                                    MR_String Var_92;
                                    MR_Word TypeCtor_98;
                                    MR_Word ArgTypes_99;

                                    Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                    succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_90 = ((MR_Word) ((MR_hl_field(1, ArgTypes_99, (MR_Integer) 1))));
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
                                      MR_Word STATE_VARIABLE_Rs_152;
                                      MR_Box conv17_PrivateBuiltinTypeInfo_33;

                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                      PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                      mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_152);
                                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_152;
                                    }
                                    else
                                    {
                                      MR_Word STATE_VARIABLE_Rs_153;

                                      mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(TypeInfo_for_T_108, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_153);
                                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_153;
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
mercury__string__to_string__version_array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_14_14;
  MR_Word Var_15;
  MR_Integer Var_25;
  MR_Integer Var_26;
  MR_Word Priority_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_29;
  MR_Word * AddrSTATE_VARIABLE_Rs_16_32;

  {
    STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_2

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)Array_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
  Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(Array_8, Var_25, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Priority_29 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_29 = ((MR_Word) (conv1_Priority_29));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_16_32 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, (MR_Integer) 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2(TypeInfo_20_20, NonCanon_6, Priority_29, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, AddrSTATE_VARIABLE_Rs_16_32);
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_14_14;
  MR_Word Var_15;
  MR_Word Priority_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_21;
  MR_Word * AddrSTATE_VARIABLE_Rs_16_23;

  {
    STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
  mercury__array__to_list_2_p_0(TypeInfo_for_T_18, Array_8, &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Priority_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_21 = ((MR_Word) (conv1_Priority_21));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_16_23 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, (MR_Integer) 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2(TypeInfo_20_20, NonCanon_6, Priority_21, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, AddrSTATE_VARIABLE_Rs_16_23);
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word STATE_VARIABLE_Rs_24_24;
  MR_Word TypeClassInfo_for_op_table_33;
  MR_Word Var_18;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_18;

  if (succeeded)
  {
    TypeClassInfo_for_op_table_33 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
    if (succeeded)
    {
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 13))));
      conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)));
      Var_18 = ((MR_Word) (conv2_Var_18));
      Var_34 = (MR_Unsigned) (Priority_10);
      Var_35 = (MR_Unsigned) (Var_18);
      succeeded = (Var_34 > Var_35);
      if (!(succeeded))
        succeeded = (Var_34 == Var_35);
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_20_20;
    MR_String Var_21;
    MR_Word STATE_VARIABLE_Rs_22_22;

    {
      STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
    Var_21 = mercury__term_io__quoted_atom_1_f_0(Functor_11);
    {
      STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_20_20));
    }
    {
      STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_22_22));
    }
  }
  else
  {
    MR_String Var_25;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;

    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_4[0]), Functor_11, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_38);
    Var_41 = (MR_Word) (Var_38);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, &Var_42);
    Var_25 = mercury__string__append_list_1_f_0(Var_42);
    {
      STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
  }
  if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_24_24;
  else
  {
    MR_Word TypeInfo_15_47;
    MR_Word Y_14 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 0))));
    MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Rs_29_29;
    MR_Word STATE_VARIABLE_Rs_30_30;
    MR_Word Priority_44;
    MR_Box Var_45;
    MR_Word * AddrSTATE_VARIABLE_Rs_31_48;

    {
      STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_24_24));
    }
    Priority_44 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
    Var_45 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_47, Y_14);
    mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_47, NonCanon_8, Priority_44, Var_45, STATE_VARIABLE_Rs_29_29, &STATE_VARIABLE_Rs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSTATE_VARIABLE_Rs_31_48 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_17, (MR_Integer) 1)));
    mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_2(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_30_30, AddrSTATE_VARIABLE_Rs_31_48);
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word RevStrings_9;
  MR_Word Var_11;
  MR_Word Priority_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Priority_14;

  conv1_Priority_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_14 = ((MR_Word) (conv1_Priority_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_12, NonCanon_5, Priority_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
  *String_8 = mercury__string__append_list_1_f_0(Var_11);
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word RevStrings_9;
  MR_Word Var_11;
  MR_Word Priority_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Priority_14;

  conv1_Priority_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_14 = ((MR_Word) (conv1_Priority_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_for_T_12, NonCanon_5, Priority_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
  *String_8 = mercury__string__append_list_1_f_0(Var_11);
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_0(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word Priority_10;
  MR_Box Var_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 15))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(0, X_8, (MR_Integer) 0))));
  Var_13 = (MR_hl_field(0, X_8, (MR_Integer) 1));
  mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_15, NonCanon_6, Priority_10, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
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
    MR_Word TypeInfo_27_27 = ((MR_Word) ((MR_hl_field(0, Univ_8, (MR_Integer) 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(0, Univ_8, (MR_Integer) 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_0(TypeInfo_27_27, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_32;
      MR_Word STATE_VARIABLE_Rs_21_21;
      MR_Word STATE_VARIABLE_Rs_22_22;
      MR_Word Priority_29;
      MR_Box Var_30;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_29 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_30 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_32, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_32, NonCanon_6, Priority_29, Var_30, STATE_VARIABLE_Rs_21_21, &STATE_VARIABLE_Rs_22_22);
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
        MR_Word TypeInfo_28_28;
        MR_Word STATE_VARIABLE_Rs_25_25;
        MR_Box Var_26;
        MR_Word Priority_33;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Priority_33;

        {
          STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(1, STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(0, Univ_8, (MR_Integer) 0))));
        Var_26 = (MR_hl_field(0, Univ_8, (MR_Integer) 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
        conv1_Priority_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Priority_33 = ((MR_Word) (conv1_Priority_33));
        mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_28_28, NonCanon_6, Priority_33, Var_26, STATE_VARIABLE_Rs_25_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word Priority_10;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_for_T_13, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_0(
  MR_Word TypeInfo_for_T_108,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String String_12;
  MR_Box conv0_String_12;

  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
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

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
    if (succeeded)
    {
      Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_38;

      Var_38 = mercury__term_io__quoted_char_to_string_1_f_0(Char_13);
      mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Integer Int_14;
      MR_Box conv2_Int_14;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
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

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
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

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
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

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
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

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
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

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
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

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
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

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
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

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
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

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
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

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
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

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
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

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
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

                                Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ElemType_29 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 0))));
                                  Var_80 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 1))));
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
                                  MR_Word TypeInfo_124_124;
                                  MR_Word TypeInfo_126_126;
                                  MR_ArrayPtr Array_31;
                                  MR_Box conv15_Array_31;

                                  mercury__type_desc__has_type_2_p_0(&TypeInfo_124_124, ElemType_29);
                                  {
                                    TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(0, TypeInfo_126_126, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                    MR_hl_field(0, TypeInfo_126_126, 1) = ((MR_Box) (TypeInfo_124_124));
                                  }
                                  mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_126_126, X_10, &conv15_Array_31);
                                  Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                  mercury__string__to_string__array_to_revstrings_5_p_0(TypeInfo_124_124, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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

                                  Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                  succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_107 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 0))));
                                    Var_85 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 1))));
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
                                    MR_Word TypeInfo_127_127;
                                    MR_Word TypeInfo_129_129;
                                    MR_Box VersionArray_32;
                                    MR_Box conv16_VersionArray_32;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_127_127, ElemType_107);
                                    {
                                      TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, TypeInfo_129_129, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                      MR_hl_field(0, TypeInfo_129_129, 1) = ((MR_Box) (TypeInfo_127_127));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_129_129, X_10, &conv16_VersionArray_32);
                                    VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                    mercury__string__to_string__version_array_to_revstrings_5_p_0(TypeInfo_127_127, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                  }
                                  else
                                  {
                                    MR_Word Var_89;
                                    MR_Word Var_90;
                                    MR_String Var_91;
                                    MR_String Var_92;
                                    MR_Word TypeCtor_98;
                                    MR_Word ArgTypes_99;

                                    Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                    succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_90 = ((MR_Word) ((MR_hl_field(1, ArgTypes_99, (MR_Integer) 1))));
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

                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                      PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                      mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                    }
                                    else
                                      mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(TypeInfo_for_T_108, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String Functor_12;
  MR_Word Args_14;
  MR_Integer _Arity_13;
  MR_Word STATE_VARIABLE_Rs_43_43;

  mercury__deconstruct__deconstruct_5_p_0(TypeInfo_for_T_157, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((strcmp(Functor_12, (MR_String) "[]") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_43_43);
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_43_43);
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
  {
    MR_Word Var_171 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 1))));
    MR_Word Var_172 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 0))));

    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      if ((Var_171 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeInfo_158_158;
        MR_Word STATE_VARIABLE_Rs_50_50;
        MR_Box Var_51;
        MR_Word STATE_VARIABLE_Rs_52_52;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_50_50);
        Var_51 = mercury__univ__univ_value_1_f_0(&TypeInfo_158_158, Var_172);
        mercury__string__to_string__value_to_revstrings_5_p_0(TypeInfo_158_158, NonCanon_7, Var_51, STATE_VARIABLE_Rs_50_50, &STATE_VARIABLE_Rs_52_52);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_52_52, &STATE_VARIABLE_Rs_43_43);
      }
      else
      {
        MR_Word STATE_VARIABLE_Rs_56_56;
        MR_Word STATE_VARIABLE_Rs_57_57;
        MR_Word STATE_VARIABLE_Rs_58_58;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_56_56);
        mercury__string__to_string__arg_to_revstrings_5_p_0(NonCanon_7, Var_172, STATE_VARIABLE_Rs_56_56, &STATE_VARIABLE_Rs_57_57);
        mercury__string__to_string__term_args_to_revstrings_5_p_0(NonCanon_7, Var_171, STATE_VARIABLE_Rs_57_57, &STATE_VARIABLE_Rs_58_58);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_58_58, &STATE_VARIABLE_Rs_43_43);
      }
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "[|]") == 0))
    {
      MR_Word ListTail_16;
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_39_39;
      MR_Word STATE_VARIABLE_Rs_40_40;
      MR_Word STATE_VARIABLE_Rs_41_41;
      MR_String Var_42;

      succeeded = (Var_171 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListTail_16 = ((MR_Word) ((MR_hl_field(1, Var_171, (MR_Integer) 0))));
        Var_37 = ((MR_Word) ((MR_hl_field(1, Var_171, (MR_Integer) 1))));
        succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_38 = (MR_String) "[";
          mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_39_39);
          mercury__string__to_string__arg_to_revstrings_5_p_0(NonCanon_7, Var_172, STATE_VARIABLE_Rs_39_39, &STATE_VARIABLE_Rs_40_40);
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_40_40, &STATE_VARIABLE_Rs_41_41);
          Var_42 = (MR_String) "]";
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_41_41, &STATE_VARIABLE_Rs_43_43);
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    *STATE_VARIABLE_Rs_35 = STATE_VARIABLE_Rs_43_43;
  else
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
  else
  {
    MR_Word Var_169 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 1))));
    MR_Word Var_170 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 0))));

    if ((Var_169 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpInfos_23;

      succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_23);
      if (succeeded)
      {
        MR_Word OpPrio_24;
        MR_Word GtOrGeA_25;
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, (MR_Integer) 2))));

        succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OpPrio_24 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 0))));
          GtOrGeA_25 = ((MR_Unsigned) ((MR_hl_field(1, Var_62, (MR_Integer) 1))) & (MR_Integer) 1);
          {
            MR_Word TypeInfo_160_160;
            MR_Word MinPrioA_26;
            MR_Word STATE_VARIABLE_Rs_64_64;
            MR_String Var_65;
            MR_Word STATE_VARIABLE_Rs_66_66;
            MR_Word STATE_VARIABLE_Rs_68_68;
            MR_Box Var_69;
            MR_Word STATE_VARIABLE_Rs_70_70;

            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_64_64);
            Var_65 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
            mercury__string__to_string__add_revstring_3_p_0(Var_65, STATE_VARIABLE_Rs_64_64, &STATE_VARIABLE_Rs_66_66);
            mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_66_66, &STATE_VARIABLE_Rs_68_68);
            switch (GtOrGeA_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                MinPrioA_26 = OpPrio_24;
                break;
              case (MR_Integer) 0:
                MinPrioA_26 = mercury__ops__increment_priority_1_f_0(OpPrio_24);
                break;
            }
            Var_69 = mercury__univ__univ_value_1_f_0(&TypeInfo_160_160, Var_170);
            mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_160_160, NonCanon_7, MinPrioA_26, Var_69, STATE_VARIABLE_Rs_68_68, &STATE_VARIABLE_Rs_70_70);
            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_70_70, STATE_VARIABLE_Rs_35);
          }
        }
        else
        {
          MR_Word OpPrio_126;
          MR_Word GtOrGeA_127;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, (MR_Integer) 3))));

          succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_126 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
            GtOrGeA_127 = ((MR_Unsigned) ((MR_hl_field(1, Var_73, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_161_161;
              MR_Word STATE_VARIABLE_Rs_75_75;
              MR_Box Var_76;
              MR_Word STATE_VARIABLE_Rs_77_77;
              MR_Word STATE_VARIABLE_Rs_79_79;
              MR_String Var_80;
              MR_Word STATE_VARIABLE_Rs_81_81;
              MR_Word MinPrioA_125;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_75_75);
              switch (GtOrGeA_127) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_125 = OpPrio_126;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_125 = mercury__ops__increment_priority_1_f_0(OpPrio_126);
                  break;
              }
              Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_161_161, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_161_161, NonCanon_7, MinPrioA_125, Var_76, STATE_VARIABLE_Rs_75_75, &STATE_VARIABLE_Rs_77_77);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_77_77, &STATE_VARIABLE_Rs_79_79);
              Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_79_79, &STATE_VARIABLE_Rs_81_81);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_81_81, STATE_VARIABLE_Rs_35);
            }
          }
          else
            mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, Var_169, (MR_Integer) 1))));
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(1, Var_169, (MR_Integer) 0))));

      if ((Var_173 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OpInfos_140;

        succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_140);
        if (succeeded)
        {
          MR_Word GtOrGeB_28;
          MR_Word OpPrio_137;
          MR_Word GtOrGeA_138;
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, (MR_Integer) 0))));

          succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_137 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
            GtOrGeA_138 = ((((MR_Unsigned) ((MR_hl_field(1, Var_88, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            GtOrGeB_28 = ((MR_Unsigned) ((MR_hl_field(1, Var_88, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_163_163;
              MR_Word TypeInfo_164_164;
              MR_Word MinPrioB_29;
              MR_Word STATE_VARIABLE_Rs_90_90;
              MR_Box Var_91;
              MR_Word STATE_VARIABLE_Rs_92_92;
              MR_Word STATE_VARIABLE_Rs_94_94;
              MR_Box Var_101;
              MR_Word STATE_VARIABLE_Rs_102_102;
              MR_Word MinPrioA_129;

              switch (GtOrGeA_138) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_129 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_129 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              switch (GtOrGeB_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioB_29 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioB_29 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_90_90);
              Var_91 = mercury__univ__univ_value_1_f_0(&TypeInfo_163_163, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_163_163, NonCanon_7, MinPrioA_129, Var_91, STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_92_92);
              succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
              if (succeeded)
                mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_94_94);
              else
              {
                MR_Word STATE_VARIABLE_Rs_96_96;
                MR_String Var_97;
                MR_Word STATE_VARIABLE_Rs_98_98;

                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_96_96);
                Var_97 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_97, STATE_VARIABLE_Rs_96_96, &STATE_VARIABLE_Rs_98_98);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_98_98, &STATE_VARIABLE_Rs_94_94);
              }
              Var_101 = mercury__univ__univ_value_1_f_0(&TypeInfo_164_164, Var_174);
              mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_164_164, NonCanon_7, MinPrioB_29, Var_101, STATE_VARIABLE_Rs_94_94, &STATE_VARIABLE_Rs_102_102);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_102_102, STATE_VARIABLE_Rs_35);
            }
          }
          else
          {
            MR_Word OpPrio_132;
            MR_Word GtOrGeA_133;
            MR_Word GtOrGeB_135;
            MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, (MR_Integer) 1))));

            succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              OpPrio_132 = ((MR_Word) ((MR_hl_field(1, Var_105, (MR_Integer) 0))));
              GtOrGeA_133 = ((((MR_Unsigned) ((MR_hl_field(1, Var_105, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              GtOrGeB_135 = ((MR_Unsigned) ((MR_hl_field(1, Var_105, (MR_Integer) 1))) & (MR_Integer) 1);
              {
                MR_Word TypeInfo_165_165;
                MR_Word TypeInfo_166_166;
                MR_Word STATE_VARIABLE_Rs_107_107;
                MR_String Var_108;
                MR_Word STATE_VARIABLE_Rs_109_109;
                MR_Word STATE_VARIABLE_Rs_111_111;
                MR_Box Var_112;
                MR_Word STATE_VARIABLE_Rs_113_113;
                MR_Word STATE_VARIABLE_Rs_115_115;
                MR_Box Var_116;
                MR_Word STATE_VARIABLE_Rs_117_117;
                MR_Word MinPrioA_130;
                MR_Word MinPrioB_131;

                switch (GtOrGeA_133) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioA_130 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioA_130 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                switch (GtOrGeB_135) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioB_131 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioB_131 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_107_107);
                Var_108 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_108, STATE_VARIABLE_Rs_107_107, &STATE_VARIABLE_Rs_109_109);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_109_109, &STATE_VARIABLE_Rs_111_111);
                Var_112 = mercury__univ__univ_value_1_f_0(&TypeInfo_165_165, Var_170);
                mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_165_165, NonCanon_7, MinPrioA_130, Var_112, STATE_VARIABLE_Rs_111_111, &STATE_VARIABLE_Rs_113_113);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_113_113, &STATE_VARIABLE_Rs_115_115);
                Var_116 = mercury__univ__univ_value_1_f_0(&TypeInfo_166_166, Var_174);
                mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_166_166, NonCanon_7, MinPrioB_131, Var_116, STATE_VARIABLE_Rs_115_115, &STATE_VARIABLE_Rs_117_117);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_117_117, STATE_VARIABLE_Rs_35);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
        }
        else
          mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_0(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfSTATE_VARIABLE_Rs_25 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
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
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
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

void MR_CALL 
mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0(
  MR_Word TypeInfo_for_T_108,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_135)
{
  MR_bool succeeded;
  MR_String String_12;
  MR_Box conv0_String_12;

  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
  if (succeeded)
  {
    String_12 = ((MR_String) (conv0_String_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_35;
    MR_String Var_36;

    Var_36 = mercury__term_io__quoted_string_1_f_0(String_12);
    mercury__string__to_string__add_revstring_3_p_0(Var_36, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_35);
    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_35;
  }
  else
  {
    MR_Char Char_13;
    MR_Box conv1_Char_13;

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
    if (succeeded)
    {
      Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_136;

      Var_38 = mercury__term_io__quoted_char_to_string_1_f_0(Char_13);
      mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_136);
      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_136;
    }
    else
    {
      MR_Integer Int_14;
      MR_Box conv2_Int_14;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
      if (succeeded)
      {
        Int_14 = ((MR_Integer) (conv2_Int_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String Var_40;
        MR_Word STATE_VARIABLE_Rs_137;

        Var_40 = mercury__string__int_to_string_1_f_0(Int_14);
        mercury__string__to_string__add_revstring_3_p_0(Var_40, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_137);
        *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_137;
      }
      else
      {
        MR_Unsigned UInt_15;
        MR_Box conv3_UInt_15;

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
        if (succeeded)
        {
          UInt_15 = ((MR_Unsigned) (conv3_UInt_15));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_42;
          MR_String Var_44;
          MR_Word STATE_VARIABLE_Rs_138;

          Var_44 = mercury__string__uint_to_string_1_f_0(UInt_15);
          Var_42 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) "u");
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_138);
          *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_138;
        }
        else
        {
          int8_t Int8_16;
          MR_Box conv4_Int8_16;

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
          if (succeeded)
          {
            Int8_16 = ((int8_t) (MR_Word) conv4_Int8_16);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_String Var_46;
            MR_String Var_48;
            MR_Word STATE_VARIABLE_Rs_139;

            Var_48 = mercury__string__int8_to_string_1_f_0(Int8_16);
            Var_46 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "i8");
            mercury__string__to_string__add_revstring_3_p_0(Var_46, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_139);
            *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_139;
          }
          else
          {
            uint8_t UInt8_17;
            MR_Box conv5_UInt8_17;

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
            if (succeeded)
            {
              UInt8_17 = ((uint8_t) (MR_Word) conv5_UInt8_17);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_50;
              MR_String Var_52;
              MR_Word STATE_VARIABLE_Rs_140;

              Var_52 = mercury__string__uint8_to_string_1_f_0(UInt8_17);
              Var_50 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) "u8");
              mercury__string__to_string__add_revstring_3_p_0(Var_50, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_140);
              *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_140;
            }
            else
            {
              int16_t Int16_18;
              MR_Box conv6_Int16_18;

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
              if (succeeded)
              {
                Int16_18 = ((int16_t) (MR_Word) conv6_Int16_18);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_54;
                MR_String Var_56;
                MR_Word STATE_VARIABLE_Rs_141;

                Var_56 = mercury__string__int16_to_string_1_f_0(Int16_18);
                Var_54 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) "i16");
                mercury__string__to_string__add_revstring_3_p_0(Var_54, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_141);
                *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_141;
              }
              else
              {
                uint16_t UInt16_19;
                MR_Box conv7_UInt16_19;

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
                if (succeeded)
                {
                  UInt16_19 = ((uint16_t) (MR_Word) conv7_UInt16_19);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_58;
                  MR_String Var_60;
                  MR_Word STATE_VARIABLE_Rs_142;

                  Var_60 = mercury__string__uint16_to_string_1_f_0(UInt16_19);
                  Var_58 = mercury__string__f_43_43_2_f_0(Var_60, (MR_String) "u16");
                  mercury__string__to_string__add_revstring_3_p_0(Var_58, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_142);
                  *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_142;
                }
                else
                {
                  int32_t Int32_20;
                  MR_Box conv8_Int32_20;

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
                  if (succeeded)
                  {
                    Int32_20 = ((int32_t) (MR_Word) conv8_Int32_20);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_String Var_62;
                    MR_String Var_64;
                    MR_Word STATE_VARIABLE_Rs_143;

                    Var_64 = mercury__string__int32_to_string_1_f_0(Int32_20);
                    Var_62 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "i32");
                    mercury__string__to_string__add_revstring_3_p_0(Var_62, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_143);
                    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_143;
                  }
                  else
                  {
                    uint32_t UInt32_21;
                    MR_Box conv9_UInt32_21;

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
                    if (succeeded)
                    {
                      UInt32_21 = ((uint32_t) (MR_Word) conv9_UInt32_21);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_String Var_66;
                      MR_String Var_68;
                      MR_Word STATE_VARIABLE_Rs_144;

                      Var_68 = mercury__string__uint32_to_string_1_f_0(UInt32_21);
                      Var_66 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) "u32");
                      mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_144);
                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_144;
                    }
                    else
                    {
                      MR_Float Float_22;
                      MR_Box conv10_Float_22;

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
                      if (succeeded)
                      {
                        Float_22 = MR_unbox_float(conv10_Float_22);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_String Var_70;
                        MR_Word STATE_VARIABLE_Rs_145;

                        Var_70 = mercury__string__float_to_string_1_f_0(Float_22);
                        mercury__string__to_string__add_revstring_3_p_0(Var_70, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_145);
                        *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_145;
                      }
                      else
                      {
                        MR_Box Bitmap_23;
                        MR_Box conv11_Bitmap_23;

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
                        if (succeeded)
                        {
                          Bitmap_23 = ((MR_Box) (conv11_Bitmap_23));
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          MR_String Var_72;
                          MR_String Var_74;
                          MR_Word STATE_VARIABLE_Rs_146;

                          Var_74 = mercury__bitmap__to_string_1_f_0(Bitmap_23);
                          Var_72 = mercury__term_io__quoted_string_1_f_0(Var_74);
                          mercury__string__to_string__add_revstring_3_p_0(Var_72, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_146);
                          *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_146;
                        }
                        else
                        {
                          MR_Word TypeDesc_24;
                          MR_Box conv12_TypeDesc_24;

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
                          if (succeeded)
                          {
                            TypeDesc_24 = ((MR_Word) (conv12_TypeDesc_24));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            MR_Word STATE_VARIABLE_Rs_147;

                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(TypeDesc_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_147);
                            *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_147;
                          }
                          else
                          {
                            MR_Word TypeCtorDesc_25;
                            MR_Box conv13_TypeCtorDesc_25;

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
                            if (succeeded)
                            {
                              TypeCtorDesc_25 = ((MR_Word) (conv13_TypeCtorDesc_25));
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                            {
                              MR_Word STATE_VARIABLE_Rs_148;

                              mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(TypeCtorDesc_25, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_148);
                              *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_148;
                            }
                            else
                            {
                              MR_Word C_Pointer_26;
                              MR_Box conv14_C_Pointer_26;

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
                              if (succeeded)
                              {
                                C_Pointer_26 = ((MR_Word) (conv14_C_Pointer_26));
                                succeeded = MR_TRUE;
                              }
                              if (succeeded)
                              {
                                MR_String Var_77;
                                MR_Word STATE_VARIABLE_Rs_149;

                                Var_77 = mercury__string__c_pointer_to_string_1_f_0(C_Pointer_26);
                                mercury__string__to_string__add_revstring_3_p_0(Var_77, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_149);
                                *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_149;
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

                                Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ElemType_29 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 0))));
                                  Var_80 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 1))));
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
                                  MR_Word TypeInfo_124_124;
                                  MR_Word TypeInfo_126_126;
                                  MR_ArrayPtr Array_31;
                                  MR_Word STATE_VARIABLE_Rs_150;
                                  MR_Box conv15_Array_31;

                                  mercury__type_desc__has_type_2_p_0(&TypeInfo_124_124, ElemType_29);
                                  {
                                    TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(0, TypeInfo_126_126, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                    MR_hl_field(0, TypeInfo_126_126, 1) = ((MR_Box) (TypeInfo_124_124));
                                  }
                                  mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_126_126, X_10, &conv15_Array_31);
                                  Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                  mercury__string__to_string__array_to_revstrings_5_p_0(TypeInfo_124_124, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_150);
                                  *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_150;
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

                                  Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                  succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_107 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 0))));
                                    Var_85 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 1))));
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
                                    MR_Word TypeInfo_127_127;
                                    MR_Word TypeInfo_129_129;
                                    MR_Box VersionArray_32;
                                    MR_Word STATE_VARIABLE_Rs_151;
                                    MR_Box conv16_VersionArray_32;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_127_127, ElemType_107);
                                    {
                                      TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, TypeInfo_129_129, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                      MR_hl_field(0, TypeInfo_129_129, 1) = ((MR_Box) (TypeInfo_127_127));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_129_129, X_10, &conv16_VersionArray_32);
                                    VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                    mercury__string__to_string__version_array_to_revstrings_5_p_0(TypeInfo_127_127, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_151);
                                    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_151;
                                  }
                                  else
                                  {
                                    MR_Word Var_89;
                                    MR_Word Var_90;
                                    MR_String Var_91;
                                    MR_String Var_92;
                                    MR_Word TypeCtor_98;
                                    MR_Word ArgTypes_99;

                                    Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                    succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_90 = ((MR_Word) ((MR_hl_field(1, ArgTypes_99, (MR_Integer) 1))));
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
                                      MR_Word STATE_VARIABLE_Rs_152;
                                      MR_Box conv17_PrivateBuiltinTypeInfo_33;

                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                      PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                      mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_152);
                                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_152;
                                    }
                                    else
                                    {
                                      MR_Word STATE_VARIABLE_Rs_153;

                                      mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(TypeInfo_for_T_108, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_153);
                                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_153;
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
mercury__string__to_string__version_array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_14_14;
  MR_Word Var_15;
  MR_Integer Var_25;
  MR_Integer Var_26;
  MR_Word Priority_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_29;
  MR_Word * AddrSTATE_VARIABLE_Rs_16_32;

  {
    STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)Array_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
  Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(Array_8, Var_25, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Priority_29 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_29 = ((MR_Word) (conv1_Priority_29));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_16_32 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, (MR_Integer) 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0(TypeInfo_20_20, NonCanon_6, Priority_29, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, AddrSTATE_VARIABLE_Rs_16_32);
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_14_14;
  MR_Word Var_15;
  MR_Word Priority_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_21;
  MR_Word * AddrSTATE_VARIABLE_Rs_16_23;

  {
    STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
  mercury__array__to_list_2_p_0(TypeInfo_for_T_18, Array_8, &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Priority_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_21 = ((MR_Word) (conv1_Priority_21));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_16_23 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, (MR_Integer) 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0(TypeInfo_20_20, NonCanon_6, Priority_21, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, AddrSTATE_VARIABLE_Rs_16_23);
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word STATE_VARIABLE_Rs_24_24;
  MR_Word TypeClassInfo_for_op_table_33;
  MR_Word Var_18;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_18;

  if (succeeded)
  {
    TypeClassInfo_for_op_table_33 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
    if (succeeded)
    {
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 13))));
      conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)));
      Var_18 = ((MR_Word) (conv2_Var_18));
      Var_34 = (MR_Unsigned) (Priority_10);
      Var_35 = (MR_Unsigned) (Var_18);
      succeeded = (Var_34 > Var_35);
      if (!(succeeded))
        succeeded = (Var_34 == Var_35);
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_20_20;
    MR_String Var_21;
    MR_Word STATE_VARIABLE_Rs_22_22;

    {
      STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
    Var_21 = mercury__term_io__quoted_atom_1_f_0(Functor_11);
    {
      STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_20_20));
    }
    {
      STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_22_22));
    }
  }
  else
  {
    MR_String Var_25;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;

    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_4[0]), Functor_11, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_38);
    Var_41 = (MR_Word) (Var_38);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, &Var_42);
    Var_25 = mercury__string__append_list_1_f_0(Var_42);
    {
      STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
  }
  if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_24_24;
  else
  {
    MR_Word TypeInfo_15_47;
    MR_Word Y_14 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 0))));
    MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Rs_29_29;
    MR_Word STATE_VARIABLE_Rs_30_30;
    MR_Word Priority_44;
    MR_Box Var_45;
    MR_Word * AddrSTATE_VARIABLE_Rs_31_48;

    {
      STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_24_24));
    }
    Priority_44 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
    Var_45 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_47, Y_14);
    mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_47, NonCanon_8, Priority_44, Var_45, STATE_VARIABLE_Rs_29_29, &STATE_VARIABLE_Rs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSTATE_VARIABLE_Rs_31_48 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_17, (MR_Integer) 1)));
    mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_0(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_30_30, AddrSTATE_VARIABLE_Rs_31_48);
  }
}

MR_String MR_CALL 
mercury__string__to_string__string_ops_impl_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box Univ_5)
{
  MR_String String_6;
  MR_Word RevStrings_9;
  MR_Word Var_11;
  MR_Word Priority_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Priority_13;

  conv1_Priority_13 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_13 = ((MR_Word) (conv1_Priority_13));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_8, (MR_Integer) 1, Priority_13, Univ_5, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
  String_6 = mercury__string__append_list_1_f_0(Var_11);
  return String_6;
}

MR_String MR_CALL 
mercury__string__to_string__string_impl_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box Univ_3)
{
  MR_String String_4;
  MR_Word RevStrings_8;
  MR_Word Var_10;
  MR_Word Priority_12;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_12;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Priority_12 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_12 = ((MR_Word) (conv1_Priority_12));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_7, (MR_Integer) 1, Priority_12, Univ_3, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_8);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_8, &Var_10);
  String_4 = mercury__string__append_list_1_f_0(Var_10);
  return String_4;
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_1(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word Priority_10;
  MR_Box Var_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 15))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(0, X_8, (MR_Integer) 0))));
  Var_13 = (MR_hl_field(0, X_8, (MR_Integer) 1));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_15, NonCanon_6, Priority_10, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
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
    MR_Word TypeInfo_27_27 = ((MR_Word) ((MR_hl_field(0, Univ_8, (MR_Integer) 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(0, Univ_8, (MR_Integer) 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_27_27, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_32;
      MR_Word STATE_VARIABLE_Rs_21_21;
      MR_Word STATE_VARIABLE_Rs_22_22;
      MR_Word Priority_29;
      MR_Box Var_30;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_29 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_30 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_32, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_32, NonCanon_6, Priority_29, Var_30, STATE_VARIABLE_Rs_21_21, &STATE_VARIABLE_Rs_22_22);
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
        MR_Word TypeInfo_28_28;
        MR_Word STATE_VARIABLE_Rs_25_25;
        MR_Box Var_26;
        MR_Word Priority_33;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Priority_33;

        {
          STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(1, STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(0, Univ_8, (MR_Integer) 0))));
        Var_26 = (MR_hl_field(0, Univ_8, (MR_Integer) 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
        conv1_Priority_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Priority_33 = ((MR_Word) (conv1_Priority_33));
        mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_28_28, NonCanon_6, Priority_33, Var_26, STATE_VARIABLE_Rs_25_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word Priority_10;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_13, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_1(
  MR_Word TypeInfo_for_T_108,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String String_12;
  MR_Box conv0_String_12;

  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
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

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
    if (succeeded)
    {
      Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_38;

      Var_38 = mercury__term_io__quoted_char_to_string_1_f_0(Char_13);
      mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Integer Int_14;
      MR_Box conv2_Int_14;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
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

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
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

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
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

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
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

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
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

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
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

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
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

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
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

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
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

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
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

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
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

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
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

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
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

                                Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ElemType_29 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 0))));
                                  Var_80 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 1))));
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
                                  MR_Word TypeInfo_124_124;
                                  MR_Word TypeInfo_126_126;
                                  MR_ArrayPtr Array_31;
                                  MR_Box conv15_Array_31;

                                  mercury__type_desc__has_type_2_p_0(&TypeInfo_124_124, ElemType_29);
                                  {
                                    TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(0, TypeInfo_126_126, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                    MR_hl_field(0, TypeInfo_126_126, 1) = ((MR_Box) (TypeInfo_124_124));
                                  }
                                  mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_126_126, X_10, &conv15_Array_31);
                                  Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                  mercury__string__to_string__array_to_revstrings_5_p_1(TypeInfo_124_124, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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

                                  Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                  succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_107 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 0))));
                                    Var_85 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 1))));
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
                                    MR_Word TypeInfo_127_127;
                                    MR_Word TypeInfo_129_129;
                                    MR_Box VersionArray_32;
                                    MR_Box conv16_VersionArray_32;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_127_127, ElemType_107);
                                    {
                                      TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, TypeInfo_129_129, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                      MR_hl_field(0, TypeInfo_129_129, 1) = ((MR_Box) (TypeInfo_127_127));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_129_129, X_10, &conv16_VersionArray_32);
                                    VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                    mercury__string__to_string__version_array_to_revstrings_5_p_1(TypeInfo_127_127, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                  }
                                  else
                                  {
                                    MR_Word Var_89;
                                    MR_Word Var_90;
                                    MR_String Var_91;
                                    MR_String Var_92;
                                    MR_Word TypeCtor_98;
                                    MR_Word ArgTypes_99;

                                    Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                    succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_90 = ((MR_Word) ((MR_hl_field(1, ArgTypes_99, (MR_Integer) 1))));
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

                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                      PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                      mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
                                    }
                                    else
                                      mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(TypeInfo_for_T_108, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
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
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String Functor_12;
  MR_Word Args_14;
  MR_Integer _Arity_13;
  MR_Word STATE_VARIABLE_Rs_43_43;

  mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_157, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((strcmp(Functor_12, (MR_String) "[]") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_43_43);
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_43_43);
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
  {
    MR_Word Var_171 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 1))));
    MR_Word Var_172 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 0))));

    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      if ((Var_171 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeInfo_158_158;
        MR_Word STATE_VARIABLE_Rs_50_50;
        MR_Box Var_51;
        MR_Word STATE_VARIABLE_Rs_52_52;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_50_50);
        Var_51 = mercury__univ__univ_value_1_f_0(&TypeInfo_158_158, Var_172);
        mercury__string__to_string__value_to_revstrings_5_p_1(TypeInfo_158_158, NonCanon_7, Var_51, STATE_VARIABLE_Rs_50_50, &STATE_VARIABLE_Rs_52_52);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_52_52, &STATE_VARIABLE_Rs_43_43);
      }
      else
      {
        MR_Word STATE_VARIABLE_Rs_56_56;
        MR_Word STATE_VARIABLE_Rs_57_57;
        MR_Word STATE_VARIABLE_Rs_58_58;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_56_56);
        mercury__string__to_string__arg_to_revstrings_5_p_1(NonCanon_7, Var_172, STATE_VARIABLE_Rs_56_56, &STATE_VARIABLE_Rs_57_57);
        mercury__string__to_string__term_args_to_revstrings_5_p_1(NonCanon_7, Var_171, STATE_VARIABLE_Rs_57_57, &STATE_VARIABLE_Rs_58_58);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_58_58, &STATE_VARIABLE_Rs_43_43);
      }
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "[|]") == 0))
    {
      MR_Word ListTail_16;
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_39_39;
      MR_Word STATE_VARIABLE_Rs_40_40;
      MR_Word STATE_VARIABLE_Rs_41_41;
      MR_String Var_42;

      succeeded = (Var_171 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListTail_16 = ((MR_Word) ((MR_hl_field(1, Var_171, (MR_Integer) 0))));
        Var_37 = ((MR_Word) ((MR_hl_field(1, Var_171, (MR_Integer) 1))));
        succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_38 = (MR_String) "[";
          mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_39_39);
          mercury__string__to_string__arg_to_revstrings_5_p_1(NonCanon_7, Var_172, STATE_VARIABLE_Rs_39_39, &STATE_VARIABLE_Rs_40_40);
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_40_40, &STATE_VARIABLE_Rs_41_41);
          Var_42 = (MR_String) "]";
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_41_41, &STATE_VARIABLE_Rs_43_43);
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    *STATE_VARIABLE_Rs_35 = STATE_VARIABLE_Rs_43_43;
  else
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
  else
  {
    MR_Word Var_169 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 1))));
    MR_Word Var_170 = ((MR_Word) ((MR_hl_field(1, Args_14, (MR_Integer) 0))));

    if ((Var_169 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpInfos_23;

      succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_23);
      if (succeeded)
      {
        MR_Word OpPrio_24;
        MR_Word GtOrGeA_25;
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, (MR_Integer) 2))));

        succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OpPrio_24 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 0))));
          GtOrGeA_25 = ((MR_Unsigned) ((MR_hl_field(1, Var_62, (MR_Integer) 1))) & (MR_Integer) 1);
          {
            MR_Word TypeInfo_160_160;
            MR_Word MinPrioA_26;
            MR_Word STATE_VARIABLE_Rs_64_64;
            MR_String Var_65;
            MR_Word STATE_VARIABLE_Rs_66_66;
            MR_Word STATE_VARIABLE_Rs_68_68;
            MR_Box Var_69;
            MR_Word STATE_VARIABLE_Rs_70_70;

            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_64_64);
            Var_65 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
            mercury__string__to_string__add_revstring_3_p_0(Var_65, STATE_VARIABLE_Rs_64_64, &STATE_VARIABLE_Rs_66_66);
            mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_66_66, &STATE_VARIABLE_Rs_68_68);
            switch (GtOrGeA_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                MinPrioA_26 = OpPrio_24;
                break;
              case (MR_Integer) 0:
                MinPrioA_26 = mercury__ops__increment_priority_1_f_0(OpPrio_24);
                break;
            }
            Var_69 = mercury__univ__univ_value_1_f_0(&TypeInfo_160_160, Var_170);
            mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_160_160, NonCanon_7, MinPrioA_26, Var_69, STATE_VARIABLE_Rs_68_68, &STATE_VARIABLE_Rs_70_70);
            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_70_70, STATE_VARIABLE_Rs_35);
          }
        }
        else
        {
          MR_Word OpPrio_126;
          MR_Word GtOrGeA_127;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, (MR_Integer) 3))));

          succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_126 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
            GtOrGeA_127 = ((MR_Unsigned) ((MR_hl_field(1, Var_73, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_161_161;
              MR_Word STATE_VARIABLE_Rs_75_75;
              MR_Box Var_76;
              MR_Word STATE_VARIABLE_Rs_77_77;
              MR_Word STATE_VARIABLE_Rs_79_79;
              MR_String Var_80;
              MR_Word STATE_VARIABLE_Rs_81_81;
              MR_Word MinPrioA_125;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_75_75);
              switch (GtOrGeA_127) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_125 = OpPrio_126;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_125 = mercury__ops__increment_priority_1_f_0(OpPrio_126);
                  break;
              }
              Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_161_161, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_161_161, NonCanon_7, MinPrioA_125, Var_76, STATE_VARIABLE_Rs_75_75, &STATE_VARIABLE_Rs_77_77);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_77_77, &STATE_VARIABLE_Rs_79_79);
              Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_79_79, &STATE_VARIABLE_Rs_81_81);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_81_81, STATE_VARIABLE_Rs_35);
            }
          }
          else
            mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, Var_169, (MR_Integer) 1))));
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(1, Var_169, (MR_Integer) 0))));

      if ((Var_173 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OpInfos_140;

        succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_140);
        if (succeeded)
        {
          MR_Word GtOrGeB_28;
          MR_Word OpPrio_137;
          MR_Word GtOrGeA_138;
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, (MR_Integer) 0))));

          succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_137 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
            GtOrGeA_138 = ((((MR_Unsigned) ((MR_hl_field(1, Var_88, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            GtOrGeB_28 = ((MR_Unsigned) ((MR_hl_field(1, Var_88, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_163_163;
              MR_Word TypeInfo_164_164;
              MR_Word MinPrioB_29;
              MR_Word STATE_VARIABLE_Rs_90_90;
              MR_Box Var_91;
              MR_Word STATE_VARIABLE_Rs_92_92;
              MR_Word STATE_VARIABLE_Rs_94_94;
              MR_Box Var_101;
              MR_Word STATE_VARIABLE_Rs_102_102;
              MR_Word MinPrioA_129;

              switch (GtOrGeA_138) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_129 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_129 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              switch (GtOrGeB_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioB_29 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioB_29 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_90_90);
              Var_91 = mercury__univ__univ_value_1_f_0(&TypeInfo_163_163, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_163_163, NonCanon_7, MinPrioA_129, Var_91, STATE_VARIABLE_Rs_90_90, &STATE_VARIABLE_Rs_92_92);
              succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
              if (succeeded)
                mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_94_94);
              else
              {
                MR_Word STATE_VARIABLE_Rs_96_96;
                MR_String Var_97;
                MR_Word STATE_VARIABLE_Rs_98_98;

                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_92_92, &STATE_VARIABLE_Rs_96_96);
                Var_97 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_97, STATE_VARIABLE_Rs_96_96, &STATE_VARIABLE_Rs_98_98);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_98_98, &STATE_VARIABLE_Rs_94_94);
              }
              Var_101 = mercury__univ__univ_value_1_f_0(&TypeInfo_164_164, Var_174);
              mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_164_164, NonCanon_7, MinPrioB_29, Var_101, STATE_VARIABLE_Rs_94_94, &STATE_VARIABLE_Rs_102_102);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_102_102, STATE_VARIABLE_Rs_35);
            }
          }
          else
          {
            MR_Word OpPrio_132;
            MR_Word GtOrGeA_133;
            MR_Word GtOrGeB_135;
            MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, (MR_Integer) 1))));

            succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              OpPrio_132 = ((MR_Word) ((MR_hl_field(1, Var_105, (MR_Integer) 0))));
              GtOrGeA_133 = ((((MR_Unsigned) ((MR_hl_field(1, Var_105, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              GtOrGeB_135 = ((MR_Unsigned) ((MR_hl_field(1, Var_105, (MR_Integer) 1))) & (MR_Integer) 1);
              {
                MR_Word TypeInfo_165_165;
                MR_Word TypeInfo_166_166;
                MR_Word STATE_VARIABLE_Rs_107_107;
                MR_String Var_108;
                MR_Word STATE_VARIABLE_Rs_109_109;
                MR_Word STATE_VARIABLE_Rs_111_111;
                MR_Box Var_112;
                MR_Word STATE_VARIABLE_Rs_113_113;
                MR_Word STATE_VARIABLE_Rs_115_115;
                MR_Box Var_116;
                MR_Word STATE_VARIABLE_Rs_117_117;
                MR_Word MinPrioA_130;
                MR_Word MinPrioB_131;

                switch (GtOrGeA_133) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioA_130 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioA_130 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                switch (GtOrGeB_135) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioB_131 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioB_131 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_107_107);
                Var_108 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_108, STATE_VARIABLE_Rs_107_107, &STATE_VARIABLE_Rs_109_109);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_109_109, &STATE_VARIABLE_Rs_111_111);
                Var_112 = mercury__univ__univ_value_1_f_0(&TypeInfo_165_165, Var_170);
                mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_165_165, NonCanon_7, MinPrioA_130, Var_112, STATE_VARIABLE_Rs_111_111, &STATE_VARIABLE_Rs_113_113);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_113_113, &STATE_VARIABLE_Rs_115_115);
                Var_116 = mercury__univ__univ_value_1_f_0(&TypeInfo_166_166, Var_174);
                mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_166_166, NonCanon_7, MinPrioB_131, Var_116, STATE_VARIABLE_Rs_115_115, &STATE_VARIABLE_Rs_117_117);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_117_117, STATE_VARIABLE_Rs_35);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
        }
        else
          mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_1(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfSTATE_VARIABLE_Rs_25 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
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
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Rs_19_19;
      MR_Word STATE_VARIABLE_Rs_20_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_19_19, &STATE_VARIABLE_Rs_20_20);
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

void MR_CALL 
mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1(
  MR_Word TypeInfo_for_T_108,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_135)
{
  MR_bool succeeded;
  MR_String String_12;
  MR_Box conv0_String_12;

  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv0_String_12);
  if (succeeded)
  {
    String_12 = ((MR_String) (conv0_String_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_35;
    MR_String Var_36;

    Var_36 = mercury__term_io__quoted_string_1_f_0(String_12);
    mercury__string__to_string__add_revstring_3_p_0(Var_36, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_35);
    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_35;
  }
  else
  {
    MR_Char Char_13;
    MR_Box conv1_Char_13;

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv1_Char_13);
    if (succeeded)
    {
      Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_136;

      Var_38 = mercury__term_io__quoted_char_to_string_1_f_0(Char_13);
      mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_136);
      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_136;
    }
    else
    {
      MR_Integer Int_14;
      MR_Box conv2_Int_14;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv2_Int_14);
      if (succeeded)
      {
        Int_14 = ((MR_Integer) (conv2_Int_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String Var_40;
        MR_Word STATE_VARIABLE_Rs_137;

        Var_40 = mercury__string__int_to_string_1_f_0(Int_14);
        mercury__string__to_string__add_revstring_3_p_0(Var_40, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_137);
        *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_137;
      }
      else
      {
        MR_Unsigned UInt_15;
        MR_Box conv3_UInt_15;

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv3_UInt_15);
        if (succeeded)
        {
          UInt_15 = ((MR_Unsigned) (conv3_UInt_15));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_42;
          MR_String Var_44;
          MR_Word STATE_VARIABLE_Rs_138;

          Var_44 = mercury__string__uint_to_string_1_f_0(UInt_15);
          Var_42 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) "u");
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_138);
          *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_138;
        }
        else
        {
          int8_t Int8_16;
          MR_Box conv4_Int8_16;

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv4_Int8_16);
          if (succeeded)
          {
            Int8_16 = ((int8_t) (MR_Word) conv4_Int8_16);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_String Var_46;
            MR_String Var_48;
            MR_Word STATE_VARIABLE_Rs_139;

            Var_48 = mercury__string__int8_to_string_1_f_0(Int8_16);
            Var_46 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "i8");
            mercury__string__to_string__add_revstring_3_p_0(Var_46, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_139);
            *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_139;
          }
          else
          {
            uint8_t UInt8_17;
            MR_Box conv5_UInt8_17;

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv5_UInt8_17);
            if (succeeded)
            {
              UInt8_17 = ((uint8_t) (MR_Word) conv5_UInt8_17);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_50;
              MR_String Var_52;
              MR_Word STATE_VARIABLE_Rs_140;

              Var_52 = mercury__string__uint8_to_string_1_f_0(UInt8_17);
              Var_50 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) "u8");
              mercury__string__to_string__add_revstring_3_p_0(Var_50, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_140);
              *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_140;
            }
            else
            {
              int16_t Int16_18;
              MR_Box conv6_Int16_18;

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv6_Int16_18);
              if (succeeded)
              {
                Int16_18 = ((int16_t) (MR_Word) conv6_Int16_18);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_54;
                MR_String Var_56;
                MR_Word STATE_VARIABLE_Rs_141;

                Var_56 = mercury__string__int16_to_string_1_f_0(Int16_18);
                Var_54 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) "i16");
                mercury__string__to_string__add_revstring_3_p_0(Var_54, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_141);
                *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_141;
              }
              else
              {
                uint16_t UInt16_19;
                MR_Box conv7_UInt16_19;

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv7_UInt16_19);
                if (succeeded)
                {
                  UInt16_19 = ((uint16_t) (MR_Word) conv7_UInt16_19);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_58;
                  MR_String Var_60;
                  MR_Word STATE_VARIABLE_Rs_142;

                  Var_60 = mercury__string__uint16_to_string_1_f_0(UInt16_19);
                  Var_58 = mercury__string__f_43_43_2_f_0(Var_60, (MR_String) "u16");
                  mercury__string__to_string__add_revstring_3_p_0(Var_58, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_142);
                  *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_142;
                }
                else
                {
                  int32_t Int32_20;
                  MR_Box conv8_Int32_20;

                  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_Int32_20);
                  if (succeeded)
                  {
                    Int32_20 = ((int32_t) (MR_Word) conv8_Int32_20);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_String Var_62;
                    MR_String Var_64;
                    MR_Word STATE_VARIABLE_Rs_143;

                    Var_64 = mercury__string__int32_to_string_1_f_0(Int32_20);
                    Var_62 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "i32");
                    mercury__string__to_string__add_revstring_3_p_0(Var_62, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_143);
                    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_143;
                  }
                  else
                  {
                    uint32_t UInt32_21;
                    MR_Box conv9_UInt32_21;

                    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv9_UInt32_21);
                    if (succeeded)
                    {
                      UInt32_21 = ((uint32_t) (MR_Word) conv9_UInt32_21);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_String Var_66;
                      MR_String Var_68;
                      MR_Word STATE_VARIABLE_Rs_144;

                      Var_68 = mercury__string__uint32_to_string_1_f_0(UInt32_21);
                      Var_66 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) "u32");
                      mercury__string__to_string__add_revstring_3_p_0(Var_66, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_144);
                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_144;
                    }
                    else
                    {
                      MR_Float Float_22;
                      MR_Box conv10_Float_22;

                      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv10_Float_22);
                      if (succeeded)
                      {
                        Float_22 = MR_unbox_float(conv10_Float_22);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_String Var_70;
                        MR_Word STATE_VARIABLE_Rs_145;

                        Var_70 = mercury__string__float_to_string_1_f_0(Float_22);
                        mercury__string__to_string__add_revstring_3_p_0(Var_70, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_145);
                        *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_145;
                      }
                      else
                      {
                        MR_Box Bitmap_23;
                        MR_Box conv11_Bitmap_23;

                        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), X_10, &conv11_Bitmap_23);
                        if (succeeded)
                        {
                          Bitmap_23 = ((MR_Box) (conv11_Bitmap_23));
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          MR_String Var_72;
                          MR_String Var_74;
                          MR_Word STATE_VARIABLE_Rs_146;

                          Var_74 = mercury__bitmap__to_string_1_f_0(Bitmap_23);
                          Var_72 = mercury__term_io__quoted_string_1_f_0(Var_74);
                          mercury__string__to_string__add_revstring_3_p_0(Var_72, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_146);
                          *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_146;
                        }
                        else
                        {
                          MR_Word TypeDesc_24;
                          MR_Box conv12_TypeDesc_24;

                          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv12_TypeDesc_24);
                          if (succeeded)
                          {
                            TypeDesc_24 = ((MR_Word) (conv12_TypeDesc_24));
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            MR_Word STATE_VARIABLE_Rs_147;

                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(TypeDesc_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_147);
                            *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_147;
                          }
                          else
                          {
                            MR_Word TypeCtorDesc_25;
                            MR_Box conv13_TypeCtorDesc_25;

                            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv13_TypeCtorDesc_25);
                            if (succeeded)
                            {
                              TypeCtorDesc_25 = ((MR_Word) (conv13_TypeCtorDesc_25));
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                            {
                              MR_Word STATE_VARIABLE_Rs_148;

                              mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(TypeCtorDesc_25, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_148);
                              *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_148;
                            }
                            else
                            {
                              MR_Word C_Pointer_26;
                              MR_Box conv14_C_Pointer_26;

                              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv14_C_Pointer_26);
                              if (succeeded)
                              {
                                C_Pointer_26 = ((MR_Word) (conv14_C_Pointer_26));
                                succeeded = MR_TRUE;
                              }
                              if (succeeded)
                              {
                                MR_String Var_77;
                                MR_Word STATE_VARIABLE_Rs_149;

                                Var_77 = mercury__string__c_pointer_to_string_1_f_0(C_Pointer_26);
                                mercury__string__to_string__add_revstring_3_p_0(Var_77, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_149);
                                *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_149;
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

                                Var_79 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                mercury__type_desc__type_ctor_and_args_3_p_0(Var_79, &TypeCtor_27, &ArgTypes_28);
                                succeeded = (ArgTypes_28 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ElemType_29 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 0))));
                                  Var_80 = ((MR_Word) ((MR_hl_field(1, ArgTypes_28, (MR_Integer) 1))));
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
                                  MR_Word TypeInfo_124_124;
                                  MR_Word TypeInfo_126_126;
                                  MR_ArrayPtr Array_31;
                                  MR_Word STATE_VARIABLE_Rs_150;
                                  MR_Box conv15_Array_31;

                                  mercury__type_desc__has_type_2_p_0(&TypeInfo_124_124, ElemType_29);
                                  {
                                    TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(0, TypeInfo_126_126, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                                    MR_hl_field(0, TypeInfo_126_126, 1) = ((MR_Box) (TypeInfo_124_124));
                                  }
                                  mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_126_126, X_10, &conv15_Array_31);
                                  Array_31 = ((MR_ArrayPtr) (conv15_Array_31));
                                  mercury__string__to_string__array_to_revstrings_5_p_1(TypeInfo_124_124, NonCanon_7, (MR_ArrayPtr) (Array_31), STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_150);
                                  *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_150;
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

                                  Var_84 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                  mercury__type_desc__type_ctor_and_args_3_p_0(Var_84, &TypeCtor_95, &ArgTypes_96);
                                  succeeded = (ArgTypes_96 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ElemType_107 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 0))));
                                    Var_85 = ((MR_Word) ((MR_hl_field(1, ArgTypes_96, (MR_Integer) 1))));
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
                                    MR_Word TypeInfo_127_127;
                                    MR_Word TypeInfo_129_129;
                                    MR_Box VersionArray_32;
                                    MR_Word STATE_VARIABLE_Rs_151;
                                    MR_Box conv16_VersionArray_32;

                                    mercury__type_desc__has_type_2_p_0(&TypeInfo_127_127, ElemType_107);
                                    {
                                      TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(0, TypeInfo_129_129, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                                      MR_hl_field(0, TypeInfo_129_129, 1) = ((MR_Box) (TypeInfo_127_127));
                                    }
                                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, TypeInfo_129_129, X_10, &conv16_VersionArray_32);
                                    VersionArray_32 = ((MR_Box) (conv16_VersionArray_32));
                                    mercury__string__to_string__version_array_to_revstrings_5_p_1(TypeInfo_127_127, NonCanon_7, VersionArray_32, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_151);
                                    *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_151;
                                  }
                                  else
                                  {
                                    MR_Word Var_89;
                                    MR_Word Var_90;
                                    MR_String Var_91;
                                    MR_String Var_92;
                                    MR_Word TypeCtor_98;
                                    MR_Word ArgTypes_99;

                                    Var_89 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_108);
                                    mercury__type_desc__type_ctor_and_args_3_p_0(Var_89, &TypeCtor_98, &ArgTypes_99);
                                    succeeded = (ArgTypes_99 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_90 = ((MR_Word) ((MR_hl_field(1, ArgTypes_99, (MR_Integer) 1))));
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
                                      MR_Word STATE_VARIABLE_Rs_152;
                                      MR_Box conv17_PrivateBuiltinTypeInfo_33;

                                      mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_108, (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0), X_10, &conv17_PrivateBuiltinTypeInfo_33);
                                      PrivateBuiltinTypeInfo_33 = ((MR_Word) (conv17_PrivateBuiltinTypeInfo_33));
                                      mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(PrivateBuiltinTypeInfo_33, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_152);
                                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_152;
                                    }
                                    else
                                    {
                                      MR_Word STATE_VARIABLE_Rs_153;

                                      mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(TypeInfo_for_T_108, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_153);
                                      *AddrOfSTATE_VARIABLE_Rs_135 = STATE_VARIABLE_Rs_153;
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
mercury__string__to_string__version_array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_14_14;
  MR_Word Var_15;
  MR_Integer Var_25;
  MR_Integer Var_26;
  MR_Word Priority_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_29;
  MR_Word * AddrSTATE_VARIABLE_Rs_16_32;

  {
    STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_1

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)Array_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
  Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(Array_8, Var_25, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Priority_29 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_29 = ((MR_Word) (conv1_Priority_29));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_16_32 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, (MR_Integer) 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1(TypeInfo_20_20, NonCanon_6, Priority_29, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, AddrSTATE_VARIABLE_Rs_16_32);
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_14_14;
  MR_Word Var_15;
  MR_Word Priority_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_21;
  MR_Word * AddrSTATE_VARIABLE_Rs_16_23;

  {
    STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
  mercury__array__to_list_2_p_0(TypeInfo_for_T_18, Array_8, &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Priority_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_21 = ((MR_Word) (conv1_Priority_21));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_16_23 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, (MR_Integer) 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1(TypeInfo_20_20, NonCanon_6, Priority_21, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_14_14, AddrSTATE_VARIABLE_Rs_16_23);
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word STATE_VARIABLE_Rs_24_24;
  MR_Word TypeClassInfo_for_op_table_33;
  MR_Word Var_18;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_18;

  if (succeeded)
  {
    TypeClassInfo_for_op_table_33 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
    if (succeeded)
    {
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 13))));
      conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)));
      Var_18 = ((MR_Word) (conv2_Var_18));
      Var_34 = (MR_Unsigned) (Priority_10);
      Var_35 = (MR_Unsigned) (Var_18);
      succeeded = (Var_34 > Var_35);
      if (!(succeeded))
        succeeded = (Var_34 == Var_35);
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_20_20;
    MR_String Var_21;
    MR_Word STATE_VARIABLE_Rs_22_22;

    {
      STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
    Var_21 = mercury__term_io__quoted_atom_1_f_0(Functor_11);
    {
      STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_20_20));
    }
    {
      STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_22_22));
    }
  }
  else
  {
    MR_String Var_25;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;

    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_4[0]), Functor_11, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_38);
    Var_41 = (MR_Word) (Var_38);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, &Var_42);
    Var_25 = mercury__string__append_list_1_f_0(Var_42);
    {
      STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
  }
  if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_24_24;
  else
  {
    MR_Word TypeInfo_15_47;
    MR_Word Y_14 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 0))));
    MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(1, Args_12, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Rs_29_29;
    MR_Word STATE_VARIABLE_Rs_30_30;
    MR_Word Priority_44;
    MR_Box Var_45;
    MR_Word * AddrSTATE_VARIABLE_Rs_31_48;

    {
      STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_24_24));
    }
    Priority_44 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
    Var_45 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_47, Y_14);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_47, NonCanon_8, Priority_44, Var_45, STATE_VARIABLE_Rs_29_29, &STATE_VARIABLE_Rs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSTATE_VARIABLE_Rs_31_48 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_17, (MR_Integer) 1)));
    mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_1(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_30_30, AddrSTATE_VARIABLE_Rs_31_48);
  }
}

static void MR_CALL 
mercury__string__to_string__det_dynamic_cast_2_p_0(
  MR_Word TypeInfo_for_T1_6,
  MR_Word TypeInfo_for_T2_7,
  MR_Box X_3,
  MR_Box * Y_4)
{
  MR_Word Var_5;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T1_6, X_3, &Var_5);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T2_7, Var_5, Y_4);
}

static void MR_CALL 
mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(
  MR_Word PrivateBuiltinTypeInfo_4,
  MR_Word STATE_VARIABLE_Rs_0_8,
  MR_Word * STATE_VARIABLE_Rs_9)
{
  MR_Word TypeInfo_6 = (MR_Word) (PrivateBuiltinTypeInfo_4);
  MR_Word TypeDesc_7;
  MR_String Var_10;
  MR_String Var_11;

  mercury__type_desc__type_info_to_type_desc_2_p_0(TypeInfo_6, &TypeDesc_7);
  Var_11 = mercury__type_desc__type_name_1_f_0(TypeDesc_7);
  Var_10 = mercury__term_io__quoted_atom_1_f_0(Var_11);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_9 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_8));
  }
}

static void MR_CALL 
mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(
  MR_Word TypeCtorDesc_4,
  MR_Word STATE_VARIABLE_Rs_0_12,
  MR_Word * STATE_VARIABLE_Rs_13)
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

	TypeCtorDesc = TypeCtorDesc_4 ;
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
  Name_9 = mercury__term_io__quoted_atom_1_f_0(Name0_7);
  succeeded = (strcmp(ModuleName_6, (MR_String) "builtin") == 0);
  if (succeeded)
    succeeded = (strcmp(Name_9, (MR_String) "func") == 0);
  if (succeeded)
    Arity_10 = (MR_Integer) ((MR_Unsigned) Arity0_8 - (MR_Unsigned) 1);
  else
    Arity_10 = Arity0_8;
  succeeded = (strcmp(ModuleName_6, (MR_String) "builtin") == 0);
  if (succeeded)
  {
    MR_String Var_29;
    MR_String Var_37;

    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Arity_10, &Var_29);
    mercury__string__append_3_p_2((MR_String) "/", Var_29, &Var_37);
    mercury__string__append_3_p_2(Name_9, Var_37, &String_11);
  }
  else
  {
    MR_String Var_38;
    MR_String Var_46;
    MR_String Var_47;
    MR_String Var_49;

    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Arity_10, &Var_38);
    mercury__string__append_3_p_2((MR_String) "/", Var_38, &Var_46);
    mercury__string__append_3_p_2(Name_9, Var_46, &Var_47);
    mercury__string__append_3_p_2((MR_String) ".", Var_47, &Var_49);
    mercury__string__append_3_p_2(ModuleName_6, Var_49, &String_11);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_13 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (String_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_12));
  }
}

static void MR_CALL 
mercury__string__to_string__type_desc_to_revstrings_3_p_0(
  MR_Word TypeDesc_4,
  MR_Word STATE_VARIABLE_Rs_0_6,
  MR_Word * STATE_VARIABLE_Rs_7)
{
  MR_String Var_8;
  MR_String Var_10;

  Var_10 = mercury__type_desc__type_name_1_f_0(TypeDesc_4);
  Var_8 = mercury__term_io__quoted_atom_1_f_0(Var_10);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_7 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_6));
  }
}

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(
  MR_Box HeadVar__2_7,
  MR_Integer HeadVar__3_8,
  MR_Word HeadVar__4_9,
  MR_Word * HeadVar__5_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_8 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_12;
      MR_Word Var_13;
      MR_Integer Var_14;
      MR_Box Var_21;
      MR_Integer next_value_of_HeadVar__3_8;
      MR_Word next_value_of_HeadVar__4_9;

{
#define MR_PROC_LABEL mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)HeadVar__2_7 ;
	I = HeadVar__3_8 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_21  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_12 = Var_21;
      else
      {
        MR_Integer Var_22;
        MR_Integer Var_24;

{
#define MR_PROC_LABEL mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)HeadVar__2_7 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_24  = N;
}
        Var_22 = (MR_Integer) ((MR_Unsigned) Var_24 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(HeadVar__3_8, Var_22, (MR_String) "version_array.lookup");
          return;
        }
      }
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = Var_12;
        MR_hl_field(1, Var_13, 1) = ((MR_Box) (HeadVar__4_9));
      }
      Var_14 = (MR_Integer) ((MR_Unsigned) HeadVar__3_8 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_8 = Var_14;
      next_value_of_HeadVar__4_9 = Var_13;
      HeadVar__3_8 = next_value_of_HeadVar__3_8;
      HeadVar__4_9 = next_value_of_HeadVar__4_9;
      continue;
    }
    else
      *HeadVar__5_10 = HeadVar__4_9;
    break;
  }
}

static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
  MR_String String_6,
  MR_Word Priority_7,
  MR_Word OpPrio_8,
  MR_Word STATE_VARIABLE_Rs_0_10,
  MR_Word * STATE_VARIABLE_Rs_11)
{
  MR_bool succeeded;
  MR_Unsigned Var_12 = (MR_Unsigned) (OpPrio_8);
  MR_Unsigned Var_13 = (MR_Unsigned) (Priority_7);

  succeeded = (Var_12 < Var_13);
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (String_6));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_10));
    }
  else
    *STATE_VARIABLE_Rs_11 = STATE_VARIABLE_Rs_0_10;
}

static void MR_CALL 
mercury__string__to_string__add_revstring_3_p_0(
  MR_String String_4,
  MR_Word RevStrings_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__3_3 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (String_4));
    MR_hl_field(1, base, 1) = ((MR_Box) (RevStrings_5));
  }
}

static MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__to_string____Unify____revstrings_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__to_string____Compare____revstrings_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
