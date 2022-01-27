/*
** Automatically generated from `version_hash_table.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module version_hash_table. */
/* :- implementation. */

/*
INIT mercury__version_hash_table__init
ENDINIT
*/

#include "version_hash_table.mih"


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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_PseudoTypeInfo_Struct2 mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0;

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1[2];

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1;

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2[3];

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2;

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0[1];

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1[1];

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2[1];

static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_hash_table_alist_2[3];

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2[3];

static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2[3];

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0[4];

static const MR_ConstString mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0[4];

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0;

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0[1];

static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2[1];

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2[1];

static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2[1];

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4);

static void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4,
  MR_Box mercury__version_hash_table__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box mercury__version_hash_table__wrapper_arg_3);

static void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box * mercury__version_hash_table__wrapper_arg_2,
  MR_Box mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4);

static void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4,
  MR_Box mercury__version_hash_table__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4);

static void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4,
  MR_Box mercury__version_hash_table__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(
  MR_Word mercury__version_hash_table__V_21_21,
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
  MR_Word mercury__version_hash_table__List_6);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_26_26,
  MR_Word mercury__version_hash_table__V_27_27,
  MR_Word mercury__version_hash_table__V_28_28,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12);

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12);

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12);

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12);

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12);

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_27_27,
  MR_Word mercury__version_hash_table__V_28_28,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Word mercury__version_hash_table__V_12_11,
  MR_Word * mercury__version_hash_table__V_13_12);

static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word mercury__version_hash_table__V_19_19,
  MR_ArrayPtr mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Integer mercury__version_hash_table__V_11_11);

static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
  MR_Word mercury__version_hash_table__V_13_13,
  MR_ArrayPtr mercury__version_hash_table__V_6_6,
  MR_Integer mercury__version_hash_table__V_7_7);

static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
  MR_Word mercury__version_hash_table__AL0_4,
  MR_Box mercury__version_hash_table__K_5,
  MR_Word * mercury__version_hash_table__AL_6);

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
  MR_Word mercury__version_hash_table__AL0_5,
  MR_Box mercury__version_hash_table__K_6,
  MR_Box mercury__version_hash_table__V_7,
  MR_Word * mercury__version_hash_table__AL_8);

static void MR_CALL 
mercury__version_hash_table__foldl__ho13_4_p_in__list_0(
  MR_Word mercury__version_hash_table__HeadVar__2_2,
  MR_Integer mercury__version_hash_table__HeadVar__3_3,
  MR_Integer * mercury__version_hash_table__HeadVar__4_4);

static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
  MR_Word mercury__version_hash_table__AL_6,
  MR_Word mercury__version_hash_table__HashPred_7,
  MR_Integer mercury__version_hash_table__NumBuckets_8,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
  MR_Integer mercury__version_hash_table__I_7,
  MR_Box mercury__version_hash_table__OldBuckets_8,
  MR_Word mercury__version_hash_table__HashPred_9,
  MR_Integer mercury__version_hash_table__NumBuckets_10,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
  MR_Integer mercury__version_hash_table__NumOccupants_6,
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
  MR_Word mercury__version_hash_table__HashPred0_8,
  MR_Box mercury__version_hash_table__Buckets0_9);


static /* final */ const MR_Box mercury__version_hash_table_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__version_hash_table_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_hash_table_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_hash_table_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_hash_table_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
#include "version_array.mh"
#include "version_hash_table.mh"



static const MR_FA_PseudoTypeInfo_Struct2 mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
  }
};

const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_buckets_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__version_hash_table____Unify____buckets_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____buckets_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "buckets",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_hash_pred_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__version_hash_table____Unify____hash_pred_1_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____hash_pred_1_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "hash_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0 = {
  (MR_String) "ht_nil",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1 = {
  (MR_String) "ht_single",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2 = {
  (MR_String) "ht_cons",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2
};

static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_hash_table_alist_2[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2
  }
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2[3] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__version_hash_table____Unify____hash_table_alist_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____hash_table_alist_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "hash_table_alist",
  {     mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2 },
  {     mercury__version_hash_table__version_hash_table__du_ptag_ordered_hash_table_alist_2 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2
};

static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

static const MR_ConstString mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0[4] = {
  (MR_String) "ht_num_occupants",
  (MR_String) "ht_max_occupants",
  (MR_String) "ht_hash_pred",
  (MR_String) "ht_buckets"
};

static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0 = {
  (MR_String) "ht",
  (MR_Integer) 4,
  (MR_Integer) 12,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0,
  mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0
  }
};

static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU_USEREQ,
  ((MR_Box) (mercury__version_hash_table____Unify____version_hash_table_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____version_hash_table_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "version_hash_table",
  {     mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2 },
  {     mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2
};

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____buckets_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Box) mercury__version_hash_table__wrapper_arg_3), ((MR_Box) mercury__version_hash_table__wrapper_arg_4));
    }
    return mercury__version_hash_table__succeeded;
  }
}

static void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4,
  MR_Box mercury__version_hash_table__wrapper_arg_5)
{
  {
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

    {
      mercury__version_hash_table____Compare____buckets_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Box) mercury__version_hash_table__wrapper_arg_4), ((MR_Box) mercury__version_hash_table__wrapper_arg_5));
    }
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box mercury__version_hash_table__wrapper_arg_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____hash_pred_1_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3));
    }
    return mercury__version_hash_table__succeeded;
  }
}

static void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box * mercury__version_hash_table__wrapper_arg_2,
  MR_Box mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4)
{
  {
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

    {
      mercury__version_hash_table____Compare____hash_pred_1_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
    *mercury__version_hash_table__wrapper_arg_2 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____hash_table_alist_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
    return mercury__version_hash_table__succeeded;
  }
}

static void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4,
  MR_Box mercury__version_hash_table__wrapper_arg_5)
{
  {
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

    {
      mercury__version_hash_table____Compare____hash_table_alist_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_4), ((MR_Word) mercury__version_hash_table__wrapper_arg_5));
    }
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____version_hash_table_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
    return mercury__version_hash_table__succeeded;
  }
}

static void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0_10001(
  MR_Box mercury__version_hash_table__wrapper_arg_1,
  MR_Box mercury__version_hash_table__wrapper_arg_2,
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
  MR_Box mercury__version_hash_table__wrapper_arg_4,
  MR_Box mercury__version_hash_table__wrapper_arg_5)
{
  {
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

    {
      mercury__version_hash_table____Compare____version_hash_table_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_4), ((MR_Word) mercury__version_hash_table__wrapper_arg_5));
    }
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(
  MR_Word mercury__version_hash_table__V_21_21,
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
  MR_Word mercury__version_hash_table__List_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__version_hash_table__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_Box mercury__version_hash_table__V_33_33;

              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              {
                mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__V_21_21, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__K_8, &mercury__version_hash_table__V_33_33);
              }
              if (mercury__version_hash_table__succeeded)
                {
                  mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_9, mercury__version_hash_table__V_33_33);
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_Box mercury__version_hash_table__V_27_27;

              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              {
                mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__V_21_21, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__K_16, &mercury__version_hash_table__V_27_27);
              }
              if (mercury__version_hash_table__succeeded)
                {
                  {
                    mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_17, mercury__version_hash_table__V_27_27);
                  }
                  if (mercury__version_hash_table__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;

                        mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
                      }
                      continue;
                    }
                }
            }
            break;
        }
        return mercury__version_hash_table__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_26_26,
  MR_Word mercury__version_hash_table__V_27_27,
  MR_Word mercury__version_hash_table__V_28_28,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

        if (mercury__version_hash_table__succeeded)
          {
            MR_Word mercury__version_hash_table__V_14_13;
            MR_Integer mercury__version_hash_table__V_16_15;
            MR_Integer mercury__version_hash_table__V_18_16;
            MR_Box mercury__version_hash_table__conv0_V_14_13;

            {
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
            {
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(mercury__version_hash_table__V_26_26, mercury__version_hash_table__V_27_27, mercury__version_hash_table__V_28_28, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_14_13);
            }
            if (mercury__version_hash_table__succeeded)
              {
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + mercury__version_hash_table__V_18_16);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;

                  mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
                }
                continue;
              }
          }
        else
          mercury__version_hash_table__succeeded = MR_TRUE;
        return mercury__version_hash_table__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

        if (mercury__version_hash_table__succeeded)
          {
            MR_Word mercury__version_hash_table__V_14_13;
            MR_Box mercury__version_hash_table__V_15_14;
            MR_Integer mercury__version_hash_table__V_16_15;
            MR_Integer mercury__version_hash_table__V_18_16;
            MR_Box mercury__version_hash_table__conv0_V_14_13;

            {
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
            {
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_5(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
            if (mercury__version_hash_table__succeeded)
              {
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + mercury__version_hash_table__V_18_16);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
                  MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

                  mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
                  mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
            mercury__version_hash_table__succeeded = MR_TRUE;
          }
        return mercury__version_hash_table__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

        if (mercury__version_hash_table__succeeded)
          {
            MR_Word mercury__version_hash_table__V_14_13;
            MR_Box mercury__version_hash_table__V_15_14;
            MR_Integer mercury__version_hash_table__V_16_15;
            MR_Integer mercury__version_hash_table__V_18_16;
            MR_Box mercury__version_hash_table__conv0_V_14_13;

            {
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
            {
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_4(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
            if (mercury__version_hash_table__succeeded)
              {
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + mercury__version_hash_table__V_18_16);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
                  MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

                  mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
                  mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
            mercury__version_hash_table__succeeded = MR_TRUE;
          }
        return mercury__version_hash_table__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

        if (mercury__version_hash_table__succeeded)
          {
            MR_Word mercury__version_hash_table__V_14_13;
            MR_Box mercury__version_hash_table__V_15_14;
            MR_Integer mercury__version_hash_table__V_16_15;
            MR_Integer mercury__version_hash_table__V_18_16;
            MR_Box mercury__version_hash_table__conv0_V_14_13;

            {
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
            {
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_3(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
            if (mercury__version_hash_table__succeeded)
              {
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + mercury__version_hash_table__V_18_16);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
                  MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

                  mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
                  mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
                }
                continue;
              }
          }
        else
          {
            *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
            mercury__version_hash_table__succeeded = MR_TRUE;
          }
        return mercury__version_hash_table__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

        if (mercury__version_hash_table__succeeded)
          {
            MR_Word mercury__version_hash_table__V_14_13;
            MR_Box mercury__version_hash_table__V_15_14;
            MR_Integer mercury__version_hash_table__V_16_15;
            MR_Box mercury__version_hash_table__conv0_V_14_13;

            {
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
            {
              mercury__version_hash_table__fold_p_4_p_2(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
              MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

              mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
            }
            continue;
          }
        else
          *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
      }
      break;
    }
}

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

        if (mercury__version_hash_table__succeeded)
          {
            MR_Word mercury__version_hash_table__V_14_13;
            MR_Box mercury__version_hash_table__V_15_14;
            MR_Integer mercury__version_hash_table__V_16_15;
            MR_Box mercury__version_hash_table__conv0_V_14_13;

            {
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
            {
              mercury__version_hash_table__fold_p_4_p_1(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
              MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

              mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
            }
            continue;
          }
        else
          *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
      }
      break;
    }
}

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

        if (mercury__version_hash_table__succeeded)
          {
            MR_Word mercury__version_hash_table__V_14_13;
            MR_Box mercury__version_hash_table__V_15_14;
            MR_Integer mercury__version_hash_table__V_16_15;
            MR_Box mercury__version_hash_table__conv0_V_14_13;

            {
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
            {
              mercury__version_hash_table__fold_p_4_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
              MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

              mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
            }
            continue;
          }
        else
          *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
      }
      break;
    }
}

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_22_22,
  MR_Word mercury__version_hash_table__V_23_23,
  MR_Word mercury__version_hash_table__V_24_24,
  MR_Word mercury__version_hash_table__V_25_25,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Box mercury__version_hash_table__V_12_11,
  MR_Box * mercury__version_hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

        if (mercury__version_hash_table__succeeded)
          {
            MR_Word mercury__version_hash_table__V_14_13;
            MR_Box mercury__version_hash_table__V_15_14;
            MR_Integer mercury__version_hash_table__V_16_15;
            MR_Box mercury__version_hash_table__conv0_V_14_13;

            {
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
            {
              mercury__version_hash_table__fold_f_4_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
              MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

              mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
            }
            continue;
          }
        else
          *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
      }
      break;
    }
}

static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
  MR_Word mercury__version_hash_table__V_27_27,
  MR_Word mercury__version_hash_table__V_28_28,
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
  MR_Box mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Word mercury__version_hash_table__V_12_11,
  MR_Word * mercury__version_hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

        if (mercury__version_hash_table__succeeded)
          {
            MR_Word mercury__version_hash_table__V_14_13;
            MR_Word mercury__version_hash_table__V_15_14;
            MR_Integer mercury__version_hash_table__V_16_15;
            MR_Box mercury__version_hash_table__conv0_V_14_13;

            {
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
            {
              mercury__version_hash_table__to_assoc_list_2_3_p_0(mercury__version_hash_table__V_27_27, mercury__version_hash_table__V_28_28, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
              MR_Word mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

              mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
            }
            continue;
          }
        else
          *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word mercury__version_hash_table__V_19_19,
  MR_ArrayPtr mercury__version_hash_table__V_8_8,
  MR_Integer mercury__version_hash_table__V_9_9,
  MR_Integer mercury__version_hash_table__V_10_10,
  MR_Integer mercury__version_hash_table__V_11_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_11_11 < mercury__version_hash_table__V_10_10);
        MR_Integer mercury__version_hash_table__V_6_12;

        if (mercury__version_hash_table__succeeded)
          mercury__version_hash_table__V_6_12 = mercury__version_hash_table__V_9_9;
        else
          {
            MR_Integer mercury__version_hash_table__V_12_13;
            MR_Integer mercury__version_hash_table__V_14_14;
            MR_Box mercury__version_hash_table__V_13_15;
            MR_Integer mercury__version_hash_table__HX_36;
            MR_Integer mercury__version_hash_table__V_70_70;
            MR_Integer mercury__version_hash_table__V_71_71;
            MR_Integer mercury__version_hash_table__V_72_72;
            MR_Integer mercury__version_hash_table__V_73_73;
            MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_75;

{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__V_8_8 , Array);
	Index =  mercury__version_hash_table__V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_13_15  = (MR_Box) Item;
}
            {
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__V_19_19, mercury__version_hash_table__V_13_15, &mercury__version_hash_table__HX_36);
            }
            mercury__version_hash_table__V_70_70 = (mercury__version_hash_table__V_9_9 << mercury__version_hash_table__HX_36);
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_73_73  = Bits;
}
            mercury__version_hash_table__V_72_72 = (mercury__version_hash_table__V_73_73 - mercury__version_hash_table__HX_36);
            mercury__version_hash_table__V_71_71 = (mercury__version_hash_table__V_9_9 >> mercury__version_hash_table__V_72_72);
            mercury__version_hash_table__V_12_13 = (mercury__version_hash_table__V_70_70 ^ mercury__version_hash_table__V_71_71);
            mercury__version_hash_table__V_14_14 = (mercury__version_hash_table__V_10_10 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_12_13;
              MR_Integer mercury__version_hash_table__V_10__tmp_copy_10 = mercury__version_hash_table__V_14_14;

              mercury__version_hash_table__V_10_10 = mercury__version_hash_table__V_10__tmp_copy_10;
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
            }
            continue;
          }
        return mercury__version_hash_table__V_6_12;
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
  MR_Word mercury__version_hash_table__V_13_13,
  MR_ArrayPtr mercury__version_hash_table__V_6_6,
  MR_Integer mercury__version_hash_table__V_7_7)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Integer mercury__version_hash_table__V_4_8;
    MR_Integer mercury__version_hash_table__V_8_9;
    MR_Integer mercury__version_hash_table__V_9_10;
    MR_Word mercury__version_hash_table__TypeInfo_for_T1_18;
    MR_Word mercury__version_hash_table__TypeInfo_for_T1_19;

