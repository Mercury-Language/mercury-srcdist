/*
** Automatically generated from `array.m'
** by the Mercury compiler,
** version rotd-2022-07-04
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


// :- module array.
// :- implementation.

/*
INIT mercury__array__init
ENDINIT
*/

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



struct mercury__array__member_2_p_0_env_0_s {
  MR_ArrayPtr mercury__array__member_2_p_0_env_0__A_3;
  MR_Box * mercury__array__member_2_p_0_env_0__X_4;
  MR_Cont mercury__array__member_2_p_0_env_0__cont;
  void * mercury__array__member_2_p_0_env_0__cont_env_ptr;
  MR_Integer mercury__array__member_2_p_0_env_0__N_5;
};


static const MR_FA_PseudoTypeInfo_Struct1 mercury__array__array__pti_array_1__pseudo_1;

static const MR_Integer mercury__array__array__functor_number_map_index_out_of_bounds_0[1];

static const MR_NotagFunctorDesc mercury__array__array__notag_functor_desc_index_out_of_bounds_0;

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(
  MR_Integer N_9,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr * A_11,
  MR_ArrayPtr B0_12,
  MR_ArrayPtr * B_13,
  MR_Integer Lo_14,
  MR_Integer Hi_15,
  MR_Integer * I_16);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(
  MR_Integer N_9,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr * A_11,
  MR_ArrayPtr B0_12,
  MR_ArrayPtr * B_13,
  MR_Integer Lo_14,
  MR_Integer Hi_15,
  MR_Integer * I_16);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(
  MR_ArrayPtr A_9,
  MR_Integer Lo1_10,
  MR_Integer Hi1_11,
  MR_Integer Lo2_12,
  MR_Integer Hi2_13,
  MR_Integer I_14,
  MR_ArrayPtr STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * STATE_VARIABLE_B_20);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(
  MR_ArrayPtr A_9,
  MR_Integer Lo1_10,
  MR_Integer Hi1_11,
  MR_Integer Lo2_12,
  MR_Integer Hi2_13,
  MR_Integer I_14,
  MR_ArrayPtr STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * STATE_VARIABLE_B_20);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14);

static MR_Integer MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0(
  MR_Word R_6,
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9);

static MR_Integer MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0(
  MR_Word R_6,
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9);

static MR_Box MR_CALL 
mercury__array__IntroducedFrom__func__array_to_doc_2__3372__1_3_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
mercury__array__IntroducedFrom__func__array_to_doc_2__3372__1_3_f_0(
  MR_Word TypeInfo_for_T_28,
  MR_Integer I_4,
  MR_ArrayPtr A_5);

static MR_bool MR_CALL 
mercury__array__equal_elements_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer N_5,
  MR_Integer Size_6,
  MR_ArrayPtr Array1_7,
  MR_ArrayPtr Array2_8);

static void MR_CALL 
mercury__array__shrink_2_3_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Integer HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr * HeadVar__3_3);

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Integer HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr * HeadVar__3_3);

static void MR_CALL 
mercury__array__compare_elements_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Integer N_6,
  MR_Integer Size_7,
  MR_ArrayPtr Array1_8,
  MR_ArrayPtr Array2_9,
  MR_Word * Result_10);

static MR_Box MR_CALL 
mercury__array__array_to_doc_1_f_0_1(
  MR_Box closure_arg);

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_Integer N_7,
  MR_Integer Size_8,
  MR_ArrayPtr OldArray_10,
  MR_ArrayPtr STATE_VARIABLE_NewArray_0_14,
  MR_ArrayPtr * STATE_VARIABLE_NewArray_15);

static MR_bool MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_54_95_95_91_50_44_32_51_93_95_48_6_p_0(
  MR_Word Var_29,
  MR_ArrayPtr A_8,
  MR_Box SearchX_9,
  MR_Integer Lo_10,
  MR_Integer Hi_11,
  MR_Integer * I_12);

static MR_bool MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_53_95_95_91_50_44_32_51_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_ArrayPtr A_8,
  MR_Box SearchX_9,
  MR_Integer Lo_10,
  MR_Integer Hi_11,
  MR_Integer * I_12);

static void MR_CALL 
mercury__array__samsort_down_8_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Integer N_9,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr * A_11,
  MR_ArrayPtr B0_12,
  MR_ArrayPtr * B_13,
  MR_Integer Lo_14,
  MR_Integer Hi_15,
  MR_Integer * I_16);

static MR_Integer MR_CALL 
mercury__array__search_until_4_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word R_6,
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9);

static void MR_CALL 
mercury__array__merge_subarrays_8_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_ArrayPtr A_9,
  MR_Integer Lo1_10,
  MR_Integer Hi1_11,
  MR_Integer Lo2_12,
  MR_Integer Hi2_13,
  MR_Integer I_14,
  MR_ArrayPtr STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * STATE_VARIABLE_B_20);

static void MR_CALL 
mercury__array__copy_subarray_reverse_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14);

static void MR_CALL 
mercury__array__copy_subarray_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14);

static MR_Word MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_f_0(
  MR_ArrayPtr A_8,
  MR_Word X_9,
  MR_Integer Min_10,
  MR_Integer I_11);

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_ArrayPtr STATE_VARIABLE_Array_0_3,
  MR_ArrayPtr * STATE_VARIABLE_Array_4);

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_ArrayPtr STATE_VARIABLE_Array_0_3,
  MR_ArrayPtr * STATE_VARIABLE_Array_4);

static void MR_CALL 
mercury__array__arg_out_of_bounds_error_4_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_ArrayPtr Array_5,
  MR_String ArgPosn_6,
  MR_String PredName_7,
  MR_Integer Index_8);

static void MR_CALL 
mercury__array__member_2_p_0_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__array____Unify____array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__array____Compare____array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__array____Unify____index_out_of_bounds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__array____Compare____index_out_of_bounds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__array_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__array_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__array_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__array_scalar_common_4[8][1];

static /* final */ const MR_Box mercury__array_scalar_common_5[12][2];

static /* final */ const MR_Integer mercury__array_scalar_common_6[1][2];

static /* final */ const MR_Box mercury__array_scalar_common_7[1][7];




static /* final */ const MR_Box mercury__array_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array_scalar_common_4[8][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "array(["))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "])"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) ", "))
  },
  /* row   4 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[10])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "  "))
  },
};

static /* final */ const MR_Box mercury__array_scalar_common_5[12][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[2])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__array_scalar_common_5[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__array_scalar_common_5[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &mercury__array_scalar_common_4[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[6])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__array_scalar_common_5[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[7])))
  },
};

static /* final */ const MR_Integer mercury__array_scalar_common_6[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__array_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__array_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__array__array__pti_array_1__pseudo_1)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
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
#line 1035 "array.m"

// The caller is responsible for allocating the memory for the array.
// This routine does the job of initializing the already-allocated memory.
void
ML_init_array(MR_ArrayPtr array, MR_Integer size, MR_Word item)
{
    MR_Integer i;

    array->size = size;
    for (i = 0; i < size; i++) {
        array->elements[i] = item;
    }
}

#line 2043 "array.m"

// The caller is responsible for allocating the storage for the new array.
// This routine does the job of copying the array elements.
void
ML_copy_array(MR_ArrayPtr array, MR_ConstArrayPtr old_array)
{
    // Any changes to this function will probably also require changes to
    // - array.append below, and
    // - MR_deep_copy() in runtime/mercury_deep_copy.[ch].

    MR_Integer i;
    MR_Integer array_size;

    array_size = old_array->size;
    array->size = array_size;
    for (i = 0; i < array_size; i++) {
        array->elements[i] = old_array->elements[i];
    }
}

#line 2224 "array.m"

// The caller is responsible for allocating the storage for the new array.
// This routine does the job of copying the old array elements to the
// new array, initializing any additional elements in the new array,
// and deallocating the old array.
void
ML_resize_array(MR_ArrayPtr array, MR_ArrayPtr old_array,
    MR_Integer array_size, MR_Word item)
{
    MR_Integer i;
    MR_Integer elements_to_copy;

    elements_to_copy = old_array->size;
    if (elements_to_copy > array_size) {
        elements_to_copy = array_size;
    }

    array->size = array_size;
    for (i = 0; i < elements_to_copy; i++) {
        array->elements[i] = old_array->elements[i];
    }
    for (; i < array_size; i++) {
        array->elements[i] = item;
    }

    // Since the mode on the old array is `array_di', it is safe to
    // deallocate the storage for it.
#ifdef MR_CONSERVATIVE_GC
    MR_GC_free_attrib(old_array);
#endif
}

#line 2308 "array.m"

// The caller is responsible for allocating the storage for the new array.
// This routine does the job of copying the old array elements to the
// new array and deallocating the old array.
void
ML_shrink_array(MR_ArrayPtr array, MR_ArrayPtr old_array,
    MR_Integer array_size)
{
    MR_Integer i;

    array->size = array_size;
    for (i = 0; i < array_size; i++) {
        array->elements[i] = old_array->elements[i];
    }

    // Since the mode on the old array is `array_di', it is safe to
    // deallocate the storage for it.
#ifdef MR_CONSERVATIVE_GC
    MR_GC_free_attrib(old_array);
#endif
}




static const MR_FA_PseudoTypeInfo_Struct1 mercury__array__array__pti_array_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct mercury__array__array__type_ctor_info_array_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ARRAY,
  ((MR_Box) (mercury__array____Unify____array_1_0_10001)),
  ((MR_Box) (mercury__array____Compare____array_1_0_10001)),
  (MR_String) "array",
  (MR_String) "array",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer mercury__array__array__functor_number_map_index_out_of_bounds_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__array__array__notag_functor_desc_index_out_of_bounds_0 = {
  (MR_String) "index_out_of_bounds",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__array__array__type_ctor_info_index_out_of_bounds_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__array____Unify____index_out_of_bounds_0_0_10001)),
  ((MR_Box) (mercury__array____Compare____index_out_of_bounds_0_0_10001)),
  (MR_String) "array",
  (MR_String) "index_out_of_bounds",
  { &mercury__array__array__notag_functor_desc_index_out_of_bounds_0 },
  { &mercury__array__array__notag_functor_desc_index_out_of_bounds_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__array__array__functor_number_map_index_out_of_bounds_0,

};

MR_ArrayPtr MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
  MR_ArrayPtr A_3)
{
  MR_ArrayPtr HeadVar__2_2;
  MR_Integer Var_4;
  MR_Integer Var_5;
  MR_ArrayPtr Var_17;
  MR_ArrayPtr conv0_Array;
  MR_ArrayPtr Var_15;

{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (A_3) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_4  = Min;
}
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (A_3) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_5  = Max;
}
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (A_3) ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
  Var_17 = (MR_ArrayPtr) (conv0_Array);
}
  mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0((MR_Integer) 0, Var_17, &HeadVar__2_2, A_3, &Var_15, Var_4, Var_5, Var_4);
  return HeadVar__2_2;
}

MR_ArrayPtr MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_f_0(
  MR_ArrayPtr A_3)
{
  MR_ArrayPtr HeadVar__2_2;
  MR_Integer Var_4;
  MR_Integer Var_5;
  MR_ArrayPtr Var_17;
  MR_ArrayPtr conv0_Array;
  MR_ArrayPtr Var_15;

{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (A_3) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_4  = Min;
}
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (A_3) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_5  = Max;
}
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (A_3) ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
  Var_17 = (MR_ArrayPtr) (conv0_Array);
}
  mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0((MR_Integer) 0, Var_17, &HeadVar__2_2, A_3, &Var_15, Var_4, Var_5, Var_4);
  return HeadVar__2_2;
}

MR_ArrayPtr MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
  MR_ArrayPtr A0_5,
  MR_Integer Lo_6,
  MR_Integer Hi_7)
{
  MR_ArrayPtr A_8;
  MR_ArrayPtr Var_11;
  MR_ArrayPtr conv0_Array;
  MR_ArrayPtr Var_9;

{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (A0_5) ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
  Var_11 = (MR_ArrayPtr) (conv0_Array);
}
  mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0((MR_Integer) 0, Var_11, &A_8, A0_5, &Var_9, Lo_6, Hi_7, Lo_6);
  return A_8;
}

MR_ArrayPtr MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_f_0(
  MR_ArrayPtr A0_5,
  MR_Integer Lo_6,
  MR_Integer Hi_7)
{
  MR_ArrayPtr A_8;
  MR_ArrayPtr Var_11;
  MR_ArrayPtr conv0_Array;
  MR_ArrayPtr Var_9;

{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (A0_5) ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
  Var_11 = (MR_ArrayPtr) (conv0_Array);
}
  mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0((MR_Integer) 0, Var_11, &A_8, A0_5, &Var_9, Lo_6, Hi_7, Lo_6);
  return A_8;
}

void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(
  MR_Integer N_9,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr * A_11,
  MR_ArrayPtr B0_12,
  MR_ArrayPtr * B_13,
  MR_Integer Lo_14,
  MR_Integer Hi_15,
  MR_Integer I_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_16 > Hi_15);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *A_11 = A0_10;
      *B_13 = B0_12;
    }
    else
    {
      succeeded = (N_9 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_ArrayPtr B1_17;
        MR_Integer J_19;
        MR_ArrayPtr B2_20;
        MR_ArrayPtr A2_21;
        MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) N_9 - (MR_Unsigned) 1);
        MR_Integer Var_29;
        MR_Integer Var_30;
        MR_Integer Var_34;
        MR_Integer next_value_of_N_9;
        MR_ArrayPtr next_value_of_A0_10;
        MR_ArrayPtr next_value_of_B0_12;
        MR_Integer next_value_of_I_16;

        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(Var_27, B0_12, &B1_17, A0_10, &A2_21, I_16, Hi_15, &J_19);
        Var_29 = (MR_Integer) ((MR_Unsigned) I_16 - (MR_Unsigned) 1);
        Var_30 = (MR_Integer) ((MR_Unsigned) J_19 - (MR_Unsigned) 1);
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(A2_21, Lo_14, Var_29, I_16, Var_30, Lo_14, B1_17, &B2_20);
        Var_34 = (MR_Integer) ((MR_Unsigned) N_9 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_N_9 = Var_34;
        next_value_of_A0_10 = B2_20;
        next_value_of_B0_12 = A2_21;
        next_value_of_I_16 = J_19;
        N_9 = next_value_of_N_9;
        A0_10 = next_value_of_A0_10;
        B0_12 = next_value_of_B0_12;
        I_16 = next_value_of_I_16;
        continue;
      }
      else
      {
        MR_Integer Var_36;
        MR_ArrayPtr B1_38;
        MR_Integer J_39;
        MR_Word Var_50;
        MR_Integer Var_51;
        MR_Integer Var_52;
        MR_Integer Var_53;
        MR_Integer Var_54;
        MR_Word Var_67;
        MR_Box conv0_Var_51;
        MR_Box conv1_Var_52;
        MR_Integer next_value_of_N_9;
        MR_ArrayPtr next_value_of_A0_10;
        MR_ArrayPtr next_value_of_B0_12;
        MR_Integer next_value_of_I_16;

        succeeded = (Lo_14 < Hi_15);
        if (succeeded)
        {
          Var_50 = (MR_Integer) 2;
          mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (A0_10), Lo_14, &conv0_Var_51);
          Var_51 = ((MR_Integer) (conv0_Var_51));
          Var_54 = (MR_Integer) 1;
          Var_53 = (MR_Integer) ((MR_Unsigned) Lo_14 + (MR_Unsigned) Var_54);
          mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (A0_10), Var_53, &conv1_Var_52);
          Var_52 = ((MR_Integer) (conv1_Var_52));
          succeeded = (Var_51 < Var_52);
          if (succeeded)
            Var_67 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_51 == Var_52);
            if (succeeded)
              Var_67 = (MR_Integer) 0;
            else
              Var_67 = (MR_Integer) 2;
          }
          succeeded = (Var_50 == Var_67);
        }
        if (succeeded)
        {
          MR_Integer Var_56;
          MR_Integer Var_57;

          J_39 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0((MR_Integer) 1, A0_10, Lo_14, Hi_15);
          Var_56 = (MR_Integer) ((MR_Unsigned) J_39 - (MR_Unsigned) 1);
          Var_57 = (MR_Integer) ((MR_Unsigned) J_39 - (MR_Unsigned) 1);
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(A0_10, Lo_14, Var_56, Var_57, B0_12, &B1_38);
        }
        else
        {
          MR_Integer Var_62;

          J_39 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0((MR_Integer) 2, A0_10, Lo_14, Hi_15);
          Var_62 = (MR_Integer) ((MR_Unsigned) J_39 - (MR_Unsigned) 1);
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(A0_10, Lo_14, Var_62, Lo_14, B0_12, &B1_38);
        }
        Var_36 = (MR_Integer) ((MR_Unsigned) N_9 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_N_9 = Var_36;
        next_value_of_A0_10 = B1_38;
        next_value_of_B0_12 = A0_10;
        next_value_of_I_16 = J_39;
        N_9 = next_value_of_N_9;
        A0_10 = next_value_of_A0_10;
        B0_12 = next_value_of_B0_12;
        I_16 = next_value_of_I_16;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(
  MR_Integer N_9,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr * A_11,
  MR_ArrayPtr B0_12,
  MR_ArrayPtr * B_13,
  MR_Integer Lo_14,
  MR_Integer Hi_15,
  MR_Integer I_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_16 > Hi_15);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *A_11 = A0_10;
      *B_13 = B0_12;
    }
    else
    {
      succeeded = (N_9 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_ArrayPtr B1_17;
        MR_Integer J_19;
        MR_ArrayPtr B2_20;
        MR_ArrayPtr A2_21;
        MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) N_9 - (MR_Unsigned) 1);
        MR_Integer Var_29;
        MR_Integer Var_30;
        MR_Integer Var_34;
        MR_Integer next_value_of_N_9;
        MR_ArrayPtr next_value_of_A0_10;
        MR_ArrayPtr next_value_of_B0_12;
        MR_Integer next_value_of_I_16;

        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(Var_27, B0_12, &B1_17, A0_10, &A2_21, I_16, Hi_15, &J_19);
        Var_29 = (MR_Integer) ((MR_Unsigned) I_16 - (MR_Unsigned) 1);
        Var_30 = (MR_Integer) ((MR_Unsigned) J_19 - (MR_Unsigned) 1);
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(A2_21, Lo_14, Var_29, I_16, Var_30, Lo_14, B1_17, &B2_20);
        Var_34 = (MR_Integer) ((MR_Unsigned) N_9 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_N_9 = Var_34;
        next_value_of_A0_10 = B2_20;
        next_value_of_B0_12 = A2_21;
        next_value_of_I_16 = J_19;
        N_9 = next_value_of_N_9;
        A0_10 = next_value_of_A0_10;
        B0_12 = next_value_of_B0_12;
        I_16 = next_value_of_I_16;
        continue;
      }
      else
      {
        MR_Integer Var_36;
        MR_ArrayPtr B1_38;
        MR_Integer J_39;
        MR_Word Var_50;
        MR_String Var_51;
        MR_String Var_52;
        MR_Integer Var_53;
        MR_Integer Var_54;
        MR_Word Var_67;
        MR_Integer Var_77;
        MR_Box conv0_Var_51;
        MR_Box conv1_Var_52;
        MR_Integer Var_78;
        MR_Integer next_value_of_N_9;
        MR_ArrayPtr next_value_of_A0_10;
        MR_ArrayPtr next_value_of_B0_12;
        MR_Integer next_value_of_I_16;

        succeeded = (Lo_14 < Hi_15);
        if (succeeded)
        {
          Var_50 = (MR_Integer) 2;
          mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_ArrayPtr) (A0_10), Lo_14, &conv0_Var_51);
          Var_51 = ((MR_String) (conv0_Var_51));
          Var_54 = (MR_Integer) 1;
          Var_53 = (MR_Integer) ((MR_Unsigned) Lo_14 + (MR_Unsigned) Var_54);
          mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_ArrayPtr) (A0_10), Var_53, &conv1_Var_52);
          Var_52 = ((MR_String) (conv1_Var_52));
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_51 ;
	S2 = Var_52 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_77  = Res;
}
          Var_78 = (MR_Integer) 0;
          succeeded = (Var_77 < Var_78);
          if (succeeded)
            Var_67 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_77 == (MR_Integer) 0);
            if (succeeded)
              Var_67 = (MR_Integer) 0;
            else
              Var_67 = (MR_Integer) 2;
          }
          succeeded = (Var_50 == Var_67);
        }
        if (succeeded)
        {
          MR_Integer Var_56;
          MR_Integer Var_57;

          J_39 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0((MR_Integer) 1, A0_10, Lo_14, Hi_15);
          Var_56 = (MR_Integer) ((MR_Unsigned) J_39 - (MR_Unsigned) 1);
          Var_57 = (MR_Integer) ((MR_Unsigned) J_39 - (MR_Unsigned) 1);
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(A0_10, Lo_14, Var_56, Var_57, B0_12, &B1_38);
        }
        else
        {
          MR_Integer Var_62;

          J_39 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0((MR_Integer) 2, A0_10, Lo_14, Hi_15);
          Var_62 = (MR_Integer) ((MR_Unsigned) J_39 - (MR_Unsigned) 1);
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(A0_10, Lo_14, Var_62, Lo_14, B0_12, &B1_38);
        }
        Var_36 = (MR_Integer) ((MR_Unsigned) N_9 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_N_9 = Var_36;
        next_value_of_A0_10 = B1_38;
        next_value_of_B0_12 = A0_10;
        next_value_of_I_16 = J_39;
        N_9 = next_value_of_N_9;
        A0_10 = next_value_of_A0_10;
        B0_12 = next_value_of_B0_12;
        I_16 = next_value_of_I_16;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(
  MR_Integer N_9,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr * A_11,
  MR_ArrayPtr B0_12,
  MR_ArrayPtr * B_13,
  MR_Integer Lo_14,
  MR_Integer Hi_15,
  MR_Integer * I_16)
{
  MR_bool succeeded = (Lo_14 > Hi_15);

  if (succeeded)
  {
    *A_11 = A0_10;
    *B_13 = B0_12;
    *I_16 = Lo_14;
  }
  else
  {
    succeeded = (N_9 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_ArrayPtr B1_17;
      MR_ArrayPtr A1_18;
      MR_Integer J_19;
      MR_ArrayPtr B2_20;
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) N_9 - (MR_Unsigned) 1);
      MR_Integer Var_25;
      MR_Integer Var_27;
      MR_Integer Var_28;

      mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(Var_23, B0_12, &B1_17, A0_10, &A1_18, Lo_14, Hi_15, &J_19);
      Var_25 = (MR_Integer) ((MR_Unsigned) N_9 - (MR_Unsigned) 1);
      mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(Var_25, B1_17, &B2_20, A1_18, A_11, J_19, Hi_15, I_16);
      Var_27 = (MR_Integer) ((MR_Unsigned) J_19 - (MR_Unsigned) 1);
      Var_28 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
      mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(*A_11, Lo_14, Var_27, J_19, Var_28, Lo_14, B2_20, B_13);
    }
    else
    {
      MR_Word Var_42;
      MR_Integer Var_43;
      MR_Integer Var_44;
      MR_Integer Var_45;
      MR_Integer Var_46;
      MR_Word Var_59;
      MR_Box conv0_Var_43;
      MR_Box conv1_Var_44;

      *A_11 = A0_10;
      succeeded = (Lo_14 < Hi_15);
      if (succeeded)
      {
        Var_42 = (MR_Integer) 2;
        mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (A0_10), Lo_14, &conv0_Var_43);
        Var_43 = ((MR_Integer) (conv0_Var_43));
        Var_46 = (MR_Integer) 1;
        Var_45 = (MR_Integer) ((MR_Unsigned) Lo_14 + (MR_Unsigned) Var_46);
        mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (A0_10), Var_45, &conv1_Var_44);
        Var_44 = ((MR_Integer) (conv1_Var_44));
        succeeded = (Var_43 < Var_44);
        if (succeeded)
          Var_59 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_43 == Var_44);
          if (succeeded)
            Var_59 = (MR_Integer) 0;
          else
            Var_59 = (MR_Integer) 2;
        }
        succeeded = (Var_42 == Var_59);
      }
      if (succeeded)
      {
        MR_Integer Var_48;
        MR_Integer Var_49;

        *I_16 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0((MR_Integer) 1, A0_10, Lo_14, Hi_15);
        Var_48 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
        Var_49 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(A0_10, Lo_14, Var_48, Var_49, B0_12, B_13);
      }
      else
      {
        MR_Integer Var_54;

        *I_16 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0((MR_Integer) 2, A0_10, Lo_14, Hi_15);
        Var_54 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(A0_10, Lo_14, Var_54, Lo_14, B0_12, B_13);
      }
    }
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_8 <= Hi_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer X_12;
      MR_ArrayPtr STATE_VARIABLE_B_15_15;
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Box conv0_X_12;
      MR_ArrayPtr conv1_STATE_VARIABLE_B_15_15;
      MR_Integer next_value_of_Lo_8;
      MR_Integer next_value_of_I_10;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_13;

      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (A_7), Lo_8, &conv0_X_12);
      X_12 = ((MR_Integer) (conv0_X_12));
      mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), I_10, ((MR_Box) (X_12)), (MR_ArrayPtr) (STATE_VARIABLE_B_0_13), &conv1_STATE_VARIABLE_B_15_15);
      STATE_VARIABLE_B_15_15 = (MR_ArrayPtr) (conv1_STATE_VARIABLE_B_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
      Var_17 = (MR_Integer) ((MR_Unsigned) I_10 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_8 = Var_16;
      next_value_of_I_10 = Var_17;
      next_value_of_STATE_VARIABLE_B_0_13 = STATE_VARIABLE_B_15_15;
      Lo_8 = next_value_of_Lo_8;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_B_0_13 = next_value_of_STATE_VARIABLE_B_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_B_14 = STATE_VARIABLE_B_0_13;
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(
  MR_Integer N_9,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr * A_11,
  MR_ArrayPtr B0_12,
  MR_ArrayPtr * B_13,
  MR_Integer Lo_14,
  MR_Integer Hi_15,
  MR_Integer * I_16)
{
  MR_bool succeeded = (Lo_14 > Hi_15);

  if (succeeded)
  {
    *A_11 = A0_10;
    *B_13 = B0_12;
    *I_16 = Lo_14;
  }
  else
  {
    succeeded = (N_9 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_ArrayPtr B1_17;
      MR_ArrayPtr A1_18;
      MR_Integer J_19;
      MR_ArrayPtr B2_20;
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) N_9 - (MR_Unsigned) 1);
      MR_Integer Var_25;
      MR_Integer Var_27;
      MR_Integer Var_28;

      mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(Var_23, B0_12, &B1_17, A0_10, &A1_18, Lo_14, Hi_15, &J_19);
      Var_25 = (MR_Integer) ((MR_Unsigned) N_9 - (MR_Unsigned) 1);
      mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(Var_25, B1_17, &B2_20, A1_18, A_11, J_19, Hi_15, I_16);
      Var_27 = (MR_Integer) ((MR_Unsigned) J_19 - (MR_Unsigned) 1);
      Var_28 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
      mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(*A_11, Lo_14, Var_27, J_19, Var_28, Lo_14, B2_20, B_13);
    }
    else
    {
      MR_Word Var_42;
      MR_String Var_43;
      MR_String Var_44;
      MR_Integer Var_45;
      MR_Integer Var_46;
      MR_Word Var_59;
      MR_Integer Var_69;
      MR_Box conv0_Var_43;
      MR_Box conv1_Var_44;
      MR_Integer Var_70;

      *A_11 = A0_10;
      succeeded = (Lo_14 < Hi_15);
      if (succeeded)
      {
        Var_42 = (MR_Integer) 2;
        mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_ArrayPtr) (A0_10), Lo_14, &conv0_Var_43);
        Var_43 = ((MR_String) (conv0_Var_43));
        Var_46 = (MR_Integer) 1;
        Var_45 = (MR_Integer) ((MR_Unsigned) Lo_14 + (MR_Unsigned) Var_46);
        mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_ArrayPtr) (A0_10), Var_45, &conv1_Var_44);
        Var_44 = ((MR_String) (conv1_Var_44));
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_43 ;
	S2 = Var_44 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_69  = Res;
}
        Var_70 = (MR_Integer) 0;
        succeeded = (Var_69 < Var_70);
        if (succeeded)
          Var_59 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_69 == (MR_Integer) 0);
          if (succeeded)
            Var_59 = (MR_Integer) 0;
          else
            Var_59 = (MR_Integer) 2;
        }
        succeeded = (Var_42 == Var_59);
      }
      if (succeeded)
      {
        MR_Integer Var_48;
        MR_Integer Var_49;

        *I_16 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0((MR_Integer) 1, A0_10, Lo_14, Hi_15);
        Var_48 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
        Var_49 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(A0_10, Lo_14, Var_48, Var_49, B0_12, B_13);
      }
      else
      {
        MR_Integer Var_54;

        *I_16 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0((MR_Integer) 2, A0_10, Lo_14, Hi_15);
        Var_54 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(A0_10, Lo_14, Var_54, Lo_14, B0_12, B_13);
      }
    }
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_8 <= Hi_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_String X_12;
      MR_ArrayPtr STATE_VARIABLE_B_15_15;
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Box conv0_X_12;
      MR_ArrayPtr conv1_STATE_VARIABLE_B_15_15;
      MR_Integer next_value_of_Lo_8;
      MR_Integer next_value_of_I_10;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_13;

      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_ArrayPtr) (A_7), Lo_8, &conv0_X_12);
      X_12 = ((MR_String) (conv0_X_12));
      mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), I_10, ((MR_Box) (X_12)), (MR_ArrayPtr) (STATE_VARIABLE_B_0_13), &conv1_STATE_VARIABLE_B_15_15);
      STATE_VARIABLE_B_15_15 = (MR_ArrayPtr) (conv1_STATE_VARIABLE_B_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
      Var_17 = (MR_Integer) ((MR_Unsigned) I_10 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_8 = Var_16;
      next_value_of_I_10 = Var_17;
      next_value_of_STATE_VARIABLE_B_0_13 = STATE_VARIABLE_B_15_15;
      Lo_8 = next_value_of_Lo_8;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_B_0_13 = next_value_of_STATE_VARIABLE_B_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_B_14 = STATE_VARIABLE_B_0_13;
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(
  MR_ArrayPtr A_9,
  MR_Integer Lo1_10,
  MR_Integer Hi1_11,
  MR_Integer Lo2_12,
  MR_Integer Hi2_13,
  MR_Integer I_14,
  MR_ArrayPtr STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * STATE_VARIABLE_B_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo1_10 > Hi1_11);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(A_9, Lo2_12, Hi2_13, I_14, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20);
    else
    {
      succeeded = (Lo2_12 > Hi2_13);
      if (succeeded)
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(A_9, Lo1_10, Hi1_11, I_14, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20);
      else
      {
        MR_Integer X1_16;
        MR_Integer X2_17;
        MR_Word R_18;
        MR_Box conv0_X1_16;
        MR_Box conv1_X2_17;

        mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (A_9), Lo1_10, &conv0_X1_16);
        X1_16 = ((MR_Integer) (conv0_X1_16));
        mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (A_9), Lo2_12, &conv1_X2_17);
        X2_17 = ((MR_Integer) (conv1_X2_17));
        succeeded = (X1_16 < X2_17);
        if (succeeded)
          R_18 = (MR_Integer) 1;
        else
        {
          succeeded = (X1_16 == X2_17);
          if (succeeded)
            R_18 = (MR_Integer) 0;
          else
            R_18 = (MR_Integer) 2;
        }
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_ArrayPtr STATE_VARIABLE_B_23_23;
              MR_Integer Var_24;
              MR_Integer Var_25;
              MR_ArrayPtr conv2_STATE_VARIABLE_B_23_23;
              MR_Integer next_value_of_Lo1_10;
              MR_Integer next_value_of_I_14;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_19;

              mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), I_14, ((MR_Box) (X1_16)), (MR_ArrayPtr) (STATE_VARIABLE_B_0_19), &conv2_STATE_VARIABLE_B_23_23);
              STATE_VARIABLE_B_23_23 = (MR_ArrayPtr) (conv2_STATE_VARIABLE_B_23_23);
              Var_24 = (MR_Integer) ((MR_Unsigned) Lo1_10 + (MR_Unsigned) 1);
              Var_25 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Lo1_10 = Var_24;
              next_value_of_I_14 = Var_25;
              next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_23_23;
              Lo1_10 = next_value_of_Lo1_10;
              I_14 = next_value_of_I_14;
              STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_ArrayPtr STATE_VARIABLE_B_29_29;
              MR_Integer Var_30;
              MR_Integer Var_31;
              MR_ArrayPtr conv3_STATE_VARIABLE_B_29_29;
              MR_Integer next_value_of_Lo1_10;
              MR_Integer next_value_of_I_14;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_19;

              mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), I_14, ((MR_Box) (X1_16)), (MR_ArrayPtr) (STATE_VARIABLE_B_0_19), &conv3_STATE_VARIABLE_B_29_29);
              STATE_VARIABLE_B_29_29 = (MR_ArrayPtr) (conv3_STATE_VARIABLE_B_29_29);
              Var_30 = (MR_Integer) ((MR_Unsigned) Lo1_10 + (MR_Unsigned) 1);
              Var_31 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Lo1_10 = Var_30;
              next_value_of_I_14 = Var_31;
              next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_29_29;
              Lo1_10 = next_value_of_Lo1_10;
              I_14 = next_value_of_I_14;
              STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_ArrayPtr STATE_VARIABLE_B_35_35;
              MR_Integer Var_36;
              MR_Integer Var_37;
              MR_ArrayPtr conv4_STATE_VARIABLE_B_35_35;
              MR_Integer next_value_of_Lo2_12;
              MR_Integer next_value_of_I_14;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_19;

              mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), I_14, ((MR_Box) (X2_17)), (MR_ArrayPtr) (STATE_VARIABLE_B_0_19), &conv4_STATE_VARIABLE_B_35_35);
              STATE_VARIABLE_B_35_35 = (MR_ArrayPtr) (conv4_STATE_VARIABLE_B_35_35);
              Var_36 = (MR_Integer) ((MR_Unsigned) Lo2_12 + (MR_Unsigned) 1);
              Var_37 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Lo2_12 = Var_36;
              next_value_of_I_14 = Var_37;
              next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_35_35;
              Lo2_12 = next_value_of_Lo2_12;
              I_14 = next_value_of_I_14;
              STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_8 <= Hi_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer X_12;
      MR_ArrayPtr STATE_VARIABLE_B_15_15;
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Box conv0_X_12;
      MR_ArrayPtr conv1_STATE_VARIABLE_B_15_15;
      MR_Integer next_value_of_Lo_8;
      MR_Integer next_value_of_I_10;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_13;

      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (A_7), Lo_8, &conv0_X_12);
      X_12 = ((MR_Integer) (conv0_X_12));
      mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), I_10, ((MR_Box) (X_12)), (MR_ArrayPtr) (STATE_VARIABLE_B_0_13), &conv1_STATE_VARIABLE_B_15_15);
      STATE_VARIABLE_B_15_15 = (MR_ArrayPtr) (conv1_STATE_VARIABLE_B_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
      Var_17 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_8 = Var_16;
      next_value_of_I_10 = Var_17;
      next_value_of_STATE_VARIABLE_B_0_13 = STATE_VARIABLE_B_15_15;
      Lo_8 = next_value_of_Lo_8;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_B_0_13 = next_value_of_STATE_VARIABLE_B_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_B_14 = STATE_VARIABLE_B_0_13;
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(
  MR_ArrayPtr A_9,
  MR_Integer Lo1_10,
  MR_Integer Hi1_11,
  MR_Integer Lo2_12,
  MR_Integer Hi2_13,
  MR_Integer I_14,
  MR_ArrayPtr STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * STATE_VARIABLE_B_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo1_10 > Hi1_11);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(A_9, Lo2_12, Hi2_13, I_14, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20);
    else
    {
      succeeded = (Lo2_12 > Hi2_13);
      if (succeeded)
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(A_9, Lo1_10, Hi1_11, I_14, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20);
      else
      {
        MR_String X1_16;
        MR_String X2_17;
        MR_Word R_18;
        MR_Integer Var_45;
        MR_Box conv0_X1_16;
        MR_Box conv1_X2_17;

        mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_ArrayPtr) (A_9), Lo1_10, &conv0_X1_16);
        X1_16 = ((MR_String) (conv0_X1_16));
        mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_ArrayPtr) (A_9), Lo2_12, &conv1_X2_17);
        X2_17 = ((MR_String) (conv1_X2_17));
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = X1_16 ;
	S2 = X2_17 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_45  = Res;
}
        succeeded = (Var_45 < (MR_Integer) 0);
        if (succeeded)
          R_18 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_45 == (MR_Integer) 0);
          if (succeeded)
            R_18 = (MR_Integer) 0;
          else
            R_18 = (MR_Integer) 2;
        }
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_ArrayPtr STATE_VARIABLE_B_23_23;
              MR_Integer Var_24;
              MR_Integer Var_25;
              MR_ArrayPtr conv2_STATE_VARIABLE_B_23_23;
              MR_Integer next_value_of_Lo1_10;
              MR_Integer next_value_of_I_14;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_19;

              mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), I_14, ((MR_Box) (X1_16)), (MR_ArrayPtr) (STATE_VARIABLE_B_0_19), &conv2_STATE_VARIABLE_B_23_23);
              STATE_VARIABLE_B_23_23 = (MR_ArrayPtr) (conv2_STATE_VARIABLE_B_23_23);
              Var_24 = (MR_Integer) ((MR_Unsigned) Lo1_10 + (MR_Unsigned) 1);
              Var_25 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Lo1_10 = Var_24;
              next_value_of_I_14 = Var_25;
              next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_23_23;
              Lo1_10 = next_value_of_Lo1_10;
              I_14 = next_value_of_I_14;
              STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_ArrayPtr STATE_VARIABLE_B_29_29;
              MR_Integer Var_30;
              MR_Integer Var_31;
              MR_ArrayPtr conv3_STATE_VARIABLE_B_29_29;
              MR_Integer next_value_of_Lo1_10;
              MR_Integer next_value_of_I_14;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_19;

              mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), I_14, ((MR_Box) (X1_16)), (MR_ArrayPtr) (STATE_VARIABLE_B_0_19), &conv3_STATE_VARIABLE_B_29_29);
              STATE_VARIABLE_B_29_29 = (MR_ArrayPtr) (conv3_STATE_VARIABLE_B_29_29);
              Var_30 = (MR_Integer) ((MR_Unsigned) Lo1_10 + (MR_Unsigned) 1);
              Var_31 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Lo1_10 = Var_30;
              next_value_of_I_14 = Var_31;
              next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_29_29;
              Lo1_10 = next_value_of_Lo1_10;
              I_14 = next_value_of_I_14;
              STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_ArrayPtr STATE_VARIABLE_B_35_35;
              MR_Integer Var_36;
              MR_Integer Var_37;
              MR_ArrayPtr conv4_STATE_VARIABLE_B_35_35;
              MR_Integer next_value_of_Lo2_12;
              MR_Integer next_value_of_I_14;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_19;

              mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), I_14, ((MR_Box) (X2_17)), (MR_ArrayPtr) (STATE_VARIABLE_B_0_19), &conv4_STATE_VARIABLE_B_35_35);
              STATE_VARIABLE_B_35_35 = (MR_ArrayPtr) (conv4_STATE_VARIABLE_B_35_35);
              Var_36 = (MR_Integer) ((MR_Unsigned) Lo2_12 + (MR_Unsigned) 1);
              Var_37 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Lo2_12 = Var_36;
              next_value_of_I_14 = Var_37;
              next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_35_35;
              Lo2_12 = next_value_of_Lo2_12;
              I_14 = next_value_of_I_14;
              STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_8 <= Hi_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_String X_12;
      MR_ArrayPtr STATE_VARIABLE_B_15_15;
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Box conv0_X_12;
      MR_ArrayPtr conv1_STATE_VARIABLE_B_15_15;
      MR_Integer next_value_of_Lo_8;
      MR_Integer next_value_of_I_10;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_13;

      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_ArrayPtr) (A_7), Lo_8, &conv0_X_12);
      X_12 = ((MR_String) (conv0_X_12));
      mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), I_10, ((MR_Box) (X_12)), (MR_ArrayPtr) (STATE_VARIABLE_B_0_13), &conv1_STATE_VARIABLE_B_15_15);
      STATE_VARIABLE_B_15_15 = (MR_ArrayPtr) (conv1_STATE_VARIABLE_B_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
      Var_17 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_8 = Var_16;
      next_value_of_I_10 = Var_17;
      next_value_of_STATE_VARIABLE_B_0_13 = STATE_VARIABLE_B_15_15;
      Lo_8 = next_value_of_Lo_8;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_B_0_13 = next_value_of_STATE_VARIABLE_B_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_B_14 = STATE_VARIABLE_B_0_13;
    break;
  }
}

