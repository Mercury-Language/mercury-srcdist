/*
** Automatically generated from `array.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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


/* :- module array. */
/* :- implementation. */

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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
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

static MR_Integer MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(
  MR_Integer mercury__array__N_9,
  MR_ArrayPtr mercury__array__A0_10,
  MR_ArrayPtr * mercury__array__A_11,
  MR_ArrayPtr mercury__array__B0_12,
  MR_ArrayPtr * mercury__array__B_13,
  MR_Integer mercury__array__Lo_14,
  MR_Integer mercury__array__Hi_15,
  MR_Integer * mercury__array__I_16);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(
  MR_Integer mercury__array__N_9,
  MR_ArrayPtr mercury__array__A0_10,
  MR_ArrayPtr * mercury__array__A_11,
  MR_ArrayPtr mercury__array__B0_12,
  MR_ArrayPtr * mercury__array__B_13,
  MR_Integer mercury__array__Lo_14,
  MR_Integer mercury__array__Hi_15,
  MR_Integer * mercury__array__I_16);

static MR_Integer MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0(
  MR_Word mercury__array__R_6,
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9);

static MR_Integer MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0(
  MR_Word mercury__array__R_6,
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(
  MR_ArrayPtr mercury__array__A_9,
  MR_Integer mercury__array__Lo1_10,
  MR_Integer mercury__array__Hi1_11,
  MR_Integer mercury__array__Lo2_12,
  MR_Integer mercury__array__Hi2_13,
  MR_Integer mercury__array__I_14,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_20);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(
  MR_ArrayPtr mercury__array__A_9,
  MR_Integer mercury__array__Lo1_10,
  MR_Integer mercury__array__Hi1_11,
  MR_Integer mercury__array__Lo2_12,
  MR_Integer mercury__array__Hi2_13,
  MR_Integer mercury__array__I_14,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_20);

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14);

static MR_Box MR_CALL 
mercury__array__IntroducedFrom__func__array_to_doc_2__3154__1_3_f_0_1(
  MR_Box mercury__array__closure_arg);

static MR_Word MR_CALL 
mercury__array__IntroducedFrom__func__array_to_doc_2__3154__1_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T_28,
  MR_Integer mercury__array__I_4,
  MR_ArrayPtr mercury__array__A_5);

static void MR_CALL 
mercury__array__shrink_2_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_4,
  MR_Integer mercury__array__HeadVar__1_1,
  MR_ArrayPtr mercury__array__HeadVar__2_2,
  MR_ArrayPtr * mercury__array__HeadVar__3_3);

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Integer mercury__array__HeadVar__1_1,
  MR_ArrayPtr mercury__array__HeadVar__2_2,
  MR_ArrayPtr * mercury__array__HeadVar__3_3);

static MR_bool MR_CALL 
mercury__array__equal_elements_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_12,
  MR_Integer mercury__array__N_5,
  MR_Integer mercury__array__Size_6,
  MR_ArrayPtr mercury__array__Array1_7,
  MR_ArrayPtr mercury__array__Array2_8);

static MR_Box MR_CALL 
mercury__array__array_to_doc_1_f_0_1(
  MR_Box mercury__array__closure_arg);

static void MR_CALL 
mercury__array__samsort_down_8_p_0(
  MR_Word mercury__array__TypeInfo_for_T_34,
  MR_Integer mercury__array__N_9,
  MR_ArrayPtr mercury__array__A0_10,
  MR_ArrayPtr * mercury__array__A_11,
  MR_ArrayPtr mercury__array__B0_12,
  MR_ArrayPtr * mercury__array__B_13,
  MR_Integer mercury__array__Lo_14,
  MR_Integer mercury__array__Hi_15,
  MR_Integer * mercury__array__I_16);

static void MR_CALL 
mercury__array__merge_subarrays_8_p_0(
  MR_Word mercury__array__TypeInfo_for_T_41,
  MR_ArrayPtr mercury__array__A_9,
  MR_Integer mercury__array__Lo1_10,
  MR_Integer mercury__array__Hi1_11,
  MR_Integer mercury__array__Lo2_12,
  MR_Integer mercury__array__Hi2_13,
  MR_Integer mercury__array__I_14,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_20);

static void MR_CALL 
mercury__array__copy_subarray_reverse_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T_21,
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14);

static void MR_CALL 
mercury__array__copy_subarray_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T_21,
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14);

static MR_Integer MR_CALL 
mercury__array__search_until_4_f_0(
  MR_Word mercury__array__TypeInfo_for_T_17,
  MR_Word mercury__array__R_6,
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9);

static void MR_CALL 
mercury__array__compare_elements_5_p_0(
  MR_Word mercury__array__TypeInfo_for_T_16,
  MR_Integer mercury__array__N_6,
  MR_Integer mercury__array__Size_7,
  MR_ArrayPtr mercury__array__Array1_8,
  MR_ArrayPtr mercury__array__Array2_9,
  MR_Word * mercury__array__Result_10);

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_p_0(
  MR_Word mercury__array__Var_24,
  MR_Integer mercury__array__N_7,
  MR_Integer mercury__array__Size_8,
  MR_ArrayPtr mercury__array__OldArray_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_NewArray_0_14,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_NewArray_15);

static MR_bool MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_44_32_51_93_95_48_6_p_0(
  MR_Word mercury__array__Var_29,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__SearchX_9,
  MR_Integer mercury__array__Lo_10,
  MR_Integer mercury__array__Hi_11,
  MR_Integer * mercury__array__I_12);

static MR_bool MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_55_95_95_91_50_44_32_51_93_95_48_6_p_0(
  MR_Word mercury__array__Var_24,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__SearchX_9,
  MR_Integer mercury__array__Lo_10,
  MR_Integer mercury__array__Hi_11,
  MR_Integer * mercury__array__I_12);

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_54_95_95_91_49_44_32_56_93_95_48_6_p_0(
  MR_Word mercury__array__Var_30,
  MR_Word mercury__array__TypeInfo_for_T_27,
  MR_ArrayPtr mercury__array__Array_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Box mercury__array__SearchX_10,
  MR_Word * mercury__array__Result_12);

static MR_Word MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_f_0(
  MR_ArrayPtr mercury__array__A_8,
  MR_Word mercury__array__X_9,
  MR_Integer mercury__array__Min_10,
  MR_Integer mercury__array__I_11);

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word mercury__array__HeadVar__1_1,
  MR_Integer mercury__array__N_2,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_3,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_4);

static void MR_CALL 
mercury__array__member_2_p_0_1(
  void * mercury__array__env_ptr_arg);

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word mercury__array__HeadVar__1_1,
  MR_Integer mercury__array__HeadVar__2_2,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_3,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_4);

static MR_bool MR_CALL 
mercury__array____Unify____array_1_0_10001(
  MR_Box mercury__array__wrapper_arg_1,
  MR_Box mercury__array__wrapper_arg_2,
  MR_Box mercury__array__wrapper_arg_3);

static void MR_CALL 
mercury__array____Compare____array_1_0_10001(
  MR_Box mercury__array__wrapper_arg_1,
  MR_Box * mercury__array__wrapper_arg_2,
  MR_Box mercury__array__wrapper_arg_3,
  MR_Box mercury__array__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__array____Unify____index_out_of_bounds_0_0_10001(
  MR_Box mercury__array__wrapper_arg_1,
  MR_Box mercury__array__wrapper_arg_2);

static void MR_CALL 
mercury__array____Compare____index_out_of_bounds_0_0_10001(
  MR_Box * mercury__array__wrapper_arg_1,
  MR_Box mercury__array__wrapper_arg_2,
  MR_Box mercury__array__wrapper_arg_3);


static /* final */ const MR_Box mercury__array_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__array_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__array_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__array_scalar_common_4[12][2];

static /* final */ const MR_Box mercury__array_scalar_common_5[8][1];

static /* final */ const MR_Integer mercury__array_scalar_common_6[1][2];

static /* final */ const MR_Box mercury__array_scalar_common_7[1][7];




static /* final */ const MR_Box mercury__array_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array_scalar_common_4[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__array_scalar_common_4[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &mercury__array_scalar_common_5[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__array_scalar_common_4[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__array_scalar_common_4[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__array_scalar_common_5[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "array(["))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[7])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "])"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "  "))
  },
};

static /* final */ const MR_Integer mercury__array_scalar_common_6[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__array_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__array_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
#line 922 "array.m"

/*
** The caller is responsible for allocating the memory for the array.
** This routine does the job of initializing the already-allocated memory.
*/
void
ML_init_array(MR_ArrayPtr array, MR_Integer size, MR_Word item)
{
    MR_Integer i;

    array->size = size;
    for (i = 0; i < size; i++) {
        array->elements[i] = item;
    }
}

#line 1801 "array.m"

/*
** The caller is responsible for allocating the storage for the new array.
** This routine does the job of copying the old array elements to the
** new array, initializing any additional elements in the new array,
** and deallocating the old array.
*/
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

    /*
    ** Since the mode on the old array is `array_di', it is safe to
    ** deallocate the storage for it.
    */
#ifdef MR_CONSERVATIVE_GC
    MR_GC_free_attrib(old_array);
#endif
}

#line 1898 "array.m"

/*
** The caller is responsible for allocating the storage for the new array.
** This routine does the job of copying the old array elements to the
** new array and deallocating the old array.
*/
void
ML_shrink_array(MR_ArrayPtr array, MR_ArrayPtr old_array,
    MR_Integer array_size)
{
    MR_Integer i;

    array->size = array_size;
    for (i = 0; i < array_size; i++) {
        array->elements[i] = old_array->elements[i];
    }

    /*
    ** Since the mode on the old array is `array_di', it is safe to
    ** deallocate the storage for it.
    */
#ifdef MR_CONSERVATIVE_GC
    MR_GC_free_attrib(old_array);
#endif
}

#line 1997 "array.m"

/*
** The caller is responsible for allocating the storage for the new array.
** This routine does the job of copying the array elements.
*/
void
ML_copy_array(MR_ArrayPtr array, MR_ConstArrayPtr old_array)
{
    /*
    ** Any changes to this function will probably also require changes to
    ** - array.append below, and
    ** - MR_deep_copy() in runtime/mercury_deep_copy.[ch].
    */

    MR_Integer i;
    MR_Integer array_size;

    array_size = old_array->size;
    array->size = array_size;
    for (i = 0; i < array_size; i++) {
        array->elements[i] = old_array->elements[i];
    }
}



static const MR_FA_PseudoTypeInfo_Struct1 mercury__array__array__pti_array_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

const MR_TypeCtorInfo_Struct mercury__array__array__type_ctor_info_array_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ARRAY,
  ((MR_Box) (mercury__array____Unify____array_1_0_10001)),
  ((MR_Box) (mercury__array____Compare____array_1_0_10001)),
  (MR_String) "array",
  (MR_String) "array",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer mercury__array__array__functor_number_map_index_out_of_bounds_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__array__array__notag_functor_desc_index_out_of_bounds_0 = {
  (MR_String) "index_out_of_bounds",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__array__array__type_ctor_info_index_out_of_bounds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__array____Unify____index_out_of_bounds_0_0_10001)),
  ((MR_Box) (mercury__array____Compare____index_out_of_bounds_0_0_10001)),
  (MR_String) "array",
  (MR_String) "index_out_of_bounds",
  {     &mercury__array__array__notag_functor_desc_index_out_of_bounds_0 },
  {     &mercury__array__array__notag_functor_desc_index_out_of_bounds_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__array__array__functor_number_map_index_out_of_bounds_0
};

static MR_Integer MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0(
  MR_ArrayPtr mercury__array__A_3)
{
  {
    MR_ArrayPtr mercury__array__HeadVar__2_2;
    MR_Integer mercury__array__Var_4;
    MR_Integer mercury__array__Var_5;
    MR_ArrayPtr mercury__array__Var_17;
    MR_Word mercury__array__TypeInfo_for_T_22;
    MR_Word mercury__array__TypeInfo_for_T_23;
    MR_Word mercury__array__TypeInfo_for_T_24;
    MR_ArrayPtr mercury__array__conv0_Array;
    MR_ArrayPtr mercury__array__Var_15;

{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__A_3 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_4  = Min;
}
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__A_3 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_5  = Max;
}
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__A_3 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
    mercury__array__Var_17 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
    mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0((MR_Integer) 0, mercury__array__Var_17, &mercury__array__HeadVar__2_2, mercury__array__A_3, &mercury__array__Var_15, mercury__array__Var_4, mercury__array__Var_5, mercury__array__Var_4);
    return mercury__array__HeadVar__2_2;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_f_0(
  MR_ArrayPtr mercury__array__A_3)
{
  {
    MR_ArrayPtr mercury__array__HeadVar__2_2;
    MR_Integer mercury__array__Var_4;
    MR_Integer mercury__array__Var_5;
    MR_ArrayPtr mercury__array__Var_17;
    MR_Word mercury__array__TypeInfo_for_T_22;
    MR_Word mercury__array__TypeInfo_for_T_23;
    MR_Word mercury__array__TypeInfo_for_T_24;
    MR_ArrayPtr mercury__array__conv0_Array;
    MR_ArrayPtr mercury__array__Var_15;

{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__A_3 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_4  = Min;
}
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__A_3 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_5  = Max;
}
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__A_3 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
    mercury__array__Var_17 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
    mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0((MR_Integer) 0, mercury__array__Var_17, &mercury__array__HeadVar__2_2, mercury__array__A_3, &mercury__array__Var_15, mercury__array__Var_4, mercury__array__Var_5, mercury__array__Var_4);
    return mercury__array__HeadVar__2_2;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_f_0(
  MR_ArrayPtr mercury__array__A0_5,
  MR_Integer mercury__array__Lo_6,
  MR_Integer mercury__array__Hi_7)
{
  {
    MR_ArrayPtr mercury__array__A_8;
    MR_ArrayPtr mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T_16;
    MR_ArrayPtr mercury__array__conv0_Array;
    MR_ArrayPtr mercury__array__Var_9;

{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__A0_5 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
    mercury__array__Var_11 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
    mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0((MR_Integer) 0, mercury__array__Var_11, &mercury__array__A_8, mercury__array__A0_5, &mercury__array__Var_9, mercury__array__Lo_6, mercury__array__Hi_7, mercury__array__Lo_6);
    return mercury__array__A_8;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_f_0(
  MR_ArrayPtr mercury__array__A0_5,
  MR_Integer mercury__array__Lo_6,
  MR_Integer mercury__array__Hi_7)
{
  {
    MR_ArrayPtr mercury__array__A_8;
    MR_ArrayPtr mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T_16;
    MR_ArrayPtr mercury__array__conv0_Array;
    MR_ArrayPtr mercury__array__Var_9;

{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__A0_5 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
    mercury__array__Var_11 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
    mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0((MR_Integer) 0, mercury__array__Var_11, &mercury__array__A_8, mercury__array__A0_5, &mercury__array__Var_9, mercury__array__Lo_6, mercury__array__Hi_7, mercury__array__Lo_6);
    return mercury__array__A_8;
  }
}

void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(
  MR_Integer mercury__array__N_9,
  MR_ArrayPtr mercury__array__A0_10,
  MR_ArrayPtr * mercury__array__A_11,
  MR_ArrayPtr mercury__array__B0_12,
  MR_ArrayPtr * mercury__array__B_13,
  MR_Integer mercury__array__Lo_14,
  MR_Integer mercury__array__Hi_15,
  MR_Integer mercury__array__I_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_16 > mercury__array__Hi_15);

      if (mercury__array__succeeded)
      {
        *mercury__array__A_11 = mercury__array__A0_10;
        *mercury__array__B_13 = mercury__array__B0_12;
      }
      else
      {
        mercury__array__succeeded = (mercury__array__N_9 > (MR_Integer) 0);
        if (mercury__array__succeeded)
        {
          MR_ArrayPtr mercury__array__B1_17;
          MR_Integer mercury__array__J_19;
          MR_ArrayPtr mercury__array__B2_20;
          MR_ArrayPtr mercury__array__A2_21;
          MR_Integer mercury__array__Var_27 = (mercury__array__N_9 - (MR_Integer) 1);
          MR_Integer mercury__array__Var_29;
          MR_Integer mercury__array__Var_30;
          MR_Integer mercury__array__Var_34;

          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(mercury__array__Var_27, mercury__array__B0_12, &mercury__array__B1_17, mercury__array__A0_10, &mercury__array__A2_21, mercury__array__I_16, mercury__array__Hi_15, &mercury__array__J_19);
          mercury__array__Var_29 = (mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__Var_30 = (mercury__array__J_19 - (MR_Integer) 1);
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(mercury__array__A2_21, mercury__array__Lo_14, mercury__array__Var_29, mercury__array__I_16, mercury__array__Var_30, mercury__array__Lo_14, mercury__array__B1_17, &mercury__array__B2_20);
          mercury__array__Var_34 = (mercury__array__N_9 + (MR_Integer) 1);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_N_9 = mercury__array__Var_34;
            MR_ArrayPtr mercury__array__next_value_of_A0_10 = mercury__array__B2_20;
            MR_ArrayPtr mercury__array__next_value_of_B0_12 = mercury__array__A2_21;
            MR_Integer mercury__array__next_value_of_I_16 = mercury__array__J_19;

            mercury__array__N_9 = mercury__array__next_value_of_N_9;
            mercury__array__A0_10 = mercury__array__next_value_of_A0_10;
            mercury__array__B0_12 = mercury__array__next_value_of_B0_12;
            mercury__array__I_16 = mercury__array__next_value_of_I_16;
          }
          continue;
        }
        else
        {
          MR_Word mercury__array__TypeInfo_for_T_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Integer mercury__array__Var_36;
          MR_ArrayPtr mercury__array__B1_38;
          MR_Integer mercury__array__J_39;
          MR_Word mercury__array__Var_50;
          MR_Integer mercury__array__Var_51;
          MR_Integer mercury__array__Var_52;
          MR_Integer mercury__array__Var_53;
          MR_Integer mercury__array__Var_54;
          MR_Word mercury__array__Var_67;
          MR_Box mercury__array__conv0_Var_51;
          MR_Box mercury__array__conv1_Var_52;

          mercury__array__succeeded = (mercury__array__Lo_14 < mercury__array__Hi_15);
          if (mercury__array__succeeded)
          {
            mercury__array__Var_50 = (MR_Integer) 2;
            mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_66, (MR_ArrayPtr) mercury__array__A0_10, mercury__array__Lo_14, &mercury__array__conv0_Var_51);
            mercury__array__Var_51 = ((MR_Integer) mercury__array__conv0_Var_51);
            mercury__array__Var_54 = (MR_Integer) 1;
            mercury__array__Var_53 = (mercury__array__Lo_14 + mercury__array__Var_54);
            mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_66, (MR_ArrayPtr) mercury__array__A0_10, mercury__array__Var_53, &mercury__array__conv1_Var_52);
            mercury__array__Var_52 = ((MR_Integer) mercury__array__conv1_Var_52);
            mercury__array__succeeded = (mercury__array__Var_51 < mercury__array__Var_52);
            if (mercury__array__succeeded)
              mercury__array__Var_67 = (MR_Integer) 1;
            else
            {
              mercury__array__succeeded = (mercury__array__Var_51 == mercury__array__Var_52);
              if (mercury__array__succeeded)
                mercury__array__Var_67 = (MR_Integer) 0;
              else
                mercury__array__Var_67 = (MR_Integer) 2;
            }
            mercury__array__succeeded = (mercury__array__Var_50 == mercury__array__Var_67);
          }
          if (mercury__array__succeeded)
          {
            MR_Integer mercury__array__Var_56;
            MR_Integer mercury__array__Var_57;

            mercury__array__J_39 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0((MR_Integer) 1, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
            mercury__array__Var_56 = (mercury__array__J_39 - (MR_Integer) 1);
            mercury__array__Var_57 = (mercury__array__J_39 - (MR_Integer) 1);
            mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_56, mercury__array__Var_57, mercury__array__B0_12, &mercury__array__B1_38);
          }
          else
          {
            MR_Integer mercury__array__Var_62;

            mercury__array__J_39 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0((MR_Integer) 2, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
            mercury__array__Var_62 = (mercury__array__J_39 - (MR_Integer) 1);
            mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_62, mercury__array__Lo_14, mercury__array__B0_12, &mercury__array__B1_38);
          }
          mercury__array__Var_36 = (mercury__array__N_9 + (MR_Integer) 1);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_N_9 = mercury__array__Var_36;
            MR_ArrayPtr mercury__array__next_value_of_A0_10 = mercury__array__B1_38;
            MR_ArrayPtr mercury__array__next_value_of_B0_12 = mercury__array__A0_10;
            MR_Integer mercury__array__next_value_of_I_16 = mercury__array__J_39;

            mercury__array__N_9 = mercury__array__next_value_of_N_9;
            mercury__array__A0_10 = mercury__array__next_value_of_A0_10;
            mercury__array__B0_12 = mercury__array__next_value_of_B0_12;
            mercury__array__I_16 = mercury__array__next_value_of_I_16;
          }
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(
  MR_Integer mercury__array__N_9,
  MR_ArrayPtr mercury__array__A0_10,
  MR_ArrayPtr * mercury__array__A_11,
  MR_ArrayPtr mercury__array__B0_12,
  MR_ArrayPtr * mercury__array__B_13,
  MR_Integer mercury__array__Lo_14,
  MR_Integer mercury__array__Hi_15,
  MR_Integer mercury__array__I_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_16 > mercury__array__Hi_15);

      if (mercury__array__succeeded)
      {
        *mercury__array__A_11 = mercury__array__A0_10;
        *mercury__array__B_13 = mercury__array__B0_12;
      }
      else
      {
        mercury__array__succeeded = (mercury__array__N_9 > (MR_Integer) 0);
        if (mercury__array__succeeded)
        {
          MR_ArrayPtr mercury__array__B1_17;
          MR_Integer mercury__array__J_19;
          MR_ArrayPtr mercury__array__B2_20;
          MR_ArrayPtr mercury__array__A2_21;
          MR_Integer mercury__array__Var_27 = (mercury__array__N_9 - (MR_Integer) 1);
          MR_Integer mercury__array__Var_29;
          MR_Integer mercury__array__Var_30;
          MR_Integer mercury__array__Var_34;

          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(mercury__array__Var_27, mercury__array__B0_12, &mercury__array__B1_17, mercury__array__A0_10, &mercury__array__A2_21, mercury__array__I_16, mercury__array__Hi_15, &mercury__array__J_19);
          mercury__array__Var_29 = (mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__Var_30 = (mercury__array__J_19 - (MR_Integer) 1);
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(mercury__array__A2_21, mercury__array__Lo_14, mercury__array__Var_29, mercury__array__I_16, mercury__array__Var_30, mercury__array__Lo_14, mercury__array__B1_17, &mercury__array__B2_20);
          mercury__array__Var_34 = (mercury__array__N_9 + (MR_Integer) 1);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_N_9 = mercury__array__Var_34;
            MR_ArrayPtr mercury__array__next_value_of_A0_10 = mercury__array__B2_20;
            MR_ArrayPtr mercury__array__next_value_of_B0_12 = mercury__array__A2_21;
            MR_Integer mercury__array__next_value_of_I_16 = mercury__array__J_19;

            mercury__array__N_9 = mercury__array__next_value_of_N_9;
            mercury__array__A0_10 = mercury__array__next_value_of_A0_10;
            mercury__array__B0_12 = mercury__array__next_value_of_B0_12;
            mercury__array__I_16 = mercury__array__next_value_of_I_16;
          }
          continue;
        }
        else
        {
          MR_Word mercury__array__TypeInfo_for_T_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          MR_Integer mercury__array__Var_36;
          MR_ArrayPtr mercury__array__B1_38;
          MR_Integer mercury__array__J_39;
          MR_Word mercury__array__Var_50;
          MR_String mercury__array__Var_51;
          MR_String mercury__array__Var_52;
          MR_Integer mercury__array__Var_53;
          MR_Integer mercury__array__Var_54;
          MR_Word mercury__array__Var_67;
          MR_Integer mercury__array__V_7_81;
          MR_Box mercury__array__conv0_Var_51;
          MR_Box mercury__array__conv1_Var_52;
          MR_Integer mercury__array__V_8_82;

          mercury__array__succeeded = (mercury__array__Lo_14 < mercury__array__Hi_15);
          if (mercury__array__succeeded)
          {
            mercury__array__Var_50 = (MR_Integer) 2;
            mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_66, (MR_ArrayPtr) mercury__array__A0_10, mercury__array__Lo_14, &mercury__array__conv0_Var_51);
            mercury__array__Var_51 = ((MR_String) mercury__array__conv0_Var_51);
            mercury__array__Var_54 = (MR_Integer) 1;
            mercury__array__Var_53 = (mercury__array__Lo_14 + mercury__array__Var_54);
            mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_66, (MR_ArrayPtr) mercury__array__A0_10, mercury__array__Var_53, &mercury__array__conv1_Var_52);
            mercury__array__Var_52 = ((MR_String) mercury__array__conv1_Var_52);
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__array__Var_51 ;
	S2 =  mercury__array__Var_52 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__array__V_7_81  = Res;
}
            mercury__array__V_8_82 = (MR_Integer) 0;
            mercury__array__succeeded = (mercury__array__V_7_81 < mercury__array__V_8_82);
            if (mercury__array__succeeded)
              mercury__array__Var_67 = (MR_Integer) 1;
            else
            {
              mercury__array__succeeded = (mercury__array__V_7_81 == (MR_Integer) 0);
              if (mercury__array__succeeded)
                mercury__array__Var_67 = (MR_Integer) 0;
              else
                mercury__array__Var_67 = (MR_Integer) 2;
            }
            mercury__array__succeeded = (mercury__array__Var_50 == mercury__array__Var_67);
          }
          if (mercury__array__succeeded)
          {
            MR_Integer mercury__array__Var_56;
            MR_Integer mercury__array__Var_57;

            mercury__array__J_39 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0((MR_Integer) 1, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
            mercury__array__Var_56 = (mercury__array__J_39 - (MR_Integer) 1);
            mercury__array__Var_57 = (mercury__array__J_39 - (MR_Integer) 1);
            mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_56, mercury__array__Var_57, mercury__array__B0_12, &mercury__array__B1_38);
          }
          else
          {
            MR_Integer mercury__array__Var_62;

            mercury__array__J_39 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0((MR_Integer) 2, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
            mercury__array__Var_62 = (mercury__array__J_39 - (MR_Integer) 1);
            mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_62, mercury__array__Lo_14, mercury__array__B0_12, &mercury__array__B1_38);
          }
          mercury__array__Var_36 = (mercury__array__N_9 + (MR_Integer) 1);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_N_9 = mercury__array__Var_36;
            MR_ArrayPtr mercury__array__next_value_of_A0_10 = mercury__array__B1_38;
            MR_ArrayPtr mercury__array__next_value_of_B0_12 = mercury__array__A0_10;
            MR_Integer mercury__array__next_value_of_I_16 = mercury__array__J_39;

            mercury__array__N_9 = mercury__array__next_value_of_N_9;
            mercury__array__A0_10 = mercury__array__next_value_of_A0_10;
            mercury__array__B0_12 = mercury__array__next_value_of_B0_12;
            mercury__array__I_16 = mercury__array__next_value_of_I_16;
          }
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(
  MR_Integer mercury__array__N_9,
  MR_ArrayPtr mercury__array__A0_10,
  MR_ArrayPtr * mercury__array__A_11,
  MR_ArrayPtr mercury__array__B0_12,
  MR_ArrayPtr * mercury__array__B_13,
  MR_Integer mercury__array__Lo_14,
  MR_Integer mercury__array__Hi_15,
  MR_Integer * mercury__array__I_16)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__Lo_14 > mercury__array__Hi_15);

    if (mercury__array__succeeded)
    {
      *mercury__array__A_11 = mercury__array__A0_10;
      *mercury__array__B_13 = mercury__array__B0_12;
      *mercury__array__I_16 = mercury__array__Lo_14;
    }
    else
    {
      mercury__array__succeeded = (mercury__array__N_9 > (MR_Integer) 0);
      if (mercury__array__succeeded)
      {
        MR_ArrayPtr mercury__array__B1_17;
        MR_ArrayPtr mercury__array__A1_18;
        MR_Integer mercury__array__J_19;
        MR_ArrayPtr mercury__array__B2_20;
        MR_Integer mercury__array__Var_23 = (mercury__array__N_9 - (MR_Integer) 1);
        MR_Integer mercury__array__Var_25;
        MR_Integer mercury__array__Var_27;
        MR_Integer mercury__array__Var_28;

        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(mercury__array__Var_23, mercury__array__B0_12, &mercury__array__B1_17, mercury__array__A0_10, &mercury__array__A1_18, mercury__array__Lo_14, mercury__array__Hi_15, &mercury__array__J_19);
        mercury__array__Var_25 = (mercury__array__N_9 - (MR_Integer) 1);
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(mercury__array__Var_25, mercury__array__B1_17, &mercury__array__B2_20, mercury__array__A1_18, mercury__array__A_11, mercury__array__J_19, mercury__array__Hi_15, mercury__array__I_16);
        mercury__array__Var_27 = (mercury__array__J_19 - (MR_Integer) 1);
        mercury__array__Var_28 = (*mercury__array__I_16 - (MR_Integer) 1);
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(*mercury__array__A_11, mercury__array__Lo_14, mercury__array__Var_27, mercury__array__J_19, mercury__array__Var_28, mercury__array__Lo_14, mercury__array__B2_20, mercury__array__B_13);
      }
      else
      {
        MR_Word mercury__array__TypeInfo_for_T_58;
        MR_Word mercury__array__Var_42;
        MR_Integer mercury__array__Var_43;
        MR_Integer mercury__array__Var_44;
        MR_Integer mercury__array__Var_45;
        MR_Integer mercury__array__Var_46;
        MR_Word mercury__array__Var_59;
        MR_Box mercury__array__conv0_Var_43;
        MR_Box mercury__array__conv1_Var_44;

        *mercury__array__A_11 = mercury__array__A0_10;
        mercury__array__TypeInfo_for_T_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        mercury__array__succeeded = (mercury__array__Lo_14 < mercury__array__Hi_15);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_42 = (MR_Integer) 2;
          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_58, (MR_ArrayPtr) mercury__array__A0_10, mercury__array__Lo_14, &mercury__array__conv0_Var_43);
          mercury__array__Var_43 = ((MR_Integer) mercury__array__conv0_Var_43);
          mercury__array__Var_46 = (MR_Integer) 1;
          mercury__array__Var_45 = (mercury__array__Lo_14 + mercury__array__Var_46);
          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_58, (MR_ArrayPtr) mercury__array__A0_10, mercury__array__Var_45, &mercury__array__conv1_Var_44);
          mercury__array__Var_44 = ((MR_Integer) mercury__array__conv1_Var_44);
          mercury__array__succeeded = (mercury__array__Var_43 < mercury__array__Var_44);
          if (mercury__array__succeeded)
            mercury__array__Var_59 = (MR_Integer) 1;
          else
          {
            mercury__array__succeeded = (mercury__array__Var_43 == mercury__array__Var_44);
            if (mercury__array__succeeded)
              mercury__array__Var_59 = (MR_Integer) 0;
            else
              mercury__array__Var_59 = (MR_Integer) 2;
          }
          mercury__array__succeeded = (mercury__array__Var_42 == mercury__array__Var_59);
        }
        if (mercury__array__succeeded)
        {
          MR_Integer mercury__array__Var_48;
          MR_Integer mercury__array__Var_49;

          *mercury__array__I_16 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0((MR_Integer) 1, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
          mercury__array__Var_48 = (*mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__Var_49 = (*mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_48, mercury__array__Var_49, mercury__array__B0_12, mercury__array__B_13);
        }
        else
        {
          MR_Integer mercury__array__Var_54;

          *mercury__array__I_16 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0((MR_Integer) 2, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
          mercury__array__Var_54 = (*mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_54, mercury__array__Lo_14, mercury__array__B0_12, mercury__array__B_13);
        }
      }
    }
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(
  MR_Integer mercury__array__N_9,
  MR_ArrayPtr mercury__array__A0_10,
  MR_ArrayPtr * mercury__array__A_11,
  MR_ArrayPtr mercury__array__B0_12,
  MR_ArrayPtr * mercury__array__B_13,
  MR_Integer mercury__array__Lo_14,
  MR_Integer mercury__array__Hi_15,
  MR_Integer * mercury__array__I_16)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__Lo_14 > mercury__array__Hi_15);

    if (mercury__array__succeeded)
    {
      *mercury__array__A_11 = mercury__array__A0_10;
      *mercury__array__B_13 = mercury__array__B0_12;
      *mercury__array__I_16 = mercury__array__Lo_14;
    }
    else
    {
      mercury__array__succeeded = (mercury__array__N_9 > (MR_Integer) 0);
      if (mercury__array__succeeded)
      {
        MR_ArrayPtr mercury__array__B1_17;
        MR_ArrayPtr mercury__array__A1_18;
        MR_Integer mercury__array__J_19;
        MR_ArrayPtr mercury__array__B2_20;
        MR_Integer mercury__array__Var_23 = (mercury__array__N_9 - (MR_Integer) 1);
        MR_Integer mercury__array__Var_25;
        MR_Integer mercury__array__Var_27;
        MR_Integer mercury__array__Var_28;

        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(mercury__array__Var_23, mercury__array__B0_12, &mercury__array__B1_17, mercury__array__A0_10, &mercury__array__A1_18, mercury__array__Lo_14, mercury__array__Hi_15, &mercury__array__J_19);
        mercury__array__Var_25 = (mercury__array__N_9 - (MR_Integer) 1);
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(mercury__array__Var_25, mercury__array__B1_17, &mercury__array__B2_20, mercury__array__A1_18, mercury__array__A_11, mercury__array__J_19, mercury__array__Hi_15, mercury__array__I_16);
        mercury__array__Var_27 = (mercury__array__J_19 - (MR_Integer) 1);
        mercury__array__Var_28 = (*mercury__array__I_16 - (MR_Integer) 1);
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(*mercury__array__A_11, mercury__array__Lo_14, mercury__array__Var_27, mercury__array__J_19, mercury__array__Var_28, mercury__array__Lo_14, mercury__array__B2_20, mercury__array__B_13);
      }
      else
      {
        MR_Word mercury__array__TypeInfo_for_T_58;
        MR_Word mercury__array__Var_42;
        MR_String mercury__array__Var_43;
        MR_String mercury__array__Var_44;
        MR_Integer mercury__array__Var_45;
        MR_Integer mercury__array__Var_46;
        MR_Word mercury__array__Var_59;
        MR_Integer mercury__array__V_7_73;
        MR_Box mercury__array__conv0_Var_43;
        MR_Box mercury__array__conv1_Var_44;
        MR_Integer mercury__array__V_8_74;

        *mercury__array__A_11 = mercury__array__A0_10;
        mercury__array__TypeInfo_for_T_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__array__succeeded = (mercury__array__Lo_14 < mercury__array__Hi_15);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_42 = (MR_Integer) 2;
          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_58, (MR_ArrayPtr) mercury__array__A0_10, mercury__array__Lo_14, &mercury__array__conv0_Var_43);
          mercury__array__Var_43 = ((MR_String) mercury__array__conv0_Var_43);
          mercury__array__Var_46 = (MR_Integer) 1;
          mercury__array__Var_45 = (mercury__array__Lo_14 + mercury__array__Var_46);
          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_58, (MR_ArrayPtr) mercury__array__A0_10, mercury__array__Var_45, &mercury__array__conv1_Var_44);
          mercury__array__Var_44 = ((MR_String) mercury__array__conv1_Var_44);
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__array__Var_43 ;
	S2 =  mercury__array__Var_44 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__array__V_7_73  = Res;
}
          mercury__array__V_8_74 = (MR_Integer) 0;
          mercury__array__succeeded = (mercury__array__V_7_73 < mercury__array__V_8_74);
          if (mercury__array__succeeded)
            mercury__array__Var_59 = (MR_Integer) 1;
          else
          {
            mercury__array__succeeded = (mercury__array__V_7_73 == (MR_Integer) 0);
            if (mercury__array__succeeded)
              mercury__array__Var_59 = (MR_Integer) 0;
            else
              mercury__array__Var_59 = (MR_Integer) 2;
          }
          mercury__array__succeeded = (mercury__array__Var_42 == mercury__array__Var_59);
        }
        if (mercury__array__succeeded)
        {
          MR_Integer mercury__array__Var_48;
          MR_Integer mercury__array__Var_49;

          *mercury__array__I_16 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0((MR_Integer) 1, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
          mercury__array__Var_48 = (*mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__Var_49 = (*mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_48, mercury__array__Var_49, mercury__array__B0_12, mercury__array__B_13);
        }
        else
        {
          MR_Integer mercury__array__Var_54;

          *mercury__array__I_16 = mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0((MR_Integer) 2, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
          mercury__array__Var_54 = (*mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_54, mercury__array__Lo_14, mercury__array__B0_12, mercury__array__B_13);
        }
      }
    }
  }
}

static MR_Integer MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_f_0(
  MR_Word mercury__array__R_6,
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_8 < mercury__array__Hi_9);
      MR_Integer mercury__array__HeadVar__5_5;
      MR_Word mercury__array__TypeInfo_for_T_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      MR_Integer mercury__array__Var_10;
      MR_Integer mercury__array__Var_11;
      MR_Integer mercury__array__Var_12;
      MR_Integer mercury__array__Var_13;
      MR_Word mercury__array__Var_18;
      MR_Box mercury__array__conv0_Var_10;
      MR_Box mercury__array__conv1_Var_11;

      if (mercury__array__succeeded)
      {
        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_17, (MR_ArrayPtr) mercury__array__A_7, mercury__array__Lo_8, &mercury__array__conv0_Var_10);
        mercury__array__Var_10 = ((MR_Integer) mercury__array__conv0_Var_10);
        mercury__array__Var_13 = (MR_Integer) 1;
        mercury__array__Var_12 = (mercury__array__Lo_8 + mercury__array__Var_13);
        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_17, (MR_ArrayPtr) mercury__array__A_7, mercury__array__Var_12, &mercury__array__conv1_Var_11);
        mercury__array__Var_11 = ((MR_Integer) mercury__array__conv1_Var_11);
        mercury__array__succeeded = (mercury__array__Var_10 < mercury__array__Var_11);
        if (mercury__array__succeeded)
          mercury__array__Var_18 = (MR_Integer) 1;
        else
        {
          mercury__array__succeeded = (mercury__array__Var_10 == mercury__array__Var_11);
          if (mercury__array__succeeded)
            mercury__array__Var_18 = (MR_Integer) 0;
          else
            mercury__array__Var_18 = (MR_Integer) 2;
        }
        mercury__array__succeeded = (mercury__array__R_6 == mercury__array__Var_18);
        mercury__array__succeeded = !(mercury__array__succeeded);
      }
      if (mercury__array__succeeded)
      {
        MR_Integer mercury__array__Var_14 = (mercury__array__Lo_8 + (MR_Integer) 1);

        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Lo_8 = mercury__array__Var_14;

          mercury__array__Lo_8 = mercury__array__next_value_of_Lo_8;
        }
        continue;
      }
      else
      {
        mercury__array__HeadVar__5_5 = (mercury__array__Lo_8 + (MR_Integer) 1);
      }
      return mercury__array__HeadVar__5_5;
    }
    break;
  }
}