{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__V_6_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_8_9  = Min;
}
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__V_6_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_9_10  = Max;
}
    {
      mercury__version_hash_table__V_4_8 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__version_hash_table__V_13_13, mercury__version_hash_table__V_6_6, mercury__version_hash_table__V_7_7, mercury__version_hash_table__V_8_9, mercury__version_hash_table__V_9_10);
    }
    return mercury__version_hash_table__V_4_8;
  }
}

static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    return (MR_Integer) 1200;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
  MR_Word mercury__version_hash_table__AL0_4,
  MR_Box mercury__version_hash_table__K_5,
  MR_Word * mercury__version_hash_table__AL_6)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Box mercury__version_hash_table__K0_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
        MR_Box mercury__version_hash_table__V0_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 1));
        MR_Word mercury__version_hash_table__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 2)));

        {
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K0_8, mercury__version_hash_table__K_5);
        }
        if (mercury__version_hash_table__succeeded)
          {
            *mercury__version_hash_table__AL_6 = mercury__version_hash_table__T0_10;
            mercury__version_hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__version_hash_table__T_11;

            {
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__T0_10, mercury__version_hash_table__K_5, &mercury__version_hash_table__T_11);
            }
            if (mercury__version_hash_table__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__version_hash_table__AL_6 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_8;
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_9;
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_11));
                }
                mercury__version_hash_table__succeeded = MR_TRUE;
              }
          }
      }
    else
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
        MR_Box mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 1));

        {
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K_5, mercury__version_hash_table__V_14_14);
        }
        if (mercury__version_hash_table__succeeded)
          {
            *mercury__version_hash_table__AL_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__version_hash_table__succeeded = MR_TRUE;
          }
      }
    else
      mercury__version_hash_table__succeeded = MR_FALSE;
    return mercury__version_hash_table__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
  MR_Word mercury__version_hash_table__AL0_5,
  MR_Box mercury__version_hash_table__K_6,
  MR_Box mercury__version_hash_table__V_7,
  MR_Word * mercury__version_hash_table__AL_8)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Box mercury__version_hash_table__K0_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
        MR_Box mercury__version_hash_table__V0_11 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 1));
        MR_Word mercury__version_hash_table__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 2)));

        {
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K0_10, mercury__version_hash_table__K_6);
        }
        if (mercury__version_hash_table__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *mercury__version_hash_table__AL_8 = base;
              MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
              MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V_7;
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T0_12));
            }
            mercury__version_hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__version_hash_table__T_13;

            {
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__T0_12, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__T_13);
            }
            if (mercury__version_hash_table__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__version_hash_table__AL_8 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_11;
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_13));
                }
                mercury__version_hash_table__succeeded = MR_TRUE;
              }
          }
      }
    else
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__version_hash_table__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
        MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 1));

        {
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_16_16);
        }
        if (mercury__version_hash_table__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__version_hash_table__AL_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__version_hash_table__K_6;
              MR_hl_field(MR_mktag(1), base, 1) = mercury__version_hash_table__V_7;
            }
            mercury__version_hash_table__succeeded = MR_TRUE;
          }
      }
    else
      mercury__version_hash_table__succeeded = MR_FALSE;
    return mercury__version_hash_table__succeeded;
  }
}

static void MR_CALL 
mercury__version_hash_table__foldl__ho13_4_p_in__list_0(
  MR_Word mercury__version_hash_table__HeadVar__2_2,
  MR_Integer mercury__version_hash_table__HeadVar__3_3,
  MR_Integer * mercury__version_hash_table__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        if ((mercury__version_hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__HeadVar__3_3;
        else
          {
            MR_Word mercury__version_hash_table__TypeCtorInfo_47_59 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
            MR_Word mercury__version_hash_table__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__version_hash_table__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__version_hash_table__V_15_13;
            MR_Integer mercury__version_hash_table__HUA_36;
            MR_Integer mercury__version_hash_table__V_64_64;
            MR_Integer mercury__version_hash_table__V_65_65;
            MR_Integer mercury__version_hash_table__V_66_66;
            MR_Integer mercury__version_hash_table__V_67_67;

            {
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__TypeCtorInfo_47_59, ((MR_Box) (mercury__version_hash_table__V_10_9)), &mercury__version_hash_table__HUA_36);
            }
            mercury__version_hash_table__V_64_64 = (mercury__version_hash_table__HeadVar__3_3 << mercury__version_hash_table__HUA_36);
{
#define MR_PROC_LABEL mercury__version_hash_table__foldl__ho13_4_p_in__list_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_67_67  = Bits;
}
            mercury__version_hash_table__V_66_66 = (mercury__version_hash_table__V_67_67 - mercury__version_hash_table__HUA_36);
            mercury__version_hash_table__V_65_65 = (mercury__version_hash_table__HeadVar__3_3 >> mercury__version_hash_table__V_66_66);
            mercury__version_hash_table__V_15_13 = (mercury__version_hash_table__V_64_64 ^ mercury__version_hash_table__V_65_65);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_11_10;
              MR_Integer mercury__version_hash_table__HeadVar__3__tmp_copy_3 = mercury__version_hash_table__V_15_13;

              mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__HeadVar__3__tmp_copy_3;
              mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_4,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_5,
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
  MR_Word mercury__version_hash_table__HeadVar__2_2,
  MR_Word mercury__version_hash_table__HeadVar__3_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeCtorInfo_6_6 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2;
    MR_Word mercury__version_hash_table__TypeInfo_7_7;

    {
      mercury__version_hash_table__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_4));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_5));
    }
    {
      mercury__private_builtin__builtin_compare_non_canonical_type_3_p_0(mercury__version_hash_table__TypeInfo_7_7, mercury__version_hash_table__HeadVar__1_1, ((MR_Box) (mercury__version_hash_table__HeadVar__2_2)), ((MR_Box) (mercury__version_hash_table__HeadVar__3_3)));
    }
  }
}

MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_6,
  MR_Word mercury__version_hash_table__HeadVar__1_1,
  MR_Word mercury__version_hash_table__HeadVar__2_2)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Integer mercury__version_hash_table__CastX_3 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
    MR_Integer mercury__version_hash_table__CastY_4 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

    mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_3 == mercury__version_hash_table__CastY_4);
    if (mercury__version_hash_table__succeeded)
      mercury__version_hash_table__succeeded = MR_TRUE;
    else
      {
        mercury__version_hash_table__succeeded = mercury__version_hash_table__equal_2_p_0(mercury__version_hash_table__TypeInfo_for_K_5, mercury__version_hash_table__TypeInfo_for_V_6, mercury__version_hash_table__HeadVar__1_1, mercury__version_hash_table__HeadVar__2_2);
      }
    return mercury__version_hash_table__succeeded;
  }
}