static MR_Integer MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0(
  MR_Word R_6,
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_8 < Hi_9);
    MR_Integer HeadVar__5_5;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Integer Var_13;
    MR_Word Var_18;
    MR_Box conv0_Var_10;
    MR_Box conv1_Var_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (A_7), Lo_8, &conv0_Var_10);
      Var_10 = ((MR_Integer) (conv0_Var_10));
      Var_13 = (MR_Integer) 1;
      Var_12 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) Var_13);
      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (A_7), Var_12, &conv1_Var_11);
      Var_11 = ((MR_Integer) (conv1_Var_11));
      succeeded = (Var_10 < Var_11);
      if (succeeded)
        Var_18 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_10 == Var_11);
        if (succeeded)
          Var_18 = (MR_Integer) 0;
        else
          Var_18 = (MR_Integer) 2;
      }
      succeeded = (R_6 != Var_18);
    }
    if (succeeded)
    {
      MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
      MR_Integer next_value_of_Lo_8 = Var_14;

      // direct tailcall eliminated
      ;
      Lo_8 = next_value_of_Lo_8;
      continue;
    }
    else
      HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
    return HeadVar__5_5;
    break;
  }
}

static MR_Integer MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0(
  MR_Word R_6,
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_8 < Hi_9);
    MR_Integer HeadVar__5_5;
    MR_String Var_10;
    MR_String Var_11;
    MR_Integer Var_12;
    MR_Integer Var_13;
    MR_Word Var_18;
    MR_Integer Var_28;
    MR_Box conv0_Var_10;
    MR_Box conv1_Var_11;
    MR_Integer Var_29;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_ArrayPtr) (A_7), Lo_8, &conv0_Var_10);
      Var_10 = ((MR_String) (conv0_Var_10));
      Var_13 = (MR_Integer) 1;
      Var_12 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) Var_13);
      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_ArrayPtr) (A_7), Var_12, &conv1_Var_11);
      Var_11 = ((MR_String) (conv1_Var_11));
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_10 ;
	S2 = Var_11 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_28  = Res;
}
      Var_29 = (MR_Integer) 0;
      succeeded = (Var_28 < Var_29);
      if (succeeded)
        Var_18 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_28 == (MR_Integer) 0);
        if (succeeded)
          Var_18 = (MR_Integer) 0;
        else
          Var_18 = (MR_Integer) 2;
      }
      succeeded = (R_6 != Var_18);
    }
    if (succeeded)
    {
      MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
      MR_Integer next_value_of_Lo_8 = Var_14;

      // direct tailcall eliminated
      ;
      Lo_8 = next_value_of_Lo_8;
      continue;
    }
    else
      HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
    return HeadVar__5_5;
    break;
  }
}

static MR_Box MR_CALL 
mercury__array__IntroducedFrom__func__array_to_doc_2__3372__1_3_f_0_1(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__1_24;

  conv0_LambdaHeadVar__1_24 = mercury__array__IntroducedFrom__func__array_to_doc_2__3372__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
  wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_24));
  return wrapper_arg_1;
}

static MR_Word MR_CALL 
mercury__array__IntroducedFrom__func__array_to_doc_2__3372__1_3_f_0(
  MR_Word TypeInfo_for_T_28,
  MR_Integer I_4,
  MR_ArrayPtr A_5)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__1_24;
  MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) I_4 + (MR_Unsigned) 1);
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__IntroducedFrom__func__array_to_doc_2__3372__1_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_5 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  succeeded = (Var_25 > Var_31);
  if (succeeded)
    LambdaHeadVar__1_24 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[2]));
  else
  {
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Box Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_60;
    MR_Integer Var_53;

    mercury__array__lookup_3_p_0(TypeInfo_for_T_28, A_5, Var_25, &Var_36);
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_28, Var_36, &Var_60);
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Var_60));
    }
    Var_34 = mercury__pretty_printer__format_arg_1_f_0(Var_35);
{
#define MR_PROC_LABEL mercury__array__IntroducedFrom__func__array_to_doc_2__3372__1_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_5 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_53  = Max;
}
    succeeded = (Var_25 == Var_53);
    if (succeeded)
      Var_38 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[2]));
    else
      Var_38 = (MR_Word) (MR_mkword(MR_mktag(2), &mercury__array_scalar_common_4[6]));
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&mercury__array_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (mercury__array__IntroducedFrom__func__array_to_doc_2__3372__1_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (TypeInfo_for_T_28));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (A_5));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_37));
    }
    {
      LambdaHeadVar__1_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaHeadVar__1_24, 0) = ((MR_Box) (Var_33));
    }
  }
  return LambdaHeadVar__1_24;
}

void MR_CALL 
mercury__array____Compare____index_out_of_bounds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);
    MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__array____Compare____index_out_of_bounds_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_12  = Res;
}
    succeeded = (Var_12 < (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_12 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__array____Unify____index_out_of_bounds_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

void MR_CALL 
mercury__array____Compare____array_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_4 == CastY_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    mercury__array__array_compare_3_p_0(TypeInfo_for_T_6, HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

MR_bool MR_CALL 
mercury__array____Unify____array_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_3 == CastY_4);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer Size_8;
    MR_Integer Var_9;
    MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__array____Unify____array_1_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)HeadVar__1_1 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Size_8  = Max;
}
{
#define MR_PROC_LABEL mercury__array____Unify____array_1_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)HeadVar__2_2 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_10  = Max;
}
    succeeded = (Size_8 == Var_10);
    if (succeeded)
    {
      Var_9 = (MR_Integer) 0;
      succeeded = mercury__array__equal_elements_4_p_0(TypeInfo_for_T_5, Var_9, Size_8, HeadVar__1_1, HeadVar__2_2);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__array_equal_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_ArrayPtr Array1_3,
  MR_ArrayPtr Array2_4)
{
  MR_bool succeeded;
  MR_Integer Size_5;
  MR_Integer Var_6;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__array__array_equal_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array1_3 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Size_5  = Max;
}
{
#define MR_PROC_LABEL mercury__array__array_equal_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array2_4 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_8  = Max;
}
  succeeded = (Size_5 == Var_8);
  if (succeeded)
  {
    Var_6 = (MR_Integer) 0;
    succeeded = mercury__array__equal_elements_4_p_0(TypeInfo_for_T_7, Var_6, Size_5, Array1_3, Array2_4);
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__array__equal_elements_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer N_5,
  MR_Integer Size_6,
  MR_ArrayPtr Array1_7,
  MR_ArrayPtr Array2_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_5 == Size_6);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box Elem_9;
      MR_Integer N1_10;
      MR_Integer Var_11;
      MR_Box Var_13;
      MR_Integer next_value_of_N_5;

{
#define MR_PROC_LABEL mercury__array__equal_elements_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array1_7 ;
	Index = N_5 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Elem_9  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__equal_elements_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array2_8 ;
	Index = N_5 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Item;
}
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_12, Elem_9, Var_13);
      if (succeeded)
      {
        Var_11 = (MR_Integer) 1;
        N1_10 = (MR_Integer) ((MR_Unsigned) N_5 + (MR_Unsigned) Var_11);
        // direct tailcall eliminated
        ;
        next_value_of_N_5 = N1_10;
        N_5 = next_value_of_N_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__samsort_subarray_3_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_ArrayPtr A0_5,
  MR_Integer Lo_6,
  MR_Integer Hi_7)
{
  MR_ArrayPtr A_8;
  MR_ArrayPtr Var_11;
  MR_ArrayPtr Var_9;

{
#define MR_PROC_LABEL mercury__array__samsort_subarray_3_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)A0_5 ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	Var_11  = (MR_Box) Array;
}
  mercury__array__samsort_up_8_p_0(TypeInfo_for_T_13, (MR_Integer) 0, Var_11, &A_8, A0_5, &Var_9, Lo_6, Hi_7, Lo_6);
  return A_8;
}

static void MR_CALL 
mercury__array__shrink_2_3_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Integer HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr * HeadVar__3_3)
{
  mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Integer HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr * HeadVar__3_3)
{
{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_p_0

	MR_Integer Size;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Size = HeadVar__1_1 ;
	Array0 = (MR_ArrayPtr)HeadVar__2_2 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_shrink_array(Array, Array0, Size);


		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = (MR_Box) Array;
}
}

void MR_CALL 
mercury__array__do_resize_4_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3,
  MR_ArrayPtr * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__array__do_resize_4_p_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Size = HeadVar__1_1 ;
	Item = (MR_Word) HeadVar__2_2 ;
	Array0 = (MR_ArrayPtr)HeadVar__3_3 ;
		{

    if ((Array0)->size == Size) {
        Array = Array0;
    } else {
        ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
        ML_resize_array(Array, Array0, Size, Item);
    }


		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) Array;
}
}

void MR_CALL 
mercury__array__unsafe_init_4_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_ArrayPtr * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__array__unsafe_init_4_p_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = HeadVar__1_1 ;
	FirstElem = (MR_Word) HeadVar__2_2 ;
	IndexToSet = HeadVar__3_3 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) Array;
}
}

void MR_CALL 
mercury__array__init_2_3_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_ArrayPtr * HeadVar__3_3)
{
{
#define MR_PROC_LABEL mercury__array__init_2_3_p_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size = HeadVar__1_1 ;
	Item = (MR_Word) HeadVar__2_2 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = (MR_Box) Array;
}
}

MR_bool MR_CALL 
mercury__array__bounds_checks_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__array__bounds_checks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_ARRAY_BOUNDS_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__dynamic_cast_to_array_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_ArrayPtr * A_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_15_15;
  MR_Word TypeInfo_16_16;
  MR_Word TypeInfo_19_19;
  MR_Word ArgTypeDesc_5;
  MR_Word Var_8;
  MR_Word Var_10;
  MR_Word Var_18;
  MR_Word Var_22;
  MR_Box conv0_A_4;

{
#define MR_PROC_LABEL mercury__array__dynamic_cast_to_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T1_14 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_10  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__array__dynamic_cast_to_array_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_10 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	Var_22  = TypeCtorDesc;
	Var_8  = ArgTypes;
}
  succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ArgTypeDesc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 1))));
    TypeInfo_19_19 = (MR_Word) (&mercury__array_scalar_common_5[1]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_18)));
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__array__dynamic_cast_to_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	*TypeInfo_for_T_13  = TypeInfo_for_T;
}
      TypeCtorInfo_15_15 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (*TypeInfo_for_T_13));
      }
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T1_14, TypeInfo_16_16, X_3, &conv0_A_4);
      if (succeeded)
      {
        *A_4 = ((MR_ArrayPtr) (conv0_A_4));
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__array__array_compare_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_ArrayPtr A1_4,
  MR_ArrayPtr A2_5)
{
  MR_Word C_6;

  mercury__array__array_compare_3_p_0(TypeInfo_for_T_7, &C_6, A1_4, A2_5);
  return C_6;
}

void MR_CALL 
mercury__array__array_compare_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * Result_4,
  MR_ArrayPtr Array1_5,
  MR_ArrayPtr Array2_6)
{
  MR_bool succeeded;
  MR_Integer Size1_7;
  MR_Integer Size2_8;
  MR_Word SizeResult_9;

{
#define MR_PROC_LABEL mercury__array__array_compare_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array1_5 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Size1_7  = Max;
}
{
#define MR_PROC_LABEL mercury__array__array_compare_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array2_6 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Size2_8  = Max;
}
  succeeded = (Size1_7 < Size2_8);
  if (succeeded)
    SizeResult_9 = (MR_Integer) 1;
  else
  {
    succeeded = (Size1_7 == Size2_8);
    if (succeeded)
      SizeResult_9 = (MR_Integer) 0;
    else
      SizeResult_9 = (MR_Integer) 2;
  }
  switch (SizeResult_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Result_4 = SizeResult_9;
      break;
    case (MR_Integer) 0:
      mercury__array__compare_elements_5_p_0(TypeInfo_for_T_11, (MR_Integer) 0, Size1_7, Array1_5, Array2_6, Result_4);
      break;
  }
}