static MR_Integer MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0(
  MR_Word mercury__array__R_6,
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_8 < mercury__array__Hi_9);
      MR_Integer mercury__array__HeadVar__5_5;
      MR_Word mercury__array__TypeInfo_for_T_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_String mercury__array__Var_10;
      MR_String mercury__array__Var_11;
      MR_Integer mercury__array__Var_12;
      MR_Integer mercury__array__Var_13;
      MR_Word mercury__array__Var_18;
      MR_Integer mercury__array__V_7_32;
      MR_Box mercury__array__conv0_Var_10;
      MR_Box mercury__array__conv1_Var_11;
      MR_Integer mercury__array__V_8_33;

      if (mercury__array__succeeded)
      {
        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_17, (MR_ArrayPtr) mercury__array__A_7, mercury__array__Lo_8, &mercury__array__conv0_Var_10);
        mercury__array__Var_10 = ((MR_String) mercury__array__conv0_Var_10);
        mercury__array__Var_13 = (MR_Integer) 1;
        mercury__array__Var_12 = (mercury__array__Lo_8 + mercury__array__Var_13);
        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_17, (MR_ArrayPtr) mercury__array__A_7, mercury__array__Var_12, &mercury__array__conv1_Var_11);
        mercury__array__Var_11 = ((MR_String) mercury__array__conv1_Var_11);
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_f_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__array__Var_10 ;
	S2 =  mercury__array__Var_11 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__array__V_7_32  = Res;
}
        mercury__array__V_8_33 = (MR_Integer) 0;
        mercury__array__succeeded = (mercury__array__V_7_32 < mercury__array__V_8_33);
        if (mercury__array__succeeded)
          mercury__array__Var_18 = (MR_Integer) 1;
        else
        {
          mercury__array__succeeded = (mercury__array__V_7_32 == (MR_Integer) 0);
          if (mercury__array__succeeded)
            mercury__array__Var_18 = (MR_Integer) 0;
          else
            mercury__array__Var_18 = (MR_Integer) 2;
        }
        mercury__array__succeeded = (mercury__array__R_6 == mercury__array__Var_18);
        mercury__array__succeeded = !(mercury__array__succeeded);
      }
      if (mercury__array__succeeded)
      {
        MR_Integer mercury__array__Var_14 = (mercury__array__Lo_8 + (MR_Integer) 1);

        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Lo_8 = mercury__array__Var_14;

          mercury__array__Lo_8 = mercury__array__next_value_of_Lo_8;
        }
        continue;
      }
      else
      {
        mercury__array__HeadVar__5_5 = (mercury__array__Lo_8 + (MR_Integer) 1);
      }
      return mercury__array__HeadVar__5_5;
    }
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_8 <= mercury__array__Hi_9);
      MR_Word mercury__array__TypeInfo_for_T_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

      if (mercury__array__succeeded)
      {
        MR_Integer mercury__array__X_12;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_B_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_17;
        MR_Box mercury__array__conv0_X_12;
        MR_ArrayPtr mercury__array__conv1_STATE_VARIABLE_B_15_15;

        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_21, (MR_ArrayPtr) mercury__array__A_7, mercury__array__Lo_8, &mercury__array__conv0_X_12);
        mercury__array__X_12 = ((MR_Integer) mercury__array__conv0_X_12);
        mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_21, mercury__array__I_10, ((MR_Box) (mercury__array__X_12)), (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_13, &mercury__array__conv1_STATE_VARIABLE_B_15_15);
        mercury__array__STATE_VARIABLE_B_15_15 = (MR_ArrayPtr) mercury__array__conv1_STATE_VARIABLE_B_15_15;
        mercury__array__Var_16 = (mercury__array__Lo_8 + (MR_Integer) 1);
        mercury__array__Var_17 = (mercury__array__I_10 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Lo_8 = mercury__array__Var_16;
          MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_17;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_13 = mercury__array__STATE_VARIABLE_B_15_15;

          mercury__array__Lo_8 = mercury__array__next_value_of_Lo_8;
          mercury__array__I_10 = mercury__array__next_value_of_I_10;
          mercury__array__STATE_VARIABLE_B_0_13 = mercury__array__next_value_of_STATE_VARIABLE_B_0_13;
        }
        continue;
      }
      else
        *mercury__array__STATE_VARIABLE_B_14 = mercury__array__STATE_VARIABLE_B_0_13;
    }
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_8 <= mercury__array__Hi_9);
      MR_Word mercury__array__TypeInfo_for_T_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

      if (mercury__array__succeeded)
      {
        MR_String mercury__array__X_12;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_B_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_17;
        MR_Box mercury__array__conv0_X_12;
        MR_ArrayPtr mercury__array__conv1_STATE_VARIABLE_B_15_15;

        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_21, (MR_ArrayPtr) mercury__array__A_7, mercury__array__Lo_8, &mercury__array__conv0_X_12);
        mercury__array__X_12 = ((MR_String) mercury__array__conv0_X_12);
        mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_21, mercury__array__I_10, ((MR_Box) (mercury__array__X_12)), (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_13, &mercury__array__conv1_STATE_VARIABLE_B_15_15);
        mercury__array__STATE_VARIABLE_B_15_15 = (MR_ArrayPtr) mercury__array__conv1_STATE_VARIABLE_B_15_15;
        mercury__array__Var_16 = (mercury__array__Lo_8 + (MR_Integer) 1);
        mercury__array__Var_17 = (mercury__array__I_10 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Lo_8 = mercury__array__Var_16;
          MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_17;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_13 = mercury__array__STATE_VARIABLE_B_15_15;

          mercury__array__Lo_8 = mercury__array__next_value_of_Lo_8;
          mercury__array__I_10 = mercury__array__next_value_of_I_10;
          mercury__array__STATE_VARIABLE_B_0_13 = mercury__array__next_value_of_STATE_VARIABLE_B_0_13;
        }
        continue;
      }
      else
        *mercury__array__STATE_VARIABLE_B_14 = mercury__array__STATE_VARIABLE_B_0_13;
    }
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_p_0(
  MR_ArrayPtr mercury__array__A_9,
  MR_Integer mercury__array__Lo1_10,
  MR_Integer mercury__array__Hi1_11,
  MR_Integer mercury__array__Lo2_12,
  MR_Integer mercury__array__Hi2_13,
  MR_Integer mercury__array__I_14,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo1_10 > mercury__array__Hi1_11);
      MR_Word mercury__array__TypeInfo_for_T_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

      if (mercury__array__succeeded)
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(mercury__array__A_9, mercury__array__Lo2_12, mercury__array__Hi2_13, mercury__array__I_14, mercury__array__STATE_VARIABLE_B_0_19, mercury__array__STATE_VARIABLE_B_20);
      else
      {
        mercury__array__succeeded = (mercury__array__Lo2_12 > mercury__array__Hi2_13);
        if (mercury__array__succeeded)
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(mercury__array__A_9, mercury__array__Lo1_10, mercury__array__Hi1_11, mercury__array__I_14, mercury__array__STATE_VARIABLE_B_0_19, mercury__array__STATE_VARIABLE_B_20);
        else
        {
          MR_Integer mercury__array__X1_16;
          MR_Integer mercury__array__X2_17;
          MR_Word mercury__array__R_18;
          MR_Box mercury__array__conv0_X1_16;
          MR_Box mercury__array__conv1_X2_17;

          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_41, (MR_ArrayPtr) mercury__array__A_9, mercury__array__Lo1_10, &mercury__array__conv0_X1_16);
          mercury__array__X1_16 = ((MR_Integer) mercury__array__conv0_X1_16);
          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_41, (MR_ArrayPtr) mercury__array__A_9, mercury__array__Lo2_12, &mercury__array__conv1_X2_17);
          mercury__array__X2_17 = ((MR_Integer) mercury__array__conv1_X2_17);
          mercury__array__succeeded = (mercury__array__X1_16 < mercury__array__X2_17);
          if (mercury__array__succeeded)
            mercury__array__R_18 = (MR_Integer) 1;
          else
          {
            mercury__array__succeeded = (mercury__array__X1_16 == mercury__array__X2_17);
            if (mercury__array__succeeded)
              mercury__array__R_18 = (MR_Integer) 0;
            else
              mercury__array__R_18 = (MR_Integer) 2;
          }
          switch (mercury__array__R_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_ArrayPtr mercury__array__STATE_VARIABLE_B_35_35;
                MR_Integer mercury__array__Var_36;
                MR_Integer mercury__array__Var_37;
                MR_ArrayPtr mercury__array__conv2_STATE_VARIABLE_B_35_35;

                mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__I_14, ((MR_Box) (mercury__array__X1_16)), (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_19, &mercury__array__conv2_STATE_VARIABLE_B_35_35);
                mercury__array__STATE_VARIABLE_B_35_35 = (MR_ArrayPtr) mercury__array__conv2_STATE_VARIABLE_B_35_35;
                mercury__array__Var_36 = (mercury__array__Lo1_10 + (MR_Integer) 1);
                mercury__array__Var_37 = (mercury__array__I_14 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo1_10 = mercury__array__Var_36;
                  MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_37;
                  MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_19 = mercury__array__STATE_VARIABLE_B_35_35;

                  mercury__array__Lo1_10 = mercury__array__next_value_of_Lo1_10;
                  mercury__array__I_14 = mercury__array__next_value_of_I_14;
                  mercury__array__STATE_VARIABLE_B_0_19 = mercury__array__next_value_of_STATE_VARIABLE_B_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_ArrayPtr mercury__array__STATE_VARIABLE_B_29_29;
                MR_Integer mercury__array__Var_30;
                MR_Integer mercury__array__Var_31;
                MR_ArrayPtr mercury__array__conv3_STATE_VARIABLE_B_29_29;

                mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__I_14, ((MR_Box) (mercury__array__X1_16)), (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_19, &mercury__array__conv3_STATE_VARIABLE_B_29_29);
                mercury__array__STATE_VARIABLE_B_29_29 = (MR_ArrayPtr) mercury__array__conv3_STATE_VARIABLE_B_29_29;
                mercury__array__Var_30 = (mercury__array__Lo1_10 + (MR_Integer) 1);
                mercury__array__Var_31 = (mercury__array__I_14 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo1_10 = mercury__array__Var_30;
                  MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_31;
                  MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_19 = mercury__array__STATE_VARIABLE_B_29_29;

                  mercury__array__Lo1_10 = mercury__array__next_value_of_Lo1_10;
                  mercury__array__I_14 = mercury__array__next_value_of_I_14;
                  mercury__array__STATE_VARIABLE_B_0_19 = mercury__array__next_value_of_STATE_VARIABLE_B_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_ArrayPtr mercury__array__STATE_VARIABLE_B_23_23;
                MR_Integer mercury__array__Var_24;
                MR_Integer mercury__array__Var_25;
                MR_ArrayPtr mercury__array__conv4_STATE_VARIABLE_B_23_23;

                mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__I_14, ((MR_Box) (mercury__array__X2_17)), (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_19, &mercury__array__conv4_STATE_VARIABLE_B_23_23);
                mercury__array__STATE_VARIABLE_B_23_23 = (MR_ArrayPtr) mercury__array__conv4_STATE_VARIABLE_B_23_23;
                mercury__array__Var_24 = (mercury__array__Lo2_12 + (MR_Integer) 1);
                mercury__array__Var_25 = (mercury__array__I_14 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo2_12 = mercury__array__Var_24;
                  MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_25;
                  MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_19 = mercury__array__STATE_VARIABLE_B_23_23;

                  mercury__array__Lo2_12 = mercury__array__next_value_of_Lo2_12;
                  mercury__array__I_14 = mercury__array__next_value_of_I_14;
                  mercury__array__STATE_VARIABLE_B_0_19 = mercury__array__next_value_of_STATE_VARIABLE_B_0_19;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_p_0(
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_8 <= mercury__array__Hi_9);
      MR_Word mercury__array__TypeInfo_for_T_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

      if (mercury__array__succeeded)
      {
        MR_Integer mercury__array__X_12;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_B_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_17;
        MR_Box mercury__array__conv0_X_12;
        MR_ArrayPtr mercury__array__conv1_STATE_VARIABLE_B_15_15;

        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_21, (MR_ArrayPtr) mercury__array__A_7, mercury__array__Lo_8, &mercury__array__conv0_X_12);
        mercury__array__X_12 = ((MR_Integer) mercury__array__conv0_X_12);
        mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_21, mercury__array__I_10, ((MR_Box) (mercury__array__X_12)), (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_13, &mercury__array__conv1_STATE_VARIABLE_B_15_15);
        mercury__array__STATE_VARIABLE_B_15_15 = (MR_ArrayPtr) mercury__array__conv1_STATE_VARIABLE_B_15_15;
        mercury__array__Var_16 = (mercury__array__Lo_8 + (MR_Integer) 1);
        mercury__array__Var_17 = (mercury__array__I_10 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Lo_8 = mercury__array__Var_16;
          MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_17;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_13 = mercury__array__STATE_VARIABLE_B_15_15;

          mercury__array__Lo_8 = mercury__array__next_value_of_Lo_8;
          mercury__array__I_10 = mercury__array__next_value_of_I_10;
          mercury__array__STATE_VARIABLE_B_0_13 = mercury__array__next_value_of_STATE_VARIABLE_B_0_13;
        }
        continue;
      }
      else
        *mercury__array__STATE_VARIABLE_B_14 = mercury__array__STATE_VARIABLE_B_0_13;
    }
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0(
  MR_ArrayPtr mercury__array__A_9,
  MR_Integer mercury__array__Lo1_10,
  MR_Integer mercury__array__Hi1_11,
  MR_Integer mercury__array__Lo2_12,
  MR_Integer mercury__array__Hi2_13,
  MR_Integer mercury__array__I_14,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo1_10 > mercury__array__Hi1_11);
      MR_Word mercury__array__TypeInfo_for_T_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

      if (mercury__array__succeeded)
        mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(mercury__array__A_9, mercury__array__Lo2_12, mercury__array__Hi2_13, mercury__array__I_14, mercury__array__STATE_VARIABLE_B_0_19, mercury__array__STATE_VARIABLE_B_20);
      else
      {
        mercury__array__succeeded = (mercury__array__Lo2_12 > mercury__array__Hi2_13);
        if (mercury__array__succeeded)
          mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(mercury__array__A_9, mercury__array__Lo1_10, mercury__array__Hi1_11, mercury__array__I_14, mercury__array__STATE_VARIABLE_B_0_19, mercury__array__STATE_VARIABLE_B_20);
        else
        {
          MR_String mercury__array__X1_16;
          MR_String mercury__array__X2_17;
          MR_Word mercury__array__R_18;
          MR_Integer mercury__array__V_7_45;
          MR_Box mercury__array__conv0_X1_16;
          MR_Box mercury__array__conv1_X2_17;

          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_41, (MR_ArrayPtr) mercury__array__A_9, mercury__array__Lo1_10, &mercury__array__conv0_X1_16);
          mercury__array__X1_16 = ((MR_String) mercury__array__conv0_X1_16);
          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_41, (MR_ArrayPtr) mercury__array__A_9, mercury__array__Lo2_12, &mercury__array__conv1_X2_17);
          mercury__array__X2_17 = ((MR_String) mercury__array__conv1_X2_17);
{
#define MR_PROC_LABEL mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__array__X1_16 ;
	S2 =  mercury__array__X2_17 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__array__V_7_45  = Res;
}
          mercury__array__succeeded = (mercury__array__V_7_45 < (MR_Integer) 0);
          if (mercury__array__succeeded)
            mercury__array__R_18 = (MR_Integer) 1;
          else
          {
            mercury__array__succeeded = (mercury__array__V_7_45 == (MR_Integer) 0);
            if (mercury__array__succeeded)
              mercury__array__R_18 = (MR_Integer) 0;
            else
              mercury__array__R_18 = (MR_Integer) 2;
          }
          switch (mercury__array__R_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_ArrayPtr mercury__array__STATE_VARIABLE_B_35_35;
                MR_Integer mercury__array__Var_36;
                MR_Integer mercury__array__Var_37;
                MR_ArrayPtr mercury__array__conv2_STATE_VARIABLE_B_35_35;

                mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__I_14, ((MR_Box) (mercury__array__X1_16)), (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_19, &mercury__array__conv2_STATE_VARIABLE_B_35_35);
                mercury__array__STATE_VARIABLE_B_35_35 = (MR_ArrayPtr) mercury__array__conv2_STATE_VARIABLE_B_35_35;
                mercury__array__Var_36 = (mercury__array__Lo1_10 + (MR_Integer) 1);
                mercury__array__Var_37 = (mercury__array__I_14 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo1_10 = mercury__array__Var_36;
                  MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_37;
                  MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_19 = mercury__array__STATE_VARIABLE_B_35_35;

                  mercury__array__Lo1_10 = mercury__array__next_value_of_Lo1_10;
                  mercury__array__I_14 = mercury__array__next_value_of_I_14;
                  mercury__array__STATE_VARIABLE_B_0_19 = mercury__array__next_value_of_STATE_VARIABLE_B_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_ArrayPtr mercury__array__STATE_VARIABLE_B_29_29;
                MR_Integer mercury__array__Var_30;
                MR_Integer mercury__array__Var_31;
                MR_ArrayPtr mercury__array__conv3_STATE_VARIABLE_B_29_29;

                mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__I_14, ((MR_Box) (mercury__array__X1_16)), (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_19, &mercury__array__conv3_STATE_VARIABLE_B_29_29);
                mercury__array__STATE_VARIABLE_B_29_29 = (MR_ArrayPtr) mercury__array__conv3_STATE_VARIABLE_B_29_29;
                mercury__array__Var_30 = (mercury__array__Lo1_10 + (MR_Integer) 1);
                mercury__array__Var_31 = (mercury__array__I_14 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo1_10 = mercury__array__Var_30;
                  MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_31;
                  MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_19 = mercury__array__STATE_VARIABLE_B_29_29;

                  mercury__array__Lo1_10 = mercury__array__next_value_of_Lo1_10;
                  mercury__array__I_14 = mercury__array__next_value_of_I_14;
                  mercury__array__STATE_VARIABLE_B_0_19 = mercury__array__next_value_of_STATE_VARIABLE_B_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_ArrayPtr mercury__array__STATE_VARIABLE_B_23_23;
                MR_Integer mercury__array__Var_24;
                MR_Integer mercury__array__Var_25;
                MR_ArrayPtr mercury__array__conv4_STATE_VARIABLE_B_23_23;

                mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__I_14, ((MR_Box) (mercury__array__X2_17)), (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_19, &mercury__array__conv4_STATE_VARIABLE_B_23_23);
                mercury__array__STATE_VARIABLE_B_23_23 = (MR_ArrayPtr) mercury__array__conv4_STATE_VARIABLE_B_23_23;
                mercury__array__Var_24 = (mercury__array__Lo2_12 + (MR_Integer) 1);
                mercury__array__Var_25 = (mercury__array__I_14 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo2_12 = mercury__array__Var_24;
                  MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_25;
                  MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_19 = mercury__array__STATE_VARIABLE_B_23_23;

                  mercury__array__Lo2_12 = mercury__array__next_value_of_Lo2_12;
                  mercury__array__I_14 = mercury__array__next_value_of_I_14;
                  mercury__array__STATE_VARIABLE_B_0_19 = mercury__array__next_value_of_STATE_VARIABLE_B_0_19;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__array__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_p_0(
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_8 <= mercury__array__Hi_9);
      MR_Word mercury__array__TypeInfo_for_T_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

      if (mercury__array__succeeded)
      {
        MR_String mercury__array__X_12;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_B_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_17;
        MR_Box mercury__array__conv0_X_12;
        MR_ArrayPtr mercury__array__conv1_STATE_VARIABLE_B_15_15;

        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_21, (MR_ArrayPtr) mercury__array__A_7, mercury__array__Lo_8, &mercury__array__conv0_X_12);
        mercury__array__X_12 = ((MR_String) mercury__array__conv0_X_12);
        mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_21, mercury__array__I_10, ((MR_Box) (mercury__array__X_12)), (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_13, &mercury__array__conv1_STATE_VARIABLE_B_15_15);
        mercury__array__STATE_VARIABLE_B_15_15 = (MR_ArrayPtr) mercury__array__conv1_STATE_VARIABLE_B_15_15;
        mercury__array__Var_16 = (mercury__array__Lo_8 + (MR_Integer) 1);
        mercury__array__Var_17 = (mercury__array__I_10 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Lo_8 = mercury__array__Var_16;
          MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_17;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_13 = mercury__array__STATE_VARIABLE_B_15_15;

          mercury__array__Lo_8 = mercury__array__next_value_of_Lo_8;
          mercury__array__I_10 = mercury__array__next_value_of_I_10;
          mercury__array__STATE_VARIABLE_B_0_13 = mercury__array__next_value_of_STATE_VARIABLE_B_0_13;
        }
        continue;
      }
      else
        *mercury__array__STATE_VARIABLE_B_14 = mercury__array__STATE_VARIABLE_B_0_13;
    }
    break;
  }
}

static MR_Box MR_CALL 
mercury__array__IntroducedFrom__func__array_to_doc_2__3154__1_3_f_0_1(
  MR_Box mercury__array__closure_arg)
{
  {
    MR_Box mercury__array__wrapper_arg_1;
    MR_Box mercury__array__closure = mercury__array__closure_arg;
    MR_Word mercury__array__conv0_LambdaHeadVar__1_24;

    mercury__array__conv0_LambdaHeadVar__1_24 = mercury__array__IntroducedFrom__func__array_to_doc_2__3154__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__array__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array__closure, (MR_Integer) 4))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array__closure, (MR_Integer) 5))));
    mercury__array__wrapper_arg_1 = ((MR_Box) (mercury__array__conv0_LambdaHeadVar__1_24));
    return mercury__array__wrapper_arg_1;
  }
}

static MR_Word MR_CALL 
mercury__array__IntroducedFrom__func__array_to_doc_2__3154__1_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T_28,
  MR_Integer mercury__array__I_4,
  MR_ArrayPtr mercury__array__A_5)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Word mercury__array__LambdaHeadVar__1_24;
    MR_Integer mercury__array__Var_25 = (mercury__array__I_4 + (MR_Integer) 1);
    MR_Integer mercury__array__Var_32;
    MR_Word mercury__array__TypeInfo_for_T_78;

{
#define MR_PROC_LABEL mercury__array__IntroducedFrom__func__array_to_doc_2__3154__1_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_5 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_32  = Max;
}
    mercury__array__succeeded = (mercury__array__Var_25 > mercury__array__Var_32);
    if (mercury__array__succeeded)
    {
      mercury__array__LambdaHeadVar__1_24 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[3]);
    }
    else
    {
      MR_Word mercury__array__Var_34;
      MR_Word mercury__array__Var_35;
      MR_Word mercury__array__Var_36;
      MR_Box mercury__array__Var_37;
      MR_Word mercury__array__Var_38;
      MR_Word mercury__array__Var_39;
      MR_Word mercury__array__Var_47;
      MR_Word mercury__array__Var_48;
      MR_Word mercury__array__Var_49;
      MR_Word mercury__array__Var_53;
      MR_Word mercury__array__V_4_63;
      MR_Integer mercury__array__Var_54;
      MR_Word mercury__array__TypeInfo_for_T_79;

      mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_28, mercury__array__A_5, mercury__array__Var_25, &mercury__array__Var_37);
      mercury__univ__type_to_univ_2_p_1(mercury__array__TypeInfo_for_T_28, mercury__array__Var_37, &mercury__array__V_4_63);
      {
        mercury__array__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), mercury__array__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), mercury__array__Var_36, 1) = ((MR_Box) (mercury__array__V_4_63));
      }
      mercury__array__Var_35 = mercury__pretty_printer__format_arg_1_f_0(mercury__array__Var_36);
{
#define MR_PROC_LABEL mercury__array__IntroducedFrom__func__array_to_doc_2__3154__1_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_5 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_54  = Max;
}
      mercury__array__succeeded = (mercury__array__Var_25 == mercury__array__Var_54);
      if (mercury__array__succeeded)
      {
        mercury__array__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[3]);
      }
      else
      {
        MR_Word mercury__array__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[2]);
        MR_Word mercury__array__V_4_69 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[7]);
        MR_Word mercury__array__V_5_70 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__array_scalar_common_4[3]);
        MR_Word mercury__array__V_7_71 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[6]);
        MR_Word mercury__array__V_6_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__array__V_8_73 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__array_scalar_common_5[4]);
        MR_Word mercury__array__V_9_74 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[5]);
        MR_Word mercury__array__V_10_75 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__array_scalar_common_4[4]);
        MR_Word mercury__array__V_12_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__array__V_11_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

        mercury__array__Var_39 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__array_scalar_common_5[5]);
      }
      {
        mercury__array__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__array__Var_49, 0) = ((MR_Box) (&mercury__array_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), mercury__array__Var_49, 1) = ((MR_Box) (mercury__array__IntroducedFrom__func__array_to_doc_2__3154__1_3_f_0_1));
        MR_hl_field(MR_mktag(0), mercury__array__Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), mercury__array__Var_49, 3) = ((MR_Box) (mercury__array__TypeInfo_for_T_28));
        MR_hl_field(MR_mktag(0), mercury__array__Var_49, 4) = ((MR_Box) (mercury__array__Var_25));
        MR_hl_field(MR_mktag(0), mercury__array__Var_49, 5) = ((MR_Box) (mercury__array__A_5));
      }
      {
        mercury__array__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), mercury__array__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), mercury__array__Var_48, 1) = ((MR_Box) (mercury__array__Var_49));
      }
      mercury__array__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__array__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__array__Var_47, 0) = ((MR_Box) (mercury__array__Var_48));
        MR_hl_field(MR_mktag(1), mercury__array__Var_47, 1) = ((MR_Box) (mercury__array__Var_53));
      }
      {
        mercury__array__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__array__Var_38, 0) = ((MR_Box) (mercury__array__Var_39));
        MR_hl_field(MR_mktag(1), mercury__array__Var_38, 1) = ((MR_Box) (mercury__array__Var_47));
      }
      {
        mercury__array__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__array__Var_34, 0) = ((MR_Box) (mercury__array__Var_35));
        MR_hl_field(MR_mktag(1), mercury__array__Var_34, 1) = ((MR_Box) (mercury__array__Var_38));
      }
      {
        mercury__array__LambdaHeadVar__1_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), mercury__array__LambdaHeadVar__1_24, 0) = ((MR_Box) (mercury__array__Var_34));
      }
    }
    return mercury__array__LambdaHeadVar__1_24;
  }
}

void MR_CALL 
mercury__array____Compare____index_out_of_bounds_0_0(
  MR_Word * mercury__array__HeadVar__1_1,
  MR_Word mercury__array__HeadVar__2_2,
  MR_Word mercury__array__HeadVar__3_3)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__CastX_6 = (MR_Integer) mercury__array__HeadVar__2_2;
    MR_Integer mercury__array__CastY_7 = (MR_Integer) mercury__array__HeadVar__3_3;

    mercury__array__succeeded = (mercury__array__CastX_6 == mercury__array__CastY_7);
    if (mercury__array__succeeded)
      *mercury__array__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String mercury__array__ArgX1_4 = (MR_String) mercury__array__HeadVar__2_2;
      MR_String mercury__array__ArgY1_5 = (MR_String) mercury__array__HeadVar__3_3;
      MR_Integer mercury__array__V_7_12;

{
#define MR_PROC_LABEL mercury__array____Compare____index_out_of_bounds_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__array__ArgX1_4 ;
	S2 =  mercury__array__ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__array__V_7_12  = Res;
}
      mercury__array__succeeded = (mercury__array__V_7_12 < (MR_Integer) 0);
      if (mercury__array__succeeded)
        *mercury__array__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        mercury__array__succeeded = (mercury__array__V_7_12 == (MR_Integer) 0);
        if (mercury__array__succeeded)
          *mercury__array__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__array__HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__array____Unify____index_out_of_bounds_0_0(
  MR_Word mercury__array__HeadVar__1_1,
  MR_Word mercury__array__HeadVar__2_2)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__CastX_5 = (MR_Integer) mercury__array__HeadVar__1_1;
    MR_Integer mercury__array__CastY_6 = (MR_Integer) mercury__array__HeadVar__2_2;

    mercury__array__succeeded = (mercury__array__CastX_5 == mercury__array__CastY_6);
    if (mercury__array__succeeded)
      mercury__array__succeeded = MR_TRUE;
    else
    {
      MR_String mercury__array__ArgX1_3 = (MR_String) mercury__array__HeadVar__1_1;
      MR_String mercury__array__ArgY1_4 = (MR_String) mercury__array__HeadVar__2_2;

      mercury__array__succeeded = (strcmp(mercury__array__ArgX1_3, mercury__array__ArgY1_4) == 0);
    }
    return mercury__array__succeeded;
  }
}

void MR_CALL 
mercury__array____Compare____array_1_0(
  MR_Word mercury__array__TypeInfo_for_T_6,
  MR_Word * mercury__array__HeadVar__1_1,
  MR_ArrayPtr mercury__array__HeadVar__2_2,
  MR_ArrayPtr mercury__array__HeadVar__3_3)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__CastX_4 = (MR_Integer) mercury__array__HeadVar__2_2;
    MR_Integer mercury__array__CastY_5 = (MR_Integer) mercury__array__HeadVar__3_3;

    mercury__array__succeeded = (mercury__array__CastX_4 == mercury__array__CastY_5);
    if (mercury__array__succeeded)
      *mercury__array__HeadVar__1_1 = (MR_Integer) 0;
    else
      mercury__array__array_compare_3_p_0(mercury__array__TypeInfo_for_T_6, mercury__array__HeadVar__1_1, mercury__array__HeadVar__2_2, mercury__array__HeadVar__3_3);
  }
}

MR_bool MR_CALL 
mercury__array____Unify____array_1_0(
  MR_Word mercury__array__TypeInfo_for_T_5,
  MR_ArrayPtr mercury__array__HeadVar__1_1,
  MR_ArrayPtr mercury__array__HeadVar__2_2)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__CastX_3 = (MR_Integer) mercury__array__HeadVar__1_1;
    MR_Integer mercury__array__CastY_4 = (MR_Integer) mercury__array__HeadVar__2_2;

    mercury__array__succeeded = (mercury__array__CastX_3 == mercury__array__CastY_4);
    if (mercury__array__succeeded)
      mercury__array__succeeded = MR_TRUE;
    else
    {
      MR_Integer mercury__array__Size_8;
      MR_Integer mercury__array__Var_9;
      MR_Integer mercury__array__Var_10;
      MR_Word mercury__array__TypeInfo_for_T_11;
      MR_Word mercury__array__TypeInfo_for_T_12;

{
#define MR_PROC_LABEL mercury__array____Unify____array_1_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__1_1 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Size_8  = Max;
}
{
#define MR_PROC_LABEL mercury__array____Unify____array_1_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__2_2 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Max;
}
      mercury__array__succeeded = (mercury__array__Size_8 == mercury__array__Var_10);
      if (mercury__array__succeeded)
      {
        mercury__array__Var_9 = (MR_Integer) 0;
        mercury__array__succeeded = mercury__array__equal_elements_4_p_0(mercury__array__TypeInfo_for_T_5, mercury__array__Var_9, mercury__array__Size_8, mercury__array__HeadVar__1_1, mercury__array__HeadVar__2_2);
      }
    }
    return mercury__array__succeeded;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__samsort_subarray_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T_13,
  MR_ArrayPtr mercury__array__A0_5,
  MR_Integer mercury__array__Lo_6,
  MR_Integer mercury__array__Hi_7)
{
  {
    MR_ArrayPtr mercury__array__A_8;
    MR_ArrayPtr mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T_16;
    MR_ArrayPtr mercury__array__Var_9;

{
#define MR_PROC_LABEL mercury__array__samsort_subarray_3_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A0_5 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Var_11 );
}
    mercury__array__samsort_up_8_p_0(mercury__array__TypeInfo_for_T_13, (MR_Integer) 0, mercury__array__Var_11, &mercury__array__A_8, mercury__array__A0_5, &mercury__array__Var_9, mercury__array__Lo_6, mercury__array__Hi_7, mercury__array__Lo_6);
    return mercury__array__A_8;
  }
}

void MR_CALL 
mercury__array__swap_elems_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_14,
  MR_Integer mercury__array__I_5,
  MR_Integer mercury__array__J_6,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_A_0_10,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_A_11)
{
  {
    MR_Box mercury__array__XI_8;
    MR_Box mercury__array__XJ_9;
    MR_ArrayPtr mercury__array__STATE_VARIABLE_A_12_12;
    MR_Word mercury__array__TypeInfo_for_T_15;
    MR_Word mercury__array__TypeInfo_for_T_16;

    mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_14, mercury__array__STATE_VARIABLE_A_0_10, mercury__array__I_5, &mercury__array__XI_8);
    mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_14, mercury__array__STATE_VARIABLE_A_0_10, mercury__array__J_6, &mercury__array__XJ_9);
{
#define MR_PROC_LABEL mercury__array__swap_elems_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__I_5 ;
	Item = (MR_Word) mercury__array__XJ_9 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_A_0_10 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_A_12_12 );
}
{
#define MR_PROC_LABEL mercury__array__swap_elems_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__J_6 ;
	Item = (MR_Word) mercury__array__XI_8 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_A_12_12 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__STATE_VARIABLE_A_11 );
}
  }
}

static void MR_CALL 
mercury__array__shrink_2_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_4,
  MR_Integer mercury__array__HeadVar__1_1,
  MR_ArrayPtr mercury__array__HeadVar__2_2,
  MR_ArrayPtr * mercury__array__HeadVar__3_3)
{
  mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_p_0(mercury__array__HeadVar__1_1, mercury__array__HeadVar__2_2, mercury__array__HeadVar__3_3);
}

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Integer mercury__array__HeadVar__1_1,
  MR_ArrayPtr mercury__array__HeadVar__2_2,
  MR_ArrayPtr * mercury__array__HeadVar__3_3)
{
  {
    MR_Word mercury__array__TypeInfo_for_T_5;

{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_p_0

	MR_Integer Size;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Size =  mercury__array__HeadVar__1_1 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__2_2 , Array0);
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_shrink_array(Array, Array0, Size);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__HeadVar__3_3 );
}
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__unsafe_init_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T_5,
  MR_Integer mercury__array__HeadVar__1_1,
  MR_Box mercury__array__HeadVar__2_2,
  MR_Integer mercury__array__HeadVar__3_3)
{
  {
    MR_ArrayPtr mercury__array__HeadVar__4_4;
    MR_Word mercury__array__TypeInfo_for_T_6;

{
#define MR_PROC_LABEL mercury__array__unsafe_init_3_f_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__HeadVar__1_1 ;
	FirstElem = (MR_Word) mercury__array__HeadVar__2_2 ;
	IndexToSet =  mercury__array__HeadVar__3_3 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__HeadVar__4_4 );
}
    return mercury__array__HeadVar__4_4;
  }
}

void MR_CALL 
mercury__array__init_2_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_4,
  MR_Integer mercury__array__HeadVar__1_1,
  MR_Box mercury__array__HeadVar__2_2,
  MR_ArrayPtr * mercury__array__HeadVar__3_3)
{
  {
    MR_Word mercury__array__TypeInfo_for_T_5;

{
#define MR_PROC_LABEL mercury__array__init_2_3_p_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size =  mercury__array__HeadVar__1_1 ;
	Item = (MR_Word) mercury__array__HeadVar__2_2 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__HeadVar__3_3 );
}
  }
}

MR_bool MR_CALL 
mercury__array__bounds_checks_0_p_0(void)
{
  {
    MR_bool mercury__array__succeeded;

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
	if (SUCCESS_INDICATOR) {
	}
mercury__array__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__array_equal_2_p_0(
  MR_Word mercury__array__TypeInfo_for_T_7,
  MR_ArrayPtr mercury__array__Array1_3,
  MR_ArrayPtr mercury__array__Array2_4)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Size_5;
    MR_Integer mercury__array__Var_6;
    MR_Integer mercury__array__Var_8;
    MR_Word mercury__array__TypeInfo_for_T_9;
    MR_Word mercury__array__TypeInfo_for_T_10;

{
#define MR_PROC_LABEL mercury__array__array_equal_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array1_3 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Size_5  = Max;
}
{
#define MR_PROC_LABEL mercury__array__array_equal_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array2_4 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_8  = Max;
}
    mercury__array__succeeded = (mercury__array__Size_5 == mercury__array__Var_8);
    if (mercury__array__succeeded)
    {
      mercury__array__Var_6 = (MR_Integer) 0;
      mercury__array__succeeded = mercury__array__equal_elements_4_p_0(mercury__array__TypeInfo_for_T_7, mercury__array__Var_6, mercury__array__Size_5, mercury__array__Array1_3, mercury__array__Array2_4);
    }
    return mercury__array__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__array__equal_elements_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_12,
  MR_Integer mercury__array__N_5,
  MR_Integer mercury__array__Size_6,
  MR_ArrayPtr mercury__array__Array1_7,
  MR_ArrayPtr mercury__array__Array2_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__N_5 == mercury__array__Size_6);

      if (mercury__array__succeeded)
        mercury__array__succeeded = MR_TRUE;
      else
      {
        MR_Box mercury__array__Elem_9;
        MR_Integer mercury__array__N1_10;
        MR_Integer mercury__array__Var_11;
        MR_Box mercury__array__Var_13;

        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_12, mercury__array__Array1_7, mercury__array__N_5, &mercury__array__Elem_9);
        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_12, mercury__array__Array2_8, mercury__array__N_5, &mercury__array__Var_13);
        mercury__array__succeeded = mercury__builtin__unify_2_p_0(mercury__array__TypeInfo_for_T_12, mercury__array__Elem_9, mercury__array__Var_13);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_11 = (MR_Integer) 1;
          mercury__array__N1_10 = (mercury__array__N_5 + mercury__array__Var_11);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_N_5 = mercury__array__N1_10;

            mercury__array__N_5 = mercury__array__next_value_of_N_5;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__dynamic_cast_to_array_2_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_14,
  MR_Word * mercury__array__TypeInfo_for_T_13,
  MR_Box mercury__array__X_3,
  MR_ArrayPtr * mercury__array__A_4)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Word mercury__array__TypeCtorInfo_15_15;
    MR_Word mercury__array__TypeInfo_16_16;
    MR_Word mercury__array__TypeInfo_19_19;
    MR_Word mercury__array__ArgTypeDesc_5;
    MR_Word mercury__array__Var_8;
    MR_Word mercury__array__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__array__Var_10;
    MR_Word mercury__array__Var_18;
    MR_Box mercury__array__Var_17;
    MR_Word mercury__array__V_5_22;
    MR_Box mercury__array__Var_11;
    MR_Box mercury__array__conv0_A_4;