void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_39,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_40,
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
  MR_Word mercury__version_hash_table__HeadVar__2_2,
  MR_Word mercury__version_hash_table__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;
        MR_Integer mercury__version_hash_table__CastX_37 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;
        MR_Integer mercury__version_hash_table__CastY_38 = (MR_Integer) mercury__version_hash_table__HeadVar__3_3;

        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_37 == mercury__version_hash_table__CastY_38);
        if (mercury__version_hash_table__succeeded)
          *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mercury__version_hash_table__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
                MR_Box mercury__version_hash_table__V_47_47 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
                      MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
                      MR_Word mercury__version_hash_table__V_15_15;

                      {
                        mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_15_15, mercury__version_hash_table__V_47_47, mercury__version_hash_table__V_13_13);
                      }
                      mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_15_15 == (MR_Integer) 0);
                      mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
                      if (mercury__version_hash_table__succeeded)
                        *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_15_15;
                      else
                        {
                          mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, mercury__version_hash_table__HeadVar__1_1, mercury__version_hash_table__V_46_46, mercury__version_hash_table__V_14_14);
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
                MR_Box mercury__version_hash_table__V_44_44 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
                MR_Box mercury__version_hash_table__V_45_45 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Box mercury__version_hash_table__V_32_32 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
                      MR_Box mercury__version_hash_table__V_33_33 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
                      MR_Word mercury__version_hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 2)));
                      MR_Word mercury__version_hash_table__V_35_35;

                      {
                        mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_35_35, mercury__version_hash_table__V_45_45, mercury__version_hash_table__V_32_32);
                      }
                      mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_35_35 == (MR_Integer) 0);
                      mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
                      if (mercury__version_hash_table__succeeded)
                        *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_35_35;
                      else
                        {
                          MR_Word mercury__version_hash_table__V_36_36;

                          {
                            mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, &mercury__version_hash_table__V_36_36, mercury__version_hash_table__V_44_44, mercury__version_hash_table__V_33_33);
                          }
                          mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_36_36 == (MR_Integer) 0);
                          mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
                          if (mercury__version_hash_table__succeeded)
                            *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_36_36;
                          else
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_43_43;
                                MR_Word mercury__version_hash_table__HeadVar__3__tmp_copy_3 = mercury__version_hash_table__V_34_34;

                                mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__HeadVar__3__tmp_copy_3;
                                mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
                              }
                              continue;
                            }
                        }
                    }
                    break;
                }
              }
              break;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_17,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_18,
  MR_Word mercury__version_hash_table__HeadVar__1_1,
  MR_Word mercury__version_hash_table__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;
        MR_Integer mercury__version_hash_table__CastX_15 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
        MR_Integer mercury__version_hash_table__CastY_16 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_15 == mercury__version_hash_table__CastY_16);
        if (mercury__version_hash_table__succeeded)
          mercury__version_hash_table__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) mercury__version_hash_table__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__version_hash_table__CastX_3 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
                MR_Integer mercury__version_hash_table__CastY_4 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

                mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastY_4 == mercury__version_hash_table__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mercury__version_hash_table__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
                MR_Box mercury__version_hash_table__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mercury__version_hash_table__V_7_7;
                MR_Box mercury__version_hash_table__V_8_8;

                mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__version_hash_table__succeeded)
                  {
                    mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
                    mercury__version_hash_table__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
                    {
                      mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_5_5, mercury__version_hash_table__V_7_7);
                    }
                    if (mercury__version_hash_table__succeeded)
                      {
                        mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_6_6, mercury__version_hash_table__V_8_8);
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
                MR_Box mercury__version_hash_table__V_10_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
                MR_Word mercury__version_hash_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 2)));
                MR_Box mercury__version_hash_table__V_12_12;
                MR_Box mercury__version_hash_table__V_13_13;
                MR_Word mercury__version_hash_table__V_14_14;

                mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (mercury__version_hash_table__succeeded)
                  {
                    mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
                    mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
                    mercury__version_hash_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_9_9, mercury__version_hash_table__V_12_12);
                    }
                    if (mercury__version_hash_table__succeeded)
                      {
                        {
                          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_10_10, mercury__version_hash_table__V_13_13);
                        }
                        if (mercury__version_hash_table__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__version_hash_table__HeadVar__1__tmp_copy_1 = mercury__version_hash_table__V_11_11;
                              MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_14_14;

                              mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
                              mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__HeadVar__1__tmp_copy_1;
                            }
                            continue;
                          }
                      }
                  }
              }
              break;
          }
        return mercury__version_hash_table__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
  MR_Word mercury__version_hash_table__HeadVar__2_2,
  MR_Word mercury__version_hash_table__HeadVar__3_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__Cast_HeadVar1_4 = mercury__version_hash_table__HeadVar__2_2;
    MR_Word mercury__version_hash_table__Cast_HeadVar2_5 = mercury__version_hash_table__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__version_hash_table__HeadVar__1_1, (MR_Word) mercury__version_hash_table__Cast_HeadVar1_4, (MR_Word) mercury__version_hash_table__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
  MR_Word mercury__version_hash_table__HeadVar__1_1,
  MR_Word mercury__version_hash_table__HeadVar__2_2)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__Cast_HeadVar1_3 = mercury__version_hash_table__HeadVar__1_1;
    MR_Word mercury__version_hash_table__Cast_HeadVar2_4 = mercury__version_hash_table__HeadVar__2_2;

    {
      mercury__version_hash_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__version_hash_table__Cast_HeadVar1_3, (MR_Word) mercury__version_hash_table__Cast_HeadVar2_4);
    }
    return mercury__version_hash_table__succeeded;
  }
}