static void MR_CALL 
mercury__array__compare_elements_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Integer N_6,
  MR_Integer Size_7,
  MR_ArrayPtr Array1_8,
  MR_ArrayPtr Array2_9,
  MR_Word * Result_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_6 == Size_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *Result_10 = (MR_Integer) 0;
    else
    {
      MR_Box Elem1_11;
      MR_Box Elem2_12;
      MR_Word ElemResult_13;

{
#define MR_PROC_LABEL mercury__array__compare_elements_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array1_8 ;
	Index = N_6 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Elem1_11  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__compare_elements_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array2_9 ;
	Index = N_6 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Elem2_12  = (MR_Box) Item;
}
      mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, &ElemResult_13, Elem1_11, Elem2_12);
      switch (ElemResult_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Result_10 = ElemResult_13;
          break;
        case (MR_Integer) 0:
          {
            MR_Integer N1_14 = (MR_Integer) ((MR_Unsigned) N_6 + (MR_Unsigned) 1);
            MR_Integer next_value_of_N_6 = N1_14;

            // direct tailcall eliminated
            ;
            N_6 = next_value_of_N_6;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
mercury__array__array_to_doc_1_f_0_1(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__1_24;

  conv0_LambdaHeadVar__1_24 = mercury__array__IntroducedFrom__func__array_to_doc_2__3372__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
  wrapper_arg_1 = ((MR_Box) (conv0_LambdaHeadVar__1_24));
  return wrapper_arg_1;
}

MR_Word MR_CALL 
mercury__array__array_to_doc_1_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_ArrayPtr A_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Word Var_70;
  MR_Integer Var_17;

{
#define MR_PROC_LABEL mercury__array__array_to_doc_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_17  = Max;
}
  succeeded = ((MR_Integer) 0 > Var_17);
  if (succeeded)
    Var_8 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[2]));
  else
  {
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Box Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_46;
    MR_Integer Var_39;

    mercury__array__lookup_3_p_0(TypeInfo_for_T_14, A_3, (MR_Integer) 0, &Var_22);
    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, Var_22, &Var_46);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_46));
    }
    Var_20 = mercury__pretty_printer__format_arg_1_f_0(Var_21);
{
#define MR_PROC_LABEL mercury__array__array_to_doc_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_39  = Max;
}
    succeeded = ((MR_Integer) 0 == Var_39);
    if (succeeded)
      Var_24 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[2]));
    else
      Var_24 = (MR_Word) (MR_mkword(MR_mktag(2), &mercury__array_scalar_common_4[6]));
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&mercury__array_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (mercury__array__array_to_doc_1_f_0_1));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (TypeInfo_for_T_14));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_34, 5) = ((MR_Box) (A_3));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_8, 0) = ((MR_Box) (Var_19));
    }
  }
  {
    Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[0])));
  }
  {
    Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[0])));
    MR_hl_field(MR_mktag(1), Var_4, 1) = ((MR_Box) (Var_7));
  }
  {
    Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (Var_4));
  }
  {
    Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_70));
    MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[8])));
  }
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__array_scalar_common_5[11])));
    MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_66));
  }
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__array__map_corresponding_foldl_6_p_5(
  MR_Word TypeInfo_for_T1_28,
  MR_Word TypeInfo_for_T2_29,
  MR_Word TypeInfo_for_T3_30,
  MR_Word TypeInfo_for_T4_31,
  MR_Word Pred_7,
  MR_ArrayPtr ArrayA_8,
  MR_ArrayPtr ArrayB_9,
  MR_ArrayPtr * ArrayC_10,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_bool succeeded;
  MR_Integer SizeA_12;
  MR_Integer SizeB_13;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_8 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeA_12  = Max;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeB_13  = Max;
}
  succeeded = (SizeA_12 != SizeB_13);
  if (succeeded)
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.map_corresponding_foldl\'/6", (MR_String) "mismatched array sizes");
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (SizeA_12 <= (MR_Integer) 0);
    if (succeeded)
    {
      MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_5

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
      *ArrayC_10 = (MR_ArrayPtr) (conv0_Array);
}
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Box Z_16;
      MR_ArrayPtr ArrayC1_17;
      MR_Box STATE_VARIABLE_Acc_25_25;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_8 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_14  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_15  = (MR_Box) Item;
}
      func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
      succeeded = func_1(((MR_Box) (Pred_7)), X_14, Y_15, &Z_16, STATE_VARIABLE_Acc_0_18, &STATE_VARIABLE_Acc_25_25);
      if (succeeded)
      {
        Var_26 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_5

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = SizeA_12 ;
	FirstElem = (MR_Word) Z_16 ;
	IndexToSet = Var_26 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
        ArrayC1_17 = (MR_ArrayPtr) (conv2_Array);
}
        Var_27 = (MR_Integer) 1;
        succeeded = mercury__array__map_corresponding_foldl_2_9_p_5(TypeInfo_for_T1_28, TypeInfo_for_T2_29, TypeInfo_for_T3_30, TypeInfo_for_T4_31, Pred_7, Var_27, SizeA_12, ArrayA_8, ArrayB_9, ArrayC1_17, ArrayC_10, STATE_VARIABLE_Acc_25_25, STATE_VARIABLE_Acc_19);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__map_corresponding_foldl_2_9_p_5(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Size_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_ArrayPtr STATE_VARIABLE_ArrayC_0_20,
  MR_ArrayPtr * STATE_VARIABLE_ArrayC_21,
  MR_Box STATE_VARIABLE_Acc_0_22,
  MR_Box * STATE_VARIABLE_Acc_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 < Size_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Box Z_19;
      MR_Box STATE_VARIABLE_Acc_24_24;
      MR_ArrayPtr STATE_VARIABLE_ArrayC_25_25;
      MR_Integer Var_26;
      MR_Integer Var_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_CurIndex_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_ArrayC_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_22;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_18  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (Pred_10)), X_17, Y_18, &Z_19, STATE_VARIABLE_Acc_0_22, &STATE_VARIABLE_Acc_24_24);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_5

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = CurIndex_11 ;
	Item = (MR_Word) Z_19 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_ArrayC_0_20) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
        STATE_VARIABLE_ArrayC_25_25 = (MR_ArrayPtr) (conv1_Array);
}
        Var_29 = (MR_Integer) 1;
        Var_26 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) Var_29);
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_11 = Var_26;
        next_value_of_STATE_VARIABLE_ArrayC_0_20 = STATE_VARIABLE_ArrayC_25_25;
        next_value_of_STATE_VARIABLE_Acc_0_22 = STATE_VARIABLE_Acc_24_24;
        CurIndex_11 = next_value_of_CurIndex_11;
        STATE_VARIABLE_ArrayC_0_20 = next_value_of_STATE_VARIABLE_ArrayC_0_20;
        STATE_VARIABLE_Acc_0_22 = next_value_of_STATE_VARIABLE_Acc_0_22;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_23 = STATE_VARIABLE_Acc_0_22;
      *STATE_VARIABLE_ArrayC_21 = STATE_VARIABLE_ArrayC_0_20;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__map_corresponding_foldl_6_p_4(
  MR_Word TypeInfo_for_T1_28,
  MR_Word TypeInfo_for_T2_29,
  MR_Word TypeInfo_for_T3_30,
  MR_Word TypeInfo_for_T4_31,
  MR_Word Pred_7,
  MR_ArrayPtr ArrayA_8,
  MR_ArrayPtr ArrayB_9,
  MR_ArrayPtr * ArrayC_10,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_bool succeeded;
  MR_Integer SizeA_12;
  MR_Integer SizeB_13;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_8 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeA_12  = Max;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeB_13  = Max;
}
  succeeded = (SizeA_12 != SizeB_13);
  if (succeeded)
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.map_corresponding_foldl\'/6", (MR_String) "mismatched array sizes");
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (SizeA_12 <= (MR_Integer) 0);
    if (succeeded)
    {
      MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_4

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
      *ArrayC_10 = (MR_ArrayPtr) (conv0_Array);
}
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Box Z_16;
      MR_ArrayPtr ArrayC1_17;
      MR_Box STATE_VARIABLE_Acc_25_25;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_8 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_14  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_15  = (MR_Box) Item;
}
      func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
      succeeded = func_1(((MR_Box) (Pred_7)), X_14, Y_15, &Z_16, STATE_VARIABLE_Acc_0_18, &STATE_VARIABLE_Acc_25_25);
      if (succeeded)
      {
        Var_26 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_4

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = SizeA_12 ;
	FirstElem = (MR_Word) Z_16 ;
	IndexToSet = Var_26 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
        ArrayC1_17 = (MR_ArrayPtr) (conv2_Array);
}
        Var_27 = (MR_Integer) 1;
        succeeded = mercury__array__map_corresponding_foldl_2_9_p_4(TypeInfo_for_T1_28, TypeInfo_for_T2_29, TypeInfo_for_T3_30, TypeInfo_for_T4_31, Pred_7, Var_27, SizeA_12, ArrayA_8, ArrayB_9, ArrayC1_17, ArrayC_10, STATE_VARIABLE_Acc_25_25, STATE_VARIABLE_Acc_19);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__map_corresponding_foldl_2_9_p_4(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Size_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_ArrayPtr STATE_VARIABLE_ArrayC_0_20,
  MR_ArrayPtr * STATE_VARIABLE_ArrayC_21,
  MR_Box STATE_VARIABLE_Acc_0_22,
  MR_Box * STATE_VARIABLE_Acc_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 < Size_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Box Z_19;
      MR_Box STATE_VARIABLE_Acc_24_24;
      MR_ArrayPtr STATE_VARIABLE_ArrayC_25_25;
      MR_Integer Var_26;
      MR_Integer Var_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_CurIndex_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_ArrayC_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_22;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_18  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (Pred_10)), X_17, Y_18, &Z_19, STATE_VARIABLE_Acc_0_22, &STATE_VARIABLE_Acc_24_24);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_4

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = CurIndex_11 ;
	Item = (MR_Word) Z_19 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_ArrayC_0_20) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
        STATE_VARIABLE_ArrayC_25_25 = (MR_ArrayPtr) (conv1_Array);
}
        Var_29 = (MR_Integer) 1;
        Var_26 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) Var_29);
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_11 = Var_26;
        next_value_of_STATE_VARIABLE_ArrayC_0_20 = STATE_VARIABLE_ArrayC_25_25;
        next_value_of_STATE_VARIABLE_Acc_0_22 = STATE_VARIABLE_Acc_24_24;
        CurIndex_11 = next_value_of_CurIndex_11;
        STATE_VARIABLE_ArrayC_0_20 = next_value_of_STATE_VARIABLE_ArrayC_0_20;
        STATE_VARIABLE_Acc_0_22 = next_value_of_STATE_VARIABLE_Acc_0_22;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_23 = STATE_VARIABLE_Acc_0_22;
      *STATE_VARIABLE_ArrayC_21 = STATE_VARIABLE_ArrayC_0_20;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__map_corresponding_foldl_6_p_3(
  MR_Word TypeInfo_for_T1_28,
  MR_Word TypeInfo_for_T2_29,
  MR_Word TypeInfo_for_T3_30,
  MR_Word TypeInfo_for_T4_31,
  MR_Word Pred_7,
  MR_ArrayPtr ArrayA_8,
  MR_ArrayPtr ArrayB_9,
  MR_ArrayPtr * ArrayC_10,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_bool succeeded;
  MR_Integer SizeA_12;
  MR_Integer SizeB_13;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_8 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeA_12  = Max;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeB_13  = Max;
}
  succeeded = (SizeA_12 != SizeB_13);
  if (succeeded)
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.map_corresponding_foldl\'/6", (MR_String) "mismatched array sizes");
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (SizeA_12 <= (MR_Integer) 0);
    if (succeeded)
    {
      MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_3

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
      *ArrayC_10 = (MR_ArrayPtr) (conv0_Array);
}
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Box Z_16;
      MR_ArrayPtr ArrayC1_17;
      MR_Box STATE_VARIABLE_Acc_25_25;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_8 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_14  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_15  = (MR_Box) Item;
}
      func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
      succeeded = func_1(((MR_Box) (Pred_7)), X_14, Y_15, &Z_16, STATE_VARIABLE_Acc_0_18, &STATE_VARIABLE_Acc_25_25);
      if (succeeded)
      {
        Var_26 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_3

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = SizeA_12 ;
	FirstElem = (MR_Word) Z_16 ;
	IndexToSet = Var_26 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
        ArrayC1_17 = (MR_ArrayPtr) (conv2_Array);
}
        Var_27 = (MR_Integer) 1;
        succeeded = mercury__array__map_corresponding_foldl_2_9_p_3(TypeInfo_for_T1_28, TypeInfo_for_T2_29, TypeInfo_for_T3_30, TypeInfo_for_T4_31, Pred_7, Var_27, SizeA_12, ArrayA_8, ArrayB_9, ArrayC1_17, ArrayC_10, STATE_VARIABLE_Acc_25_25, STATE_VARIABLE_Acc_19);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__map_corresponding_foldl_2_9_p_3(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Size_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_ArrayPtr STATE_VARIABLE_ArrayC_0_20,
  MR_ArrayPtr * STATE_VARIABLE_ArrayC_21,
  MR_Box STATE_VARIABLE_Acc_0_22,
  MR_Box * STATE_VARIABLE_Acc_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 < Size_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Box Z_19;
      MR_Box STATE_VARIABLE_Acc_24_24;
      MR_ArrayPtr STATE_VARIABLE_ArrayC_25_25;
      MR_Integer Var_26;
      MR_Integer Var_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_CurIndex_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_ArrayC_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_22;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_18  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (Pred_10)), X_17, Y_18, &Z_19, STATE_VARIABLE_Acc_0_22, &STATE_VARIABLE_Acc_24_24);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_3

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = CurIndex_11 ;
	Item = (MR_Word) Z_19 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_ArrayC_0_20) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
        STATE_VARIABLE_ArrayC_25_25 = (MR_ArrayPtr) (conv1_Array);
}
        Var_29 = (MR_Integer) 1;
        Var_26 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) Var_29);
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_11 = Var_26;
        next_value_of_STATE_VARIABLE_ArrayC_0_20 = STATE_VARIABLE_ArrayC_25_25;
        next_value_of_STATE_VARIABLE_Acc_0_22 = STATE_VARIABLE_Acc_24_24;
        CurIndex_11 = next_value_of_CurIndex_11;
        STATE_VARIABLE_ArrayC_0_20 = next_value_of_STATE_VARIABLE_ArrayC_0_20;
        STATE_VARIABLE_Acc_0_22 = next_value_of_STATE_VARIABLE_Acc_0_22;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_23 = STATE_VARIABLE_Acc_0_22;
      *STATE_VARIABLE_ArrayC_21 = STATE_VARIABLE_ArrayC_0_20;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_6_p_2(
  MR_Word TypeInfo_for_T1_28,
  MR_Word TypeInfo_for_T2_29,
  MR_Word TypeInfo_for_T3_30,
  MR_Word TypeInfo_for_T4_31,
  MR_Word Pred_7,
  MR_ArrayPtr ArrayA_8,
  MR_ArrayPtr ArrayB_9,
  MR_ArrayPtr * ArrayC_10,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_bool succeeded;
  MR_Integer SizeA_12;
  MR_Integer SizeB_13;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_8 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeA_12  = Max;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeB_13  = Max;
}
  succeeded = (SizeA_12 != SizeB_13);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.map_corresponding_foldl\'/6", (MR_String) "mismatched array sizes");
      return;
    }
  else
  {
    succeeded = (SizeA_12 <= (MR_Integer) 0);
    if (succeeded)
    {
      MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_2

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
      *ArrayC_10 = (MR_ArrayPtr) (conv0_Array);
}
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Box Z_16;
      MR_ArrayPtr ArrayC1_17;
      MR_Box STATE_VARIABLE_Acc_25_25;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_8 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_14  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_15  = (MR_Box) Item;
}
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
      func_1(((MR_Box) (Pred_7)), X_14, Y_15, &Z_16, STATE_VARIABLE_Acc_0_18, &STATE_VARIABLE_Acc_25_25);
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_2

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = SizeA_12 ;
	FirstElem = (MR_Word) Z_16 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
      ArrayC1_17 = (MR_ArrayPtr) (conv2_Array);
}
      mercury__array__map_corresponding_foldl_2_9_p_2(TypeInfo_for_T1_28, TypeInfo_for_T2_29, TypeInfo_for_T3_30, TypeInfo_for_T4_31, Pred_7, (MR_Integer) 1, SizeA_12, ArrayA_8, ArrayB_9, ArrayC1_17, ArrayC_10, STATE_VARIABLE_Acc_25_25, STATE_VARIABLE_Acc_19);
    }
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_2_9_p_2(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Size_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_ArrayPtr STATE_VARIABLE_ArrayC_0_20,
  MR_ArrayPtr * STATE_VARIABLE_ArrayC_21,
  MR_Box STATE_VARIABLE_Acc_0_22,
  MR_Box * STATE_VARIABLE_Acc_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 < Size_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Box Z_19;
      MR_Box STATE_VARIABLE_Acc_24_24;
      MR_ArrayPtr STATE_VARIABLE_ArrayC_25_25;
      MR_Integer Var_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_CurIndex_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_ArrayC_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_22;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_18  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      func_0(((MR_Box) (Pred_10)), X_17, Y_18, &Z_19, STATE_VARIABLE_Acc_0_22, &STATE_VARIABLE_Acc_24_24);
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_2

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = CurIndex_11 ;
	Item = (MR_Word) Z_19 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_ArrayC_0_20) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
      STATE_VARIABLE_ArrayC_25_25 = (MR_ArrayPtr) (conv1_Array);
}
      Var_26 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_11 = Var_26;
      next_value_of_STATE_VARIABLE_ArrayC_0_20 = STATE_VARIABLE_ArrayC_25_25;
      next_value_of_STATE_VARIABLE_Acc_0_22 = STATE_VARIABLE_Acc_24_24;
      CurIndex_11 = next_value_of_CurIndex_11;
      STATE_VARIABLE_ArrayC_0_20 = next_value_of_STATE_VARIABLE_ArrayC_0_20;
      STATE_VARIABLE_Acc_0_22 = next_value_of_STATE_VARIABLE_Acc_0_22;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc_23 = STATE_VARIABLE_Acc_0_22;
      *STATE_VARIABLE_ArrayC_21 = STATE_VARIABLE_ArrayC_0_20;
    }
    break;
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_6_p_1(
  MR_Word TypeInfo_for_T1_28,
  MR_Word TypeInfo_for_T2_29,
  MR_Word TypeInfo_for_T3_30,
  MR_Word TypeInfo_for_T4_31,
  MR_Word Pred_7,
  MR_ArrayPtr ArrayA_8,
  MR_ArrayPtr ArrayB_9,
  MR_ArrayPtr * ArrayC_10,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_bool succeeded;
  MR_Integer SizeA_12;
  MR_Integer SizeB_13;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_8 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeA_12  = Max;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeB_13  = Max;
}
  succeeded = (SizeA_12 != SizeB_13);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.map_corresponding_foldl\'/6", (MR_String) "mismatched array sizes");
      return;
    }
  else
  {
    succeeded = (SizeA_12 <= (MR_Integer) 0);
    if (succeeded)
    {
      MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_1

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
      *ArrayC_10 = (MR_ArrayPtr) (conv0_Array);
}
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Box Z_16;
      MR_ArrayPtr ArrayC1_17;
      MR_Box STATE_VARIABLE_Acc_25_25;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_8 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_14  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_15  = (MR_Box) Item;
}
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
      func_1(((MR_Box) (Pred_7)), X_14, Y_15, &Z_16, STATE_VARIABLE_Acc_0_18, &STATE_VARIABLE_Acc_25_25);
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_1

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = SizeA_12 ;
	FirstElem = (MR_Word) Z_16 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
      ArrayC1_17 = (MR_ArrayPtr) (conv2_Array);
}
      mercury__array__map_corresponding_foldl_2_9_p_1(TypeInfo_for_T1_28, TypeInfo_for_T2_29, TypeInfo_for_T3_30, TypeInfo_for_T4_31, Pred_7, (MR_Integer) 1, SizeA_12, ArrayA_8, ArrayB_9, ArrayC1_17, ArrayC_10, STATE_VARIABLE_Acc_25_25, STATE_VARIABLE_Acc_19);
    }
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_2_9_p_1(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Size_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_ArrayPtr STATE_VARIABLE_ArrayC_0_20,
  MR_ArrayPtr * STATE_VARIABLE_ArrayC_21,
  MR_Box STATE_VARIABLE_Acc_0_22,
  MR_Box * STATE_VARIABLE_Acc_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 < Size_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Box Z_19;
      MR_Box STATE_VARIABLE_Acc_24_24;
      MR_ArrayPtr STATE_VARIABLE_ArrayC_25_25;
      MR_Integer Var_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_CurIndex_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_ArrayC_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_22;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_18  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      func_0(((MR_Box) (Pred_10)), X_17, Y_18, &Z_19, STATE_VARIABLE_Acc_0_22, &STATE_VARIABLE_Acc_24_24);
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_1

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = CurIndex_11 ;
	Item = (MR_Word) Z_19 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_ArrayC_0_20) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
      STATE_VARIABLE_ArrayC_25_25 = (MR_ArrayPtr) (conv1_Array);
}
      Var_26 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_11 = Var_26;
      next_value_of_STATE_VARIABLE_ArrayC_0_20 = STATE_VARIABLE_ArrayC_25_25;
      next_value_of_STATE_VARIABLE_Acc_0_22 = STATE_VARIABLE_Acc_24_24;
      CurIndex_11 = next_value_of_CurIndex_11;
      STATE_VARIABLE_ArrayC_0_20 = next_value_of_STATE_VARIABLE_ArrayC_0_20;
      STATE_VARIABLE_Acc_0_22 = next_value_of_STATE_VARIABLE_Acc_0_22;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc_23 = STATE_VARIABLE_Acc_0_22;
      *STATE_VARIABLE_ArrayC_21 = STATE_VARIABLE_ArrayC_0_20;
    }
    break;
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_6_p_0(
  MR_Word TypeInfo_for_T1_28,
  MR_Word TypeInfo_for_T2_29,
  MR_Word TypeInfo_for_T3_30,
  MR_Word TypeInfo_for_T4_31,
  MR_Word Pred_7,
  MR_ArrayPtr ArrayA_8,
  MR_ArrayPtr ArrayB_9,
  MR_ArrayPtr * ArrayC_10,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_bool succeeded;
  MR_Integer SizeA_12;
  MR_Integer SizeB_13;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_8 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeA_12  = Max;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	SizeB_13  = Max;
}
  succeeded = (SizeA_12 != SizeB_13);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.map_corresponding_foldl\'/6", (MR_String) "mismatched array sizes");
      return;
    }
  else
  {
    succeeded = (SizeA_12 <= (MR_Integer) 0);
    if (succeeded)
    {
      MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
      *ArrayC_10 = (MR_ArrayPtr) (conv0_Array);
}
      *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
    }
    else
    {
      MR_Box X_14;
      MR_Box Y_15;
      MR_Box Z_16;
      MR_ArrayPtr ArrayC1_17;
      MR_Box STATE_VARIABLE_Acc_25_25;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_8 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_14  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_9) ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_15  = (MR_Box) Item;
}
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
      func_1(((MR_Box) (Pred_7)), X_14, Y_15, &Z_16, STATE_VARIABLE_Acc_0_18, &STATE_VARIABLE_Acc_25_25);
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = SizeA_12 ;
	FirstElem = (MR_Word) Z_16 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
      ArrayC1_17 = (MR_ArrayPtr) (conv2_Array);
}
      mercury__array__map_corresponding_foldl_2_9_p_0(TypeInfo_for_T1_28, TypeInfo_for_T2_29, TypeInfo_for_T3_30, TypeInfo_for_T4_31, Pred_7, (MR_Integer) 1, SizeA_12, ArrayA_8, ArrayB_9, ArrayC1_17, ArrayC_10, STATE_VARIABLE_Acc_25_25, STATE_VARIABLE_Acc_19);
    }
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_2_9_p_0(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Size_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_ArrayPtr STATE_VARIABLE_ArrayC_0_20,
  MR_ArrayPtr * STATE_VARIABLE_ArrayC_21,
  MR_Box STATE_VARIABLE_Acc_0_22,
  MR_Box * STATE_VARIABLE_Acc_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 < Size_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box X_17;
      MR_Box Y_18;
      MR_Box Z_19;
      MR_Box STATE_VARIABLE_Acc_24_24;
      MR_ArrayPtr STATE_VARIABLE_ArrayC_25_25;
      MR_Integer Var_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_CurIndex_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_ArrayC_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_22;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Y_18  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      func_0(((MR_Box) (Pred_10)), X_17, Y_18, &Z_19, STATE_VARIABLE_Acc_0_22, &STATE_VARIABLE_Acc_24_24);
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = CurIndex_11 ;
	Item = (MR_Word) Z_19 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_ArrayC_0_20) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
      STATE_VARIABLE_ArrayC_25_25 = (MR_ArrayPtr) (conv1_Array);
}
      Var_26 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_11 = Var_26;
      next_value_of_STATE_VARIABLE_ArrayC_0_20 = STATE_VARIABLE_ArrayC_25_25;
      next_value_of_STATE_VARIABLE_Acc_0_22 = STATE_VARIABLE_Acc_24_24;
      CurIndex_11 = next_value_of_CurIndex_11;
      STATE_VARIABLE_ArrayC_0_20 = next_value_of_STATE_VARIABLE_ArrayC_0_20;
      STATE_VARIABLE_Acc_0_22 = next_value_of_STATE_VARIABLE_Acc_0_22;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc_23 = STATE_VARIABLE_Acc_0_22;
      *STATE_VARIABLE_ArrayC_21 = STATE_VARIABLE_ArrayC_0_20;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__map_foldl_5_p_3(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Word TypeInfo_for_T3_23,
  MR_Word Pred_6,
  MR_ArrayPtr ArrayA_7,
  MR_ArrayPtr * ArrayB_8,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15)
{
  MR_bool succeeded;
  MR_Integer N_10;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_7 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	N_10  = Max;
}
  succeeded = (N_10 <= (MR_Integer) 0);
  if (succeeded)
  {
    MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_3

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
    *ArrayB_8 = (MR_ArrayPtr) (conv0_Array);
}
    *STATE_VARIABLE_AccA_15 = STATE_VARIABLE_AccA_0_14;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Box X_11;
    MR_Box Y_12;
    MR_ArrayPtr ArrayB1_13;
    MR_Box STATE_VARIABLE_AccA_18_18;
    MR_Integer Var_19;
    MR_Integer Var_20;
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_7 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_11  = (MR_Box) Item;
}
    func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1))));
    succeeded = func_1(((MR_Box) (Pred_6)), X_11, &Y_12, STATE_VARIABLE_AccA_0_14, &STATE_VARIABLE_AccA_18_18);
    if (succeeded)
    {
      Var_19 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_3

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = N_10 ;
	FirstElem = (MR_Word) Y_12 ;
	IndexToSet = Var_19 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
      ArrayB1_13 = (MR_ArrayPtr) (conv2_Array);
}
      Var_20 = (MR_Integer) 1;
      succeeded = mercury__array__map_foldl_loop_7_p_3(TypeInfo_for_T1_21, TypeInfo_for_T2_22, TypeInfo_for_T3_23, Pred_6, Var_20, ArrayA_7, ArrayB1_13, ArrayB_8, STATE_VARIABLE_AccA_18_18, STATE_VARIABLE_AccA_15);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__map_foldl_loop_7_p_3(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word Pred_8,
  MR_Integer CurIndex_9,
  MR_ArrayPtr ArrayA_10,
  MR_ArrayPtr STATE_VARIABLE_ArrayB_0_15,
  MR_ArrayPtr * STATE_VARIABLE_ArrayB_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_19;

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_10 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_19  = Max;
}
    succeeded = (CurIndex_9 < Var_19);
    if (succeeded)
    {
      MR_Box X_13;
      MR_Box Y_14;
      MR_Box STATE_VARIABLE_AccA_20_20;
      MR_ArrayPtr STATE_VARIABLE_ArrayB_21_21;
      MR_Integer Var_22;
      MR_Integer Var_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_CurIndex_9;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_ArrayB_0_15;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_17;

{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_10 ;
	Index = CurIndex_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_13  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (Pred_8)), X_13, &Y_14, STATE_VARIABLE_AccA_0_17, &STATE_VARIABLE_AccA_20_20);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_3

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = CurIndex_9 ;
	Item = (MR_Word) Y_14 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_ArrayB_0_15) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
        STATE_VARIABLE_ArrayB_21_21 = (MR_ArrayPtr) (conv1_Array);
}
        Var_25 = (MR_Integer) 1;
        Var_22 = (MR_Integer) ((MR_Unsigned) CurIndex_9 + (MR_Unsigned) Var_25);
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_9 = Var_22;
        next_value_of_STATE_VARIABLE_ArrayB_0_15 = STATE_VARIABLE_ArrayB_21_21;
        next_value_of_STATE_VARIABLE_AccA_0_17 = STATE_VARIABLE_AccA_20_20;
        CurIndex_9 = next_value_of_CurIndex_9;
        STATE_VARIABLE_ArrayB_0_15 = next_value_of_STATE_VARIABLE_ArrayB_0_15;
        STATE_VARIABLE_AccA_0_17 = next_value_of_STATE_VARIABLE_AccA_0_17;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_AccA_18 = STATE_VARIABLE_AccA_0_17;
      *STATE_VARIABLE_ArrayB_16 = STATE_VARIABLE_ArrayB_0_15;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__map_foldl_5_p_2(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Word TypeInfo_for_T3_23,
  MR_Word Pred_6,
  MR_ArrayPtr ArrayA_7,
  MR_ArrayPtr * ArrayB_8,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15)
{
  MR_bool succeeded;
  MR_Integer N_10;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_7 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	N_10  = Max;
}
  succeeded = (N_10 <= (MR_Integer) 0);
  if (succeeded)
  {
    MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_2

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
    *ArrayB_8 = (MR_ArrayPtr) (conv0_Array);
}
    *STATE_VARIABLE_AccA_15 = STATE_VARIABLE_AccA_0_14;
  }
  else
  {
    MR_Box X_11;
    MR_Box Y_12;
    MR_ArrayPtr ArrayB1_13;
    MR_Box STATE_VARIABLE_AccA_18_18;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_7 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_11  = (MR_Box) Item;
}
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1))));
    func_1(((MR_Box) (Pred_6)), X_11, &Y_12, STATE_VARIABLE_AccA_0_14, &STATE_VARIABLE_AccA_18_18);
{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_2

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = N_10 ;
	FirstElem = (MR_Word) Y_12 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
    ArrayB1_13 = (MR_ArrayPtr) (conv2_Array);
}
    mercury__array__map_foldl_loop_7_p_2(TypeInfo_for_T1_21, TypeInfo_for_T2_22, TypeInfo_for_T3_23, Pred_6, (MR_Integer) 1, ArrayA_7, ArrayB1_13, ArrayB_8, STATE_VARIABLE_AccA_18_18, STATE_VARIABLE_AccA_15);
  }
}

void MR_CALL 
mercury__array__map_foldl_loop_7_p_2(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word Pred_8,
  MR_Integer CurIndex_9,
  MR_ArrayPtr ArrayA_10,
  MR_ArrayPtr STATE_VARIABLE_ArrayB_0_15,
  MR_ArrayPtr * STATE_VARIABLE_ArrayB_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_10 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_19  = Max;
}
    succeeded = (CurIndex_9 < Var_19);
    if (succeeded)
    {
      MR_Box X_13;
      MR_Box Y_14;
      MR_Box STATE_VARIABLE_AccA_20_20;
      MR_ArrayPtr STATE_VARIABLE_ArrayB_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_CurIndex_9;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_ArrayB_0_15;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_17;

{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_10 ;
	Index = CurIndex_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_13  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
      func_0(((MR_Box) (Pred_8)), X_13, &Y_14, STATE_VARIABLE_AccA_0_17, &STATE_VARIABLE_AccA_20_20);
{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_2

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = CurIndex_9 ;
	Item = (MR_Word) Y_14 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_ArrayB_0_15) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
      STATE_VARIABLE_ArrayB_21_21 = (MR_ArrayPtr) (conv1_Array);
}
      Var_22 = (MR_Integer) ((MR_Unsigned) CurIndex_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_9 = Var_22;
      next_value_of_STATE_VARIABLE_ArrayB_0_15 = STATE_VARIABLE_ArrayB_21_21;
      next_value_of_STATE_VARIABLE_AccA_0_17 = STATE_VARIABLE_AccA_20_20;
      CurIndex_9 = next_value_of_CurIndex_9;
      STATE_VARIABLE_ArrayB_0_15 = next_value_of_STATE_VARIABLE_ArrayB_0_15;
      STATE_VARIABLE_AccA_0_17 = next_value_of_STATE_VARIABLE_AccA_0_17;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccA_18 = STATE_VARIABLE_AccA_0_17;
      *STATE_VARIABLE_ArrayB_16 = STATE_VARIABLE_ArrayB_0_15;
    }
    break;
  }
}

void MR_CALL 
mercury__array__map_foldl_5_p_1(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Word TypeInfo_for_T3_23,
  MR_Word Pred_6,
  MR_ArrayPtr ArrayA_7,
  MR_ArrayPtr * ArrayB_8,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15)
{
  MR_bool succeeded;
  MR_Integer N_10;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_7 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	N_10  = Max;
}
  succeeded = (N_10 <= (MR_Integer) 0);
  if (succeeded)
  {
    MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_1

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
    *ArrayB_8 = (MR_ArrayPtr) (conv0_Array);
}
    *STATE_VARIABLE_AccA_15 = STATE_VARIABLE_AccA_0_14;
  }
  else
  {
    MR_Box X_11;
    MR_Box Y_12;
    MR_ArrayPtr ArrayB1_13;
    MR_Box STATE_VARIABLE_AccA_18_18;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_7 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_11  = (MR_Box) Item;
}
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1))));
    func_1(((MR_Box) (Pred_6)), X_11, &Y_12, STATE_VARIABLE_AccA_0_14, &STATE_VARIABLE_AccA_18_18);
{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_1

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = N_10 ;
	FirstElem = (MR_Word) Y_12 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
    ArrayB1_13 = (MR_ArrayPtr) (conv2_Array);
}
    mercury__array__map_foldl_loop_7_p_1(TypeInfo_for_T1_21, TypeInfo_for_T2_22, TypeInfo_for_T3_23, Pred_6, (MR_Integer) 1, ArrayA_7, ArrayB1_13, ArrayB_8, STATE_VARIABLE_AccA_18_18, STATE_VARIABLE_AccA_15);
  }
}

void MR_CALL 
mercury__array__map_foldl_loop_7_p_1(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word Pred_8,
  MR_Integer CurIndex_9,
  MR_ArrayPtr ArrayA_10,
  MR_ArrayPtr STATE_VARIABLE_ArrayB_0_15,
  MR_ArrayPtr * STATE_VARIABLE_ArrayB_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_10 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_19  = Max;
}
    succeeded = (CurIndex_9 < Var_19);
    if (succeeded)
    {
      MR_Box X_13;
      MR_Box Y_14;
      MR_Box STATE_VARIABLE_AccA_20_20;
      MR_ArrayPtr STATE_VARIABLE_ArrayB_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_CurIndex_9;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_ArrayB_0_15;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_17;

{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_10 ;
	Index = CurIndex_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_13  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
      func_0(((MR_Box) (Pred_8)), X_13, &Y_14, STATE_VARIABLE_AccA_0_17, &STATE_VARIABLE_AccA_20_20);
{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_1

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = CurIndex_9 ;
	Item = (MR_Word) Y_14 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_ArrayB_0_15) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
      STATE_VARIABLE_ArrayB_21_21 = (MR_ArrayPtr) (conv1_Array);
}
      Var_22 = (MR_Integer) ((MR_Unsigned) CurIndex_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_9 = Var_22;
      next_value_of_STATE_VARIABLE_ArrayB_0_15 = STATE_VARIABLE_ArrayB_21_21;
      next_value_of_STATE_VARIABLE_AccA_0_17 = STATE_VARIABLE_AccA_20_20;
      CurIndex_9 = next_value_of_CurIndex_9;
      STATE_VARIABLE_ArrayB_0_15 = next_value_of_STATE_VARIABLE_ArrayB_0_15;
      STATE_VARIABLE_AccA_0_17 = next_value_of_STATE_VARIABLE_AccA_0_17;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccA_18 = STATE_VARIABLE_AccA_0_17;
      *STATE_VARIABLE_ArrayB_16 = STATE_VARIABLE_ArrayB_0_15;
    }
    break;
  }
}

void MR_CALL 
mercury__array__map_foldl_5_p_0(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Word TypeInfo_for_T3_23,
  MR_Word Pred_6,
  MR_ArrayPtr ArrayA_7,
  MR_ArrayPtr * ArrayB_8,
  MR_Box STATE_VARIABLE_AccA_0_14,
  MR_Box * STATE_VARIABLE_AccA_15)
{
  MR_bool succeeded;
  MR_Integer N_10;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_7 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	N_10  = Max;
}
  succeeded = (N_10 <= (MR_Integer) 0);
  if (succeeded)
  {
    MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
    *ArrayB_8 = (MR_ArrayPtr) (conv0_Array);
}
    *STATE_VARIABLE_AccA_15 = STATE_VARIABLE_AccA_0_14;
  }
  else
  {
    MR_Box X_11;
    MR_Box Y_12;
    MR_ArrayPtr ArrayB1_13;
    MR_Box STATE_VARIABLE_AccA_18_18;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_7 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_11  = (MR_Box) Item;
}
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1))));
    func_1(((MR_Box) (Pred_6)), X_11, &Y_12, STATE_VARIABLE_AccA_0_14, &STATE_VARIABLE_AccA_18_18);
{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = N_10 ;
	FirstElem = (MR_Word) Y_12 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
    ArrayB1_13 = (MR_ArrayPtr) (conv2_Array);
}
    mercury__array__map_foldl_loop_7_p_0(TypeInfo_for_T1_21, TypeInfo_for_T2_22, TypeInfo_for_T3_23, Pred_6, (MR_Integer) 1, ArrayA_7, ArrayB1_13, ArrayB_8, STATE_VARIABLE_AccA_18_18, STATE_VARIABLE_AccA_15);
  }
}

void MR_CALL 
mercury__array__map_foldl_loop_7_p_0(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word Pred_8,
  MR_Integer CurIndex_9,
  MR_ArrayPtr ArrayA_10,
  MR_ArrayPtr STATE_VARIABLE_ArrayB_0_15,
  MR_ArrayPtr * STATE_VARIABLE_ArrayB_16,
  MR_Box STATE_VARIABLE_AccA_0_17,
  MR_Box * STATE_VARIABLE_AccA_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)ArrayA_10 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_19  = Max;
}
    succeeded = (CurIndex_9 < Var_19);
    if (succeeded)
    {
      MR_Box X_13;
      MR_Box Y_14;
      MR_Box STATE_VARIABLE_AccA_20_20;
      MR_ArrayPtr STATE_VARIABLE_ArrayB_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_CurIndex_9;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_ArrayB_0_15;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_17;

{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_10 ;
	Index = CurIndex_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	X_13  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
      func_0(((MR_Box) (Pred_8)), X_13, &Y_14, STATE_VARIABLE_AccA_0_17, &STATE_VARIABLE_AccA_20_20);
{
#define MR_PROC_LABEL mercury__array__map_foldl_loop_7_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = CurIndex_9 ;
	Item = (MR_Word) Y_14 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_ArrayB_0_15) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
      STATE_VARIABLE_ArrayB_21_21 = (MR_ArrayPtr) (conv1_Array);
}
      Var_22 = (MR_Integer) ((MR_Unsigned) CurIndex_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_9 = Var_22;
      next_value_of_STATE_VARIABLE_ArrayB_0_15 = STATE_VARIABLE_ArrayB_21_21;
      next_value_of_STATE_VARIABLE_AccA_0_17 = STATE_VARIABLE_AccA_20_20;
      CurIndex_9 = next_value_of_CurIndex_9;
      STATE_VARIABLE_ArrayB_0_15 = next_value_of_STATE_VARIABLE_ArrayB_0_15;
      STATE_VARIABLE_AccA_0_17 = next_value_of_STATE_VARIABLE_AccA_0_17;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccA_18 = STATE_VARIABLE_AccA_0_17;
      *STATE_VARIABLE_ArrayB_16 = STATE_VARIABLE_ArrayB_0_15;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl2_corresponding_7_p_5(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_8,
  MR_ArrayPtr A_9,
  MR_ArrayPtr B_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  MR_bool succeeded;
  MR_Integer MaxA_13;
  MR_Integer MaxB_14;

{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_9 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_13  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_10) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_14  = Max;
}
  succeeded = (MaxA_13 == MaxB_14);
  if (succeeded)
    succeeded = mercury__array__do_foldl2_corresponding_9_p_5(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_8, (MR_Integer) 0, MaxA_13, A_9, B_10, STATE_VARIABLE_Acc1_0_15, STATE_VARIABLE_Acc1_16, STATE_VARIABLE_Acc2_0_17, STATE_VARIABLE_Acc2_18);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl2_corresponding\'/7", (MR_String) "mismatched array sizes");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl2_corresponding_9_p_5(
  MR_Word TypeInfo_for_T1_29,
  MR_Word TypeInfo_for_T2_30,
  MR_Word TypeInfo_for_T3_31,
  MR_Word TypeInfo_for_T4_32,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Max_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 > Max_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box ElemA_17;
      MR_Box ElemB_18;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_25;
      MR_Integer Var_28;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_CurIndex_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemA_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemB_18  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (Pred_10)), ElemA_17, ElemB_18, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_24_24);
      if (succeeded)
      {
        Var_28 = (MR_Integer) 1;
        Var_25 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) Var_28);
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_11 = Var_25;
        next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_23_23;
        next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_24_24;
        CurIndex_11 = next_value_of_CurIndex_11;
        STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
        STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl2_corresponding_7_p_4(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_8,
  MR_ArrayPtr A_9,
  MR_ArrayPtr B_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  MR_bool succeeded;
  MR_Integer MaxA_13;
  MR_Integer MaxB_14;

{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_9 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_13  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_10) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_14  = Max;
}
  succeeded = (MaxA_13 == MaxB_14);
  if (succeeded)
    succeeded = mercury__array__do_foldl2_corresponding_9_p_4(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_8, (MR_Integer) 0, MaxA_13, A_9, B_10, STATE_VARIABLE_Acc1_0_15, STATE_VARIABLE_Acc1_16, STATE_VARIABLE_Acc2_0_17, STATE_VARIABLE_Acc2_18);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl2_corresponding\'/7", (MR_String) "mismatched array sizes");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl2_corresponding_9_p_4(
  MR_Word TypeInfo_for_T1_29,
  MR_Word TypeInfo_for_T2_30,
  MR_Word TypeInfo_for_T3_31,
  MR_Word TypeInfo_for_T4_32,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Max_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 > Max_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box ElemA_17;
      MR_Box ElemB_18;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_25;
      MR_Integer Var_28;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_CurIndex_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemA_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemB_18  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (Pred_10)), ElemA_17, ElemB_18, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_24_24);
      if (succeeded)
      {
        Var_28 = (MR_Integer) 1;
        Var_25 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) Var_28);
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_11 = Var_25;
        next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_23_23;
        next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_24_24;
        CurIndex_11 = next_value_of_CurIndex_11;
        STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
        STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl2_corresponding_7_p_3(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_8,
  MR_ArrayPtr A_9,
  MR_ArrayPtr B_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  MR_bool succeeded;
  MR_Integer MaxA_13;
  MR_Integer MaxB_14;

{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_9 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_13  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_10) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_14  = Max;
}
  succeeded = (MaxA_13 == MaxB_14);
  if (succeeded)
    succeeded = mercury__array__do_foldl2_corresponding_9_p_3(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_8, (MR_Integer) 0, MaxA_13, A_9, B_10, STATE_VARIABLE_Acc1_0_15, STATE_VARIABLE_Acc1_16, STATE_VARIABLE_Acc2_0_17, STATE_VARIABLE_Acc2_18);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl2_corresponding\'/7", (MR_String) "mismatched array sizes");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl2_corresponding_9_p_3(
  MR_Word TypeInfo_for_T1_29,
  MR_Word TypeInfo_for_T2_30,
  MR_Word TypeInfo_for_T3_31,
  MR_Word TypeInfo_for_T4_32,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Max_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 > Max_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box ElemA_17;
      MR_Box ElemB_18;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_25;
      MR_Integer Var_28;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_CurIndex_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemA_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemB_18  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (Pred_10)), ElemA_17, ElemB_18, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_24_24);
      if (succeeded)
      {
        Var_28 = (MR_Integer) 1;
        Var_25 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) Var_28);
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_11 = Var_25;
        next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_23_23;
        next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_24_24;
        CurIndex_11 = next_value_of_CurIndex_11;
        STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
        STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldl2_corresponding_7_p_2(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_8,
  MR_ArrayPtr A_9,
  MR_ArrayPtr B_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  MR_bool succeeded;
  MR_Integer MaxA_13;
  MR_Integer MaxB_14;

{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_9 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_13  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_10) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_14  = Max;
}
  succeeded = (MaxA_13 == MaxB_14);
  if (succeeded)
    mercury__array__do_foldl2_corresponding_9_p_2(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_8, (MR_Integer) 0, MaxA_13, A_9, B_10, STATE_VARIABLE_Acc1_0_15, STATE_VARIABLE_Acc1_16, STATE_VARIABLE_Acc2_0_17, STATE_VARIABLE_Acc2_18);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl2_corresponding\'/7", (MR_String) "mismatched array sizes");
      return;
    }
}

void MR_CALL 
mercury__array__do_foldl2_corresponding_9_p_2(
  MR_Word TypeInfo_for_T1_29,
  MR_Word TypeInfo_for_T2_30,
  MR_Word TypeInfo_for_T3_31,
  MR_Word TypeInfo_for_T4_32,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Max_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 > Max_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
    }
    else
    {
      MR_Box ElemA_17;
      MR_Box ElemB_18;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_CurIndex_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemA_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemB_18  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      func_0(((MR_Box) (Pred_10)), ElemA_17, ElemB_18, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_24_24);
      Var_25 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_11 = Var_25;
      next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_23_23;
      next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_24_24;
      CurIndex_11 = next_value_of_CurIndex_11;
      STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
      STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl2_corresponding_7_p_1(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_8,
  MR_ArrayPtr A_9,
  MR_ArrayPtr B_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  MR_bool succeeded;
  MR_Integer MaxA_13;
  MR_Integer MaxB_14;

{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_9 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_13  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_10) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_14  = Max;
}
  succeeded = (MaxA_13 == MaxB_14);
  if (succeeded)
    mercury__array__do_foldl2_corresponding_9_p_1(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_8, (MR_Integer) 0, MaxA_13, A_9, B_10, STATE_VARIABLE_Acc1_0_15, STATE_VARIABLE_Acc1_16, STATE_VARIABLE_Acc2_0_17, STATE_VARIABLE_Acc2_18);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl2_corresponding\'/7", (MR_String) "mismatched array sizes");
      return;
    }
}

void MR_CALL 
mercury__array__do_foldl2_corresponding_9_p_1(
  MR_Word TypeInfo_for_T1_29,
  MR_Word TypeInfo_for_T2_30,
  MR_Word TypeInfo_for_T3_31,
  MR_Word TypeInfo_for_T4_32,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Max_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 > Max_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
    }
    else
    {
      MR_Box ElemA_17;
      MR_Box ElemB_18;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_CurIndex_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemA_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemB_18  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      func_0(((MR_Box) (Pred_10)), ElemA_17, ElemB_18, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_24_24);
      Var_25 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_11 = Var_25;
      next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_23_23;
      next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_24_24;
      CurIndex_11 = next_value_of_CurIndex_11;
      STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
      STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl2_corresponding_7_p_0(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_8,
  MR_ArrayPtr A_9,
  MR_ArrayPtr B_10,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  MR_bool succeeded;
  MR_Integer MaxA_13;
  MR_Integer MaxB_14;

{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_9 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_13  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_corresponding_7_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_10) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_14  = Max;
}
  succeeded = (MaxA_13 == MaxB_14);
  if (succeeded)
    mercury__array__do_foldl2_corresponding_9_p_0(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_8, (MR_Integer) 0, MaxA_13, A_9, B_10, STATE_VARIABLE_Acc1_0_15, STATE_VARIABLE_Acc1_16, STATE_VARIABLE_Acc2_0_17, STATE_VARIABLE_Acc2_18);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl2_corresponding\'/7", (MR_String) "mismatched array sizes");
      return;
    }
}