{
#define MR_PROC_LABEL mercury__array__dynamic_cast_to_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__array__TypeInfo_for_T1_14 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__array__dynamic_cast_to_array_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__array__Var_10 ;
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
	 mercury__array__V_5_22  = TypeCtorDesc;
	 mercury__array__Var_8  = ArgTypes;
}
    mercury__array__succeeded = ((MR_tag((MR_Word) mercury__array__Var_8)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__array__succeeded)
    {
      mercury__array__ArgTypeDesc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__array__Var_8, (MR_Integer) 0)));
      mercury__array__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__array__Var_8, (MR_Integer) 1)));
      mercury__array__TypeInfo_19_19 = (MR_Word) &mercury__array_scalar_common_4[0];
      mercury__array__succeeded = mercury__builtin__unify_2_p_0(mercury__array__TypeInfo_19_19, ((MR_Box) (mercury__array__Var_9)), ((MR_Box) (mercury__array__Var_18)));
      if (mercury__array__succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__dynamic_cast_to_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__array__ArgTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *mercury__array__TypeInfo_for_T_13  = TypeInfo_for_T;
}
        mercury__array__TypeCtorInfo_15_15 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
        {
          mercury__array__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__array__TypeInfo_16_16, 0) = ((MR_Box) (mercury__array__TypeCtorInfo_15_15));
          MR_hl_field(MR_mktag(0), mercury__array__TypeInfo_16_16, 1) = ((MR_Box) (*mercury__array__TypeInfo_for_T_13));
        }
        mercury__array__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__array__TypeInfo_for_T1_14, mercury__array__TypeInfo_16_16, mercury__array__X_3, &mercury__array__conv0_A_4);
        if (mercury__array__succeeded)
        {
          *mercury__array__A_4 = ((MR_ArrayPtr) mercury__array__conv0_A_4);
          mercury__array__succeeded = MR_TRUE;
        }
      }
    }
    return mercury__array__succeeded;
  }
}

static MR_Box MR_CALL 
mercury__array__array_to_doc_1_f_0_1(
  MR_Box mercury__array__closure_arg)
{
  {
    MR_Box mercury__array__wrapper_arg_1;
    MR_Box mercury__array__closure = mercury__array__closure_arg;
    MR_Word mercury__array__conv0_LambdaHeadVar__1_24;

    mercury__array__conv0_LambdaHeadVar__1_24 = mercury__array__IntroducedFrom__func__array_to_doc_2__3154__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__array__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array__closure, (MR_Integer) 4))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array__closure, (MR_Integer) 5))));
    mercury__array__wrapper_arg_1 = ((MR_Box) (mercury__array__conv0_LambdaHeadVar__1_24));
    return mercury__array__wrapper_arg_1;
  }
}

MR_Word MR_CALL 
mercury__array__array_to_doc_1_f_0(
  MR_Word mercury__array__TypeInfo_for_T_14,
  MR_ArrayPtr mercury__array__A_3)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Word mercury__array__HeadVar__2_2;
    MR_Word mercury__array__Var_4;
    MR_Word mercury__array__Var_5 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[2]);
    MR_Word mercury__array__Var_7;
    MR_Word mercury__array__Var_8;
    MR_Word mercury__array__Var_10;
    MR_Word mercury__array__Var_11;
    MR_Word mercury__array__Var_13;
    MR_Word mercury__array__V_6_68;
    MR_Word mercury__array__V_7_69;
    MR_Word mercury__array__V_9_70;
    MR_Word mercury__array__V_8_71;
    MR_Word mercury__array__V_10_72;
    MR_Word mercury__array__V_11_73;
    MR_Word mercury__array__V_12_74;
    MR_Word mercury__array__V_14_75;
    MR_Word mercury__array__V_13_76;
    MR_Integer mercury__array__Var_17;
    MR_Word mercury__array__TypeInfo_for_T_77;

{
#define MR_PROC_LABEL mercury__array__array_to_doc_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_3 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_17  = Max;
}
    mercury__array__succeeded = ((MR_Integer) 0 > mercury__array__Var_17);
    if (mercury__array__succeeded)
    {
      mercury__array__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[3]);
    }
    else
    {
      MR_Word mercury__array__Var_19;
      MR_Word mercury__array__Var_20;
      MR_Word mercury__array__Var_21;
      MR_Box mercury__array__Var_22;
      MR_Word mercury__array__Var_23;
      MR_Word mercury__array__Var_24;
      MR_Word mercury__array__Var_32;
      MR_Word mercury__array__Var_33;
      MR_Word mercury__array__Var_34;
      MR_Word mercury__array__Var_38;
      MR_Word mercury__array__V_4_48;
      MR_Integer mercury__array__Var_39;
      MR_Word mercury__array__TypeInfo_for_T_78;

      mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_14, mercury__array__A_3, (MR_Integer) 0, &mercury__array__Var_22);
      mercury__univ__type_to_univ_2_p_1(mercury__array__TypeInfo_for_T_14, mercury__array__Var_22, &mercury__array__V_4_48);
      {
        mercury__array__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), mercury__array__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), mercury__array__Var_21, 1) = ((MR_Box) (mercury__array__V_4_48));
      }
      mercury__array__Var_20 = mercury__pretty_printer__format_arg_1_f_0(mercury__array__Var_21);
{
#define MR_PROC_LABEL mercury__array__array_to_doc_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_3 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_39  = Max;
}
      mercury__array__succeeded = ((MR_Integer) 0 == mercury__array__Var_39);
      if (mercury__array__succeeded)
      {
        mercury__array__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[3]);
      }
      else
      {
        MR_Word mercury__array__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[2]);
        MR_Word mercury__array__V_4_54 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[7]);
        MR_Word mercury__array__V_5_55 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__array_scalar_common_4[3]);
        MR_Word mercury__array__V_7_56 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[6]);
        MR_Word mercury__array__V_6_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__array__V_8_58 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__array_scalar_common_5[4]);
        MR_Word mercury__array__V_9_59 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[5]);
        MR_Word mercury__array__V_10_60 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__array_scalar_common_4[4]);
        MR_Word mercury__array__V_12_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__array__V_11_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

        mercury__array__Var_24 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__array_scalar_common_5[5]);
      }
      {
        mercury__array__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__array__Var_34, 0) = ((MR_Box) (&mercury__array_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), mercury__array__Var_34, 1) = ((MR_Box) (mercury__array__array_to_doc_1_f_0_1));
        MR_hl_field(MR_mktag(0), mercury__array__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), mercury__array__Var_34, 3) = ((MR_Box) (mercury__array__TypeInfo_for_T_14));
        MR_hl_field(MR_mktag(0), mercury__array__Var_34, 4) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), mercury__array__Var_34, 5) = ((MR_Box) (mercury__array__A_3));
      }
      {
        mercury__array__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), mercury__array__Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), mercury__array__Var_33, 1) = ((MR_Box) (mercury__array__Var_34));
      }
      mercury__array__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__array__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__array__Var_32, 0) = ((MR_Box) (mercury__array__Var_33));
        MR_hl_field(MR_mktag(1), mercury__array__Var_32, 1) = ((MR_Box) (mercury__array__Var_38));
      }
      {
        mercury__array__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__array__Var_23, 0) = ((MR_Box) (mercury__array__Var_24));
        MR_hl_field(MR_mktag(1), mercury__array__Var_23, 1) = ((MR_Box) (mercury__array__Var_32));
      }
      {
        mercury__array__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__array__Var_19, 0) = ((MR_Box) (mercury__array__Var_20));
        MR_hl_field(MR_mktag(1), mercury__array__Var_19, 1) = ((MR_Box) (mercury__array__Var_23));
      }
      {
        mercury__array__Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), mercury__array__Var_8, 0) = ((MR_Box) (mercury__array__Var_19));
      }
    }
    mercury__array__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[6]);
    mercury__array__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__array__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[8]);
    {
      mercury__array__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__array__Var_7, 0) = ((MR_Box) (mercury__array__Var_8));
      MR_hl_field(MR_mktag(1), mercury__array__Var_7, 1) = ((MR_Box) (mercury__array__Var_10));
    }
    {
      mercury__array__Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__array__Var_4, 0) = ((MR_Box) (mercury__array__Var_5));
      MR_hl_field(MR_mktag(1), mercury__array__Var_4, 1) = ((MR_Box) (mercury__array__Var_7));
    }
    mercury__array__V_8_71 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_5[7]);
    mercury__array__V_7_69 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__array_scalar_common_4[9]);
    {
      mercury__array__V_10_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__array__V_10_72, 0) = ((MR_Box) (mercury__array__Var_4));
    }
    mercury__array__V_13_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
    mercury__array__V_12_74 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__array_scalar_common_4[10]);
    mercury__array__V_14_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__array__V_11_73 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__array_scalar_common_4[11]);
    {
      mercury__array__V_9_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__array__V_9_70, 0) = ((MR_Box) (mercury__array__V_10_72));
      MR_hl_field(MR_mktag(1), mercury__array__V_9_70, 1) = ((MR_Box) (mercury__array__V_11_73));
    }
    {
      mercury__array__V_6_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__array__V_6_68, 0) = ((MR_Box) (mercury__array__V_7_69));
      MR_hl_field(MR_mktag(1), mercury__array__V_6_68, 1) = ((MR_Box) (mercury__array__V_9_70));
    }
    {
      mercury__array__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__array__HeadVar__2_2, 0) = ((MR_Box) (mercury__array__V_6_68));
    }
    return mercury__array__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__array__random_permutation_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_13,
  MR_ArrayPtr mercury__array__A0_5,
  MR_ArrayPtr * mercury__array__A_6,
  MR_Word mercury__array__RS0_7,
  MR_Word * mercury__array__RS_8)
{
  {
    MR_Integer mercury__array__Lo_9;
    MR_Integer mercury__array__Hi_10;
    MR_Integer mercury__array__Sz_11;
    MR_Word mercury__array__TypeInfo_for_T_20;
    MR_Word mercury__array__TypeInfo_for_T_21;
    MR_Word mercury__array__TypeInfo_for_T_22;

{
#define MR_PROC_LABEL mercury__array__random_permutation_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A0_5 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Lo_9  = Min;
}
{
#define MR_PROC_LABEL mercury__array__random_permutation_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A0_5 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Hi_10  = Max;
}
{
#define MR_PROC_LABEL mercury__array__random_permutation_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A0_5 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Sz_11  = Max;
}
    mercury__array__permutation_2_8_p_0(mercury__array__TypeInfo_for_T_13, mercury__array__Lo_9, mercury__array__Lo_9, mercury__array__Hi_10, mercury__array__Sz_11, mercury__array__A0_5, mercury__array__A_6, mercury__array__RS0_7, mercury__array__RS_8);
  }
}

void MR_CALL 
mercury__array__permutation_2_8_p_0(
  MR_Word mercury__array__TypeInfo_for_T_28,
  MR_Integer mercury__array__I_9,
  MR_Integer mercury__array__Lo_10,
  MR_Integer mercury__array__Hi_11,
  MR_Integer mercury__array__Sz_12,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_A_0_17,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_A_18,
  MR_Word mercury__array__STATE_VARIABLE_RS_0_19,
  MR_Word * mercury__array__STATE_VARIABLE_RS_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_9 > mercury__array__Hi_11);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_RS_20 = mercury__array__STATE_VARIABLE_RS_0_19;
        *mercury__array__STATE_VARIABLE_A_18 = mercury__array__STATE_VARIABLE_A_0_17;
      }
      else
      {
        MR_Integer mercury__array__R_15;
        MR_Integer mercury__array__J_16;
        MR_Word mercury__array__STATE_VARIABLE_RS_21_21;
        MR_Integer mercury__array__Var_22;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_A_23_23;
        MR_Integer mercury__array__Var_24;
        MR_Box mercury__array__XI_40;
        MR_Box mercury__array__XJ_41;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_A_12_42;
        MR_Word mercury__array__TypeInfo_for_T_44;
        MR_Word mercury__array__TypeInfo_for_T_45;

        mercury__random__random_3_p_1(&mercury__array__R_15, mercury__array__STATE_VARIABLE_RS_0_19, &mercury__array__STATE_VARIABLE_RS_21_21);
{
#define MR_PROC_LABEL mercury__array__permutation_2_8_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__array__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__array__succeeded)
          mercury__array__succeeded = (mercury__array__Sz_12 == (MR_Integer) 0);
        if (mercury__array__succeeded)
        {
          MR_Word mercury__array__TypeCtorInfo_9_34 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
          MR_Word mercury__array__V_7_32 = (MR_Word) ((MR_Box) ((MR_String) "int.rem: division by zero"));

          {
            mercury__exception__throw_1_p_0(mercury__array__TypeCtorInfo_9_34, ((MR_Box) (mercury__array__V_7_32)));
            return;
          }
        }
        else
          mercury__array__Var_22 = (mercury__array__R_15 % mercury__array__Sz_12);
        mercury__array__J_16 = (mercury__array__Lo_10 + mercury__array__Var_22);
        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_28, mercury__array__STATE_VARIABLE_A_0_17, mercury__array__I_9, &mercury__array__XI_40);
        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_28, mercury__array__STATE_VARIABLE_A_0_17, mercury__array__J_16, &mercury__array__XJ_41);
{
#define MR_PROC_LABEL mercury__array__permutation_2_8_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__I_9 ;
	Item = (MR_Word) mercury__array__XJ_41 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_A_0_17 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_A_12_42 );
}
{
#define MR_PROC_LABEL mercury__array__permutation_2_8_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__J_16 ;
	Item = (MR_Word) mercury__array__XI_40 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_A_12_42 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_A_23_23 );
}
        mercury__array__Var_24 = (mercury__array__I_9 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_24;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_A_0_17 = mercury__array__STATE_VARIABLE_A_23_23;
          MR_Word mercury__array__next_value_of_STATE_VARIABLE_RS_0_19 = mercury__array__STATE_VARIABLE_RS_21_21;

          mercury__array__I_9 = mercury__array__next_value_of_I_9;
          mercury__array__STATE_VARIABLE_A_0_17 = mercury__array__next_value_of_STATE_VARIABLE_A_0_17;
          mercury__array__STATE_VARIABLE_RS_0_19 = mercury__array__next_value_of_STATE_VARIABLE_RS_0_19;
        }
        continue;
      }
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__append_2_f_0(
  MR_Word mercury__array__TypeInfo_for_T_24,
  MR_ArrayPtr mercury__array__HeadVar__1_1,
  MR_ArrayPtr mercury__array__HeadVar__2_2)
{
  {
    MR_ArrayPtr mercury__array__HeadVar__3_3;
    MR_Word mercury__array__TypeInfo_for_T_25;

{
#define MR_PROC_LABEL mercury__array__append_2_f_0

	MR_ArrayPtr ArrayA;
	MR_ArrayPtr ArrayB;
	MR_ArrayPtr ArrayC;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__1_1 , ArrayA);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__2_2 , ArrayB);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, ArrayC, mercury__array__HeadVar__3_3 );
}
    return mercury__array__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__array__all_false_2_p_0(
  MR_Word mercury__array__TypeInfo_for_T_7,
  MR_Word mercury__array__Pred_3,
  MR_ArrayPtr mercury__array__Array_4)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_5;
    MR_Integer mercury__array__Var_6;
    MR_Word mercury__array__TypeInfo_for_T_12;
    MR_Word mercury__array__TypeInfo_for_T_13;

{
#define MR_PROC_LABEL mercury__array__all_false_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_5  = Min;
}
{
#define MR_PROC_LABEL mercury__array__all_false_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_6  = Max;
}
    mercury__array__succeeded = mercury__array__do_all_false_4_p_0(mercury__array__TypeInfo_for_T_7, mercury__array__Pred_3, mercury__array__Var_5, mercury__array__Var_6, mercury__array__Array_4);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_all_false_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_12,
  MR_Word mercury__array__Pred_5,
  MR_Integer mercury__array__I_6,
  MR_Integer mercury__array__UB_7,
  MR_ArrayPtr mercury__array__Array_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_6 <= mercury__array__UB_7);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__Elem_9;
        MR_Integer mercury__array__Var_10;
        MR_Integer mercury__array__Var_11;
        MR_Word mercury__array__TypeInfo_for_T_13;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box);

{
#define MR_PROC_LABEL mercury__array__do_all_false_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_8 , Array);
	Index =  mercury__array__I_6 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Elem_9  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Pred_5, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__Pred_5), mercury__array__Elem_9);
        mercury__array__succeeded = !(mercury__array__succeeded);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_11 = (MR_Integer) 1;
          mercury__array__Var_10 = (mercury__array__I_6 + mercury__array__Var_11);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_6 = mercury__array__Var_10;

            mercury__array__I_6 = mercury__array__next_value_of_I_6;
          }
          continue;
        }
      }
      else
        mercury__array__succeeded = MR_TRUE;
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__all_true_2_p_0(
  MR_Word mercury__array__TypeInfo_for_T_7,
  MR_Word mercury__array__Pred_3,
  MR_ArrayPtr mercury__array__Array_4)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_5;
    MR_Integer mercury__array__Var_6;
    MR_Word mercury__array__TypeInfo_for_T_12;
    MR_Word mercury__array__TypeInfo_for_T_13;

{
#define MR_PROC_LABEL mercury__array__all_true_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_5  = Min;
}
{
#define MR_PROC_LABEL mercury__array__all_true_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_6  = Max;
}
    mercury__array__succeeded = mercury__array__do_all_true_4_p_0(mercury__array__TypeInfo_for_T_7, mercury__array__Pred_3, mercury__array__Var_5, mercury__array__Var_6, mercury__array__Array_4);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_all_true_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_12,
  MR_Word mercury__array__Pred_5,
  MR_Integer mercury__array__I_6,
  MR_Integer mercury__array__UB_7,
  MR_ArrayPtr mercury__array__Array_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_6 <= mercury__array__UB_7);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__Elem_9;
        MR_Integer mercury__array__Var_10;
        MR_Integer mercury__array__Var_11;
        MR_Word mercury__array__TypeInfo_for_T_13;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box);

{
#define MR_PROC_LABEL mercury__array__do_all_true_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_8 , Array);
	Index =  mercury__array__I_6 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Elem_9  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Pred_5, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__Pred_5), mercury__array__Elem_9);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_11 = (MR_Integer) 1;
          mercury__array__Var_10 = (mercury__array__I_6 + mercury__array__Var_11);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_6 = mercury__array__Var_10;

            mercury__array__I_6 = mercury__array__next_value_of_I_6;
          }
          continue;
        }
      }
      else
        mercury__array__succeeded = MR_TRUE;
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__map_corresponding_foldl_6_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_ArrayPtr mercury__array__B_9,
  MR_ArrayPtr * mercury__array__C_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_18)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__N_12;
    MR_Word mercury__array__TypeInfo_for_T1_40;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__N_12  = Max;
}
    mercury__array__succeeded = (mercury__array__N_12 <= (MR_Integer) 0);
    if (mercury__array__succeeded)
    {
      MR_Word mercury__array__TypeInfo_for_T3_41;
      MR_ArrayPtr mercury__array__conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_3

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
      *mercury__array__C_10 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
      *mercury__array__STATE_VARIABLE_Acc_18 = mercury__array__STATE_VARIABLE_Acc_0_17;
      mercury__array__succeeded = MR_TRUE;
    }
    else
    {
      MR_Box mercury__array__X_13;
      MR_Box mercury__array__Y_14;
      MR_Box mercury__array__Z_15;
      MR_ArrayPtr mercury__array__C1_16;
      MR_Box mercury__array__STATE_VARIABLE_Acc_22_22;
      MR_Integer mercury__array__Var_23;
      MR_Word mercury__array__TypeInfo_for_T1_42;
      MR_Word mercury__array__TypeInfo_for_T2_43;
      MR_bool MR_CALL (* mercury__array__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer mercury__array__Var_38;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_13  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__B_9 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Y_14  = (MR_Box) Item;
}
      mercury__array__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
      mercury__array__succeeded = mercury__array__func_1(((MR_Box) mercury__array__P_7), mercury__array__X_13, mercury__array__Y_14, &mercury__array__Z_15, mercury__array__STATE_VARIABLE_Acc_0_17, &mercury__array__STATE_VARIABLE_Acc_22_22);
      if (mercury__array__succeeded)
      {
        mercury__array__Var_38 = (MR_Integer) 0;
        mercury__array__succeeded = (mercury__array__N_12 < mercury__array__Var_38);
        if (mercury__array__succeeded)
        {
          mercury__require__error_1_p_0((MR_String) "array.init: negative size");
        }
        else
        {
          MR_Word mercury__array__TypeInfo_for_T3_44;
          MR_ArrayPtr mercury__array__conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_3

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size =  mercury__array__N_12 ;
	Item = (MR_Word) mercury__array__Z_15 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv2_Array );
          mercury__array__C1_16 = (MR_ArrayPtr) mercury__array__conv2_Array;
}
        }
        mercury__array__Var_23 = (MR_Integer) 1;
        mercury__array__succeeded = mercury__array__map_corresponding_foldl_2_9_p_3(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_7, mercury__array__Var_23, mercury__array__N_12, mercury__array__A_8, mercury__array__B_9, mercury__array__C1_16, mercury__array__C_10, mercury__array__STATE_VARIABLE_Acc_22_22, mercury__array__STATE_VARIABLE_Acc_18);
      }
    }
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__map_corresponding_foldl_2_9_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_30,
  MR_Word mercury__array__TypeInfo_for_T2_31,
  MR_Word mercury__array__TypeInfo_for_T3_32,
  MR_Word mercury__array__TypeInfo_for_T4_33,
  MR_Word mercury__array__P_10,
  MR_Integer mercury__array__I_11,
  MR_Integer mercury__array__N_12,
  MR_ArrayPtr mercury__array__A_13,
  MR_ArrayPtr mercury__array__B_14,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_C_0_20,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_C_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__N_12);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__X_17;
        MR_Box mercury__array__Y_18;
        MR_Box mercury__array__Z_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc_24_24;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_C_25_25;
        MR_Integer mercury__array__Var_26;
        MR_Integer mercury__array__Var_29;
        MR_Word mercury__array__TypeInfo_for_T1_34;
        MR_Word mercury__array__TypeInfo_for_T2_35;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
        MR_Word mercury__array__TypeInfo_for_T3_36;
        MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_13 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__B_14 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Y_18  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_10, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_10), mercury__array__X_17, mercury__array__Y_18, &mercury__array__Z_19, mercury__array__STATE_VARIABLE_Acc_0_22, &mercury__array__STATE_VARIABLE_Acc_24_24);
        if (mercury__array__succeeded)
        {
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_3

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__I_11 ;
	Item = (MR_Word) mercury__array__Z_19 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__STATE_VARIABLE_C_0_20 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
          mercury__array__STATE_VARIABLE_C_25_25 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
          mercury__array__Var_29 = (MR_Integer) 1;
          mercury__array__Var_26 = (mercury__array__I_11 + mercury__array__Var_29);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_26;
            MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_C_0_20 = mercury__array__STATE_VARIABLE_C_25_25;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_22 = mercury__array__STATE_VARIABLE_Acc_24_24;

            mercury__array__I_11 = mercury__array__next_value_of_I_11;
            mercury__array__STATE_VARIABLE_C_0_20 = mercury__array__next_value_of_STATE_VARIABLE_C_0_20;
            mercury__array__STATE_VARIABLE_Acc_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_22;
          }
          continue;
        }
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_23 = mercury__array__STATE_VARIABLE_Acc_0_22;
        *mercury__array__STATE_VARIABLE_C_21 = mercury__array__STATE_VARIABLE_C_0_20;
        mercury__array__succeeded = MR_TRUE;
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_6_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_ArrayPtr mercury__array__B_9,
  MR_ArrayPtr * mercury__array__C_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_18)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__N_12;
    MR_Word mercury__array__TypeInfo_for_T1_40;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__N_12  = Max;
}
    mercury__array__succeeded = (mercury__array__N_12 <= (MR_Integer) 0);
    if (mercury__array__succeeded)
    {
      MR_Word mercury__array__TypeInfo_for_T3_41;
      MR_ArrayPtr mercury__array__conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_2

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
      *mercury__array__C_10 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
      *mercury__array__STATE_VARIABLE_Acc_18 = mercury__array__STATE_VARIABLE_Acc_0_17;
    }
    else
    {
      MR_Box mercury__array__X_13;
      MR_Box mercury__array__Y_14;
      MR_Box mercury__array__Z_15;
      MR_ArrayPtr mercury__array__C1_16;
      MR_Box mercury__array__STATE_VARIABLE_Acc_22_22;
      MR_Word mercury__array__TypeInfo_for_T1_42;
      MR_Word mercury__array__TypeInfo_for_T2_43;
      void MR_CALL (* mercury__array__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_13  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__B_9 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Y_14  = (MR_Box) Item;
}
      mercury__array__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
      mercury__array__func_1(((MR_Box) mercury__array__P_7), mercury__array__X_13, mercury__array__Y_14, &mercury__array__Z_15, mercury__array__STATE_VARIABLE_Acc_0_17, &mercury__array__STATE_VARIABLE_Acc_22_22);
      mercury__array__succeeded = (mercury__array__N_12 < (MR_Integer) 0);
      if (mercury__array__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "array.init: negative size");
          return;
        }
      }
      else
      {
        MR_Word mercury__array__TypeInfo_for_T3_44;
        MR_ArrayPtr mercury__array__conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_2

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size =  mercury__array__N_12 ;
	Item = (MR_Word) mercury__array__Z_15 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv2_Array );
        mercury__array__C1_16 = (MR_ArrayPtr) mercury__array__conv2_Array;
}
      }
      mercury__array__map_corresponding_foldl_2_9_p_2(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_7, (MR_Integer) 1, mercury__array__N_12, mercury__array__A_8, mercury__array__B_9, mercury__array__C1_16, mercury__array__C_10, mercury__array__STATE_VARIABLE_Acc_22_22, mercury__array__STATE_VARIABLE_Acc_18);
    }
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_2_9_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_30,
  MR_Word mercury__array__TypeInfo_for_T2_31,
  MR_Word mercury__array__TypeInfo_for_T3_32,
  MR_Word mercury__array__TypeInfo_for_T4_33,
  MR_Word mercury__array__P_10,
  MR_Integer mercury__array__I_11,
  MR_Integer mercury__array__N_12,
  MR_ArrayPtr mercury__array__A_13,
  MR_ArrayPtr mercury__array__B_14,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_C_0_20,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_C_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__N_12);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__X_17;
        MR_Box mercury__array__Y_18;
        MR_Box mercury__array__Z_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc_24_24;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_C_25_25;
        MR_Integer mercury__array__Var_26;
        MR_Word mercury__array__TypeInfo_for_T1_34;
        MR_Word mercury__array__TypeInfo_for_T2_35;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
        MR_Word mercury__array__TypeInfo_for_T3_36;
        MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_13 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__B_14 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Y_18  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_10, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_10), mercury__array__X_17, mercury__array__Y_18, &mercury__array__Z_19, mercury__array__STATE_VARIABLE_Acc_0_22, &mercury__array__STATE_VARIABLE_Acc_24_24);
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_2

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__I_11 ;
	Item = (MR_Word) mercury__array__Z_19 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__STATE_VARIABLE_C_0_20 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
        mercury__array__STATE_VARIABLE_C_25_25 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
        mercury__array__Var_26 = (mercury__array__I_11 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_26;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_C_0_20 = mercury__array__STATE_VARIABLE_C_25_25;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_22 = mercury__array__STATE_VARIABLE_Acc_24_24;

          mercury__array__I_11 = mercury__array__next_value_of_I_11;
          mercury__array__STATE_VARIABLE_C_0_20 = mercury__array__next_value_of_STATE_VARIABLE_C_0_20;
          mercury__array__STATE_VARIABLE_Acc_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_22;
        }
        continue;
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_23 = mercury__array__STATE_VARIABLE_Acc_0_22;
        *mercury__array__STATE_VARIABLE_C_21 = mercury__array__STATE_VARIABLE_C_0_20;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_6_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_ArrayPtr mercury__array__B_9,
  MR_ArrayPtr * mercury__array__C_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_18)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__N_12;
    MR_Word mercury__array__TypeInfo_for_T1_40;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__N_12  = Max;
}
    mercury__array__succeeded = (mercury__array__N_12 <= (MR_Integer) 0);
    if (mercury__array__succeeded)
    {
      MR_Word mercury__array__TypeInfo_for_T3_41;
      MR_ArrayPtr mercury__array__conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_1

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
      *mercury__array__C_10 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
      *mercury__array__STATE_VARIABLE_Acc_18 = mercury__array__STATE_VARIABLE_Acc_0_17;
    }
    else
    {
      MR_Box mercury__array__X_13;
      MR_Box mercury__array__Y_14;
      MR_Box mercury__array__Z_15;
      MR_ArrayPtr mercury__array__C1_16;
      MR_Box mercury__array__STATE_VARIABLE_Acc_22_22;
      MR_Word mercury__array__TypeInfo_for_T1_42;
      MR_Word mercury__array__TypeInfo_for_T2_43;
      void MR_CALL (* mercury__array__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_13  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__B_9 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Y_14  = (MR_Box) Item;
}
      mercury__array__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
      mercury__array__func_1(((MR_Box) mercury__array__P_7), mercury__array__X_13, mercury__array__Y_14, &mercury__array__Z_15, mercury__array__STATE_VARIABLE_Acc_0_17, &mercury__array__STATE_VARIABLE_Acc_22_22);
      mercury__array__succeeded = (mercury__array__N_12 < (MR_Integer) 0);
      if (mercury__array__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "array.init: negative size");
          return;
        }
      }
      else
      {
        MR_Word mercury__array__TypeInfo_for_T3_44;
        MR_ArrayPtr mercury__array__conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_1

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size =  mercury__array__N_12 ;
	Item = (MR_Word) mercury__array__Z_15 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv2_Array );
        mercury__array__C1_16 = (MR_ArrayPtr) mercury__array__conv2_Array;
}
      }
      mercury__array__map_corresponding_foldl_2_9_p_1(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_7, (MR_Integer) 1, mercury__array__N_12, mercury__array__A_8, mercury__array__B_9, mercury__array__C1_16, mercury__array__C_10, mercury__array__STATE_VARIABLE_Acc_22_22, mercury__array__STATE_VARIABLE_Acc_18);
    }
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_2_9_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_30,
  MR_Word mercury__array__TypeInfo_for_T2_31,
  MR_Word mercury__array__TypeInfo_for_T3_32,
  MR_Word mercury__array__TypeInfo_for_T4_33,
  MR_Word mercury__array__P_10,
  MR_Integer mercury__array__I_11,
  MR_Integer mercury__array__N_12,
  MR_ArrayPtr mercury__array__A_13,
  MR_ArrayPtr mercury__array__B_14,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_C_0_20,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_C_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__N_12);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__X_17;
        MR_Box mercury__array__Y_18;
        MR_Box mercury__array__Z_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc_24_24;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_C_25_25;
        MR_Integer mercury__array__Var_26;
        MR_Word mercury__array__TypeInfo_for_T1_34;
        MR_Word mercury__array__TypeInfo_for_T2_35;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
        MR_Word mercury__array__TypeInfo_for_T3_36;
        MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_13 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__B_14 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Y_18  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_10, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_10), mercury__array__X_17, mercury__array__Y_18, &mercury__array__Z_19, mercury__array__STATE_VARIABLE_Acc_0_22, &mercury__array__STATE_VARIABLE_Acc_24_24);
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_1

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__I_11 ;
	Item = (MR_Word) mercury__array__Z_19 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__STATE_VARIABLE_C_0_20 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
        mercury__array__STATE_VARIABLE_C_25_25 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
        mercury__array__Var_26 = (mercury__array__I_11 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_26;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_C_0_20 = mercury__array__STATE_VARIABLE_C_25_25;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_22 = mercury__array__STATE_VARIABLE_Acc_24_24;

          mercury__array__I_11 = mercury__array__next_value_of_I_11;
          mercury__array__STATE_VARIABLE_C_0_20 = mercury__array__next_value_of_STATE_VARIABLE_C_0_20;
          mercury__array__STATE_VARIABLE_Acc_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_22;
        }
        continue;
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_23 = mercury__array__STATE_VARIABLE_Acc_0_22;
        *mercury__array__STATE_VARIABLE_C_21 = mercury__array__STATE_VARIABLE_C_0_20;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_ArrayPtr mercury__array__B_9,
  MR_ArrayPtr * mercury__array__C_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_18)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__N_12;
    MR_Word mercury__array__TypeInfo_for_T1_40;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__N_12  = Max;
}
    mercury__array__succeeded = (mercury__array__N_12 <= (MR_Integer) 0);
    if (mercury__array__succeeded)
    {
      MR_Word mercury__array__TypeInfo_for_T3_41;
      MR_ArrayPtr mercury__array__conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
      *mercury__array__C_10 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
      *mercury__array__STATE_VARIABLE_Acc_18 = mercury__array__STATE_VARIABLE_Acc_0_17;
    }
    else
    {
      MR_Box mercury__array__X_13;
      MR_Box mercury__array__Y_14;
      MR_Box mercury__array__Z_15;
      MR_ArrayPtr mercury__array__C1_16;
      MR_Box mercury__array__STATE_VARIABLE_Acc_22_22;
      MR_Word mercury__array__TypeInfo_for_T1_42;
      MR_Word mercury__array__TypeInfo_for_T2_43;
      void MR_CALL (* mercury__array__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_13  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__B_9 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Y_14  = (MR_Box) Item;
}
      mercury__array__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
      mercury__array__func_1(((MR_Box) mercury__array__P_7), mercury__array__X_13, mercury__array__Y_14, &mercury__array__Z_15, mercury__array__STATE_VARIABLE_Acc_0_17, &mercury__array__STATE_VARIABLE_Acc_22_22);
      mercury__array__succeeded = (mercury__array__N_12 < (MR_Integer) 0);
      if (mercury__array__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "array.init: negative size");
          return;
        }
      }
      else
      {
        MR_Word mercury__array__TypeInfo_for_T3_44;
        MR_ArrayPtr mercury__array__conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_6_p_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size =  mercury__array__N_12 ;
	Item = (MR_Word) mercury__array__Z_15 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv2_Array );
        mercury__array__C1_16 = (MR_ArrayPtr) mercury__array__conv2_Array;
}
      }
      mercury__array__map_corresponding_foldl_2_9_p_0(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_7, (MR_Integer) 1, mercury__array__N_12, mercury__array__A_8, mercury__array__B_9, mercury__array__C1_16, mercury__array__C_10, mercury__array__STATE_VARIABLE_Acc_22_22, mercury__array__STATE_VARIABLE_Acc_18);
    }
  }
}

void MR_CALL 
mercury__array__map_corresponding_foldl_2_9_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_30,
  MR_Word mercury__array__TypeInfo_for_T2_31,
  MR_Word mercury__array__TypeInfo_for_T3_32,
  MR_Word mercury__array__TypeInfo_for_T4_33,
  MR_Word mercury__array__P_10,
  MR_Integer mercury__array__I_11,
  MR_Integer mercury__array__N_12,
  MR_ArrayPtr mercury__array__A_13,
  MR_ArrayPtr mercury__array__B_14,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_C_0_20,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_C_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__N_12);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__X_17;
        MR_Box mercury__array__Y_18;
        MR_Box mercury__array__Z_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc_24_24;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_C_25_25;
        MR_Integer mercury__array__Var_26;
        MR_Word mercury__array__TypeInfo_for_T1_34;
        MR_Word mercury__array__TypeInfo_for_T2_35;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
        MR_Word mercury__array__TypeInfo_for_T3_36;
        MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_13 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_17  = (MR_Box) Item;
}
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__B_14 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Y_18  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_10, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_10), mercury__array__X_17, mercury__array__Y_18, &mercury__array__Z_19, mercury__array__STATE_VARIABLE_Acc_0_22, &mercury__array__STATE_VARIABLE_Acc_24_24);
{
#define MR_PROC_LABEL mercury__array__map_corresponding_foldl_2_9_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__I_11 ;
	Item = (MR_Word) mercury__array__Z_19 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__STATE_VARIABLE_C_0_20 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
        mercury__array__STATE_VARIABLE_C_25_25 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
        mercury__array__Var_26 = (mercury__array__I_11 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_26;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_C_0_20 = mercury__array__STATE_VARIABLE_C_25_25;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_22 = mercury__array__STATE_VARIABLE_Acc_24_24;

          mercury__array__I_11 = mercury__array__next_value_of_I_11;
          mercury__array__STATE_VARIABLE_C_0_20 = mercury__array__next_value_of_STATE_VARIABLE_C_0_20;
          mercury__array__STATE_VARIABLE_Acc_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_22;
        }
        continue;
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_23 = mercury__array__STATE_VARIABLE_Acc_0_22;
        *mercury__array__STATE_VARIABLE_C_21 = mercury__array__STATE_VARIABLE_C_0_20;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__map_foldl_5_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_21,
  MR_Word mercury__array__TypeInfo_for_T2_22,
  MR_Word mercury__array__TypeInfo_for_T3_23,
  MR_Word mercury__array__P_6,
  MR_ArrayPtr mercury__array__A_7,
  MR_ArrayPtr * mercury__array__B_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__N_10;
    MR_Word mercury__array__TypeInfo_for_T1_35;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_7 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__N_10  = Max;
}
    mercury__array__succeeded = (mercury__array__N_10 <= (MR_Integer) 0);
    if (mercury__array__succeeded)
    {
      MR_Word mercury__array__TypeInfo_for_T2_36;
      MR_ArrayPtr mercury__array__conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_3

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
      *mercury__array__B_8 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
      *mercury__array__STATE_VARIABLE_Acc_15 = mercury__array__STATE_VARIABLE_Acc_0_14;
      mercury__array__succeeded = MR_TRUE;
    }
    else
    {
      MR_Box mercury__array__X_11;
      MR_Box mercury__array__Y_12;
      MR_ArrayPtr mercury__array__B1_13;
      MR_Box mercury__array__STATE_VARIABLE_Acc_18_18;
      MR_Integer mercury__array__Var_19;
      MR_Word mercury__array__TypeInfo_for_T1_37;
      MR_bool MR_CALL (* mercury__array__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Integer mercury__array__Var_33;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_7 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_11  = (MR_Box) Item;
}
      mercury__array__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_6, (MR_Integer) 1)));
      mercury__array__succeeded = mercury__array__func_1(((MR_Box) mercury__array__P_6), mercury__array__X_11, &mercury__array__Y_12, mercury__array__STATE_VARIABLE_Acc_0_14, &mercury__array__STATE_VARIABLE_Acc_18_18);
      if (mercury__array__succeeded)
      {
        mercury__array__Var_33 = (MR_Integer) 0;
        mercury__array__succeeded = (mercury__array__N_10 < mercury__array__Var_33);
        if (mercury__array__succeeded)
        {
          mercury__require__error_1_p_0((MR_String) "array.init: negative size");
        }
        else
        {
          MR_Word mercury__array__TypeInfo_for_T2_38;
          MR_ArrayPtr mercury__array__conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_3

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size =  mercury__array__N_10 ;
	Item = (MR_Word) mercury__array__Y_12 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv2_Array );
          mercury__array__B1_13 = (MR_ArrayPtr) mercury__array__conv2_Array;
}
        }
        mercury__array__Var_19 = (MR_Integer) 1;
        mercury__array__succeeded = mercury__array__map_foldl_2_7_p_3(mercury__array__TypeInfo_for_T1_21, mercury__array__TypeInfo_for_T2_22, mercury__array__TypeInfo_for_T3_23, mercury__array__P_6, mercury__array__Var_19, mercury__array__A_7, mercury__array__B1_13, mercury__array__B_8, mercury__array__STATE_VARIABLE_Acc_18_18, mercury__array__STATE_VARIABLE_Acc_15);
      }
    }
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__map_foldl_2_7_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_8,
  MR_Integer mercury__array__I_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_15,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded;
      MR_Integer mercury__array__Var_19;
      MR_Word mercury__array__TypeInfo_for_T1_31;