void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
  MR_Box mercury__version_hash_table__HeadVar__2_2,
  MR_Box mercury__version_hash_table__HeadVar__3_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeCtorInfo_8_8 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_9_9;
    MR_Box mercury__version_hash_table__Cast_HeadVar1_4 = mercury__version_hash_table__HeadVar__2_2;
    MR_Box mercury__version_hash_table__Cast_HeadVar2_5 = mercury__version_hash_table__HeadVar__3_3;

    {
      mercury__version_hash_table__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_6));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_7));
    }
    {
      mercury__version_array____Compare____version_array_1_0(mercury__version_hash_table__TypeInfo_9_9, mercury__version_hash_table__HeadVar__1_1, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_4, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_6,
  MR_Box mercury__version_hash_table__HeadVar__1_1,
  MR_Box mercury__version_hash_table__HeadVar__2_2)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeCtorInfo_7_7 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_8_8;
    MR_Box mercury__version_hash_table__Cast_HeadVar1_3 = mercury__version_hash_table__HeadVar__1_1;
    MR_Box mercury__version_hash_table__Cast_HeadVar2_4 = mercury__version_hash_table__HeadVar__2_2;

    {
      mercury__version_hash_table__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_5));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_6));
    }
    {
      mercury__version_hash_table__succeeded = mercury__version_array____Unify____version_array_1_0(mercury__version_hash_table__TypeInfo_8_8, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_3, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_4);
    }
    return mercury__version_hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_5(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__List_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
              mercury__version_hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
              if (mercury__version_hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__version_hash_table__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_4(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__List_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
              mercury__version_hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
              if (mercury__version_hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__version_hash_table__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_3(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__List_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
              mercury__version_hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
              if (mercury__version_hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__version_hash_table__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__version_hash_table__fold_p_4_p_2(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__List_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__version_hash_table__fold_p_4_p_1(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__List_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__version_hash_table__fold_p_4_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__List_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__version_hash_table__fold_f_4_p_1(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_17,
  MR_Word mercury__version_hash_table__F_5,
  MR_Word mercury__version_hash_table__List_6,
  MR_Box mercury__version_hash_table__A0_7,
  MR_Box * mercury__version_hash_table__A_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

              {
                *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__version_hash_table__A1_12;
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
                MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

                mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__version_hash_table__fold_f_4_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_17,
  MR_Word mercury__version_hash_table__F_5,
  MR_Word mercury__version_hash_table__List_6,
  MR_Box mercury__version_hash_table__A0_7,
  MR_Box * mercury__version_hash_table__A_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

              {
                *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__version_hash_table__A1_12;
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
              MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

              {
                mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
                MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

                mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
  MR_Word mercury__version_hash_table__AL_6,
  MR_Word mercury__version_hash_table__HashPred_7,
  MR_Integer mercury__version_hash_table__NumBuckets_8,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__version_hash_table__AL_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__version_hash_table__TypeCtorInfo_23_66;
              MR_Word mercury__version_hash_table__TypeInfo_24_67;
              MR_Box mercury__version_hash_table__K_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_11 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 1));
              MR_Integer mercury__version_hash_table__H_58;
              MR_Word mercury__version_hash_table__AL0_59;
              MR_Word mercury__version_hash_table__AL_60;
              MR_Integer mercury__version_hash_table__Hash_72;
              MR_Integer mercury__version_hash_table__V_73_73;
              void MR_CALL (* mercury__version_hash_table__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
              MR_Box mercury__version_hash_table__conv5_Hash_72;
              MR_Box mercury__version_hash_table__conv6_AL0_59;
              MR_Box mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;

              {
                mercury__version_hash_table__func_4(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_10, &mercury__version_hash_table__conv5_Hash_72);
              }
              mercury__version_hash_table__Hash_72 = ((MR_Integer) mercury__version_hash_table__conv5_Hash_72);
              mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
              mercury__version_hash_table__H_58 = (mercury__version_hash_table__Hash_72 & mercury__version_hash_table__V_73_73);
              mercury__version_hash_table__TypeCtorInfo_23_66 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
              {
                mercury__version_hash_table__TypeInfo_24_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_66));
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
              }
              {
                mercury__version_hash_table__conv6_AL0_59 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_67, (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, mercury__version_hash_table__H_58);
              }
              mercury__version_hash_table__AL0_59 = ((MR_Word) mercury__version_hash_table__conv6_AL0_59);
              switch (MR_tag((MR_Word) mercury__version_hash_table__AL0_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__version_hash_table__AL_60 = mercury__version_hash_table__AL_6;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
                  }
                  break;
              }
              {
                mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_67, mercury__version_hash_table__H_58, ((MR_Box) (mercury__version_hash_table__AL_60)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14);
              }
              *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = (MR_Box) mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__version_hash_table__TypeCtorInfo_23_36;
              MR_Word mercury__version_hash_table__TypeInfo_24_37;
              MR_Word mercury__version_hash_table__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 2)));
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;
              MR_Box mercury__version_hash_table__K_18 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_19 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 1));
              MR_Integer mercury__version_hash_table__H_28;
              MR_Word mercury__version_hash_table__AL0_29;
              MR_Word mercury__version_hash_table__AL_30;
              MR_Integer mercury__version_hash_table__Hash_42;
              MR_Integer mercury__version_hash_table__V_43_43;
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
              MR_Box mercury__version_hash_table__conv1_Hash_42;
              MR_Box mercury__version_hash_table__conv2_AL0_29;
              MR_Box mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;

              {
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_18, &mercury__version_hash_table__conv1_Hash_42);
              }
              mercury__version_hash_table__Hash_42 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_42);
              mercury__version_hash_table__V_43_43 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
              mercury__version_hash_table__H_28 = (mercury__version_hash_table__Hash_42 & mercury__version_hash_table__V_43_43);
              mercury__version_hash_table__TypeCtorInfo_23_36 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
              {
                mercury__version_hash_table__TypeInfo_24_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_36));
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
              }
              {
                mercury__version_hash_table__conv2_AL0_29 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_37, (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, mercury__version_hash_table__H_28);
              }
              mercury__version_hash_table__AL0_29 = ((MR_Word) mercury__version_hash_table__conv2_AL0_29);
              switch (MR_tag((MR_Word) mercury__version_hash_table__AL0_29)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
                    MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
                  }
                  break;
              }
              {
                mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_37, mercury__version_hash_table__H_28, ((MR_Box) (mercury__version_hash_table__AL_30)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15);
              }
              mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15 = (MR_Box) mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;
              /* direct tailcall eliminated */
              {
                MR_Word mercury__version_hash_table__AL__tmp_copy_6 = mercury__version_hash_table__T_12;
                MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;

                mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
                mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL__tmp_copy_6;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
  MR_Integer mercury__version_hash_table__I_7,
  MR_Box mercury__version_hash_table__OldBuckets_8,
  MR_Word mercury__version_hash_table__HashPred_9,
  MR_Integer mercury__version_hash_table__NumBuckets_10,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;
        MR_Integer mercury__version_hash_table__V_15_15;
        MR_Word mercury__version_hash_table__TypeInfo_23_29;

{
#define MR_PROC_LABEL mercury__version_hash_table__reinsert_bindings_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__OldBuckets_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_15_15  = N;
}
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__I_7 >= mercury__version_hash_table__V_15_15);
        if (mercury__version_hash_table__succeeded)
          *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
        else
          {
            MR_Word mercury__version_hash_table__TypeCtorInfo_24_24 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
            MR_Word mercury__version_hash_table__TypeInfo_25_25;
            MR_Word mercury__version_hash_table__AL_12;
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;
            MR_Integer mercury__version_hash_table__V_17_17;
            MR_Box mercury__version_hash_table__conv0_AL_12;

            {
              mercury__version_hash_table__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_24_24));
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
            }
            {
              mercury__version_hash_table__conv0_AL_12 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_25_25, (MR_Box) mercury__version_hash_table__OldBuckets_8, mercury__version_hash_table__I_7);
            }
            mercury__version_hash_table__AL_12 = ((MR_Word) mercury__version_hash_table__conv0_AL_12);
            {
              mercury__version_hash_table__reinsert_alist_5_p_0(mercury__version_hash_table__TypeInfo_for_K_20, mercury__version_hash_table__TypeInfo_for_V_21, mercury__version_hash_table__AL_12, mercury__version_hash_table__HashPred_9, mercury__version_hash_table__NumBuckets_10, mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16);
            }
            mercury__version_hash_table__V_17_17 = (mercury__version_hash_table__I_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__version_hash_table__I__tmp_copy_7 = mercury__version_hash_table__V_17_17;
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;

              mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
              mercury__version_hash_table__I_7 = mercury__version_hash_table__I__tmp_copy_7;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
  MR_Integer mercury__version_hash_table__NumOccupants_6,
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
  MR_Word mercury__version_hash_table__HashPred0_8,
  MR_Box mercury__version_hash_table__Buckets0_9)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HT_10;
    MR_Word mercury__version_hash_table__TypeCtorInfo_23_23 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_24_24;
    MR_Integer mercury__version_hash_table__NumBuckets0_11;
    MR_Integer mercury__version_hash_table__NumBuckets_12;
    MR_Integer mercury__version_hash_table__MaxOccupants_13;
    MR_Word mercury__version_hash_table__HashPred_14;
    MR_Box mercury__version_hash_table__Buckets1_15;
    MR_Box mercury__version_hash_table__Buckets_16;
    MR_Word mercury__version_hash_table__V_19_19;
    MR_Word mercury__version_hash_table__TypeInfo_24_25;
    MR_Word mercury__version_hash_table__TypeInfo_for_K_26;
    MR_Box mercury__version_hash_table__conv0_Buckets1_15;

    {
      mercury__version_hash_table__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_23));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_21));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_22));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets0_9 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__NumBuckets0_11  = N;
}
    mercury__version_hash_table__NumBuckets_12 = (mercury__version_hash_table__NumBuckets0_11 + mercury__version_hash_table__NumBuckets0_11);
    mercury__version_hash_table__MaxOccupants_13 = (mercury__version_hash_table__MaxOccupants0_7 + mercury__version_hash_table__MaxOccupants0_7);
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_8 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_14  = HashPred;
}
    mercury__version_hash_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__version_hash_table__conv0_Buckets1_15 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_24_24, mercury__version_hash_table__NumBuckets_12, ((MR_Box) (mercury__version_hash_table__V_19_19)));
    }
    mercury__version_hash_table__Buckets1_15 = (MR_Box) mercury__version_hash_table__conv0_Buckets1_15;
    {
      mercury__version_hash_table__reinsert_bindings_6_p_0(mercury__version_hash_table__TypeInfo_for_K_21, mercury__version_hash_table__TypeInfo_for_V_22, (MR_Integer) 0, mercury__version_hash_table__Buckets0_9, mercury__version_hash_table__HashPred_14, mercury__version_hash_table__NumBuckets_12, mercury__version_hash_table__Buckets1_15, &mercury__version_hash_table__Buckets_16);
    }
    {
      mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_6));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_13));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_14));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_16));
    }
    return mercury__version_hash_table__HT_10;
  }
}

void MR_CALL 
mercury__version_hash_table__from_assoc_list_2_3_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
  MR_Word mercury__version_hash_table__HeadVar__1_1,
  MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0_2,
  MR_Word * mercury__version_hash_table__STATE_VARIABLE_HT_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        if ((mercury__version_hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__version_hash_table__STATE_VARIABLE_HT_3 = mercury__version_hash_table__STATE_VARIABLE_HT_0_2;
        else
          {
            MR_Box mercury__version_hash_table__K_7;
            MR_Box mercury__version_hash_table__V_8;
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__version_hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

            mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 0));
            mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 1));
            {
              mercury__version_hash_table__STATE_VARIABLE_HT_14_14 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__STATE_VARIABLE_HT_0_2, mercury__version_hash_table__K_7, mercury__version_hash_table__V_8);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__version_hash_table__HeadVar__1__tmp_copy_1 = mercury__version_hash_table__T_9;
              MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2 = mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

              mercury__version_hash_table__STATE_VARIABLE_HT_0_2 = mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2;
              mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__version_hash_table__to_assoc_list_2_3_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
  MR_Word mercury__version_hash_table__X_4,
  MR_Word mercury__version_hash_table__AL0_5,
  MR_Word * mercury__version_hash_table__AL_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__version_hash_table__X_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL0_5;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 1));
              MR_Word mercury__version_hash_table__V_12_12;

              {
                mercury__version_hash_table__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 0) = mercury__version_hash_table__K_7;
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 1) = mercury__version_hash_table__V_8;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__version_hash_table__AL_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__version_hash_table__V_12_12));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 2)));
              MR_Word mercury__version_hash_table__AL1_10;
              MR_Word mercury__version_hash_table__V_11_11;
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 0));
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 1));

              {
                mercury__version_hash_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 0) = mercury__version_hash_table__K_13;
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 1) = mercury__version_hash_table__V_14;
              }
              {
                mercury__version_hash_table__AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 0) = ((MR_Box) (mercury__version_hash_table__V_11_11));
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__version_hash_table__X__tmp_copy_4 = mercury__version_hash_table__T_9;
                MR_Word mercury__version_hash_table__AL0__tmp_copy_5 = mercury__version_hash_table__AL1_10;

                mercury__version_hash_table__AL0_5 = mercury__version_hash_table__AL0__tmp_copy_5;
                mercury__version_hash_table__X_4 = mercury__version_hash_table__X__tmp_copy_4;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__version_hash_table__alist_search_3_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
  MR_Word mercury__version_hash_table__AL_4,
  MR_Box mercury__version_hash_table__K_5,
  MR_Box * mercury__version_hash_table__V_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;

        if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Box mercury__version_hash_table__HK_7 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 0));
            MR_Box mercury__version_hash_table__HV_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 1));
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 2)));

            {
              mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__HK_7, mercury__version_hash_table__K_5);
            }
            if (mercury__version_hash_table__succeeded)
              {
                *mercury__version_hash_table__V_6 = mercury__version_hash_table__HV_8;
                mercury__version_hash_table__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__version_hash_table__AL__tmp_copy_4 = mercury__version_hash_table__T_9;

                  mercury__version_hash_table__AL_4 = mercury__version_hash_table__AL__tmp_copy_4;
                }
                continue;
              }
          }
        else
        if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Box mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 0));

            *mercury__version_hash_table__V_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 1));
            {
              mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__K_5, mercury__version_hash_table__V_12_12);
            }
          }
        else
          mercury__version_hash_table__succeeded = MR_FALSE;
        return mercury__version_hash_table__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_3,
  MR_Word mercury__version_hash_table__HeadVar__1_1,
  MR_Word * mercury__version_hash_table__HeadVar__2_2)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeInfo_for_K_4;

{
#define MR_PROC_LABEL mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HeadVar__1_1 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__HeadVar__2_2  = HashPred;
}
  }
}

void MR_CALL 
mercury__version_hash_table__find_slot_2_4_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
  MR_Word mercury__version_hash_table__HashPred_5,
  MR_Box mercury__version_hash_table__K_6,
  MR_Integer mercury__version_hash_table__NumBuckets_7,
  MR_Integer * mercury__version_hash_table__H_8)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Integer mercury__version_hash_table__Hash_9;
    MR_Integer mercury__version_hash_table__V_10_10;
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_5, (MR_Integer) 1)));
    MR_Box mercury__version_hash_table__conv1_Hash_9;

    {
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_5), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_9);
    }
    mercury__version_hash_table__Hash_9 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_9);
    mercury__version_hash_table__V_10_10 = (mercury__version_hash_table__NumBuckets_7 - (MR_Integer) 1);
    *mercury__version_hash_table__H_8 = (mercury__version_hash_table__Hash_9 & mercury__version_hash_table__V_10_10);
  }
}

MR_Integer MR_CALL 
mercury__version_hash_table__find_slot_2_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
  MR_Word mercury__version_hash_table__HT_4,
  MR_Box mercury__version_hash_table__K_5)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Integer mercury__version_hash_table__H_6;
    MR_Word mercury__version_hash_table__HashPred0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__HashPred_8;
    MR_Integer mercury__version_hash_table__V_9_9;
    MR_Integer mercury__version_hash_table__Hash_27;
    MR_Integer mercury__version_hash_table__V_28_28;
    MR_Integer mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
    MR_Box mercury__version_hash_table__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
    MR_Word mercury__version_hash_table__TypeInfo_for_K_30;
    MR_Box mercury__version_hash_table__V_17_17;
    MR_Integer mercury__version_hash_table__V_18_18;
    MR_Integer mercury__version_hash_table__V_19_19;
    MR_Word mercury__version_hash_table__V_20_20;
    MR_Word mercury__version_hash_table__TypeInfo_12_31;
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__version_hash_table__conv1_Hash_27;