void MR_CALL 
mercury__array__do_foldl2_corresponding_9_p_0(
  MR_Word TypeInfo_for_T1_29,
  MR_Word TypeInfo_for_T2_30,
  MR_Word TypeInfo_for_T3_31,
  MR_Word TypeInfo_for_T4_32,
  MR_Word Pred_10,
  MR_Integer CurIndex_11,
  MR_Integer Max_12,
  MR_ArrayPtr ArrayA_13,
  MR_ArrayPtr ArrayB_14,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_11 > Max_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_0_21;
      *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_0_19;
    }
    else
    {
      MR_Box ElemA_17;
      MR_Box ElemB_18;
      MR_Box STATE_VARIABLE_Acc1_23_23;
      MR_Box STATE_VARIABLE_Acc2_24_24;
      MR_Integer Var_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_CurIndex_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)ArrayA_13 ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemA_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl2_corresponding_9_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (ArrayB_14) ;
	Index = CurIndex_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	ElemB_18  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_10, (MR_Integer) 1))));
      func_0(((MR_Box) (Pred_10)), ElemA_17, ElemB_18, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_23_23, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_24_24);
      Var_25 = (MR_Integer) ((MR_Unsigned) CurIndex_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_11 = Var_25;
      next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_23_23;
      next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_24_24;
      CurIndex_11 = next_value_of_CurIndex_11;
      STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
      STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl_corresponding_5_p_5(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_6,
  MR_ArrayPtr A_7,
  MR_ArrayPtr B_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  MR_bool succeeded;
  MR_Integer MaxA_10;
  MR_Integer MaxB_11;

{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_7 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_10  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_8) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_11  = Max;
}
  succeeded = (MaxA_10 == MaxB_11);
  if (succeeded)
    succeeded = mercury__array__do_foldl_corresponding_7_p_5(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_6, (MR_Integer) 0, MaxA_10, A_7, B_8, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl_corresponding\'/5", (MR_String) "mismatched array sizes");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl_corresponding_7_p_5(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word P_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_ArrayPtr A_11,
  MR_ArrayPtr B_12,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_16;
      MR_Box Var_17;
      MR_Box STATE_VARIABLE_Acc_18_18;
      MR_Integer Var_19;
      MR_Integer Var_21;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_11 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_12) ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_17  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_8)), Var_16, Var_17, STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_18_18);
      if (succeeded)
      {
        Var_21 = (MR_Integer) 1;
        Var_19 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) Var_21);
        // direct tailcall eliminated
        ;
        next_value_of_I_9 = Var_19;
        next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_18_18;
        I_9 = next_value_of_I_9;
        STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl_corresponding_5_p_4(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_6,
  MR_ArrayPtr A_7,
  MR_ArrayPtr B_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  MR_bool succeeded;
  MR_Integer MaxA_10;
  MR_Integer MaxB_11;

{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_7 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_10  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_8) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_11  = Max;
}
  succeeded = (MaxA_10 == MaxB_11);
  if (succeeded)
    succeeded = mercury__array__do_foldl_corresponding_7_p_4(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_6, (MR_Integer) 0, MaxA_10, A_7, B_8, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl_corresponding\'/5", (MR_String) "mismatched array sizes");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl_corresponding_7_p_4(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word P_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_ArrayPtr A_11,
  MR_ArrayPtr B_12,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_16;
      MR_Box Var_17;
      MR_Box STATE_VARIABLE_Acc_18_18;
      MR_Integer Var_19;
      MR_Integer Var_21;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_11 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_12) ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_17  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_8)), Var_16, Var_17, STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_18_18);
      if (succeeded)
      {
        Var_21 = (MR_Integer) 1;
        Var_19 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) Var_21);
        // direct tailcall eliminated
        ;
        next_value_of_I_9 = Var_19;
        next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_18_18;
        I_9 = next_value_of_I_9;
        STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl_corresponding_5_p_3(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_6,
  MR_ArrayPtr A_7,
  MR_ArrayPtr B_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  MR_bool succeeded;
  MR_Integer MaxA_10;
  MR_Integer MaxB_11;

{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_7 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_10  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_8) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_11  = Max;
}
  succeeded = (MaxA_10 == MaxB_11);
  if (succeeded)
    succeeded = mercury__array__do_foldl_corresponding_7_p_3(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_6, (MR_Integer) 0, MaxA_10, A_7, B_8, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl_corresponding\'/5", (MR_String) "mismatched array sizes");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl_corresponding_7_p_3(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word P_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_ArrayPtr A_11,
  MR_ArrayPtr B_12,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_16;
      MR_Box Var_17;
      MR_Box STATE_VARIABLE_Acc_18_18;
      MR_Integer Var_19;
      MR_Integer Var_21;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_11 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_12) ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_17  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_8)), Var_16, Var_17, STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_18_18);
      if (succeeded)
      {
        Var_21 = (MR_Integer) 1;
        Var_19 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) Var_21);
        // direct tailcall eliminated
        ;
        next_value_of_I_9 = Var_19;
        next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_18_18;
        I_9 = next_value_of_I_9;
        STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldl_corresponding_5_p_2(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_6,
  MR_ArrayPtr A_7,
  MR_ArrayPtr B_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  MR_bool succeeded;
  MR_Integer MaxA_10;
  MR_Integer MaxB_11;

{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_7 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_10  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_8) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_11  = Max;
}
  succeeded = (MaxA_10 == MaxB_11);
  if (succeeded)
    mercury__array__do_foldl_corresponding_7_p_2(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_6, (MR_Integer) 0, MaxA_10, A_7, B_8, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl_corresponding\'/5", (MR_String) "mismatched array sizes");
      return;
    }
}

void MR_CALL 
mercury__array__do_foldl_corresponding_7_p_2(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word P_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_ArrayPtr A_11,
  MR_ArrayPtr B_12,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    else
    {
      MR_Box Var_16;
      MR_Box Var_17;
      MR_Box STATE_VARIABLE_Acc_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_11 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_12) ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_17  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1))));
      func_0(((MR_Box) (P_8)), Var_16, Var_17, STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_18_18);
      Var_19 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = Var_19;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_18_18;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl_corresponding_5_p_1(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_6,
  MR_ArrayPtr A_7,
  MR_ArrayPtr B_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  MR_bool succeeded;
  MR_Integer MaxA_10;
  MR_Integer MaxB_11;

{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_7 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_10  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_8) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_11  = Max;
}
  succeeded = (MaxA_10 == MaxB_11);
  if (succeeded)
    mercury__array__do_foldl_corresponding_7_p_1(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_6, (MR_Integer) 0, MaxA_10, A_7, B_8, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl_corresponding\'/5", (MR_String) "mismatched array sizes");
      return;
    }
}

void MR_CALL 
mercury__array__do_foldl_corresponding_7_p_1(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word P_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_ArrayPtr A_11,
  MR_ArrayPtr B_12,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    else
    {
      MR_Box Var_16;
      MR_Box Var_17;
      MR_Box STATE_VARIABLE_Acc_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_11 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_12) ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_17  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1))));
      func_0(((MR_Box) (P_8)), Var_16, Var_17, STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_18_18);
      Var_19 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = Var_19;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_18_18;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl_corresponding_5_p_0(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_6,
  MR_ArrayPtr A_7,
  MR_ArrayPtr B_8,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  MR_bool succeeded;
  MR_Integer MaxA_10;
  MR_Integer MaxB_11;

{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_7 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxA_10  = Max;
}
{
#define MR_PROC_LABEL mercury__array__foldl_corresponding_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_8) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	MaxB_11  = Max;
}
  succeeded = (MaxA_10 == MaxB_11);
  if (succeeded)
    mercury__array__do_foldl_corresponding_7_p_0(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_6, (MR_Integer) 0, MaxA_10, A_7, B_8, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.foldl_corresponding\'/5", (MR_String) "mismatched array sizes");
      return;
    }
}