{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = Max;
}
      mercury__array__succeeded = (mercury__array__I_9 < mercury__array__Var_19);
      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__X_13;
        MR_Box mercury__array__Y_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_20_20;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_B_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Integer mercury__array__Var_25;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
        MR_Word mercury__array__TypeInfo_for_T2_33;
        MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_13  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_8, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_8), mercury__array__X_13, &mercury__array__Y_14, mercury__array__STATE_VARIABLE_Acc_0_17, &mercury__array__STATE_VARIABLE_Acc_20_20);
        if (mercury__array__succeeded)
        {
{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_3

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__I_9 ;
	Item = (MR_Word) mercury__array__Y_14 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_15 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
          mercury__array__STATE_VARIABLE_B_21_21 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
          mercury__array__Var_25 = (MR_Integer) 1;
          mercury__array__Var_22 = (mercury__array__I_9 + mercury__array__Var_25);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_22;
            MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_15 = mercury__array__STATE_VARIABLE_B_21_21;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_17 = mercury__array__STATE_VARIABLE_Acc_20_20;

            mercury__array__I_9 = mercury__array__next_value_of_I_9;
            mercury__array__STATE_VARIABLE_B_0_15 = mercury__array__next_value_of_STATE_VARIABLE_B_0_15;
            mercury__array__STATE_VARIABLE_Acc_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_17;
          }
          continue;
        }
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_18 = mercury__array__STATE_VARIABLE_Acc_0_17;
        *mercury__array__STATE_VARIABLE_B_16 = mercury__array__STATE_VARIABLE_B_0_15;
        mercury__array__succeeded = MR_TRUE;
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__map_foldl_5_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_21,
  MR_Word mercury__array__TypeInfo_for_T2_22,
  MR_Word mercury__array__TypeInfo_for_T3_23,
  MR_Word mercury__array__P_6,
  MR_ArrayPtr mercury__array__A_7,
  MR_ArrayPtr * mercury__array__B_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__N_10;
    MR_Word mercury__array__TypeInfo_for_T1_35;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_7 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__N_10  = Max;
}
    mercury__array__succeeded = (mercury__array__N_10 <= (MR_Integer) 0);
    if (mercury__array__succeeded)
    {
      MR_Word mercury__array__TypeInfo_for_T2_36;
      MR_ArrayPtr mercury__array__conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_2

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
      *mercury__array__B_8 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
      *mercury__array__STATE_VARIABLE_Acc_15 = mercury__array__STATE_VARIABLE_Acc_0_14;
    }
    else
    {
      MR_Box mercury__array__X_11;
      MR_Box mercury__array__Y_12;
      MR_ArrayPtr mercury__array__B1_13;
      MR_Box mercury__array__STATE_VARIABLE_Acc_18_18;
      MR_Word mercury__array__TypeInfo_for_T1_37;
      void MR_CALL (* mercury__array__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_7 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_11  = (MR_Box) Item;
}
      mercury__array__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_6, (MR_Integer) 1)));
      mercury__array__func_1(((MR_Box) mercury__array__P_6), mercury__array__X_11, &mercury__array__Y_12, mercury__array__STATE_VARIABLE_Acc_0_14, &mercury__array__STATE_VARIABLE_Acc_18_18);
      mercury__array__succeeded = (mercury__array__N_10 < (MR_Integer) 0);
      if (mercury__array__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "array.init: negative size");
          return;
        }
      }
      else
      {
        MR_Word mercury__array__TypeInfo_for_T2_38;
        MR_ArrayPtr mercury__array__conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_2

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size =  mercury__array__N_10 ;
	Item = (MR_Word) mercury__array__Y_12 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv2_Array );
        mercury__array__B1_13 = (MR_ArrayPtr) mercury__array__conv2_Array;
}
      }
      mercury__array__map_foldl_2_7_p_2(mercury__array__TypeInfo_for_T1_21, mercury__array__TypeInfo_for_T2_22, mercury__array__TypeInfo_for_T3_23, mercury__array__P_6, (MR_Integer) 1, mercury__array__A_7, mercury__array__B1_13, mercury__array__B_8, mercury__array__STATE_VARIABLE_Acc_18_18, mercury__array__STATE_VARIABLE_Acc_15);
    }
  }
}

void MR_CALL 
mercury__array__map_foldl_2_7_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_8,
  MR_Integer mercury__array__I_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_15,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded;
      MR_Integer mercury__array__Var_19;
      MR_Word mercury__array__TypeInfo_for_T1_31;

{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = Max;
}
      mercury__array__succeeded = (mercury__array__I_9 < mercury__array__Var_19);
      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__X_13;
        MR_Box mercury__array__Y_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_20_20;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_B_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
        MR_Word mercury__array__TypeInfo_for_T2_33;
        MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_13  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_8, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_8), mercury__array__X_13, &mercury__array__Y_14, mercury__array__STATE_VARIABLE_Acc_0_17, &mercury__array__STATE_VARIABLE_Acc_20_20);
{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_2

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__I_9 ;
	Item = (MR_Word) mercury__array__Y_14 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_15 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
        mercury__array__STATE_VARIABLE_B_21_21 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
        mercury__array__Var_22 = (mercury__array__I_9 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_22;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_15 = mercury__array__STATE_VARIABLE_B_21_21;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_17 = mercury__array__STATE_VARIABLE_Acc_20_20;

          mercury__array__I_9 = mercury__array__next_value_of_I_9;
          mercury__array__STATE_VARIABLE_B_0_15 = mercury__array__next_value_of_STATE_VARIABLE_B_0_15;
          mercury__array__STATE_VARIABLE_Acc_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_17;
        }
        continue;
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_18 = mercury__array__STATE_VARIABLE_Acc_0_17;
        *mercury__array__STATE_VARIABLE_B_16 = mercury__array__STATE_VARIABLE_B_0_15;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__map_foldl_5_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_21,
  MR_Word mercury__array__TypeInfo_for_T2_22,
  MR_Word mercury__array__TypeInfo_for_T3_23,
  MR_Word mercury__array__P_6,
  MR_ArrayPtr mercury__array__A_7,
  MR_ArrayPtr * mercury__array__B_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__N_10;
    MR_Word mercury__array__TypeInfo_for_T1_35;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_7 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__N_10  = Max;
}
    mercury__array__succeeded = (mercury__array__N_10 <= (MR_Integer) 0);
    if (mercury__array__succeeded)
    {
      MR_Word mercury__array__TypeInfo_for_T2_36;
      MR_ArrayPtr mercury__array__conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_1

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
      *mercury__array__B_8 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
      *mercury__array__STATE_VARIABLE_Acc_15 = mercury__array__STATE_VARIABLE_Acc_0_14;
    }
    else
    {
      MR_Box mercury__array__X_11;
      MR_Box mercury__array__Y_12;
      MR_ArrayPtr mercury__array__B1_13;
      MR_Box mercury__array__STATE_VARIABLE_Acc_18_18;
      MR_Word mercury__array__TypeInfo_for_T1_37;
      void MR_CALL (* mercury__array__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_7 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_11  = (MR_Box) Item;
}
      mercury__array__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_6, (MR_Integer) 1)));
      mercury__array__func_1(((MR_Box) mercury__array__P_6), mercury__array__X_11, &mercury__array__Y_12, mercury__array__STATE_VARIABLE_Acc_0_14, &mercury__array__STATE_VARIABLE_Acc_18_18);
      mercury__array__succeeded = (mercury__array__N_10 < (MR_Integer) 0);
      if (mercury__array__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "array.init: negative size");
          return;
        }
      }
      else
      {
        MR_Word mercury__array__TypeInfo_for_T2_38;
        MR_ArrayPtr mercury__array__conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_1

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size =  mercury__array__N_10 ;
	Item = (MR_Word) mercury__array__Y_12 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv2_Array );
        mercury__array__B1_13 = (MR_ArrayPtr) mercury__array__conv2_Array;
}
      }
      mercury__array__map_foldl_2_7_p_1(mercury__array__TypeInfo_for_T1_21, mercury__array__TypeInfo_for_T2_22, mercury__array__TypeInfo_for_T3_23, mercury__array__P_6, (MR_Integer) 1, mercury__array__A_7, mercury__array__B1_13, mercury__array__B_8, mercury__array__STATE_VARIABLE_Acc_18_18, mercury__array__STATE_VARIABLE_Acc_15);
    }
  }
}

void MR_CALL 
mercury__array__map_foldl_2_7_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_8,
  MR_Integer mercury__array__I_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_15,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded;
      MR_Integer mercury__array__Var_19;
      MR_Word mercury__array__TypeInfo_for_T1_31;

{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = Max;
}
      mercury__array__succeeded = (mercury__array__I_9 < mercury__array__Var_19);
      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__X_13;
        MR_Box mercury__array__Y_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_20_20;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_B_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
        MR_Word mercury__array__TypeInfo_for_T2_33;
        MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_13  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_8, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_8), mercury__array__X_13, &mercury__array__Y_14, mercury__array__STATE_VARIABLE_Acc_0_17, &mercury__array__STATE_VARIABLE_Acc_20_20);
{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_1

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__I_9 ;
	Item = (MR_Word) mercury__array__Y_14 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_15 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
        mercury__array__STATE_VARIABLE_B_21_21 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
        mercury__array__Var_22 = (mercury__array__I_9 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_22;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_15 = mercury__array__STATE_VARIABLE_B_21_21;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_17 = mercury__array__STATE_VARIABLE_Acc_20_20;

          mercury__array__I_9 = mercury__array__next_value_of_I_9;
          mercury__array__STATE_VARIABLE_B_0_15 = mercury__array__next_value_of_STATE_VARIABLE_B_0_15;
          mercury__array__STATE_VARIABLE_Acc_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_17;
        }
        continue;
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_18 = mercury__array__STATE_VARIABLE_Acc_0_17;
        *mercury__array__STATE_VARIABLE_B_16 = mercury__array__STATE_VARIABLE_B_0_15;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__map_foldl_5_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_21,
  MR_Word mercury__array__TypeInfo_for_T2_22,
  MR_Word mercury__array__TypeInfo_for_T3_23,
  MR_Word mercury__array__P_6,
  MR_ArrayPtr mercury__array__A_7,
  MR_ArrayPtr * mercury__array__B_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__N_10;
    MR_Word mercury__array__TypeInfo_for_T1_35;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_7 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__N_10  = Max;
}
    mercury__array__succeeded = (mercury__array__N_10 <= (MR_Integer) 0);
    if (mercury__array__succeeded)
    {
      MR_Word mercury__array__TypeInfo_for_T2_36;
      MR_ArrayPtr mercury__array__conv0_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv0_Array );
      *mercury__array__B_8 = (MR_ArrayPtr) mercury__array__conv0_Array;
}
      *mercury__array__STATE_VARIABLE_Acc_15 = mercury__array__STATE_VARIABLE_Acc_0_14;
    }
    else
    {
      MR_Box mercury__array__X_11;
      MR_Box mercury__array__Y_12;
      MR_ArrayPtr mercury__array__B1_13;
      MR_Box mercury__array__STATE_VARIABLE_Acc_18_18;
      MR_Word mercury__array__TypeInfo_for_T1_37;
      void MR_CALL (* mercury__array__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_7 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_11  = (MR_Box) Item;
}
      mercury__array__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_6, (MR_Integer) 1)));
      mercury__array__func_1(((MR_Box) mercury__array__P_6), mercury__array__X_11, &mercury__array__Y_12, mercury__array__STATE_VARIABLE_Acc_0_14, &mercury__array__STATE_VARIABLE_Acc_18_18);
      mercury__array__succeeded = (mercury__array__N_10 < (MR_Integer) 0);
      if (mercury__array__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "array.init: negative size");
          return;
        }
      }
      else
      {
        MR_Word mercury__array__TypeInfo_for_T2_38;
        MR_ArrayPtr mercury__array__conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_5_p_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size =  mercury__array__N_10 ;
	Item = (MR_Word) mercury__array__Y_12 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv2_Array );
        mercury__array__B1_13 = (MR_ArrayPtr) mercury__array__conv2_Array;
}
      }
      mercury__array__map_foldl_2_7_p_0(mercury__array__TypeInfo_for_T1_21, mercury__array__TypeInfo_for_T2_22, mercury__array__TypeInfo_for_T3_23, mercury__array__P_6, (MR_Integer) 1, mercury__array__A_7, mercury__array__B1_13, mercury__array__B_8, mercury__array__STATE_VARIABLE_Acc_18_18, mercury__array__STATE_VARIABLE_Acc_15);
    }
  }
}

void MR_CALL 
mercury__array__map_foldl_2_7_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_8,
  MR_Integer mercury__array__I_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_15,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded;
      MR_Integer mercury__array__Var_19;
      MR_Word mercury__array__TypeInfo_for_T1_31;