{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_7 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_8  = HashPred;
}
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
    mercury__version_hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
    mercury__version_hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
    mercury__version_hash_table__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_17_17 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_9_9  = N;
}
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_8, (MR_Integer) 1)));
    {
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_8), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_27);
    }
    mercury__version_hash_table__Hash_27 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_27);
    mercury__version_hash_table__V_28_28 = (mercury__version_hash_table__V_9_9 - (MR_Integer) 1);
    mercury__version_hash_table__H_6 = (mercury__version_hash_table__Hash_27 & mercury__version_hash_table__V_28_28);
    return mercury__version_hash_table__H_6;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__init_2_4_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_29,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_30,
  MR_Word mercury__version_hash_table__HashPred_6,
  MR_Integer mercury__version_hash_table__N_7,
  MR_Float mercury__version_hash_table__MaxOccupancy_8,
  MR_Word mercury__version_hash_table__NeedSafety_9)
{
  {
    MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 <= (MR_Integer) 0);
    MR_Word mercury__version_hash_table__HT_10;

    if (mercury__version_hash_table__succeeded)
      {
        MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
        MR_Word mercury__version_hash_table__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new_hash_table: N =< 0"));

        {
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_15_15)));
        }
      }
    else
      {
        MR_Integer mercury__version_hash_table__V_17_17;

{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_17_17  = Bits;
}
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 >= mercury__version_hash_table__V_17_17);
        if (mercury__version_hash_table__succeeded)
          {
            MR_Word mercury__version_hash_table__TypeCtorInfo_32_32 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
            MR_Word mercury__version_hash_table__V_18_18 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: N >= int.bits_per_int"));

            {
              mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_32_32, ((MR_Box) (mercury__version_hash_table__V_18_18)));
            }
          }
        else
          {
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__MaxOccupancy_8 <= ((MR_Float) 0.0000000000000000));
            if (mercury__version_hash_table__succeeded)
              {
                MR_Word mercury__version_hash_table__TypeCtorInfo_33_33 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
                MR_Word mercury__version_hash_table__V_21_21 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: MaxOccupancy =< 0.0"));

                {
                  mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_33_33, ((MR_Box) (mercury__version_hash_table__V_21_21)));
                }
              }
            else
              {
                MR_Integer mercury__version_hash_table__NumBuckets_11;
                MR_Integer mercury__version_hash_table__MaxOccupants_12;
                MR_Box mercury__version_hash_table__Buckets_13;
                MR_Float mercury__version_hash_table__V_24_24;
                MR_Float mercury__version_hash_table__V_25_25;

                {
                  mercury__version_hash_table__NumBuckets_11 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, mercury__version_hash_table__N_7);
                }
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__version_hash_table__NumBuckets_11 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_25_25  = FloatVal;
}
                mercury__version_hash_table__V_24_24 = (mercury__version_hash_table__V_25_25 * mercury__version_hash_table__MaxOccupancy_8);
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Float X;
	MR_Integer Ceil;

	X =  mercury__version_hash_table__V_24_24 ;
		{

    Ceil = (MR_Integer) ceil(X);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__MaxOccupants_12  = Ceil;
}
                switch (mercury__version_hash_table__NeedSafety_9) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__version_hash_table__TypeCtorInfo_36_36 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
                      MR_Word mercury__version_hash_table__TypeInfo_37_37;
                      MR_Word mercury__version_hash_table__V_26_26;
                      MR_Box mercury__version_hash_table__conv0_Buckets_13;

                      {
                        mercury__version_hash_table__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_36_36));
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_29));
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_30));
                      }
                      mercury__version_hash_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__version_hash_table__conv0_Buckets_13 = mercury__version_array__unsafe_init_2_f_0(mercury__version_hash_table__TypeInfo_37_37, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_26_26)));
                      }
                      mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv0_Buckets_13;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word mercury__version_hash_table__TypeCtorInfo_34_34 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
                      MR_Word mercury__version_hash_table__TypeInfo_35_35;
                      MR_Word mercury__version_hash_table__V_27_27;
                      MR_Box mercury__version_hash_table__conv1_Buckets_13;

                      {
                        mercury__version_hash_table__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_34_34));
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_29));
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_30));
                      }
                      mercury__version_hash_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__version_hash_table__conv1_Buckets_13 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_35_35, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_27_27)));
                      }
                      mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv1_Buckets_13;
                    }
                    break;
                }
                {
                  mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_12));
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_6));
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_13));
                }
              }
          }
      }
    return mercury__version_hash_table__HT_10;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__equal_2_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
  MR_Word mercury__version_hash_table__A_3,
  MR_Word mercury__version_hash_table__B_4)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeCtorInfo_12_12 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2;
    MR_Word mercury__version_hash_table__TypeInfo_13_13;

    {
      mercury__version_hash_table__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
    }
    mercury__version_hash_table__succeeded = (((MR_Word) mercury__version_hash_table__A_3) == ((MR_Word) mercury__version_hash_table__B_4));
    if (mercury__version_hash_table__succeeded)
      mercury__version_hash_table__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__version_hash_table__TypeCtorInfo_22_44;
        MR_Word mercury__version_hash_table__TypeInfo_23_45;
        MR_Integer mercury__version_hash_table__NumA_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 0)));
        MR_Integer mercury__version_hash_table__NumB_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 0)));
        MR_Box mercury__version_hash_table__Buckets_34;
        MR_Integer mercury__version_hash_table__V_10_50;
        MR_Integer mercury__version_hash_table__V_11_51;
        MR_Integer mercury__version_hash_table__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 1)));
        MR_Word mercury__version_hash_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 2)));
        MR_Box mercury__version_hash_table__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 3)));
        MR_Integer mercury__version_hash_table__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 1)));
        MR_Word mercury__version_hash_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 2)));
        MR_Box mercury__version_hash_table__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 3)));
        MR_Integer mercury__version_hash_table__V_37_37;
        MR_Integer mercury__version_hash_table__V_38_38;
        MR_Word mercury__version_hash_table__V_39_39;
        MR_Word mercury__version_hash_table__TypeInfo_23_55;

        mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumA_5 == mercury__version_hash_table__NumB_6);
        if (mercury__version_hash_table__succeeded)
          {
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
            mercury__version_hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 0)));
            mercury__version_hash_table__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 1)));
            mercury__version_hash_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 2)));
            mercury__version_hash_table__Buckets_34 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 3)));
            mercury__version_hash_table__TypeCtorInfo_22_44 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
            mercury__version_hash_table__V_10_50 = (MR_Integer) 0;
            {
              mercury__version_hash_table__TypeInfo_23_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_45, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_44));
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_45, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_45, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
            }
{
#define MR_PROC_LABEL mercury__version_hash_table__equal_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_34 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_51  = N;
}
            {
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__TypeInfo_for_V_11, mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__TypeInfo_for_V_11, mercury__version_hash_table__B_4, mercury__version_hash_table__TypeInfo_23_45, mercury__version_hash_table__Buckets_34, mercury__version_hash_table__V_10_50, mercury__version_hash_table__V_11_51);
            }
          }
      }
    return mercury__version_hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_5(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__HT_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__version_hash_table__V_11_29;
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

    {
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
}
    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
    return mercury__version_hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_4(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__HT_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__version_hash_table__V_11_29;
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

    {
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
}
    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
    return mercury__version_hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_3(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__HT_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__version_hash_table__V_11_29;
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

    {
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
}
    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
    return mercury__version_hash_table__succeeded;
  }
}

void MR_CALL 
mercury__version_hash_table__fold_4_p_2(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__HT_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__version_hash_table__V_11_29;
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

    {
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
}
    {
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
  }
}

void MR_CALL 
mercury__version_hash_table__fold_4_p_1(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__HT_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__version_hash_table__V_11_29;
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

    {
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
}
    {
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
  }
}

void MR_CALL 
mercury__version_hash_table__fold_4_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
  MR_Word mercury__version_hash_table__P_5,
  MR_Word mercury__version_hash_table__HT_6,
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__version_hash_table__V_11_29;
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

    {
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
}
    {
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
  }
}

MR_Box MR_CALL 
mercury__version_hash_table__fold_3_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_15,
  MR_Word mercury__version_hash_table__TypeInfo_for_T_16,
  MR_Word mercury__version_hash_table__F_5,
  MR_Word mercury__version_hash_table__HT_6,
  MR_Box mercury__version_hash_table__X0_7)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Box mercury__version_hash_table__X_8;
    MR_Word mercury__version_hash_table__TypeCtorInfo_20_20 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_21_21;
    MR_Box mercury__version_hash_table__Buckets_9 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__version_hash_table__V_11_27;
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__version_hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__TypeInfo_21_29;

    {
      mercury__version_hash_table__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_14));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_15));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_9 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_27  = N;
}
    {
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__TypeInfo_for_V_15, mercury__version_hash_table__TypeInfo_for_T_16, mercury__version_hash_table__F_5, mercury__version_hash_table__TypeInfo_21_21, mercury__version_hash_table__Buckets_9, (MR_Integer) 0, mercury__version_hash_table__V_11_27, mercury__version_hash_table__X0_7, &mercury__version_hash_table__X_8);
    }
    return mercury__version_hash_table__X_8;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__from_assoc_list_2_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
  MR_Word mercury__version_hash_table__HashPred_4,
  MR_Word mercury__version_hash_table__AList_5)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HT_6;
    MR_Word mercury__version_hash_table__V_7_7;

    {
      mercury__version_hash_table__V_7_7 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HashPred_4, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
    {
      mercury__version_hash_table__from_assoc_list_2_3_p_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__AList_5, mercury__version_hash_table__V_7_7, &mercury__version_hash_table__HT_6);
    }
    return mercury__version_hash_table__HT_6;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__from_assoc_list_4_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_13,
  MR_Word mercury__version_hash_table__HashPred_6,
  MR_Integer mercury__version_hash_table__N_7,
  MR_Float mercury__version_hash_table__MaxOccupants_8,
  MR_Word mercury__version_hash_table__AList_9)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HT_10;
    MR_Word mercury__version_hash_table__V_11_11;

    {
      mercury__version_hash_table__V_11_11 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__TypeInfo_for_V_13, mercury__version_hash_table__HashPred_6, mercury__version_hash_table__N_7, mercury__version_hash_table__MaxOccupants_8, (MR_Integer) 1);
    }
    {
      mercury__version_hash_table__from_assoc_list_2_3_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__TypeInfo_for_V_13, mercury__version_hash_table__AList_9, mercury__version_hash_table__V_11_11, &mercury__version_hash_table__HT_10);
    }
    return mercury__version_hash_table__HT_10;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__to_assoc_list_1_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_11,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_12,
  MR_Word mercury__version_hash_table__HT_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__AL_4;
    MR_Word mercury__version_hash_table__TypeCtorInfo_16_16 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_17_17;
    MR_Box mercury__version_hash_table__Buckets_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
    MR_Word mercury__version_hash_table__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__version_hash_table__V_11_27;
    MR_Integer mercury__version_hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
    MR_Word mercury__version_hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__TypeInfo_17_31;

    {
      mercury__version_hash_table__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_11));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_12));
    }
{
#define MR_PROC_LABEL mercury__version_hash_table__to_assoc_list_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_5 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_27  = N;
}
    {
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_11, mercury__version_hash_table__TypeInfo_for_V_12, mercury__version_hash_table__TypeInfo_17_17, mercury__version_hash_table__Buckets_5, (MR_Integer) 0, mercury__version_hash_table__V_11_27, mercury__version_hash_table__V_7_7, &mercury__version_hash_table__AL_4);
    }
    return mercury__version_hash_table__AL_4;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__search_3_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
  MR_Word mercury__version_hash_table__HT_4,
  MR_Box mercury__version_hash_table__K_5,
  MR_Box * mercury__version_hash_table__HeadVar__3_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, mercury__version_hash_table__HeadVar__3_3);
    }
    return mercury__version_hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__version_hash_table__search_2_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
  MR_Word mercury__version_hash_table__HT_4,
  MR_Box mercury__version_hash_table__K_5,
  MR_Box * mercury__version_hash_table__V_6)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__TypeCtorInfo_15_15;
    MR_Word mercury__version_hash_table__TypeInfo_16_16;
    MR_Integer mercury__version_hash_table__H_7;
    MR_Box mercury__version_hash_table__Buckets_8;
    MR_Word mercury__version_hash_table__AL_9;
    MR_Word mercury__version_hash_table__HashPred0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__HashPred_21;
    MR_Integer mercury__version_hash_table__V_22_22;
    MR_Integer mercury__version_hash_table__Hash_38;
    MR_Integer mercury__version_hash_table__V_39_39;
    MR_Integer mercury__version_hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
    MR_Box mercury__version_hash_table__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
    MR_Word mercury__version_hash_table__TypeInfo_for_K_44;
    MR_Box mercury__version_hash_table__V_28_28;
    MR_Integer mercury__version_hash_table__V_29_29;
    MR_Integer mercury__version_hash_table__V_30_30;
    MR_Word mercury__version_hash_table__V_31_31;
    MR_Word mercury__version_hash_table__TypeInfo_12_45;
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__version_hash_table__conv1_Hash_38;
    MR_Integer mercury__version_hash_table__V_10_10;
    MR_Integer mercury__version_hash_table__V_11_11;
    MR_Word mercury__version_hash_table__V_12_12;
    MR_Box mercury__version_hash_table__conv2_AL_9;