void MR_CALL 
mercury__array__do_foldl_corresponding_7_p_0(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word P_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_ArrayPtr A_11,
  MR_ArrayPtr B_12,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    else
    {
      MR_Box Var_16;
      MR_Box Var_17;
      MR_Box STATE_VARIABLE_Acc_18_18;
      MR_Integer Var_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_11 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__do_foldl_corresponding_7_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (B_12) ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_17  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1))));
      func_0(((MR_Box) (P_8)), Var_16, Var_17, STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_18_18);
      Var_19 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = Var_19;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_18_18;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr5_12_p_5(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_bool succeeded;
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  succeeded = mercury__array__do_foldr5_14_p_5(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr5_14_p_5(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer Min_16,
  MR_Integer I_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_17 < Min_16);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      MR_Integer Var_46;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      if (succeeded)
      {
        Var_46 = (MR_Integer) 1;
        Var_40 = (MR_Integer) ((MR_Unsigned) I_17 - (MR_Unsigned) Var_46);
        // direct tailcall eliminated
        ;
        next_value_of_I_17 = Var_40;
        next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
        next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
        next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
        next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
        next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
        I_17 = next_value_of_I_17;
        STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
        STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
        STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
        STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
        STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr5_12_p_4(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_bool succeeded;
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  succeeded = mercury__array__do_foldr5_14_p_4(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr5_14_p_4(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer Min_16,
  MR_Integer I_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_17 < Min_16);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      MR_Integer Var_46;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      if (succeeded)
      {
        Var_46 = (MR_Integer) 1;
        Var_40 = (MR_Integer) ((MR_Unsigned) I_17 - (MR_Unsigned) Var_46);
        // direct tailcall eliminated
        ;
        next_value_of_I_17 = Var_40;
        next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
        next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
        next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
        next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
        next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
        I_17 = next_value_of_I_17;
        STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
        STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
        STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
        STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
        STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr5_12_p_3(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_bool succeeded;
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  succeeded = mercury__array__do_foldr5_14_p_3(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr5_14_p_3(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer Min_16,
  MR_Integer I_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_17 < Min_16);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      MR_Integer Var_46;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      if (succeeded)
      {
        Var_46 = (MR_Integer) 1;
        Var_40 = (MR_Integer) ((MR_Unsigned) I_17 - (MR_Unsigned) Var_46);
        // direct tailcall eliminated
        ;
        next_value_of_I_17 = Var_40;
        next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
        next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
        next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
        next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
        next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
        I_17 = next_value_of_I_17;
        STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
        STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
        STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
        STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
        STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldr5_12_p_2(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  mercury__array__do_foldr5_14_p_2(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
}

void MR_CALL 
mercury__array__do_foldr5_14_p_2(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer Min_16,
  MR_Integer I_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_17 < Min_16);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      Var_40 = (MR_Integer) ((MR_Unsigned) I_17 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_17 = Var_40;
      next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
      next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
      next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
      next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
      next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
      I_17 = next_value_of_I_17;
      STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
      STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
      STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
      STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
      STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr5_12_p_1(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  mercury__array__do_foldr5_14_p_1(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
}

void MR_CALL 
mercury__array__do_foldr5_14_p_1(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer Min_16,
  MR_Integer I_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_17 < Min_16);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      Var_40 = (MR_Integer) ((MR_Unsigned) I_17 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_17 = Var_40;
      next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
      next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
      next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
      next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
      next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
      I_17 = next_value_of_I_17;
      STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
      STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
      STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
      STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
      STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr5_12_p_0(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  mercury__array__do_foldr5_14_p_0(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
}

void MR_CALL 
mercury__array__do_foldr5_14_p_0(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer Min_16,
  MR_Integer I_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_17 < Min_16);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      Var_40 = (MR_Integer) ((MR_Unsigned) I_17 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_17 = Var_40;
      next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
      next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
      next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
      next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
      next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
      I_17 = next_value_of_I_17;
      STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
      STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
      STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
      STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
      STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr4_10_p_5(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_bool succeeded;
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  succeeded = mercury__array__do_foldr4_12_p_5(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr4_12_p_5(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer Min_14,
  MR_Integer I_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_15 < Min_14);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      MR_Integer Var_39;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      if (succeeded)
      {
        Var_39 = (MR_Integer) 1;
        Var_34 = (MR_Integer) ((MR_Unsigned) I_15 - (MR_Unsigned) Var_39);
        // direct tailcall eliminated
        ;
        next_value_of_I_15 = Var_34;
        next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
        next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
        next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
        next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
        I_15 = next_value_of_I_15;
        STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
        STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
        STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
        STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr4_10_p_4(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_bool succeeded;
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  succeeded = mercury__array__do_foldr4_12_p_4(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr4_12_p_4(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer Min_14,
  MR_Integer I_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_15 < Min_14);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      MR_Integer Var_39;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      if (succeeded)
      {
        Var_39 = (MR_Integer) 1;
        Var_34 = (MR_Integer) ((MR_Unsigned) I_15 - (MR_Unsigned) Var_39);
        // direct tailcall eliminated
        ;
        next_value_of_I_15 = Var_34;
        next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
        next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
        next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
        next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
        I_15 = next_value_of_I_15;
        STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
        STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
        STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
        STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr4_10_p_3(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_bool succeeded;
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  succeeded = mercury__array__do_foldr4_12_p_3(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr4_12_p_3(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer Min_14,
  MR_Integer I_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_15 < Min_14);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      MR_Integer Var_39;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      if (succeeded)
      {
        Var_39 = (MR_Integer) 1;
        Var_34 = (MR_Integer) ((MR_Unsigned) I_15 - (MR_Unsigned) Var_39);
        // direct tailcall eliminated
        ;
        next_value_of_I_15 = Var_34;
        next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
        next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
        next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
        next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
        I_15 = next_value_of_I_15;
        STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
        STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
        STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
        STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldr4_10_p_2(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  mercury__array__do_foldr4_12_p_2(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
}

void MR_CALL 
mercury__array__do_foldr4_12_p_2(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer Min_14,
  MR_Integer I_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_15 < Min_14);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      Var_34 = (MR_Integer) ((MR_Unsigned) I_15 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_15 = Var_34;
      next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
      next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
      next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
      next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
      I_15 = next_value_of_I_15;
      STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
      STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
      STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
      STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr4_10_p_1(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  mercury__array__do_foldr4_12_p_1(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
}

void MR_CALL 
mercury__array__do_foldr4_12_p_1(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer Min_14,
  MR_Integer I_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_15 < Min_14);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      Var_34 = (MR_Integer) ((MR_Unsigned) I_15 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_15 = Var_34;
      next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
      next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
      next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
      next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
      I_15 = next_value_of_I_15;
      STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
      STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
      STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
      STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr4_10_p_0(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  mercury__array__do_foldr4_12_p_0(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
}

void MR_CALL 
mercury__array__do_foldr4_12_p_0(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer Min_14,
  MR_Integer I_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_15 < Min_14);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      Var_34 = (MR_Integer) ((MR_Unsigned) I_15 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_15 = Var_34;
      next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
      next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
      next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
      next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
      I_15 = next_value_of_I_15;
      STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
      STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
      STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
      STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr3_8_p_5(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_bool succeeded;
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  succeeded = mercury__array__do_foldr3_10_p_5(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr3_10_p_5(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer Min_12,
  MR_Integer I_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_13 < Min_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      MR_Integer Var_32;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      if (succeeded)
      {
        Var_32 = (MR_Integer) 1;
        Var_28 = (MR_Integer) ((MR_Unsigned) I_13 - (MR_Unsigned) Var_32);
        // direct tailcall eliminated
        ;
        next_value_of_I_13 = Var_28;
        next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
        next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
        next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
        I_13 = next_value_of_I_13;
        STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
        STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
        STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr3_8_p_4(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_bool succeeded;
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  succeeded = mercury__array__do_foldr3_10_p_4(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr3_10_p_4(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer Min_12,
  MR_Integer I_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_13 < Min_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      MR_Integer Var_32;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      if (succeeded)
      {
        Var_32 = (MR_Integer) 1;
        Var_28 = (MR_Integer) ((MR_Unsigned) I_13 - (MR_Unsigned) Var_32);
        // direct tailcall eliminated
        ;
        next_value_of_I_13 = Var_28;
        next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
        next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
        next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
        I_13 = next_value_of_I_13;
        STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
        STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
        STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr3_8_p_3(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_bool succeeded;
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  succeeded = mercury__array__do_foldr3_10_p_3(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr3_10_p_3(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer Min_12,
  MR_Integer I_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_13 < Min_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      MR_Integer Var_32;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      if (succeeded)
      {
        Var_32 = (MR_Integer) 1;
        Var_28 = (MR_Integer) ((MR_Unsigned) I_13 - (MR_Unsigned) Var_32);
        // direct tailcall eliminated
        ;
        next_value_of_I_13 = Var_28;
        next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
        next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
        next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
        I_13 = next_value_of_I_13;
        STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
        STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
        STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldr3_8_p_2(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  mercury__array__do_foldr3_10_p_2(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
}

void MR_CALL 
mercury__array__do_foldr3_10_p_2(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer Min_12,
  MR_Integer I_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_13 < Min_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      Var_28 = (MR_Integer) ((MR_Unsigned) I_13 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_13 = Var_28;
      next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
      next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
      next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
      I_13 = next_value_of_I_13;
      STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
      STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
      STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr3_8_p_1(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  mercury__array__do_foldr3_10_p_1(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
}

void MR_CALL 
mercury__array__do_foldr3_10_p_1(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer Min_12,
  MR_Integer I_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_13 < Min_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      Var_28 = (MR_Integer) ((MR_Unsigned) I_13 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_13 = Var_28;
      next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
      next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
      next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
      I_13 = next_value_of_I_13;
      STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
      STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
      STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr3_8_p_0(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  mercury__array__do_foldr3_10_p_0(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
}

void MR_CALL 
mercury__array__do_foldr3_10_p_0(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer Min_12,
  MR_Integer I_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_13 < Min_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_13;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      Var_28 = (MR_Integer) ((MR_Unsigned) I_13 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_13 = Var_28;
      next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
      next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
      next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
      I_13 = next_value_of_I_13;
      STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
      STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
      STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr2_6_p_5(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  succeeded = mercury__array__do_foldr2_8_p_5(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr2_8_p_5(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer Min_10,
  MR_Integer I_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < Min_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      MR_Integer Var_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      if (succeeded)
      {
        Var_25 = (MR_Integer) 1;
        Var_22 = (MR_Integer) ((MR_Unsigned) I_11 - (MR_Unsigned) Var_25);
        // direct tailcall eliminated
        ;
        next_value_of_I_11 = Var_22;
        next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
        next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
        I_11 = next_value_of_I_11;
        STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
        STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr2_6_p_4(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  succeeded = mercury__array__do_foldr2_8_p_4(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr2_8_p_4(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer Min_10,
  MR_Integer I_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < Min_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      MR_Integer Var_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      if (succeeded)
      {
        Var_25 = (MR_Integer) 1;
        Var_22 = (MR_Integer) ((MR_Unsigned) I_11 - (MR_Unsigned) Var_25);
        // direct tailcall eliminated
        ;
        next_value_of_I_11 = Var_22;
        next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
        next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
        I_11 = next_value_of_I_11;
        STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
        STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr2_6_p_3(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  succeeded = mercury__array__do_foldr2_8_p_3(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr2_8_p_3(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer Min_10,
  MR_Integer I_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < Min_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      MR_Integer Var_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      if (succeeded)
      {
        Var_25 = (MR_Integer) 1;
        Var_22 = (MR_Integer) ((MR_Unsigned) I_11 - (MR_Unsigned) Var_25);
        // direct tailcall eliminated
        ;
        next_value_of_I_11 = Var_22;
        next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
        next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
        I_11 = next_value_of_I_11;
        STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
        STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldr2_6_p_2(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  mercury__array__do_foldr2_8_p_2(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__array__do_foldr2_8_p_2(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer Min_10,
  MR_Integer I_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < Min_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) I_11 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_11 = Var_22;
      next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
      next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
      I_11 = next_value_of_I_11;
      STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
      STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr2_6_p_1(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  mercury__array__do_foldr2_8_p_1(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__array__do_foldr2_8_p_1(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer Min_10,
  MR_Integer I_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < Min_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) I_11 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_11 = Var_22;
      next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
      next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
      I_11 = next_value_of_I_11;
      STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
      STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr2_6_p_0(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  mercury__array__do_foldr2_8_p_0(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__array__do_foldr2_8_p_0(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer Min_10,
  MR_Integer I_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < Min_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) I_11 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_11 = Var_22;
      next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
      next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
      I_11 = next_value_of_I_11;
      STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
      STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr_4_p_5(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  succeeded = mercury__array__do_foldr_pred_6_p_5(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, Var_11, A_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr_pred_6_p_5(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Integer Min_8,
  MR_Integer I_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < Min_8);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_10 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 1;
        Var_16 = (MR_Integer) ((MR_Unsigned) I_9 - (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_I_9 = Var_16;
        next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
        I_9 = next_value_of_I_9;
        STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr_4_p_4(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  succeeded = mercury__array__do_foldr_pred_6_p_4(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, Var_11, A_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr_pred_6_p_4(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Integer Min_8,
  MR_Integer I_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < Min_8);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_10 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 1;
        Var_16 = (MR_Integer) ((MR_Unsigned) I_9 - (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_I_9 = Var_16;
        next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
        I_9 = next_value_of_I_9;
        STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr_4_p_3(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  succeeded = mercury__array__do_foldr_pred_6_p_3(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, Var_11, A_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldr_pred_6_p_3(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Integer Min_8,
  MR_Integer I_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < Min_8);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_10 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 1;
        Var_16 = (MR_Integer) ((MR_Unsigned) I_9 - (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_I_9 = Var_16;
        next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
        I_9 = next_value_of_I_9;
        STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldr_4_p_2(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  mercury__array__do_foldr_pred_6_p_2(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, Var_11, A_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__array__do_foldr_pred_6_p_2(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Integer Min_8,
  MR_Integer I_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < Min_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_10 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) I_9 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr_4_p_1(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  mercury__array__do_foldr_pred_6_p_1(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, Var_11, A_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__array__do_foldr_pred_6_p_1(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Integer Min_8,
  MR_Integer I_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < Min_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_10 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) I_9 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr_4_p_0(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  mercury__array__do_foldr_pred_6_p_0(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, Var_11, A_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__array__do_foldr_pred_6_p_0(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_Integer Min_8,
  MR_Integer I_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < Min_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_10 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) I_9 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__array__foldr_3_f_1(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word Fn_5,
  MR_ArrayPtr A_6,
  MR_Box X_7)
{
  MR_Box HeadVar__4_4;
  MR_Integer Var_8;
  MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__array__foldr_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_8  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_9  = Max;
}
  HeadVar__4_4 = mercury__array__do_foldr_func_5_f_1(TypeInfo_for_T1_10, TypeInfo_for_T2_11, Fn_5, A_6, X_7, Var_8, Var_9);
  return HeadVar__4_4;
}

MR_Box MR_CALL 
mercury__array__do_foldr_func_5_f_1(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word Fn_7,
  MR_ArrayPtr A_8,
  MR_Box X_9,
  MR_Integer Min_10,
  MR_Integer I_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < Min_10);
    MR_Box HeadVar__6_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__6_6 = X_9;
    else
    {
      MR_Box Var_12;
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Box next_value_of_X_9;
      MR_Integer next_value_of_I_11;

{
#define MR_PROC_LABEL mercury__array__do_foldr_func_5_f_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Item;
}
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Fn_7, (MR_Integer) 1))));
      Var_12 = func_0(((MR_Box) (Fn_7)), Var_13, X_9);
      Var_14 = (MR_Integer) ((MR_Unsigned) I_11 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_X_9 = Var_12;
      next_value_of_I_11 = Var_14;
      X_9 = next_value_of_X_9;
      I_11 = next_value_of_I_11;
      continue;
    }
    return HeadVar__6_6;
    break;
  }
}

MR_Box MR_CALL 
mercury__array__foldr_3_f_0(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word Fn_5,
  MR_ArrayPtr A_6,
  MR_Box X_7)
{
  MR_Box HeadVar__4_4;
  MR_Integer Var_8;
  MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__array__foldr_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_8  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_9  = Max;
}
  HeadVar__4_4 = mercury__array__do_foldr_func_5_f_0(TypeInfo_for_T1_10, TypeInfo_for_T2_11, Fn_5, A_6, X_7, Var_8, Var_9);
  return HeadVar__4_4;
}

MR_Box MR_CALL 
mercury__array__do_foldr_func_5_f_0(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word Fn_7,
  MR_ArrayPtr A_8,
  MR_Box X_9,
  MR_Integer Min_10,
  MR_Integer I_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < Min_10);
    MR_Box HeadVar__6_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__6_6 = X_9;
    else
    {
      MR_Box Var_12;
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Box next_value_of_X_9;
      MR_Integer next_value_of_I_11;

{
#define MR_PROC_LABEL mercury__array__do_foldr_func_5_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Item;
}
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Fn_7, (MR_Integer) 1))));
      Var_12 = func_0(((MR_Box) (Fn_7)), Var_13, X_9);
      Var_14 = (MR_Integer) ((MR_Unsigned) I_11 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_X_9 = Var_12;
      next_value_of_I_11 = Var_14;
      X_9 = next_value_of_X_9;
      I_11 = next_value_of_I_11;
      continue;
    }
    return HeadVar__6_6;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl5_12_p_5(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_bool succeeded;
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  succeeded = mercury__array__do_foldl5_14_p_5(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl5_14_p_5(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer I_16,
  MR_Integer Max_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_17 < I_16);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      MR_Integer Var_46;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      if (succeeded)
      {
        Var_46 = (MR_Integer) 1;
        Var_40 = (MR_Integer) ((MR_Unsigned) I_16 + (MR_Unsigned) Var_46);
        // direct tailcall eliminated
        ;
        next_value_of_I_16 = Var_40;
        next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
        next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
        next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
        next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
        next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
        I_16 = next_value_of_I_16;
        STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
        STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
        STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
        STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
        STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl5_12_p_4(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_bool succeeded;
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  succeeded = mercury__array__do_foldl5_14_p_4(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl5_14_p_4(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer I_16,
  MR_Integer Max_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_17 < I_16);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      MR_Integer Var_46;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      if (succeeded)
      {
        Var_46 = (MR_Integer) 1;
        Var_40 = (MR_Integer) ((MR_Unsigned) I_16 + (MR_Unsigned) Var_46);
        // direct tailcall eliminated
        ;
        next_value_of_I_16 = Var_40;
        next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
        next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
        next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
        next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
        next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
        I_16 = next_value_of_I_16;
        STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
        STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
        STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
        STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
        STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl5_12_p_3(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_bool succeeded;
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  succeeded = mercury__array__do_foldl5_14_p_3(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl5_14_p_3(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer I_16,
  MR_Integer Max_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_17 < I_16);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      MR_Integer Var_46;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      if (succeeded)
      {
        Var_46 = (MR_Integer) 1;
        Var_40 = (MR_Integer) ((MR_Unsigned) I_16 + (MR_Unsigned) Var_46);
        // direct tailcall eliminated
        ;
        next_value_of_I_16 = Var_40;
        next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
        next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
        next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
        next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
        next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
        I_16 = next_value_of_I_16;
        STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
        STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
        STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
        STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
        STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldl5_12_p_2(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  mercury__array__do_foldl5_14_p_2(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
}

void MR_CALL 
mercury__array__do_foldl5_14_p_2(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer I_16,
  MR_Integer Max_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_17 < I_16);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      Var_40 = (MR_Integer) ((MR_Unsigned) I_16 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_16 = Var_40;
      next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
      next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
      next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
      next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
      next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
      I_16 = next_value_of_I_16;
      STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
      STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
      STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
      STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
      STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl5_12_p_1(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  mercury__array__do_foldl5_14_p_1(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
}

void MR_CALL 
mercury__array__do_foldl5_14_p_1(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer I_16,
  MR_Integer Max_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_17 < I_16);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      Var_40 = (MR_Integer) ((MR_Unsigned) I_16 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_16 = Var_40;
      next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
      next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
      next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
      next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
      next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
      I_16 = next_value_of_I_16;
      STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
      STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
      STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
      STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
      STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl5_12_p_0(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_T3_34,
  MR_Word TypeInfo_for_T4_35,
  MR_Word TypeInfo_for_T5_36,
  MR_Word TypeInfo_for_T6_37,
  MR_Word P_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_20,
  MR_Box * STATE_VARIABLE_Acc1_21,
  MR_Box STATE_VARIABLE_Acc2_0_22,
  MR_Box * STATE_VARIABLE_Acc2_23,
  MR_Box STATE_VARIABLE_Acc3_0_24,
  MR_Box * STATE_VARIABLE_Acc3_25,
  MR_Box STATE_VARIABLE_Acc4_0_26,
  MR_Box * STATE_VARIABLE_Acc4_27,
  MR_Box STATE_VARIABLE_Acc5_0_28,
  MR_Box * STATE_VARIABLE_Acc5_29)
{
  MR_Integer Var_30;
  MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_14 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_14 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_31  = Max;
}
  mercury__array__do_foldl5_14_p_0(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_T3_34, TypeInfo_for_T4_35, TypeInfo_for_T5_36, TypeInfo_for_T6_37, P_13, Var_30, Var_31, A_14, STATE_VARIABLE_Acc1_0_20, STATE_VARIABLE_Acc1_21, STATE_VARIABLE_Acc2_0_22, STATE_VARIABLE_Acc2_23, STATE_VARIABLE_Acc3_0_24, STATE_VARIABLE_Acc3_25, STATE_VARIABLE_Acc4_0_26, STATE_VARIABLE_Acc4_27, STATE_VARIABLE_Acc5_0_28, STATE_VARIABLE_Acc5_29);
}

void MR_CALL 
mercury__array__do_foldl5_14_p_0(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_T3_49,
  MR_Word TypeInfo_for_T4_50,
  MR_Word TypeInfo_for_T5_51,
  MR_Word TypeInfo_for_T6_52,
  MR_Word P_15,
  MR_Integer I_16,
  MR_Integer Max_17,
  MR_ArrayPtr A_18,
  MR_Box STATE_VARIABLE_Acc1_0_24,
  MR_Box * STATE_VARIABLE_Acc1_25,
  MR_Box STATE_VARIABLE_Acc2_0_26,
  MR_Box * STATE_VARIABLE_Acc2_27,
  MR_Box STATE_VARIABLE_Acc3_0_28,
  MR_Box * STATE_VARIABLE_Acc3_29,
  MR_Box STATE_VARIABLE_Acc4_0_30,
  MR_Box * STATE_VARIABLE_Acc4_31,
  MR_Box STATE_VARIABLE_Acc5_0_32,
  MR_Box * STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_17 < I_16);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc5_33 = STATE_VARIABLE_Acc5_0_32;
      *STATE_VARIABLE_Acc4_31 = STATE_VARIABLE_Acc4_0_30;
      *STATE_VARIABLE_Acc3_29 = STATE_VARIABLE_Acc3_0_28;
      *STATE_VARIABLE_Acc2_27 = STATE_VARIABLE_Acc2_0_26;
      *STATE_VARIABLE_Acc1_25 = STATE_VARIABLE_Acc1_0_24;
    }
    else
    {
      MR_Box Var_34;
      MR_Box STATE_VARIABLE_Acc1_35_35;
      MR_Box STATE_VARIABLE_Acc2_36_36;
      MR_Box STATE_VARIABLE_Acc3_37_37;
      MR_Box STATE_VARIABLE_Acc4_38_38;
      MR_Box STATE_VARIABLE_Acc5_39_39;
      MR_Integer Var_40;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_16;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_28;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_30;
      MR_Box next_value_of_STATE_VARIABLE_Acc5_0_32;

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_18 ;
	Index = I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_34  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_15, (MR_Integer) 1))));
      func_0(((MR_Box) (P_15)), Var_34, STATE_VARIABLE_Acc1_0_24, &STATE_VARIABLE_Acc1_35_35, STATE_VARIABLE_Acc2_0_26, &STATE_VARIABLE_Acc2_36_36, STATE_VARIABLE_Acc3_0_28, &STATE_VARIABLE_Acc3_37_37, STATE_VARIABLE_Acc4_0_30, &STATE_VARIABLE_Acc4_38_38, STATE_VARIABLE_Acc5_0_32, &STATE_VARIABLE_Acc5_39_39);
      Var_40 = (MR_Integer) ((MR_Unsigned) I_16 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_16 = Var_40;
      next_value_of_STATE_VARIABLE_Acc1_0_24 = STATE_VARIABLE_Acc1_35_35;
      next_value_of_STATE_VARIABLE_Acc2_0_26 = STATE_VARIABLE_Acc2_36_36;
      next_value_of_STATE_VARIABLE_Acc3_0_28 = STATE_VARIABLE_Acc3_37_37;
      next_value_of_STATE_VARIABLE_Acc4_0_30 = STATE_VARIABLE_Acc4_38_38;
      next_value_of_STATE_VARIABLE_Acc5_0_32 = STATE_VARIABLE_Acc5_39_39;
      I_16 = next_value_of_I_16;
      STATE_VARIABLE_Acc1_0_24 = next_value_of_STATE_VARIABLE_Acc1_0_24;
      STATE_VARIABLE_Acc2_0_26 = next_value_of_STATE_VARIABLE_Acc2_0_26;
      STATE_VARIABLE_Acc3_0_28 = next_value_of_STATE_VARIABLE_Acc3_0_28;
      STATE_VARIABLE_Acc4_0_30 = next_value_of_STATE_VARIABLE_Acc4_0_30;
      STATE_VARIABLE_Acc5_0_32 = next_value_of_STATE_VARIABLE_Acc5_0_32;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl4_10_p_5(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_bool succeeded;
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  succeeded = mercury__array__do_foldl4_12_p_5(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl4_12_p_5(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer I_14,
  MR_Integer Max_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_15 < I_14);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      MR_Integer Var_39;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      if (succeeded)
      {
        Var_39 = (MR_Integer) 1;
        Var_34 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) Var_39);
        // direct tailcall eliminated
        ;
        next_value_of_I_14 = Var_34;
        next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
        next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
        next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
        next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
        I_14 = next_value_of_I_14;
        STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
        STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
        STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
        STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl4_10_p_4(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_bool succeeded;
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  succeeded = mercury__array__do_foldl4_12_p_4(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl4_12_p_4(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer I_14,
  MR_Integer Max_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_15 < I_14);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      MR_Integer Var_39;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      if (succeeded)
      {
        Var_39 = (MR_Integer) 1;
        Var_34 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) Var_39);
        // direct tailcall eliminated
        ;
        next_value_of_I_14 = Var_34;
        next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
        next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
        next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
        next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
        I_14 = next_value_of_I_14;
        STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
        STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
        STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
        STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl4_10_p_3(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_bool succeeded;
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  succeeded = mercury__array__do_foldl4_12_p_3(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl4_12_p_3(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer I_14,
  MR_Integer Max_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_15 < I_14);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      MR_Integer Var_39;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      if (succeeded)
      {
        Var_39 = (MR_Integer) 1;
        Var_34 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) Var_39);
        // direct tailcall eliminated
        ;
        next_value_of_I_14 = Var_34;
        next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
        next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
        next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
        next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
        I_14 = next_value_of_I_14;
        STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
        STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
        STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
        STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldl4_10_p_2(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  mercury__array__do_foldl4_12_p_2(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
}

void MR_CALL 
mercury__array__do_foldl4_12_p_2(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer I_14,
  MR_Integer Max_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_15 < I_14);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      Var_34 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_14 = Var_34;
      next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
      next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
      next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
      next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
      I_14 = next_value_of_I_14;
      STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
      STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
      STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
      STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl4_10_p_1(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  mercury__array__do_foldl4_12_p_1(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
}

void MR_CALL 
mercury__array__do_foldl4_12_p_1(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer I_14,
  MR_Integer Max_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_15 < I_14);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      Var_34 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_14 = Var_34;
      next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
      next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
      next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
      next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
      I_14 = next_value_of_I_14;
      STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
      STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
      STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
      STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl4_10_p_0(
  MR_Word TypeInfo_for_T1_27,
  MR_Word TypeInfo_for_T2_28,
  MR_Word TypeInfo_for_T3_29,
  MR_Word TypeInfo_for_T4_30,
  MR_Word TypeInfo_for_T5_31,
  MR_Word P_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22,
  MR_Box STATE_VARIABLE_Acc4_0_23,
  MR_Box * STATE_VARIABLE_Acc4_24)
{
  MR_Integer Var_25;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_12 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_12 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_26  = Max;
}
  mercury__array__do_foldl4_12_p_0(TypeInfo_for_T1_27, TypeInfo_for_T2_28, TypeInfo_for_T3_29, TypeInfo_for_T4_30, TypeInfo_for_T5_31, P_11, Var_25, Var_26, A_12, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, STATE_VARIABLE_Acc3_0_21, STATE_VARIABLE_Acc3_22, STATE_VARIABLE_Acc4_0_23, STATE_VARIABLE_Acc4_24);
}

void MR_CALL 
mercury__array__do_foldl4_12_p_0(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word P_13,
  MR_Integer I_14,
  MR_Integer Max_15,
  MR_ArrayPtr A_16,
  MR_Box STATE_VARIABLE_Acc1_0_21,
  MR_Box * STATE_VARIABLE_Acc1_22,
  MR_Box STATE_VARIABLE_Acc2_0_23,
  MR_Box * STATE_VARIABLE_Acc2_24,
  MR_Box STATE_VARIABLE_Acc3_0_25,
  MR_Box * STATE_VARIABLE_Acc3_26,
  MR_Box STATE_VARIABLE_Acc4_0_27,
  MR_Box * STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_15 < I_14);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc4_28 = STATE_VARIABLE_Acc4_0_27;
      *STATE_VARIABLE_Acc3_26 = STATE_VARIABLE_Acc3_0_25;
      *STATE_VARIABLE_Acc2_24 = STATE_VARIABLE_Acc2_0_23;
      *STATE_VARIABLE_Acc1_22 = STATE_VARIABLE_Acc1_0_21;
    }
    else
    {
      MR_Box Var_29;
      MR_Box STATE_VARIABLE_Acc1_30_30;
      MR_Box STATE_VARIABLE_Acc2_31_31;
      MR_Box STATE_VARIABLE_Acc3_32_32;
      MR_Box STATE_VARIABLE_Acc4_33_33;
      MR_Integer Var_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_21;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_25;
      MR_Box next_value_of_STATE_VARIABLE_Acc4_0_27;

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_16 ;
	Index = I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_29  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_13, (MR_Integer) 1))));
      func_0(((MR_Box) (P_13)), Var_29, STATE_VARIABLE_Acc1_0_21, &STATE_VARIABLE_Acc1_30_30, STATE_VARIABLE_Acc2_0_23, &STATE_VARIABLE_Acc2_31_31, STATE_VARIABLE_Acc3_0_25, &STATE_VARIABLE_Acc3_32_32, STATE_VARIABLE_Acc4_0_27, &STATE_VARIABLE_Acc4_33_33);
      Var_34 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_14 = Var_34;
      next_value_of_STATE_VARIABLE_Acc1_0_21 = STATE_VARIABLE_Acc1_30_30;
      next_value_of_STATE_VARIABLE_Acc2_0_23 = STATE_VARIABLE_Acc2_31_31;
      next_value_of_STATE_VARIABLE_Acc3_0_25 = STATE_VARIABLE_Acc3_32_32;
      next_value_of_STATE_VARIABLE_Acc4_0_27 = STATE_VARIABLE_Acc4_33_33;
      I_14 = next_value_of_I_14;
      STATE_VARIABLE_Acc1_0_21 = next_value_of_STATE_VARIABLE_Acc1_0_21;
      STATE_VARIABLE_Acc2_0_23 = next_value_of_STATE_VARIABLE_Acc2_0_23;
      STATE_VARIABLE_Acc3_0_25 = next_value_of_STATE_VARIABLE_Acc3_0_25;
      STATE_VARIABLE_Acc4_0_27 = next_value_of_STATE_VARIABLE_Acc4_0_27;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl3_8_p_5(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_bool succeeded;
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  succeeded = mercury__array__do_foldl3_10_p_5(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl3_10_p_5(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer I_12,
  MR_Integer Max_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_13 < I_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      MR_Integer Var_32;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_12;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      if (succeeded)
      {
        Var_32 = (MR_Integer) 1;
        Var_28 = (MR_Integer) ((MR_Unsigned) I_12 + (MR_Unsigned) Var_32);
        // direct tailcall eliminated
        ;
        next_value_of_I_12 = Var_28;
        next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
        next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
        next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
        I_12 = next_value_of_I_12;
        STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
        STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
        STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl3_8_p_4(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_bool succeeded;
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  succeeded = mercury__array__do_foldl3_10_p_4(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl3_10_p_4(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer I_12,
  MR_Integer Max_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_13 < I_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      MR_Integer Var_32;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_12;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      if (succeeded)
      {
        Var_32 = (MR_Integer) 1;
        Var_28 = (MR_Integer) ((MR_Unsigned) I_12 + (MR_Unsigned) Var_32);
        // direct tailcall eliminated
        ;
        next_value_of_I_12 = Var_28;
        next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
        next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
        next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
        I_12 = next_value_of_I_12;
        STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
        STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
        STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl3_8_p_3(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_bool succeeded;
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  succeeded = mercury__array__do_foldl3_10_p_3(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl3_10_p_3(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer I_12,
  MR_Integer Max_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_13 < I_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      MR_Integer Var_32;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_12;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      if (succeeded)
      {
        Var_32 = (MR_Integer) 1;
        Var_28 = (MR_Integer) ((MR_Unsigned) I_12 + (MR_Unsigned) Var_32);
        // direct tailcall eliminated
        ;
        next_value_of_I_12 = Var_28;
        next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
        next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
        next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
        I_12 = next_value_of_I_12;
        STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
        STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
        STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldl3_8_p_2(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  mercury__array__do_foldl3_10_p_2(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
}

void MR_CALL 
mercury__array__do_foldl3_10_p_2(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer I_12,
  MR_Integer Max_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_13 < I_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_12;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      Var_28 = (MR_Integer) ((MR_Unsigned) I_12 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_12 = Var_28;
      next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
      next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
      next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
      I_12 = next_value_of_I_12;
      STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
      STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
      STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl3_8_p_1(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  mercury__array__do_foldl3_10_p_1(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
}

void MR_CALL 
mercury__array__do_foldl3_10_p_1(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer I_12,
  MR_Integer Max_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_13 < I_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_12;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      Var_28 = (MR_Integer) ((MR_Unsigned) I_12 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_12 = Var_28;
      next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
      next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
      next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
      I_12 = next_value_of_I_12;
      STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
      STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
      STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl3_8_p_0(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T3_24,
  MR_Word TypeInfo_for_T4_25,
  MR_Word P_9,
  MR_ArrayPtr A_10,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17,
  MR_Box STATE_VARIABLE_Acc3_0_18,
  MR_Box * STATE_VARIABLE_Acc3_19)
{
  MR_Integer Var_20;
  MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_21  = Max;
}
  mercury__array__do_foldl3_10_p_0(TypeInfo_for_T1_22, TypeInfo_for_T2_23, TypeInfo_for_T3_24, TypeInfo_for_T4_25, P_9, Var_20, Var_21, A_10, STATE_VARIABLE_Acc1_0_14, STATE_VARIABLE_Acc1_15, STATE_VARIABLE_Acc2_0_16, STATE_VARIABLE_Acc2_17, STATE_VARIABLE_Acc3_0_18, STATE_VARIABLE_Acc3_19);
}

void MR_CALL 
mercury__array__do_foldl3_10_p_0(
  MR_Word TypeInfo_for_T1_33,
  MR_Word TypeInfo_for_T2_34,
  MR_Word TypeInfo_for_T3_35,
  MR_Word TypeInfo_for_T4_36,
  MR_Word P_11,
  MR_Integer I_12,
  MR_Integer Max_13,
  MR_ArrayPtr A_14,
  MR_Box STATE_VARIABLE_Acc1_0_18,
  MR_Box * STATE_VARIABLE_Acc1_19,
  MR_Box STATE_VARIABLE_Acc2_0_20,
  MR_Box * STATE_VARIABLE_Acc2_21,
  MR_Box STATE_VARIABLE_Acc3_0_22,
  MR_Box * STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_13 < I_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc3_23 = STATE_VARIABLE_Acc3_0_22;
      *STATE_VARIABLE_Acc2_21 = STATE_VARIABLE_Acc2_0_20;
      *STATE_VARIABLE_Acc1_19 = STATE_VARIABLE_Acc1_0_18;
    }
    else
    {
      MR_Box Var_24;
      MR_Box STATE_VARIABLE_Acc1_25_25;
      MR_Box STATE_VARIABLE_Acc2_26_26;
      MR_Box STATE_VARIABLE_Acc3_27_27;
      MR_Integer Var_28;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_12;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_18;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_20;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_22;

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_14 ;
	Index = I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_24  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_11, (MR_Integer) 1))));
      func_0(((MR_Box) (P_11)), Var_24, STATE_VARIABLE_Acc1_0_18, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_20, &STATE_VARIABLE_Acc2_26_26, STATE_VARIABLE_Acc3_0_22, &STATE_VARIABLE_Acc3_27_27);
      Var_28 = (MR_Integer) ((MR_Unsigned) I_12 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_12 = Var_28;
      next_value_of_STATE_VARIABLE_Acc1_0_18 = STATE_VARIABLE_Acc1_25_25;
      next_value_of_STATE_VARIABLE_Acc2_0_20 = STATE_VARIABLE_Acc2_26_26;
      next_value_of_STATE_VARIABLE_Acc3_0_22 = STATE_VARIABLE_Acc3_27_27;
      I_12 = next_value_of_I_12;
      STATE_VARIABLE_Acc1_0_18 = next_value_of_STATE_VARIABLE_Acc1_0_18;
      STATE_VARIABLE_Acc2_0_20 = next_value_of_STATE_VARIABLE_Acc2_0_20;
      STATE_VARIABLE_Acc3_0_22 = next_value_of_STATE_VARIABLE_Acc3_0_22;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl2_6_p_5(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  succeeded = mercury__array__do_foldl2_8_p_5(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl2_8_p_5(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer I_10,
  MR_Integer Max_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_11 < I_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      MR_Integer Var_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      if (succeeded)
      {
        Var_25 = (MR_Integer) 1;
        Var_22 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) Var_25);
        // direct tailcall eliminated
        ;
        next_value_of_I_10 = Var_22;
        next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
        next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
        I_10 = next_value_of_I_10;
        STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
        STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl2_6_p_4(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  succeeded = mercury__array__do_foldl2_8_p_4(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl2_8_p_4(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer I_10,
  MR_Integer Max_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_11 < I_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      MR_Integer Var_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      if (succeeded)
      {
        Var_25 = (MR_Integer) 1;
        Var_22 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) Var_25);
        // direct tailcall eliminated
        ;
        next_value_of_I_10 = Var_22;
        next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
        next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
        I_10 = next_value_of_I_10;
        STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
        STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl2_6_p_3(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_bool succeeded;
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  succeeded = mercury__array__do_foldl2_8_p_3(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl2_8_p_3(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer I_10,
  MR_Integer Max_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_11 < I_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      MR_Integer Var_25;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      if (succeeded)
      {
        Var_25 = (MR_Integer) 1;
        Var_22 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) Var_25);
        // direct tailcall eliminated
        ;
        next_value_of_I_10 = Var_22;
        next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
        next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
        I_10 = next_value_of_I_10;
        STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
        STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldl2_6_p_2(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  mercury__array__do_foldl2_8_p_2(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__array__do_foldl2_8_p_2(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer I_10,
  MR_Integer Max_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_11 < I_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = Var_22;
      next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
      next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
      STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl2_6_p_1(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  mercury__array__do_foldl2_8_p_1(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__array__do_foldl2_8_p_1(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer I_10,
  MR_Integer Max_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_11 < I_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = Var_22;
      next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
      next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
      STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl2_6_p_0(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  MR_Integer Var_15;
  MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_16  = Max;
}
  mercury__array__do_foldl2_8_p_0(TypeInfo_for_T1_17, TypeInfo_for_T2_18, TypeInfo_for_T3_19, P_7, Var_15, Var_16, A_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
mercury__array__do_foldl2_8_p_0(
  MR_Word TypeInfo_for_T1_26,
  MR_Word TypeInfo_for_T2_27,
  MR_Word TypeInfo_for_T3_28,
  MR_Word P_9,
  MR_Integer I_10,
  MR_Integer Max_11,
  MR_ArrayPtr A_12,
  MR_Box STATE_VARIABLE_Acc1_0_15,
  MR_Box * STATE_VARIABLE_Acc1_16,
  MR_Box STATE_VARIABLE_Acc2_0_17,
  MR_Box * STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_11 < I_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc2_18 = STATE_VARIABLE_Acc2_0_17;
      *STATE_VARIABLE_Acc1_16 = STATE_VARIABLE_Acc1_0_15;
    }
    else
    {
      MR_Box Var_19;
      MR_Box STATE_VARIABLE_Acc1_20_20;
      MR_Box STATE_VARIABLE_Acc2_21_21;
      MR_Integer Var_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_15;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_17;

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_12 ;
	Index = I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_19  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
      func_0(((MR_Box) (P_9)), Var_19, STATE_VARIABLE_Acc1_0_15, &STATE_VARIABLE_Acc1_20_20, STATE_VARIABLE_Acc2_0_17, &STATE_VARIABLE_Acc2_21_21);
      Var_22 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = Var_22;
      next_value_of_STATE_VARIABLE_Acc1_0_15 = STATE_VARIABLE_Acc1_20_20;
      next_value_of_STATE_VARIABLE_Acc2_0_17 = STATE_VARIABLE_Acc2_21_21;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc1_0_15 = next_value_of_STATE_VARIABLE_Acc1_0_15;
      STATE_VARIABLE_Acc2_0_17 = next_value_of_STATE_VARIABLE_Acc2_0_17;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl_4_p_5(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  succeeded = mercury__array__do_foldl_pred_6_p_5(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, A_6, Var_10, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl_pred_6_p_5(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 1;
        Var_16 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_I_9 = Var_16;
        next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
        I_9 = next_value_of_I_9;
        STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl_4_p_4(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  succeeded = mercury__array__do_foldl_pred_6_p_4(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, A_6, Var_10, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl_pred_6_p_4(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 1;
        Var_16 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_I_9 = Var_16;
        next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
        I_9 = next_value_of_I_9;
        STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl_4_p_3(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  succeeded = mercury__array__do_foldl_pred_6_p_3(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, A_6, Var_10, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_foldl_pred_6_p_3(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 1;
        Var_16 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_I_9 = Var_16;
        next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
        I_9 = next_value_of_I_9;
        STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__foldl_4_p_2(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  mercury__array__do_foldl_pred_6_p_2(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, A_6, Var_10, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__array__do_foldl_pred_6_p_2(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl_4_p_1(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  mercury__array__do_foldl_pred_6_p_1(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, A_6, Var_10, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__array__do_foldl_pred_6_p_1(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl_4_p_0(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_ArrayPtr A_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  mercury__array__do_foldl_pred_6_p_0(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, A_6, Var_10, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__array__do_foldl_pred_6_p_0(
  MR_Word TypeInfo_for_T1_19,
  MR_Word TypeInfo_for_T2_20,
  MR_Word P_7,
  MR_ArrayPtr A_8,
  MR_Integer I_9,
  MR_Integer Max_10,
  MR_Box STATE_VARIABLE_Acc_0_12,
  MR_Box * STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_10 < I_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Acc_13 = STATE_VARIABLE_Acc_0_12;
    else
    {
      MR_Box Var_14;
      MR_Box STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_12;

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
      func_0(((MR_Box) (P_7)), Var_14, STATE_VARIABLE_Acc_0_12, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_12 = STATE_VARIABLE_Acc_15_15;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_12 = next_value_of_STATE_VARIABLE_Acc_0_12;
      continue;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__array__foldl_3_f_1(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word Fn_5,
  MR_ArrayPtr A_6,
  MR_Box X_7)
{
  MR_Box HeadVar__4_4;
  MR_Integer Var_8;
  MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__array__foldl_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_8  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_9  = Max;
}
  HeadVar__4_4 = mercury__array__do_foldl_func_5_f_1(TypeInfo_for_T1_10, TypeInfo_for_T2_11, Fn_5, A_6, X_7, Var_8, Var_9);
  return HeadVar__4_4;
}

MR_Box MR_CALL 
mercury__array__do_foldl_func_5_f_1(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word Fn_7,
  MR_ArrayPtr A_8,
  MR_Box X_9,
  MR_Integer I_10,
  MR_Integer Max_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_11 < I_10);
    MR_Box HeadVar__6_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__6_6 = X_9;
    else
    {
      MR_Box Var_12;
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Box next_value_of_X_9;
      MR_Integer next_value_of_I_10;

{
#define MR_PROC_LABEL mercury__array__do_foldl_func_5_f_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Item;
}
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Fn_7, (MR_Integer) 1))));
      Var_12 = func_0(((MR_Box) (Fn_7)), Var_13, X_9);
      Var_14 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_X_9 = Var_12;
      next_value_of_I_10 = Var_14;
      X_9 = next_value_of_X_9;
      I_10 = next_value_of_I_10;
      continue;
    }
    return HeadVar__6_6;
    break;
  }
}

MR_Box MR_CALL 
mercury__array__foldl_3_f_0(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word Fn_5,
  MR_ArrayPtr A_6,
  MR_Box X_7)
{
  MR_Box HeadVar__4_4;
  MR_Integer Var_8;
  MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__array__foldl_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_6 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_8  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_9  = Max;
}
  HeadVar__4_4 = mercury__array__do_foldl_func_5_f_0(TypeInfo_for_T1_10, TypeInfo_for_T2_11, Fn_5, A_6, X_7, Var_8, Var_9);
  return HeadVar__4_4;
}

MR_Box MR_CALL 
mercury__array__do_foldl_func_5_f_0(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word Fn_7,
  MR_ArrayPtr A_8,
  MR_Box X_9,
  MR_Integer I_10,
  MR_Integer Max_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Max_11 < I_10);
    MR_Box HeadVar__6_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__6_6 = X_9;
    else
    {
      MR_Box Var_12;
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Box next_value_of_X_9;
      MR_Integer next_value_of_I_10;

{
#define MR_PROC_LABEL mercury__array__do_foldl_func_5_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Item;
}
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Fn_7, (MR_Integer) 1))));
      Var_12 = func_0(((MR_Box) (Fn_7)), Var_13, X_9);
      Var_14 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_X_9 = Var_12;
      next_value_of_I_10 = Var_14;
      X_9 = next_value_of_X_9;
      I_10 = next_value_of_I_10;
      continue;
    }
    return HeadVar__6_6;
    break;
  }
}

void MR_CALL 
mercury__array__map_3_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word TypeInfo_for_T2_15,
  MR_Word Closure_4,
  MR_ArrayPtr OldArray_5,
  MR_ArrayPtr * NewArray_6)
{
  MR_bool succeeded;
  MR_Box Elem0_7;
  MR_Integer Min_21;
  MR_Integer Max_22;

{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)OldArray_5 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_21  = Min;
}
{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)OldArray_5 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_22  = Max;
}
  succeeded = (Min_21 <= (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = ((MR_Integer) 0 <= Max_22);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)OldArray_5 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Elem0_7  = (MR_Box) Item;
}
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Integer Size_8;
    MR_Box Elem_9;
    MR_ArrayPtr NewArray0_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_ArrayPtr conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)OldArray_5 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Size_8  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_4, (MR_Integer) 1))));
    func_0(((MR_Box) (Closure_4)), Elem0_7, &Elem_9);
{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_8 ;
	FirstElem = (MR_Word) Elem_9 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
    NewArray0_10 = (MR_ArrayPtr) (conv1_Array);
}
    mercury__array__map_2_6_p_0(TypeInfo_for_T1_14, TypeInfo_for_T2_15, (MR_Integer) 1, Size_8, Closure_4, OldArray_5, NewArray0_10, NewArray_6);
  }
  else
  {
    MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
    *NewArray_6 = (MR_ArrayPtr) (conv2_Array);
}
  }
}

void MR_CALL 
mercury__array__map_2_6_p_0(
  MR_Word TypeInfo_for_T1_20,
  MR_Word TypeInfo_for_T2_21,
  MR_Integer N_7,
  MR_Integer Size_8,
  MR_Word Closure_9,
  MR_ArrayPtr OldArray_10,
  MR_ArrayPtr STATE_VARIABLE_NewArray_0_14,
  MR_ArrayPtr * STATE_VARIABLE_NewArray_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 >= Size_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_NewArray_15 = STATE_VARIABLE_NewArray_0_14;
    else
    {
      MR_Box OldElem_12;
      MR_Box NewElem_13;
      MR_ArrayPtr STATE_VARIABLE_NewArray_16_16;
      MR_Integer Var_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_N_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_NewArray_0_14;

{
#define MR_PROC_LABEL mercury__array__map_2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)OldArray_10 ;
	Index = N_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	OldElem_12  = (MR_Box) Item;
}
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_9, (MR_Integer) 1))));
      func_0(((MR_Box) (Closure_9)), OldElem_12, &NewElem_13);
{
#define MR_PROC_LABEL mercury__array__map_2_6_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = N_7 ;
	Item = (MR_Word) NewElem_13 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_NewArray_0_14) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
      STATE_VARIABLE_NewArray_16_16 = (MR_ArrayPtr) (conv1_Array);
}
      Var_17 = (MR_Integer) ((MR_Unsigned) N_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_7 = Var_17;
      next_value_of_STATE_VARIABLE_NewArray_0_14 = STATE_VARIABLE_NewArray_16_16;
      N_7 = next_value_of_N_7;
      STATE_VARIABLE_NewArray_0_14 = next_value_of_STATE_VARIABLE_NewArray_0_14;
      continue;
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__map_2_f_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word TypeInfo_for_T2_15,
  MR_Word F_4,
  MR_ArrayPtr A1_5)
{
  MR_bool succeeded;
  MR_ArrayPtr A2_6;
  MR_Box Elem0_19;
  MR_Integer Min_31;
  MR_Integer Max_32;

{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A1_5 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_31  = Min;
}
{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A1_5 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_32  = Max;
}
  succeeded = (Min_31 <= (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = ((MR_Integer) 0 <= Max_32);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A1_5 ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Elem0_19  = (MR_Box) Item;
}
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Integer Size_20;
    MR_Box Elem_21;
    MR_ArrayPtr NewArray0_22;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_ArrayPtr conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A1_5 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Size_20  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_4, (MR_Integer) 1))));
    Elem_21 = func_0(((MR_Box) (F_4)), Elem0_19);
{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_20 ;
	FirstElem = (MR_Word) Elem_21 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
    NewArray0_22 = (MR_ArrayPtr) (conv1_Array);
}
    mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_p_0(F_4, (MR_Integer) 1, Size_20, A1_5, NewArray0_22, &A2_6);
  }
  else
  {
    MR_ArrayPtr conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	conv2_Array  = (MR_Box) Array;
    A2_6 = (MR_ArrayPtr) (conv2_Array);
}
  }
  return A2_6;
}

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_Integer N_7,
  MR_Integer Size_8,
  MR_ArrayPtr OldArray_10,
  MR_ArrayPtr STATE_VARIABLE_NewArray_0_14,
  MR_ArrayPtr * STATE_VARIABLE_NewArray_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_7 >= Size_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_NewArray_15 = STATE_VARIABLE_NewArray_0_14;
    else
    {
      MR_Box OldElem_12;
      MR_Box NewElem_13;
      MR_ArrayPtr STATE_VARIABLE_NewArray_16_16;
      MR_Integer Var_17;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_ArrayPtr conv1_Array;
      MR_Integer next_value_of_N_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_NewArray_0_14;

{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)OldArray_10 ;
	Index = N_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	OldElem_12  = (MR_Box) Item;
}
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
      NewElem_13 = func_0(((MR_Box) (Var_24)), OldElem_12);
{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = N_7 ;
	Item = (MR_Word) NewElem_13 ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_NewArray_0_14) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv1_Array  = (MR_Box) Array;
      STATE_VARIABLE_NewArray_16_16 = (MR_ArrayPtr) (conv1_Array);
}
      Var_17 = (MR_Integer) ((MR_Unsigned) N_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_7 = Var_17;
      next_value_of_STATE_VARIABLE_NewArray_0_14 = STATE_VARIABLE_NewArray_16_16;
      N_7 = next_value_of_N_7;
      STATE_VARIABLE_NewArray_0_14 = next_value_of_STATE_VARIABLE_NewArray_0_14;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__all_false_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Pred_3,
  MR_ArrayPtr Array_4)
{
  MR_bool succeeded;
  MR_Integer Var_5;
  MR_Integer Var_6;

{
#define MR_PROC_LABEL mercury__array__all_false_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_5  = Min;
}
{
#define MR_PROC_LABEL mercury__array__all_false_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_6  = Max;
}
  succeeded = mercury__array__do_all_false_4_p_0(TypeInfo_for_T_7, Pred_3, Var_5, Var_6, Array_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_all_false_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Pred_5,
  MR_Integer CurIndex_6,
  MR_Integer UB_7,
  MR_ArrayPtr Array_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_6 <= UB_7);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_9;
      MR_Integer Var_10;
      MR_Integer Var_11;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Integer next_value_of_CurIndex_6;

{
#define MR_PROC_LABEL mercury__array__do_all_false_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array_8 ;
	Index = CurIndex_6 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Elem_9  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Pred_5, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (Pred_5)), Elem_9);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_11 = (MR_Integer) 1;
        Var_10 = (MR_Integer) ((MR_Unsigned) CurIndex_6 + (MR_Unsigned) Var_11);
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_6 = Var_10;
        CurIndex_6 = next_value_of_CurIndex_6;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__all_true_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Pred_3,
  MR_ArrayPtr Array_4)
{
  MR_bool succeeded;
  MR_Integer Var_5;
  MR_Integer Var_6;

{
#define MR_PROC_LABEL mercury__array__all_true_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_5  = Min;
}
{
#define MR_PROC_LABEL mercury__array__all_true_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_6  = Max;
}
  succeeded = mercury__array__do_all_true_4_p_0(TypeInfo_for_T_7, Pred_3, Var_5, Var_6, Array_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__do_all_true_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Pred_5,
  MR_Integer CurIndex_6,
  MR_Integer UB_7,
  MR_ArrayPtr Array_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_6 <= UB_7);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_9;
      MR_Integer Var_10;
      MR_Integer Var_11;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Integer next_value_of_CurIndex_6;

{
#define MR_PROC_LABEL mercury__array__do_all_true_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array_8 ;
	Index = CurIndex_6 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Elem_9  = (MR_Box) Item;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Pred_5, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (Pred_5)), Elem_9);
      if (succeeded)
      {
        Var_11 = (MR_Integer) 1;
        Var_10 = (MR_Integer) ((MR_Unsigned) CurIndex_6 + (MR_Unsigned) Var_11);
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_6 = Var_10;
        CurIndex_6 = next_value_of_CurIndex_6;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__approx_binary_search_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Cmp_5,
  MR_ArrayPtr A_6,
  MR_Box SearchX_7,
  MR_Integer * I_8)
{
  MR_bool succeeded;
  MR_Integer Hi_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__approx_binary_search_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  Hi_10 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
  succeeded = mercury__array__approx_binary_search_loop_6_p_0(TypeInfo_for_T_13, Cmp_5, A_6, SearchX_7, (MR_Integer) 0, Hi_10, I_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__approx_binary_search_loop_6_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word Cmp_7,
  MR_ArrayPtr A_8,
  MR_Box SearchX_9,
  MR_Integer Lo_10,
  MR_Integer Hi_11,
  MR_Integer * I_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_10 <= Hi_11);
    MR_Integer Mid_13;
    MR_Box MidX_14;
    MR_Word O_15;
    MR_Integer Var_17;
    MR_Integer Var_18;
    MR_Integer Var_19;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_O_15;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_18 = (MR_Integer) ((MR_Unsigned) Hi_11 - (MR_Unsigned) Lo_10);
      Var_19 = (MR_Integer) 1;
      Var_17 = (Var_18 >> Var_19);
      Mid_13 = (MR_Integer) ((MR_Unsigned) Lo_10 + (MR_Unsigned) Var_17);
{
#define MR_PROC_LABEL mercury__array__approx_binary_search_loop_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = Mid_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	MidX_14  = (MR_Box) Item;
}
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Cmp_7, (MR_Integer) 1))));
      conv1_O_15 = func_0(((MR_Box) (Cmp_7)), MidX_14, SearchX_9);
      O_15 = ((MR_Word) (conv1_O_15));
      switch (O_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            succeeded = (Mid_13 < Hi_11);
            if (succeeded)
            {
              MR_Box MidP1X_16;
              MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) Mid_13 + (MR_Unsigned) 1);
              MR_Word Var_28;
              MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
              MR_Box conv3_Var_28;

{
#define MR_PROC_LABEL mercury__array__approx_binary_search_loop_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = Var_22 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	MidP1X_16  = (MR_Box) Item;
}
              func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Cmp_7, (MR_Integer) 1))));
              conv3_Var_28 = func_2(((MR_Box) (Cmp_7)), SearchX_9, MidP1X_16);
              Var_28 = ((MR_Word) (conv3_Var_28));
              succeeded = ((MR_Integer) 1 == Var_28);
            }
            else
              succeeded = (Mid_13 == Hi_11);
            if (succeeded)
            {
              *I_12 = Mid_13;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) Mid_13 + (MR_Unsigned) 1);
              MR_Integer next_value_of_Lo_10 = Var_25;

              // direct tailcall eliminated
              ;
              Lo_10 = next_value_of_Lo_10;
              continue;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            *I_12 = Mid_13;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) Mid_13 - (MR_Unsigned) 1);
            MR_Integer next_value_of_Hi_11 = Var_20;

            // direct tailcall eliminated
            ;
            Hi_11 = next_value_of_Hi_11;
            continue;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__approx_binary_search_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_ArrayPtr A_4,
  MR_Box SearchX_5,
  MR_Integer * I_6)
{
  MR_bool succeeded;
  MR_Integer Hi_14;
  MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__array__approx_binary_search_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_4 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_15  = Max;
}
  Hi_14 = (MR_Integer) ((MR_Unsigned) Var_15 - (MR_Unsigned) 1);
  succeeded = mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_54_95_95_91_50_44_32_51_93_95_48_6_p_0(TypeInfo_for_T_8, A_4, SearchX_5, (MR_Integer) 0, Hi_14, I_6);
  return succeeded;
}

static MR_bool MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_54_95_95_91_50_44_32_51_93_95_48_6_p_0(
  MR_Word Var_29,
  MR_ArrayPtr A_8,
  MR_Box SearchX_9,
  MR_Integer Lo_10,
  MR_Integer Hi_11,
  MR_Integer * I_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_10 <= Hi_11);
    MR_Integer Mid_13;
    MR_Box MidX_14;
    MR_Word O_15;
    MR_Integer Var_17;
    MR_Integer Var_18;
    MR_Integer Var_19;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_18 = (MR_Integer) ((MR_Unsigned) Hi_11 - (MR_Unsigned) Lo_10);
      Var_19 = (MR_Integer) 1;
      Var_17 = (Var_18 >> Var_19);
      Mid_13 = (MR_Integer) ((MR_Unsigned) Lo_10 + (MR_Unsigned) Var_17);
{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_54_95_95_91_50_44_32_51_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = Mid_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	MidX_14  = (MR_Box) Item;
}
      mercury__builtin__compare_3_p_0(Var_29, &O_15, MidX_14, SearchX_9);
      switch (O_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            succeeded = (Mid_13 < Hi_11);
            if (succeeded)
            {
              MR_Box MidP1X_16;
              MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) Mid_13 + (MR_Unsigned) 1);
              MR_Word Var_28;

{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_54_95_95_91_50_44_32_51_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = Var_22 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	MidP1X_16  = (MR_Box) Item;
}
              mercury__builtin__compare_3_p_0(Var_29, &Var_28, SearchX_9, MidP1X_16);
              succeeded = ((MR_Integer) 1 == Var_28);
            }
            else
              succeeded = (Mid_13 == Hi_11);
            if (succeeded)
            {
              *I_12 = Mid_13;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) Mid_13 + (MR_Unsigned) 1);
              MR_Integer next_value_of_Lo_10 = Var_25;

              // direct tailcall eliminated
              ;
              Lo_10 = next_value_of_Lo_10;
              continue;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            *I_12 = Mid_13;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) Mid_13 - (MR_Unsigned) 1);
            MR_Integer next_value_of_Hi_11 = Var_20;

            // direct tailcall eliminated
            ;
            Hi_11 = next_value_of_Hi_11;
            continue;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__binary_search_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Cmp_5,
  MR_ArrayPtr A_6,
  MR_Box SearchX_7,
  MR_Integer * I_8)
{
  MR_bool succeeded;
  MR_Integer Hi_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__array__binary_search_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_6 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  Hi_10 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
  succeeded = mercury__array__binary_search_loop_6_p_0(TypeInfo_for_T_13, Cmp_5, A_6, SearchX_7, (MR_Integer) 0, Hi_10, I_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__binary_search_loop_6_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word Cmp_7,
  MR_ArrayPtr A_8,
  MR_Box SearchX_9,
  MR_Integer Lo_10,
  MR_Integer Hi_11,
  MR_Integer * I_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_10 <= Hi_11);
    MR_Integer Mid_13;
    MR_Box MidX_14;
    MR_Word O_15;
    MR_Integer Var_16;
    MR_Integer Var_17;
    MR_Integer Var_18;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_O_15;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_17 = (MR_Integer) ((MR_Unsigned) Hi_11 - (MR_Unsigned) Lo_10);
      Var_18 = (MR_Integer) 1;
      Var_16 = (Var_17 >> Var_18);
      Mid_13 = (MR_Integer) ((MR_Unsigned) Lo_10 + (MR_Unsigned) Var_16);
{
#define MR_PROC_LABEL mercury__array__binary_search_loop_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = Mid_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	MidX_14  = (MR_Box) Item;
}
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Cmp_7, (MR_Integer) 1))));
      conv1_O_15 = func_0(((MR_Box) (Cmp_7)), MidX_14, SearchX_9);
      O_15 = ((MR_Word) (conv1_O_15));
      switch (O_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) Mid_13 + (MR_Unsigned) 1);
            MR_Integer next_value_of_Lo_10 = Var_21;

            // direct tailcall eliminated
            ;
            Lo_10 = next_value_of_Lo_10;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *I_12 = Mid_13;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) Mid_13 - (MR_Unsigned) 1);
            MR_Integer next_value_of_Hi_11 = Var_19;

            // direct tailcall eliminated
            ;
            Hi_11 = next_value_of_Hi_11;
            continue;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__binary_search_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_ArrayPtr A_4,
  MR_Box SearchX_5,
  MR_Integer * I_6)
{
  MR_bool succeeded;
  MR_Integer Hi_14;
  MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__array__binary_search_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_4 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_15  = Max;
}
  Hi_14 = (MR_Integer) ((MR_Unsigned) Var_15 - (MR_Unsigned) 1);
  succeeded = mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_53_95_95_91_50_44_32_51_93_95_48_6_p_0(TypeInfo_for_T_8, A_4, SearchX_5, (MR_Integer) 0, Hi_14, I_6);
  return succeeded;
}

static MR_bool MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_53_95_95_91_50_44_32_51_93_95_48_6_p_0(
  MR_Word Var_24,
  MR_ArrayPtr A_8,
  MR_Box SearchX_9,
  MR_Integer Lo_10,
  MR_Integer Hi_11,
  MR_Integer * I_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_10 <= Hi_11);
    MR_Integer Mid_13;
    MR_Box MidX_14;
    MR_Word O_15;
    MR_Integer Var_16;
    MR_Integer Var_17;
    MR_Integer Var_18;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_17 = (MR_Integer) ((MR_Unsigned) Hi_11 - (MR_Unsigned) Lo_10);
      Var_18 = (MR_Integer) 1;
      Var_16 = (Var_17 >> Var_18);
      Mid_13 = (MR_Integer) ((MR_Unsigned) Lo_10 + (MR_Unsigned) Var_16);
{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_53_95_95_91_50_44_32_51_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = Mid_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	MidX_14  = (MR_Box) Item;
}
      mercury__builtin__compare_3_p_0(Var_24, &O_15, MidX_14, SearchX_9);
      switch (O_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) Mid_13 + (MR_Unsigned) 1);
            MR_Integer next_value_of_Lo_10 = Var_21;

            // direct tailcall eliminated
            ;
            Lo_10 = next_value_of_Lo_10;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *I_12 = Mid_13;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) Mid_13 - (MR_Unsigned) 1);
            MR_Integer next_value_of_Hi_11 = Var_19;

            // direct tailcall eliminated
            ;
            Hi_11 = next_value_of_Hi_11;
            continue;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__sort_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_ArrayPtr A_3)
{
  MR_ArrayPtr HeadVar__2_2;
  MR_Integer Var_4;
  MR_Integer Var_5;
  MR_ArrayPtr Var_17;
  MR_ArrayPtr Var_15;

{
#define MR_PROC_LABEL mercury__array__sort_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_3 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_4  = Min;
}
{
#define MR_PROC_LABEL mercury__array__sort_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_5  = Max;
}
{
#define MR_PROC_LABEL mercury__array__sort_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)A_3 ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	Var_17  = (MR_Box) Array;
}
  mercury__array__samsort_up_8_p_0(TypeInfo_for_T_6, (MR_Integer) 0, Var_17, &HeadVar__2_2, A_3, &Var_15, Var_4, Var_5, Var_4);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__array__samsort_up_8_p_0(
  MR_Word TypeInfo_for_T_42,
  MR_Integer N_9,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr * A_11,
  MR_ArrayPtr B0_12,
  MR_ArrayPtr * B_13,
  MR_Integer Lo_14,
  MR_Integer Hi_15,
  MR_Integer I_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_16 > Hi_15);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *A_11 = A0_10;
      *B_13 = B0_12;
    }
    else
    {
      succeeded = (N_9 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_ArrayPtr B1_17;
        MR_Integer J_19;
        MR_ArrayPtr B2_20;
        MR_ArrayPtr A2_21;
        MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) N_9 - (MR_Unsigned) 1);
        MR_Integer Var_29;
        MR_Integer Var_30;
        MR_Integer Var_34;
        MR_Integer next_value_of_N_9;
        MR_ArrayPtr next_value_of_A0_10;
        MR_ArrayPtr next_value_of_B0_12;
        MR_Integer next_value_of_I_16;

        mercury__array__samsort_down_8_p_0(TypeInfo_for_T_42, Var_27, B0_12, &B1_17, A0_10, &A2_21, I_16, Hi_15, &J_19);
        Var_29 = (MR_Integer) ((MR_Unsigned) I_16 - (MR_Unsigned) 1);
        Var_30 = (MR_Integer) ((MR_Unsigned) J_19 - (MR_Unsigned) 1);
        mercury__array__merge_subarrays_8_p_0(TypeInfo_for_T_42, A2_21, Lo_14, Var_29, I_16, Var_30, Lo_14, B1_17, &B2_20);
        Var_34 = (MR_Integer) ((MR_Unsigned) N_9 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_N_9 = Var_34;
        next_value_of_A0_10 = B2_20;
        next_value_of_B0_12 = A2_21;
        next_value_of_I_16 = J_19;
        N_9 = next_value_of_N_9;
        A0_10 = next_value_of_A0_10;
        B0_12 = next_value_of_B0_12;
        I_16 = next_value_of_I_16;
        continue;
      }
      else
      {
        MR_Integer Var_36;
        MR_ArrayPtr B1_38;
        MR_Integer J_39;
        MR_Word Var_50;
        MR_Box Var_51;
        MR_Box Var_52;
        MR_Integer Var_53;
        MR_Integer Var_54;
        MR_Word Var_66;
        MR_Integer next_value_of_N_9;
        MR_ArrayPtr next_value_of_A0_10;
        MR_ArrayPtr next_value_of_B0_12;
        MR_Integer next_value_of_I_16;

        succeeded = (Lo_14 < Hi_15);
        if (succeeded)
        {
          Var_50 = (MR_Integer) 2;
          mercury__array__lookup_3_p_0(TypeInfo_for_T_42, A0_10, Lo_14, &Var_51);
          Var_54 = (MR_Integer) 1;
          Var_53 = (MR_Integer) ((MR_Unsigned) Lo_14 + (MR_Unsigned) Var_54);
          mercury__array__lookup_3_p_0(TypeInfo_for_T_42, A0_10, Var_53, &Var_52);
          mercury__builtin__compare_3_p_0(TypeInfo_for_T_42, &Var_66, Var_51, Var_52);
          succeeded = (Var_50 == Var_66);
        }
        if (succeeded)
        {
          MR_Integer Var_56;
          MR_Integer Var_57;

          J_39 = mercury__array__search_until_4_f_0(TypeInfo_for_T_42, (MR_Integer) 1, A0_10, Lo_14, Hi_15);
          Var_56 = (MR_Integer) ((MR_Unsigned) J_39 - (MR_Unsigned) 1);
          Var_57 = (MR_Integer) ((MR_Unsigned) J_39 - (MR_Unsigned) 1);
          mercury__array__copy_subarray_reverse_6_p_0(TypeInfo_for_T_42, A0_10, Lo_14, Var_56, Var_57, B0_12, &B1_38);
        }
        else
        {
          MR_Integer Var_62;

          J_39 = mercury__array__search_until_4_f_0(TypeInfo_for_T_42, (MR_Integer) 2, A0_10, Lo_14, Hi_15);
          Var_62 = (MR_Integer) ((MR_Unsigned) J_39 - (MR_Unsigned) 1);
          mercury__array__copy_subarray_6_p_0(TypeInfo_for_T_42, A0_10, Lo_14, Var_62, Lo_14, B0_12, &B1_38);
        }
        Var_36 = (MR_Integer) ((MR_Unsigned) N_9 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_N_9 = Var_36;
        next_value_of_A0_10 = B1_38;
        next_value_of_B0_12 = A0_10;
        next_value_of_I_16 = J_39;
        N_9 = next_value_of_N_9;
        A0_10 = next_value_of_A0_10;
        B0_12 = next_value_of_B0_12;
        I_16 = next_value_of_I_16;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__array__samsort_down_8_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Integer N_9,
  MR_ArrayPtr A0_10,
  MR_ArrayPtr * A_11,
  MR_ArrayPtr B0_12,
  MR_ArrayPtr * B_13,
  MR_Integer Lo_14,
  MR_Integer Hi_15,
  MR_Integer * I_16)
{
  MR_bool succeeded = (Lo_14 > Hi_15);

  if (succeeded)
  {
    *A_11 = A0_10;
    *B_13 = B0_12;
    *I_16 = Lo_14;
  }
  else
  {
    succeeded = (N_9 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_ArrayPtr B1_17;
      MR_ArrayPtr A1_18;
      MR_Integer J_19;
      MR_ArrayPtr B2_20;
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) N_9 - (MR_Unsigned) 1);
      MR_Integer Var_25;
      MR_Integer Var_27;
      MR_Integer Var_28;

      mercury__array__samsort_down_8_p_0(TypeInfo_for_T_34, Var_23, B0_12, &B1_17, A0_10, &A1_18, Lo_14, Hi_15, &J_19);
      Var_25 = (MR_Integer) ((MR_Unsigned) N_9 - (MR_Unsigned) 1);
      mercury__array__samsort_down_8_p_0(TypeInfo_for_T_34, Var_25, B1_17, &B2_20, A1_18, A_11, J_19, Hi_15, I_16);
      Var_27 = (MR_Integer) ((MR_Unsigned) J_19 - (MR_Unsigned) 1);
      Var_28 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
      mercury__array__merge_subarrays_8_p_0(TypeInfo_for_T_34, *A_11, Lo_14, Var_27, J_19, Var_28, Lo_14, B2_20, B_13);
    }
    else
    {
      MR_Word Var_42;
      MR_Box Var_43;
      MR_Box Var_44;
      MR_Integer Var_45;
      MR_Integer Var_46;
      MR_Word Var_58;

      *A_11 = A0_10;
      succeeded = (Lo_14 < Hi_15);
      if (succeeded)
      {
        Var_42 = (MR_Integer) 2;
        mercury__array__lookup_3_p_0(TypeInfo_for_T_34, A0_10, Lo_14, &Var_43);
        Var_46 = (MR_Integer) 1;
        Var_45 = (MR_Integer) ((MR_Unsigned) Lo_14 + (MR_Unsigned) Var_46);
        mercury__array__lookup_3_p_0(TypeInfo_for_T_34, A0_10, Var_45, &Var_44);
        mercury__builtin__compare_3_p_0(TypeInfo_for_T_34, &Var_58, Var_43, Var_44);
        succeeded = (Var_42 == Var_58);
      }
      if (succeeded)
      {
        MR_Integer Var_48;
        MR_Integer Var_49;

        *I_16 = mercury__array__search_until_4_f_0(TypeInfo_for_T_34, (MR_Integer) 1, A0_10, Lo_14, Hi_15);
        Var_48 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
        Var_49 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
        mercury__array__copy_subarray_reverse_6_p_0(TypeInfo_for_T_34, A0_10, Lo_14, Var_48, Var_49, B0_12, B_13);
      }
      else
      {
        MR_Integer Var_54;

        *I_16 = mercury__array__search_until_4_f_0(TypeInfo_for_T_34, (MR_Integer) 2, A0_10, Lo_14, Hi_15);
        Var_54 = (MR_Integer) ((MR_Unsigned) *I_16 - (MR_Unsigned) 1);
        mercury__array__copy_subarray_6_p_0(TypeInfo_for_T_34, A0_10, Lo_14, Var_54, Lo_14, B0_12, B_13);
      }
    }
  }
}

static MR_Integer MR_CALL 
mercury__array__search_until_4_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word R_6,
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_8 < Hi_9);
    MR_Integer HeadVar__5_5;
    MR_Box Var_10;
    MR_Box Var_11;
    MR_Integer Var_12;
    MR_Integer Var_13;
    MR_Word Var_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      mercury__array__lookup_3_p_0(TypeInfo_for_T_17, A_7, Lo_8, &Var_10);
      Var_13 = (MR_Integer) 1;
      Var_12 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) Var_13);
      mercury__array__lookup_3_p_0(TypeInfo_for_T_17, A_7, Var_12, &Var_11);
      mercury__builtin__compare_3_p_0(TypeInfo_for_T_17, &Var_18, Var_10, Var_11);
      succeeded = (R_6 != Var_18);
    }
    if (succeeded)
    {
      MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
      MR_Integer next_value_of_Lo_8 = Var_14;

      // direct tailcall eliminated
      ;
      Lo_8 = next_value_of_Lo_8;
      continue;
    }
    else
      HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
    return HeadVar__5_5;
    break;
  }
}

static void MR_CALL 
mercury__array__merge_subarrays_8_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_ArrayPtr A_9,
  MR_Integer Lo1_10,
  MR_Integer Hi1_11,
  MR_Integer Lo2_12,
  MR_Integer Hi2_13,
  MR_Integer I_14,
  MR_ArrayPtr STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * STATE_VARIABLE_B_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo1_10 > Hi1_11);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      mercury__array__copy_subarray_6_p_0(TypeInfo_for_T_41, A_9, Lo2_12, Hi2_13, I_14, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20);
    else
    {
      succeeded = (Lo2_12 > Hi2_13);
      if (succeeded)
        mercury__array__copy_subarray_6_p_0(TypeInfo_for_T_41, A_9, Lo1_10, Hi1_11, I_14, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20);
      else
      {
        MR_Box X1_16;
        MR_Box X2_17;
        MR_Word R_18;

        mercury__array__lookup_3_p_0(TypeInfo_for_T_41, A_9, Lo1_10, &X1_16);
        mercury__array__lookup_3_p_0(TypeInfo_for_T_41, A_9, Lo2_12, &X2_17);
        mercury__builtin__compare_3_p_0(TypeInfo_for_T_41, &R_18, X1_16, X2_17);
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_ArrayPtr STATE_VARIABLE_B_23_23;
              MR_Integer Var_24;
              MR_Integer Var_25;
              MR_Integer next_value_of_Lo1_10;
              MR_Integer next_value_of_I_14;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_19;

              mercury__array__set_4_p_0(TypeInfo_for_T_41, I_14, X1_16, STATE_VARIABLE_B_0_19, &STATE_VARIABLE_B_23_23);
              Var_24 = (MR_Integer) ((MR_Unsigned) Lo1_10 + (MR_Unsigned) 1);
              Var_25 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Lo1_10 = Var_24;
              next_value_of_I_14 = Var_25;
              next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_23_23;
              Lo1_10 = next_value_of_Lo1_10;
              I_14 = next_value_of_I_14;
              STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_ArrayPtr STATE_VARIABLE_B_29_29;
              MR_Integer Var_30;
              MR_Integer Var_31;
              MR_Integer next_value_of_Lo1_10;
              MR_Integer next_value_of_I_14;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_19;

              mercury__array__set_4_p_0(TypeInfo_for_T_41, I_14, X1_16, STATE_VARIABLE_B_0_19, &STATE_VARIABLE_B_29_29);
              Var_30 = (MR_Integer) ((MR_Unsigned) Lo1_10 + (MR_Unsigned) 1);
              Var_31 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Lo1_10 = Var_30;
              next_value_of_I_14 = Var_31;
              next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_29_29;
              Lo1_10 = next_value_of_Lo1_10;
              I_14 = next_value_of_I_14;
              STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_ArrayPtr STATE_VARIABLE_B_35_35;
              MR_Integer Var_36;
              MR_Integer Var_37;
              MR_Integer next_value_of_Lo2_12;
              MR_Integer next_value_of_I_14;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_19;

              mercury__array__set_4_p_0(TypeInfo_for_T_41, I_14, X2_17, STATE_VARIABLE_B_0_19, &STATE_VARIABLE_B_35_35);
              Var_36 = (MR_Integer) ((MR_Unsigned) Lo2_12 + (MR_Unsigned) 1);
              Var_37 = (MR_Integer) ((MR_Unsigned) I_14 + (MR_Unsigned) 1);
              // direct tailcall eliminated
              ;
              next_value_of_Lo2_12 = Var_36;
              next_value_of_I_14 = Var_37;
              next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_35_35;
              Lo2_12 = next_value_of_Lo2_12;
              I_14 = next_value_of_I_14;
              STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__array__copy_subarray_reverse_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_8 <= Hi_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box X_12;
      MR_ArrayPtr STATE_VARIABLE_B_15_15;
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Integer next_value_of_Lo_8;
      MR_Integer next_value_of_I_10;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_13;

      mercury__array__lookup_3_p_0(TypeInfo_for_T_21, A_7, Lo_8, &X_12);
      mercury__array__set_4_p_0(TypeInfo_for_T_21, I_10, X_12, STATE_VARIABLE_B_0_13, &STATE_VARIABLE_B_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
      Var_17 = (MR_Integer) ((MR_Unsigned) I_10 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_8 = Var_16;
      next_value_of_I_10 = Var_17;
      next_value_of_STATE_VARIABLE_B_0_13 = STATE_VARIABLE_B_15_15;
      Lo_8 = next_value_of_Lo_8;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_B_0_13 = next_value_of_STATE_VARIABLE_B_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_B_14 = STATE_VARIABLE_B_0_13;
    break;
  }
}

static void MR_CALL 
mercury__array__copy_subarray_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_ArrayPtr A_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer I_10,
  MR_ArrayPtr STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_8 <= Hi_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box X_12;
      MR_ArrayPtr STATE_VARIABLE_B_15_15;
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Integer next_value_of_Lo_8;
      MR_Integer next_value_of_I_10;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_B_0_13;

      mercury__array__lookup_3_p_0(TypeInfo_for_T_21, A_7, Lo_8, &X_12);
      mercury__array__set_4_p_0(TypeInfo_for_T_21, I_10, X_12, STATE_VARIABLE_B_0_13, &STATE_VARIABLE_B_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) 1);
      Var_17 = (MR_Integer) ((MR_Unsigned) I_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_8 = Var_16;
      next_value_of_I_10 = Var_17;
      next_value_of_STATE_VARIABLE_B_0_13 = STATE_VARIABLE_B_15_15;
      Lo_8 = next_value_of_Lo_8;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_B_0_13 = next_value_of_STATE_VARIABLE_B_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_B_14 = STATE_VARIABLE_B_0_13;
    break;
  }
}

MR_Word MR_CALL 
mercury__array__fetch_items_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_ArrayPtr Array_5,
  MR_Integer Low_6,
  MR_Integer High_7)
{
  MR_Word List_8;

  mercury__array__fetch_items_4_p_0(TypeInfo_for_T_9, Array_5, Low_6, High_7, &List_8);
  return List_8;
}

MR_Word MR_CALL 
mercury__array__to_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_ArrayPtr Array_3)
{
  MR_Word List_4;

  mercury__array__to_list_2_p_0(TypeInfo_for_T_5, Array_3, &List_4);
  return List_4;
}

void MR_CALL 
mercury__array__to_list_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_ArrayPtr Array_3,
  MR_Word * List_4)
{
  MR_bool succeeded;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__array__to_list_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_3 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_10  = Max;
}
  succeeded = ((MR_Integer) 0 == Var_10);
  if (succeeded)
    *List_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Low_5;
    MR_Integer High_6;

{
#define MR_PROC_LABEL mercury__array__to_list_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_3 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Low_5  = Min;
}
{
#define MR_PROC_LABEL mercury__array__to_list_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_3 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	High_6  = Max;
}
    mercury__array__fetch_items_4_p_0(TypeInfo_for_T_7, Array_3, Low_5, High_6, List_4);
  }
}

void MR_CALL 
mercury__array__fetch_items_4_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_ArrayPtr Array_5,
  MR_Integer Low_6,
  MR_Integer High_7,
  MR_Word * List_8)
{
  MR_bool succeeded = (High_7 < Low_6);

  if (succeeded)
    *List_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Min_27;
    MR_Integer Max_28;

{
#define MR_PROC_LABEL mercury__array__fetch_items_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_5 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_27  = Min;
}
{
#define MR_PROC_LABEL mercury__array__fetch_items_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_5 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_28  = Max;
}
    succeeded = (Min_27 <= Low_6);
    if (succeeded)
      succeeded = (Low_6 <= Max_28);
    succeeded = !(succeeded);
    if (succeeded)
      {
        mercury__array__arg_out_of_bounds_error_4_p_0(TypeInfo_for_T_22, Array_5, (MR_String) "second", (MR_String) "fetch_items", Low_6);
        return;
      }
    else
    {
      MR_Integer Min_34;
      MR_Integer Max_35;

{
#define MR_PROC_LABEL mercury__array__fetch_items_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_5 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_34  = Min;
}
{
#define MR_PROC_LABEL mercury__array__fetch_items_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_5 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_35  = Max;
}
      succeeded = (Min_34 <= High_7);
      if (succeeded)
        succeeded = (High_7 <= Max_35);
      succeeded = !(succeeded);
      if (succeeded)
        {
          mercury__array__arg_out_of_bounds_error_4_p_0(TypeInfo_for_T_22, Array_5, (MR_String) "third", (MR_String) "fetch_items", High_7);
          return;
        }
      else
        *List_8 = mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_f_0(Array_5, (MR_Word) ((MR_Unsigned) 0U), Low_6, High_7);
    }
  }
}

static MR_Word MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_f_0(
  MR_ArrayPtr A_8,
  MR_Word X_9,
  MR_Integer Min_10,
  MR_Integer I_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < Min_10);
    MR_Word HeadVar__6_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__6_6 = X_9;
    else
    {
      MR_Word Var_12;
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Word next_value_of_X_9;
      MR_Integer next_value_of_I_11;

{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)A_8 ;
	Index = I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_13  = (MR_Box) Item;
}
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = Var_13;
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (X_9));
      }
      Var_14 = (MR_Integer) ((MR_Unsigned) I_11 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_X_9 = Var_12;
      next_value_of_I_11 = Var_14;
      X_9 = next_value_of_X_9;
      I_11 = next_value_of_I_11;
      continue;
    }
    return HeadVar__6_6;
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__from_reverse_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_ArrayPtr Array_4;

  mercury__array__from_reverse_list_2_p_0(TypeInfo_for_T_5, List_3, &Array_4);
  return Array_4;
}

void MR_CALL 
mercury__array__from_reverse_list_2_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_ArrayPtr * Array_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
{
#define MR_PROC_LABEL mercury__array__from_reverse_list_2_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_2  = (MR_Box) Array;
}
  }
  else
  {
    MR_Box Head_6 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word Tail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Len_8;
    MR_ArrayPtr Array0_9;
    MR_Integer Var_10;
    MR_Integer Var_12;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, (MR_Integer) 0, &Len_8);
    Var_10 = (MR_Integer) ((MR_Unsigned) Len_8 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__array__from_reverse_list_2_p_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Len_8 ;
	FirstElem = (MR_Word) Head_6 ;
	IndexToSet = Var_10 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_9  = (MR_Box) Array;
}
    Var_12 = (MR_Integer) ((MR_Unsigned) Len_8 - (MR_Unsigned) 2);
    mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_p_0(Tail_7, Var_12, Array0_9, Array_2);
  }
}

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_ArrayPtr STATE_VARIABLE_Array_0_3,
  MR_ArrayPtr * STATE_VARIABLE_Array_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Array_4 = STATE_VARIABLE_Array_0_3;
    else
    {
      MR_Box Head_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Tail_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_ArrayPtr STATE_VARIABLE_Array_15_15;
      MR_Integer Var_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_N_2;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_3;

{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = N_2 ;
	Item = (MR_Word) Head_9 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_3 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_15_15  = (MR_Box) Array;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) N_2 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Tail_10;
      next_value_of_N_2 = Var_16;
      next_value_of_STATE_VARIABLE_Array_0_3 = STATE_VARIABLE_Array_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      N_2 = next_value_of_N_2;
      STATE_VARIABLE_Array_0_3 = next_value_of_STATE_VARIABLE_Array_0_3;
      continue;
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__array_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_ArrayPtr Array_4;

  mercury__array__from_list_2_p_0(TypeInfo_for_T_5, List_3, &Array_4);
  return Array_4;
}

MR_ArrayPtr MR_CALL 
mercury__array__from_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  MR_ArrayPtr Array_4;

  mercury__array__from_list_2_p_0(TypeInfo_for_T_5, List_3, &Array_4);
  return Array_4;
}

void MR_CALL 
mercury__array__from_list_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_ArrayPtr * Array_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
{
#define MR_PROC_LABEL mercury__array__from_list_2_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_2  = (MR_Box) Array;
}
  }
  else
  {
    MR_Box Head_6 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word Tail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Len_8;
    MR_ArrayPtr Array0_9;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_12, HeadVar__1_1, (MR_Integer) 0, &Len_8);
{
#define MR_PROC_LABEL mercury__array__from_list_2_p_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Len_8 ;
	FirstElem = (MR_Word) Head_6 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_9  = (MR_Box) Array;
}
    mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_p_0(Tail_7, (MR_Integer) 1, Array0_9, Array_2);
  }
}

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_ArrayPtr STATE_VARIABLE_Array_0_3,
  MR_ArrayPtr * STATE_VARIABLE_Array_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Array_4 = STATE_VARIABLE_Array_0_3;
    else
    {
      MR_Box Head_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Tail_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_ArrayPtr STATE_VARIABLE_Array_15_15;
      MR_Integer Var_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_3;

{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = HeadVar__2_2 ;
	Item = (MR_Word) Head_9 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_3 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_15_15  = (MR_Box) Array;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Tail_10;
      next_value_of_HeadVar__2_2 = Var_16;
      next_value_of_STATE_VARIABLE_Array_0_3 = STATE_VARIABLE_Array_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Array_0_3 = next_value_of_STATE_VARIABLE_Array_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__array__fill_range_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Box Item_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_ArrayPtr STATE_VARIABLE_Array_0_10,
  MR_ArrayPtr * STATE_VARIABLE_Array_11)
{
  MR_bool succeeded = (Lo_7 > Hi_8);

  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.fill_range\'/5", (MR_String) "empty range");
      return;
    }
  else
  {
    MR_Integer Min_21;
    MR_Integer Max_22;

{
#define MR_PROC_LABEL mercury__array__fill_range_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_21  = Min;
}
{
#define MR_PROC_LABEL mercury__array__fill_range_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_22  = Max;
}
    succeeded = (Min_21 <= Lo_7);
    if (succeeded)
      succeeded = (Lo_7 <= Max_22);
    succeeded = !(succeeded);
    if (succeeded)
      {
        mercury__array__arg_out_of_bounds_error_4_p_0(TypeInfo_for_T_18, STATE_VARIABLE_Array_0_10, (MR_String) "second", (MR_String) "fill_range", Lo_7);
        return;
      }
    else
    {
      MR_Integer Min_28;
      MR_Integer Max_29;

{
#define MR_PROC_LABEL mercury__array__fill_range_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_10 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_28  = Min;
}
{
#define MR_PROC_LABEL mercury__array__fill_range_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_10 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_29  = Max;
}
      succeeded = (Min_28 <= Hi_8);
      if (succeeded)
        succeeded = (Hi_8 <= Max_29);
      succeeded = !(succeeded);
      if (succeeded)
        {
          mercury__array__arg_out_of_bounds_error_4_p_0(TypeInfo_for_T_18, STATE_VARIABLE_Array_0_10, (MR_String) "third", (MR_String) "fill_range", Hi_8);
          return;
        }
      else
        mercury__array__do_fill_range_5_p_0(TypeInfo_for_T_18, Item_6, Lo_7, Hi_8, STATE_VARIABLE_Array_0_10, STATE_VARIABLE_Array_11);
    }
  }
}

void MR_CALL 
mercury__array__fill_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box Item_4,
  MR_ArrayPtr STATE_VARIABLE_Array_0_8,
  MR_ArrayPtr * STATE_VARIABLE_Array_9)
{
  MR_Integer Min_6;
  MR_Integer Max_7;

{
#define MR_PROC_LABEL mercury__array__fill_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_6  = Min;
}
{
#define MR_PROC_LABEL mercury__array__fill_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_7  = Max;
}
  mercury__array__do_fill_range_5_p_0(TypeInfo_for_T_10, Item_4, Min_6, Max_7, STATE_VARIABLE_Array_0_8, STATE_VARIABLE_Array_9);
}

void MR_CALL 
mercury__array__do_fill_range_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Box Item_6,
  MR_Integer Lo_7,
  MR_Integer Hi_8,
  MR_ArrayPtr STATE_VARIABLE_Array_0_10,
  MR_ArrayPtr * STATE_VARIABLE_Array_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_7 <= Hi_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_ArrayPtr STATE_VARIABLE_Array_12_12;
      MR_Integer Var_13;
      MR_Integer next_value_of_Lo_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_10;

{
#define MR_PROC_LABEL mercury__array__do_fill_range_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Lo_7 ;
	Item = (MR_Word) Item_6 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_10 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_12_12  = (MR_Box) Array;
}
      Var_13 = (MR_Integer) ((MR_Unsigned) Lo_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Lo_7 = Var_13;
      next_value_of_STATE_VARIABLE_Array_0_10 = STATE_VARIABLE_Array_12_12;
      Lo_7 = next_value_of_Lo_7;
      STATE_VARIABLE_Array_0_10 = next_value_of_STATE_VARIABLE_Array_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Array_11 = STATE_VARIABLE_Array_0_10;
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__shrink_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_ArrayPtr STATE_VARIABLE_Array_0_6,
  MR_Integer N_5)
{
  MR_ArrayPtr STATE_VARIABLE_Array_7;

  mercury__array__shrink_3_p_0(TypeInfo_for_T_8, N_5, STATE_VARIABLE_Array_0_6, &STATE_VARIABLE_Array_7);
  return STATE_VARIABLE_Array_7;
}

void MR_CALL 
mercury__array__shrink_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Integer Size_4,
  MR_ArrayPtr STATE_VARIABLE_Array_0_7,
  MR_ArrayPtr * STATE_VARIABLE_Array_8)
{
  MR_bool succeeded;
  MR_Integer OldSize_6;

{
#define MR_PROC_LABEL mercury__array__shrink_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_7 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	OldSize_6  = Max;
}
  succeeded = (Size_4 < (MR_Integer) 0);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.shrink\'/3", (MR_String) "cannot shrink to a negative size");
      return;
    }
  else
  {
    succeeded = (Size_4 > OldSize_6);
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.shrink\'/3", (MR_String) "cannot shrink to a larger size");
        return;
      }
    else
    {
      succeeded = (Size_4 == OldSize_6);
      if (succeeded)
        *STATE_VARIABLE_Array_8 = STATE_VARIABLE_Array_0_7;
      else
      {
{
#define MR_PROC_LABEL mercury__array__shrink_3_p_0

	MR_Integer Size;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Size = Size_4 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_7 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_shrink_array(Array, Array0, Size);


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_Array_8  = (MR_Box) Array;
}
      }
    }
  }
}

void MR_CALL 
mercury__array__resize_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer N_5,
  MR_Box X_6,
  MR_ArrayPtr STATE_VARIABLE_Array_0_8,
  MR_ArrayPtr * STATE_VARIABLE_Array_9)
{
  MR_bool succeeded = (N_5 < (MR_Integer) 0);

  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.resize\'/4", (MR_String) "cannot resize to a negative size");
      return;
    }
  else
  {
{
#define MR_PROC_LABEL mercury__array__resize_4_p_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Size = N_5 ;
	Item = (MR_Word) X_6 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    if ((Array0)->size == Size) {
        Array = Array0;
    } else {
        ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
        ML_resize_array(Array, Array0, Size, Item);
    }


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_Array_9  = (MR_Box) Array;
}
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__resize_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_ArrayPtr STATE_VARIABLE_Array_0_8,
  MR_Integer N_6,
  MR_Box X_7)
{
  MR_bool succeeded = (N_6 < (MR_Integer) 0);
  MR_ArrayPtr STATE_VARIABLE_Array_9;

  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.resize\'/4", (MR_String) "cannot resize to a negative size");
  else
  {
{
#define MR_PROC_LABEL mercury__array__resize_3_f_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Size = N_6 ;
	Item = (MR_Word) X_7 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    if ((Array0)->size == Size) {
        Array = Array0;
    } else {
        ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
        ML_resize_array(Array, Array0, Size, Item);
    }


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_9  = (MR_Box) Array;
}
  }
  return STATE_VARIABLE_Array_9;
}

MR_ArrayPtr MR_CALL 
mercury__array__append_2_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  MR_ArrayPtr HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__array__append_2_f_0

	MR_ArrayPtr ArrayA;
	MR_ArrayPtr ArrayB;
	MR_ArrayPtr ArrayC;

	ArrayA = (MR_ArrayPtr)HeadVar__1_1 ;
	ArrayB = (MR_ArrayPtr)HeadVar__2_2 ;
		{

    MR_Integer sizeC;
    MR_Integer i;
    MR_Integer offset;

    sizeC = ArrayA->size + ArrayB->size;
    ML_alloc_array(ArrayC, sizeC + 1, MR_ALLOC_ID);

    ArrayC->size = sizeC;
    for (i = 0; i < ArrayA->size; i++) {
        ArrayC->elements[i] = ArrayA->elements[i];
    }

    offset = ArrayA->size;
    for (i = 0; i < ArrayB->size; i++) {
        ArrayC->elements[offset + i] = ArrayB->elements[i];
    }


		;}
#undef MR_PROC_LABEL
	HeadVar__3_3  = (MR_Box) ArrayC;
}
  return HeadVar__3_3;
}

MR_ArrayPtr MR_CALL 
mercury__array__copy_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_ArrayPtr A1_3)
{
  MR_ArrayPtr A2_4;

{
#define MR_PROC_LABEL mercury__array__copy_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)A1_3 ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	A2_4  = (MR_Box) Array;
}
  return A2_4;
}

void MR_CALL 
mercury__array__copy_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__array__copy_2_p_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)HeadVar__1_1 ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) Array;
}
}

MR_bool MR_CALL 
mercury__array__in_bounds_2_p_0(
  MR_Word TypeInfo_for__T_7,
  MR_ArrayPtr Array_3,
  MR_Integer Index_4)
{
  MR_bool succeeded;
  MR_Integer Min_5;
  MR_Integer Max_6;

{
#define MR_PROC_LABEL mercury__array__in_bounds_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_3 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_5  = Min;
}
{
#define MR_PROC_LABEL mercury__array__in_bounds_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_3 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_6  = Max;
}
  succeeded = (Min_5 <= Index_4);
  if (succeeded)
    succeeded = (Index_4 <= Max_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__is_empty_1_p_0(
  MR_Word TypeInfo_for__T_4,
  MR_ArrayPtr Array_2)
{
  MR_bool succeeded;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__array__is_empty_1_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_2 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_5  = Max;
}
  succeeded = ((MR_Integer) 0 == Var_5);
  return succeeded;
}

void MR_CALL 
mercury__array__size_2_p_0(
  MR_Word TypeInfo_for__T_3,
  MR_ArrayPtr HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__array__size_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)HeadVar__1_1 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = Max;
}
}

MR_Integer MR_CALL 
mercury__array__size_1_f_0(
  MR_Word TypeInfo_for__T_5,
  MR_ArrayPtr A_3)
{
  MR_Integer N_4;

{
#define MR_PROC_LABEL mercury__array__size_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	N_4  = Max;
}
  return N_4;
}

void MR_CALL 
mercury__array__bounds_3_p_0(
  MR_Word TypeInfo_for__T_7,
  MR_ArrayPtr Array_4,
  MR_Integer * Min_5,
  MR_Integer * Max_6)
{
{
#define MR_PROC_LABEL mercury__array__bounds_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	*Min_5  = Min;
}
{
#define MR_PROC_LABEL mercury__array__bounds_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	*Max_6  = Max;
}
}

MR_Integer MR_CALL 
mercury__array__det_greatest_index_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_ArrayPtr A_3)
{
  MR_bool succeeded;
  MR_Integer Index_4;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__array__det_greatest_index_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_10  = Max;
}
  succeeded = ((MR_Integer) 0 == Var_10);
  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "function \140array.det_greatest_index\'/1", (MR_String) "empty array");
  else
  {
{
#define MR_PROC_LABEL mercury__array__det_greatest_index_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Index_4  = Max;
}
  }
  return Index_4;
}

MR_bool MR_CALL 
mercury__array__semidet_greatest_index_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_ArrayPtr A_3,
  MR_Integer * Index_4)
{
  MR_bool succeeded;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__array__semidet_greatest_index_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_8  = Max;
}
  succeeded = ((MR_Integer) 0 == Var_8);
  if (succeeded)
    succeeded = MR_FALSE;
  else
  {
{
#define MR_PROC_LABEL mercury__array__semidet_greatest_index_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	*Index_4  = Max;
}
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Integer MR_CALL 
mercury__array__det_least_index_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_ArrayPtr A_3)
{
  MR_bool succeeded;
  MR_Integer Index_4;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__array__det_least_index_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_10  = Max;
}
  succeeded = ((MR_Integer) 0 == Var_10);
  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "function \140array.det_least_index\'/1", (MR_String) "empty array");
  else
  {
{
#define MR_PROC_LABEL mercury__array__det_least_index_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_3 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Index_4  = Min;
}
  }
  return Index_4;
}

MR_bool MR_CALL 
mercury__array__semidet_least_index_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_ArrayPtr A_3,
  MR_Integer * Index_4)
{
  MR_bool succeeded;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__array__semidet_least_index_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_8  = Max;
}
  succeeded = ((MR_Integer) 0 == Var_8);
  if (succeeded)
    succeeded = MR_FALSE;
  else
  {
{
#define MR_PROC_LABEL mercury__array__semidet_least_index_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_3 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	*Index_4  = Min;
}
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__array__max_2_p_0(
  MR_Word TypeInfo_for__T_3,
  MR_ArrayPtr HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__array__max_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)HeadVar__1_1 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = Max;
}
}

MR_Integer MR_CALL 
mercury__array__max_1_f_0(
  MR_Word TypeInfo_for__T_5,
  MR_ArrayPtr A_3)
{
  MR_Integer N_4;

{
#define MR_PROC_LABEL mercury__array__max_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)A_3 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	N_4  = Max;
}
  return N_4;
}

void MR_CALL 
mercury__array__min_2_p_0(
  MR_Word TypeInfo_for__T_3,
  MR_ArrayPtr HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__array__min_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)HeadVar__1_1 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = Min;
}
}

MR_Integer MR_CALL 
mercury__array__min_1_f_0(
  MR_Word TypeInfo_for__T_5,
  MR_ArrayPtr A_3)
{
  MR_Integer N_4;

{
#define MR_PROC_LABEL mercury__array__min_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)A_3 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	N_4  = Min;
}
  return N_4;
}

void MR_CALL 
mercury__array__unsafe_swap_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer I_5,
  MR_Integer J_6,
  MR_ArrayPtr STATE_VARIABLE_Array_0_10,
  MR_ArrayPtr * STATE_VARIABLE_Array_11)
{
  MR_Box IVal_8;
  MR_Box JVal_9;
  MR_ArrayPtr STATE_VARIABLE_Array_12_12;

{
#define MR_PROC_LABEL mercury__array__unsafe_swap_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_10 ;
	Index = I_5 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	IVal_8  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__unsafe_swap_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_10 ;
	Index = J_6 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	JVal_9  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__unsafe_swap_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = I_5 ;
	Item = (MR_Word) JVal_9 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_10 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_12_12  = (MR_Box) Array;
}
{
#define MR_PROC_LABEL mercury__array__unsafe_swap_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = J_6 ;
	Item = (MR_Word) IVal_8 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_12_12 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_Array_11  = (MR_Box) Array;
}
}

void MR_CALL 
mercury__array__swap_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Integer I_5,
  MR_Integer J_6,
  MR_ArrayPtr STATE_VARIABLE_Array_0_8,
  MR_ArrayPtr * STATE_VARIABLE_Array_9)
{
  MR_bool succeeded;
  MR_Integer Min_17;
  MR_Integer Max_18;

{
#define MR_PROC_LABEL mercury__array__swap_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_17  = Min;
}
{
#define MR_PROC_LABEL mercury__array__swap_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_18  = Max;
}
  succeeded = (Min_17 <= I_5);
  if (succeeded)
    succeeded = (I_5 <= Max_18);
  succeeded = !(succeeded);
  if (succeeded)
    {
      mercury__array__arg_out_of_bounds_error_4_p_0(TypeInfo_for_T_14, STATE_VARIABLE_Array_0_8, (MR_String) "first", (MR_String) "array.swap", I_5);
      return;
    }
  else
  {
    MR_Integer Min_24;
    MR_Integer Max_25;

{
#define MR_PROC_LABEL mercury__array__swap_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_24  = Min;
}
{
#define MR_PROC_LABEL mercury__array__swap_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_25  = Max;
}
    succeeded = (Min_24 <= J_6);
    if (succeeded)
      succeeded = (J_6 <= Max_25);
    succeeded = !(succeeded);
    if (succeeded)
      {
        mercury__array__arg_out_of_bounds_error_4_p_0(TypeInfo_for_T_14, STATE_VARIABLE_Array_0_8, (MR_String) "second", (MR_String) "array.swap", J_6);
        return;
      }
    else
    {
      MR_Box IVal_34;
      MR_Box JVal_35;
      MR_ArrayPtr STATE_VARIABLE_Array_12_36;

{
#define MR_PROC_LABEL mercury__array__swap_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
	Index = I_5 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	IVal_34  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__swap_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
	Index = J_6 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	JVal_35  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__swap_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = I_5 ;
	Item = (MR_Word) JVal_35 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_12_36  = (MR_Box) Array;
}
{
#define MR_PROC_LABEL mercury__array__swap_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = J_6 ;
	Item = (MR_Word) IVal_34 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_12_36 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_Array_9  = (MR_Box) Array;
}
    }
  }
}

static void MR_CALL 
mercury__array__arg_out_of_bounds_error_4_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_ArrayPtr Array_5,
  MR_String ArgPosn_6,
  MR_String PredName_7,
  MR_Integer Index_8)
{
  MR_Integer Min_9;
  MR_Integer Max_10;
  MR_String Msg_11;
  MR_Word Var_24;
  MR_String Var_28;
  MR_String Var_35;
  MR_String Var_37;
  MR_String Var_38;
  MR_String Var_45;
  MR_String Var_47;
  MR_String Var_48;
  MR_String Var_55;
  MR_String Var_57;
  MR_String Var_58;
  MR_String Var_60;

{
#define MR_PROC_LABEL mercury__array__arg_out_of_bounds_error_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_5 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_9  = Min;
}
{
#define MR_PROC_LABEL mercury__array__arg_out_of_bounds_error_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_5 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_10  = Max;
}
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__array_scalar_common_4[4]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Max_10, &Var_28);
  mercury__string__append_3_p_2(Var_28, (MR_String) "]", &Var_35);
  mercury__string__append_3_p_2((MR_String) ", ", Var_35, &Var_37);
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__array_scalar_common_4[4]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Min_9, &Var_38);
  mercury__string__append_3_p_2(Var_38, Var_37, &Var_45);
  mercury__string__append_3_p_2((MR_String) " not in range [", Var_45, &Var_47);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__array_scalar_common_4[4]), Index_8, &Var_48);
  Var_55 = mercury__string__f_43_43_2_f_0(Var_48, Var_47);
  Var_57 = mercury__string__f_43_43_2_f_0((MR_String) ": index ", Var_55);
  Var_58 = mercury__string__f_43_43_2_f_0(PredName_7, Var_57);
  Var_60 = mercury__string__f_43_43_2_f_0((MR_String) " argument of ", Var_58);
  Msg_11 = mercury__string__f_43_43_2_f_0(ArgPosn_6, Var_60);
  Var_24 = (MR_Word) (Msg_11);
  {
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__array__array__type_ctor_info_index_out_of_bounds_0), ((MR_Box) (Var_24)));
    return;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Integer Index_5,
  MR_ArrayPtr STATE_VARIABLE_Array_0_8,
  MR_Box Value_7)
{
  MR_ArrayPtr STATE_VARIABLE_Array_9;

{
#define MR_PROC_LABEL mercury__array__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_3_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_5 ;
	Item = (MR_Word) Value_7 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_9  = (MR_Box) Array;
}
  return STATE_VARIABLE_Array_9;
}

MR_ArrayPtr MR_CALL 
mercury__array__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Integer Index_5,
  MR_ArrayPtr STATE_VARIABLE_Array_0_8,
  MR_Box Value_7)
{
  MR_ArrayPtr STATE_VARIABLE_Array_9;

  mercury__array__set_4_p_0(TypeInfo_for_T_10, Index_5, Value_7, STATE_VARIABLE_Array_0_8, &STATE_VARIABLE_Array_9);
  return STATE_VARIABLE_Array_9;
}

MR_bool MR_CALL 
mercury__array__semidet_slow_set_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Integer Index_5,
  MR_Box Item_6,
  MR_ArrayPtr STATE_VARIABLE_Array_0_8,
  MR_ArrayPtr * STATE_VARIABLE_Array_9)
{
  MR_bool succeeded;
  MR_Integer Min_13;
  MR_Integer Max_14;
  MR_ArrayPtr STATE_VARIABLE_Array_10_23;

{
#define MR_PROC_LABEL mercury__array__semidet_slow_set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_13  = Min;
}
{
#define MR_PROC_LABEL mercury__array__semidet_slow_set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_14  = Max;
}
  succeeded = (Min_13 <= Index_5);
  if (succeeded)
  {
    succeeded = (Index_5 <= Max_14);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__array__semidet_slow_set_4_p_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_10_23  = (MR_Box) Array;
}
      mercury__array__set_4_p_0(TypeInfo_for_T_10, Index_5, Item_6, STATE_VARIABLE_Array_10_23, STATE_VARIABLE_Array_9);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__array__slow_set_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Integer Index_5,
  MR_Box Item_6,
  MR_ArrayPtr STATE_VARIABLE_Array_0_8,
  MR_ArrayPtr * STATE_VARIABLE_Array_9)
{
  MR_ArrayPtr STATE_VARIABLE_Array_10_10;

{
#define MR_PROC_LABEL mercury__array__slow_set_4_p_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_10_10  = (MR_Box) Array;
}
  mercury__array__set_4_p_0(TypeInfo_for_T_11, Index_5, Item_6, STATE_VARIABLE_Array_10_10, STATE_VARIABLE_Array_9);
}

MR_ArrayPtr MR_CALL 
mercury__array__slow_set_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_ArrayPtr STATE_VARIABLE_Array_0_8,
  MR_Integer N_6,
  MR_Box X_7)
{
  MR_ArrayPtr STATE_VARIABLE_Array_9;
  MR_ArrayPtr STATE_VARIABLE_Array_10_16;

{
#define MR_PROC_LABEL mercury__array__slow_set_3_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_10_16  = (MR_Box) Array;
}
  mercury__array__set_4_p_0(TypeInfo_for_T_10, N_6, X_7, STATE_VARIABLE_Array_10_16, &STATE_VARIABLE_Array_9);
  return STATE_VARIABLE_Array_9;
}

void MR_CALL 
mercury__array__unsafe_set_4_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3,
  MR_ArrayPtr * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__array__unsafe_set_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = HeadVar__1_1 ;
	Item = (MR_Word) HeadVar__2_2 ;
	Array0 = (MR_ArrayPtr)HeadVar__3_3 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) Array;
}
}

MR_bool MR_CALL 
mercury__array__semidet_set_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Integer Index_5,
  MR_Box Item_6,
  MR_ArrayPtr STATE_VARIABLE_Array_0_8,
  MR_ArrayPtr * STATE_VARIABLE_Array_9)
{
  MR_bool succeeded;
  MR_Integer Min_13;
  MR_Integer Max_14;

{
#define MR_PROC_LABEL mercury__array__semidet_set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_13  = Min;
}
{
#define MR_PROC_LABEL mercury__array__semidet_set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_14  = Max;
}
  succeeded = (Min_13 <= Index_5);
  if (succeeded)
  {
    succeeded = (Index_5 <= Max_14);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__array__semidet_set_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_5 ;
	Item = (MR_Word) Item_6 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_Array_9  = (MR_Box) Array;
}
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_ArrayPtr MR_CALL 
mercury__array__set_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_ArrayPtr A1_5,
  MR_Integer N_6,
  MR_Box X_7)
{
  MR_ArrayPtr A2_8;

  mercury__array__set_4_p_0(TypeInfo_for_T_9, N_6, X_7, A1_5, &A2_8);
  return A2_8;
}

void MR_CALL 
mercury__array__set_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Integer Index_5,
  MR_Box Item_6,
  MR_ArrayPtr STATE_VARIABLE_Array_0_8,
  MR_ArrayPtr * STATE_VARIABLE_Array_9)
{
  MR_bool succeeded;
  MR_Integer Min_14;
  MR_Integer Max_15;

{
#define MR_PROC_LABEL mercury__array__set_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_ARRAY_BOUNDS_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__array__set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_14  = Min;
}
{
#define MR_PROC_LABEL mercury__array__set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_15  = Max;
}
    succeeded = (Min_14 <= Index_5);
    if (succeeded)
      succeeded = (Index_5 <= Max_15);
    succeeded = !(succeeded);
  }
  if (succeeded)
    {
      mercury__array__out_of_bounds_error_3_p_0(TypeInfo_for_T_11, STATE_VARIABLE_Array_0_8, Index_5, (MR_String) "array.set");
      return;
    }
  else
  {
{
#define MR_PROC_LABEL mercury__array__set_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_5 ;
	Item = (MR_Word) Item_6 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_8 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_Array_9  = (MR_Box) Array;
}
  }
}

static void MR_CALL 
mercury__array__member_2_p_0_1(
  void * env_ptr_arg)
{
  struct mercury__array__member_2_p_0_env_0_s * env_ptr = (struct mercury__array__member_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word TypeInfo_for_T_15;

{
#define MR_PROC_LABEL mercury__array__member_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(env_ptr)->mercury__array__member_2_p_0_env_0__A_3 ;
	Index = (env_ptr)->mercury__array__member_2_p_0_env_0__N_5 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	*((env_ptr)->mercury__array__member_2_p_0_env_0__X_4)  = (MR_Box) Item;
}
    ((env_ptr)->mercury__array__member_2_p_0_env_0__cont)((env_ptr)->mercury__array__member_2_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__array__member_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_ArrayPtr A_3,
  MR_Box * X_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__array__member_2_p_0_env_0_s env;

  (env).mercury__array__member_2_p_0_env_0__A_3 = A_3;
  (env).mercury__array__member_2_p_0_env_0__X_4 = X_4;
  (env).mercury__array__member_2_p_0_env_0__cont = cont;
  (env).mercury__array__member_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Integer Var_6;
    MR_Integer Var_7;
    MR_Word TypeInfo_for_T_13;
    MR_Word TypeInfo_for_T_14;

{
#define MR_PROC_LABEL mercury__array__member_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(env).mercury__array__member_2_p_0_env_0__A_3 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_6  = Min;
}
{
#define MR_PROC_LABEL mercury__array__member_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(env).mercury__array__member_2_p_0_env_0__A_3 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_7  = Max;
}
    mercury__int__nondet_int_in_range_3_p_0(Var_6, Var_7, &(env).mercury__array__member_2_p_0_env_0__N_5, mercury__array__member_2_p_0_1, &env);
  }
}

MR_Box MR_CALL 
mercury__array__unsafe_elem_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Integer Index_4,
  MR_ArrayPtr Array_5)
{
  MR_Box Elem_6;

{
#define MR_PROC_LABEL mercury__array__unsafe_elem_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array_5 ;
	Index = Index_4 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Elem_6  = (MR_Box) Item;
}
  return Elem_6;
}

MR_Box MR_CALL 
mercury__array__elem_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Integer Index_4,
  MR_ArrayPtr Array_5)
{
  MR_Box Elem_6;

  mercury__array__lookup_3_p_0(TypeInfo_for_T_7, Array_5, Index_4, &Elem_6);
  return Elem_6;
}

void MR_CALL 
mercury__array__unsafe_lookup_3_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_ArrayPtr HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
{
#define MR_PROC_LABEL mercury__array__unsafe_lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)HeadVar__1_1 ;
	Index = HeadVar__2_2 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = (MR_Box) Item;
}
}

MR_bool MR_CALL 
mercury__array__semidet_lookup_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_ArrayPtr Array_4,
  MR_Integer Index_5,
  MR_Box * Item_6)
{
  MR_bool succeeded;
  MR_Integer Min_10;
  MR_Integer Max_11;

{
#define MR_PROC_LABEL mercury__array__semidet_lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__semidet_lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_11  = Max;
}
  succeeded = (Min_10 <= Index_5);
  if (succeeded)
  {
    succeeded = (Index_5 <= Max_11);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__array__semidet_lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array_4 ;
	Index = Index_5 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	*Item_6  = (MR_Box) Item;
}
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Box MR_CALL 
mercury__array__lookup_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_ArrayPtr Array_4,
  MR_Integer N_5)
{
  MR_Box X_6;

  mercury__array__lookup_3_p_0(TypeInfo_for_T_7, Array_4, N_5, &X_6);
  return X_6;
}

void MR_CALL 
mercury__array__lookup_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_ArrayPtr Array_4,
  MR_Integer Index_5,
  MR_Box * Item_6)
{
  MR_bool succeeded;
  MR_Integer Min_11;
  MR_Integer Max_12;

{
#define MR_PROC_LABEL mercury__array__lookup_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_ARRAY_BOUNDS_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__array__lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_11  = Min;
}
{
#define MR_PROC_LABEL mercury__array__lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_12  = Max;
}
    succeeded = (Min_11 <= Index_5);
    if (succeeded)
      succeeded = (Index_5 <= Max_12);
    succeeded = !(succeeded);
  }
  if (succeeded)
    {
      mercury__array__out_of_bounds_error_3_p_0(TypeInfo_for_T_8, Array_4, Index_5, (MR_String) "array.lookup");
      return;
    }
  else
  {
{
#define MR_PROC_LABEL mercury__array__lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)Array_4 ;
	Index = Index_5 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	*Item_6  = (MR_Box) Item;
}
  }
}

void MR_CALL 
mercury__array__out_of_bounds_error_3_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_ArrayPtr Array_4,
  MR_Integer Index_5,
  MR_String PredName_6)
{
  MR_Integer Min_7;
  MR_Integer Max_8;
  MR_String Msg_9;
  MR_Word Var_20;
  MR_String Var_24;
  MR_String Var_31;
  MR_String Var_33;
  MR_String Var_34;
  MR_String Var_41;
  MR_String Var_43;
  MR_String Var_44;
  MR_String Var_51;
  MR_String Var_53;

{
#define MR_PROC_LABEL mercury__array__out_of_bounds_error_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Min_7  = Min;
}
{
#define MR_PROC_LABEL mercury__array__out_of_bounds_error_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)Array_4 ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Max_8  = Max;
}
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__array_scalar_common_4[4]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Max_8, &Var_24);
  mercury__string__append_3_p_2(Var_24, (MR_String) "]", &Var_31);
  mercury__string__append_3_p_2((MR_String) ", ", Var_31, &Var_33);
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__array_scalar_common_4[4]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Min_7, &Var_34);
  mercury__string__append_3_p_2(Var_34, Var_33, &Var_41);
  mercury__string__append_3_p_2((MR_String) " not in range [", Var_41, &Var_43);
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__array_scalar_common_4[4]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Index_5, &Var_44);
  Var_51 = mercury__string__f_43_43_2_f_0(Var_44, Var_43);
  Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ": index ", Var_51);
  Msg_9 = mercury__string__f_43_43_2_f_0(PredName_6, Var_53);
  Var_20 = (MR_Word) (Msg_9);
  {
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__array__array__type_ctor_info_index_out_of_bounds_0), ((MR_Box) (Var_20)));
    return;
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl2_7_p_5(
  MR_Word TypeInfo_for_T_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Integer Size_8,
  MR_Word GenPred_9,
  MR_ArrayPtr * Array_10,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17,
  MR_Box STATE_VARIABLE_AccB_0_18,
  MR_Box * STATE_VARIABLE_AccB_19)
{
  MR_bool succeeded = (Size_8 < (MR_Integer) 0);
  MR_Word Result_13;

  if (succeeded)
    Result_13 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_8 == (MR_Integer) 0);
    if (succeeded)
      Result_13 = (MR_Integer) 0;
    else
      Result_13 = (MR_Integer) 2;
  }
  switch (Result_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl2\'/7", (MR_String) "negative size");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_5

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_10  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
        *STATE_VARIABLE_AccB_19 = STATE_VARIABLE_AccB_0_18;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_14;
        MR_ArrayPtr Array0_15;
        MR_Box STATE_VARIABLE_AccA_24_24;
        MR_Box STATE_VARIABLE_AccB_25_25;
        MR_Integer Var_26;
        MR_Integer Var_27;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_9, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (GenPred_9)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_14, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccB_0_18, &STATE_VARIABLE_AccB_25_25);
        if (succeeded)
        {
          Var_26 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_5

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_8 ;
	FirstElem = (MR_Word) FirstElem_14 ;
	IndexToSet = Var_26 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_15  = (MR_Box) Array;
}
          Var_27 = (MR_Integer) 1;
          succeeded = mercury__array__generate_foldl2_loop_9_p_5(TypeInfo_for_T_28, TypeInfo_for_A_29, TypeInfo_for_B_30, GenPred_9, Var_27, Size_8, Array0_15, Array_10, STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccA_17, STATE_VARIABLE_AccB_25_25, STATE_VARIABLE_AccB_19);
        }
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__generate_foldl2_loop_9_p_5(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word GenPred_10,
  MR_Integer Index_11,
  MR_Integer Size_12,
  MR_ArrayPtr STATE_VARIABLE_Array_0_17,
  MR_ArrayPtr * STATE_VARIABLE_Array_18,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_11 < Size_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_16;
      MR_Box STATE_VARIABLE_AccA_23_23;
      MR_Box STATE_VARIABLE_AccB_24_24;
      MR_ArrayPtr STATE_VARIABLE_Array_25_25;
      MR_Integer Var_26;
      MR_Integer Var_30;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_10, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_17;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_19;
      MR_Box next_value_of_STATE_VARIABLE_AccB_0_21;

      succeeded = func_0(((MR_Box) (GenPred_10)), ((MR_Box) (Index_11)), &Elem_16, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_23_23, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_24_24);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_loop_9_p_5

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_11 ;
	Item = (MR_Word) Elem_16 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_17 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_25_25  = (MR_Box) Array;
}
        Var_30 = (MR_Integer) 1;
        Var_26 = (MR_Integer) ((MR_Unsigned) Index_11 + (MR_Unsigned) Var_30);
        // direct tailcall eliminated
        ;
        next_value_of_Index_11 = Var_26;
        next_value_of_STATE_VARIABLE_Array_0_17 = STATE_VARIABLE_Array_25_25;
        next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_23_23;
        next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_24_24;
        Index_11 = next_value_of_Index_11;
        STATE_VARIABLE_Array_0_17 = next_value_of_STATE_VARIABLE_Array_0_17;
        STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
        STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_0_21;
      *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_0_19;
      *STATE_VARIABLE_Array_18 = STATE_VARIABLE_Array_0_17;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl2_7_p_4(
  MR_Word TypeInfo_for_T_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Integer Size_8,
  MR_Word GenPred_9,
  MR_ArrayPtr * Array_10,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17,
  MR_Box STATE_VARIABLE_AccB_0_18,
  MR_Box * STATE_VARIABLE_AccB_19)
{
  MR_bool succeeded = (Size_8 < (MR_Integer) 0);
  MR_Word Result_13;

  if (succeeded)
    Result_13 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_8 == (MR_Integer) 0);
    if (succeeded)
      Result_13 = (MR_Integer) 0;
    else
      Result_13 = (MR_Integer) 2;
  }
  switch (Result_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl2\'/7", (MR_String) "negative size");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_4

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_10  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
        *STATE_VARIABLE_AccB_19 = STATE_VARIABLE_AccB_0_18;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_14;
        MR_ArrayPtr Array0_15;
        MR_Box STATE_VARIABLE_AccA_24_24;
        MR_Box STATE_VARIABLE_AccB_25_25;
        MR_Integer Var_26;
        MR_Integer Var_27;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_9, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (GenPred_9)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_14, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccB_0_18, &STATE_VARIABLE_AccB_25_25);
        if (succeeded)
        {
          Var_26 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_4

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_8 ;
	FirstElem = (MR_Word) FirstElem_14 ;
	IndexToSet = Var_26 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_15  = (MR_Box) Array;
}
          Var_27 = (MR_Integer) 1;
          succeeded = mercury__array__generate_foldl2_loop_9_p_4(TypeInfo_for_T_28, TypeInfo_for_A_29, TypeInfo_for_B_30, GenPred_9, Var_27, Size_8, Array0_15, Array_10, STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccA_17, STATE_VARIABLE_AccB_25_25, STATE_VARIABLE_AccB_19);
        }
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__generate_foldl2_loop_9_p_4(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word GenPred_10,
  MR_Integer Index_11,
  MR_Integer Size_12,
  MR_ArrayPtr STATE_VARIABLE_Array_0_17,
  MR_ArrayPtr * STATE_VARIABLE_Array_18,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_11 < Size_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_16;
      MR_Box STATE_VARIABLE_AccA_23_23;
      MR_Box STATE_VARIABLE_AccB_24_24;
      MR_ArrayPtr STATE_VARIABLE_Array_25_25;
      MR_Integer Var_26;
      MR_Integer Var_30;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_10, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_17;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_19;
      MR_Box next_value_of_STATE_VARIABLE_AccB_0_21;

      succeeded = func_0(((MR_Box) (GenPred_10)), ((MR_Box) (Index_11)), &Elem_16, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_23_23, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_24_24);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_loop_9_p_4

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_11 ;
	Item = (MR_Word) Elem_16 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_17 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_25_25  = (MR_Box) Array;
}
        Var_30 = (MR_Integer) 1;
        Var_26 = (MR_Integer) ((MR_Unsigned) Index_11 + (MR_Unsigned) Var_30);
        // direct tailcall eliminated
        ;
        next_value_of_Index_11 = Var_26;
        next_value_of_STATE_VARIABLE_Array_0_17 = STATE_VARIABLE_Array_25_25;
        next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_23_23;
        next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_24_24;
        Index_11 = next_value_of_Index_11;
        STATE_VARIABLE_Array_0_17 = next_value_of_STATE_VARIABLE_Array_0_17;
        STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
        STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_0_21;
      *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_0_19;
      *STATE_VARIABLE_Array_18 = STATE_VARIABLE_Array_0_17;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl2_7_p_3(
  MR_Word TypeInfo_for_T_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Integer Size_8,
  MR_Word GenPred_9,
  MR_ArrayPtr * Array_10,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17,
  MR_Box STATE_VARIABLE_AccB_0_18,
  MR_Box * STATE_VARIABLE_AccB_19)
{
  MR_bool succeeded = (Size_8 < (MR_Integer) 0);
  MR_Word Result_13;

  if (succeeded)
    Result_13 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_8 == (MR_Integer) 0);
    if (succeeded)
      Result_13 = (MR_Integer) 0;
    else
      Result_13 = (MR_Integer) 2;
  }
  switch (Result_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl2\'/7", (MR_String) "negative size");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_3

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_10  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
        *STATE_VARIABLE_AccB_19 = STATE_VARIABLE_AccB_0_18;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_14;
        MR_ArrayPtr Array0_15;
        MR_Box STATE_VARIABLE_AccA_24_24;
        MR_Box STATE_VARIABLE_AccB_25_25;
        MR_Integer Var_26;
        MR_Integer Var_27;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_9, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (GenPred_9)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_14, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccB_0_18, &STATE_VARIABLE_AccB_25_25);
        if (succeeded)
        {
          Var_26 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_3

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_8 ;
	FirstElem = (MR_Word) FirstElem_14 ;
	IndexToSet = Var_26 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_15  = (MR_Box) Array;
}
          Var_27 = (MR_Integer) 1;
          succeeded = mercury__array__generate_foldl2_loop_9_p_3(TypeInfo_for_T_28, TypeInfo_for_A_29, TypeInfo_for_B_30, GenPred_9, Var_27, Size_8, Array0_15, Array_10, STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccA_17, STATE_VARIABLE_AccB_25_25, STATE_VARIABLE_AccB_19);
        }
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__generate_foldl2_loop_9_p_3(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word GenPred_10,
  MR_Integer Index_11,
  MR_Integer Size_12,
  MR_ArrayPtr STATE_VARIABLE_Array_0_17,
  MR_ArrayPtr * STATE_VARIABLE_Array_18,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_11 < Size_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_16;
      MR_Box STATE_VARIABLE_AccA_23_23;
      MR_Box STATE_VARIABLE_AccB_24_24;
      MR_ArrayPtr STATE_VARIABLE_Array_25_25;
      MR_Integer Var_26;
      MR_Integer Var_30;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_10, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_17;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_19;
      MR_Box next_value_of_STATE_VARIABLE_AccB_0_21;

      succeeded = func_0(((MR_Box) (GenPred_10)), ((MR_Box) (Index_11)), &Elem_16, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_23_23, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_24_24);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_loop_9_p_3

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_11 ;
	Item = (MR_Word) Elem_16 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_17 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_25_25  = (MR_Box) Array;
}
        Var_30 = (MR_Integer) 1;
        Var_26 = (MR_Integer) ((MR_Unsigned) Index_11 + (MR_Unsigned) Var_30);
        // direct tailcall eliminated
        ;
        next_value_of_Index_11 = Var_26;
        next_value_of_STATE_VARIABLE_Array_0_17 = STATE_VARIABLE_Array_25_25;
        next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_23_23;
        next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_24_24;
        Index_11 = next_value_of_Index_11;
        STATE_VARIABLE_Array_0_17 = next_value_of_STATE_VARIABLE_Array_0_17;
        STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
        STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_0_21;
      *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_0_19;
      *STATE_VARIABLE_Array_18 = STATE_VARIABLE_Array_0_17;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__generate_foldl2_7_p_2(
  MR_Word TypeInfo_for_T_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Integer Size_8,
  MR_Word GenPred_9,
  MR_ArrayPtr * Array_10,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17,
  MR_Box STATE_VARIABLE_AccB_0_18,
  MR_Box * STATE_VARIABLE_AccB_19)
{
  MR_bool succeeded = (Size_8 < (MR_Integer) 0);
  MR_Word Result_13;

  if (succeeded)
    Result_13 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_8 == (MR_Integer) 0);
    if (succeeded)
      Result_13 = (MR_Integer) 0;
    else
      Result_13 = (MR_Integer) 2;
  }
  switch (Result_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl2\'/7", (MR_String) "negative size");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_2

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_10  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
        *STATE_VARIABLE_AccB_19 = STATE_VARIABLE_AccB_0_18;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_14;
        MR_ArrayPtr Array0_15;
        MR_Box STATE_VARIABLE_AccA_24_24;
        MR_Box STATE_VARIABLE_AccB_25_25;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_9, (MR_Integer) 1))));

        func_0(((MR_Box) (GenPred_9)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_14, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccB_0_18, &STATE_VARIABLE_AccB_25_25);
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_2

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_8 ;
	FirstElem = (MR_Word) FirstElem_14 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_15  = (MR_Box) Array;
}
        mercury__array__generate_foldl2_loop_9_p_2(TypeInfo_for_T_28, TypeInfo_for_A_29, TypeInfo_for_B_30, GenPred_9, (MR_Integer) 1, Size_8, Array0_15, Array_10, STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccA_17, STATE_VARIABLE_AccB_25_25, STATE_VARIABLE_AccB_19);
      }
      break;
  }
}