{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = Max;
}
      mercury__array__succeeded = (mercury__array__I_9 < mercury__array__Var_19);
      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__X_13;
        MR_Box mercury__array__Y_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_20_20;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_B_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
        MR_Word mercury__array__TypeInfo_for_T2_33;
        MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__X_13  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_8, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_8), mercury__array__X_13, &mercury__array__Y_14, mercury__array__STATE_VARIABLE_Acc_0_17, &mercury__array__STATE_VARIABLE_Acc_20_20);
{
#define MR_PROC_LABEL mercury__array__map_foldl_2_7_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__I_9 ;
	Item = (MR_Word) mercury__array__Y_14 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__STATE_VARIABLE_B_0_15 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
        mercury__array__STATE_VARIABLE_B_21_21 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
        mercury__array__Var_22 = (mercury__array__I_9 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_22;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_15 = mercury__array__STATE_VARIABLE_B_21_21;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_17 = mercury__array__STATE_VARIABLE_Acc_20_20;

          mercury__array__I_9 = mercury__array__next_value_of_I_9;
          mercury__array__STATE_VARIABLE_B_0_15 = mercury__array__next_value_of_STATE_VARIABLE_B_0_15;
          mercury__array__STATE_VARIABLE_Acc_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_17;
        }
        continue;
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_18 = mercury__array__STATE_VARIABLE_Acc_0_17;
        *mercury__array__STATE_VARIABLE_B_16 = mercury__array__STATE_VARIABLE_B_0_15;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr5_12_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr5_14_p_5(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr5_14_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__Min_16,
  MR_Integer mercury__array__I_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_17 < mercury__array__Min_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Integer mercury__array__Var_46;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_46 = (MR_Integer) 1;
          mercury__array__Var_40 = (mercury__array__I_17 - mercury__array__Var_46);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_17 = mercury__array__Var_40;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

            mercury__array__I_17 = mercury__array__next_value_of_I_17;
            mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
            mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
            mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
            mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
            mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr5_12_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr5_14_p_4(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr5_14_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__Min_16,
  MR_Integer mercury__array__I_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_17 < mercury__array__Min_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Integer mercury__array__Var_46;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_46 = (MR_Integer) 1;
          mercury__array__Var_40 = (mercury__array__I_17 - mercury__array__Var_46);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_17 = mercury__array__Var_40;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

            mercury__array__I_17 = mercury__array__next_value_of_I_17;
            mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
            mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
            mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
            mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
            mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr5_12_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr5_14_p_3(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr5_14_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__Min_16,
  MR_Integer mercury__array__I_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_17 < mercury__array__Min_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Integer mercury__array__Var_46;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_46 = (MR_Integer) 1;
          mercury__array__Var_40 = (mercury__array__I_17 - mercury__array__Var_46);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_17 = mercury__array__Var_40;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

            mercury__array__I_17 = mercury__array__next_value_of_I_17;
            mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
            mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
            mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
            mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
            mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr5_12_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__do_foldr5_14_p_2(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
  }
}

void MR_CALL 
mercury__array__do_foldr5_14_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__Min_16,
  MR_Integer mercury__array__I_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_17 < mercury__array__Min_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        mercury__array__Var_40 = (mercury__array__I_17 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_17 = mercury__array__Var_40;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

          mercury__array__I_17 = mercury__array__next_value_of_I_17;
          mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
          mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
          mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
          mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
          mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr5_12_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__do_foldr5_14_p_1(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
  }
}

void MR_CALL 
mercury__array__do_foldr5_14_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__Min_16,
  MR_Integer mercury__array__I_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_17 < mercury__array__Min_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        mercury__array__Var_40 = (mercury__array__I_17 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_17 = mercury__array__Var_40;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

          mercury__array__I_17 = mercury__array__next_value_of_I_17;
          mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
          mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
          mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
          mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
          mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr5_12_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr5_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__do_foldr5_14_p_0(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
  }
}

void MR_CALL 
mercury__array__do_foldr5_14_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__Min_16,
  MR_Integer mercury__array__I_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_17 < mercury__array__Min_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr5_14_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_17 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        mercury__array__Var_40 = (mercury__array__I_17 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_17 = mercury__array__Var_40;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

          mercury__array__I_17 = mercury__array__next_value_of_I_17;
          mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
          mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
          mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
          mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
          mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
        }
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr4_10_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr4_12_p_5(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr4_12_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__Min_14,
  MR_Integer mercury__array__I_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_15 < mercury__array__Min_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Integer mercury__array__Var_39;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_39 = (MR_Integer) 1;
          mercury__array__Var_34 = (mercury__array__I_15 - mercury__array__Var_39);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_15 = mercury__array__Var_34;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

            mercury__array__I_15 = mercury__array__next_value_of_I_15;
            mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
            mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
            mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
            mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr4_10_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr4_12_p_4(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr4_12_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__Min_14,
  MR_Integer mercury__array__I_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_15 < mercury__array__Min_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Integer mercury__array__Var_39;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_39 = (MR_Integer) 1;
          mercury__array__Var_34 = (mercury__array__I_15 - mercury__array__Var_39);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_15 = mercury__array__Var_34;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

            mercury__array__I_15 = mercury__array__next_value_of_I_15;
            mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
            mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
            mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
            mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr4_10_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr4_12_p_3(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr4_12_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__Min_14,
  MR_Integer mercury__array__I_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_15 < mercury__array__Min_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Integer mercury__array__Var_39;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_39 = (MR_Integer) 1;
          mercury__array__Var_34 = (mercury__array__I_15 - mercury__array__Var_39);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_15 = mercury__array__Var_34;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

            mercury__array__I_15 = mercury__array__next_value_of_I_15;
            mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
            mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
            mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
            mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr4_10_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__do_foldr4_12_p_2(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
  }
}

void MR_CALL 
mercury__array__do_foldr4_12_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__Min_14,
  MR_Integer mercury__array__I_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_15 < mercury__array__Min_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        mercury__array__Var_34 = (mercury__array__I_15 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_15 = mercury__array__Var_34;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

          mercury__array__I_15 = mercury__array__next_value_of_I_15;
          mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
          mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
          mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
          mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr4_10_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__do_foldr4_12_p_1(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
  }
}

void MR_CALL 
mercury__array__do_foldr4_12_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__Min_14,
  MR_Integer mercury__array__I_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_15 < mercury__array__Min_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        mercury__array__Var_34 = (mercury__array__I_15 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_15 = mercury__array__Var_34;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

          mercury__array__I_15 = mercury__array__next_value_of_I_15;
          mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
          mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
          mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
          mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr4_10_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr4_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__do_foldr4_12_p_0(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
  }
}

void MR_CALL 
mercury__array__do_foldr4_12_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__Min_14,
  MR_Integer mercury__array__I_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_15 < mercury__array__Min_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr4_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_15 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        mercury__array__Var_34 = (mercury__array__I_15 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_15 = mercury__array__Var_34;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

          mercury__array__I_15 = mercury__array__next_value_of_I_15;
          mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
          mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
          mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
          mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
        }
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr3_8_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr3_10_p_5(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr3_10_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__Min_12,
  MR_Integer mercury__array__I_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_13 < mercury__array__Min_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Integer mercury__array__Var_32;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_32 = (MR_Integer) 1;
          mercury__array__Var_28 = (mercury__array__I_13 - mercury__array__Var_32);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_13 = mercury__array__Var_28;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

            mercury__array__I_13 = mercury__array__next_value_of_I_13;
            mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
            mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
            mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr3_8_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr3_10_p_4(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr3_10_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__Min_12,
  MR_Integer mercury__array__I_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_13 < mercury__array__Min_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Integer mercury__array__Var_32;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_32 = (MR_Integer) 1;
          mercury__array__Var_28 = (mercury__array__I_13 - mercury__array__Var_32);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_13 = mercury__array__Var_28;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

            mercury__array__I_13 = mercury__array__next_value_of_I_13;
            mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
            mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
            mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr3_8_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr3_10_p_3(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr3_10_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__Min_12,
  MR_Integer mercury__array__I_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_13 < mercury__array__Min_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Integer mercury__array__Var_32;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_32 = (MR_Integer) 1;
          mercury__array__Var_28 = (mercury__array__I_13 - mercury__array__Var_32);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_13 = mercury__array__Var_28;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

            mercury__array__I_13 = mercury__array__next_value_of_I_13;
            mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
            mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
            mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr3_8_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__do_foldr3_10_p_2(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
  }
}

void MR_CALL 
mercury__array__do_foldr3_10_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__Min_12,
  MR_Integer mercury__array__I_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_13 < mercury__array__Min_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        mercury__array__Var_28 = (mercury__array__I_13 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_13 = mercury__array__Var_28;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

          mercury__array__I_13 = mercury__array__next_value_of_I_13;
          mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
          mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
          mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr3_8_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__do_foldr3_10_p_1(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
  }
}

void MR_CALL 
mercury__array__do_foldr3_10_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__Min_12,
  MR_Integer mercury__array__I_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_13 < mercury__array__Min_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        mercury__array__Var_28 = (mercury__array__I_13 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_13 = mercury__array__Var_28;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

          mercury__array__I_13 = mercury__array__next_value_of_I_13;
          mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
          mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
          mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr3_8_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__do_foldr3_10_p_0(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
  }
}

void MR_CALL 
mercury__array__do_foldr3_10_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__Min_12,
  MR_Integer mercury__array__I_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_13 < mercury__array__Min_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr3_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        mercury__array__Var_28 = (mercury__array__I_13 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_13 = mercury__array__Var_28;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

          mercury__array__I_13 = mercury__array__next_value_of_I_13;
          mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
          mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
          mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
        }
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr2_6_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr2_8_p_5(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr2_8_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__Min_10,
  MR_Integer mercury__array__I_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__Min_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Integer mercury__array__Var_25;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_25 = (MR_Integer) 1;
          mercury__array__Var_22 = (mercury__array__I_11 - mercury__array__Var_25);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_22;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

            mercury__array__I_11 = mercury__array__next_value_of_I_11;
            mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
            mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr2_6_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr2_8_p_4(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr2_8_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__Min_10,
  MR_Integer mercury__array__I_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__Min_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Integer mercury__array__Var_25;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_25 = (MR_Integer) 1;
          mercury__array__Var_22 = (mercury__array__I_11 - mercury__array__Var_25);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_22;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

            mercury__array__I_11 = mercury__array__next_value_of_I_11;
            mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
            mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr2_6_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr2_8_p_3(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr2_8_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__Min_10,
  MR_Integer mercury__array__I_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__Min_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Integer mercury__array__Var_25;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_25 = (MR_Integer) 1;
          mercury__array__Var_22 = (mercury__array__I_11 - mercury__array__Var_25);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_22;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

            mercury__array__I_11 = mercury__array__next_value_of_I_11;
            mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
            mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr2_6_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__do_foldr2_8_p_2(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
  }
}

void MR_CALL 
mercury__array__do_foldr2_8_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__Min_10,
  MR_Integer mercury__array__I_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__Min_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        mercury__array__Var_22 = (mercury__array__I_11 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_22;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

          mercury__array__I_11 = mercury__array__next_value_of_I_11;
          mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
          mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr2_6_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__do_foldr2_8_p_1(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
  }
}

void MR_CALL 
mercury__array__do_foldr2_8_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__Min_10,
  MR_Integer mercury__array__I_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__Min_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        mercury__array__Var_22 = (mercury__array__I_11 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_22;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

          mercury__array__I_11 = mercury__array__next_value_of_I_11;
          mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
          mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr2_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__do_foldr2_8_p_0(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
  }
}

void MR_CALL 
mercury__array__do_foldr2_8_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__Min_10,
  MR_Integer mercury__array__I_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__Min_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr2_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        mercury__array__Var_22 = (mercury__array__I_11 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_22;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

          mercury__array__I_11 = mercury__array__next_value_of_I_11;
          mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
          mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
        }
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr_4_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr_pred_6_p_5(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__Var_10, mercury__array__Var_11, mercury__array__A_6, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr_pred_6_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_Integer mercury__array__Min_8,
  MR_Integer mercury__array__I_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_9 < mercury__array__Min_8);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_18;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_18 = (MR_Integer) 1;
          mercury__array__Var_16 = (mercury__array__I_9 - mercury__array__Var_18);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

            mercury__array__I_9 = mercury__array__next_value_of_I_9;
            mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr_4_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr_pred_6_p_4(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__Var_10, mercury__array__Var_11, mercury__array__A_6, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr_pred_6_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_Integer mercury__array__Min_8,
  MR_Integer mercury__array__I_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_9 < mercury__array__Min_8);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_18;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_18 = (MR_Integer) 1;
          mercury__array__Var_16 = (mercury__array__I_9 - mercury__array__Var_18);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

            mercury__array__I_9 = mercury__array__next_value_of_I_9;
            mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldr_4_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldr_pred_6_p_3(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__Var_10, mercury__array__Var_11, mercury__array__A_6, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldr_pred_6_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_Integer mercury__array__Min_8,
  MR_Integer mercury__array__I_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_9 < mercury__array__Min_8);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_18;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_18 = (MR_Integer) 1;
          mercury__array__Var_16 = (mercury__array__I_9 - mercury__array__Var_18);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

            mercury__array__I_9 = mercury__array__next_value_of_I_9;
            mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr_4_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__do_foldr_pred_6_p_2(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__Var_10, mercury__array__Var_11, mercury__array__A_6, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__array__do_foldr_pred_6_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_Integer mercury__array__Min_8,
  MR_Integer mercury__array__I_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_9 < mercury__array__Min_8);

      if (mercury__array__succeeded)
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        mercury__array__Var_16 = (mercury__array__I_9 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

          mercury__array__I_9 = mercury__array__next_value_of_I_9;
          mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr_4_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__do_foldr_pred_6_p_1(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__Var_10, mercury__array__Var_11, mercury__array__A_6, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__array__do_foldr_pred_6_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_Integer mercury__array__Min_8,
  MR_Integer mercury__array__I_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_9 < mercury__array__Min_8);

      if (mercury__array__succeeded)
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        mercury__array__Var_16 = (mercury__array__I_9 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

          mercury__array__I_9 = mercury__array__next_value_of_I_9;
          mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldr_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldr_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__do_foldr_pred_6_p_0(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__Var_10, mercury__array__Var_11, mercury__array__A_6, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__array__do_foldr_pred_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_Integer mercury__array__Min_8,
  MR_Integer mercury__array__I_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_9 < mercury__array__Min_8);

      if (mercury__array__succeeded)
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldr_pred_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        mercury__array__Var_16 = (mercury__array__I_9 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

          mercury__array__I_9 = mercury__array__next_value_of_I_9;
          mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
        }
        continue;
      }
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__array__foldr_3_f_1(
  MR_Word mercury__array__TypeInfo_for_T1_10,
  MR_Word mercury__array__TypeInfo_for_T2_11,
  MR_Word mercury__array__Fn_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__X_7)
{
  {
    MR_Box mercury__array__HeadVar__4_4;
    MR_Integer mercury__array__Var_8;
    MR_Integer mercury__array__Var_9;
    MR_Word mercury__array__TypeInfo_for_T1_16;
    MR_Word mercury__array__TypeInfo_for_T1_17;

{
#define MR_PROC_LABEL mercury__array__foldr_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_8  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_9  = Max;
}
    mercury__array__HeadVar__4_4 = mercury__array__do_foldr_func_5_f_1(mercury__array__TypeInfo_for_T1_10, mercury__array__TypeInfo_for_T2_11, mercury__array__Fn_5, mercury__array__A_6, mercury__array__X_7, mercury__array__Var_8, mercury__array__Var_9);
    return mercury__array__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__array__do_foldr_func_5_f_1(
  MR_Word mercury__array__TypeInfo_for_T1_16,
  MR_Word mercury__array__TypeInfo_for_T2_17,
  MR_Word mercury__array__Fn_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__X_9,
  MR_Integer mercury__array__Min_10,
  MR_Integer mercury__array__I_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__Min_10);
      MR_Box mercury__array__HeadVar__6_6;

      if (mercury__array__succeeded)
        mercury__array__HeadVar__6_6 = mercury__array__X_9;
      else
      {
        MR_Box mercury__array__Var_12;
        MR_Box mercury__array__Var_13;
        MR_Integer mercury__array__Var_14;
        MR_Word mercury__array__TypeInfo_for_T1_21;
        MR_Box MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box);

{
#define MR_PROC_LABEL mercury__array__do_foldr_func_5_f_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_13  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Fn_7, (MR_Integer) 1)));
        mercury__array__Var_12 = mercury__array__func_0(((MR_Box) mercury__array__Fn_7), mercury__array__Var_13, mercury__array__X_9);
        mercury__array__Var_14 = (mercury__array__I_11 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__array__next_value_of_X_9 = mercury__array__Var_12;
          MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_14;

          mercury__array__X_9 = mercury__array__next_value_of_X_9;
          mercury__array__I_11 = mercury__array__next_value_of_I_11;
        }
        continue;
      }
      return mercury__array__HeadVar__6_6;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__array__foldr_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T1_10,
  MR_Word mercury__array__TypeInfo_for_T2_11,
  MR_Word mercury__array__Fn_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__X_7)
{
  {
    MR_Box mercury__array__HeadVar__4_4;
    MR_Integer mercury__array__Var_8;
    MR_Integer mercury__array__Var_9;
    MR_Word mercury__array__TypeInfo_for_T1_16;
    MR_Word mercury__array__TypeInfo_for_T1_17;

{
#define MR_PROC_LABEL mercury__array__foldr_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_8  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldr_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_9  = Max;
}
    mercury__array__HeadVar__4_4 = mercury__array__do_foldr_func_5_f_0(mercury__array__TypeInfo_for_T1_10, mercury__array__TypeInfo_for_T2_11, mercury__array__Fn_5, mercury__array__A_6, mercury__array__X_7, mercury__array__Var_8, mercury__array__Var_9);
    return mercury__array__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__array__do_foldr_func_5_f_0(
  MR_Word mercury__array__TypeInfo_for_T1_16,
  MR_Word mercury__array__TypeInfo_for_T2_17,
  MR_Word mercury__array__Fn_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__X_9,
  MR_Integer mercury__array__Min_10,
  MR_Integer mercury__array__I_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__Min_10);
      MR_Box mercury__array__HeadVar__6_6;

      if (mercury__array__succeeded)
        mercury__array__HeadVar__6_6 = mercury__array__X_9;
      else
      {
        MR_Box mercury__array__Var_12;
        MR_Box mercury__array__Var_13;
        MR_Integer mercury__array__Var_14;
        MR_Word mercury__array__TypeInfo_for_T1_21;
        MR_Box MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box);

{
#define MR_PROC_LABEL mercury__array__do_foldr_func_5_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_13  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Fn_7, (MR_Integer) 1)));
        mercury__array__Var_12 = mercury__array__func_0(((MR_Box) mercury__array__Fn_7), mercury__array__Var_13, mercury__array__X_9);
        mercury__array__Var_14 = (mercury__array__I_11 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__array__next_value_of_X_9 = mercury__array__Var_12;
          MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_14;

          mercury__array__X_9 = mercury__array__next_value_of_X_9;
          mercury__array__I_11 = mercury__array__next_value_of_I_11;
        }
        continue;
      }
      return mercury__array__HeadVar__6_6;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl5_12_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl5_14_p_5(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl5_14_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__I_16,
  MR_Integer mercury__array__Max_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_17 < mercury__array__I_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Integer mercury__array__Var_46;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_46 = (MR_Integer) 1;
          mercury__array__Var_40 = (mercury__array__I_16 + mercury__array__Var_46);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_16 = mercury__array__Var_40;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

            mercury__array__I_16 = mercury__array__next_value_of_I_16;
            mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
            mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
            mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
            mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
            mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl5_12_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl5_14_p_4(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl5_14_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__I_16,
  MR_Integer mercury__array__Max_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_17 < mercury__array__I_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Integer mercury__array__Var_46;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_46 = (MR_Integer) 1;
          mercury__array__Var_40 = (mercury__array__I_16 + mercury__array__Var_46);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_16 = mercury__array__Var_40;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

            mercury__array__I_16 = mercury__array__next_value_of_I_16;
            mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
            mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
            mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
            mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
            mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl5_12_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl5_14_p_3(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl5_14_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__I_16,
  MR_Integer mercury__array__Max_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_17 < mercury__array__I_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Integer mercury__array__Var_46;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_46 = (MR_Integer) 1;
          mercury__array__Var_40 = (mercury__array__I_16 + mercury__array__Var_46);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_16 = mercury__array__Var_40;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

            mercury__array__I_16 = mercury__array__next_value_of_I_16;
            mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
            mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
            mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
            mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
            mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl5_12_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__do_foldl5_14_p_2(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
  }
}

void MR_CALL 
mercury__array__do_foldl5_14_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__I_16,
  MR_Integer mercury__array__Max_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_17 < mercury__array__I_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        mercury__array__Var_40 = (mercury__array__I_16 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_16 = mercury__array__Var_40;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

          mercury__array__I_16 = mercury__array__next_value_of_I_16;
          mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
          mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
          mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
          mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
          mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl5_12_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__do_foldl5_14_p_1(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
  }
}

void MR_CALL 
mercury__array__do_foldl5_14_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__I_16,
  MR_Integer mercury__array__Max_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_17 < mercury__array__I_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        mercury__array__Var_40 = (mercury__array__I_16 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_16 = mercury__array__Var_40;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

          mercury__array__I_16 = mercury__array__next_value_of_I_16;
          mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
          mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
          mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
          mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
          mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl5_12_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_37,
  MR_Word mercury__array__TypeInfo_for_T2_38,
  MR_Word mercury__array__TypeInfo_for_T3_39,
  MR_Word mercury__array__TypeInfo_for_T4_40,
  MR_Word mercury__array__TypeInfo_for_T5_41,
  MR_Word mercury__array__TypeInfo_for_T6_42,
  MR_Word mercury__array__P_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_23,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_29)
{
  {
    MR_Integer mercury__array__Var_30;
    MR_Integer mercury__array__Var_31;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_30  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl5_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_31  = Max;
}
    mercury__array__do_foldl5_14_p_0(mercury__array__TypeInfo_for_T1_37, mercury__array__TypeInfo_for_T2_38, mercury__array__TypeInfo_for_T3_39, mercury__array__TypeInfo_for_T4_40, mercury__array__TypeInfo_for_T5_41, mercury__array__TypeInfo_for_T6_42, mercury__array__P_13, mercury__array__Var_30, mercury__array__Var_31, mercury__array__A_14, mercury__array__STATE_VARIABLE_Acc1_0_20, mercury__array__STATE_VARIABLE_Acc1_21, mercury__array__STATE_VARIABLE_Acc2_0_22, mercury__array__STATE_VARIABLE_Acc2_23, mercury__array__STATE_VARIABLE_Acc3_0_24, mercury__array__STATE_VARIABLE_Acc3_25, mercury__array__STATE_VARIABLE_Acc4_0_26, mercury__array__STATE_VARIABLE_Acc4_27, mercury__array__STATE_VARIABLE_Acc5_0_28, mercury__array__STATE_VARIABLE_Acc5_29);
  }
}

void MR_CALL 
mercury__array__do_foldl5_14_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_47,
  MR_Word mercury__array__TypeInfo_for_T2_48,
  MR_Word mercury__array__TypeInfo_for_T3_49,
  MR_Word mercury__array__TypeInfo_for_T4_50,
  MR_Word mercury__array__TypeInfo_for_T5_51,
  MR_Word mercury__array__TypeInfo_for_T6_52,
  MR_Word mercury__array__P_15,
  MR_Integer mercury__array__I_16,
  MR_Integer mercury__array__Max_17,
  MR_ArrayPtr mercury__array__A_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_24,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_25,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_26,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_27,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_28,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_29,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_30,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_31,
  MR_Box mercury__array__STATE_VARIABLE_Acc5_0_32,
  MR_Box * mercury__array__STATE_VARIABLE_Acc5_33)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_17 < mercury__array__I_16);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc5_33 = mercury__array__STATE_VARIABLE_Acc5_0_32;
        *mercury__array__STATE_VARIABLE_Acc4_31 = mercury__array__STATE_VARIABLE_Acc4_0_30;
        *mercury__array__STATE_VARIABLE_Acc3_29 = mercury__array__STATE_VARIABLE_Acc3_0_28;
        *mercury__array__STATE_VARIABLE_Acc2_27 = mercury__array__STATE_VARIABLE_Acc2_0_26;
        *mercury__array__STATE_VARIABLE_Acc1_25 = mercury__array__STATE_VARIABLE_Acc1_0_24;
      }
      else
      {
        MR_Box mercury__array__Var_34;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_35_35;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_36_36;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_37_37;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_38_38;
        MR_Box mercury__array__STATE_VARIABLE_Acc5_39_39;
        MR_Integer mercury__array__Var_40;
        MR_Word mercury__array__TypeInfo_for_T1_56;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl5_14_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_18 , Array);
	Index =  mercury__array__I_16 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_34  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_15, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_15), mercury__array__Var_34, mercury__array__STATE_VARIABLE_Acc1_0_24, &mercury__array__STATE_VARIABLE_Acc1_35_35, mercury__array__STATE_VARIABLE_Acc2_0_26, &mercury__array__STATE_VARIABLE_Acc2_36_36, mercury__array__STATE_VARIABLE_Acc3_0_28, &mercury__array__STATE_VARIABLE_Acc3_37_37, mercury__array__STATE_VARIABLE_Acc4_0_30, &mercury__array__STATE_VARIABLE_Acc4_38_38, mercury__array__STATE_VARIABLE_Acc5_0_32, &mercury__array__STATE_VARIABLE_Acc5_39_39);
        mercury__array__Var_40 = (mercury__array__I_16 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_16 = mercury__array__Var_40;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24 = mercury__array__STATE_VARIABLE_Acc1_35_35;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26 = mercury__array__STATE_VARIABLE_Acc2_36_36;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28 = mercury__array__STATE_VARIABLE_Acc3_37_37;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30 = mercury__array__STATE_VARIABLE_Acc4_38_38;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32 = mercury__array__STATE_VARIABLE_Acc5_39_39;

          mercury__array__I_16 = mercury__array__next_value_of_I_16;
          mercury__array__STATE_VARIABLE_Acc1_0_24 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_24;
          mercury__array__STATE_VARIABLE_Acc2_0_26 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_26;
          mercury__array__STATE_VARIABLE_Acc3_0_28 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_28;
          mercury__array__STATE_VARIABLE_Acc4_0_30 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_30;
          mercury__array__STATE_VARIABLE_Acc5_0_32 = mercury__array__next_value_of_STATE_VARIABLE_Acc5_0_32;
        }
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl4_10_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl4_12_p_5(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl4_12_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__I_14,
  MR_Integer mercury__array__Max_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_15 < mercury__array__I_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Integer mercury__array__Var_39;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_39 = (MR_Integer) 1;
          mercury__array__Var_34 = (mercury__array__I_14 + mercury__array__Var_39);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_34;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

            mercury__array__I_14 = mercury__array__next_value_of_I_14;
            mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
            mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
            mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
            mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl4_10_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl4_12_p_4(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl4_12_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__I_14,
  MR_Integer mercury__array__Max_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_15 < mercury__array__I_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Integer mercury__array__Var_39;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_39 = (MR_Integer) 1;
          mercury__array__Var_34 = (mercury__array__I_14 + mercury__array__Var_39);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_34;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

            mercury__array__I_14 = mercury__array__next_value_of_I_14;
            mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
            mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
            mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
            mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl4_10_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl4_12_p_3(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl4_12_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__I_14,
  MR_Integer mercury__array__Max_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_15 < mercury__array__I_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Integer mercury__array__Var_39;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_39 = (MR_Integer) 1;
          mercury__array__Var_34 = (mercury__array__I_14 + mercury__array__Var_39);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_34;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

            mercury__array__I_14 = mercury__array__next_value_of_I_14;
            mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
            mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
            mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
            mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl4_10_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__do_foldl4_12_p_2(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
  }
}

void MR_CALL 
mercury__array__do_foldl4_12_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__I_14,
  MR_Integer mercury__array__Max_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_15 < mercury__array__I_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        mercury__array__Var_34 = (mercury__array__I_14 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_34;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

          mercury__array__I_14 = mercury__array__next_value_of_I_14;
          mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
          mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
          mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
          mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl4_10_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__do_foldl4_12_p_1(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
  }
}

void MR_CALL 
mercury__array__do_foldl4_12_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__I_14,
  MR_Integer mercury__array__Max_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_15 < mercury__array__I_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        mercury__array__Var_34 = (mercury__array__I_14 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_34;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

          mercury__array__I_14 = mercury__array__next_value_of_I_14;
          mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
          mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
          mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
          mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl4_10_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_31,
  MR_Word mercury__array__TypeInfo_for_T2_32,
  MR_Word mercury__array__TypeInfo_for_T3_33,
  MR_Word mercury__array__TypeInfo_for_T4_34,
  MR_Word mercury__array__TypeInfo_for_T5_35,
  MR_Word mercury__array__P_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_24)
{
  {
    MR_Integer mercury__array__Var_25;
    MR_Integer mercury__array__Var_26;
    MR_Word mercury__array__TypeInfo_for_T1_40;
    MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_25  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl4_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_26  = Max;
}
    mercury__array__do_foldl4_12_p_0(mercury__array__TypeInfo_for_T1_31, mercury__array__TypeInfo_for_T2_32, mercury__array__TypeInfo_for_T3_33, mercury__array__TypeInfo_for_T4_34, mercury__array__TypeInfo_for_T5_35, mercury__array__P_11, mercury__array__Var_25, mercury__array__Var_26, mercury__array__A_12, mercury__array__STATE_VARIABLE_Acc1_0_17, mercury__array__STATE_VARIABLE_Acc1_18, mercury__array__STATE_VARIABLE_Acc2_0_19, mercury__array__STATE_VARIABLE_Acc2_20, mercury__array__STATE_VARIABLE_Acc3_0_21, mercury__array__STATE_VARIABLE_Acc3_22, mercury__array__STATE_VARIABLE_Acc4_0_23, mercury__array__STATE_VARIABLE_Acc4_24);
  }
}

void MR_CALL 
mercury__array__do_foldl4_12_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_40,
  MR_Word mercury__array__TypeInfo_for_T2_41,
  MR_Word mercury__array__TypeInfo_for_T3_42,
  MR_Word mercury__array__TypeInfo_for_T4_43,
  MR_Word mercury__array__TypeInfo_for_T5_44,
  MR_Word mercury__array__P_13,
  MR_Integer mercury__array__I_14,
  MR_Integer mercury__array__Max_15,
  MR_ArrayPtr mercury__array__A_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_21,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_22,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_23,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_24,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_25,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_26,
  MR_Box mercury__array__STATE_VARIABLE_Acc4_0_27,
  MR_Box * mercury__array__STATE_VARIABLE_Acc4_28)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_15 < mercury__array__I_14);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc4_28 = mercury__array__STATE_VARIABLE_Acc4_0_27;
        *mercury__array__STATE_VARIABLE_Acc3_26 = mercury__array__STATE_VARIABLE_Acc3_0_25;
        *mercury__array__STATE_VARIABLE_Acc2_24 = mercury__array__STATE_VARIABLE_Acc2_0_23;
        *mercury__array__STATE_VARIABLE_Acc1_22 = mercury__array__STATE_VARIABLE_Acc1_0_21;
      }
      else
      {
        MR_Box mercury__array__Var_29;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_30_30;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_31_31;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_32_32;
        MR_Box mercury__array__STATE_VARIABLE_Acc4_33_33;
        MR_Integer mercury__array__Var_34;
        MR_Word mercury__array__TypeInfo_for_T1_48;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl4_12_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_16 , Array);
	Index =  mercury__array__I_14 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_29  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_13, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_13), mercury__array__Var_29, mercury__array__STATE_VARIABLE_Acc1_0_21, &mercury__array__STATE_VARIABLE_Acc1_30_30, mercury__array__STATE_VARIABLE_Acc2_0_23, &mercury__array__STATE_VARIABLE_Acc2_31_31, mercury__array__STATE_VARIABLE_Acc3_0_25, &mercury__array__STATE_VARIABLE_Acc3_32_32, mercury__array__STATE_VARIABLE_Acc4_0_27, &mercury__array__STATE_VARIABLE_Acc4_33_33);
        mercury__array__Var_34 = (mercury__array__I_14 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_34;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21 = mercury__array__STATE_VARIABLE_Acc1_30_30;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23 = mercury__array__STATE_VARIABLE_Acc2_31_31;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25 = mercury__array__STATE_VARIABLE_Acc3_32_32;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27 = mercury__array__STATE_VARIABLE_Acc4_33_33;

          mercury__array__I_14 = mercury__array__next_value_of_I_14;
          mercury__array__STATE_VARIABLE_Acc1_0_21 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_21;
          mercury__array__STATE_VARIABLE_Acc2_0_23 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_23;
          mercury__array__STATE_VARIABLE_Acc3_0_25 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_25;
          mercury__array__STATE_VARIABLE_Acc4_0_27 = mercury__array__next_value_of_STATE_VARIABLE_Acc4_0_27;
        }
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl3_8_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl3_10_p_5(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl3_10_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__I_12,
  MR_Integer mercury__array__Max_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_13 < mercury__array__I_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Integer mercury__array__Var_32;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_32 = (MR_Integer) 1;
          mercury__array__Var_28 = (mercury__array__I_12 + mercury__array__Var_32);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_12 = mercury__array__Var_28;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

            mercury__array__I_12 = mercury__array__next_value_of_I_12;
            mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
            mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
            mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl3_8_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl3_10_p_4(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl3_10_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__I_12,
  MR_Integer mercury__array__Max_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_13 < mercury__array__I_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Integer mercury__array__Var_32;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_32 = (MR_Integer) 1;
          mercury__array__Var_28 = (mercury__array__I_12 + mercury__array__Var_32);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_12 = mercury__array__Var_28;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

            mercury__array__I_12 = mercury__array__next_value_of_I_12;
            mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
            mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
            mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl3_8_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl3_10_p_3(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl3_10_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__I_12,
  MR_Integer mercury__array__Max_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_13 < mercury__array__I_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Integer mercury__array__Var_32;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_32 = (MR_Integer) 1;
          mercury__array__Var_28 = (mercury__array__I_12 + mercury__array__Var_32);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_12 = mercury__array__Var_28;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

            mercury__array__I_12 = mercury__array__next_value_of_I_12;
            mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
            mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
            mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl3_8_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__do_foldl3_10_p_2(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
  }
}

void MR_CALL 
mercury__array__do_foldl3_10_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__I_12,
  MR_Integer mercury__array__Max_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_13 < mercury__array__I_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        mercury__array__Var_28 = (mercury__array__I_12 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_12 = mercury__array__Var_28;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

          mercury__array__I_12 = mercury__array__next_value_of_I_12;
          mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
          mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
          mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl3_8_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__do_foldl3_10_p_1(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
  }
}

void MR_CALL 
mercury__array__do_foldl3_10_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__I_12,
  MR_Integer mercury__array__Max_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_13 < mercury__array__I_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        mercury__array__Var_28 = (mercury__array__I_12 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_12 = mercury__array__Var_28;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

          mercury__array__I_12 = mercury__array__next_value_of_I_12;
          mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
          mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
          mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl3_8_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_25,
  MR_Word mercury__array__TypeInfo_for_T2_26,
  MR_Word mercury__array__TypeInfo_for_T3_27,
  MR_Word mercury__array__TypeInfo_for_T4_28,
  MR_Word mercury__array__P_9,
  MR_ArrayPtr mercury__array__A_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_17,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_19)
{
  {
    MR_Integer mercury__array__Var_20;
    MR_Integer mercury__array__Var_21;
    MR_Word mercury__array__TypeInfo_for_T1_33;
    MR_Word mercury__array__TypeInfo_for_T1_34;

{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_20  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_21  = Max;
}
    mercury__array__do_foldl3_10_p_0(mercury__array__TypeInfo_for_T1_25, mercury__array__TypeInfo_for_T2_26, mercury__array__TypeInfo_for_T3_27, mercury__array__TypeInfo_for_T4_28, mercury__array__P_9, mercury__array__Var_20, mercury__array__Var_21, mercury__array__A_10, mercury__array__STATE_VARIABLE_Acc1_0_14, mercury__array__STATE_VARIABLE_Acc1_15, mercury__array__STATE_VARIABLE_Acc2_0_16, mercury__array__STATE_VARIABLE_Acc2_17, mercury__array__STATE_VARIABLE_Acc3_0_18, mercury__array__STATE_VARIABLE_Acc3_19);
  }
}

void MR_CALL 
mercury__array__do_foldl3_10_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_33,
  MR_Word mercury__array__TypeInfo_for_T2_34,
  MR_Word mercury__array__TypeInfo_for_T3_35,
  MR_Word mercury__array__TypeInfo_for_T4_36,
  MR_Word mercury__array__P_11,
  MR_Integer mercury__array__I_12,
  MR_Integer mercury__array__Max_13,
  MR_ArrayPtr mercury__array__A_14,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_18,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_19,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_20,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_21,
  MR_Box mercury__array__STATE_VARIABLE_Acc3_0_22,
  MR_Box * mercury__array__STATE_VARIABLE_Acc3_23)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_13 < mercury__array__I_12);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc3_23 = mercury__array__STATE_VARIABLE_Acc3_0_22;
        *mercury__array__STATE_VARIABLE_Acc2_21 = mercury__array__STATE_VARIABLE_Acc2_0_20;
        *mercury__array__STATE_VARIABLE_Acc1_19 = mercury__array__STATE_VARIABLE_Acc1_0_18;
      }
      else
      {
        MR_Box mercury__array__Var_24;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_25_25;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_26_26;
        MR_Box mercury__array__STATE_VARIABLE_Acc3_27_27;
        MR_Integer mercury__array__Var_28;
        MR_Word mercury__array__TypeInfo_for_T1_40;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl3_10_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_14 , Array);
	Index =  mercury__array__I_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_24  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_11, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_11), mercury__array__Var_24, mercury__array__STATE_VARIABLE_Acc1_0_18, &mercury__array__STATE_VARIABLE_Acc1_25_25, mercury__array__STATE_VARIABLE_Acc2_0_20, &mercury__array__STATE_VARIABLE_Acc2_26_26, mercury__array__STATE_VARIABLE_Acc3_0_22, &mercury__array__STATE_VARIABLE_Acc3_27_27);
        mercury__array__Var_28 = (mercury__array__I_12 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_12 = mercury__array__Var_28;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18 = mercury__array__STATE_VARIABLE_Acc1_25_25;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20 = mercury__array__STATE_VARIABLE_Acc2_26_26;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22 = mercury__array__STATE_VARIABLE_Acc3_27_27;

          mercury__array__I_12 = mercury__array__next_value_of_I_12;
          mercury__array__STATE_VARIABLE_Acc1_0_18 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_18;
          mercury__array__STATE_VARIABLE_Acc2_0_20 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_20;
          mercury__array__STATE_VARIABLE_Acc3_0_22 = mercury__array__next_value_of_STATE_VARIABLE_Acc3_0_22;
        }
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl2_6_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl2_8_p_5(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl2_8_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__I_10,
  MR_Integer mercury__array__Max_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_11 < mercury__array__I_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Integer mercury__array__Var_25;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_25 = (MR_Integer) 1;
          mercury__array__Var_22 = (mercury__array__I_10 + mercury__array__Var_25);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_22;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

            mercury__array__I_10 = mercury__array__next_value_of_I_10;
            mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
            mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl2_6_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl2_8_p_4(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl2_8_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__I_10,
  MR_Integer mercury__array__Max_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_11 < mercury__array__I_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Integer mercury__array__Var_25;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_25 = (MR_Integer) 1;
          mercury__array__Var_22 = (mercury__array__I_10 + mercury__array__Var_25);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_22;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

            mercury__array__I_10 = mercury__array__next_value_of_I_10;
            mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
            mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl2_6_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl2_8_p_3(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl2_8_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__I_10,
  MR_Integer mercury__array__Max_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_11 < mercury__array__I_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Integer mercury__array__Var_25;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_25 = (MR_Integer) 1;
          mercury__array__Var_22 = (mercury__array__I_10 + mercury__array__Var_25);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_22;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

            mercury__array__I_10 = mercury__array__next_value_of_I_10;
            mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
            mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl2_6_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__do_foldl2_8_p_2(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
  }
}

void MR_CALL 
mercury__array__do_foldl2_8_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__I_10,
  MR_Integer mercury__array__Max_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_11 < mercury__array__I_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        mercury__array__Var_22 = (mercury__array__I_10 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_22;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

          mercury__array__I_10 = mercury__array__next_value_of_I_10;
          mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
          mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl2_6_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__do_foldl2_8_p_1(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
  }
}

void MR_CALL 
mercury__array__do_foldl2_8_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__I_10,
  MR_Integer mercury__array__Max_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_11 < mercury__array__I_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        mercury__array__Var_22 = (mercury__array__I_10 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_22;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

          mercury__array__I_10 = mercury__array__next_value_of_I_10;
          mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
          mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl2_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__TypeInfo_for_T3_21,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_11,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_14)
{
  {
    MR_Integer mercury__array__Var_15;
    MR_Integer mercury__array__Var_16;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;

{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_16  = Max;
}
    mercury__array__do_foldl2_8_p_0(mercury__array__TypeInfo_for_T1_19, mercury__array__TypeInfo_for_T2_20, mercury__array__TypeInfo_for_T3_21, mercury__array__P_7, mercury__array__Var_15, mercury__array__Var_16, mercury__array__A_8, mercury__array__STATE_VARIABLE_Acc1_0_11, mercury__array__STATE_VARIABLE_Acc1_12, mercury__array__STATE_VARIABLE_Acc2_0_13, mercury__array__STATE_VARIABLE_Acc2_14);
  }
}

void MR_CALL 
mercury__array__do_foldl2_8_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_26,
  MR_Word mercury__array__TypeInfo_for_T2_27,
  MR_Word mercury__array__TypeInfo_for_T3_28,
  MR_Word mercury__array__P_9,
  MR_Integer mercury__array__I_10,
  MR_Integer mercury__array__Max_11,
  MR_ArrayPtr mercury__array__A_12,
  MR_Box mercury__array__STATE_VARIABLE_Acc1_0_15,
  MR_Box * mercury__array__STATE_VARIABLE_Acc1_16,
  MR_Box mercury__array__STATE_VARIABLE_Acc2_0_17,
  MR_Box * mercury__array__STATE_VARIABLE_Acc2_18)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_11 < mercury__array__I_10);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc2_18 = mercury__array__STATE_VARIABLE_Acc2_0_17;
        *mercury__array__STATE_VARIABLE_Acc1_16 = mercury__array__STATE_VARIABLE_Acc1_0_15;
      }
      else
      {
        MR_Box mercury__array__Var_19;
        MR_Box mercury__array__STATE_VARIABLE_Acc1_20_20;
        MR_Box mercury__array__STATE_VARIABLE_Acc2_21_21;
        MR_Integer mercury__array__Var_22;
        MR_Word mercury__array__TypeInfo_for_T1_32;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl2_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_12 , Array);
	Index =  mercury__array__I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_19  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_9, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_9), mercury__array__Var_19, mercury__array__STATE_VARIABLE_Acc1_0_15, &mercury__array__STATE_VARIABLE_Acc1_20_20, mercury__array__STATE_VARIABLE_Acc2_0_17, &mercury__array__STATE_VARIABLE_Acc2_21_21);
        mercury__array__Var_22 = (mercury__array__I_10 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_22;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15 = mercury__array__STATE_VARIABLE_Acc1_20_20;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17 = mercury__array__STATE_VARIABLE_Acc2_21_21;

          mercury__array__I_10 = mercury__array__next_value_of_I_10;
          mercury__array__STATE_VARIABLE_Acc1_0_15 = mercury__array__next_value_of_STATE_VARIABLE_Acc1_0_15;
          mercury__array__STATE_VARIABLE_Acc2_0_17 = mercury__array__next_value_of_STATE_VARIABLE_Acc2_0_17;
        }
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl_4_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl_pred_6_p_5(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__A_6, mercury__array__Var_10, mercury__array__Var_11, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl_pred_6_p_5(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Integer mercury__array__I_9,
  MR_Integer mercury__array__Max_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_10 < mercury__array__I_9);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_18;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_18 = (MR_Integer) 1;
          mercury__array__Var_16 = (mercury__array__I_9 + mercury__array__Var_18);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

            mercury__array__I_9 = mercury__array__next_value_of_I_9;
            mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl_4_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl_pred_6_p_4(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__A_6, mercury__array__Var_10, mercury__array__Var_11, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl_pred_6_p_4(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Integer mercury__array__I_9,
  MR_Integer mercury__array__Max_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_10 < mercury__array__I_9);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_18;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_18 = (MR_Integer) 1;
          mercury__array__Var_16 = (mercury__array__I_9 + mercury__array__Var_18);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

            mercury__array__I_9 = mercury__array__next_value_of_I_9;
            mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__foldl_4_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__succeeded = mercury__array__do_foldl_pred_6_p_3(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__A_6, mercury__array__Var_10, mercury__array__Var_11, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__do_foldl_pred_6_p_3(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Integer mercury__array__I_9,
  MR_Integer mercury__array__Max_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_10 < mercury__array__I_9);

      if (mercury__array__succeeded)
      {
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
        mercury__array__succeeded = MR_TRUE;
      }
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_18;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_18 = (MR_Integer) 1;
          mercury__array__Var_16 = (mercury__array__I_9 + mercury__array__Var_18);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

            mercury__array__I_9 = mercury__array__next_value_of_I_9;
            mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
          }
          continue;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl_4_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__do_foldl_pred_6_p_2(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__A_6, mercury__array__Var_10, mercury__array__Var_11, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__array__do_foldl_pred_6_p_2(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Integer mercury__array__I_9,
  MR_Integer mercury__array__Max_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_10 < mercury__array__I_9);

      if (mercury__array__succeeded)
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        mercury__array__Var_16 = (mercury__array__I_9 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

          mercury__array__I_9 = mercury__array__next_value_of_I_9;
          mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl_4_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__do_foldl_pred_6_p_1(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__A_6, mercury__array__Var_10, mercury__array__Var_11, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__array__do_foldl_pred_6_p_1(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Integer mercury__array__I_9,
  MR_Integer mercury__array__Max_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_10 < mercury__array__I_9);

      if (mercury__array__succeeded)
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        mercury__array__Var_16 = (mercury__array__I_9 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

          mercury__array__I_9 = mercury__array__next_value_of_I_9;
          mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__foldl_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_13,
  MR_Word mercury__array__TypeInfo_for_T2_14,
  MR_Word mercury__array__P_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_9)
{
  {
    MR_Integer mercury__array__Var_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T1_19;
    MR_Word mercury__array__TypeInfo_for_T1_20;

{
#define MR_PROC_LABEL mercury__array__foldl_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__do_foldl_pred_6_p_0(mercury__array__TypeInfo_for_T1_13, mercury__array__TypeInfo_for_T2_14, mercury__array__P_5, mercury__array__A_6, mercury__array__Var_10, mercury__array__Var_11, mercury__array__STATE_VARIABLE_Acc_0_8, mercury__array__STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__array__do_foldl_pred_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_19,
  MR_Word mercury__array__TypeInfo_for_T2_20,
  MR_Word mercury__array__P_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Integer mercury__array__I_9,
  MR_Integer mercury__array__Max_10,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_12,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_10 < mercury__array__I_9);

      if (mercury__array__succeeded)
        *mercury__array__STATE_VARIABLE_Acc_13 = mercury__array__STATE_VARIABLE_Acc_0_12;
      else
      {
        MR_Box mercury__array__Var_14;
        MR_Box mercury__array__STATE_VARIABLE_Acc_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Word mercury__array__TypeInfo_for_T1_24;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__array__do_foldl_pred_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__I_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__P_7, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__P_7), mercury__array__Var_14, mercury__array__STATE_VARIABLE_Acc_0_12, &mercury__array__STATE_VARIABLE_Acc_15_15);
        mercury__array__Var_16 = (mercury__array__I_9 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_I_9 = mercury__array__Var_16;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12 = mercury__array__STATE_VARIABLE_Acc_15_15;

          mercury__array__I_9 = mercury__array__next_value_of_I_9;
          mercury__array__STATE_VARIABLE_Acc_0_12 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_12;
        }
        continue;
      }
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__array__foldl_3_f_1(
  MR_Word mercury__array__TypeInfo_for_T1_10,
  MR_Word mercury__array__TypeInfo_for_T2_11,
  MR_Word mercury__array__Fn_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__X_7)
{
  {
    MR_Box mercury__array__HeadVar__4_4;
    MR_Integer mercury__array__Var_8;
    MR_Integer mercury__array__Var_9;
    MR_Word mercury__array__TypeInfo_for_T1_16;
    MR_Word mercury__array__TypeInfo_for_T1_17;

{
#define MR_PROC_LABEL mercury__array__foldl_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_8  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_9  = Max;
}
    mercury__array__HeadVar__4_4 = mercury__array__do_foldl_func_5_f_1(mercury__array__TypeInfo_for_T1_10, mercury__array__TypeInfo_for_T2_11, mercury__array__Fn_5, mercury__array__A_6, mercury__array__X_7, mercury__array__Var_8, mercury__array__Var_9);
    return mercury__array__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__array__do_foldl_func_5_f_1(
  MR_Word mercury__array__TypeInfo_for_T1_16,
  MR_Word mercury__array__TypeInfo_for_T2_17,
  MR_Word mercury__array__Fn_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__X_9,
  MR_Integer mercury__array__I_10,
  MR_Integer mercury__array__Max_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_11 < mercury__array__I_10);
      MR_Box mercury__array__HeadVar__6_6;

      if (mercury__array__succeeded)
        mercury__array__HeadVar__6_6 = mercury__array__X_9;
      else
      {
        MR_Box mercury__array__Var_12;
        MR_Box mercury__array__Var_13;
        MR_Integer mercury__array__Var_14;
        MR_Word mercury__array__TypeInfo_for_T1_21;
        MR_Box MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box);

{
#define MR_PROC_LABEL mercury__array__do_foldl_func_5_f_1

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_13  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Fn_7, (MR_Integer) 1)));
        mercury__array__Var_12 = mercury__array__func_0(((MR_Box) mercury__array__Fn_7), mercury__array__Var_13, mercury__array__X_9);
        mercury__array__Var_14 = (mercury__array__I_10 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__array__next_value_of_X_9 = mercury__array__Var_12;
          MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_14;

          mercury__array__X_9 = mercury__array__next_value_of_X_9;
          mercury__array__I_10 = mercury__array__next_value_of_I_10;
        }
        continue;
      }
      return mercury__array__HeadVar__6_6;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__array__foldl_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T1_10,
  MR_Word mercury__array__TypeInfo_for_T2_11,
  MR_Word mercury__array__Fn_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__X_7)
{
  {
    MR_Box mercury__array__HeadVar__4_4;
    MR_Integer mercury__array__Var_8;
    MR_Integer mercury__array__Var_9;
    MR_Word mercury__array__TypeInfo_for_T1_16;
    MR_Word mercury__array__TypeInfo_for_T1_17;

{
#define MR_PROC_LABEL mercury__array__foldl_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_8  = Min;
}
{
#define MR_PROC_LABEL mercury__array__foldl_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_9  = Max;
}
    mercury__array__HeadVar__4_4 = mercury__array__do_foldl_func_5_f_0(mercury__array__TypeInfo_for_T1_10, mercury__array__TypeInfo_for_T2_11, mercury__array__Fn_5, mercury__array__A_6, mercury__array__X_7, mercury__array__Var_8, mercury__array__Var_9);
    return mercury__array__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__array__do_foldl_func_5_f_0(
  MR_Word mercury__array__TypeInfo_for_T1_16,
  MR_Word mercury__array__TypeInfo_for_T2_17,
  MR_Word mercury__array__Fn_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__X_9,
  MR_Integer mercury__array__I_10,
  MR_Integer mercury__array__Max_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Max_11 < mercury__array__I_10);
      MR_Box mercury__array__HeadVar__6_6;

      if (mercury__array__succeeded)
        mercury__array__HeadVar__6_6 = mercury__array__X_9;
      else
      {
        MR_Box mercury__array__Var_12;
        MR_Box mercury__array__Var_13;
        MR_Integer mercury__array__Var_14;
        MR_Word mercury__array__TypeInfo_for_T1_21;
        MR_Box MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box);

{
#define MR_PROC_LABEL mercury__array__do_foldl_func_5_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__I_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_13  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Fn_7, (MR_Integer) 1)));
        mercury__array__Var_12 = mercury__array__func_0(((MR_Box) mercury__array__Fn_7), mercury__array__Var_13, mercury__array__X_9);
        mercury__array__Var_14 = (mercury__array__I_10 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Box mercury__array__next_value_of_X_9 = mercury__array__Var_12;
          MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_14;

          mercury__array__X_9 = mercury__array__next_value_of_X_9;
          mercury__array__I_10 = mercury__array__next_value_of_I_10;
        }
        continue;
      }
      return mercury__array__HeadVar__6_6;
    }
    break;
  }
}

void MR_CALL 
mercury__array__sort_fix_2014_0_p_0(void)
{
  {
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__sort_1_f_0(
  MR_Word mercury__array__TypeInfo_for_T_6,
  MR_ArrayPtr mercury__array__A_3)
{
  {
    MR_ArrayPtr mercury__array__HeadVar__2_2;
    MR_Integer mercury__array__Var_4;
    MR_Integer mercury__array__Var_5;
    MR_ArrayPtr mercury__array__Var_17;
    MR_Word mercury__array__TypeInfo_for_T_21;
    MR_Word mercury__array__TypeInfo_for_T_22;
    MR_Word mercury__array__TypeInfo_for_T_23;
    MR_ArrayPtr mercury__array__Var_15;

{
#define MR_PROC_LABEL mercury__array__sort_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_3 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_4  = Min;
}
{
#define MR_PROC_LABEL mercury__array__sort_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_3 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_5  = Max;
}
{
#define MR_PROC_LABEL mercury__array__sort_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_3 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Var_17 );
}
    mercury__array__samsort_up_8_p_0(mercury__array__TypeInfo_for_T_6, (MR_Integer) 0, mercury__array__Var_17, &mercury__array__HeadVar__2_2, mercury__array__A_3, &mercury__array__Var_15, mercury__array__Var_4, mercury__array__Var_5, mercury__array__Var_4);
    return mercury__array__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__array__samsort_up_8_p_0(
  MR_Word mercury__array__TypeInfo_for_T_42,
  MR_Integer mercury__array__N_9,
  MR_ArrayPtr mercury__array__A0_10,
  MR_ArrayPtr * mercury__array__A_11,
  MR_ArrayPtr mercury__array__B0_12,
  MR_ArrayPtr * mercury__array__B_13,
  MR_Integer mercury__array__Lo_14,
  MR_Integer mercury__array__Hi_15,
  MR_Integer mercury__array__I_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_16 > mercury__array__Hi_15);

      if (mercury__array__succeeded)
      {
        *mercury__array__A_11 = mercury__array__A0_10;
        *mercury__array__B_13 = mercury__array__B0_12;
      }
      else
      {
        mercury__array__succeeded = (mercury__array__N_9 > (MR_Integer) 0);
        if (mercury__array__succeeded)
        {
          MR_ArrayPtr mercury__array__B1_17;
          MR_Integer mercury__array__J_19;
          MR_ArrayPtr mercury__array__B2_20;
          MR_ArrayPtr mercury__array__A2_21;
          MR_Integer mercury__array__Var_27 = (mercury__array__N_9 - (MR_Integer) 1);
          MR_Integer mercury__array__Var_29;
          MR_Integer mercury__array__Var_30;
          MR_Integer mercury__array__Var_34;

          mercury__array__samsort_down_8_p_0(mercury__array__TypeInfo_for_T_42, mercury__array__Var_27, mercury__array__B0_12, &mercury__array__B1_17, mercury__array__A0_10, &mercury__array__A2_21, mercury__array__I_16, mercury__array__Hi_15, &mercury__array__J_19);
          mercury__array__Var_29 = (mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__Var_30 = (mercury__array__J_19 - (MR_Integer) 1);
          mercury__array__merge_subarrays_8_p_0(mercury__array__TypeInfo_for_T_42, mercury__array__A2_21, mercury__array__Lo_14, mercury__array__Var_29, mercury__array__I_16, mercury__array__Var_30, mercury__array__Lo_14, mercury__array__B1_17, &mercury__array__B2_20);
          mercury__array__Var_34 = (mercury__array__N_9 + (MR_Integer) 1);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_N_9 = mercury__array__Var_34;
            MR_ArrayPtr mercury__array__next_value_of_A0_10 = mercury__array__B2_20;
            MR_ArrayPtr mercury__array__next_value_of_B0_12 = mercury__array__A2_21;
            MR_Integer mercury__array__next_value_of_I_16 = mercury__array__J_19;

            mercury__array__N_9 = mercury__array__next_value_of_N_9;
            mercury__array__A0_10 = mercury__array__next_value_of_A0_10;
            mercury__array__B0_12 = mercury__array__next_value_of_B0_12;
            mercury__array__I_16 = mercury__array__next_value_of_I_16;
          }
          continue;
        }
        else
        {
          MR_Integer mercury__array__Var_36;
          MR_ArrayPtr mercury__array__B1_38;
          MR_Integer mercury__array__J_39;
          MR_Word mercury__array__Var_50;
          MR_Box mercury__array__Var_51;
          MR_Box mercury__array__Var_52;
          MR_Integer mercury__array__Var_53;
          MR_Integer mercury__array__Var_54;
          MR_Word mercury__array__Var_66;

          mercury__array__succeeded = (mercury__array__Lo_14 < mercury__array__Hi_15);
          if (mercury__array__succeeded)
          {
            mercury__array__Var_50 = (MR_Integer) 2;
            mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_42, mercury__array__A0_10, mercury__array__Lo_14, &mercury__array__Var_51);
            mercury__array__Var_54 = (MR_Integer) 1;
            mercury__array__Var_53 = (mercury__array__Lo_14 + mercury__array__Var_54);
            mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_42, mercury__array__A0_10, mercury__array__Var_53, &mercury__array__Var_52);
            mercury__builtin__compare_3_p_0(mercury__array__TypeInfo_for_T_42, &mercury__array__Var_66, mercury__array__Var_51, mercury__array__Var_52);
            mercury__array__succeeded = (mercury__array__Var_50 == mercury__array__Var_66);
          }
          if (mercury__array__succeeded)
          {
            MR_Integer mercury__array__Var_56;
            MR_Integer mercury__array__Var_57;

            mercury__array__J_39 = mercury__array__search_until_4_f_0(mercury__array__TypeInfo_for_T_42, (MR_Integer) 1, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
            mercury__array__Var_56 = (mercury__array__J_39 - (MR_Integer) 1);
            mercury__array__Var_57 = (mercury__array__J_39 - (MR_Integer) 1);
            mercury__array__copy_subarray_reverse_6_p_0(mercury__array__TypeInfo_for_T_42, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_56, mercury__array__Var_57, mercury__array__B0_12, &mercury__array__B1_38);
          }
          else
          {
            MR_Integer mercury__array__Var_62;

            mercury__array__J_39 = mercury__array__search_until_4_f_0(mercury__array__TypeInfo_for_T_42, (MR_Integer) 2, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
            mercury__array__Var_62 = (mercury__array__J_39 - (MR_Integer) 1);
            mercury__array__copy_subarray_6_p_0(mercury__array__TypeInfo_for_T_42, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_62, mercury__array__Lo_14, mercury__array__B0_12, &mercury__array__B1_38);
          }
          mercury__array__Var_36 = (mercury__array__N_9 + (MR_Integer) 1);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_N_9 = mercury__array__Var_36;
            MR_ArrayPtr mercury__array__next_value_of_A0_10 = mercury__array__B1_38;
            MR_ArrayPtr mercury__array__next_value_of_B0_12 = mercury__array__A0_10;
            MR_Integer mercury__array__next_value_of_I_16 = mercury__array__J_39;

            mercury__array__N_9 = mercury__array__next_value_of_N_9;
            mercury__array__A0_10 = mercury__array__next_value_of_A0_10;
            mercury__array__B0_12 = mercury__array__next_value_of_B0_12;
            mercury__array__I_16 = mercury__array__next_value_of_I_16;
          }
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__array__samsort_down_8_p_0(
  MR_Word mercury__array__TypeInfo_for_T_34,
  MR_Integer mercury__array__N_9,
  MR_ArrayPtr mercury__array__A0_10,
  MR_ArrayPtr * mercury__array__A_11,
  MR_ArrayPtr mercury__array__B0_12,
  MR_ArrayPtr * mercury__array__B_13,
  MR_Integer mercury__array__Lo_14,
  MR_Integer mercury__array__Hi_15,
  MR_Integer * mercury__array__I_16)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__Lo_14 > mercury__array__Hi_15);

    if (mercury__array__succeeded)
    {
      *mercury__array__A_11 = mercury__array__A0_10;
      *mercury__array__B_13 = mercury__array__B0_12;
      *mercury__array__I_16 = mercury__array__Lo_14;
    }
    else
    {
      mercury__array__succeeded = (mercury__array__N_9 > (MR_Integer) 0);
      if (mercury__array__succeeded)
      {
        MR_ArrayPtr mercury__array__B1_17;
        MR_ArrayPtr mercury__array__A1_18;
        MR_Integer mercury__array__J_19;
        MR_ArrayPtr mercury__array__B2_20;
        MR_Integer mercury__array__Var_23 = (mercury__array__N_9 - (MR_Integer) 1);
        MR_Integer mercury__array__Var_25;
        MR_Integer mercury__array__Var_27;
        MR_Integer mercury__array__Var_28;

        mercury__array__samsort_down_8_p_0(mercury__array__TypeInfo_for_T_34, mercury__array__Var_23, mercury__array__B0_12, &mercury__array__B1_17, mercury__array__A0_10, &mercury__array__A1_18, mercury__array__Lo_14, mercury__array__Hi_15, &mercury__array__J_19);
        mercury__array__Var_25 = (mercury__array__N_9 - (MR_Integer) 1);
        mercury__array__samsort_down_8_p_0(mercury__array__TypeInfo_for_T_34, mercury__array__Var_25, mercury__array__B1_17, &mercury__array__B2_20, mercury__array__A1_18, mercury__array__A_11, mercury__array__J_19, mercury__array__Hi_15, mercury__array__I_16);
        mercury__array__Var_27 = (mercury__array__J_19 - (MR_Integer) 1);
        mercury__array__Var_28 = (*mercury__array__I_16 - (MR_Integer) 1);
        mercury__array__merge_subarrays_8_p_0(mercury__array__TypeInfo_for_T_34, *mercury__array__A_11, mercury__array__Lo_14, mercury__array__Var_27, mercury__array__J_19, mercury__array__Var_28, mercury__array__Lo_14, mercury__array__B2_20, mercury__array__B_13);
      }
      else
      {
        MR_Word mercury__array__Var_42;
        MR_Box mercury__array__Var_43;
        MR_Box mercury__array__Var_44;
        MR_Integer mercury__array__Var_45;
        MR_Integer mercury__array__Var_46;
        MR_Word mercury__array__Var_58;

        *mercury__array__A_11 = mercury__array__A0_10;
        mercury__array__succeeded = (mercury__array__Lo_14 < mercury__array__Hi_15);
        if (mercury__array__succeeded)
        {
          mercury__array__Var_42 = (MR_Integer) 2;
          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_34, mercury__array__A0_10, mercury__array__Lo_14, &mercury__array__Var_43);
          mercury__array__Var_46 = (MR_Integer) 1;
          mercury__array__Var_45 = (mercury__array__Lo_14 + mercury__array__Var_46);
          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_34, mercury__array__A0_10, mercury__array__Var_45, &mercury__array__Var_44);
          mercury__builtin__compare_3_p_0(mercury__array__TypeInfo_for_T_34, &mercury__array__Var_58, mercury__array__Var_43, mercury__array__Var_44);
          mercury__array__succeeded = (mercury__array__Var_42 == mercury__array__Var_58);
        }
        if (mercury__array__succeeded)
        {
          MR_Integer mercury__array__Var_48;
          MR_Integer mercury__array__Var_49;

          *mercury__array__I_16 = mercury__array__search_until_4_f_0(mercury__array__TypeInfo_for_T_34, (MR_Integer) 1, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
          mercury__array__Var_48 = (*mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__Var_49 = (*mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__copy_subarray_reverse_6_p_0(mercury__array__TypeInfo_for_T_34, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_48, mercury__array__Var_49, mercury__array__B0_12, mercury__array__B_13);
        }
        else
        {
          MR_Integer mercury__array__Var_54;

          *mercury__array__I_16 = mercury__array__search_until_4_f_0(mercury__array__TypeInfo_for_T_34, (MR_Integer) 2, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Hi_15);
          mercury__array__Var_54 = (*mercury__array__I_16 - (MR_Integer) 1);
          mercury__array__copy_subarray_6_p_0(mercury__array__TypeInfo_for_T_34, mercury__array__A0_10, mercury__array__Lo_14, mercury__array__Var_54, mercury__array__Lo_14, mercury__array__B0_12, mercury__array__B_13);
        }
      }
    }
  }
}

static void MR_CALL 
mercury__array__merge_subarrays_8_p_0(
  MR_Word mercury__array__TypeInfo_for_T_41,
  MR_ArrayPtr mercury__array__A_9,
  MR_Integer mercury__array__Lo1_10,
  MR_Integer mercury__array__Hi1_11,
  MR_Integer mercury__array__Lo2_12,
  MR_Integer mercury__array__Hi2_13,
  MR_Integer mercury__array__I_14,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_19,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo1_10 > mercury__array__Hi1_11);

      if (mercury__array__succeeded)
        mercury__array__copy_subarray_6_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__A_9, mercury__array__Lo2_12, mercury__array__Hi2_13, mercury__array__I_14, mercury__array__STATE_VARIABLE_B_0_19, mercury__array__STATE_VARIABLE_B_20);
      else
      {
        mercury__array__succeeded = (mercury__array__Lo2_12 > mercury__array__Hi2_13);
        if (mercury__array__succeeded)
          mercury__array__copy_subarray_6_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__A_9, mercury__array__Lo1_10, mercury__array__Hi1_11, mercury__array__I_14, mercury__array__STATE_VARIABLE_B_0_19, mercury__array__STATE_VARIABLE_B_20);
        else
        {
          MR_Box mercury__array__X1_16;
          MR_Box mercury__array__X2_17;
          MR_Word mercury__array__R_18;

          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__A_9, mercury__array__Lo1_10, &mercury__array__X1_16);
          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__A_9, mercury__array__Lo2_12, &mercury__array__X2_17);
          mercury__builtin__compare_3_p_0(mercury__array__TypeInfo_for_T_41, &mercury__array__R_18, mercury__array__X1_16, mercury__array__X2_17);
          switch (mercury__array__R_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_ArrayPtr mercury__array__STATE_VARIABLE_B_35_35;
                MR_Integer mercury__array__Var_36;
                MR_Integer mercury__array__Var_37;

                mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__I_14, mercury__array__X1_16, mercury__array__STATE_VARIABLE_B_0_19, &mercury__array__STATE_VARIABLE_B_35_35);
                mercury__array__Var_36 = (mercury__array__Lo1_10 + (MR_Integer) 1);
                mercury__array__Var_37 = (mercury__array__I_14 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo1_10 = mercury__array__Var_36;
                  MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_37;
                  MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_19 = mercury__array__STATE_VARIABLE_B_35_35;

                  mercury__array__Lo1_10 = mercury__array__next_value_of_Lo1_10;
                  mercury__array__I_14 = mercury__array__next_value_of_I_14;
                  mercury__array__STATE_VARIABLE_B_0_19 = mercury__array__next_value_of_STATE_VARIABLE_B_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_ArrayPtr mercury__array__STATE_VARIABLE_B_29_29;
                MR_Integer mercury__array__Var_30;
                MR_Integer mercury__array__Var_31;

                mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__I_14, mercury__array__X1_16, mercury__array__STATE_VARIABLE_B_0_19, &mercury__array__STATE_VARIABLE_B_29_29);
                mercury__array__Var_30 = (mercury__array__Lo1_10 + (MR_Integer) 1);
                mercury__array__Var_31 = (mercury__array__I_14 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo1_10 = mercury__array__Var_30;
                  MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_31;
                  MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_19 = mercury__array__STATE_VARIABLE_B_29_29;

                  mercury__array__Lo1_10 = mercury__array__next_value_of_Lo1_10;
                  mercury__array__I_14 = mercury__array__next_value_of_I_14;
                  mercury__array__STATE_VARIABLE_B_0_19 = mercury__array__next_value_of_STATE_VARIABLE_B_0_19;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_ArrayPtr mercury__array__STATE_VARIABLE_B_23_23;
                MR_Integer mercury__array__Var_24;
                MR_Integer mercury__array__Var_25;

                mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_41, mercury__array__I_14, mercury__array__X2_17, mercury__array__STATE_VARIABLE_B_0_19, &mercury__array__STATE_VARIABLE_B_23_23);
                mercury__array__Var_24 = (mercury__array__Lo2_12 + (MR_Integer) 1);
                mercury__array__Var_25 = (mercury__array__I_14 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo2_12 = mercury__array__Var_24;
                  MR_Integer mercury__array__next_value_of_I_14 = mercury__array__Var_25;
                  MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_19 = mercury__array__STATE_VARIABLE_B_23_23;

                  mercury__array__Lo2_12 = mercury__array__next_value_of_Lo2_12;
                  mercury__array__I_14 = mercury__array__next_value_of_I_14;
                  mercury__array__STATE_VARIABLE_B_0_19 = mercury__array__next_value_of_STATE_VARIABLE_B_0_19;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__array__copy_subarray_reverse_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T_21,
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_8 <= mercury__array__Hi_9);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__X_12;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_B_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_17;

        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_21, mercury__array__A_7, mercury__array__Lo_8, &mercury__array__X_12);
        mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_21, mercury__array__I_10, mercury__array__X_12, mercury__array__STATE_VARIABLE_B_0_13, &mercury__array__STATE_VARIABLE_B_15_15);
        mercury__array__Var_16 = (mercury__array__Lo_8 + (MR_Integer) 1);
        mercury__array__Var_17 = (mercury__array__I_10 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Lo_8 = mercury__array__Var_16;
          MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_17;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_13 = mercury__array__STATE_VARIABLE_B_15_15;

          mercury__array__Lo_8 = mercury__array__next_value_of_Lo_8;
          mercury__array__I_10 = mercury__array__next_value_of_I_10;
          mercury__array__STATE_VARIABLE_B_0_13 = mercury__array__next_value_of_STATE_VARIABLE_B_0_13;
        }
        continue;
      }
      else
        *mercury__array__STATE_VARIABLE_B_14 = mercury__array__STATE_VARIABLE_B_0_13;
    }
    break;
  }
}