{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_20 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_21  = HashPred;
}
    mercury__version_hash_table__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
    mercury__version_hash_table__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
    mercury__version_hash_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
    mercury__version_hash_table__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_28_28 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_22_22  = N;
}
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_21, (MR_Integer) 1)));
    {
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_21), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_38);
    }
    mercury__version_hash_table__Hash_38 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_38);
    mercury__version_hash_table__V_39_39 = (mercury__version_hash_table__V_22_22 - (MR_Integer) 1);
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_38 & mercury__version_hash_table__V_39_39);
    mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
    mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
    mercury__version_hash_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
    mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
    mercury__version_hash_table__TypeCtorInfo_15_15 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    {
      mercury__version_hash_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_13));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_14));
    }
    {
      mercury__version_hash_table__conv2_AL_9 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_16_16, (MR_Box) mercury__version_hash_table__Buckets_8, mercury__version_hash_table__H_7);
    }
    mercury__version_hash_table__AL_9 = ((MR_Word) mercury__version_hash_table__conv2_AL_9);
    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_13, mercury__version_hash_table__TypeInfo_for_V_14, mercury__version_hash_table__AL_9, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
    return mercury__version_hash_table__succeeded;
  }
}

MR_Box MR_CALL 
mercury__version_hash_table__elem_2_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
  MR_Box mercury__version_hash_table__K_4,
  MR_Word mercury__version_hash_table__HT_5)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Box mercury__version_hash_table__HeadVar__3_3;
    MR_Box mercury__version_hash_table__V_10;

    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4, &mercury__version_hash_table__V_10);
    }
    if (mercury__version_hash_table__succeeded)
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_10;
    else
      {
        {
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_7, (MR_String) "version_hash_table.lookup: key not found");
        }
      }
    return mercury__version_hash_table__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__version_hash_table__lookup_2_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
  MR_Word mercury__version_hash_table__HT_4,
  MR_Box mercury__version_hash_table__K_5)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Box mercury__version_hash_table__HeadVar__3_3;
    MR_Box mercury__version_hash_table__V_6;

    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, &mercury__version_hash_table__V_6);
    }
    if (mercury__version_hash_table__succeeded)
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_6;
    else
      {
        {
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_9, (MR_String) "version_hash_table.lookup: key not found");
        }
      }
    return mercury__version_hash_table__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__version_hash_table__delete_3_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
  MR_Box mercury__version_hash_table__K_4,
  MR_Word mercury__version_hash_table__HT_5,
  MR_Word * mercury__version_hash_table__HeadVar__3_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    {
      *mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__delete_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4);
    }
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__delete_2_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_17,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_18,
  MR_Word mercury__version_hash_table__HT0_4,
  MR_Box mercury__version_hash_table__K_5)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HT_6;
    MR_Word mercury__version_hash_table__TypeCtorInfo_19_19;
    MR_Word mercury__version_hash_table__TypeInfo_20_20;
    MR_Integer mercury__version_hash_table__H_7;
    MR_Integer mercury__version_hash_table__NumOccupants0_8;
    MR_Integer mercury__version_hash_table__MaxOccupants_9;
    MR_Word mercury__version_hash_table__HashPred_10;
    MR_Box mercury__version_hash_table__Buckets0_11;
    MR_Word mercury__version_hash_table__AL0_12;
    MR_Word mercury__version_hash_table__HashPred0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__HashPred_25;
    MR_Integer mercury__version_hash_table__V_26_26;
    MR_Integer mercury__version_hash_table__Hash_42;
    MR_Integer mercury__version_hash_table__V_43_43;
    MR_Integer mercury__version_hash_table__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
    MR_Box mercury__version_hash_table__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
    MR_Word mercury__version_hash_table__TypeInfo_for_K_52;
    MR_Box mercury__version_hash_table__V_32_32;
    MR_Integer mercury__version_hash_table__V_33_33;
    MR_Integer mercury__version_hash_table__V_34_34;
    MR_Word mercury__version_hash_table__V_35_35;
    MR_Word mercury__version_hash_table__TypeInfo_12_53;
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__version_hash_table__conv1_Hash_42;
    MR_Box mercury__version_hash_table__conv2_AL0_12;
    MR_Word mercury__version_hash_table__AL_13;

{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_24 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_25  = HashPred;
}
    mercury__version_hash_table__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
    mercury__version_hash_table__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
    mercury__version_hash_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
    mercury__version_hash_table__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_32_32 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_26_26  = N;
}
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_25, (MR_Integer) 1)));
    {
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_25), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_42);
    }
    mercury__version_hash_table__Hash_42 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_42);
    mercury__version_hash_table__V_43_43 = (mercury__version_hash_table__V_26_26 - (MR_Integer) 1);
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_42 & mercury__version_hash_table__V_43_43);
    mercury__version_hash_table__NumOccupants0_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
    mercury__version_hash_table__MaxOccupants_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
    mercury__version_hash_table__HashPred_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
    mercury__version_hash_table__Buckets0_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
    mercury__version_hash_table__TypeCtorInfo_19_19 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    {
      mercury__version_hash_table__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_17));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_18));
    }
    {
      mercury__version_hash_table__conv2_AL0_12 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_20_20, (MR_Box) mercury__version_hash_table__Buckets0_11, mercury__version_hash_table__H_7);
    }
    mercury__version_hash_table__AL0_12 = ((MR_Word) mercury__version_hash_table__conv2_AL0_12);
    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__AL0_12, mercury__version_hash_table__K_5, &mercury__version_hash_table__AL_13);
    }
    if (mercury__version_hash_table__succeeded)
      {
        MR_Box mercury__version_hash_table__Buckets_14;
        MR_Integer mercury__version_hash_table__NumOccupants_15;
        MR_Box mercury__version_hash_table__conv3_Buckets_14;

        {
          mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_20_20, mercury__version_hash_table__H_7, ((MR_Box) (mercury__version_hash_table__AL_13)), (MR_Box) mercury__version_hash_table__Buckets0_11, &mercury__version_hash_table__conv3_Buckets_14);
        }
        mercury__version_hash_table__Buckets_14 = (MR_Box) mercury__version_hash_table__conv3_Buckets_14;
        mercury__version_hash_table__NumOccupants_15 = (mercury__version_hash_table__NumOccupants0_8 - (MR_Integer) 1);
        {
          mercury__version_hash_table__HT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_15));
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_9));
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_10));
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_14));
        }
      }
    else
      mercury__version_hash_table__HT_6 = mercury__version_hash_table__HT0_4;
    return mercury__version_hash_table__HT_6;
  }
}

void MR_CALL 
mercury__version_hash_table__det_update_4_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
  MR_Box mercury__version_hash_table__K_5,
  MR_Box mercury__version_hash_table__V_6,
  MR_Word mercury__version_hash_table__HT_7,
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    {
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_update_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__det_update_3_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_24,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_25,
  MR_Word mercury__version_hash_table__HT0_5,
  MR_Box mercury__version_hash_table__K_6,
  MR_Box mercury__version_hash_table__V_7)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HT_8;
    MR_Word mercury__version_hash_table__TypeCtorInfo_26_26;
    MR_Word mercury__version_hash_table__TypeInfo_27_27;
    MR_Integer mercury__version_hash_table__H_9;
    MR_Box mercury__version_hash_table__Buckets0_10;
    MR_Word mercury__version_hash_table__AL0_11;
    MR_Word mercury__version_hash_table__AL_13;
    MR_Box mercury__version_hash_table__Buckets_14;
    MR_Word mercury__version_hash_table__HashPred0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__HashPred_33;
    MR_Integer mercury__version_hash_table__V_34_34;
    MR_Integer mercury__version_hash_table__Hash_50;
    MR_Integer mercury__version_hash_table__V_51_51;
    MR_Integer mercury__version_hash_table__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
    MR_Box mercury__version_hash_table__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
    MR_Word mercury__version_hash_table__TypeInfo_for_K_60;
    MR_Box mercury__version_hash_table__V_40_40;
    MR_Integer mercury__version_hash_table__V_41_41;
    MR_Integer mercury__version_hash_table__V_42_42;
    MR_Word mercury__version_hash_table__V_43_43;
    MR_Word mercury__version_hash_table__TypeInfo_12_61;
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__version_hash_table__conv1_Hash_50;
    MR_Integer mercury__version_hash_table__V_17_17;
    MR_Integer mercury__version_hash_table__V_18_18;
    MR_Word mercury__version_hash_table__V_19_19;
    MR_Box mercury__version_hash_table__conv2_AL0_11;
    MR_Word mercury__version_hash_table__AL1_12;
    MR_Box mercury__version_hash_table__conv3_Buckets_14;
    MR_Integer mercury__version_hash_table__V_20_20;
    MR_Integer mercury__version_hash_table__V_21_21;
    MR_Word mercury__version_hash_table__V_22_22;
    MR_Box mercury__version_hash_table__V_23_23;