void MR_CALL 
mercury__array__generate_foldl2_loop_9_p_2(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word GenPred_10,
  MR_Integer Index_11,
  MR_Integer Size_12,
  MR_ArrayPtr STATE_VARIABLE_Array_0_17,
  MR_ArrayPtr * STATE_VARIABLE_Array_18,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_11 < Size_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_16;
      MR_Box STATE_VARIABLE_AccA_23_23;
      MR_Box STATE_VARIABLE_AccB_24_24;
      MR_ArrayPtr STATE_VARIABLE_Array_25_25;
      MR_Integer Var_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_10, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_17;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_19;
      MR_Box next_value_of_STATE_VARIABLE_AccB_0_21;

      func_0(((MR_Box) (GenPred_10)), ((MR_Box) (Index_11)), &Elem_16, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_23_23, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_24_24);
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_loop_9_p_2

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_11 ;
	Item = (MR_Word) Elem_16 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_17 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_25_25  = (MR_Box) Array;
}
      Var_26 = (MR_Integer) ((MR_Unsigned) Index_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_11 = Var_26;
      next_value_of_STATE_VARIABLE_Array_0_17 = STATE_VARIABLE_Array_25_25;
      next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_23_23;
      next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_24_24;
      Index_11 = next_value_of_Index_11;
      STATE_VARIABLE_Array_0_17 = next_value_of_STATE_VARIABLE_Array_0_17;
      STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
      STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_0_21;
      *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_0_19;
      *STATE_VARIABLE_Array_18 = STATE_VARIABLE_Array_0_17;
    }
    break;
  }
}