static void MR_CALL 
mercury__array__copy_subarray_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T_21,
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Integer mercury__array__I_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_B_0_13,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_B_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_8 <= mercury__array__Hi_9);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__X_12;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_B_15_15;
        MR_Integer mercury__array__Var_16;
        MR_Integer mercury__array__Var_17;

        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_21, mercury__array__A_7, mercury__array__Lo_8, &mercury__array__X_12);
        mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_21, mercury__array__I_10, mercury__array__X_12, mercury__array__STATE_VARIABLE_B_0_13, &mercury__array__STATE_VARIABLE_B_15_15);
        mercury__array__Var_16 = (mercury__array__Lo_8 + (MR_Integer) 1);
        mercury__array__Var_17 = (mercury__array__I_10 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Lo_8 = mercury__array__Var_16;
          MR_Integer mercury__array__next_value_of_I_10 = mercury__array__Var_17;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_B_0_13 = mercury__array__STATE_VARIABLE_B_15_15;

          mercury__array__Lo_8 = mercury__array__next_value_of_Lo_8;
          mercury__array__I_10 = mercury__array__next_value_of_I_10;
          mercury__array__STATE_VARIABLE_B_0_13 = mercury__array__next_value_of_STATE_VARIABLE_B_0_13;
        }
        continue;
      }
      else
        *mercury__array__STATE_VARIABLE_B_14 = mercury__array__STATE_VARIABLE_B_0_13;
    }
    break;
  }
}

static MR_Integer MR_CALL 
mercury__array__search_until_4_f_0(
  MR_Word mercury__array__TypeInfo_for_T_17,
  MR_Word mercury__array__R_6,
  MR_ArrayPtr mercury__array__A_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_8 < mercury__array__Hi_9);
      MR_Integer mercury__array__HeadVar__5_5;
      MR_Box mercury__array__Var_10;
      MR_Box mercury__array__Var_11;
      MR_Integer mercury__array__Var_12;
      MR_Integer mercury__array__Var_13;
      MR_Word mercury__array__Var_18;

      if (mercury__array__succeeded)
      {
        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_17, mercury__array__A_7, mercury__array__Lo_8, &mercury__array__Var_10);
        mercury__array__Var_13 = (MR_Integer) 1;
        mercury__array__Var_12 = (mercury__array__Lo_8 + mercury__array__Var_13);
        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_17, mercury__array__A_7, mercury__array__Var_12, &mercury__array__Var_11);
        mercury__builtin__compare_3_p_0(mercury__array__TypeInfo_for_T_17, &mercury__array__Var_18, mercury__array__Var_10, mercury__array__Var_11);
        mercury__array__succeeded = (mercury__array__R_6 == mercury__array__Var_18);
        mercury__array__succeeded = !(mercury__array__succeeded);
      }
      if (mercury__array__succeeded)
      {
        MR_Integer mercury__array__Var_14 = (mercury__array__Lo_8 + (MR_Integer) 1);

        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Lo_8 = mercury__array__Var_14;

          mercury__array__Lo_8 = mercury__array__next_value_of_Lo_8;
        }
        continue;
      }
      else
      {
        mercury__array__HeadVar__5_5 = (mercury__array__Lo_8 + (MR_Integer) 1);
      }
      return mercury__array__HeadVar__5_5;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__array__array_compare_2_f_0(
  MR_Word mercury__array__TypeInfo_for_T_7,
  MR_ArrayPtr mercury__array__A1_4,
  MR_ArrayPtr mercury__array__A2_5)
{
  {
    MR_Word mercury__array__C_6;

    mercury__array__array_compare_3_p_0(mercury__array__TypeInfo_for_T_7, &mercury__array__C_6, mercury__array__A1_4, mercury__array__A2_5);
    return mercury__array__C_6;
  }
}

void MR_CALL 
mercury__array__array_compare_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_11,
  MR_Word * mercury__array__Result_4,
  MR_ArrayPtr mercury__array__Array1_5,
  MR_ArrayPtr mercury__array__Array2_6)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Size1_7;
    MR_Integer mercury__array__Size2_8;
    MR_Word mercury__array__SizeResult_9;
    MR_Word mercury__array__TypeInfo_for_T_16;
    MR_Word mercury__array__TypeInfo_for_T_17;

{
#define MR_PROC_LABEL mercury__array__array_compare_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array1_5 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Size1_7  = Max;
}
{
#define MR_PROC_LABEL mercury__array__array_compare_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array2_6 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Size2_8  = Max;
}
    mercury__array__succeeded = (mercury__array__Size1_7 < mercury__array__Size2_8);
    if (mercury__array__succeeded)
      mercury__array__SizeResult_9 = (MR_Integer) 1;
    else
    {
      mercury__array__succeeded = (mercury__array__Size1_7 == mercury__array__Size2_8);
      if (mercury__array__succeeded)
        mercury__array__SizeResult_9 = (MR_Integer) 0;
      else
        mercury__array__SizeResult_9 = (MR_Integer) 2;
    }
    switch (mercury__array__SizeResult_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *mercury__array__Result_4 = mercury__array__SizeResult_9;
        break;
      case (MR_Integer) 0:
        {
          mercury__array__compare_elements_5_p_0(mercury__array__TypeInfo_for_T_11, (MR_Integer) 0, mercury__array__Size1_7, mercury__array__Array1_5, mercury__array__Array2_6, mercury__array__Result_4);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__array__compare_elements_5_p_0(
  MR_Word mercury__array__TypeInfo_for_T_16,
  MR_Integer mercury__array__N_6,
  MR_Integer mercury__array__Size_7,
  MR_ArrayPtr mercury__array__Array1_8,
  MR_ArrayPtr mercury__array__Array2_9,
  MR_Word * mercury__array__Result_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__N_6 == mercury__array__Size_7);

      if (mercury__array__succeeded)
        *mercury__array__Result_10 = (MR_Integer) 0;
      else
      {
        MR_Box mercury__array__Elem1_11;
        MR_Box mercury__array__Elem2_12;
        MR_Word mercury__array__ElemResult_13;

        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_16, mercury__array__Array1_8, mercury__array__N_6, &mercury__array__Elem1_11);
        mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_16, mercury__array__Array2_9, mercury__array__N_6, &mercury__array__Elem2_12);
        mercury__builtin__compare_3_p_0(mercury__array__TypeInfo_for_T_16, &mercury__array__ElemResult_13, mercury__array__Elem1_11, mercury__array__Elem2_12);
        switch (mercury__array__ElemResult_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *mercury__array__Result_10 = mercury__array__ElemResult_13;
            break;
          case (MR_Integer) 0:
            {
              MR_Integer mercury__array__N1_14 = (mercury__array__N_6 + (MR_Integer) 1);

              /* direct tailcall eliminated */
              {
                MR_Integer mercury__array__next_value_of_N_6 = mercury__array__N1_14;

                mercury__array__N_6 = mercury__array__next_value_of_N_6;
              }
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__map_2_f_0(
  MR_Word mercury__array__TypeInfo_for_T1_14,
  MR_Word mercury__array__TypeInfo_for_T2_15,
  MR_Word mercury__array__F_4,
  MR_ArrayPtr mercury__array__A1_5)
{
  {
    MR_bool mercury__array__succeeded;
    MR_ArrayPtr mercury__array__A2_6;
    MR_Box mercury__array__Elem0_19;
    MR_Integer mercury__array__Min_31;
    MR_Integer mercury__array__Max_32;
    MR_Word mercury__array__TypeInfo_for_T1_46;
    MR_Word mercury__array__TypeInfo_for_T1_47;
    MR_Word mercury__array__TypeInfo_for_T1_48;

{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A1_5 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Min_31  = Min;
}
{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A1_5 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Max_32  = Max;
}
    mercury__array__succeeded = (mercury__array__Min_31 <= (MR_Integer) 0);
    if (mercury__array__succeeded)
    {
      mercury__array__succeeded = ((MR_Integer) 0 <= mercury__array__Max_32);
      if (mercury__array__succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A1_5 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Elem0_19  = (MR_Box) Item;
}
        mercury__array__succeeded = MR_TRUE;
      }
    }
    if (mercury__array__succeeded)
    {
      MR_Integer mercury__array__Size_20;
      MR_Box mercury__array__Elem_21;
      MR_ArrayPtr mercury__array__NewArray0_22;
      MR_Word mercury__array__TypeInfo_for_T1_49;
      MR_Box MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box);
      MR_Word mercury__array__TypeInfo_for_T2_50;
      MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A1_5 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Size_20  = Max;
}
      mercury__array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__F_4, (MR_Integer) 1)));
      mercury__array__Elem_21 = mercury__array__func_0(((MR_Box) mercury__array__F_4), mercury__array__Elem0_19);
{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__Size_20 ;
	FirstElem = (MR_Word) mercury__array__Elem_21 ;
	IndexToSet =  (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
      mercury__array__NewArray0_22 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
      mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_p_0(mercury__array__F_4, (MR_Integer) 1, mercury__array__Size_20, mercury__array__A1_5, mercury__array__NewArray0_22, &mercury__array__A2_6);
    }
    else
    {
      MR_Word mercury__array__TypeInfo_for_T2_51;
      MR_ArrayPtr mercury__array__conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_2_f_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv2_Array );
      mercury__array__A2_6 = (MR_ArrayPtr) mercury__array__conv2_Array;
}
    }
    return mercury__array__A2_6;
  }
}

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_p_0(
  MR_Word mercury__array__Var_24,
  MR_Integer mercury__array__N_7,
  MR_Integer mercury__array__Size_8,
  MR_ArrayPtr mercury__array__OldArray_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_NewArray_0_14,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_NewArray_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__N_7 >= mercury__array__Size_8);

      if (mercury__array__succeeded)
        *mercury__array__STATE_VARIABLE_NewArray_15 = mercury__array__STATE_VARIABLE_NewArray_0_14;
      else
      {
        MR_Box mercury__array__OldElem_12;
        MR_Box mercury__array__NewElem_13;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_NewArray_16_16;
        MR_Integer mercury__array__Var_17;
        MR_Word mercury__array__TypeInfo_for_T1_35;
        MR_Box MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box);
        MR_Word mercury__array__TypeInfo_for_T2_36;
        MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__OldArray_10 , Array);
	Index =  mercury__array__N_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__OldElem_12  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Var_24, (MR_Integer) 1)));
        mercury__array__NewElem_13 = mercury__array__func_0(((MR_Box) mercury__array__Var_24), mercury__array__OldElem_12);
{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__N_7 ;
	Item = (MR_Word) mercury__array__NewElem_13 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__STATE_VARIABLE_NewArray_0_14 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
        mercury__array__STATE_VARIABLE_NewArray_16_16 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
        mercury__array__Var_17 = (mercury__array__N_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_N_7 = mercury__array__Var_17;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_NewArray_0_14 = mercury__array__STATE_VARIABLE_NewArray_16_16;

          mercury__array__N_7 = mercury__array__next_value_of_N_7;
          mercury__array__STATE_VARIABLE_NewArray_0_14 = mercury__array__next_value_of_STATE_VARIABLE_NewArray_0_14;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__map_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_14,
  MR_Word mercury__array__TypeInfo_for_T2_15,
  MR_Word mercury__array__Closure_4,
  MR_ArrayPtr mercury__array__OldArray_5,
  MR_ArrayPtr * mercury__array__NewArray_6)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Box mercury__array__Elem0_7;
    MR_Integer mercury__array__Min_21;
    MR_Integer mercury__array__Max_22;
    MR_Word mercury__array__TypeInfo_for_T1_26;
    MR_Word mercury__array__TypeInfo_for_T1_27;
    MR_Word mercury__array__TypeInfo_for_T1_28;

{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__OldArray_5 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Min_21  = Min;
}
{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__OldArray_5 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Max_22  = Max;
}
    mercury__array__succeeded = (mercury__array__Min_21 <= (MR_Integer) 0);
    if (mercury__array__succeeded)
    {
      mercury__array__succeeded = ((MR_Integer) 0 <= mercury__array__Max_22);
      if (mercury__array__succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__OldArray_5 , Array);
	Index =  (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Elem0_7  = (MR_Box) Item;
}
        mercury__array__succeeded = MR_TRUE;
      }
    }
    if (mercury__array__succeeded)
    {
      MR_Integer mercury__array__Size_8;
      MR_Box mercury__array__Elem_9;
      MR_ArrayPtr mercury__array__NewArray0_10;
      MR_Word mercury__array__TypeInfo_for_T1_29;
      void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *);
      MR_Word mercury__array__TypeInfo_for_T2_30;
      MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__OldArray_5 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Size_8  = Max;
}
      mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__Closure_4, (MR_Integer) 1)));
      mercury__array__func_0(((MR_Box) mercury__array__Closure_4), mercury__array__Elem0_7, &mercury__array__Elem_9);
{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__Size_8 ;
	FirstElem = (MR_Word) mercury__array__Elem_9 ;
	IndexToSet =  (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
      mercury__array__NewArray0_10 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
      mercury__array__map_2_6_p_0(mercury__array__TypeInfo_for_T1_14, mercury__array__TypeInfo_for_T2_15, (MR_Integer) 1, mercury__array__Size_8, mercury__array__Closure_4, mercury__array__OldArray_5, mercury__array__NewArray0_10, mercury__array__NewArray_6);
    }
    else
    {
      MR_Word mercury__array__TypeInfo_for_T2_31;
      MR_ArrayPtr mercury__array__conv2_Array;

{
#define MR_PROC_LABEL mercury__array__map_3_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv2_Array );
      *mercury__array__NewArray_6 = (MR_ArrayPtr) mercury__array__conv2_Array;
}
    }
  }
}

void MR_CALL 
mercury__array__map_2_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T1_20,
  MR_Word mercury__array__TypeInfo_for_T2_21,
  MR_Integer mercury__array__N_7,
  MR_Integer mercury__array__Size_8,
  MR_Word mercury__array__Closure_9,
  MR_ArrayPtr mercury__array__OldArray_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_NewArray_0_14,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_NewArray_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__N_7 >= mercury__array__Size_8);

      if (mercury__array__succeeded)
        *mercury__array__STATE_VARIABLE_NewArray_15 = mercury__array__STATE_VARIABLE_NewArray_0_14;
      else
      {
        MR_Box mercury__array__OldElem_12;
        MR_Box mercury__array__NewElem_13;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_NewArray_16_16;
        MR_Integer mercury__array__Var_17;
        MR_Word mercury__array__TypeInfo_for_T1_22;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *);
        MR_Word mercury__array__TypeInfo_for_T2_23;
        MR_ArrayPtr mercury__array__conv1_Array;

{
#define MR_PROC_LABEL mercury__array__map_2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__OldArray_10 , Array);
	Index =  mercury__array__N_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__OldElem_12  = (MR_Box) Item;
}
        mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__Closure_9, (MR_Integer) 1)));
        mercury__array__func_0(((MR_Box) mercury__array__Closure_9), mercury__array__OldElem_12, &mercury__array__NewElem_13);
{
#define MR_PROC_LABEL mercury__array__map_2_6_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__N_7 ;
	Item = (MR_Word) mercury__array__NewElem_13 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__array__STATE_VARIABLE_NewArray_0_14 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__conv1_Array );
        mercury__array__STATE_VARIABLE_NewArray_16_16 = (MR_ArrayPtr) mercury__array__conv1_Array;
}
        mercury__array__Var_17 = (mercury__array__N_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_N_7 = mercury__array__Var_17;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_NewArray_0_14 = mercury__array__STATE_VARIABLE_NewArray_16_16;

          mercury__array__N_7 = mercury__array__next_value_of_N_7;
          mercury__array__STATE_VARIABLE_NewArray_0_14 = mercury__array__next_value_of_STATE_VARIABLE_NewArray_0_14;
        }
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__approx_binary_search_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_13,
  MR_Word mercury__array__Cmp_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__SearchX_7,
  MR_Integer * mercury__array__I_8)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Hi_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T_16;

{
#define MR_PROC_LABEL mercury__array__approx_binary_search_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__Hi_10 = (mercury__array__Var_11 - (MR_Integer) 1);
    mercury__array__succeeded = mercury__array__approx_binary_search_loop_6_p_0(mercury__array__TypeInfo_for_T_13, mercury__array__Cmp_5, mercury__array__A_6, mercury__array__SearchX_7, (MR_Integer) 0, mercury__array__Hi_10, mercury__array__I_8);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__approx_binary_search_loop_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T_27,
  MR_Word mercury__array__Cmp_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__SearchX_9,
  MR_Integer mercury__array__Lo_10,
  MR_Integer mercury__array__Hi_11,
  MR_Integer * mercury__array__I_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_10 <= mercury__array__Hi_11);
      MR_Integer mercury__array__Mid_13;
      MR_Box mercury__array__MidX_14;
      MR_Word mercury__array__O_15;
      MR_Integer mercury__array__Var_17;
      MR_Integer mercury__array__Var_18;
      MR_Integer mercury__array__Var_19;
      MR_Word mercury__array__TypeInfo_for_T_29;
      MR_Box MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box);
      MR_Box mercury__array__conv1_O_15;

      if (mercury__array__succeeded)
      {
        mercury__array__Var_18 = (mercury__array__Hi_11 - mercury__array__Lo_10);
        mercury__array__Var_19 = (MR_Integer) 1;
        mercury__array__Var_17 = (mercury__array__Var_18 >> mercury__array__Var_19);
        mercury__array__Mid_13 = (mercury__array__Lo_10 + mercury__array__Var_17);
{
#define MR_PROC_LABEL mercury__array__approx_binary_search_loop_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__Mid_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__MidX_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Cmp_7, (MR_Integer) 1)));
        mercury__array__conv1_O_15 = mercury__array__func_0(((MR_Box) mercury__array__Cmp_7), mercury__array__MidX_14, mercury__array__SearchX_9);
        mercury__array__O_15 = ((MR_Word) mercury__array__conv1_O_15);
        switch (mercury__array__O_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__array__succeeded = (mercury__array__Mid_13 < mercury__array__Hi_11);
              if (mercury__array__succeeded)
              {
                MR_Box mercury__array__MidP1X_16;
                MR_Integer mercury__array__Var_20 = (mercury__array__Mid_13 + (MR_Integer) 1);
                MR_Word mercury__array__Var_28;
                MR_Word mercury__array__TypeInfo_for_T_30;
                MR_Box MR_CALL (* mercury__array__func_2)(MR_Box, MR_Box, MR_Box);
                MR_Box mercury__array__conv3_Var_28;

{
#define MR_PROC_LABEL mercury__array__approx_binary_search_loop_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__Var_20 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__MidP1X_16  = (MR_Box) Item;
}
                mercury__array__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Cmp_7, (MR_Integer) 1)));
                mercury__array__conv3_Var_28 = mercury__array__func_2(((MR_Box) mercury__array__Cmp_7), mercury__array__SearchX_9, mercury__array__MidP1X_16);
                mercury__array__Var_28 = ((MR_Word) mercury__array__conv3_Var_28);
                mercury__array__succeeded = ((MR_Integer) 1 == mercury__array__Var_28);
              }
              else
                mercury__array__succeeded = (mercury__array__Mid_13 == mercury__array__Hi_11);
              if (mercury__array__succeeded)
              {
                *mercury__array__I_12 = mercury__array__Mid_13;
                mercury__array__succeeded = MR_TRUE;
              }
              else
              {
                MR_Integer mercury__array__Var_23 = (mercury__array__Mid_13 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo_10 = mercury__array__Var_23;

                  mercury__array__Lo_10 = mercury__array__next_value_of_Lo_10;
                }
                continue;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              *mercury__array__I_12 = mercury__array__Mid_13;
              mercury__array__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__array__Var_25 = (mercury__array__Mid_13 - (MR_Integer) 1);

              /* direct tailcall eliminated */
              {
                MR_Integer mercury__array__next_value_of_Hi_11 = mercury__array__Var_25;

                mercury__array__Hi_11 = mercury__array__next_value_of_Hi_11;
              }
              continue;
            }
            break;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__approx_binary_search_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_8,
  MR_ArrayPtr mercury__array__A_4,
  MR_Box mercury__array__SearchX_5,
  MR_Integer * mercury__array__I_6)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Hi_17;
    MR_Integer mercury__array__Var_18;
    MR_Word mercury__array__TypeInfo_for_T_22;

{
#define MR_PROC_LABEL mercury__array__approx_binary_search_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_4 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_18  = Max;
}
    mercury__array__Hi_17 = (mercury__array__Var_18 - (MR_Integer) 1);
    mercury__array__succeeded = mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_44_32_51_93_95_48_6_p_0(mercury__array__TypeInfo_for_T_8, mercury__array__A_4, mercury__array__SearchX_5, (MR_Integer) 0, mercury__array__Hi_17, mercury__array__I_6);
    return mercury__array__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_44_32_51_93_95_48_6_p_0(
  MR_Word mercury__array__Var_29,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__SearchX_9,
  MR_Integer mercury__array__Lo_10,
  MR_Integer mercury__array__Hi_11,
  MR_Integer * mercury__array__I_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_10 <= mercury__array__Hi_11);
      MR_Integer mercury__array__Mid_13;
      MR_Box mercury__array__MidX_14;
      MR_Word mercury__array__O_15;
      MR_Integer mercury__array__Var_17;
      MR_Integer mercury__array__Var_18;
      MR_Integer mercury__array__Var_19;
      MR_Word mercury__array__TypeInfo_for_T_36;

      if (mercury__array__succeeded)
      {
        mercury__array__Var_18 = (mercury__array__Hi_11 - mercury__array__Lo_10);
        mercury__array__Var_19 = (MR_Integer) 1;
        mercury__array__Var_17 = (mercury__array__Var_18 >> mercury__array__Var_19);
        mercury__array__Mid_13 = (mercury__array__Lo_10 + mercury__array__Var_17);
{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_44_32_51_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__Mid_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__MidX_14  = (MR_Box) Item;
}
        mercury__builtin__compare_3_p_0(mercury__array__Var_29, &mercury__array__O_15, mercury__array__MidX_14, mercury__array__SearchX_9);
        switch (mercury__array__O_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__array__succeeded = (mercury__array__Mid_13 < mercury__array__Hi_11);
              if (mercury__array__succeeded)
              {
                MR_Box mercury__array__MidP1X_16;
                MR_Integer mercury__array__Var_20 = (mercury__array__Mid_13 + (MR_Integer) 1);
                MR_Word mercury__array__Var_28;
                MR_Word mercury__array__TypeInfo_for_T_37;

{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_56_95_95_91_50_44_32_51_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__Var_20 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__MidP1X_16  = (MR_Box) Item;
}
                mercury__builtin__compare_3_p_0(mercury__array__Var_29, &mercury__array__Var_28, mercury__array__SearchX_9, mercury__array__MidP1X_16);
                mercury__array__succeeded = ((MR_Integer) 1 == mercury__array__Var_28);
              }
              else
                mercury__array__succeeded = (mercury__array__Mid_13 == mercury__array__Hi_11);
              if (mercury__array__succeeded)
              {
                *mercury__array__I_12 = mercury__array__Mid_13;
                mercury__array__succeeded = MR_TRUE;
              }
              else
              {
                MR_Integer mercury__array__Var_23 = (mercury__array__Mid_13 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo_10 = mercury__array__Var_23;

                  mercury__array__Lo_10 = mercury__array__next_value_of_Lo_10;
                }
                continue;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              *mercury__array__I_12 = mercury__array__Mid_13;
              mercury__array__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__array__Var_25 = (mercury__array__Mid_13 - (MR_Integer) 1);

              /* direct tailcall eliminated */
              {
                MR_Integer mercury__array__next_value_of_Hi_11 = mercury__array__Var_25;

                mercury__array__Hi_11 = mercury__array__next_value_of_Hi_11;
              }
              continue;
            }
            break;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__binary_search_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_13,
  MR_Word mercury__array__Cmp_5,
  MR_ArrayPtr mercury__array__A_6,
  MR_Box mercury__array__SearchX_7,
  MR_Integer * mercury__array__I_8)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Hi_10;
    MR_Integer mercury__array__Var_11;
    MR_Word mercury__array__TypeInfo_for_T_16;

{
#define MR_PROC_LABEL mercury__array__binary_search_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_6 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_11  = Max;
}
    mercury__array__Hi_10 = (mercury__array__Var_11 - (MR_Integer) 1);
    mercury__array__succeeded = mercury__array__binary_search_loop_6_p_0(mercury__array__TypeInfo_for_T_13, mercury__array__Cmp_5, mercury__array__A_6, mercury__array__SearchX_7, (MR_Integer) 0, mercury__array__Hi_10, mercury__array__I_8);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__binary_search_loop_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T_23,
  MR_Word mercury__array__Cmp_7,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__SearchX_9,
  MR_Integer mercury__array__Lo_10,
  MR_Integer mercury__array__Hi_11,
  MR_Integer * mercury__array__I_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_10 <= mercury__array__Hi_11);
      MR_Integer mercury__array__Mid_13;
      MR_Box mercury__array__MidX_14;
      MR_Word mercury__array__O_15;
      MR_Integer mercury__array__Var_16;
      MR_Integer mercury__array__Var_17;
      MR_Integer mercury__array__Var_18;
      MR_Word mercury__array__TypeInfo_for_T_24;
      MR_Box MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box);
      MR_Box mercury__array__conv1_O_15;

      if (mercury__array__succeeded)
      {
        mercury__array__Var_17 = (mercury__array__Hi_11 - mercury__array__Lo_10);
        mercury__array__Var_18 = (MR_Integer) 1;
        mercury__array__Var_16 = (mercury__array__Var_17 >> mercury__array__Var_18);
        mercury__array__Mid_13 = (mercury__array__Lo_10 + mercury__array__Var_16);
{
#define MR_PROC_LABEL mercury__array__binary_search_loop_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__Mid_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__MidX_14  = (MR_Box) Item;
}
        mercury__array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Cmp_7, (MR_Integer) 1)));
        mercury__array__conv1_O_15 = mercury__array__func_0(((MR_Box) mercury__array__Cmp_7), mercury__array__MidX_14, mercury__array__SearchX_9);
        mercury__array__O_15 = ((MR_Word) mercury__array__conv1_O_15);
        switch (mercury__array__O_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer mercury__array__Var_19 = (mercury__array__Mid_13 + (MR_Integer) 1);

              /* direct tailcall eliminated */
              {
                MR_Integer mercury__array__next_value_of_Lo_10 = mercury__array__Var_19;

                mercury__array__Lo_10 = mercury__array__next_value_of_Lo_10;
              }
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              *mercury__array__I_12 = mercury__array__Mid_13;
              mercury__array__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__array__Var_21 = (mercury__array__Mid_13 - (MR_Integer) 1);

              /* direct tailcall eliminated */
              {
                MR_Integer mercury__array__next_value_of_Hi_11 = mercury__array__Var_21;

                mercury__array__Hi_11 = mercury__array__next_value_of_Hi_11;
              }
              continue;
            }
            break;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__binary_search_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_8,
  MR_ArrayPtr mercury__array__A_4,
  MR_Box mercury__array__SearchX_5,
  MR_Integer * mercury__array__I_6)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Hi_17;
    MR_Integer mercury__array__Var_18;
    MR_Word mercury__array__TypeInfo_for_T_22;