{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_32 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_33  = HashPred;
}
    mercury__version_hash_table__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
    mercury__version_hash_table__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
    mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
    mercury__version_hash_table__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_40_40 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_34_34  = N;
}
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_33, (MR_Integer) 1)));
    {
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_33), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_50);
    }
    mercury__version_hash_table__Hash_50 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_50);
    mercury__version_hash_table__V_51_51 = (mercury__version_hash_table__V_34_34 - (MR_Integer) 1);
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_50 & mercury__version_hash_table__V_51_51);
    mercury__version_hash_table__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
    mercury__version_hash_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
    mercury__version_hash_table__Buckets0_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
    mercury__version_hash_table__TypeCtorInfo_26_26 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    {
      mercury__version_hash_table__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_26_26));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_24));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_25));
    }
    {
      mercury__version_hash_table__conv2_AL0_11 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_27_27, (MR_Box) mercury__version_hash_table__Buckets0_10, mercury__version_hash_table__H_9);
    }
    mercury__version_hash_table__AL0_11 = ((MR_Word) mercury__version_hash_table__conv2_AL0_11);
    {
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_24, mercury__version_hash_table__AL0_11, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_12);
    }
    if (mercury__version_hash_table__succeeded)
      mercury__version_hash_table__AL_13 = mercury__version_hash_table__AL1_12;
    else
      {
        MR_Word mercury__version_hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
        MR_Word mercury__version_hash_table__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_update: key not found"));

        {
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_28_28, ((MR_Box) (mercury__version_hash_table__V_15_15)));
        }
      }
    {
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_27_27, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_13)), (MR_Box) mercury__version_hash_table__Buckets0_10, &mercury__version_hash_table__conv3_Buckets_14);
    }
    mercury__version_hash_table__Buckets_14 = (MR_Box) mercury__version_hash_table__conv3_Buckets_14;
    mercury__version_hash_table__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
    mercury__version_hash_table__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
    mercury__version_hash_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
    mercury__version_hash_table__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
    {
      mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__V_20_20));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__V_21_21));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__V_22_22));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_14));
    }
    return mercury__version_hash_table__HT_8;
  }
}

void MR_CALL 
mercury__version_hash_table__det_insert_4_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
  MR_Box mercury__version_hash_table__K_5,
  MR_Box mercury__version_hash_table__V_6,
  MR_Word mercury__version_hash_table__HT_7,
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    {
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_insert_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__det_insert_3_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_27,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_28,
  MR_Word mercury__version_hash_table__HT0_5,
  MR_Box mercury__version_hash_table__K_6,
  MR_Box mercury__version_hash_table__V_7)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HT_8;
    MR_Word mercury__version_hash_table__TypeCtorInfo_29_29;
    MR_Word mercury__version_hash_table__TypeInfo_30_30;
    MR_Integer mercury__version_hash_table__H_9;
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
    MR_Word mercury__version_hash_table__HashPred_12;
    MR_Box mercury__version_hash_table__Buckets0_13;
    MR_Word mercury__version_hash_table__AL0_14;
    MR_Word mercury__version_hash_table__AL_15;
    MR_Box mercury__version_hash_table__Buckets_22;
    MR_Integer mercury__version_hash_table__NumOccupants_23;
    MR_Word mercury__version_hash_table__HashPred0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__HashPred_48;
    MR_Integer mercury__version_hash_table__V_49_49;
    MR_Integer mercury__version_hash_table__Hash_65;
    MR_Integer mercury__version_hash_table__V_66_66;
    MR_Integer mercury__version_hash_table__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
    MR_Box mercury__version_hash_table__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
    MR_Word mercury__version_hash_table__TypeInfo_for_K_75;
    MR_Box mercury__version_hash_table__V_55_55;
    MR_Integer mercury__version_hash_table__V_56_56;
    MR_Integer mercury__version_hash_table__V_57_57;
    MR_Word mercury__version_hash_table__V_58_58;
    MR_Word mercury__version_hash_table__TypeInfo_12_76;
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__version_hash_table__conv1_Hash_65;
    MR_Box mercury__version_hash_table__conv2_AL0_14;
    MR_Box mercury__version_hash_table__conv3_Buckets_22;

{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_47 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_48  = HashPred;
}
    mercury__version_hash_table__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
    mercury__version_hash_table__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
    mercury__version_hash_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
    mercury__version_hash_table__V_55_55 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_55_55 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_49_49  = N;
}
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_48, (MR_Integer) 1)));
    {
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_48), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_65);
    }
    mercury__version_hash_table__Hash_65 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_65);
    mercury__version_hash_table__V_66_66 = (mercury__version_hash_table__V_49_49 - (MR_Integer) 1);
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_65 & mercury__version_hash_table__V_66_66);
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
    mercury__version_hash_table__TypeCtorInfo_29_29 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    {
      mercury__version_hash_table__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_29_29));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_27));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_28));
    }
    {
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_30_30, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
    switch (MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__version_hash_table__V_32_32;

          {
            mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_32_32);
          }
          if (mercury__version_hash_table__succeeded)
            {
              MR_Word mercury__version_hash_table__TypeCtorInfo_31_35 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
              MR_Word mercury__version_hash_table__V_33_33 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

              {
                mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_35, ((MR_Box) (mercury__version_hash_table__V_33_33)));
              }
            }
          else
            {
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__version_hash_table__V_21_21;

          {
            mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_21_21);
          }
          if (mercury__version_hash_table__succeeded)
            {
              MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
              MR_Word mercury__version_hash_table__V_24_24 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

              {
                mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_24_24)));
              }
            }
          else
            {
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
            }
        }
        break;
    }
    {
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_30_30, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_22);
    }
    mercury__version_hash_table__Buckets_22 = (MR_Box) mercury__version_hash_table__conv3_Buckets_22;
    mercury__version_hash_table__NumOccupants_23 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_23 > mercury__version_hash_table__MaxOccupants_11);
    if (mercury__version_hash_table__succeeded)
      {
        mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__NumOccupants_23, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_22);
      }
    else
      {
        mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_23));
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_22));
      }
    return mercury__version_hash_table__HT_8;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
  MR_Box mercury__version_hash_table__K_5,
  MR_Word mercury__version_hash_table__HT_6,
  MR_Box mercury__version_hash_table__V_7)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HeadVar__4_4;

    {
      mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_6, mercury__version_hash_table__K_5, mercury__version_hash_table__V_7);
    }
    return mercury__version_hash_table__HeadVar__4_4;
  }
}

void MR_CALL 
mercury__version_hash_table__set_4_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
  MR_Box mercury__version_hash_table__K_5,
  MR_Box mercury__version_hash_table__V_6,
  MR_Word mercury__version_hash_table__HT_7,
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    {
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__set_3_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_26,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_27,
  MR_Word mercury__version_hash_table__HT0_5,
  MR_Box mercury__version_hash_table__K_6,
  MR_Box mercury__version_hash_table__V_7)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HT_8;
    MR_Word mercury__version_hash_table__TypeCtorInfo_28_28;
    MR_Word mercury__version_hash_table__TypeInfo_29_29;
    MR_Integer mercury__version_hash_table__H_9;
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
    MR_Word mercury__version_hash_table__HashPred_12;
    MR_Box mercury__version_hash_table__Buckets0_13;
    MR_Word mercury__version_hash_table__AL0_14;
    MR_Word mercury__version_hash_table__AL_15;
    MR_Word mercury__version_hash_table__MayExpand_16;
    MR_Box mercury__version_hash_table__Buckets_23;
    MR_Word mercury__version_hash_table__HashPred0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__HashPred_34;
    MR_Integer mercury__version_hash_table__V_35_35;
    MR_Integer mercury__version_hash_table__Hash_51;
    MR_Integer mercury__version_hash_table__V_52_52;
    MR_Integer mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
    MR_Box mercury__version_hash_table__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
    MR_Word mercury__version_hash_table__TypeInfo_for_K_61;
    MR_Box mercury__version_hash_table__V_41_41;
    MR_Integer mercury__version_hash_table__V_42_42;
    MR_Integer mercury__version_hash_table__V_43_43;
    MR_Word mercury__version_hash_table__V_44_44;
    MR_Word mercury__version_hash_table__TypeInfo_12_62;
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__version_hash_table__conv1_Hash_51;
    MR_Box mercury__version_hash_table__conv2_AL0_14;
    MR_Box mercury__version_hash_table__conv3_Buckets_23;

{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_33 ;
		{

    HashPred = HashPred0;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_34  = HashPred;
}
    mercury__version_hash_table__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
    mercury__version_hash_table__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
    mercury__version_hash_table__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
    mercury__version_hash_table__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_41_41 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_35_35  = N;
}
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_34, (MR_Integer) 1)));
    {
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_34), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_51);
    }
    mercury__version_hash_table__Hash_51 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_51);
    mercury__version_hash_table__V_52_52 = (mercury__version_hash_table__V_35_35 - (MR_Integer) 1);
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_51 & mercury__version_hash_table__V_52_52);
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
    mercury__version_hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    {
      mercury__version_hash_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_28_28));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_26));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_27));
    }
    {
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_29_29, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
    switch (MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
            MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
          }
          mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__version_hash_table__K0_17 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 0));
          MR_Box mercury__version_hash_table___V0_18 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 1));

          {
            mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__K0_17, mercury__version_hash_table__K_6);
          }
          if (mercury__version_hash_table__succeeded)
            {
              {
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K0_17;
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
              }
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
            }
          else
            {
              {
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
              }
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__version_hash_table__AL1_22;

          {
            mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_22);
          }
          if (mercury__version_hash_table__succeeded)
            {
              mercury__version_hash_table__AL_15 = mercury__version_hash_table__AL1_22;
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
            }
          else
            {
              {
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
              }
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
            }
        }
        break;
    }
    {
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_29_29, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_23);
    }
    mercury__version_hash_table__Buckets_23 = (MR_Box) mercury__version_hash_table__conv3_Buckets_23;
    switch (mercury__version_hash_table__MayExpand_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants0_10));
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mercury__version_hash_table__NumOccupants_24 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);

          mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_24 > mercury__version_hash_table__MaxOccupants_11);
          if (mercury__version_hash_table__succeeded)
            {
              mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__TypeInfo_for_V_27, mercury__version_hash_table__NumOccupants_24, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_23);
            }
          else
            {
              mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_24));
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
            }
        }
        break;
    }
    return mercury__version_hash_table__HT_8;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__copy_1_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
  MR_Word mercury__version_hash_table__HT0_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HT_4;
    MR_Word mercury__version_hash_table__TypeCtorInfo_12_12 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__version_hash_table__TypeInfo_13_13;
    MR_Integer mercury__version_hash_table__NumOccupants_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__MaxOccupants_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 1)));
    MR_Word mercury__version_hash_table__HashPred_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 2)));
    MR_Box mercury__version_hash_table__Buckets0_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 3)));
    MR_Box mercury__version_hash_table__Buckets_9;
    MR_Box mercury__version_hash_table__conv0_Buckets_9;

    {
      mercury__version_hash_table__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
    }
    {
      mercury__version_hash_table__conv0_Buckets_9 = mercury__version_array__copy_1_f_0(mercury__version_hash_table__TypeInfo_13_13, (MR_Box) mercury__version_hash_table__Buckets0_8);
    }
    mercury__version_hash_table__Buckets_9 = (MR_Box) mercury__version_hash_table__conv0_Buckets_9;
    {
      mercury__version_hash_table__HT_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_5));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_6));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_7));
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_9));
    }
    return mercury__version_hash_table__HT_4;
  }
}