void MR_CALL 
mercury__array__generate_foldl2_7_p_1(
  MR_Word TypeInfo_for_T_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Integer Size_8,
  MR_Word GenPred_9,
  MR_ArrayPtr * Array_10,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17,
  MR_Box STATE_VARIABLE_AccB_0_18,
  MR_Box * STATE_VARIABLE_AccB_19)
{
  MR_bool succeeded = (Size_8 < (MR_Integer) 0);
  MR_Word Result_13;

  if (succeeded)
    Result_13 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_8 == (MR_Integer) 0);
    if (succeeded)
      Result_13 = (MR_Integer) 0;
    else
      Result_13 = (MR_Integer) 2;
  }
  switch (Result_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl2\'/7", (MR_String) "negative size");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_1

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_10  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
        *STATE_VARIABLE_AccB_19 = STATE_VARIABLE_AccB_0_18;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_14;
        MR_ArrayPtr Array0_15;
        MR_Box STATE_VARIABLE_AccA_24_24;
        MR_Box STATE_VARIABLE_AccB_25_25;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_9, (MR_Integer) 1))));

        func_0(((MR_Box) (GenPred_9)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_14, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccB_0_18, &STATE_VARIABLE_AccB_25_25);
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_1

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_8 ;
	FirstElem = (MR_Word) FirstElem_14 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_15  = (MR_Box) Array;
}
        mercury__array__generate_foldl2_loop_9_p_1(TypeInfo_for_T_28, TypeInfo_for_A_29, TypeInfo_for_B_30, GenPred_9, (MR_Integer) 1, Size_8, Array0_15, Array_10, STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccA_17, STATE_VARIABLE_AccB_25_25, STATE_VARIABLE_AccB_19);
      }
      break;
  }
}