{
#define MR_PROC_LABEL mercury__array__binary_search_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_4 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_18  = Max;
}
    mercury__array__Hi_17 = (mercury__array__Var_18 - (MR_Integer) 1);
    mercury__array__succeeded = mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_55_95_95_91_50_44_32_51_93_95_48_6_p_0(mercury__array__TypeInfo_for_T_8, mercury__array__A_4, mercury__array__SearchX_5, (MR_Integer) 0, mercury__array__Hi_17, mercury__array__I_6);
    return mercury__array__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_55_95_95_91_50_44_32_51_93_95_48_6_p_0(
  MR_Word mercury__array__Var_24,
  MR_ArrayPtr mercury__array__A_8,
  MR_Box mercury__array__SearchX_9,
  MR_Integer mercury__array__Lo_10,
  MR_Integer mercury__array__Hi_11,
  MR_Integer * mercury__array__I_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Lo_10 <= mercury__array__Hi_11);
      MR_Integer mercury__array__Mid_13;
      MR_Box mercury__array__MidX_14;
      MR_Word mercury__array__O_15;
      MR_Integer mercury__array__Var_16;
      MR_Integer mercury__array__Var_17;
      MR_Integer mercury__array__Var_18;
      MR_Word mercury__array__TypeInfo_for_T_28;

      if (mercury__array__succeeded)
      {
        mercury__array__Var_17 = (mercury__array__Hi_11 - mercury__array__Lo_10);
        mercury__array__Var_18 = (MR_Integer) 1;
        mercury__array__Var_16 = (mercury__array__Var_17 >> mercury__array__Var_18);
        mercury__array__Mid_13 = (mercury__array__Lo_10 + mercury__array__Var_16);
{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_108_111_111_112_95_95_104_111_55_95_95_91_50_44_32_51_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__Mid_13 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__MidX_14  = (MR_Box) Item;
}
        mercury__builtin__compare_3_p_0(mercury__array__Var_24, &mercury__array__O_15, mercury__array__MidX_14, mercury__array__SearchX_9);
        switch (mercury__array__O_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer mercury__array__Var_19 = (mercury__array__Mid_13 + (MR_Integer) 1);

              /* direct tailcall eliminated */
              {
                MR_Integer mercury__array__next_value_of_Lo_10 = mercury__array__Var_19;

                mercury__array__Lo_10 = mercury__array__next_value_of_Lo_10;
              }
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              *mercury__array__I_12 = mercury__array__Mid_13;
              mercury__array__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__array__Var_21 = (mercury__array__Mid_13 - (MR_Integer) 1);

              /* direct tailcall eliminated */
              {
                MR_Integer mercury__array__next_value_of_Hi_11 = mercury__array__Var_21;

                mercury__array__Hi_11 = mercury__array__next_value_of_Hi_11;
              }
              continue;
            }
            break;
        }
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__array__bsearch_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T_19,
  MR_ArrayPtr mercury__array__A_5,
  MR_Box mercury__array__X_6,
  MR_Word mercury__array__F_7)
{
  {
    MR_Word mercury__array__MN_8;
    MR_Integer mercury__array__Lo_24;
    MR_Integer mercury__array__Hi_25;
    MR_Word mercury__array__TypeInfo_for_T_29;
    MR_Word mercury__array__TypeInfo_for_T_30;

{
#define MR_PROC_LABEL mercury__array__bsearch_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_5 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Lo_24  = Min;
}
{
#define MR_PROC_LABEL mercury__array__bsearch_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_5 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Hi_25  = Max;
}
    mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_54_95_95_91_49_44_32_56_93_95_48_6_p_0(mercury__array__F_7, mercury__array__TypeInfo_for_T_19, mercury__array__A_5, mercury__array__Lo_24, mercury__array__Hi_25, mercury__array__X_6, &mercury__array__MN_8);
    return mercury__array__MN_8;
  }
}

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_54_95_95_91_49_44_32_56_93_95_48_6_p_0(
  MR_Word mercury__array__Var_30,
  MR_Word mercury__array__TypeInfo_for_T_27,
  MR_ArrayPtr mercury__array__Array_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Box mercury__array__SearchX_10,
  MR_Word * mercury__array__Result_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded;
      MR_Integer mercury__array__Width_13 = (mercury__array__Hi_9 - mercury__array__Lo_8);

      mercury__array__succeeded = (mercury__array__Width_13 < (MR_Integer) 0);
      if (mercury__array__succeeded)
        *mercury__array__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        mercury__array__succeeded = (mercury__array__Width_13 == (MR_Integer) 0);
        if (mercury__array__succeeded)
        {
          MR_Box mercury__array__LoX_14;
          MR_Word mercury__array__Var_28;
          MR_Box MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box);
          MR_Box mercury__array__conv1_Var_28;

          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_27, mercury__array__Array_7, mercury__array__Lo_8, &mercury__array__LoX_14);
          mercury__array__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Var_30, (MR_Integer) 1)));
          mercury__array__conv1_Var_28 = mercury__array__func_0(((MR_Box) mercury__array__Var_30), mercury__array__SearchX_10, mercury__array__LoX_14);
          mercury__array__Var_28 = ((MR_Word) mercury__array__conv1_Var_28);
          mercury__array__succeeded = ((MR_Integer) 0 == mercury__array__Var_28);
          if (mercury__array__succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__array__Result_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__array__Lo_8));
            }
          else
            *mercury__array__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
        {
          MR_Integer mercury__array__Mid_15;
          MR_Box mercury__array__MidX_16;
          MR_Word mercury__array__Comp_17;
          MR_Integer mercury__array__Var_20;
          MR_Integer mercury__array__Var_21 = (mercury__array__Hi_9 - mercury__array__Lo_8);
          MR_Box MR_CALL (* mercury__array__func_2)(MR_Box, MR_Box, MR_Box);
          MR_Box mercury__array__conv3_Comp_17;

          mercury__array__Var_20 = (mercury__array__Var_21 >> (MR_Integer) 1);
          mercury__array__Mid_15 = (mercury__array__Lo_8 + mercury__array__Var_20);
          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_27, mercury__array__Array_7, mercury__array__Mid_15, &mercury__array__MidX_16);
          mercury__array__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__Var_30, (MR_Integer) 1)));
          mercury__array__conv3_Comp_17 = mercury__array__func_2(((MR_Box) mercury__array__Var_30), mercury__array__MidX_16, mercury__array__SearchX_10);
          mercury__array__Comp_17 = ((MR_Word) mercury__array__conv3_Comp_17);
          switch (mercury__array__Comp_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Integer mercury__array__Var_25 = (mercury__array__Mid_15 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo_8 = mercury__array__Var_25;

                  mercury__array__Lo_8 = mercury__array__next_value_of_Lo_8;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Hi_9 = mercury__array__Mid_15;

                  mercury__array__Hi_9 = mercury__array__next_value_of_Hi_9;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__array__Var_23 = (mercury__array__Mid_15 - (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Hi_9 = mercury__array__Var_23;

                  mercury__array__Hi_9 = mercury__array__next_value_of_Hi_9;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__bsearch_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_11,
  MR_ArrayPtr mercury__array__A_5,
  MR_Box mercury__array__SearchX_6,
  MR_Word mercury__array__Compare_7,
  MR_Word * mercury__array__Result_8)
{
  {
    MR_Integer mercury__array__Lo_9;
    MR_Integer mercury__array__Hi_10;
    MR_Word mercury__array__TypeInfo_for_T_15;
    MR_Word mercury__array__TypeInfo_for_T_16;

{
#define MR_PROC_LABEL mercury__array__bsearch_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_5 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Lo_9  = Min;
}
{
#define MR_PROC_LABEL mercury__array__bsearch_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_5 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Hi_10  = Max;
}
    mercury__array__bsearch_2_6_p_0(mercury__array__TypeInfo_for_T_11, mercury__array__A_5, mercury__array__Lo_9, mercury__array__Hi_10, mercury__array__SearchX_6, mercury__array__Compare_7, mercury__array__Result_8);
  }
}

void MR_CALL 
mercury__array__bsearch_2_6_p_0(
  MR_Word mercury__array__TypeInfo_for_T_27,
  MR_ArrayPtr mercury__array__Array_7,
  MR_Integer mercury__array__Lo_8,
  MR_Integer mercury__array__Hi_9,
  MR_Box mercury__array__SearchX_10,
  MR_Word mercury__array__Compare_11,
  MR_Word * mercury__array__Result_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded;
      MR_Integer mercury__array__Width_13 = (mercury__array__Hi_9 - mercury__array__Lo_8);

      mercury__array__succeeded = (mercury__array__Width_13 < (MR_Integer) 0);
      if (mercury__array__succeeded)
        *mercury__array__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        mercury__array__succeeded = (mercury__array__Width_13 == (MR_Integer) 0);
        if (mercury__array__succeeded)
        {
          MR_Box mercury__array__LoX_14;
          MR_Word mercury__array__Var_28;
          void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box mercury__array__conv1_Var_28;

          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_27, mercury__array__Array_7, mercury__array__Lo_8, &mercury__array__LoX_14);
          mercury__array__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__Compare_11, (MR_Integer) 1)));
          mercury__array__func_0(((MR_Box) mercury__array__Compare_11), mercury__array__SearchX_10, mercury__array__LoX_14, &mercury__array__conv1_Var_28);
          mercury__array__Var_28 = ((MR_Word) mercury__array__conv1_Var_28);
          mercury__array__succeeded = ((MR_Integer) 0 == mercury__array__Var_28);
          if (mercury__array__succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__array__Result_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__array__Lo_8));
            }
          else
            *mercury__array__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
        {
          MR_Integer mercury__array__Mid_15;
          MR_Box mercury__array__MidX_16;
          MR_Word mercury__array__Comp_17;
          MR_Integer mercury__array__Var_20;
          MR_Integer mercury__array__Var_21 = (mercury__array__Hi_9 - mercury__array__Lo_8);
          void MR_CALL (* mercury__array__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box mercury__array__conv3_Comp_17;

          mercury__array__Var_20 = (mercury__array__Var_21 >> (MR_Integer) 1);
          mercury__array__Mid_15 = (mercury__array__Lo_8 + mercury__array__Var_20);
          mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_27, mercury__array__Array_7, mercury__array__Mid_15, &mercury__array__MidX_16);
          mercury__array__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__Compare_11, (MR_Integer) 1)));
          mercury__array__func_2(((MR_Box) mercury__array__Compare_11), mercury__array__MidX_16, mercury__array__SearchX_10, &mercury__array__conv3_Comp_17);
          mercury__array__Comp_17 = ((MR_Word) mercury__array__conv3_Comp_17);
          switch (mercury__array__Comp_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Integer mercury__array__Var_25 = (mercury__array__Mid_15 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Lo_8 = mercury__array__Var_25;

                  mercury__array__Lo_8 = mercury__array__next_value_of_Lo_8;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Hi_9 = mercury__array__Mid_15;

                  mercury__array__Hi_9 = mercury__array__next_value_of_Hi_9;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__array__Var_23 = (mercury__array__Mid_15 - (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__array__next_value_of_Hi_9 = mercury__array__Var_23;

                  mercury__array__Hi_9 = mercury__array__next_value_of_Hi_9;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__array__fetch_items_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T_9,
  MR_ArrayPtr mercury__array__Array_5,
  MR_Integer mercury__array__Low_6,
  MR_Integer mercury__array__High_7)
{
  {
    MR_Word mercury__array__List_8;

    mercury__array__fetch_items_4_p_0(mercury__array__TypeInfo_for_T_9, mercury__array__Array_5, mercury__array__Low_6, mercury__array__High_7, &mercury__array__List_8);
    return mercury__array__List_8;
  }
}

MR_Word MR_CALL 
mercury__array__to_list_1_f_0(
  MR_Word mercury__array__TypeInfo_for_T_5,
  MR_ArrayPtr mercury__array__Array_3)
{
  {
    MR_Word mercury__array__List_4;
    MR_Integer mercury__array__Low_8;
    MR_Integer mercury__array__High_9;
    MR_Word mercury__array__TypeInfo_for_T_13;
    MR_Word mercury__array__TypeInfo_for_T_14;

{
#define MR_PROC_LABEL mercury__array__to_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_3 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Low_8  = Min;
}
{
#define MR_PROC_LABEL mercury__array__to_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_3 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__High_9  = Max;
}
    mercury__array__fetch_items_4_p_0(mercury__array__TypeInfo_for_T_5, mercury__array__Array_3, mercury__array__Low_8, mercury__array__High_9, &mercury__array__List_4);
    return mercury__array__List_4;
  }
}

void MR_CALL 
mercury__array__to_list_2_p_0(
  MR_Word mercury__array__TypeInfo_for_T_7,
  MR_ArrayPtr mercury__array__Array_3,
  MR_Word * mercury__array__List_4)
{
  {
    MR_Integer mercury__array__Low_5;
    MR_Integer mercury__array__High_6;
    MR_Word mercury__array__TypeInfo_for_T_11;
    MR_Word mercury__array__TypeInfo_for_T_12;

{
#define MR_PROC_LABEL mercury__array__to_list_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_3 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Low_5  = Min;
}
{
#define MR_PROC_LABEL mercury__array__to_list_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_3 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__High_6  = Max;
}
    mercury__array__fetch_items_4_p_0(mercury__array__TypeInfo_for_T_7, mercury__array__Array_3, mercury__array__Low_5, mercury__array__High_6, mercury__array__List_4);
  }
}

void MR_CALL 
mercury__array__fetch_items_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_19,
  MR_ArrayPtr mercury__array__Array_5,
  MR_Integer mercury__array__Low_6,
  MR_Integer mercury__array__High_7,
  MR_Word * mercury__array__List_8)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__High_7 < mercury__array__Low_6);

    if (mercury__array__succeeded)
      *mercury__array__List_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Integer mercury__array__Min_24;
      MR_Integer mercury__array__Max_25;
      MR_Integer mercury__array__Min_31;
      MR_Integer mercury__array__Max_32;
      MR_Word mercury__array__TypeInfo_for_T_36;
      MR_Word mercury__array__TypeInfo_for_T_37;
      MR_Word mercury__array__TypeInfo_for_T_38;
      MR_Word mercury__array__TypeInfo_for_T_39;

{
#define MR_PROC_LABEL mercury__array__fetch_items_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_5 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Min_24  = Min;
}
{
#define MR_PROC_LABEL mercury__array__fetch_items_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_5 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Max_25  = Max;
}
      mercury__array__succeeded = (mercury__array__Min_24 <= mercury__array__Low_6);
      if (mercury__array__succeeded)
      {
        mercury__array__succeeded = (mercury__array__Low_6 <= mercury__array__Max_25);
        if (mercury__array__succeeded)
        {
{
#define MR_PROC_LABEL mercury__array__fetch_items_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_5 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Min_31  = Min;
}
{
#define MR_PROC_LABEL mercury__array__fetch_items_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_5 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Max_32  = Max;
}
          mercury__array__succeeded = (mercury__array__Min_31 <= mercury__array__High_7);
          if (mercury__array__succeeded)
            mercury__array__succeeded = (mercury__array__High_7 <= mercury__array__Max_32);
        }
      }
      if (mercury__array__succeeded)
      {
        MR_Word mercury__array__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        *mercury__array__List_8 = mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_f_0(mercury__array__Array_5, mercury__array__Var_15, mercury__array__Low_6, mercury__array__High_7);
      }
      else
      {
        {
          mercury__require__error_1_p_0((MR_String) "array.fetch_items/4: One or more index is out of bounds");
          return;
        }
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_f_0(
  MR_ArrayPtr mercury__array__A_8,
  MR_Word mercury__array__X_9,
  MR_Integer mercury__array__Min_10,
  MR_Integer mercury__array__I_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__I_11 < mercury__array__Min_10);
      MR_Word mercury__array__HeadVar__6_6;

      if (mercury__array__succeeded)
        mercury__array__HeadVar__6_6 = mercury__array__X_9;
      else
      {
        MR_Word mercury__array__Var_12;
        MR_Box mercury__array__Var_13;
        MR_Integer mercury__array__Var_14;
        MR_Word mercury__array__TypeInfo_for_T1_41;

{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_8 , Array);
	Index =  mercury__array__I_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_13  = (MR_Box) Item;
}
        {
          mercury__array__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__array__Var_12, 0) = mercury__array__Var_13;
          MR_hl_field(MR_mktag(1), mercury__array__Var_12, 1) = ((MR_Box) (mercury__array__X_9));
        }
        mercury__array__Var_14 = (mercury__array__I_11 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Word mercury__array__next_value_of_X_9 = mercury__array__Var_12;
          MR_Integer mercury__array__next_value_of_I_11 = mercury__array__Var_14;

          mercury__array__X_9 = mercury__array__next_value_of_X_9;
          mercury__array__I_11 = mercury__array__next_value_of_I_11;
        }
        continue;
      }
      return mercury__array__HeadVar__6_6;
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__from_reverse_list_1_f_0(
  MR_Word mercury__array__TypeInfo_for_T_14,
  MR_Word mercury__array__HeadVar__1_1)
{
  {
    MR_ArrayPtr mercury__array__Array_2;

    if ((mercury__array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word mercury__array__TypeInfo_for_T_18;

{
#define MR_PROC_LABEL mercury__array__from_reverse_list_1_f_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Array_2 );
}
    }
    else
    {
      MR_Box mercury__array__Head_6 = (MR_hl_field(MR_mktag(1), mercury__array__HeadVar__1_1, (MR_Integer) 0));
      MR_Word mercury__array__Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__array__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer mercury__array__Len_8;
      MR_ArrayPtr mercury__array__Array0_9;
      MR_Integer mercury__array__Var_10;
      MR_Integer mercury__array__Var_12;
      MR_Word mercury__array__TypeInfo_for_T_19;

      mercury__list__length_acc_3_p_0(mercury__array__TypeInfo_for_T_14, mercury__array__HeadVar__1_1, (MR_Integer) 0, &mercury__array__Len_8);
      mercury__array__Var_10 = (mercury__array__Len_8 - (MR_Integer) 1);
{
#define MR_PROC_LABEL mercury__array__from_reverse_list_1_f_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__Len_8 ;
	FirstElem = (MR_Word) mercury__array__Head_6 ;
	IndexToSet =  mercury__array__Var_10 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Array0_9 );
}
      mercury__array__Var_12 = (mercury__array__Len_8 - (MR_Integer) 2);
      mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_p_0(mercury__array__Tail_7, mercury__array__Var_12, mercury__array__Array0_9, &mercury__array__Array_2);
    }
    return mercury__array__Array_2;
  }
}

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word mercury__array__HeadVar__1_1,
  MR_Integer mercury__array__N_2,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_3,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__array__STATE_VARIABLE_Array_4 = mercury__array__STATE_VARIABLE_Array_0_3;
    else
    {
      MR_Box mercury__array__Head_9 = (MR_hl_field(MR_mktag(1), mercury__array__HeadVar__1_1, (MR_Integer) 0));
      MR_Word mercury__array__Tail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__array__HeadVar__1_1, (MR_Integer) 1)));
      MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_15_15;
      MR_Integer mercury__array__Var_16;
      MR_Word mercury__array__TypeInfo_for_T_20;

{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__N_2 ;
	Item = (MR_Word) mercury__array__Head_9 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_3 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_15_15 );
}
      mercury__array__Var_16 = (mercury__array__N_2 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__array__next_value_of_HeadVar__1_1 = mercury__array__Tail_10;
        MR_Integer mercury__array__next_value_of_N_2 = mercury__array__Var_16;
        MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_Array_0_3 = mercury__array__STATE_VARIABLE_Array_15_15;

        mercury__array__HeadVar__1_1 = mercury__array__next_value_of_HeadVar__1_1;
        mercury__array__N_2 = mercury__array__next_value_of_N_2;
        mercury__array__STATE_VARIABLE_Array_0_3 = mercury__array__next_value_of_STATE_VARIABLE_Array_0_3;
      }
      continue;
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__from_list_1_f_0(
  MR_Word mercury__array__TypeInfo_for_T_5,
  MR_Word mercury__array__List_3)
{
  {
    MR_ArrayPtr mercury__array__Array_4;

    mercury__array__from_list_2_p_0(mercury__array__TypeInfo_for_T_5, mercury__array__List_3, &mercury__array__Array_4);
    return mercury__array__Array_4;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__shrink_2_f_0(
  MR_Word mercury__array__TypeInfo_for_T_9,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_6,
  MR_Integer mercury__array__N_5)
{
  {
    MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_7;

    mercury__array__shrink_3_p_0(mercury__array__TypeInfo_for_T_9, mercury__array__N_5, mercury__array__STATE_VARIABLE_Array_0_6, &mercury__array__STATE_VARIABLE_Array_7);
    return mercury__array__STATE_VARIABLE_Array_7;
  }
}

void MR_CALL 
mercury__array__shrink_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_11,
  MR_Integer mercury__array__Size_4,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_7,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_8)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__OldSize_6;
    MR_Word mercury__array__TypeInfo_for_T_14;

{
#define MR_PROC_LABEL mercury__array__shrink_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_7 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__OldSize_6  = Max;
}
    mercury__array__succeeded = (mercury__array__Size_4 > mercury__array__OldSize_6);
    if (mercury__array__succeeded)
    {
      {
        mercury__require__error_1_p_0((MR_String) "array.shrink: can\'t shrink to a larger size");
        return;
      }
    }
    else
    {
      mercury__array__succeeded = (mercury__array__Size_4 == mercury__array__OldSize_6);
      if (mercury__array__succeeded)
        *mercury__array__STATE_VARIABLE_Array_8 = mercury__array__STATE_VARIABLE_Array_0_7;
      else
      {
        MR_Word mercury__array__TypeInfo_for_T_15;

{
#define MR_PROC_LABEL mercury__array__shrink_3_p_0

	MR_Integer Size;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Size =  mercury__array__Size_4 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_7 , Array0);
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_shrink_array(Array, Array0, Size);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__STATE_VARIABLE_Array_8 );
}
      }
    }
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__resize_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T_11,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_8,
  MR_Integer mercury__array__N_6,
  MR_Box mercury__array__X_7)
{
  {
    MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_9;
    MR_Word mercury__array__TypeInfo_for_T_12;

{
#define MR_PROC_LABEL mercury__array__resize_3_f_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Size =  mercury__array__N_6 ;
	Item = (MR_Word) mercury__array__X_7 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array0);
		{

    if ((Array0)->size == Size) {
        Array = Array0;
    } else {
        ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
        ML_resize_array(Array, Array0, Size, Item);
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_9 );
}
    return mercury__array__STATE_VARIABLE_Array_9;
  }
}

void MR_CALL 
mercury__array__resize_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_5,
  MR_Integer mercury__array__HeadVar__1_1,
  MR_Box mercury__array__HeadVar__2_2,
  MR_ArrayPtr mercury__array__HeadVar__3_3,
  MR_ArrayPtr * mercury__array__HeadVar__4_4)
{
  {
    MR_Word mercury__array__TypeInfo_for_T_6;

{
#define MR_PROC_LABEL mercury__array__resize_4_p_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Size =  mercury__array__HeadVar__1_1 ;
	Item = (MR_Word) mercury__array__HeadVar__2_2 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__3_3 , Array0);
		{

    if ((Array0)->size == Size) {
        Array = Array0;
    } else {
        ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
        ML_resize_array(Array, Array0, Size, Item);
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__HeadVar__4_4 );
}
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__copy_1_f_0(
  MR_Word mercury__array__TypeInfo_for_T_5,
  MR_ArrayPtr mercury__array__A1_3)
{
  {
    MR_ArrayPtr mercury__array__A2_4;
    MR_Word mercury__array__TypeInfo_for_T_6;

{
#define MR_PROC_LABEL mercury__array__copy_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A1_3 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__A2_4 );
}
    return mercury__array__A2_4;
  }
}

void MR_CALL 
mercury__array__copy_2_p_0(
  MR_Word mercury__array__TypeInfo_for_T_3,
  MR_ArrayPtr mercury__array__HeadVar__1_1,
  MR_ArrayPtr * mercury__array__HeadVar__2_2)
{
  {
    MR_Word mercury__array__TypeInfo_for_T_4;

{
#define MR_PROC_LABEL mercury__array__copy_2_p_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__1_1 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__HeadVar__2_2 );
}
  }
}

static void MR_CALL 
mercury__array__member_2_p_0_1(
  void * mercury__array__env_ptr_arg)
{
  {
    struct mercury__array__member_2_p_0_env_0_s * mercury__array__env_ptr = (struct mercury__array__member_2_p_0_env_0_s *) mercury__array__env_ptr_arg;

    {
      MR_Word mercury__array__TypeInfo_for_T_15;

{
#define MR_PROC_LABEL mercury__array__member_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (mercury__array__env_ptr)->mercury__array__member_2_p_0_env_0__A_3 , Array);
	Index =  (mercury__array__env_ptr)->mercury__array__member_2_p_0_env_0__N_5 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 *((mercury__array__env_ptr)->mercury__array__member_2_p_0_env_0__X_4)  = (MR_Box) Item;
}
      ((mercury__array__env_ptr)->mercury__array__member_2_p_0_env_0__cont)((mercury__array__env_ptr)->mercury__array__member_2_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__array__member_2_p_0(
  MR_Word mercury__array__TypeInfo_for_T_8,
  MR_ArrayPtr mercury__array__A_3,
  MR_Box * mercury__array__X_4,
  MR_Cont mercury__array__cont,
  void * mercury__array__cont_env_ptr)
{
  {
    struct mercury__array__member_2_p_0_env_0_s mercury__array__env;

    (mercury__array__env).mercury__array__member_2_p_0_env_0__A_3 = mercury__array__A_3;
    (mercury__array__env).mercury__array__member_2_p_0_env_0__X_4 = mercury__array__X_4;
    (mercury__array__env).mercury__array__member_2_p_0_env_0__cont = mercury__array__cont;
    (mercury__array__env).mercury__array__member_2_p_0_env_0__cont_env_ptr = mercury__array__cont_env_ptr;
    {
      MR_Integer mercury__array__Var_6;
      MR_Integer mercury__array__Var_7;
      MR_Word mercury__array__TypeInfo_for_T_13;
      MR_Word mercury__array__TypeInfo_for_T_14;

{
#define MR_PROC_LABEL mercury__array__member_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (mercury__array__env).mercury__array__member_2_p_0_env_0__A_3 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_6  = Min;
}
{
#define MR_PROC_LABEL mercury__array__member_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (mercury__array__env).mercury__array__member_2_p_0_env_0__A_3 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_7  = Max;
}
      mercury__int__nondet_int_in_range_3_p_0(mercury__array__Var_6, mercury__array__Var_7, &(mercury__array__env).mercury__array__member_2_p_0_env_0__N_5, mercury__array__member_2_p_0_1, &mercury__array__env);
    }
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T_11,
  MR_Integer mercury__array__Index_5,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_8,
  MR_Box mercury__array__Value_7)
{
  {
    MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_9;
    MR_Word mercury__array__TypeInfo_for_T_12;

{
#define MR_PROC_LABEL mercury__array__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_3_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__Index_5 ;
	Item = (MR_Word) mercury__array__Value_7 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_9 );
}
    return mercury__array__STATE_VARIABLE_Array_9;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T_8,
  MR_Integer mercury__array__Index_5,
  MR_ArrayPtr mercury__array__Array_6,
  MR_Box mercury__array__Value_7)
{
  {
    MR_ArrayPtr mercury__array__HeadVar__4_4;

    mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_8, mercury__array__Index_5, mercury__array__Value_7, mercury__array__Array_6, &mercury__array__HeadVar__4_4);
    return mercury__array__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__array__unsafe_elem_2_f_0(
  MR_Word mercury__array__TypeInfo_for_T_7,
  MR_Integer mercury__array__Index_4,
  MR_ArrayPtr mercury__array__Array_5)
{
  {
    MR_Box mercury__array__Elem_6;
    MR_Word mercury__array__TypeInfo_for_T_8;

{
#define MR_PROC_LABEL mercury__array__unsafe_elem_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_5 , Array);
	Index =  mercury__array__Index_4 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array__Elem_6  = (MR_Box) Item;
}
    return mercury__array__Elem_6;
  }
}

MR_Box MR_CALL 
mercury__array__elem_2_f_0(
  MR_Word mercury__array__TypeInfo_for_T_6,
  MR_Integer mercury__array__Index_4,
  MR_ArrayPtr mercury__array__Array_5)
{
  {
    MR_Box mercury__array__HeadVar__3_3;

    mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_6, mercury__array__Array_5, mercury__array__Index_4, &mercury__array__HeadVar__3_3);
    return mercury__array__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__array__semidet_slow_set_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_11,
  MR_Integer mercury__array__Index_5,
  MR_Box mercury__array__Item_6,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_8,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_9)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Min_14;
    MR_Integer mercury__array__Max_15;
    MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_10_24;
    MR_Word mercury__array__TypeInfo_for_T_26;
    MR_Word mercury__array__TypeInfo_for_T_27;
    MR_Word mercury__array__TypeInfo_for_T_28;

{
#define MR_PROC_LABEL mercury__array__semidet_slow_set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Min_14  = Min;
}
{
#define MR_PROC_LABEL mercury__array__semidet_slow_set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Max_15  = Max;
}
    mercury__array__succeeded = (mercury__array__Min_14 <= mercury__array__Index_5);
    if (mercury__array__succeeded)
    {
      mercury__array__succeeded = (mercury__array__Index_5 <= mercury__array__Max_15);
      if (mercury__array__succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__semidet_slow_set_4_p_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_10_24 );
}
        mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_11, mercury__array__Index_5, mercury__array__Item_6, mercury__array__STATE_VARIABLE_Array_10_24, mercury__array__STATE_VARIABLE_Array_9);
        mercury__array__succeeded = MR_TRUE;
      }
    }
    return mercury__array__succeeded;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__slow_set_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T_11,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_8,
  MR_Integer mercury__array__N_6,
  MR_Box mercury__array__X_7)
{
  {
    MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_9;
    MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_10_17;
    MR_Word mercury__array__TypeInfo_for_T_19;

{
#define MR_PROC_LABEL mercury__array__slow_set_3_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_10_17 );
}
    mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_11, mercury__array__N_6, mercury__array__X_7, mercury__array__STATE_VARIABLE_Array_10_17, &mercury__array__STATE_VARIABLE_Array_9);
    return mercury__array__STATE_VARIABLE_Array_9;
  }
}

void MR_CALL 
mercury__array__slow_set_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_12,
  MR_Integer mercury__array__Index_5,
  MR_Box mercury__array__Item_6,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_8,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_9)
{
  {
    MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_10_10;
    MR_Word mercury__array__TypeInfo_for_T_13;

{
#define MR_PROC_LABEL mercury__array__slow_set_4_p_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_10_10 );
}
    mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_12, mercury__array__Index_5, mercury__array__Item_6, mercury__array__STATE_VARIABLE_Array_10_10, mercury__array__STATE_VARIABLE_Array_9);
  }
}

void MR_CALL 
mercury__array__unsafe_set_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_5,
  MR_Integer mercury__array__HeadVar__1_1,
  MR_Box mercury__array__HeadVar__2_2,
  MR_ArrayPtr mercury__array__HeadVar__3_3,
  MR_ArrayPtr * mercury__array__HeadVar__4_4)
{
  {
    MR_Word mercury__array__TypeInfo_for_T_6;

{
#define MR_PROC_LABEL mercury__array__unsafe_set_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__HeadVar__1_1 ;
	Item = (MR_Word) mercury__array__HeadVar__2_2 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__3_3 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__HeadVar__4_4 );
}
  }
}

MR_bool MR_CALL 
mercury__array__semidet_set_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_11,
  MR_Integer mercury__array__Index_5,
  MR_Box mercury__array__Item_6,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_8,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_9)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Min_14;
    MR_Integer mercury__array__Max_15;
    MR_Word mercury__array__TypeInfo_for_T_19;
    MR_Word mercury__array__TypeInfo_for_T_20;
    MR_Word mercury__array__TypeInfo_for_T_21;

{
#define MR_PROC_LABEL mercury__array__semidet_set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Min_14  = Min;
}
{
#define MR_PROC_LABEL mercury__array__semidet_set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Max_15  = Max;
}
    mercury__array__succeeded = (mercury__array__Min_14 <= mercury__array__Index_5);
    if (mercury__array__succeeded)
    {
      mercury__array__succeeded = (mercury__array__Index_5 <= mercury__array__Max_15);
      if (mercury__array__succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__semidet_set_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__Index_5 ;
	Item = (MR_Word) mercury__array__Item_6 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__STATE_VARIABLE_Array_9 );
}
        mercury__array__succeeded = MR_TRUE;
      }
    }
    return mercury__array__succeeded;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__set_3_f_0(
  MR_Word mercury__array__TypeInfo_for_T_9,
  MR_ArrayPtr mercury__array__A1_5,
  MR_Integer mercury__array__N_6,
  MR_Box mercury__array__X_7)
{
  {
    MR_ArrayPtr mercury__array__A2_8;

    mercury__array__set_4_p_0(mercury__array__TypeInfo_for_T_9, mercury__array__N_6, mercury__array__X_7, mercury__array__A1_5, &mercury__array__A2_8);
    return mercury__array__A2_8;
  }
}

void MR_CALL 
mercury__array__set_4_p_0(
  MR_Word mercury__array__TypeInfo_for_T_12,
  MR_Integer mercury__array__Index_5,
  MR_Box mercury__array__Item_6,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_8,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_9)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Min_15;
    MR_Integer mercury__array__Max_16;
    MR_Word mercury__array__TypeInfo_for_T_20;
    MR_Word mercury__array__TypeInfo_for_T_21;

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
	if (SUCCESS_INDICATOR) {
	}
mercury__array__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__array__succeeded)
    {
{
#define MR_PROC_LABEL mercury__array__set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Min_15  = Min;
}
{
#define MR_PROC_LABEL mercury__array__set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Max_16  = Max;
}
      mercury__array__succeeded = (mercury__array__Min_15 <= mercury__array__Index_5);
      if (mercury__array__succeeded)
        mercury__array__succeeded = (mercury__array__Index_5 <= mercury__array__Max_16);
      mercury__array__succeeded = !(mercury__array__succeeded);
    }
    if (mercury__array__succeeded)
    {
      {
        mercury__array__out_of_bounds_error_3_p_0(mercury__array__TypeInfo_for_T_12, mercury__array__STATE_VARIABLE_Array_0_8, mercury__array__Index_5, (MR_String) "array.set");
        return;
      }
    }
    else
    {
      MR_Word mercury__array__TypeInfo_for_T_22;

{
#define MR_PROC_LABEL mercury__array__set_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__Index_5 ;
	Item = (MR_Word) mercury__array__Item_6 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_8 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__STATE_VARIABLE_Array_9 );
}
    }
  }
}

void MR_CALL 
mercury__array__unsafe_lookup_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_4,
  MR_ArrayPtr mercury__array__HeadVar__1_1,
  MR_Integer mercury__array__HeadVar__2_2,
  MR_Box * mercury__array__HeadVar__3_3)
{
  {
    MR_Word mercury__array__TypeInfo_for_T_5;

{
#define MR_PROC_LABEL mercury__array__unsafe_lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__1_1 , Array);
	Index =  mercury__array__HeadVar__2_2 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 *mercury__array__HeadVar__3_3  = (MR_Box) Item;
}
  }
}

MR_bool MR_CALL 
mercury__array__semidet_lookup_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_7,
  MR_ArrayPtr mercury__array__Array_4,
  MR_Integer mercury__array__Index_5,
  MR_Box * mercury__array__Item_6)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Min_10;
    MR_Integer mercury__array__Max_11;
    MR_Word mercury__array__TypeInfo_for_T_15;
    MR_Word mercury__array__TypeInfo_for_T_16;
    MR_Word mercury__array__TypeInfo_for_T_17;

{
#define MR_PROC_LABEL mercury__array__semidet_lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Min_10  = Min;
}
{
#define MR_PROC_LABEL mercury__array__semidet_lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Max_11  = Max;
}
    mercury__array__succeeded = (mercury__array__Min_10 <= mercury__array__Index_5);
    if (mercury__array__succeeded)
    {
      mercury__array__succeeded = (mercury__array__Index_5 <= mercury__array__Max_11);
      if (mercury__array__succeeded)
      {
{
#define MR_PROC_LABEL mercury__array__semidet_lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
	Index =  mercury__array__Index_5 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 *mercury__array__Item_6  = (MR_Box) Item;
}
        mercury__array__succeeded = MR_TRUE;
      }
    }
    return mercury__array__succeeded;
  }
}

MR_Box MR_CALL 
mercury__array__lookup_2_f_0(
  MR_Word mercury__array__TypeInfo_for_T_7,
  MR_ArrayPtr mercury__array__Array_4,
  MR_Integer mercury__array__N_5)
{
  {
    MR_Box mercury__array__X_6;

    mercury__array__lookup_3_p_0(mercury__array__TypeInfo_for_T_7, mercury__array__Array_4, mercury__array__N_5, &mercury__array__X_6);
    return mercury__array__X_6;
  }
}

void MR_CALL 
mercury__array__lookup_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_8,
  MR_ArrayPtr mercury__array__Array_4,
  MR_Integer mercury__array__Index_5,
  MR_Box * mercury__array__Item_6)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Min_11;
    MR_Integer mercury__array__Max_12;
    MR_Word mercury__array__TypeInfo_for_T_16;
    MR_Word mercury__array__TypeInfo_for_T_17;

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
	if (SUCCESS_INDICATOR) {
	}
mercury__array__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__array__succeeded)
    {
{
#define MR_PROC_LABEL mercury__array__lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Min_11  = Min;
}
{
#define MR_PROC_LABEL mercury__array__lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Max_12  = Max;
}
      mercury__array__succeeded = (mercury__array__Min_11 <= mercury__array__Index_5);
      if (mercury__array__succeeded)
        mercury__array__succeeded = (mercury__array__Index_5 <= mercury__array__Max_12);
      mercury__array__succeeded = !(mercury__array__succeeded);
    }
    if (mercury__array__succeeded)
    {
      {
        mercury__array__out_of_bounds_error_3_p_0(mercury__array__TypeInfo_for_T_8, mercury__array__Array_4, mercury__array__Index_5, (MR_String) "array.lookup");
        return;
      }
    }
    else
    {
      MR_Word mercury__array__TypeInfo_for_T_18;

{
#define MR_PROC_LABEL mercury__array__lookup_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
	Index =  mercury__array__Index_5 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 *mercury__array__Item_6  = (MR_Box) Item;
}
    }
  }
}