MR_Integer MR_CALL 
mercury__version_hash_table__num_occupants_1_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
  MR_Word mercury__version_hash_table__HT_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Integer mercury__version_hash_table__NumOccupants_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
    MR_Word mercury__version_hash_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
    MR_Box mercury__version_hash_table__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));

    return mercury__version_hash_table__NumOccupants_4;
  }
}

MR_Integer MR_CALL 
mercury__version_hash_table__num_buckets_1_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_9,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_10,
  MR_Word mercury__version_hash_table__HT_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Integer mercury__version_hash_table__NumBuckets_4;
    MR_Box mercury__version_hash_table__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
    MR_Integer mercury__version_hash_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
    MR_Integer mercury__version_hash_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
    MR_Word mercury__version_hash_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
    MR_Word mercury__version_hash_table__TypeInfo_12_13;

{
#define MR_PROC_LABEL mercury__version_hash_table__num_buckets_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_5_5 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__NumBuckets_4  = N;
}
    return mercury__version_hash_table__NumBuckets_4;
  }
}

void MR_CALL 
mercury__version_hash_table__generic_hash_2_p_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_T_38,
  MR_Box mercury__version_hash_table__T_3,
  MR_Integer * mercury__version_hash_table__H_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__version_hash_table__succeeded;
        MR_Integer mercury__version_hash_table__Int_5;
        MR_Word mercury__version_hash_table__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__version_hash_table__conv0_Int_5;

        {
          mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_39_39, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv0_Int_5);
        }
        if (mercury__version_hash_table__succeeded)
          {
            mercury__version_hash_table__Int_5 = ((MR_Integer) mercury__version_hash_table__conv0_Int_5);
            mercury__version_hash_table__succeeded = MR_TRUE;
          }
        if (mercury__version_hash_table__succeeded)
          {
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__Int_5 ;
		{

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;


		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
}
          }
        else
          {
            MR_String mercury__version_hash_table__String_6;
            MR_Word mercury__version_hash_table__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Box mercury__version_hash_table__conv1_String_6;

            {
              mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_40_40, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv1_String_6);
            }
            if (mercury__version_hash_table__succeeded)
              {
                mercury__version_hash_table__String_6 = ((MR_String) mercury__version_hash_table__conv1_String_6);
                mercury__version_hash_table__succeeded = MR_TRUE;
              }
            if (mercury__version_hash_table__succeeded)
              {
                *mercury__version_hash_table__H_4 = mercury__string__hash_1_f_0(mercury__version_hash_table__String_6);
              }
            else
              {
                MR_Float mercury__version_hash_table__Float_7;
                MR_Word mercury__version_hash_table__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                MR_Box mercury__version_hash_table__conv2_Float_7;

                {
                  mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_41_41, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv2_Float_7);
                }
                if (mercury__version_hash_table__succeeded)
                  {
                    mercury__version_hash_table__Float_7 = MR_unbox_float(mercury__version_hash_table__conv2_Float_7);
                    mercury__version_hash_table__succeeded = MR_TRUE;
                  }
                if (mercury__version_hash_table__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__version_hash_table__Float_7 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
}
                  }
                else
                  {
                    MR_Char mercury__version_hash_table__Char_8;
                    MR_Word mercury__version_hash_table__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                    MR_Box mercury__version_hash_table__conv3_Char_8;

                    {
                      mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_42_42, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv3_Char_8);
                    }
                    if (mercury__version_hash_table__succeeded)
                      {
                        mercury__version_hash_table__Char_8 = ((MR_Char) (MR_Word) mercury__version_hash_table__conv3_Char_8);
                        mercury__version_hash_table__succeeded = MR_TRUE;
                      }
                    if (mercury__version_hash_table__succeeded)
                      {
                        MR_Integer mercury__version_hash_table__V_63_63;

{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__version_hash_table__Char_8 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_63_63  = Int;
}
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_63_63 ;
		{

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;


		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
}
                      }
                    else
                      {
                        MR_Word mercury__version_hash_table__Univ_9;
                        MR_Word mercury__version_hash_table__TypeCtorInfo_43_43 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
                        MR_Box mercury__version_hash_table__conv4_Univ_9;

                        {
                          mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_43_43, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv4_Univ_9);
                        }
                        if (mercury__version_hash_table__succeeded)
                          {
                            mercury__version_hash_table__Univ_9 = ((MR_Word) mercury__version_hash_table__conv4_Univ_9);
                            mercury__version_hash_table__succeeded = MR_TRUE;
                          }
                        if (mercury__version_hash_table__succeeded)
                          {
                            MR_Word mercury__version_hash_table__TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 0)));
                            MR_Box mercury__version_hash_table__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 1));

                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38 = mercury__version_hash_table__TypeInfo_44_44;
                              MR_Box mercury__version_hash_table__T__tmp_copy_3 = mercury__version_hash_table__V_22_22;

                              mercury__version_hash_table__T_3 = mercury__version_hash_table__T__tmp_copy_3;
                              mercury__version_hash_table__TypeInfo_for_T_38 = mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38;
                            }
                            continue;
                          }
                        else
                          {
                            MR_Word mercury__version_hash_table__TypeInfo_45_45;
                            MR_ArrayPtr mercury__version_hash_table__Array_10;
                            MR_ArrayPtr mercury__version_hash_table__conv5_Array_10;

                            {
                              mercury__version_hash_table__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__version_hash_table__TypeInfo_for_T_38, &mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv5_Array_10);
                            }
                            if (mercury__version_hash_table__succeeded)
                              {
                                mercury__version_hash_table__Array_10 = (MR_ArrayPtr) mercury__version_hash_table__conv5_Array_10;
                                mercury__version_hash_table__succeeded = MR_TRUE;
                              }
                            if (mercury__version_hash_table__succeeded)
                              {
                                {
                                  *mercury__version_hash_table__H_4 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__Array_10, (MR_Integer) 0);
                                }
                              }
                            else
                              {
                                MR_String mercury__version_hash_table__FunctorName_15;
                                MR_Integer mercury__version_hash_table__Arity_16;
                                MR_Word mercury__version_hash_table__Args_17;
                                MR_Integer mercury__version_hash_table__H0_18;
                                MR_Integer mercury__version_hash_table__H1_19;
                                MR_Integer mercury__version_hash_table__V_73_73;
                                MR_Integer mercury__version_hash_table__V_74_74;
                                MR_Integer mercury__version_hash_table__V_75_75;
                                MR_Integer mercury__version_hash_table__V_76_76;

                                {
                                  mercury__deconstruct__deconstruct_5_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__T_3, (MR_Integer) 1, &mercury__version_hash_table__FunctorName_15, &mercury__version_hash_table__Arity_16, &mercury__version_hash_table__Args_17);
                                }
                                {
                                  mercury__version_hash_table__H0_18 = mercury__string__hash_1_f_0(mercury__version_hash_table__FunctorName_15);
                                }
                                mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__H0_18 << mercury__version_hash_table__Arity_16);
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_76_76  = Bits;
}
                                mercury__version_hash_table__V_75_75 = (mercury__version_hash_table__V_76_76 - mercury__version_hash_table__Arity_16);
                                mercury__version_hash_table__V_74_74 = (mercury__version_hash_table__H0_18 >> mercury__version_hash_table__V_75_75);
                                mercury__version_hash_table__H1_19 = (mercury__version_hash_table__V_73_73 ^ mercury__version_hash_table__V_74_74);
                                {
                                  mercury__version_hash_table__foldl__ho13_4_p_in__list_0(mercury__version_hash_table__Args_17, mercury__version_hash_table__H1_19, mercury__version_hash_table__H_4);
                                }
                              }
                          }
                      }
                  }
              }
          }
      }
      break;
    }
}

void MR_CALL 
mercury__version_hash_table__float_hash_2_p_0(
  MR_Float mercury__version_hash_table__F_3,
  MR_Integer * mercury__version_hash_table__HeadVar__2_2)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

{
#define MR_PROC_LABEL mercury__version_hash_table__float_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__version_hash_table__F_3 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__HeadVar__2_2  = H;
}
  }
}

void MR_CALL 
mercury__version_hash_table__char_hash_2_p_0(
  MR_Char mercury__version_hash_table__C_3,
  MR_Integer * mercury__version_hash_table__H_4)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Integer mercury__version_hash_table__V_5_5;

{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__version_hash_table__C_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_5_5  = Int;
}
{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_5_5 ;
		{

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;


		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
}
  }
}

void MR_CALL 
mercury__version_hash_table__string_hash_2_p_0(
  MR_String mercury__version_hash_table__S_3,
  MR_Integer * mercury__version_hash_table__HeadVar__2_2)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

    {
      *mercury__version_hash_table__HeadVar__2_2 = mercury__string__hash_1_f_0(mercury__version_hash_table__S_3);
    }
  }
}

void MR_CALL 
mercury__version_hash_table__int_hash_2_p_0(
  MR_Integer mercury__version_hash_table__N_1,
  MR_Integer * mercury__version_hash_table__H_2)
{
  {
    MR_bool mercury__version_hash_table__succeeded;

{
#define MR_PROC_LABEL mercury__version_hash_table__int_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__N_1 ;
		{

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;


		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_2  = H;
}
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__unsafe_init_default_1_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
  MR_Word mercury__version_hash_table__HashPred_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HeadVar__2_2;

    {
      mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 0);
    }
    return mercury__version_hash_table__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__init_default_1_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
  MR_Word mercury__version_hash_table__HashPred_3)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HeadVar__2_2;

    {
      mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
    return mercury__version_hash_table__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__unsafe_init_3_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_9,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_10,
  MR_Word mercury__version_hash_table__HashPred_5,
  MR_Integer mercury__version_hash_table__N_6,
  MR_Float mercury__version_hash_table__MaxOccupancy_7)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HeadVar__4_4;

    {
      mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 0);
    }
    return mercury__version_hash_table__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__version_hash_table__init_3_f_0(
  MR_Word mercury__version_hash_table__TypeInfo_for_K_9,
  MR_Word mercury__version_hash_table__TypeInfo_for_V_10,
  MR_Word mercury__version_hash_table__HashPred_5,
  MR_Integer mercury__version_hash_table__N_6,
  MR_Float mercury__version_hash_table__MaxOccupancy_7)
{
  {
    MR_bool mercury__version_hash_table__succeeded;
    MR_Word mercury__version_hash_table__HeadVar__4_4;

    {
      mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 1);
    }
    return mercury__version_hash_table__HeadVar__4_4;
  }
}

void mercury__version_hash_table__init(void)
{
}

void mercury__version_hash_table__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_buckets_2);
	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_pred_1);
	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2);
	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2);
}

void mercury__version_hash_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module version_hash_table. */