void MR_CALL 
mercury__array__generate_foldl2_loop_9_p_1(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word GenPred_10,
  MR_Integer Index_11,
  MR_Integer Size_12,
  MR_ArrayPtr STATE_VARIABLE_Array_0_17,
  MR_ArrayPtr * STATE_VARIABLE_Array_18,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_11 < Size_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_16;
      MR_Box STATE_VARIABLE_AccA_23_23;
      MR_Box STATE_VARIABLE_AccB_24_24;
      MR_ArrayPtr STATE_VARIABLE_Array_25_25;
      MR_Integer Var_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_10, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_17;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_19;
      MR_Box next_value_of_STATE_VARIABLE_AccB_0_21;

      func_0(((MR_Box) (GenPred_10)), ((MR_Box) (Index_11)), &Elem_16, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_23_23, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_24_24);
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_loop_9_p_1

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_11 ;
	Item = (MR_Word) Elem_16 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_17 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_25_25  = (MR_Box) Array;
}
      Var_26 = (MR_Integer) ((MR_Unsigned) Index_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_11 = Var_26;
      next_value_of_STATE_VARIABLE_Array_0_17 = STATE_VARIABLE_Array_25_25;
      next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_23_23;
      next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_24_24;
      Index_11 = next_value_of_Index_11;
      STATE_VARIABLE_Array_0_17 = next_value_of_STATE_VARIABLE_Array_0_17;
      STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
      STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_0_21;
      *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_0_19;
      *STATE_VARIABLE_Array_18 = STATE_VARIABLE_Array_0_17;
    }
    break;
  }
}

void MR_CALL 
mercury__array__generate_foldl2_7_p_0(
  MR_Word TypeInfo_for_T_28,
  MR_Word TypeInfo_for_A_29,
  MR_Word TypeInfo_for_B_30,
  MR_Integer Size_8,
  MR_Word GenPred_9,
  MR_ArrayPtr * Array_10,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17,
  MR_Box STATE_VARIABLE_AccB_0_18,
  MR_Box * STATE_VARIABLE_AccB_19)
{
  MR_bool succeeded = (Size_8 < (MR_Integer) 0);
  MR_Word Result_13;

  if (succeeded)
    Result_13 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_8 == (MR_Integer) 0);
    if (succeeded)
      Result_13 = (MR_Integer) 0;
    else
      Result_13 = (MR_Integer) 2;
  }
  switch (Result_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl2\'/7", (MR_String) "negative size");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_10  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
        *STATE_VARIABLE_AccB_19 = STATE_VARIABLE_AccB_0_18;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_14;
        MR_ArrayPtr Array0_15;
        MR_Box STATE_VARIABLE_AccA_24_24;
        MR_Box STATE_VARIABLE_AccB_25_25;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_9, (MR_Integer) 1))));

        func_0(((MR_Box) (GenPred_9)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_14, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccB_0_18, &STATE_VARIABLE_AccB_25_25);
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_7_p_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_8 ;
	FirstElem = (MR_Word) FirstElem_14 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_15  = (MR_Box) Array;
}
        mercury__array__generate_foldl2_loop_9_p_0(TypeInfo_for_T_28, TypeInfo_for_A_29, TypeInfo_for_B_30, GenPred_9, (MR_Integer) 1, Size_8, Array0_15, Array_10, STATE_VARIABLE_AccA_24_24, STATE_VARIABLE_AccA_17, STATE_VARIABLE_AccB_25_25, STATE_VARIABLE_AccB_19);
      }
      break;
  }
}

void MR_CALL 
mercury__array__generate_foldl2_loop_9_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word GenPred_10,
  MR_Integer Index_11,
  MR_Integer Size_12,
  MR_ArrayPtr STATE_VARIABLE_Array_0_17,
  MR_ArrayPtr * STATE_VARIABLE_Array_18,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_11 < Size_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_16;
      MR_Box STATE_VARIABLE_AccA_23_23;
      MR_Box STATE_VARIABLE_AccB_24_24;
      MR_ArrayPtr STATE_VARIABLE_Array_25_25;
      MR_Integer Var_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_10, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_11;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_17;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_19;
      MR_Box next_value_of_STATE_VARIABLE_AccB_0_21;

      func_0(((MR_Box) (GenPred_10)), ((MR_Box) (Index_11)), &Elem_16, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_23_23, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_24_24);
{
#define MR_PROC_LABEL mercury__array__generate_foldl2_loop_9_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_11 ;
	Item = (MR_Word) Elem_16 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_17 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_25_25  = (MR_Box) Array;
}
      Var_26 = (MR_Integer) ((MR_Unsigned) Index_11 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_11 = Var_26;
      next_value_of_STATE_VARIABLE_Array_0_17 = STATE_VARIABLE_Array_25_25;
      next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_23_23;
      next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_24_24;
      Index_11 = next_value_of_Index_11;
      STATE_VARIABLE_Array_0_17 = next_value_of_STATE_VARIABLE_Array_0_17;
      STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
      STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_0_21;
      *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_0_19;
      *STATE_VARIABLE_Array_18 = STATE_VARIABLE_Array_0_17;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl_5_p_5(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Integer Size_6,
  MR_Word GenPred_7,
  MR_ArrayPtr * Array_8,
  MR_Box STATE_VARIABLE_AccA_0_13,
  MR_Box * STATE_VARIABLE_AccA_14)
{
  MR_bool succeeded = (Size_6 < (MR_Integer) 0);
  MR_Word Result_10;

  if (succeeded)
    Result_10 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_6 == (MR_Integer) 0);
    if (succeeded)
      Result_10 = (MR_Integer) 0;
    else
      Result_10 = (MR_Integer) 2;
  }
  switch (Result_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl\'/5", (MR_String) "negative size");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_5

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_8  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_14 = STATE_VARIABLE_AccA_0_13;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_11;
        MR_ArrayPtr Array0_12;
        MR_Box STATE_VARIABLE_AccA_19_19;
        MR_Integer Var_20;
        MR_Integer Var_21;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_7, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (GenPred_7)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_11, STATE_VARIABLE_AccA_0_13, &STATE_VARIABLE_AccA_19_19);
        if (succeeded)
        {
          Var_20 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_5

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_6 ;
	FirstElem = (MR_Word) FirstElem_11 ;
	IndexToSet = Var_20 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_12  = (MR_Box) Array;
}
          Var_21 = (MR_Integer) 1;
          succeeded = mercury__array__generate_foldl_loop_7_p_5(TypeInfo_for_T_22, TypeInfo_for_A_23, GenPred_7, Var_21, Size_6, Array0_12, Array_8, STATE_VARIABLE_AccA_19_19, STATE_VARIABLE_AccA_14);
        }
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__generate_foldl_loop_7_p_5(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word GenPred_8,
  MR_Integer Index_9,
  MR_Integer Size_10,
  MR_ArrayPtr STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * STATE_VARIABLE_Array_15,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_9 < Size_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_13;
      MR_Box STATE_VARIABLE_AccA_18_18;
      MR_ArrayPtr STATE_VARIABLE_Array_19_19;
      MR_Integer Var_20;
      MR_Integer Var_23;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_8, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_9;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_14;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_16;

      succeeded = func_0(((MR_Box) (GenPred_8)), ((MR_Box) (Index_9)), &Elem_13, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_18_18);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_loop_7_p_5

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_9 ;
	Item = (MR_Word) Elem_13 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_14 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_19_19  = (MR_Box) Array;
}
        Var_23 = (MR_Integer) 1;
        Var_20 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) Var_23);
        // direct tailcall eliminated
        ;
        next_value_of_Index_9 = Var_20;
        next_value_of_STATE_VARIABLE_Array_0_14 = STATE_VARIABLE_Array_19_19;
        next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_18_18;
        Index_9 = next_value_of_Index_9;
        STATE_VARIABLE_Array_0_14 = next_value_of_STATE_VARIABLE_Array_0_14;
        STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
      *STATE_VARIABLE_Array_15 = STATE_VARIABLE_Array_0_14;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl_5_p_4(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Integer Size_6,
  MR_Word GenPred_7,
  MR_ArrayPtr * Array_8,
  MR_Box STATE_VARIABLE_AccA_0_13,
  MR_Box * STATE_VARIABLE_AccA_14)
{
  MR_bool succeeded = (Size_6 < (MR_Integer) 0);
  MR_Word Result_10;

  if (succeeded)
    Result_10 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_6 == (MR_Integer) 0);
    if (succeeded)
      Result_10 = (MR_Integer) 0;
    else
      Result_10 = (MR_Integer) 2;
  }
  switch (Result_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl\'/5", (MR_String) "negative size");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_4

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_8  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_14 = STATE_VARIABLE_AccA_0_13;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_11;
        MR_ArrayPtr Array0_12;
        MR_Box STATE_VARIABLE_AccA_19_19;
        MR_Integer Var_20;
        MR_Integer Var_21;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_7, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (GenPred_7)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_11, STATE_VARIABLE_AccA_0_13, &STATE_VARIABLE_AccA_19_19);
        if (succeeded)
        {
          Var_20 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_4

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_6 ;
	FirstElem = (MR_Word) FirstElem_11 ;
	IndexToSet = Var_20 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_12  = (MR_Box) Array;
}
          Var_21 = (MR_Integer) 1;
          succeeded = mercury__array__generate_foldl_loop_7_p_4(TypeInfo_for_T_22, TypeInfo_for_A_23, GenPred_7, Var_21, Size_6, Array0_12, Array_8, STATE_VARIABLE_AccA_19_19, STATE_VARIABLE_AccA_14);
        }
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__generate_foldl_loop_7_p_4(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word GenPred_8,
  MR_Integer Index_9,
  MR_Integer Size_10,
  MR_ArrayPtr STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * STATE_VARIABLE_Array_15,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_9 < Size_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_13;
      MR_Box STATE_VARIABLE_AccA_18_18;
      MR_ArrayPtr STATE_VARIABLE_Array_19_19;
      MR_Integer Var_20;
      MR_Integer Var_23;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_8, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_9;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_14;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_16;

      succeeded = func_0(((MR_Box) (GenPred_8)), ((MR_Box) (Index_9)), &Elem_13, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_18_18);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_loop_7_p_4

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_9 ;
	Item = (MR_Word) Elem_13 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_14 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_19_19  = (MR_Box) Array;
}
        Var_23 = (MR_Integer) 1;
        Var_20 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) Var_23);
        // direct tailcall eliminated
        ;
        next_value_of_Index_9 = Var_20;
        next_value_of_STATE_VARIABLE_Array_0_14 = STATE_VARIABLE_Array_19_19;
        next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_18_18;
        Index_9 = next_value_of_Index_9;
        STATE_VARIABLE_Array_0_14 = next_value_of_STATE_VARIABLE_Array_0_14;
        STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
      *STATE_VARIABLE_Array_15 = STATE_VARIABLE_Array_0_14;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl_5_p_3(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Integer Size_6,
  MR_Word GenPred_7,
  MR_ArrayPtr * Array_8,
  MR_Box STATE_VARIABLE_AccA_0_13,
  MR_Box * STATE_VARIABLE_AccA_14)
{
  MR_bool succeeded = (Size_6 < (MR_Integer) 0);
  MR_Word Result_10;

  if (succeeded)
    Result_10 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_6 == (MR_Integer) 0);
    if (succeeded)
      Result_10 = (MR_Integer) 0;
    else
      Result_10 = (MR_Integer) 2;
  }
  switch (Result_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl\'/5", (MR_String) "negative size");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_3

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_8  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_14 = STATE_VARIABLE_AccA_0_13;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_11;
        MR_ArrayPtr Array0_12;
        MR_Box STATE_VARIABLE_AccA_19_19;
        MR_Integer Var_20;
        MR_Integer Var_21;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_7, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (GenPred_7)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_11, STATE_VARIABLE_AccA_0_13, &STATE_VARIABLE_AccA_19_19);
        if (succeeded)
        {
          Var_20 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_3

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_6 ;
	FirstElem = (MR_Word) FirstElem_11 ;
	IndexToSet = Var_20 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_12  = (MR_Box) Array;
}
          Var_21 = (MR_Integer) 1;
          succeeded = mercury__array__generate_foldl_loop_7_p_3(TypeInfo_for_T_22, TypeInfo_for_A_23, GenPred_7, Var_21, Size_6, Array0_12, Array_8, STATE_VARIABLE_AccA_19_19, STATE_VARIABLE_AccA_14);
        }
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__array__generate_foldl_loop_7_p_3(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word GenPred_8,
  MR_Integer Index_9,
  MR_Integer Size_10,
  MR_ArrayPtr STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * STATE_VARIABLE_Array_15,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_9 < Size_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_13;
      MR_Box STATE_VARIABLE_AccA_18_18;
      MR_ArrayPtr STATE_VARIABLE_Array_19_19;
      MR_Integer Var_20;
      MR_Integer Var_23;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_8, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_9;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_14;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_16;

      succeeded = func_0(((MR_Box) (GenPred_8)), ((MR_Box) (Index_9)), &Elem_13, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_18_18);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_loop_7_p_3

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_9 ;
	Item = (MR_Word) Elem_13 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_14 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_19_19  = (MR_Box) Array;
}
        Var_23 = (MR_Integer) 1;
        Var_20 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) Var_23);
        // direct tailcall eliminated
        ;
        next_value_of_Index_9 = Var_20;
        next_value_of_STATE_VARIABLE_Array_0_14 = STATE_VARIABLE_Array_19_19;
        next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_18_18;
        Index_9 = next_value_of_Index_9;
        STATE_VARIABLE_Array_0_14 = next_value_of_STATE_VARIABLE_Array_0_14;
        STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
      *STATE_VARIABLE_Array_15 = STATE_VARIABLE_Array_0_14;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__array__generate_foldl_5_p_2(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Integer Size_6,
  MR_Word GenPred_7,
  MR_ArrayPtr * Array_8,
  MR_Box STATE_VARIABLE_AccA_0_13,
  MR_Box * STATE_VARIABLE_AccA_14)
{
  MR_bool succeeded = (Size_6 < (MR_Integer) 0);
  MR_Word Result_10;

  if (succeeded)
    Result_10 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_6 == (MR_Integer) 0);
    if (succeeded)
      Result_10 = (MR_Integer) 0;
    else
      Result_10 = (MR_Integer) 2;
  }
  switch (Result_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl\'/5", (MR_String) "negative size");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_2

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_8  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_14 = STATE_VARIABLE_AccA_0_13;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_11;
        MR_ArrayPtr Array0_12;
        MR_Box STATE_VARIABLE_AccA_19_19;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_7, (MR_Integer) 1))));

        func_0(((MR_Box) (GenPred_7)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_11, STATE_VARIABLE_AccA_0_13, &STATE_VARIABLE_AccA_19_19);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_2

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_6 ;
	FirstElem = (MR_Word) FirstElem_11 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_12  = (MR_Box) Array;
}
        mercury__array__generate_foldl_loop_7_p_2(TypeInfo_for_T_22, TypeInfo_for_A_23, GenPred_7, (MR_Integer) 1, Size_6, Array0_12, Array_8, STATE_VARIABLE_AccA_19_19, STATE_VARIABLE_AccA_14);
      }
      break;
  }
}

void MR_CALL 
mercury__array__generate_foldl_loop_7_p_2(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word GenPred_8,
  MR_Integer Index_9,
  MR_Integer Size_10,
  MR_ArrayPtr STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * STATE_VARIABLE_Array_15,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_9 < Size_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_13;
      MR_Box STATE_VARIABLE_AccA_18_18;
      MR_ArrayPtr STATE_VARIABLE_Array_19_19;
      MR_Integer Var_20;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_8, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_9;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_14;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_16;

      func_0(((MR_Box) (GenPred_8)), ((MR_Box) (Index_9)), &Elem_13, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_18_18);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_loop_7_p_2

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_9 ;
	Item = (MR_Word) Elem_13 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_14 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_19_19  = (MR_Box) Array;
}
      Var_20 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_9 = Var_20;
      next_value_of_STATE_VARIABLE_Array_0_14 = STATE_VARIABLE_Array_19_19;
      next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_18_18;
      Index_9 = next_value_of_Index_9;
      STATE_VARIABLE_Array_0_14 = next_value_of_STATE_VARIABLE_Array_0_14;
      STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
      *STATE_VARIABLE_Array_15 = STATE_VARIABLE_Array_0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__array__generate_foldl_5_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Integer Size_6,
  MR_Word GenPred_7,
  MR_ArrayPtr * Array_8,
  MR_Box STATE_VARIABLE_AccA_0_13,
  MR_Box * STATE_VARIABLE_AccA_14)
{
  MR_bool succeeded = (Size_6 < (MR_Integer) 0);
  MR_Word Result_10;

  if (succeeded)
    Result_10 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_6 == (MR_Integer) 0);
    if (succeeded)
      Result_10 = (MR_Integer) 0;
    else
      Result_10 = (MR_Integer) 2;
  }
  switch (Result_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl\'/5", (MR_String) "negative size");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_1

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_8  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_14 = STATE_VARIABLE_AccA_0_13;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_11;
        MR_ArrayPtr Array0_12;
        MR_Box STATE_VARIABLE_AccA_19_19;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_7, (MR_Integer) 1))));

        func_0(((MR_Box) (GenPred_7)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_11, STATE_VARIABLE_AccA_0_13, &STATE_VARIABLE_AccA_19_19);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_1

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_6 ;
	FirstElem = (MR_Word) FirstElem_11 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_12  = (MR_Box) Array;
}
        mercury__array__generate_foldl_loop_7_p_1(TypeInfo_for_T_22, TypeInfo_for_A_23, GenPred_7, (MR_Integer) 1, Size_6, Array0_12, Array_8, STATE_VARIABLE_AccA_19_19, STATE_VARIABLE_AccA_14);
      }
      break;
  }
}

void MR_CALL 
mercury__array__generate_foldl_loop_7_p_1(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word GenPred_8,
  MR_Integer Index_9,
  MR_Integer Size_10,
  MR_ArrayPtr STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * STATE_VARIABLE_Array_15,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_9 < Size_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_13;
      MR_Box STATE_VARIABLE_AccA_18_18;
      MR_ArrayPtr STATE_VARIABLE_Array_19_19;
      MR_Integer Var_20;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_8, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_9;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_14;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_16;

      func_0(((MR_Box) (GenPred_8)), ((MR_Box) (Index_9)), &Elem_13, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_18_18);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_loop_7_p_1

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_9 ;
	Item = (MR_Word) Elem_13 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_14 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_19_19  = (MR_Box) Array;
}
      Var_20 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_9 = Var_20;
      next_value_of_STATE_VARIABLE_Array_0_14 = STATE_VARIABLE_Array_19_19;
      next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_18_18;
      Index_9 = next_value_of_Index_9;
      STATE_VARIABLE_Array_0_14 = next_value_of_STATE_VARIABLE_Array_0_14;
      STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
      *STATE_VARIABLE_Array_15 = STATE_VARIABLE_Array_0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__array__generate_foldl_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Integer Size_6,
  MR_Word GenPred_7,
  MR_ArrayPtr * Array_8,
  MR_Box STATE_VARIABLE_AccA_0_13,
  MR_Box * STATE_VARIABLE_AccA_14)
{
  MR_bool succeeded = (Size_6 < (MR_Integer) 0);
  MR_Word Result_10;

  if (succeeded)
    Result_10 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_6 == (MR_Integer) 0);
    if (succeeded)
      Result_10 = (MR_Integer) 0;
    else
      Result_10 = (MR_Integer) 2;
  }
  switch (Result_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.generate_foldl\'/5", (MR_String) "negative size");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*Array_8  = (MR_Box) Array;
}
        *STATE_VARIABLE_AccA_14 = STATE_VARIABLE_AccA_0_13;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_11;
        MR_ArrayPtr Array0_12;
        MR_Box STATE_VARIABLE_AccA_19_19;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_7, (MR_Integer) 1))));

        func_0(((MR_Box) (GenPred_7)), ((MR_Box) ((MR_Integer) 0)), &FirstElem_11, STATE_VARIABLE_AccA_0_13, &STATE_VARIABLE_AccA_19_19);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_6 ;
	FirstElem = (MR_Word) FirstElem_11 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_12  = (MR_Box) Array;
}
        mercury__array__generate_foldl_loop_7_p_0(TypeInfo_for_T_22, TypeInfo_for_A_23, GenPred_7, (MR_Integer) 1, Size_6, Array0_12, Array_8, STATE_VARIABLE_AccA_19_19, STATE_VARIABLE_AccA_14);
      }
      break;
  }
}

void MR_CALL 
mercury__array__generate_foldl_loop_7_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word GenPred_8,
  MR_Integer Index_9,
  MR_Integer Size_10,
  MR_ArrayPtr STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * STATE_VARIABLE_Array_15,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_9 < Size_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_13;
      MR_Box STATE_VARIABLE_AccA_18_18;
      MR_ArrayPtr STATE_VARIABLE_Array_19_19;
      MR_Integer Var_20;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GenPred_8, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_9;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_14;
      MR_Box next_value_of_STATE_VARIABLE_AccA_0_16;

      func_0(((MR_Box) (GenPred_8)), ((MR_Box) (Index_9)), &Elem_13, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_18_18);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_loop_7_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_9 ;
	Item = (MR_Word) Elem_13 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_14 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_19_19  = (MR_Box) Array;
}
      Var_20 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_9 = Var_20;
      next_value_of_STATE_VARIABLE_Array_0_14 = STATE_VARIABLE_Array_19_19;
      next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_18_18;
      Index_9 = next_value_of_Index_9;
      STATE_VARIABLE_Array_0_14 = next_value_of_STATE_VARIABLE_Array_0_14;
      STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
      continue;
    }
    else
    {
      *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_0_16;
      *STATE_VARIABLE_Array_15 = STATE_VARIABLE_Array_0_14;
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__generate_2_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Integer Size_4,
  MR_Word GenFunc_5)
{
  MR_bool succeeded = (Size_4 < (MR_Integer) 0);
  MR_ArrayPtr Array_6;
  MR_Word Result_7;

  if (succeeded)
    Result_7 = (MR_Integer) 1;
  else
  {
    succeeded = (Size_4 == (MR_Integer) 0);
    if (succeeded)
      Result_7 = (MR_Integer) 0;
    else
      Result_7 = (MR_Integer) 2;
  }
  switch (Result_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__require__unexpected_2_p_0((MR_String) "function \140array.generate\'/2", (MR_String) "negative size");
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__array__generate_2_f_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	Array_6  = (MR_Box) Array;
}
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box FirstElem_8;
        MR_ArrayPtr Array0_9;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), GenFunc_5, (MR_Integer) 1))));

        FirstElem_8 = func_0(((MR_Box) (GenFunc_5)), ((MR_Box) ((MR_Integer) 0)));
{
#define MR_PROC_LABEL mercury__array__generate_2_f_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size = Size_4 ;
	FirstElem = (MR_Word) FirstElem_8 ;
	IndexToSet = (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    // In debugging grades, we fill the array with the first element,
    // in case the return value of a call to this predicate is examined
    // in the debugger.
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	Array0_9  = (MR_Box) Array;
}
        mercury__array__generate_loop_5_p_0(TypeInfo_for_T_16, GenFunc_5, (MR_Integer) 1, Size_4, Array0_9, &Array_6);
      }
      break;
  }
  return Array_6;
}

void MR_CALL 
mercury__array__generate_loop_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word GenFunc_6,
  MR_Integer Index_7,
  MR_Integer Size_8,
  MR_ArrayPtr STATE_VARIABLE_Array_0_11,
  MR_ArrayPtr * STATE_VARIABLE_Array_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_7 < Size_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Elem_10;
      MR_ArrayPtr STATE_VARIABLE_Array_13_13;
      MR_Integer Var_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), GenFunc_6, (MR_Integer) 1))));
      MR_Integer next_value_of_Index_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Array_0_11;

      Elem_10 = func_0(((MR_Box) (GenFunc_6)), ((MR_Box) (Index_7)));
{
#define MR_PROC_LABEL mercury__array__generate_loop_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = Index_7 ;
	Item = (MR_Word) Elem_10 ;
	Array0 = (MR_ArrayPtr)STATE_VARIABLE_Array_0_11 ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_Array_13_13  = (MR_Box) Array;
}
      Var_14 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_7 = Var_14;
      next_value_of_STATE_VARIABLE_Array_0_11 = STATE_VARIABLE_Array_13_13;
      Index_7 = next_value_of_Index_7;
      STATE_VARIABLE_Array_0_11 = next_value_of_STATE_VARIABLE_Array_0_11;
      continue;
    }
    else
      *STATE_VARIABLE_Array_12 = STATE_VARIABLE_Array_0_11;
    break;
  }
}

void MR_CALL 
mercury__array__make_empty_array_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_ArrayPtr * HeadVar__1_1)
{
{
#define MR_PROC_LABEL mercury__array__make_empty_array_1_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	*HeadVar__1_1  = (MR_Box) Array;
}
}

MR_ArrayPtr MR_CALL 
mercury__array__make_empty_array_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  MR_ArrayPtr A_2;

{
#define MR_PROC_LABEL mercury__array__make_empty_array_0_f_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	A_2  = (MR_Box) Array;
}
  return A_2;
}

void MR_CALL 
mercury__array__init_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Integer Size_4,
  MR_Box Item_5,
  MR_ArrayPtr * Array_6)
{
  MR_bool succeeded = (Size_4 < (MR_Integer) 0);

  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.init\'/3", (MR_String) "negative size");
      return;
    }
  else
  {
{
#define MR_PROC_LABEL mercury__array__init_3_p_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size = Size_4 ;
	Item = (MR_Word) Item_5 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	*Array_6  = (MR_Box) Array;
}
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__init_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Integer N_4,
  MR_Box X_5)
{
  MR_bool succeeded = (N_4 < (MR_Integer) 0);
  MR_ArrayPtr A_6;

  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140array.init\'/3", (MR_String) "negative size");
  else
  {
{
#define MR_PROC_LABEL mercury__array__init_2_f_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size = N_4 ;
	Item = (MR_Word) X_5 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	A_6  = (MR_Box) Array;
}
  }
  return A_6;
}

static MR_bool MR_CALL 
mercury__array____Unify____array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__array____Unify____array_1_0(((MR_Word) (wrapper_arg_1)), ((MR_ArrayPtr) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__array____Compare____array_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__array____Compare____array_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_ArrayPtr) (wrapper_arg_3)), ((MR_ArrayPtr) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__array____Unify____index_out_of_bounds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__array____Unify____index_out_of_bounds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__array____Compare____index_out_of_bounds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__array____Compare____index_out_of_bounds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__array__init(void)
{
}

void mercury__array__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__array__array__type_ctor_info_array_1);
	MR_register_type_ctor_info(&mercury__array__array__type_ctor_info_index_out_of_bounds_0);
}

void mercury__array__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__array__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module array.