void MR_CALL 
mercury__array__out_of_bounds_error_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_21,
  MR_ArrayPtr mercury__array__Array_4,
  MR_Integer mercury__array__Index_5,
  MR_String mercury__array__PredName_6)
{
  {
    MR_Word mercury__array__TypeCtorInfo_22_22;
    MR_Integer mercury__array__Min_7;
    MR_Integer mercury__array__Max_8;
    MR_String mercury__array__Msg_9;
    MR_Word mercury__array__Var_20;
    MR_String mercury__array__Var_24;
    MR_Word mercury__array__Var_30;
    MR_String mercury__array__Var_31;
    MR_String mercury__array__Var_33;
    MR_String mercury__array__Var_34;
    MR_String mercury__array__Var_41;
    MR_String mercury__array__Var_43;
    MR_String mercury__array__Var_44;
    MR_String mercury__array__Var_51;
    MR_String mercury__array__Var_53;
    MR_Word mercury__array__V_7_60;
    MR_Word mercury__array__V_8_61;
    MR_Word mercury__array__V_7_77;
    MR_Word mercury__array__V_8_78;
    MR_Word mercury__array__V_7_94;
    MR_Word mercury__array__V_8_95;
    MR_Word mercury__array__TypeInfo_for_T_96;
    MR_Word mercury__array__TypeInfo_for_T_97;

{
#define MR_PROC_LABEL mercury__array__out_of_bounds_error_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Min_7  = Min;
}
{
#define MR_PROC_LABEL mercury__array__out_of_bounds_error_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Max_8  = Max;
}
    mercury__array__Var_30 = (MR_Word) &mercury__array_scalar_common_5[1];
    mercury__array__V_7_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__array__V_8_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__string__format__format_signed_int_component_5_p_0(mercury__array__Var_30, mercury__array__V_7_60, mercury__array__V_8_61, mercury__array__Max_8, &mercury__array__Var_24);
    mercury__string__append_3_p_2(mercury__array__Var_24, (MR_String) "]", &mercury__array__Var_31);
    mercury__string__append_3_p_2((MR_String) ", ", mercury__array__Var_31, &mercury__array__Var_33);
    mercury__array__V_7_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__array__V_8_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__string__format__format_signed_int_component_5_p_0(mercury__array__Var_30, mercury__array__V_7_77, mercury__array__V_8_78, mercury__array__Min_7, &mercury__array__Var_34);
    mercury__string__append_3_p_2(mercury__array__Var_34, mercury__array__Var_33, &mercury__array__Var_41);
    mercury__string__append_3_p_2((MR_String) " not in range [", mercury__array__Var_41, &mercury__array__Var_43);
    mercury__array__V_7_94 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__array__V_8_95 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__string__format__format_signed_int_component_5_p_0(mercury__array__Var_30, mercury__array__V_7_94, mercury__array__V_8_95, mercury__array__Index_5, &mercury__array__Var_44);
    mercury__array__Var_51 = mercury__string__f_43_43_2_f_0(mercury__array__Var_44, mercury__array__Var_43);
    mercury__array__Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ": index ", mercury__array__Var_51);
    mercury__array__Msg_9 = mercury__string__f_43_43_2_f_0(mercury__array__PredName_6, mercury__array__Var_53);
    mercury__array__Var_20 = (MR_Word) mercury__array__Msg_9;
    mercury__array__TypeCtorInfo_22_22 = (MR_Word) &mercury__array__array__type_ctor_info_index_out_of_bounds_0;
    {
      mercury__exception__throw_1_p_0(mercury__array__TypeCtorInfo_22_22, ((MR_Box) (mercury__array__Var_20)));
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__array__is_empty_1_p_0(
  MR_Word mercury__array__TypeInfo_for__T_4,
  MR_ArrayPtr mercury__array__Array_2)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Var_5;
    MR_Word mercury__array__TypeInfo_for__T_6;

{
#define MR_PROC_LABEL mercury__array__is_empty_1_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_2 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Var_5  = Max;
}
    mercury__array__succeeded = ((MR_Integer) 0 == mercury__array__Var_5);
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__in_bounds_2_p_0(
  MR_Word mercury__array__TypeInfo_for__T_7,
  MR_ArrayPtr mercury__array__Array_3,
  MR_Integer mercury__array__Index_4)
{
  {
    MR_bool mercury__array__succeeded;
    MR_Integer mercury__array__Min_5;
    MR_Integer mercury__array__Max_6;
    MR_Word mercury__array__TypeInfo_for__T_11;
    MR_Word mercury__array__TypeInfo_for__T_12;

{
#define MR_PROC_LABEL mercury__array__in_bounds_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_3 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Min_5  = Min;
}
{
#define MR_PROC_LABEL mercury__array__in_bounds_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_3 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__Max_6  = Max;
}
    mercury__array__succeeded = (mercury__array__Min_5 <= mercury__array__Index_4);
    if (mercury__array__succeeded)
      mercury__array__succeeded = (mercury__array__Index_4 <= mercury__array__Max_6);
    return mercury__array__succeeded;
  }
}

void MR_CALL 
mercury__array__bounds_3_p_0(
  MR_Word mercury__array__TypeInfo_for__T_7,
  MR_ArrayPtr mercury__array__Array_4,
  MR_Integer * mercury__array__Min_5,
  MR_Integer * mercury__array__Max_6)
{
  {
    MR_Word mercury__array__TypeInfo_for__T_8;
    MR_Word mercury__array__TypeInfo_for__T_9;

{
#define MR_PROC_LABEL mercury__array__bounds_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 *mercury__array__Min_5  = Min;
}
{
#define MR_PROC_LABEL mercury__array__bounds_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__Array_4 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 *mercury__array__Max_6  = Max;
}
  }
}

MR_Integer MR_CALL 
mercury__array__size_1_f_0(
  MR_Word mercury__array__TypeInfo_for__T_5,
  MR_ArrayPtr mercury__array__A_3)
{
  {
    MR_Integer mercury__array__N_4;
    MR_Word mercury__array__TypeInfo_for__T_6;

{
#define MR_PROC_LABEL mercury__array__size_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_3 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array__N_4  = Max;
}
    return mercury__array__N_4;
  }
}

void MR_CALL 
mercury__array__size_2_p_0(
  MR_Word mercury__array__TypeInfo_for__T_3,
  MR_ArrayPtr mercury__array__HeadVar__1_1,
  MR_Integer * mercury__array__HeadVar__2_2)
{
  {
    MR_Word mercury__array__TypeInfo_for__T_4;

{
#define MR_PROC_LABEL mercury__array__size_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__1_1 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 *mercury__array__HeadVar__2_2  = Max;
}
  }
}

MR_Integer MR_CALL 
mercury__array__greatest_index_1_f_0(
  MR_Word mercury__array__TypeInfo_for_T_4,
  MR_ArrayPtr mercury__array__A_3)
{
  {
    MR_Integer mercury__array__HeadVar__2_2;
    MR_Word mercury__array__TypeInfo_for_T_7;

{
#define MR_PROC_LABEL mercury__array__greatest_index_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_3 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__HeadVar__2_2  = Max;
}
    return mercury__array__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__array__max_1_f_0(
  MR_Word mercury__array__TypeInfo_for__T_5,
  MR_ArrayPtr mercury__array__A_3)
{
  {
    MR_Integer mercury__array__N_4;
    MR_Word mercury__array__TypeInfo_for__T_6;

{
#define MR_PROC_LABEL mercury__array__max_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_3 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__array__N_4  = Max;
}
    return mercury__array__N_4;
  }
}

void MR_CALL 
mercury__array__max_2_p_0(
  MR_Word mercury__array__TypeInfo_for__T_3,
  MR_ArrayPtr mercury__array__HeadVar__1_1,
  MR_Integer * mercury__array__HeadVar__2_2)
{
  {
    MR_Word mercury__array__TypeInfo_for__T_4;

{
#define MR_PROC_LABEL mercury__array__max_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__1_1 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 *mercury__array__HeadVar__2_2  = Max;
}
  }
}

MR_Integer MR_CALL 
mercury__array__least_index_1_f_0(
  MR_Word mercury__array__TypeInfo_for_T_4,
  MR_ArrayPtr mercury__array__A_3)
{
  {
    MR_Integer mercury__array__HeadVar__2_2;
    MR_Word mercury__array__TypeInfo_for_T_7;

{
#define MR_PROC_LABEL mercury__array__least_index_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_3 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__HeadVar__2_2  = Min;
}
    return mercury__array__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__array__min_1_f_0(
  MR_Word mercury__array__TypeInfo_for__T_5,
  MR_ArrayPtr mercury__array__A_3)
{
  {
    MR_Integer mercury__array__N_4;
    MR_Word mercury__array__TypeInfo_for__T_6;

{
#define MR_PROC_LABEL mercury__array__min_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__A_3 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__array__N_4  = Min;
}
    return mercury__array__N_4;
  }
}

void MR_CALL 
mercury__array__min_2_p_0(
  MR_Word mercury__array__TypeInfo_for__T_3,
  MR_ArrayPtr mercury__array__HeadVar__1_1,
  MR_Integer * mercury__array__HeadVar__2_2)
{
  {
    MR_Word mercury__array__TypeInfo_for__T_4;

{
#define MR_PROC_LABEL mercury__array__min_2_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__HeadVar__1_1 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 *mercury__array__HeadVar__2_2  = Min;
}
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl_5_p_5(
  MR_Word mercury__array__TypeInfo_for_T_22,
  MR_Word mercury__array__TypeInfo_for_A_23,
  MR_Integer mercury__array__Size_6,
  MR_Word mercury__array__GenPred_7,
  MR_ArrayPtr * mercury__array__Array_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_14)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__Size_6 < (MR_Integer) 0);
    MR_Word mercury__array__Result_10;

    if (mercury__array__succeeded)
      mercury__array__Result_10 = (MR_Integer) 1;
    else
    {
      mercury__array__succeeded = (mercury__array__Size_6 == (MR_Integer) 0);
      if (mercury__array__succeeded)
        mercury__array__Result_10 = (MR_Integer) 0;
      else
        mercury__array__Result_10 = (MR_Integer) 2;
    }
    switch (mercury__array__Result_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__require__error_1_p_0((MR_String) "array.generate_foldl: negative size");
          mercury__array__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word mercury__array__TypeInfo_for_T_28;

{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_5

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__Array_8 );
}
          *mercury__array__STATE_VARIABLE_Acc_14 = mercury__array__STATE_VARIABLE_Acc_0_13;
          mercury__array__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__array__FirstElem_11;
          MR_ArrayPtr mercury__array__Array0_12;
          MR_Box mercury__array__STATE_VARIABLE_Acc_17_17;
          MR_Integer mercury__array__Var_18;
          MR_Integer mercury__array__Var_19;
          MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_7, (MR_Integer) 1)));
          MR_Word mercury__array__TypeInfo_for_T_29;

          mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__GenPred_7), ((MR_Box) ((MR_Integer) 0)), &mercury__array__FirstElem_11, mercury__array__STATE_VARIABLE_Acc_0_13, &mercury__array__STATE_VARIABLE_Acc_17_17);
          if (mercury__array__succeeded)
          {
            mercury__array__Var_18 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_5

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__Size_6 ;
	FirstElem = (MR_Word) mercury__array__FirstElem_11 ;
	IndexToSet =  mercury__array__Var_18 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Array0_12 );
}
            mercury__array__Var_19 = (MR_Integer) 1;
            mercury__array__succeeded = mercury__array__generate_foldl_2_7_p_5(mercury__array__TypeInfo_for_T_22, mercury__array__TypeInfo_for_A_23, mercury__array__Var_19, mercury__array__Size_6, mercury__array__GenPred_7, mercury__array__Array0_12, mercury__array__Array_8, mercury__array__STATE_VARIABLE_Acc_17_17, mercury__array__STATE_VARIABLE_Acc_14);
          }
        }
        break;
    }
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl_2_7_p_5(
  MR_Word mercury__array__TypeInfo_for_T_24,
  MR_Word mercury__array__TypeInfo_for_A_25,
  MR_Integer mercury__array__Index_8,
  MR_Integer mercury__array__Size_9,
  MR_Word mercury__array__GenPred_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Index_8 < mercury__array__Size_9);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__Elem_13;
        MR_Box mercury__array__STATE_VARIABLE_Acc_18_18;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_19_19;
        MR_Integer mercury__array__Var_20;
        MR_Integer mercury__array__Var_23;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_10, (MR_Integer) 1)));
        MR_Word mercury__array__TypeInfo_for_T_26;

        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__GenPred_10), ((MR_Box) (mercury__array__Index_8)), &mercury__array__Elem_13, mercury__array__STATE_VARIABLE_Acc_0_16, &mercury__array__STATE_VARIABLE_Acc_18_18);
        if (mercury__array__succeeded)
        {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_2_7_p_5

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__Index_8 ;
	Item = (MR_Word) mercury__array__Elem_13 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_14 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_19_19 );
}
          mercury__array__Var_23 = (MR_Integer) 1;
          mercury__array__Var_20 = (mercury__array__Index_8 + mercury__array__Var_23);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_Index_8 = mercury__array__Var_20;
            MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_Array_0_14 = mercury__array__STATE_VARIABLE_Array_19_19;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16 = mercury__array__STATE_VARIABLE_Acc_18_18;

            mercury__array__Index_8 = mercury__array__next_value_of_Index_8;
            mercury__array__STATE_VARIABLE_Array_0_14 = mercury__array__next_value_of_STATE_VARIABLE_Array_0_14;
            mercury__array__STATE_VARIABLE_Acc_0_16 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16;
          }
          continue;
        }
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_17 = mercury__array__STATE_VARIABLE_Acc_0_16;
        *mercury__array__STATE_VARIABLE_Array_15 = mercury__array__STATE_VARIABLE_Array_0_14;
        mercury__array__succeeded = MR_TRUE;
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl_5_p_4(
  MR_Word mercury__array__TypeInfo_for_T_22,
  MR_Word mercury__array__TypeInfo_for_A_23,
  MR_Integer mercury__array__Size_6,
  MR_Word mercury__array__GenPred_7,
  MR_ArrayPtr * mercury__array__Array_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_14)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__Size_6 < (MR_Integer) 0);
    MR_Word mercury__array__Result_10;

    if (mercury__array__succeeded)
      mercury__array__Result_10 = (MR_Integer) 1;
    else
    {
      mercury__array__succeeded = (mercury__array__Size_6 == (MR_Integer) 0);
      if (mercury__array__succeeded)
        mercury__array__Result_10 = (MR_Integer) 0;
      else
        mercury__array__Result_10 = (MR_Integer) 2;
    }
    switch (mercury__array__Result_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__require__error_1_p_0((MR_String) "array.generate_foldl: negative size");
          mercury__array__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word mercury__array__TypeInfo_for_T_28;

{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_4

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__Array_8 );
}
          *mercury__array__STATE_VARIABLE_Acc_14 = mercury__array__STATE_VARIABLE_Acc_0_13;
          mercury__array__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__array__FirstElem_11;
          MR_ArrayPtr mercury__array__Array0_12;
          MR_Box mercury__array__STATE_VARIABLE_Acc_17_17;
          MR_Integer mercury__array__Var_18;
          MR_Integer mercury__array__Var_19;
          MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_7, (MR_Integer) 1)));
          MR_Word mercury__array__TypeInfo_for_T_29;

          mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__GenPred_7), ((MR_Box) ((MR_Integer) 0)), &mercury__array__FirstElem_11, mercury__array__STATE_VARIABLE_Acc_0_13, &mercury__array__STATE_VARIABLE_Acc_17_17);
          if (mercury__array__succeeded)
          {
            mercury__array__Var_18 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_4

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__Size_6 ;
	FirstElem = (MR_Word) mercury__array__FirstElem_11 ;
	IndexToSet =  mercury__array__Var_18 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Array0_12 );
}
            mercury__array__Var_19 = (MR_Integer) 1;
            mercury__array__succeeded = mercury__array__generate_foldl_2_7_p_4(mercury__array__TypeInfo_for_T_22, mercury__array__TypeInfo_for_A_23, mercury__array__Var_19, mercury__array__Size_6, mercury__array__GenPred_7, mercury__array__Array0_12, mercury__array__Array_8, mercury__array__STATE_VARIABLE_Acc_17_17, mercury__array__STATE_VARIABLE_Acc_14);
          }
        }
        break;
    }
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl_2_7_p_4(
  MR_Word mercury__array__TypeInfo_for_T_24,
  MR_Word mercury__array__TypeInfo_for_A_25,
  MR_Integer mercury__array__Index_8,
  MR_Integer mercury__array__Size_9,
  MR_Word mercury__array__GenPred_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Index_8 < mercury__array__Size_9);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__Elem_13;
        MR_Box mercury__array__STATE_VARIABLE_Acc_18_18;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_19_19;
        MR_Integer mercury__array__Var_20;
        MR_Integer mercury__array__Var_23;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_10, (MR_Integer) 1)));
        MR_Word mercury__array__TypeInfo_for_T_26;

        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__GenPred_10), ((MR_Box) (mercury__array__Index_8)), &mercury__array__Elem_13, mercury__array__STATE_VARIABLE_Acc_0_16, &mercury__array__STATE_VARIABLE_Acc_18_18);
        if (mercury__array__succeeded)
        {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_2_7_p_4

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__Index_8 ;
	Item = (MR_Word) mercury__array__Elem_13 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_14 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_19_19 );
}
          mercury__array__Var_23 = (MR_Integer) 1;
          mercury__array__Var_20 = (mercury__array__Index_8 + mercury__array__Var_23);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_Index_8 = mercury__array__Var_20;
            MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_Array_0_14 = mercury__array__STATE_VARIABLE_Array_19_19;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16 = mercury__array__STATE_VARIABLE_Acc_18_18;

            mercury__array__Index_8 = mercury__array__next_value_of_Index_8;
            mercury__array__STATE_VARIABLE_Array_0_14 = mercury__array__next_value_of_STATE_VARIABLE_Array_0_14;
            mercury__array__STATE_VARIABLE_Acc_0_16 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16;
          }
          continue;
        }
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_17 = mercury__array__STATE_VARIABLE_Acc_0_16;
        *mercury__array__STATE_VARIABLE_Array_15 = mercury__array__STATE_VARIABLE_Array_0_14;
        mercury__array__succeeded = MR_TRUE;
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl_5_p_3(
  MR_Word mercury__array__TypeInfo_for_T_22,
  MR_Word mercury__array__TypeInfo_for_A_23,
  MR_Integer mercury__array__Size_6,
  MR_Word mercury__array__GenPred_7,
  MR_ArrayPtr * mercury__array__Array_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_14)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__Size_6 < (MR_Integer) 0);
    MR_Word mercury__array__Result_10;

    if (mercury__array__succeeded)
      mercury__array__Result_10 = (MR_Integer) 1;
    else
    {
      mercury__array__succeeded = (mercury__array__Size_6 == (MR_Integer) 0);
      if (mercury__array__succeeded)
        mercury__array__Result_10 = (MR_Integer) 0;
      else
        mercury__array__Result_10 = (MR_Integer) 2;
    }
    switch (mercury__array__Result_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__require__error_1_p_0((MR_String) "array.generate_foldl: negative size");
          mercury__array__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word mercury__array__TypeInfo_for_T_28;

{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_3

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__Array_8 );
}
          *mercury__array__STATE_VARIABLE_Acc_14 = mercury__array__STATE_VARIABLE_Acc_0_13;
          mercury__array__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__array__FirstElem_11;
          MR_ArrayPtr mercury__array__Array0_12;
          MR_Box mercury__array__STATE_VARIABLE_Acc_17_17;
          MR_Integer mercury__array__Var_18;
          MR_Integer mercury__array__Var_19;
          MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_7, (MR_Integer) 1)));
          MR_Word mercury__array__TypeInfo_for_T_29;

          mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__GenPred_7), ((MR_Box) ((MR_Integer) 0)), &mercury__array__FirstElem_11, mercury__array__STATE_VARIABLE_Acc_0_13, &mercury__array__STATE_VARIABLE_Acc_17_17);
          if (mercury__array__succeeded)
          {
            mercury__array__Var_18 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_3

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__Size_6 ;
	FirstElem = (MR_Word) mercury__array__FirstElem_11 ;
	IndexToSet =  mercury__array__Var_18 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Array0_12 );
}
            mercury__array__Var_19 = (MR_Integer) 1;
            mercury__array__succeeded = mercury__array__generate_foldl_2_7_p_3(mercury__array__TypeInfo_for_T_22, mercury__array__TypeInfo_for_A_23, mercury__array__Var_19, mercury__array__Size_6, mercury__array__GenPred_7, mercury__array__Array0_12, mercury__array__Array_8, mercury__array__STATE_VARIABLE_Acc_17_17, mercury__array__STATE_VARIABLE_Acc_14);
          }
        }
        break;
    }
    return mercury__array__succeeded;
  }
}

MR_bool MR_CALL 
mercury__array__generate_foldl_2_7_p_3(
  MR_Word mercury__array__TypeInfo_for_T_24,
  MR_Word mercury__array__TypeInfo_for_A_25,
  MR_Integer mercury__array__Index_8,
  MR_Integer mercury__array__Size_9,
  MR_Word mercury__array__GenPred_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Index_8 < mercury__array__Size_9);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__Elem_13;
        MR_Box mercury__array__STATE_VARIABLE_Acc_18_18;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_19_19;
        MR_Integer mercury__array__Var_20;
        MR_Integer mercury__array__Var_23;
        MR_bool MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_10, (MR_Integer) 1)));
        MR_Word mercury__array__TypeInfo_for_T_26;

        mercury__array__succeeded = mercury__array__func_0(((MR_Box) mercury__array__GenPred_10), ((MR_Box) (mercury__array__Index_8)), &mercury__array__Elem_13, mercury__array__STATE_VARIABLE_Acc_0_16, &mercury__array__STATE_VARIABLE_Acc_18_18);
        if (mercury__array__succeeded)
        {
{
#define MR_PROC_LABEL mercury__array__generate_foldl_2_7_p_3

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__Index_8 ;
	Item = (MR_Word) mercury__array__Elem_13 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_14 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_19_19 );
}
          mercury__array__Var_23 = (MR_Integer) 1;
          mercury__array__Var_20 = (mercury__array__Index_8 + mercury__array__Var_23);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array__next_value_of_Index_8 = mercury__array__Var_20;
            MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_Array_0_14 = mercury__array__STATE_VARIABLE_Array_19_19;
            MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16 = mercury__array__STATE_VARIABLE_Acc_18_18;

            mercury__array__Index_8 = mercury__array__next_value_of_Index_8;
            mercury__array__STATE_VARIABLE_Array_0_14 = mercury__array__next_value_of_STATE_VARIABLE_Array_0_14;
            mercury__array__STATE_VARIABLE_Acc_0_16 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16;
          }
          continue;
        }
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_17 = mercury__array__STATE_VARIABLE_Acc_0_16;
        *mercury__array__STATE_VARIABLE_Array_15 = mercury__array__STATE_VARIABLE_Array_0_14;
        mercury__array__succeeded = MR_TRUE;
      }
      return mercury__array__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__array__generate_foldl_5_p_2(
  MR_Word mercury__array__TypeInfo_for_T_22,
  MR_Word mercury__array__TypeInfo_for_A_23,
  MR_Integer mercury__array__Size_6,
  MR_Word mercury__array__GenPred_7,
  MR_ArrayPtr * mercury__array__Array_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_14)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__Size_6 < (MR_Integer) 0);
    MR_Word mercury__array__Result_10;

    if (mercury__array__succeeded)
      mercury__array__Result_10 = (MR_Integer) 1;
    else
    {
      mercury__array__succeeded = (mercury__array__Size_6 == (MR_Integer) 0);
      if (mercury__array__succeeded)
        mercury__array__Result_10 = (MR_Integer) 0;
      else
        mercury__array__Result_10 = (MR_Integer) 2;
    }
    switch (mercury__array__Result_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__require__error_1_p_0((MR_String) "array.generate_foldl: negative size");
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word mercury__array__TypeInfo_for_T_28;

{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_2

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__Array_8 );
}
          *mercury__array__STATE_VARIABLE_Acc_14 = mercury__array__STATE_VARIABLE_Acc_0_13;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__array__FirstElem_11;
          MR_ArrayPtr mercury__array__Array0_12;
          MR_Box mercury__array__STATE_VARIABLE_Acc_17_17;
          void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_7, (MR_Integer) 1)));
          MR_Word mercury__array__TypeInfo_for_T_29;

          mercury__array__func_0(((MR_Box) mercury__array__GenPred_7), ((MR_Box) ((MR_Integer) 0)), &mercury__array__FirstElem_11, mercury__array__STATE_VARIABLE_Acc_0_13, &mercury__array__STATE_VARIABLE_Acc_17_17);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_2

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__Size_6 ;
	FirstElem = (MR_Word) mercury__array__FirstElem_11 ;
	IndexToSet =  (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Array0_12 );
}
          mercury__array__generate_foldl_2_7_p_2(mercury__array__TypeInfo_for_T_22, mercury__array__TypeInfo_for_A_23, (MR_Integer) 1, mercury__array__Size_6, mercury__array__GenPred_7, mercury__array__Array0_12, mercury__array__Array_8, mercury__array__STATE_VARIABLE_Acc_17_17, mercury__array__STATE_VARIABLE_Acc_14);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__array__generate_foldl_2_7_p_2(
  MR_Word mercury__array__TypeInfo_for_T_24,
  MR_Word mercury__array__TypeInfo_for_A_25,
  MR_Integer mercury__array__Index_8,
  MR_Integer mercury__array__Size_9,
  MR_Word mercury__array__GenPred_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Index_8 < mercury__array__Size_9);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__Elem_13;
        MR_Box mercury__array__STATE_VARIABLE_Acc_18_18;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_19_19;
        MR_Integer mercury__array__Var_20;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_10, (MR_Integer) 1)));
        MR_Word mercury__array__TypeInfo_for_T_26;

        mercury__array__func_0(((MR_Box) mercury__array__GenPred_10), ((MR_Box) (mercury__array__Index_8)), &mercury__array__Elem_13, mercury__array__STATE_VARIABLE_Acc_0_16, &mercury__array__STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_2_7_p_2

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__Index_8 ;
	Item = (MR_Word) mercury__array__Elem_13 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_14 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_19_19 );
}
        mercury__array__Var_20 = (mercury__array__Index_8 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Index_8 = mercury__array__Var_20;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_Array_0_14 = mercury__array__STATE_VARIABLE_Array_19_19;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16 = mercury__array__STATE_VARIABLE_Acc_18_18;

          mercury__array__Index_8 = mercury__array__next_value_of_Index_8;
          mercury__array__STATE_VARIABLE_Array_0_14 = mercury__array__next_value_of_STATE_VARIABLE_Array_0_14;
          mercury__array__STATE_VARIABLE_Acc_0_16 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16;
        }
        continue;
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_17 = mercury__array__STATE_VARIABLE_Acc_0_16;
        *mercury__array__STATE_VARIABLE_Array_15 = mercury__array__STATE_VARIABLE_Array_0_14;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__generate_foldl_5_p_1(
  MR_Word mercury__array__TypeInfo_for_T_22,
  MR_Word mercury__array__TypeInfo_for_A_23,
  MR_Integer mercury__array__Size_6,
  MR_Word mercury__array__GenPred_7,
  MR_ArrayPtr * mercury__array__Array_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_14)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__Size_6 < (MR_Integer) 0);
    MR_Word mercury__array__Result_10;

    if (mercury__array__succeeded)
      mercury__array__Result_10 = (MR_Integer) 1;
    else
    {
      mercury__array__succeeded = (mercury__array__Size_6 == (MR_Integer) 0);
      if (mercury__array__succeeded)
        mercury__array__Result_10 = (MR_Integer) 0;
      else
        mercury__array__Result_10 = (MR_Integer) 2;
    }
    switch (mercury__array__Result_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__require__error_1_p_0((MR_String) "array.generate_foldl: negative size");
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word mercury__array__TypeInfo_for_T_28;

{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_1

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__Array_8 );
}
          *mercury__array__STATE_VARIABLE_Acc_14 = mercury__array__STATE_VARIABLE_Acc_0_13;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__array__FirstElem_11;
          MR_ArrayPtr mercury__array__Array0_12;
          MR_Box mercury__array__STATE_VARIABLE_Acc_17_17;
          void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_7, (MR_Integer) 1)));
          MR_Word mercury__array__TypeInfo_for_T_29;

          mercury__array__func_0(((MR_Box) mercury__array__GenPred_7), ((MR_Box) ((MR_Integer) 0)), &mercury__array__FirstElem_11, mercury__array__STATE_VARIABLE_Acc_0_13, &mercury__array__STATE_VARIABLE_Acc_17_17);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_1

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__Size_6 ;
	FirstElem = (MR_Word) mercury__array__FirstElem_11 ;
	IndexToSet =  (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Array0_12 );
}
          mercury__array__generate_foldl_2_7_p_1(mercury__array__TypeInfo_for_T_22, mercury__array__TypeInfo_for_A_23, (MR_Integer) 1, mercury__array__Size_6, mercury__array__GenPred_7, mercury__array__Array0_12, mercury__array__Array_8, mercury__array__STATE_VARIABLE_Acc_17_17, mercury__array__STATE_VARIABLE_Acc_14);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__array__generate_foldl_2_7_p_1(
  MR_Word mercury__array__TypeInfo_for_T_24,
  MR_Word mercury__array__TypeInfo_for_A_25,
  MR_Integer mercury__array__Index_8,
  MR_Integer mercury__array__Size_9,
  MR_Word mercury__array__GenPred_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Index_8 < mercury__array__Size_9);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__Elem_13;
        MR_Box mercury__array__STATE_VARIABLE_Acc_18_18;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_19_19;
        MR_Integer mercury__array__Var_20;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_10, (MR_Integer) 1)));
        MR_Word mercury__array__TypeInfo_for_T_26;

        mercury__array__func_0(((MR_Box) mercury__array__GenPred_10), ((MR_Box) (mercury__array__Index_8)), &mercury__array__Elem_13, mercury__array__STATE_VARIABLE_Acc_0_16, &mercury__array__STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_2_7_p_1

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__Index_8 ;
	Item = (MR_Word) mercury__array__Elem_13 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_14 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_19_19 );
}
        mercury__array__Var_20 = (mercury__array__Index_8 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Index_8 = mercury__array__Var_20;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_Array_0_14 = mercury__array__STATE_VARIABLE_Array_19_19;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16 = mercury__array__STATE_VARIABLE_Acc_18_18;

          mercury__array__Index_8 = mercury__array__next_value_of_Index_8;
          mercury__array__STATE_VARIABLE_Array_0_14 = mercury__array__next_value_of_STATE_VARIABLE_Array_0_14;
          mercury__array__STATE_VARIABLE_Acc_0_16 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16;
        }
        continue;
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_17 = mercury__array__STATE_VARIABLE_Acc_0_16;
        *mercury__array__STATE_VARIABLE_Array_15 = mercury__array__STATE_VARIABLE_Array_0_14;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__array__generate_foldl_5_p_0(
  MR_Word mercury__array__TypeInfo_for_T_22,
  MR_Word mercury__array__TypeInfo_for_A_23,
  MR_Integer mercury__array__Size_6,
  MR_Word mercury__array__GenPred_7,
  MR_ArrayPtr * mercury__array__Array_8,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_14)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__Size_6 < (MR_Integer) 0);
    MR_Word mercury__array__Result_10;

    if (mercury__array__succeeded)
      mercury__array__Result_10 = (MR_Integer) 1;
    else
    {
      mercury__array__succeeded = (mercury__array__Size_6 == (MR_Integer) 0);
      if (mercury__array__succeeded)
        mercury__array__Result_10 = (MR_Integer) 0;
      else
        mercury__array__Result_10 = (MR_Integer) 2;
    }
    switch (mercury__array__Result_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__require__error_1_p_0((MR_String) "array.generate_foldl: negative size");
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word mercury__array__TypeInfo_for_T_28;

{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__Array_8 );
}
          *mercury__array__STATE_VARIABLE_Acc_14 = mercury__array__STATE_VARIABLE_Acc_0_13;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__array__FirstElem_11;
          MR_ArrayPtr mercury__array__Array0_12;
          MR_Box mercury__array__STATE_VARIABLE_Acc_17_17;
          void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_7, (MR_Integer) 1)));
          MR_Word mercury__array__TypeInfo_for_T_29;

          mercury__array__func_0(((MR_Box) mercury__array__GenPred_7), ((MR_Box) ((MR_Integer) 0)), &mercury__array__FirstElem_11, mercury__array__STATE_VARIABLE_Acc_0_13, &mercury__array__STATE_VARIABLE_Acc_17_17);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_5_p_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__Size_6 ;
	FirstElem = (MR_Word) mercury__array__FirstElem_11 ;
	IndexToSet =  (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Array0_12 );
}
          mercury__array__generate_foldl_2_7_p_0(mercury__array__TypeInfo_for_T_22, mercury__array__TypeInfo_for_A_23, (MR_Integer) 1, mercury__array__Size_6, mercury__array__GenPred_7, mercury__array__Array0_12, mercury__array__Array_8, mercury__array__STATE_VARIABLE_Acc_17_17, mercury__array__STATE_VARIABLE_Acc_14);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__array__generate_foldl_2_7_p_0(
  MR_Word mercury__array__TypeInfo_for_T_24,
  MR_Word mercury__array__TypeInfo_for_A_25,
  MR_Integer mercury__array__Index_8,
  MR_Integer mercury__array__Size_9,
  MR_Word mercury__array__GenPred_10,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_14,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_15,
  MR_Box mercury__array__STATE_VARIABLE_Acc_0_16,
  MR_Box * mercury__array__STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Index_8 < mercury__array__Size_9);

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__Elem_13;
        MR_Box mercury__array__STATE_VARIABLE_Acc_18_18;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_19_19;
        MR_Integer mercury__array__Var_20;
        void MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__array__GenPred_10, (MR_Integer) 1)));
        MR_Word mercury__array__TypeInfo_for_T_26;

        mercury__array__func_0(((MR_Box) mercury__array__GenPred_10), ((MR_Box) (mercury__array__Index_8)), &mercury__array__Elem_13, mercury__array__STATE_VARIABLE_Acc_0_16, &mercury__array__STATE_VARIABLE_Acc_18_18);
{
#define MR_PROC_LABEL mercury__array__generate_foldl_2_7_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__Index_8 ;
	Item = (MR_Word) mercury__array__Elem_13 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_14 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_19_19 );
}
        mercury__array__Var_20 = (mercury__array__Index_8 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Index_8 = mercury__array__Var_20;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_Array_0_14 = mercury__array__STATE_VARIABLE_Array_19_19;
          MR_Box mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16 = mercury__array__STATE_VARIABLE_Acc_18_18;

          mercury__array__Index_8 = mercury__array__next_value_of_Index_8;
          mercury__array__STATE_VARIABLE_Array_0_14 = mercury__array__next_value_of_STATE_VARIABLE_Array_0_14;
          mercury__array__STATE_VARIABLE_Acc_0_16 = mercury__array__next_value_of_STATE_VARIABLE_Acc_0_16;
        }
        continue;
      }
      else
      {
        *mercury__array__STATE_VARIABLE_Acc_17 = mercury__array__STATE_VARIABLE_Acc_0_16;
        *mercury__array__STATE_VARIABLE_Array_15 = mercury__array__STATE_VARIABLE_Array_0_14;
      }
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__generate_2_f_0(
  MR_Word mercury__array__TypeInfo_for_T_15,
  MR_Integer mercury__array__Size_4,
  MR_Word mercury__array__GenFunc_5)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__Size_4 < (MR_Integer) 0);
    MR_ArrayPtr mercury__array__Array_6;
    MR_Word mercury__array__Result_7;

    if (mercury__array__succeeded)
      mercury__array__Result_7 = (MR_Integer) 1;
    else
    {
      mercury__array__succeeded = (mercury__array__Size_4 == (MR_Integer) 0);
      if (mercury__array__succeeded)
        mercury__array__Result_7 = (MR_Integer) 0;
      else
        mercury__array__Result_7 = (MR_Integer) 2;
    }
    switch (mercury__array__Result_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__require__error_1_p_0((MR_String) "array.generate: negative size");
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word mercury__array__TypeInfo_for_T_20;

{
#define MR_PROC_LABEL mercury__array__generate_2_f_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Array_6 );
}
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__array__FirstElem_8;
          MR_ArrayPtr mercury__array__Array0_9;
          MR_Box MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__GenFunc_5, (MR_Integer) 1)));
          MR_Word mercury__array__TypeInfo_for_T_21;

          mercury__array__FirstElem_8 = mercury__array__func_0(((MR_Box) mercury__array__GenFunc_5), ((MR_Box) ((MR_Integer) 0)));
{
#define MR_PROC_LABEL mercury__array__generate_2_f_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__Size_4 ;
	FirstElem = (MR_Word) mercury__array__FirstElem_8 ;
	IndexToSet =  (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Array0_9 );
}
          mercury__array__Array_6 = mercury__array__generate_2_4_f_0(mercury__array__TypeInfo_for_T_15, (MR_Integer) 1, mercury__array__Size_4, mercury__array__GenFunc_5, mercury__array__Array0_9);
        }
        break;
    }
    return mercury__array__Array_6;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__generate_2_4_f_0(
  MR_Word mercury__array__TypeInfo_for_T_17,
  MR_Integer mercury__array__Index_6,
  MR_Integer mercury__array__Size_7,
  MR_Word mercury__array__GenFunc_8,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array__succeeded = (mercury__array__Index_6 < mercury__array__Size_7);
      MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_12;

      if (mercury__array__succeeded)
      {
        MR_Box mercury__array__Elem_10;
        MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_13_13;
        MR_Integer mercury__array__Var_15;
        MR_Box MR_CALL (* mercury__array__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__array__GenFunc_8, (MR_Integer) 1)));
        MR_Word mercury__array__TypeInfo_for_T_18;

        mercury__array__Elem_10 = mercury__array__func_0(((MR_Box) mercury__array__GenFunc_8), ((MR_Box) (mercury__array__Index_6)));
{
#define MR_PROC_LABEL mercury__array__generate_2_4_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__Index_6 ;
	Item = (MR_Word) mercury__array__Elem_10 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_11 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_13_13 );
}
        mercury__array__Var_15 = (mercury__array__Index_6 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__array__next_value_of_Index_6 = mercury__array__Var_15;
          MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_Array_0_11 = mercury__array__STATE_VARIABLE_Array_13_13;

          mercury__array__Index_6 = mercury__array__next_value_of_Index_6;
          mercury__array__STATE_VARIABLE_Array_0_11 = mercury__array__next_value_of_STATE_VARIABLE_Array_0_11;
        }
        continue;
      }
      else
        mercury__array__STATE_VARIABLE_Array_12 = mercury__array__STATE_VARIABLE_Array_0_11;
      return mercury__array__STATE_VARIABLE_Array_12;
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__array_1_f_0(
  MR_Word mercury__array__TypeInfo_for_T_5,
  MR_Word mercury__array__List_3)
{
  {
    MR_ArrayPtr mercury__array__Array_4;

    mercury__array__from_list_2_p_0(mercury__array__TypeInfo_for_T_5, mercury__array__List_3, &mercury__array__Array_4);
    return mercury__array__Array_4;
  }
}

void MR_CALL 
mercury__array__from_list_2_p_0(
  MR_Word mercury__array__TypeInfo_for_T_12,
  MR_Word mercury__array__HeadVar__1_1,
  MR_ArrayPtr * mercury__array__Array_2)
{
  if ((mercury__array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word mercury__array__TypeInfo_for_T_16;

{
#define MR_PROC_LABEL mercury__array__from_list_2_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__Array_2 );
}
  }
  else
  {
    MR_Box mercury__array__Head_6 = (MR_hl_field(MR_mktag(1), mercury__array__HeadVar__1_1, (MR_Integer) 0));
    MR_Word mercury__array__Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__array__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__array__Len_8;
    MR_ArrayPtr mercury__array__Array0_9;
    MR_Word mercury__array__TypeInfo_for_T_17;

    mercury__list__length_acc_3_p_0(mercury__array__TypeInfo_for_T_12, mercury__array__HeadVar__1_1, (MR_Integer) 0, &mercury__array__Len_8);
{
#define MR_PROC_LABEL mercury__array__from_list_2_p_0

	MR_Integer Size;
	MR_Word FirstElem;
	MR_Integer IndexToSet;
	MR_ArrayPtr Array;

	Size =  mercury__array__Len_8 ;
	FirstElem = (MR_Word) mercury__array__Head_6 ;
	IndexToSet =  (MR_Integer) 0 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;
        Array->elements[IndexToSet] = FirstElem;
    #endif



		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__Array0_9 );
}
    mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_p_0(mercury__array__Tail_7, (MR_Integer) 1, mercury__array__Array0_9, mercury__array__Array_2);
  }
}

static void MR_CALL 
mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word mercury__array__HeadVar__1_1,
  MR_Integer mercury__array__HeadVar__2_2,
  MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_0_3,
  MR_ArrayPtr * mercury__array__STATE_VARIABLE_Array_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__array__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__array__STATE_VARIABLE_Array_4 = mercury__array__STATE_VARIABLE_Array_0_3;
    else
    {
      MR_Box mercury__array__Head_9 = (MR_hl_field(MR_mktag(1), mercury__array__HeadVar__1_1, (MR_Integer) 0));
      MR_Word mercury__array__Tail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__array__HeadVar__1_1, (MR_Integer) 1)));
      MR_ArrayPtr mercury__array__STATE_VARIABLE_Array_15_15;
      MR_Integer mercury__array__Var_16;
      MR_Word mercury__array__TypeInfo_for_T_20;

{
#define MR_PROC_LABEL mercury__array__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array__HeadVar__2_2 ;
	Item = (MR_Word) mercury__array__Head_9 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array__STATE_VARIABLE_Array_0_3 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__STATE_VARIABLE_Array_15_15 );
}
      mercury__array__Var_16 = (mercury__array__HeadVar__2_2 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__array__next_value_of_HeadVar__1_1 = mercury__array__Tail_10;
        MR_Integer mercury__array__next_value_of_HeadVar__2_2 = mercury__array__Var_16;
        MR_ArrayPtr mercury__array__next_value_of_STATE_VARIABLE_Array_0_3 = mercury__array__STATE_VARIABLE_Array_15_15;

        mercury__array__HeadVar__1_1 = mercury__array__next_value_of_HeadVar__1_1;
        mercury__array__HeadVar__2_2 = mercury__array__next_value_of_HeadVar__2_2;
        mercury__array__STATE_VARIABLE_Array_0_3 = mercury__array__next_value_of_STATE_VARIABLE_Array_0_3;
      }
      continue;
    }
    break;
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__init_2_f_0(
  MR_Word mercury__array__TypeInfo_for_T_7,
  MR_Integer mercury__array__N_4,
  MR_Box mercury__array__X_5)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__N_4 < (MR_Integer) 0);
    MR_ArrayPtr mercury__array__A_6;

    if (mercury__array__succeeded)
    {
      mercury__require__error_1_p_0((MR_String) "array.init: negative size");
    }
    else
    {
      MR_Word mercury__array__TypeInfo_for_T_13;

{
#define MR_PROC_LABEL mercury__array__init_2_f_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size =  mercury__array__N_4 ;
	Item = (MR_Word) mercury__array__X_5 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__A_6 );
}
    }
    return mercury__array__A_6;
  }
}

void MR_CALL 
mercury__array__init_3_p_0(
  MR_Word mercury__array__TypeInfo_for_T_9,
  MR_Integer mercury__array__Size_4,
  MR_Box mercury__array__Item_5,
  MR_ArrayPtr * mercury__array__Array_6)
{
  {
    MR_bool mercury__array__succeeded = (mercury__array__Size_4 < (MR_Integer) 0);

    if (mercury__array__succeeded)
    {
      {
        mercury__require__error_1_p_0((MR_String) "array.init: negative size");
        return;
      }
    }
    else
    {
      MR_Word mercury__array__TypeInfo_for_T_10;

{
#define MR_PROC_LABEL mercury__array__init_3_p_0

	MR_Integer Size;
	MR_Word Item;
	MR_ArrayPtr Array;

	Size =  mercury__array__Size_4 ;
	Item = (MR_Word) mercury__array__Item_5 ;
		{

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__Array_6 );
}
    }
  }
}

MR_ArrayPtr MR_CALL 
mercury__array__make_empty_array_0_f_0(
  MR_Word mercury__array__TypeInfo_for_T_3)
{
  {
    MR_ArrayPtr mercury__array__A_2;
    MR_Word mercury__array__TypeInfo_for_T_4;

{
#define MR_PROC_LABEL mercury__array__make_empty_array_0_f_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array__A_2 );
}
    return mercury__array__A_2;
  }
}

void MR_CALL 
mercury__array__make_empty_array_1_p_0(
  MR_Word mercury__array__TypeInfo_for_T_2,
  MR_ArrayPtr * mercury__array__HeadVar__1_1)
{
  {
    MR_Word mercury__array__TypeInfo_for_T_3;

{
#define MR_PROC_LABEL mercury__array__make_empty_array_1_p_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, *mercury__array__HeadVar__1_1 );
}
  }
}

static MR_bool MR_CALL 
mercury__array____Unify____array_1_0_10001(
  MR_Box mercury__array__wrapper_arg_1,
  MR_Box mercury__array__wrapper_arg_2,
  MR_Box mercury__array__wrapper_arg_3)
{
  {
    MR_bool mercury__array__succeeded;

    mercury__array__succeeded = mercury__array____Unify____array_1_0(((MR_Word) mercury__array__wrapper_arg_1), ((MR_ArrayPtr) mercury__array__wrapper_arg_2), ((MR_ArrayPtr) mercury__array__wrapper_arg_3));
    return mercury__array__succeeded;
  }
}

static void MR_CALL 
mercury__array____Compare____array_1_0_10001(
  MR_Box mercury__array__wrapper_arg_1,
  MR_Box * mercury__array__wrapper_arg_2,
  MR_Box mercury__array__wrapper_arg_3,
  MR_Box mercury__array__wrapper_arg_4)
{
  {
    MR_Word mercury__array__conv0_HeadVar__1_1;

    mercury__array____Compare____array_1_0(((MR_Word) mercury__array__wrapper_arg_1), &mercury__array__conv0_HeadVar__1_1, ((MR_ArrayPtr) mercury__array__wrapper_arg_3), ((MR_ArrayPtr) mercury__array__wrapper_arg_4));
    *mercury__array__wrapper_arg_2 = ((MR_Box) (mercury__array__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__array____Unify____index_out_of_bounds_0_0_10001(
  MR_Box mercury__array__wrapper_arg_1,
  MR_Box mercury__array__wrapper_arg_2)
{
  {
    MR_bool mercury__array__succeeded;

    mercury__array__succeeded = mercury__array____Unify____index_out_of_bounds_0_0(((MR_Word) mercury__array__wrapper_arg_1), ((MR_Word) mercury__array__wrapper_arg_2));
    return mercury__array__succeeded;
  }
}

static void MR_CALL 
mercury__array____Compare____index_out_of_bounds_0_0_10001(
  MR_Box * mercury__array__wrapper_arg_1,
  MR_Box mercury__array__wrapper_arg_2,
  MR_Box mercury__array__wrapper_arg_3)
{
  {
    MR_Word mercury__array__conv0_HeadVar__1_1;

    mercury__array____Compare____index_out_of_bounds_0_0(&mercury__array__conv0_HeadVar__1_1, ((MR_Word) mercury__array__wrapper_arg_2), ((MR_Word) mercury__array__wrapper_arg_3));
    *mercury__array__wrapper_arg_1 = ((MR_Box) (mercury__array__conv0_HeadVar__1_1));
  }
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

/* :- end_module array. */
